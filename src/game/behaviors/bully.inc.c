// bully.inc.c

#include "include/seq_ids.h"

static struct ObjectHitbox sSmallBullyHitbox = {
    /* interactType:      */ INTERACT_BULLY,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 73,
    /* height:            */ 403,
    /* hurtboxRadius:     */ 350,
    /* hurtboxHeight:     */ 400,
};

static struct ObjectHitbox sBigBullyHitbox = {
    /* interactType:      */ INTERACT_BULLY,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 0,
    /* numLootCoins:      */ 0,
    /* radius:            */ 115,
    /* height:            */ 235,
    /* hurtboxRadius:     */ 105,
    /* hurtboxHeight:     */ 225,
};

#define BULLY_ACT_BOSS 10
#define BULLY_ACT_FLY 11

u8 bossaction;

static s16 obj_turn_pitch_toward_mario_e(f32 targetOffsetY, s16 turnAmount) {
    s16 targetPitch;

    o->oPosY -= targetOffsetY;
    targetPitch = obj_turn_toward_object(o, gMarioObject, O_MOVE_ANGLE_PITCH_INDEX, turnAmount);
    o->oPosY += targetOffsetY;

    return targetPitch;
}

void bhv_small_bully_init(void) {
    vec3f_copy(&o->oHomeVec, &o->oPosVec);
    o->oBehParams2ndByte = BULLY_BP_SIZE_SMALL;
    o->oGravity = 4.0f;
    o->oFriction = 0.91f;
    o->oBuoyancy = 1.3f;

    obj_set_hitbox(o, &sSmallBullyHitbox);
}

void bhv_big_bully_init(void) {
    vec3f_copy(&o->oHomeVec, &o->oPosVec);
    o->oPosY += 2000.0f;
    o->oBehParams2ndByte = BULLY_BP_SIZE_BIG;
    o->oGravity = 5.0f;
    o->oFriction = 0.93f;
    o->oBuoyancy = 1.3f;

    obj_set_hitbox(o, &sBigBullyHitbox);

    o->oAction = BULLY_ACT_BOSS;
    bossaction = 2;
}

void bully_check_mario_collision(void) {
    if (o->oAction != OBJ_ACT_LAVA_DEATH && o->oAction != OBJ_ACT_DEATH_PLANE_DEATH && o->oInteractStatus & INT_STATUS_INTERACTED) {
        if (o->oBehParams2ndByte == BULLY_BP_SIZE_SMALL) {
            cur_obj_play_sound_2(SOUND_OBJ2_SMALL_BULLY_ATTACKED);
        } else {
            cur_obj_play_sound_2(SOUND_OBJ2_LARGE_BULLY_ATTACKED);
        }

        o->oInteractStatus &= ~INT_STATUS_INTERACTED;
        o->oAction = BULLY_ACT_KNOCKBACK;

        o->oForwardVel = 2500.0f / o->hitboxRadius;
        o->oMoveAngleYaw = o->oAngleToMario+0x8000;
        o->oFlags &= ~OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
        o->oBullyMarioCollisionAngle = o->oMoveAngleYaw;
    }
}

void bully_act_chase_mario(void) {
    f32 homeX = o->oHomeX;
    f32 posY = o->oPosY;
    f32 homeZ = o->oHomeZ;

    if (o->oTimer == 0) {
        o->header.gfx.sharedChild = gLoadedGraphNodes[MODEL_COCKTUS2];
        cur_obj_init_animation(0);
    }
    if (o->oTimer == 15) {
        cur_obj_init_animation(1);
    }
    if (o->oTimer < 10) {
        o->oForwardVel = 3.0f;
        obj_turn_toward_object(o, gMarioObject, O_MOVE_ANGLE_YAW_INDEX, 0x1000);
    } else if (o->oBehParams2ndByte == BULLY_BP_SIZE_SMALL) {
        o->oForwardVel = 20.0f;
        if (o->oTimer > 30) {
            o->oTimer = 0;
        }
    } else {
        o->oForwardVel = 30.0f;
        if (o->oTimer > 35) {
            o->oTimer = 0;
        }
    }

    if ((!is_point_within_radius_of_mario(homeX, posY, homeZ, 1000))&&((o->oBehParams2ndByte != BULLY_BP_SIZE_SMALL))) {
        o->oAction = BULLY_ACT_PATROL;
    }
}

