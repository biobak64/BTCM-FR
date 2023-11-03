#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.
#include "mario/model.inc.c"

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "small_water_splash/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"

#include "king_bobomb/model.inc.c"
#include "king_bobomb/anims/data.inc.c"
#include "king_bobomb/anims/table.inc.c"

#include "koopa_flag/model.inc.c"
#include "koopa_flag/anims/data.inc.c"
#include "koopa_flag/anims/table.inc.c"

//#include "poundable_pole/model.inc.c"
//#include "poundable_pole/collision.inc.c"

#include "koopa/model.inc.c"
#include "koopa/anims/data.inc.c"
#include "koopa/anims/table.inc.c"

//#include "piranha_plant/model.inc.c"
//#include "piranha_plant/anims/data.inc.c"
//#include "piranha_plant/anims/table.inc.c"

#include "whomp/model.inc.c"
#include "whomp/anims/data.inc.c"
#include "whomp/anims/table.inc.c"
#include "whomp/collision.inc.c"

#include "chillychief/model.inc.c"
#include "chillychief/anims/data.inc.c"
#include "chillychief/anims/table.inc.c"

//#include "chain_ball/model.inc.c"

//#include "chain_chomp/model.inc.c"
//#include "chain_chomp/anims/data.inc.c"
//#include "chain_chomp/anims/table.inc.c"

//#include "bubba/model.inc.c"

#include "wiggler_body/model.inc.c"
#include "wiggler_body/anims/data.inc.c"
#include "wiggler_body/anims/table.inc.c"

#include "wiggler_head/model.inc.c"
#include "wiggler_head/anims/data.inc.c"
#include "wiggler_head/anims/table.inc.c"

#include "lakitu_enemy/model.inc.c"
#include "lakitu_enemy/anims/data.inc.c"
#include "lakitu_enemy/anims/table.inc.c"

#include "spiny_egg/model.inc.c"
#include "spiny_egg/anims/data.inc.c"
#include "spiny_egg/anims/table.inc.c"

#include "spiny/model.inc.c"
#include "spiny/anims/data.inc.c"
#include "spiny/anims/table.inc.c"

#ifdef S2DEX_TEXT_ENGINE
#include "src/s2d_engine/config.h"
#include FONT_C_FILE
#endif

//#include "Crowbar/model.inc.c"
//#include "Crowbar/geo.inc.c"

//#include "Hammerbro/model.inc.c"
//#include "Hammerbro/anims/data.inc.c"
//#include "Hammerbro/anims/table.inc.c"
//#include "hammer/model.inc.c"
//#include "ring/model.inc.c"
//#include "metal_crate/model.inc.c"
//#include "metal_crate/collision.inc.c"

//#include "monty_mole_hole/model.inc.c"

//#include "moneybag/model.inc.c"
//#include "moneybag/anims/data.inc.c"
//#include "moneybag/anims/table.inc.c"

//#include "bowser/anims/data.inc.c"
//#include "bowser/anims/table.inc.c"

//#include "monty_mole/model.inc.c"
//#include "monty_mole/anims/data.inc.c"
//#include "monty_mole/anims/table.inc.c"
#include "evil_mario/anims/data.inc.c"
#include "evil_mario/anims/table.inc.c"
//#include "chicken/model.inc.c"
//#include "chicken/anims/data.inc.c"
//#include "chicken/anims/table.inc.c"
#include "token/model.inc.c"
//#include "crab_anims/anims/data.inc.c"
//#include "crab_anims/anims/table.inc.c"
//#include "egg/model.inc.c"
#include "arrow/model.inc.c"
#include "BadgeSelect/model.inc.c"
#include "MysteryBadge/model.inc.c"
//#include "snakeblock/collision.inc.c"
//#include "snakeblock1/model.inc.c"
//#include "snakeblock2/model.inc.c"
//#include "snakeblock3/model.inc.c"
#include "b0/model.inc.c"
#include "b1/model.inc.c"
#include "b2/model.inc.c"
#include "b3/model.inc.c"
#include "b4/model.inc.c"
#include "b5/model.inc.c"
#include "b6/model.inc.c"
#include "b7/model.inc.c"
#include "b8/model.inc.c"
#include "b9/model.inc.c"
#include "b10/model.inc.c"
#include "b11/model.inc.c"
#include "bE/model.inc.c"
#include "title/model.inc.c"
#include "Rex/model.inc.c"
#include "Rex/anims/data.inc.c"
#include "Rex/anims/table.inc.c"
#include "dcoin/model.inc.c"
//#include "shopgui/model.inc.c"
//#include "shopselect/model.inc.c"
//#include "wallet/model.inc.c"
#include "noteblock/model.inc.c"
#include "noteblock/collision.inc.c"
#include "null_anims/anims/data.inc.c"
#include "null_anims/anims/table.inc.c"
#include "ico_heart/model.inc.c"
#include "ico_mana/model.inc.c"
#include "ico_badge/model.inc.c"

