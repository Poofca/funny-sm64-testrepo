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

/* Fast64 begin persistent block [includes] */
/* Fast64 end persistent block [includes] */

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _ccm_skybox_yay0SegmentRomStart, _ccm_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group16_yay0SegmentRomStart, _group16_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0xb, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_MIO0(0x7, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xb, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd), 
	LOAD_MIO0(0xa, _ccm_skybox_mio0SegmentRomStart, _ccm_skybox_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_17), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE, 0x01, 0x64, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE, 0x01, 0x32, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_DDD_POLE, -818, 1248, 2944, 0, 0, 0, 0x00000000, bhvDddMovingPole),
		OBJECT(MODEL_BLACK_BOBOMB, 6320, 115, 4275, 0, 90, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -758, 115, 4638, 0, 90, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, 3546, 115, 2241, 0, -144, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, 4880, 115, 5239, 0, 129, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -758, 115, 2643, 0, 90, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, 3749, 407, -3617, 0, 90, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, -6873, 115, 1397, 0, 149, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, 5258, 115, 1534, 0, 149, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_BLACK_BOBOMB, 1678, 115, 206, 0, 50, 0, 0x00000000, bhvBobomb),
		OBJECT(MODEL_EXCLAMATION_BOX, -6716, 2633, -6153, 0, 0, 0, (3 << 16), bhvExclamationBox),
		OBJECT(MODEL_CHILL_BULLY, 4393, 411, -5326, 0, 36, 0, 0x00000000, bhvSmallChillBully),
		OBJECT(MODEL_CHILL_BULLY, -1668, 2346, -6656, 0, 0, 0, 0x00000000, bhvSmallChillBully),
		OBJECT(MODEL_CHILL_BULLY, -1994, 2324, -5828, 0, 96, 0, 0x00000000, bhvSmallChillBully),
		OBJECT(MODEL_CHILL_BULLY, 478, 824, -5837, 0, 0, 0, 0x00000000, bhvSmallChillBully),
		OBJECT(MODEL_CHILL_BULLY, -6594, 2268, -5621, 0, 0, 0, 0x00000000, bhvSmallChillBully),
		OBJECT(MODEL_CHILL_BULLY, -6594, 2268, -6515, 0, 0, 0, 0x00000000, bhvSmallChillBully),
		OBJECT(MODEL_CHILL_BULLY, -5024, 2128, -7041, 0, 0, 0, 0x00000000, bhvSmallChillBully),
		OBJECT(MODEL_YELLOW_COIN, -6709, 1971, 2598, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, 7734, 1084, -3306, 0, 0, 0, (17 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3364, 149, 963, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5668, 2711, 5667, 0, 90, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1826, 657, 5300, 0, 12, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -4032, 2701, 1663, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7530, 3563, 4799, 0, 0, 0, (17 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5586, 367, -3387, 0, -14, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5523, 342, 4505, 0, 0, 0, (18 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 475, 774, -5934, -9, 176, -12, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -1826, 2378, -6062, 0, 163, 0, (0 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3822, -2038, -6062, 0, 87, 0, (4 << 16), bhvCoinFormation),
		OBJECT(MODEL_YELLOW_COIN, -6709, 1467, 3667, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -6709, 937, 4689, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3162, 295, 2502, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 3743, 499, 2801, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4368, 871, 3363, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 4839, 6439, 3363, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5437, 6079, 3363, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 6004, 4223, 3073, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, 5055, 4602, 3077, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_NONE, 1596, 115, 2565, 0, 90, 0, 0x00000000, bhvGoombaTripletSpawner),
		OBJECT(MODEL_HEAVE_HO, -6728, 1522, 3670, 0, 0, 0, 0x00000000, bhvHeaveHo),
		OBJECT(MODEL_HEAVE_HO, -4018, 2678, 1651, 0, 0, 0, 0x00000000, bhvHeaveHo),
		OBJECT(MODEL_MR_BLIZZARD, 7191, 407, -3214, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 6806, -707, 1606, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, -196, 49, -1649, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 2257, 133, 4817, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_MR_BLIZZARD, 3379, 102, 941, 0, 0, 0, 0x00000000, bhvMrBlizzard),
		OBJECT(MODEL_RED_COIN, 7121, -780, 1611, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 5524, 519, 4524, -90, 0, 0, 0x00000000, bhvRedCoinStarMarker),
		OBJECT(MODEL_RED_COIN, 284, 1643, -2812, 0, 16, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 7925, 3023, -1514, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6994, 1809, -6071, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4486, 1562, -3588, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6687, 1179, 3493, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1261, 927, 6533, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4001, 1360, 5706, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_STAR, 3410, 6279, 7016, 0, 172, 0, (0 << 24) | (0xF0 << 16), bhvStar),
		OBJECT(MODEL_STAR, 5064, -1841, 1026, 0, 0, 0, (1 << 24) | (0xF0 << 16), bhvStar),
		OBJECT(MODEL_NONE, 5532, 792, 4524, 0, 0, 0, (3 << 24) | (0xF0 << 16), bhvHiddenRedCoinStar),
		OBJECT(MODEL_EXCLAMATION_BOX, -4027, 3078, 1662, 0, 0, 0, (2 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, 4309, 3130, -1655, 0, -45, 0, (10 << 16), bhvSpinAirborneWarp),
		MARIO_POS(0x01, 135, 4368, 3122, -1730),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SNOW),
		TERRAIN_TYPE(TERRAIN_SNOW),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 135, 4368, 3122, -1730),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