void bully_act_knockback(void) {

    if (bossaction == 4) {
        o->oPosX = o->oHomeX;
        o->oPosZ = o->oHomeZ;
        }

    if (o->oForwardVel < 10.0f && (s32) o->oVelY == 0) {
        o->oForwardVel = 1.0f;
        o->oBullyKBTimerAndMinionKOCounter++;
        o->oFlags |= OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
        o->oMoveAngleYaw = o->oFaceAngleYaw;
        obj_turn_toward_object(o, gMarioObject, O_MOVE_ANGLE_YAW_INDEX, 1280);
    } else {
        o->header.gfx.animInfo.animFrame = 0;
    }

    if (o->oBullyKBTimerAndMinionKOCounter == 18) {
        o->oAction = BULLY_ACT_CHASE_MARIO;
        if (o->oBehParams2ndByte == BULLY_BP_SIZE_BIG ) {
            o->oAction = BULLY_ACT_BOSS;
            if (bossaction == 4) {
                o->oMoveAngleYaw = 0x1000;
                }
            }
        o->oBullyKBTimerAndMinionKOCounter = 0;
    }

}

void bully_act_back_up(void) {
    if (o->oTimer == 0) {
        o->oFlags &= ~OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
        o->oMoveAngleYaw += 0x8000;
    }

    o->oForwardVel = 5.0f;

    //! bully_backup_check() happens after this function, and has the potential to reset
    //  the bully's action to BULLY_ACT_BACK_UP. Because the back up action is only
    //  set to end when the timer EQUALS 15, if this happens on that frame, the bully
    //  will be stuck in BULLY_ACT_BACK_UP forever until Mario hits it or its death
    //  conditions are activated. However because its angle is set to its facing angle,
    //  it will walk forward instead of backing up.

    if (o->oTimer == 15) {
        o->oMoveAngleYaw = o->oFaceAngleYaw;
        o->oFlags |= OBJ_FLAG_SET_FACE_YAW_TO_MOVE_YAW;
        o->oAction = BULLY_ACT_PATROL;
    }
}

void bully_backup_check(s16 collisionFlags) {
    if (!(collisionFlags & OBJ_COL_FLAG_NO_Y_VEL) && o->oAction != BULLY_ACT_KNOCKBACK) {
        o->oPosX = o->oBullyPrevX;
        o->oPosZ = o->oBullyPrevZ;
        o->oAction = BULLY_ACT_BACK_UP;
    }
}

void bully_play_stomping_sound(void) {
    s16 animFrame = o->header.gfx.animInfo.animFrame;

    switch (o->oAction) {
        case BULLY_ACT_PATROL:
            if (animFrame == 0 || animFrame == 12) {
                if (o->oBehParams2ndByte == BULLY_BP_SIZE_SMALL) {
                    cur_obj_play_sound_2(SOUND_OBJ_BULLY_WALK_SMALL);
                } else {
                    cur_obj_play_sound_2(SOUND_OBJ_BULLY_WALK_LARGE);
                }
            }
            break;

        case BULLY_ACT_CHASE_MARIO:
        case BULLY_ACT_BACK_UP:
            if (animFrame == 0 || animFrame == 5) {
                if (o->oBehParams2ndByte == BULLY_BP_SIZE_SMALL) {
                    cur_obj_play_sound_2(SOUND_OBJ_BULLY_WALK_SMALL);
                } else {
                    cur_obj_play_sound_2(SOUND_OBJ_BULLY_WALK_LARGE);
                }
            }
            break;
    }
}

void bully_step(void) {
    s16 collisionFlags = object_step();
    o->oMoveFlags = collisionFlags;
    bully_backup_check(collisionFlags);

    bully_play_stomping_sound();
    obj_check_floor_death(collisionFlags, sObjFloor);

    if (o->oBullySubtype & BULLY_STYPE_CHILL) {
        if (o->oPosY < 1030.0f) {
            o->oAction = OBJ_ACT_LAVA_DEATH;
        }
    }
}

void bully_spawn_coin(void) {
    struct Object *coin = spawn_object(o, MODEL_YELLOW_COIN, bhvMovingYellowCoin);

    cur_obj_play_sound_2(SOUND_GENERAL_COIN_SPURT);

    coin->oForwardVel = 10.0f;
    coin->oVelY = 100.0f;
    coin->oPosY = o->oPosY + 310.0f;
    coin->oMoveAngleYaw = (f32)(o->oBullyMarioCollisionAngle + 0x8000) + random_float() * 1024.0f;
}

