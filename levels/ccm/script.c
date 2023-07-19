#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "actors/group0.h"

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/ccm/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _ccm_segment_7SegmentRomStart, _ccm_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _snow_yay0SegmentRomStart, _snow_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _clouds_skybox_yay0SegmentRomStart, _clouds_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_THI_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(0xFF, fan_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CRABLET, crab_geo), 
	LOAD_MODEL_FROM_GEO(0xFD, bone_plat_geo), //bone_elevator_geo
	LOAD_MODEL_FROM_GEO(0xFC, bone_elevator_geo), 
	LOAD_MODEL_FROM_GEO(0xFB, bone_train_geo), 
	LOAD_MODEL_FROM_GEO(0xFA, bonespin_geo), 
	LOAD_MODEL_FROM_GEO(0xF9, bonespin2_geo), 
	LOAD_MODEL_FROM_GEO(0xF8, bonegate_geo), 
	LOAD_MODEL_FROM_GEO(0xF7, boneswapgate_geo), 
	LOAD_MODEL_FROM_GEO(0xF6, corenode_geo), 
	LOAD_MODEL_FROM_GEO(0xF5, nullbody_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PIPE1_CCM, pipe1_ccm_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_PIPE2_CCM, pipe2_ccm_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CONV2_CCM, conv2ccm_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CONV1_CCM, conv1ccm_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EXECUTIVE, executive_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TVHEAD_CCM, tvhead_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_EXEC_MISSILE, cosmic_missile_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_ESCALATOR, escalator_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TRAINCEIL, trap_trainceil_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CONNEX_1, connex1_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CONNEX_2, connex2_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TROLLGATE, trollgate_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_TROLLSTAIR, trollstair_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GLOBAL_CONE, global_cone_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_SPRINGTRAP, springtrap_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CRATETRAP, cratetrap_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_QUARANTINE, quarantine_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_AXETRAP, axetrap_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BAROPE, barope_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GHOSTFLOOR, ghostfloor_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_GHOSTFLOOR2, ghostfloor2_geo), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, ccm_area_1),
		WARP_NODE(0x0A /*start*/, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B/*CP1*/, LEVEL_CCM, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C/*CP2*/, LEVEL_CCM, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_AXETRAP, -3885, 2994, -8062, 0, 0, 0, 0x00000000, bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -3385, 2994, -8062, 0, 0, 0, (1 << 16), bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -2885, 2994, -8062, 0, 0, 0, 0x00000000, bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -2385, 2994, -8062, 0, 0, 0, (1 << 16), bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -1885, 2994, -8062, 0, 0, 0, 0x00000000, bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -1385, 2994, -8062, 0, 0, 0, (1 << 16), bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -885, 2994, -8062, 0, 0, 0, 0x00000000, bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -385, 2994, -8062, 0, 0, 0, (1 << 16), bhvAxeTrap),
		OBJECT(MODEL_GLOBAL_CONE, 10285, 2295, -13830, 0, 4, 0, 0x00000000, bhvBadCone),
		OBJECT(MODEL_GLOBAL_CONE, 10873, 2295, -15303, 0, -34, 0, 0x00000000, bhvBadCone),
		OBJECT(MODEL_GLOBAL_CONE, 11479, 2295, -16535, 0, 38, 0, 0x00000000, bhvBadCone),
		OBJECT(MODEL_GLOBAL_CONE, 9971, 2295, -16535, 0, -18, 0, 0x00000000, bhvBadCone),
		OBJECT(MODEL_BAROPE, 4615, 4936, -20155, 0, 0, 0, (100 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_BAROPE, 4317, 5831, -21322, 0, 0, 0, (1 << 24) | (100 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_BREAKABLE_BOX, -5358, 2994, -8058, 0, 0, 0, (BREAKABLE_BOX_BP_LARGE << 16), bhvBreakableBox),
		OBJECT(MODEL_CHECKPOINT_FLAG, 767, 3344, -8062, 0, -90, 0, (1 << 16), bhvCheckpointFlag),
		OBJECT(MODEL_CHECKPOINT_FLAG, -2028, 5523, -20671, 0, 90, 0, (2 << 16), bhvCheckpointFlag),
		OBJECT(MODEL_NONE, 2947, 2295, -19386, 0, -90, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3211, 642, -3412, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_GLOBAL_CONE, -8061, -2963, 1762, 0, 0, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -8509, -2963, 1762, 0, 31, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -9005, -2963, 1956, 0, 42, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -5617, -2963, 1762, 0, -41, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -3836, -860, 2671, 0, -93, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -3503, -860, 3570, 0, -123, 0, (2 << 16), bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 5765, -860, -965, 0, -164, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 3229, -110, -955, 0, -19, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 624, 1244, -4840, 0, 70, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 1084, 1244, -5197, 0, 12, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -4136, -860, 1571, 0, -93, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 8001, 2295, -12106, 0, 4, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 7059, 2295, -12106, 0, 4, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 7575, 2295, -11901, 0, 4, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_CRABLET, 3782, -860, 296, 0, -50, 0, 0x00000000, bhvCrablet),
		OBJECT(MODEL_CRABLET, 6103, 1244, -5096, 0, -8, 0, 0x00000000, bhvCrablet),
		OBJECT(MODEL_CRABLET, -5736, 2844, -4829, 0, 68, 0, 0x00000000, bhvCrablet),
		OBJECT(MODEL_CRABLET, 5872, 640, 8, 0, -50, 0, 0x00000000, bhvCrablet),
		OBJECT(MODEL_CRATETRAP, 2086, -108, -3037, 0, 0, 0, 0x00000000, bhvCratetrap),
		OBJECT(MODEL_NONE, -360, 1244, -4238, 0, 0, 0, 0x00000000, bhvEscalatorSpawner),
		OBJECT(MODEL_NONE, -360, 1244, -5132, 0, 0, 0, (1 << 16), bhvEscalatorSpawner),
		OBJECT(MODEL_EXCLAMATION_BOX, -1819, -104, 3167, 0, 0, 0, (4 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -2459, -104, 3167, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 8187, 1645, -3965, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 1302, 4054, -21354, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_CONNEX_1, 5332, -858, -3412, 0, 0, 0, (0 << 16), bhvFallingConnex),
		OBJECT(MODEL_CONNEX_2, 6832, 642, -3037, 0, 0, 0, (1 << 16), bhvFallingConnex),
		OBJECT(0xFF, -6204, -1312, 920, 0, -90, 0, 0x00000000, bhvOnlyFan),
		OBJECT(0xFF, -5604, -1312, 920, 0, -90, 0, 0x00000000, bhvOnlyFan),
		OBJECT(0xFF, 4670, 187, 3560, 0, 0, 0, 0x00000000, bhvOnlyFan),
		OBJECT(MODEL_GHOSTFLOOR, 7299, 2295, -18945, 0, 0, 0, 0x00000000, bhvGhostFloor),
		OBJECT(MODEL_NONE, -808, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -208, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 388, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1003, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1581, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 2191, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -510, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -510, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -915, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -915, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1311, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1311, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1646, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1646, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1994, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1994, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2338, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2338, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2697, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2697, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -3019, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -3019, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -491, -860, 3557, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 106, -860, 3557, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 720, -860, 3557, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1298, -860, 3557, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1908, -860, 3557, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 92, -860, 1168, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 392, -860, 1168, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1292, -860, 1168, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1292, -860, 868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 392, -860, 868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1108, -860, 868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2008, -860, 868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -3208, -860, 868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -9381, -2933, 1281, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2501, -476, 3660, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1801, -476, 3660, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		MARIO_POS(0x01, 0, -9249, -2727, 5627),
		OBJECT(MODEL_MONITOR, -7923, -2286, 4706, 10, -47, 1, 0x00000000, bhvMonitor),
		OBJECT(MODEL_MONITOR, 32, 3825, -7265, 11, 134, 0, (1 << 16), bhvMonitor),
		OBJECT(MODEL_MONITOR, -1580, 6490, -20166, 11, -130, 0, (2 << 16), bhvMonitor),
		OBJECT(MODEL_GOOMBA, -4163, -860, 2362, 0, -63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -8572, -2963, 2477, 0, -27, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -6749, -2963, 3293, 0, -77, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -6347, -2963, 2091, 0, -44, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7962, -108, -2695, 0, -53, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7651, -860, -910, 0, -108, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 9500, 2295, -10929, 0, -90, 0, (1 << 24), bhvGoomba),
		OBJECT(MODEL_GOOMBA, 525, 1244, -4231, 0, 85, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -6135, 2844, -8293, 0, -64, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -6379, 2844, -10008, 0, -88, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 10962, 2295, -15977, 0, -11, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3424, 2295, -20919, 0, 21, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1548, 2295, -18299, 0, 117, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1900, 2295, -20910, 0, 56, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 2710, 4598, -19223, 0, -87, 0, (3 << 24), bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3310, 4598, -19223, 0, -87, 0, (2 << 24), bhvGoomba),
		OBJECT(MODEL_GOOMBA, 4010, 4598, -19223, 0, -87, 0, (2 << 24), bhvGoomba),
		OBJECT(MODEL_PILLAR_TROLL, -3632, 5823, -20671, 0, 90, 0, 0x00000000, bhvPillarTroll),
		OBJECT(MODEL_PIRANHA_PLANT, 2947, 2295, -19386, 0, 0, 0, 0x00000000, bhvPlantTrap),
		OBJECT(MODEL_QUARANTINE, 7594, 1244, -5941, 0, 0, 0, 0x00000000, bhvQuarantine),
		OBJECT(MODEL_QUARANTINE, 6091, 2295, -10850, 0, 90, 0, (1 << 16), bhvQuarantine),
		OBJECT(MODEL_NONE, -1760, 2150, -4685, 0, 0, 0, 0x00000000, bhvQuicksandEscalator),
		OBJECT(MODEL_NONE, -9249, -2727, 5627, 0, 147, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 738, 3194, -8381, 0, -90, 0, (0x0B << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -1574, 5523, -20663, 0, -90, 0, (0x0C << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_SPRINGTRAP, -508, -860, 2057, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -808, -860, 1757, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -3208, -860, 1757, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -3808, -860, 1457, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -208, -860, 2957, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 392, -860, 2957, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 1292, -860, 2657, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3392, 1244, -4543, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2492, 1244, -4543, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2792, 1244, -4843, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -2308, -860, 1457, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -2908, -860, 2357, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 92, -860, 2357, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2492, -860, 2057, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2492, -860, 2957, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3392, -860, 2657, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3392, -860, 1457, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -508, -860, 1157, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -1708, -860, 1157, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -2908, -860, 1157, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 1892, -860, 1157, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3092, -860, 257, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3992, -860, -643, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 92, -860, 3257, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 392, -860, 3257, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2192, -860, 3257, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -2908, -860, 3257, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -2908, -860, 3557, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3092, -860, 3857, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3992, -860, 3857, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2492, 1244, -4243, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3092, 1244, -4243, 0, 90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3392, 1244, -4243, 0, 90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2792, 1244, -4243, 0, 90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(0xFB, -8685, 3217, -5823, 0, 180, 0, 0x00000000, bhvBoneTrain),
		OBJECT(MODEL_TRAINCEIL, -8486, 4052, -6086, 0, 0, 0, 0x00000000, bhvTrainCeil),
		OBJECT(MODEL_NONE, -1760, 2997, -4685, 0, 0, 0, (8 << 24) | (TTRIG_ESCALATOR_1 << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -5092, 3094, -8062, 0, 0, 0, (1 << 24) | (TTRIG_ESCALATOR_2 << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 4668, -896, -3705, 0, 0, 0, (6 << 24) | (TTRIG_CONNEX_FALL_1 << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 6870, 243, -3053, 0, 0, 0, (7 << 24) | (TTRIG_CONNEX_FALL_2 << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 1865, -278, -3580, 0, 0, 0, (6 << 24) | (TTRIG_PUSHOUT << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -4955, -1874, 2733, 0, 0, 0, (2 << 24) | (TTRIG_TROLL_STAIR << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -4955, -1300, 2138, 0, 0, 0, (2 << 24) | (TTRIG_TROLL_STAIR << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 7594, 1947, -6384, 0, 0, 0, (8 << 24) | (TTRIG_QUARANTINE << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -1782, 3094, -8062, 0, 0, 0, (2 << 24) | (TTRIG_AXE << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 2947, 1569, -19386, 0, 0, 0, (8 << 24) | (TTRIG_PLANT << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 8927, 1916, -18930, 0, 0, 0, (11 << 24) | (TTRIG_GHOSTFLOOR << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 5801, 1916, -18930, 0, 0, 0, (11 << 24) | (TTRIG_GHOSTFLOOR << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 7376, 1916, -18930, 0, 0, 0, (10 << 24) | (TTRIG_GHOSTFLOOR << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -8614, 3094, -4936, 0, 0, 0, (3 << 24) | (TTRIG_TRAIN << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -8614, 3094, -6719, 0, 0, 0, (3 << 24) | (TTRIG_TRAIN << 16), bhvTrollTrigger),
		OBJECT(MODEL_TROLLGATE, -8073, -2762, 4481, 0, 0, 0, 0x00000000, bhvTrollgate),
		OBJECT(MODEL_TROLLSTAIR, -4855, -2361, 3114, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_TROLLSTAIR, -4855, -2061, 2814, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_TROLLSTAIR, -4855, -1761, 2514, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_TROLLSTAIR, -4855, -1461, 2214, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_TROLLSTAIR, -4855, -1161, 1914, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_TROLLSTAIR, -4855, -861, 1614, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_VOIDLEAK, 10223, 2295, -17931, 0, 0, 0, (1 << 16), bhvVoidLeak),
		OBJECT(MODEL_VOIDLEAK, 6096, 1244, -5091, 0, 0, 0, 0x00000000, bhvVoidLeak),
		OBJECT(MODEL_VOIDLEAK, 5865, -860, -1763, 0, 0, 0, 0x00000000, bhvVoidLeak),
		OBJECT(MODEL_WHOMP, 11649, 2456, -14893, 0, 0, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_WHOMP, 11452, 2295, -17889, 0, 0, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_WHOMP, 10279, 2295, -15402, 0, -180, 0, 0x00000000, bhvSmallWhomp),
		TERRAIN(ccm_area_1_collision),
		MACRO_OBJECTS(ccm_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	AREA(2, ccm_area_2),
		WARP_NODE(0x0A /*start*/, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0B/*CP1*/, LEVEL_CCM, 0x01, 0x0B, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C/*CP2*/, LEVEL_CCM, 0x01, 0x0C, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_AXETRAP, -3885, 2994, -8062, 0, 0, 0, 0x00000000, bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -3385, 2994, -8062, 0, 0, 0, (1 << 16), bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -2885, 2994, -8062, 0, 0, 0, 0x00000000, bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -2385, 2994, -8062, 0, 0, 0, (1 << 16), bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -1885, 2994, -8062, 0, 0, 0, 0x00000000, bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -1385, 2994, -8062, 0, 0, 0, (1 << 16), bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -885, 2994, -8062, 0, 0, 0, 0x00000000, bhvAxeTrap),
		OBJECT(MODEL_AXETRAP, -385, 2994, -8062, 0, 0, 0, (1 << 16), bhvAxeTrap),
		OBJECT(MODEL_GLOBAL_CONE, 10285, 2295, -13830, 0, 4, 0, 0x00000000, bhvBadCone),
		OBJECT(MODEL_GLOBAL_CONE, 10873, 2295, -15303, 0, -34, 0, 0x00000000, bhvBadCone),
		OBJECT(MODEL_GLOBAL_CONE, 11479, 2295, -16535, 0, 38, 0, 0x00000000, bhvBadCone),
		OBJECT(MODEL_GLOBAL_CONE, 9971, 2295, -16535, 0, -18, 0, 0x00000000, bhvBadCone),
		OBJECT(MODEL_BAROPE, 4615, 4936, -20155, 0, 0, 0, (100 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_BAROPE, 4317, 5831, -21322, 0, 0, 0, (1 << 24) | (100 << 16), bhvPoleGrabbing),
		OBJECT(MODEL_BREAKABLE_BOX, -5358, 2994, -8058, 0, 0, 0, (BREAKABLE_BOX_BP_LARGE << 16), bhvBreakableBox),
		OBJECT(MODEL_CHECKPOINT_FLAG, 767, 3344, -8062, 0, -90, 0, (1 << 16), bhvCheckpointFlag),
		OBJECT(MODEL_CHECKPOINT_FLAG, -2028, 5523, -20671, 0, 90, 0, (2 << 16), bhvCheckpointFlag),
		OBJECT(MODEL_NONE, 2947, 2295, -19386, 0, -90, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3211, 642, -3412, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_GLOBAL_CONE, -8061, -2963, 1762, 0, 0, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -8509, -2963, 1762, 0, 31, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -9005, -2963, 1956, 0, 42, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -5617, -2963, 1762, 0, -41, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -3836, -860, 2671, 0, -93, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -3503, -860, 3570, 0, -123, 0, (2 << 16), bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 5765, -860, -965, 0, -164, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 3229, -110, -955, 0, -19, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 624, 1244, -4840, 0, 70, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 1084, 1244, -5197, 0, 12, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, -4136, -860, 1571, 0, -93, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 8001, 2295, -12106, 0, 4, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 7059, 2295, -12106, 0, 4, 0, 0x00000000, bhvCone),
		OBJECT(MODEL_GLOBAL_CONE, 7575, 2295, -11901, 0, 4, 0, (1 << 16), bhvCone),
		OBJECT(MODEL_CRABLET, 3782, -860, 296, 0, -50, 0, 0x00000000, bhvCrablet),
		OBJECT(MODEL_CRABLET, 6103, 1244, -5096, 0, -8, 0, 0x00000000, bhvCrablet),
		OBJECT(MODEL_CRABLET, -5736, 2844, -4829, 0, 68, 0, 0x00000000, bhvCrablet),
		OBJECT(MODEL_CRABLET, 5872, 640, 8, 0, -50, 0, 0x00000000, bhvCrablet),
		OBJECT(MODEL_CRATETRAP, 2086, -108, -3037, 0, 0, 0, 0x00000000, bhvCratetrap),
		OBJECT(MODEL_NONE, -360, 1244, -4238, 0, 0, 0, 0x00000000, bhvEscalatorSpawner),
		OBJECT(MODEL_NONE, -360, 1244, -5132, 0, 0, 0, (1 << 16), bhvEscalatorSpawner),
		OBJECT(MODEL_EXCLAMATION_BOX, -1819, -104, 3167, 0, 0, 0, (4 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, -2459, -104, 3167, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 8187, 1645, -3965, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_EXCLAMATION_BOX, 1302, 4054, -21354, 0, 0, 0, (5 << 16), bhvExclamationBox),
		OBJECT(MODEL_CONNEX_1, 5332, -858, -3412, 0, 0, 0, (0 << 16), bhvFallingConnex),
		OBJECT(MODEL_CONNEX_2, 6832, 642, -3037, 0, 0, 0, (1 << 16), bhvFallingConnex),
		OBJECT(0xFF, -6204, -1312, 920, 0, -90, 0, 0x00000000, bhvOnlyFan),
		OBJECT(0xFF, -5604, -1312, 920, 0, -90, 0, 0x00000000, bhvOnlyFan),
		OBJECT(0xFF, 4670, 187, 3560, 0, 0, 0, 0x00000000, bhvOnlyFan),
		OBJECT(MODEL_GHOSTFLOOR, 7299, 2295, -18945, 0, 0, 0, 0x00000000, bhvGhostFloor),
		OBJECT(MODEL_NONE, -808, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -208, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 388, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1003, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1581, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 2191, -860, 3868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -510, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -510, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -915, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -915, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1311, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1311, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1646, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1646, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1994, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1994, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2338, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2338, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2697, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2697, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -3019, 1244, -3835, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -3019, 1244, -5534, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -491, -860, 3557, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 106, -860, 3557, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 720, -860, 3557, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1298, -860, 3557, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1908, -860, 3557, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 92, -860, 1168, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 392, -860, 1168, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1292, -860, 1168, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 1292, -860, 868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, 392, -860, 868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1108, -860, 868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2008, -860, 868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -3208, -860, 868, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -9381, -2933, 1281, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -2501, -476, 3660, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_NONE, -1801, -476, 3660, 0, 0, 0, 0x00000000, bhvKillerSpikes),
		OBJECT(MODEL_MONITOR, -7923, -2286, 4706, 10, -47, 1, 0x00000000, bhvMonitor),
		OBJECT(MODEL_MONITOR, 32, 3825, -7265, 11, 134, 0, (1 << 16), bhvMonitor),
		OBJECT(MODEL_MONITOR, -1580, 6490, -20166, 11, -130, 0, (2 << 16), bhvMonitor),
		OBJECT(MODEL_GOOMBA, -4163, -860, 2362, 0, -63, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -8572, -2963, 2477, 0, -27, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -6749, -2963, 3293, 0, -77, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -6347, -2963, 2091, 0, -44, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7962, -108, -2695, 0, -53, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 7651, -860, -910, 0, -108, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 525, 1244, -4231, 0, 85, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -6135, 2844, -8293, 0, -64, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -6379, 2844, -10008, 0, -88, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 9500, 2295, -10929, 0, -90, 0, (1 << 24), bhvGoomba),
		OBJECT(MODEL_GOOMBA, 10962, 2295, -15977, 0, -11, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3424, 2295, -20919, 0, 21, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1548, 2295, -18299, 0, 117, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1900, 2295, -20910, 0, 56, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 2710, 4598, -19223, 0, -87, 0, (3 << 24), bhvGoomba),
		OBJECT(MODEL_GOOMBA, 3310, 4598, -19223, 0, -87, 0, (2 << 24), bhvGoomba),
		OBJECT(MODEL_GOOMBA, 4010, 4598, -19223, 0, -87, 0, (2 << 24), bhvGoomba),
		OBJECT(MODEL_PILLAR_TROLL, -3632, 5823, -20671, 0, 90, 0, 0x00000000, bhvPillarTroll),
		OBJECT(MODEL_PIRANHA_PLANT, 2947, 2295, -19386, 0, 0, 0, 0x00000000, bhvPlantTrap),
		OBJECT(MODEL_QUARANTINE, 7594, 1244, -5941, 0, 0, 0, 0x00000000, bhvQuarantine),
		OBJECT(MODEL_QUARANTINE, 6091, 2295, -10850, 0, 90, 0, (1 << 16), bhvQuarantine),
		OBJECT(MODEL_NONE, -1760, 2150, -4685, 0, 0, 0, 0x00000000, bhvQuicksandEscalator),
		OBJECT(MODEL_NONE, -9249, -2727, 5627, 0, 147, 0, (0x0A << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 738, 3194, -8381, 0, -90, 0, (0x0B << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -1574, 5523, -20663, 0, -90, 0, (0x0C << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_SPRINGTRAP, -508, -860, 2057, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -808, -860, 1757, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -3208, -860, 1757, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -3808, -860, 1457, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -208, -860, 2957, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 392, -860, 2957, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 1292, -860, 2657, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3392, 1244, -4543, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2492, 1244, -4543, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2792, 1244, -4843, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -2308, -860, 1457, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -2908, -860, 2357, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 92, -860, 2357, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2492, -860, 2057, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2492, -860, 2957, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3392, -860, 2657, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3392, -860, 1457, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -508, -860, 1157, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -1708, -860, 1157, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -2908, -860, 1157, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 1892, -860, 1157, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3092, -860, 257, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3992, -860, -643, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 92, -860, 3257, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 392, -860, 3257, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2192, -860, 3257, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -2908, -860, 3257, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, -2908, -860, 3557, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3092, -860, 3857, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3992, -860, 3857, 0, -90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2492, 1244, -4243, 0, 0, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3092, 1244, -4243, 0, 90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 3392, 1244, -4243, 0, 90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(MODEL_SPRINGTRAP, 2792, 1244, -4243, 0, 90, 0, 0x00000000, bhvSpringtrap),
		OBJECT(0xFB, -8685, 3217, -5823, 0, 180, 0, 0x00000000, bhvBoneTrain),
		OBJECT(MODEL_TRAINCEIL, -8486, 4052, -6086, 0, 0, 0, 0x00000000, bhvTrainCeil),
		OBJECT(MODEL_NONE, -1760, 2997, -4685, 0, 0, 0, (8 << 24) | (TTRIG_ESCALATOR_1 << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -5092, 3094, -8062, 0, 0, 0, (1 << 24) | (TTRIG_ESCALATOR_2 << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 4668, -896, -3705, 0, 0, 0, (6 << 24) | (TTRIG_CONNEX_FALL_1 << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 6870, 243, -3053, 0, 0, 0, (7 << 24) | (TTRIG_CONNEX_FALL_2 << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 1865, -278, -3580, 0, 0, 0, (6 << 24) | (TTRIG_PUSHOUT << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -4955, -1874, 2733, 0, 0, 0, (2 << 24) | (TTRIG_TROLL_STAIR << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -4955, -1300, 2138, 0, 0, 0, (2 << 24) | (TTRIG_TROLL_STAIR << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 7594, 1947, -6384, 0, 0, 0, (8 << 24) | (TTRIG_QUARANTINE << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -1782, 3094, -8062, 0, 0, 0, (2 << 24) | (TTRIG_AXE << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 2947, 1569, -19386, 0, 0, 0, (8 << 24) | (TTRIG_PLANT << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 8927, 1916, -18930, 0, 0, 0, (11 << 24) | (TTRIG_GHOSTFLOOR << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 5801, 1916, -18930, 0, 0, 0, (11 << 24) | (TTRIG_GHOSTFLOOR << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, 7376, 1916, -18930, 0, 0, 0, (10 << 24) | (TTRIG_GHOSTFLOOR << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -8614, 3094, -4936, 0, 0, 0, (3 << 24) | (TTRIG_TRAIN << 16), bhvTrollTrigger),
		OBJECT(MODEL_NONE, -8614, 3094, -6719, 0, 0, 0, (3 << 24) | (TTRIG_TRAIN << 16), bhvTrollTrigger),
		OBJECT(MODEL_TROLLGATE, -8073, -2762, 4481, 0, 0, 0, 0x00000000, bhvTrollgate),
		OBJECT(MODEL_TROLLSTAIR, -4855, -2361, 3114, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_TROLLSTAIR, -4855, -2061, 2814, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_TROLLSTAIR, -4855, -1761, 2514, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_TROLLSTAIR, -4855, -1461, 2214, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_TROLLSTAIR, -4855, -1161, 1914, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_TROLLSTAIR, -4855, -861, 1614, 0, 0, 0, 0x00000000, bhvTrollstair),
		OBJECT(MODEL_VOIDLEAK, 10223, 2295, -17931, 0, 0, 0, (1 << 16), bhvVoidLeak),
		OBJECT(MODEL_VOIDLEAK, 6096, 1244, -5091, 0, 0, 0, 0x00000000, bhvVoidLeak),
		OBJECT(MODEL_VOIDLEAK, 5865, -860, -1763, 0, 0, 0, 0x00000000, bhvVoidLeak),
		OBJECT(MODEL_WHOMP, 11649, 2456, -14893, 0, 0, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_WHOMP, 11452, 2295, -17889, 0, 0, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_WHOMP, 10279, 2295, -15402, 0, -180, 0, 0x00000000, bhvSmallWhomp),
		TERRAIN(ccm_area_2_collision),
		MACRO_OBJECTS(ccm_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -9249, -2727, 5627),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
