#include "src/game/envfx_snow.h"

const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_1___eye_half_v3_001_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_7___eye_X_v3_001_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_armature_002_switch_option_002[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_002_switch_option_head__no_cap__mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt1),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt2),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt3),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt4),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt5),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt6),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt1_switch_face_opt7),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_right_hand_open_armature[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 120, 0, 0, a_fast_002_switch_option_right_hand_open_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_left_hand_open_armature[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 120, 0, 0, a_fast_002_switch_option_left_hand_open_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_left_hand_peace_armature[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 120, 0, 0, a_fast_004_switch_option_left_hand_peace_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_left_hand_cap_armature[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 120, 0, 0, a_fast_005_switch_option_left_hand_cap_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_left_hand_wing_cap_armature[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 120, 0, 0, a_fast_006_switch_option_left_hand_wing_cap_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_ALPHA, a_fast_006_switch_option_left_hand_wing_cap_wings_mesh_layer_4),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_1___eye_half_v3_001_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_002_switch_option_head__no_cap__mesh_layer_1_mat_override_face_7___eye_X_v3_001_2),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_armature_002_switch_option_002[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_002_switch_option_head__no_cap__mesh_layer_1),
			GEO_CLOSE_NODE(),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt1),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt2),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt3),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt4),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt5),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt6),
			GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt1_switch_face_opt7),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_right_hand_open_armature[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 120, 0, 0, a_fast_002_switch_option_right_hand_open_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_left_hand_open_armature[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 120, 0, 0, a_fast_002_switch_option_left_hand_open_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_left_hand_peace_armature[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 120, 0, 0, a_fast_004_switch_option_left_hand_peace_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_left_hand_cap_armature[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 120, 0, 0, a_fast_005_switch_option_left_hand_cap_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_left_hand_wing_cap_armature[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_TRANSPARENT, 120, 0, 0, a_fast_006_switch_option_left_hand_wing_cap_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_006_switch_option_left_hand_wing_cap_wings_mesh_layer_4),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_mesh_layer_1_mat_override_face_0___eye_open_v3_002_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, a_fast_000_offset_mesh_layer_1),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_offset_001_skinned_mesh_layer_1),
				GEO_ASM(0, geo_move_mario_part_from_parent),
				GEO_ASM(0, geo_mario_tilt_torso),
				GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_TRANSPARENT, 136, 0, 0, a_fast_000_offset_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 94, 0, 0, NULL),
						GEO_OPEN_NODE(),
							GEO_ASM(0, geo_mario_head_rotation),
							GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
							GEO_OPEN_NODE(),
								GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
								GEO_OPEN_NODE(),
									GEO_NODE_START(),
									GEO_OPEN_NODE(),
										GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
										GEO_OPEN_NODE(),
											GEO_NODE_START(),
											GEO_OPEN_NODE(),
												GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_mesh_layer_1),
											GEO_CLOSE_NODE(),
											GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt1),
											GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt2),
											GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt3),
											GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt4),
											GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt5),
											GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt6),
											GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_000_switch_opt0_000_switch_001_opt7),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
									GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_armature_002_switch_option_002),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_FORCE, 364, -102, -252, 15, -33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_001_mesh_layer_4),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
								GEO_TRANSLATE_ROTATE(LAYER_FORCE, 364, -102, 252, -15, 33, -133),
								GEO_OPEN_NODE(),
									GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
									GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_002_mesh_layer_4),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 52, -20, 55, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, a_fast_000_offset_003_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 110, -29, 6, a_fast_000_offset_004_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_SWITCH_CASE(1, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 121, -43, -1, NULL),
											GEO_OPEN_NODE(),
												GEO_ASM(1, geo_mario_hand_foot_scaler),
												GEO_SCALE(LAYER_FORCE, 65536),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_003_mesh_layer_1),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_right_hand_open_armature),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 54, -20, -55, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, a_fast_000_offset_006_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_TRANSPARENT, 110, -29, -6, a_fast_000_offset_007_mesh_layer_1),
								GEO_OPEN_NODE(),
									GEO_SWITCH_CASE(0, geo_switch_mario_hand),
									GEO_OPEN_NODE(),
										GEO_NODE_START(),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 121, -43, 1, NULL),
											GEO_OPEN_NODE(),
												GEO_ASM(0, geo_mario_hand_foot_scaler),
												GEO_SCALE(LAYER_FORCE, 65536),
												GEO_OPEN_NODE(),
													GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_004_mesh_layer_1),
												GEO_CLOSE_NODE(),
												GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_left_hand_open_armature),
										GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_left_hand_peace_armature),
										GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_left_hand_cap_armature),
										GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1_jump_a_fast_left_hand_wing_cap_armature),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -9, -16, 57, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, a_fast_000_offset_009_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_TRANSPARENT, 168, -2, 0, a_fast_000_offset_010_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_TRANSPARENT, 221, 17, 0, a_fast_000_offset_011_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, -9, -16, -57, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_TRANSPARENT, 0, 0, 0, a_fast_000_offset_012_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_TRANSPARENT, 168, -2, 0, a_fast_000_offset_013_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 221, 17, 0, NULL),
							GEO_OPEN_NODE(),
								GEO_ASM(2, geo_mario_hand_foot_scaler),
								GEO_SCALE(LAYER_FORCE, 65536),
								GEO_OPEN_NODE(),
									GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_000_displaylist_005_mesh_layer_1),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_displaylist_mesh_layer_1_mat_override_face_0___eye_open_v3_002_0),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt2[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt3[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt4[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt5[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt6[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt7[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_displaylist_mesh_layer_1_mat_override_face_2___eye_closed_v3_001_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout a_fast_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(1, 180, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ASM(0, geo_mirror_mario_backface_culling),
				GEO_ASM(0, geo_mirror_mario_set_alpha),
				GEO_SWITCH_CASE(0, geo_switch_mario_stand_run),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(0, geo_switch_mario_cap_effect),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, a_fast_000_offset_mesh_layer_1),
									GEO_OPEN_NODE(),
										GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_offset_001_skinned_mesh_layer_1),
										GEO_ASM(0, geo_move_mario_part_from_parent),
										GEO_ASM(0, geo_mario_tilt_torso),
										GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 136, 0, 0, a_fast_000_offset_001_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 94, 0, 0, NULL),
												GEO_OPEN_NODE(),
													GEO_ASM(0, geo_mario_head_rotation),
													GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
													GEO_OPEN_NODE(),
														GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
														GEO_OPEN_NODE(),
															GEO_NODE_START(),
															GEO_OPEN_NODE(),
																GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
																GEO_OPEN_NODE(),
																	GEO_NODE_START(),
																	GEO_OPEN_NODE(),
																		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_displaylist_mesh_layer_1),
																	GEO_CLOSE_NODE(),
																	GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt1),
																	GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt2),
																	GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt3),
																	GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt4),
																	GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt5),
																	GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt6),
																	GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt0_000_switch_opt0_000_switch_001_opt7),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
															GEO_BRANCH(1, a_fast_armature_002_switch_option_002),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(LAYER_FORCE, 364, -102, -252, 15, -33, -133),
														GEO_OPEN_NODE(),
															GEO_ASM(0, geo_mario_rotate_wing_cap_wings),
															GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
															GEO_OPEN_NODE(),
																GEO_DISPLAY_LIST(LAYER_ALPHA, a_fast_000_displaylist_001_mesh_layer_4),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(LAYER_FORCE, 364, -102, 252, -15, 33, -133),
														GEO_OPEN_NODE(),
															GEO_ASM(1, geo_mario_rotate_wing_cap_wings),
															GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
															GEO_OPEN_NODE(),
																GEO_DISPLAY_LIST(LAYER_ALPHA, a_fast_000_displaylist_002_mesh_layer_4),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 52, -20, 55, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, a_fast_000_offset_003_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 110, -29, 6, a_fast_000_offset_004_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_SWITCH_CASE(1, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_ANIMATED_PART(LAYER_OPAQUE, 121, -43, -1, NULL),
																	GEO_OPEN_NODE(),
																		GEO_ASM(1, geo_mario_hand_foot_scaler),
																		GEO_SCALE(LAYER_FORCE, 65536),
																		GEO_OPEN_NODE(),
																			GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_displaylist_003_mesh_layer_1),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
																GEO_BRANCH(1, a_fast_right_hand_open_armature),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 54, -20, -55, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, a_fast_000_offset_006_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 110, -29, -6, a_fast_000_offset_007_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_SWITCH_CASE(0, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_ANIMATED_PART(LAYER_OPAQUE, 121, -43, 1, NULL),
																	GEO_OPEN_NODE(),
																		GEO_ASM(0, geo_mario_hand_foot_scaler),
																		GEO_SCALE(LAYER_FORCE, 65536),
																		GEO_OPEN_NODE(),
																			GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_displaylist_004_mesh_layer_1),
																		GEO_CLOSE_NODE(),
																		GEO_HELD_OBJECT(0, 0, 0, 0, geo_switch_mario_hand_grab_pos),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
																GEO_BRANCH(1, a_fast_left_hand_open_armature),
																GEO_BRANCH(1, a_fast_left_hand_peace_armature),
																GEO_BRANCH(1, a_fast_left_hand_cap_armature),
																GEO_BRANCH(1, a_fast_left_hand_wing_cap_armature),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, -9, -16, 57, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, a_fast_000_offset_009_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 168, -2, 0, a_fast_000_offset_010_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 221, 17, 0, a_fast_000_offset_011_mesh_layer_1),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, -9, -16, -57, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, a_fast_000_offset_012_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 168, -2, 0, a_fast_000_offset_013_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 221, 17, 0, NULL),
													GEO_OPEN_NODE(),
														GEO_ASM(2, geo_mario_hand_foot_scaler),
														GEO_SCALE(LAYER_FORCE, 65536),
														GEO_OPEN_NODE(),
															GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_000_displaylist_005_mesh_layer_1),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_BRANCH(1, a_fast_002_switch_opt0_001_switch_opt1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
				GEO_ASM(1, geo_mirror_mario_backface_culling),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, a_fast_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, a_fast_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, a_fast_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