void bully_act_level_death(void) {
    if ((o->oBehParams2ndByte==BULLY_BP_SIZE_BIG)&&(gMarioState->BossHealth > 0)&&(bossaction != 5)) {

        if (save_file_get_badge_equip() & (1 << BADGE_SLAYER)) {
            gMarioState->BossHealth -= 16;
        } else {
            gMarioState->BossHealth -= 8;
        }
        bossaction = 0;
        o->oPosY += 100.0f;

        
        if (gMarioState->BossHealth < 1) {
            gMarioState->BossHealth = 0;
            bossaction = 5;
            } else {
                cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB_JUMP);
                o->oAction = BULLY_ACT_FLY;
            }
        return;
        }

    if (obj_lava_death() == TRUE) {
        if (o->oBehParams2ndByte == BULLY_BP_SIZE_SMALL) {
            if (o->oBullySubtype == BULLY_STYPE_MINION) {
                o->parentObj->oBullyKBTimerAndMinionKOCounter++;
            }
            bully_spawn_coin();
        } else {
            spawn_mist_particles();

            if (o->oBullySubtype == BULLY_STYPE_CHILL) {
                spawn_default_star(130.0f, 1600.0f, -4335.0f);
            } else {
                stop_background_music(SEQUENCE_ARGS(4, SEQ_EVENT_BOSS));
                spawn_default_star(o->oHomeX, o->oHomeY, o->oHomeZ);
                //spawn_object_abs_with_rot(o, 0, MODEL_NONE, bhvLllTumblingBridge, 0, 154, -5631, 0, 0,
                                          //0);
            }
        }
    }
}