#include "rb_hud/model.inc.c"
#include "rb_bar/model.inc.c"
#include "bs_hud/model.inc.c"
#include "bs_bar/model.inc.c"
//#include "billmask/model.inc.c"
#include "gradibox/model.inc.c"
//#include "showrunner/model.inc.c"
//#include "showrunner/anims/data.inc.c"
//#include "showrunner/anims/table.inc.c"
#include "b12/model.inc.c"
#include "b13/model.inc.c"
#include "b14/model.inc.c"
#include "b15/model.inc.c"
#include "b16/model.inc.c"
#include "b21/model.inc.c"
#include "b22/model.inc.c"
#include "b17/model.inc.c"
//#include "executive_/model.inc.c"
//#include "spotlight/model.inc.c"
//#include "executive_loom_/model.inc.c"
//#include "girl/anims/data.inc.c"
//#include "girl/anims/table.inc.c"
#include "b23/model.inc.c"
#include "b20/model.inc.c"
#include "b18/model.inc.c"

//#include "tvhead/collision.inc.c"
//#include "tvhead/model.inc.c"
//#include "tvhead/anims/data.inc.c"
//#include "tvhead/anims/table.inc.c"
#include "b19/model.inc.c"
#include "quest/model.inc.c"
#include "rocket_boot/model.inc.c"
#include "vanetalc/model.inc.c"
//#include "ocean_ttc/model.inc.c"
//#include "tvcorpse/model.inc.c"
//#include "cosmic_spike/model.inc.c"
//#include "crowbar2/model.inc.c"
#include "sb/model.inc.c"
#include "top/model.inc.c"
#include "maker/model.inc.c"
#include "uibutton/model.inc.c"
#include "uibutton2/model.inc.c"
#include "b/model.inc.c"
#include "cull/model.inc.c"
#include "bg/model.inc.c"

#include "sb_cube/model.inc.c"
#include "lev_edge/model.inc.c"
#include "spawn/model.inc.c"
#include "badge/model.inc.c"
#include "mm_btn/model.inc.c"
#include "mario2/model.inc.c"
#include "bigpainting2/model.inc.c"

#include "yellow_sphere_small/model.inc.c"

#include "hoot/model.inc.c"
#include "hoot/anims/data.inc.c"
#include "hoot/anims/table.inc.c"

#include "thwomp/model.inc.c"
#include "thwomp/collision.inc.c"

#include "bullet_bill/model.inc.c"

#include "heave_ho/model.inc.c"
#include "heave_ho/anims/data.inc.c"
#include "heave_ho/anims/table.inc.c"
#include "blaster/model.inc.c"
#include "blaster/collision.inc.c"

#include "mr_i_eyeball/model.inc.c"
#include "mr_i_iris/model.inc.c"

#include "snufit/model.inc.c"

#include "scuttlebug/model.inc.c"
#include "scuttlebug/anims/data.inc.c"
#include "scuttlebug/anims/table.inc.c"

#include "boo/model.inc.c"
#include "bomb/model.inc.c"