void bhv_bully_loop(void) {
    s16 collisionFlags;
    struct Object *flame;

    vec3f_copy(&o->oBullyPrevVec, &o->oPosVec);

    //! Because this function runs no matter what, Mario is able to interrupt the bully's
    //  death action by colliding with it. Since the bully hitbox is tall enough to collide
    //  with Mario even when it is under a lava floor, this can get the bully stuck OOB
    //  if there is nothing under the lava floor.
    if (bossaction != 4) {
        bully_check_mario_collision();
    }

    if (o->oBehParams2ndByte==BULLY_BP_SIZE_BIG) {
        //print_text_fmt_int(210, 72, "ACT %d", o->oAction);
        //print_text_fmt_int(210, 92, "ACT2 %d", bossaction);
        //print_text_fmt_int(210, 112, "HP %d", gMarioState->BossHealth);
    }

    switch (o->oAction) {
        case BULLY_ACT_PATROL:
            if (o->oBehParams2ndByte == BULLY_BP_SIZE_BIG ) {
                o->oAction = BULLY_ACT_BOSS;
                }

            o->oForwardVel = 0.0f;
            o->oFaceAngleYaw = 0;
            o->oMoveAngleYaw = 0;

            if (obj_return_home_if_safe(o, o->oHomeX, o->oPosY, o->oHomeZ, 800) == TRUE) {
                o->oAction = BULLY_ACT_CHASE_MARIO;
            }
            break;

        case BULLY_ACT_CHASE_MARIO:

            if (o->oBehParams2ndByte == BULLY_BP_SIZE_BIG ) {
                o->oAction = BULLY_ACT_BOSS;
                }

            bully_act_chase_mario();
            bully_step();
            break;

        case BULLY_ACT_KNOCKBACK:
            bully_act_knockback();
            bully_step();
            break;

        case BULLY_ACT_BACK_UP:
            if (o->oBehParams2ndByte == BULLY_BP_SIZE_BIG ) {
                o->oAction = BULLY_ACT_BOSS;
                }

            bully_act_back_up();
            bully_step();
            break;

        case BULLY_ACT_BOSS:

            if ((gMarioState->pos[1] < o->oHomeY-500.0f)&&(o->oDistanceToMario < 3000.0f)) {
                return;
                }

            if ((bossaction != 2)&&(bossaction != 4)) {
                bully_step();
                }

            switch (bossaction) {
                case 0:
                    bossaction = 1;
                    o->oHealth = (30-gMarioState->BossHealth)/5;
                    o->oPosY += 100.0f;
                    o->oVelY = 80.0f;
                    cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB_JUMP);
                break;
                case 1:
                    o->oForwardVel = 20.0f;
                    o->oPosX += o->oForwardVel * sins(o->oMoveAngleYaw);
                    o->oPosZ += o->oForwardVel * coss(o->oMoveAngleYaw);

                    if (o->oMoveFlags & 1) {
                        cur_obj_play_sound_2(SOUND_OBJ_KING_BOBOMB_POUNDING1_HIGHPRIO);
                        o->oVelY = 80.0f-gMarioState->BossHealth;
                        if (cur_obj_lateral_dist_to_home() < 1000.0f) {
                            o->oMoveAngleYaw = random_u16();
                            }
                            else
                            {
                            o->oMoveAngleYaw = cur_obj_angle_to_home();
                            }
                        o->oFaceAngleYaw = o->oMoveAngleYaw;
                        spawn_object(o, 0xFD, bhvBowserShockWave);
                        o->oHealth --;

                        if (o->oHealth < 1) {
                            bossaction = 2;
                            }
                        }
                break;
                case 2:
                    o->oFaceAngleYaw = o->oMoveAngleYaw;
                    bully_act_chase_mario();
                    bully_step();
                    if (gMarioState->pos[1] < o->oPosY - 100.0f) {
                        o->oForwardVel = 0.0f;
                    }
                break;
                case 3:
                    o->oMoveAngleYaw = cur_obj_angle_to_home();
                    o->oFaceAngleYaw = o->oMoveAngleYaw;
                    o->oForwardVel = 30.0f;
                    if (cur_obj_lateral_dist_to_home() < 25.0f) {
                        bossaction = 4;
                        o->oMoveAngleYaw = 0;
                        }
                break;
                case 4:
                    o->oPosX = o->oHomeX;
                    o->oPosZ = o->oHomeZ;
                    if (o->oTimer*0x10 < 0x1000) {
                        o->oMoveAngleYaw += o->oTimer*0x10;
                        }
                        else
                        {
                        o->oMoveAngleYaw += 0x1000;
                        }

                    o->oFaceAngleYaw = o->oMoveAngleYaw;

                    flame = spawn_object(o, MODEL_BLUE_FLAME, bhvFlameMovingForwardGrowing);
                    flame->oPosY += 100.0f;
                    flame->oFaceAngleYaw = o->oFaceAngleYaw;
                    flame->oMoveAngleYaw = o->oFaceAngleYaw;
                    cur_obj_play_sound_1(SOUND_AIR_BLOW_FIRE);

                    if (o->oTimer > 900) {
                        bossaction = 5;
                        gMarioState->BossHealth = 1;
                        }

                    if ((o->oTimer % 9 == 0)&&(o->oTimer>100)) {
                        flame = spawn_object(o, 0xFB, bhvVoidTriangle);
                        flame->oPosY += 150.0f;
                        flame->oDamageOrCoinValue = 3;
                        flame->oMoveAnglePitch = obj_turn_pitch_toward_mario_e(0.0f, 0);
                        flame->oMoveAngleYaw = o->oAngleToMario;
                        }
                    if ((o->oTimer % 4 == 0)&&(o->oTimer>300)) {
                        flame = spawn_object(o, 0xFB, bhvVoidTriangle);
                        flame->oPosY += 150.0f;
                        flame->oDamageOrCoinValue = 3;
                        flame->oMoveAnglePitch = obj_turn_pitch_toward_mario_e(0.0f, 0);
                        flame->oMoveAngleYaw = random_u16();
                        }
                    if ((o->oTimer % 2 == 0)&&(o->oTimer>700)) {
                        flame = spawn_object(o, 0xFB, bhvVoidTriangle);
                        flame->oPosY += 150.0f;
                        flame->oDamageOrCoinValue = 3;
                        flame->oMoveAnglePitch = random_u16();
                        flame->oMoveAngleYaw = random_u16();
                        }
                break;
                case 5:
                    o->header.gfx.animInfo.animFrame = 0;
                break;
                }
                
                if (o->oAction != OBJ_ACT_LAVA_DEATH) {
                    o->oAction = BULLY_ACT_BOSS;
                }

            break;

        case OBJ_ACT_LAVA_DEATH:
            bully_act_level_death();
            break;

        case BULLY_ACT_FLY:

            o->oFaceAngleYaw = o->oMoveAngleYaw;
            if (((o->oTimer % 8) == 0)&&(o->oTimer < 40)) {
                cur_obj_play_sound_2(SOUND_OBJ_BULLY_EXPLODE_LAVA);
                }

            collisionFlags = object_step();
            o->oMoveFlags = collisionFlags;
            o->oMoveAngleYaw =  cur_obj_angle_to_home();
            o->oForwardVel = 25.0f;
            if (o->oPosY < o->oHomeY-350.0f) {
                o->oVelY = 250.0f;
                }
            if (o->oMoveFlags & 1) {
                o->oAction = BULLY_ACT_BOSS;
                }
            break;

        case OBJ_ACT_DEATH_PLANE_DEATH:
            o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
            break;
            
    }

    set_object_visibility(o, 10000);
}

void big_bully_spawn_minion(s32 x, s32 y, s32 z, s16 yaw) {
    struct Object *bully =
        spawn_object_abs_with_rot(o, 0, MODEL_BULLY, bhvSmallBully, x, y, z, 0, yaw, 0);
    bully->oBullySubtype = BULLY_STYPE_MINION;
    bully->oBehParams2ndByte = BULLY_BP_SIZE_SMALL;
}

void bhv_big_bully_with_minions_init(void) {
    big_bully_spawn_minion(4454, 307, -5426, 0);
    big_bully_spawn_minion(3840, 307, -6041, 0);
    big_bully_spawn_minion(3226, 307, -5426, 0);

    o->header.gfx.node.flags |= GRAPH_RENDER_INVISIBLE;

    cur_obj_become_intangible();

    o->oAction = BULLY_ACT_INACTIVE;
}

void big_bully_spawn_star(void) {
    if (obj_lava_death() == TRUE) {
        spawn_mist_particles();
        spawn_default_star(3700.0f, 600.0f, -5500.0f);
    }
}

void bhv_big_bully_with_minions_loop(void) {
    s16 collisionFlags = 0;
    vec3f_copy(&o->oBullyPrevVec, &o->oPosVec);

    bully_check_mario_collision();

    switch (o->oAction) {
        case BULLY_ACT_PATROL:
            o->oForwardVel = 0.0f;
            o->oFaceAngleYaw = 0;
            o->oMoveAngleYaw = 0;

            if (obj_return_home_if_safe(o, o->oHomeX, o->oPosY, o->oHomeZ, 1000) == TRUE) {
                o->oAction = BULLY_ACT_CHASE_MARIO;
            }
            break;

        case BULLY_ACT_CHASE_MARIO:
            bully_act_chase_mario();
            bully_step();
            break;

        case BULLY_ACT_KNOCKBACK:
            bully_act_knockback();
            bully_step();
            break;

        case BULLY_ACT_BACK_UP:
            bully_act_back_up();
            bully_step();
            break;

        case BULLY_ACT_INACTIVE:
            //! The Big Bully that spawns from killing its 3 minions uses the knockback timer
            //  for counting the number of dead minions. This means that when it activates,
            //  the knockback timer is at 3 instead of 0. So the bully knockback time will
            //  be reduced by 3 frames (16.67%) on the first hit.
            if (o->oBullyKBTimerAndMinionKOCounter == 3) {
                play_puzzle_jingle();

                if (o->oTimer > 90) {
                    o->oAction = BULLY_ACT_ACTIVATE_AND_FALL;
                }
            }
            break;

        case BULLY_ACT_ACTIVATE_AND_FALL:
            collisionFlags = object_step();
            if ((collisionFlags & OBJ_COL_FLAGS_LANDED) == OBJ_COL_FLAGS_LANDED) {
                o->oAction = BULLY_ACT_PATROL;
            }

            if (collisionFlags == OBJ_COL_FLAG_GROUNDED) {
                cur_obj_play_sound_2(SOUND_OBJ_THWOMP);
                set_camera_shake_from_point(SHAKE_POS_SMALL, o->oPosX, o->oPosY, o->oPosZ);
                spawn_mist_particles();
            }

            o->header.gfx.node.flags &= ~GRAPH_RENDER_INVISIBLE;
            cur_obj_become_tangible();
            break;

        case OBJ_ACT_LAVA_DEATH:
            big_bully_spawn_star();
            break;

        case OBJ_ACT_DEATH_PLANE_DEATH:
            o->activeFlags = ACTIVE_FLAG_DEACTIVATED;
            break;
    }
}
