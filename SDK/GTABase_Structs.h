﻿#pragma once

/**
 * Name: GTASA
 * Version: 0.0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum GTABase.Achievements
	 */
	enum class EAchievements : uint8_t
	{
		GETTING_STARTED                     = 0,
		WITH_EXTRA_DIP                      = 1,
		THE_END_OF_THE_LINE                 = 2,
		HOOPIN_IT_UP                        = 3,
		A_LEGITIMATE_BUSINESS               = 4,
		ILL_HAVE_TWO_NUMBER_9S              = 5,
		THE_AMERICAN_DREAM                  = 6,
		PAY_N_SPRAY                         = 7,
		BIKE_OR_BIKER                       = 8,
		WHO_NEEDS_DIRECTIONS                = 9,
		LIBERTY_CITY_STATE_OF_MIND          = 10,
		SWISS_ARMY_STRIFE                   = 11,
		SCHOOLS_OUT                         = 12,
		HORROR_OF_THE_SANTA_MARIA           = 13,
		THEY_CANT_STOP_ALL_OF_US            = 14,
		SMOOTH_MOVES                        = 15,
		WHAT_THE_CITY_NEEDS                 = 16,
		SAVIOR                              = 17,
		RESCUE_A_KITTEN_TOO                 = 18,
		YES_I_SPEAK_ENGLISH                 = 19,
		LUCKY_SPIN                          = 20,
		WHAT_HAPPENS_IN_LAS_VENTURAS        = 21,
		ALL_DRESSED_UP_FOR_SAN_FIERRO       = 22,
		NOT_A_PLAYER                        = 23,
		WHAT_ARE_THE_ODDS                   = 24,
		DOUBLE_OR_NOTHIN                    = 25,
		ASSASSIN                            = 26,
		ORIGINAL_GANGSTER                   = 27,
		TODAY_WAS_A_GOOD_DAY                = 28,
		PUBLIC_ENEMY_NO                     = 29,
		CHICK_MAGNET                        = 30,
		AINT_NOTHING_BUT_A_G_THING          = 31,
		REMASTERED                          = 32,
		HERE_WE_GO_AGAIN                    = 33,
		I_AINT_NO_BUSTER                    = 34,
		STICKY_FINGERS                      = 35,
		_YEARS_TOO_LATE                     = 36,
		GET_A_PUMP                          = 37,
		BEAT_THE_COCK                       = 38,
		METROSEXUAL                         = 39,
		WHERED_HE_GO                        = 40,
		HIGH_AS_A_KITE                      = 41,
		REPRESENT                           = 42,
		ASSERT_YOURSELF_NEXT_TIME           = 43,
		SERIAL_OFFENDER                     = 44,
		FREIGHT_DATE                        = 45,
		TIME_TO_KILL                        = 46,
		LOTS_OF_GUNS                        = 47,
		BORN_IN_THE_80S                     = 48,
		RUNNING_RAMPANT                     = 49,
		IRON_Y                              = 50,
		NOT_MY_FIRST_TIME                   = 51,
		ONE_IS_BETTER_THAN_TWO              = 52,
		POINT_A_TO_POINT_B                  = 53,
		HIGH_QUALITY_H2O                    = 54,
		PIE_GUY                             = 55,
		BULL_IN_A_CHINA_SHOP                = 56,
		VICE_CITY_MOGUL                     = 57,
		SAY_SALUTATIONS_TO_MY_LITTLE_FRIEND = 58,
		CATCH_ME_IF_YOU_CAN                 = 59,
		DID_SOMEBODY_CALL_THE_WAMBULANCE    = 60,
		GREASY_PALMS                        = 61,
		JUST_LIKE_THE_REAL_THING            = 62,
		KEEPIE_UPPY_OKIE_DOKIE              = 63,
		GUN_FOR_HIRE                        = 64,
		IM_FAMOUS                           = 65,
		DONT_NEED_ROADS                     = 66,
		DAREDEVIL                           = 67,
		LEGAL_COUNSEL                       = 68,
		LIFE_OF_THE_PARTY                   = 69,
		SOUTH_AMERICAN_CONNECTION           = 70,
		BIG_HEAT_FROM_LITTLE_HAVANA         = 71,
		CHAUFFEUR                           = 72,
		TOMMY_TWO_WHEELS                    = 73,
		GRAND_THEFT_AUTO                    = 74,
		BLOODSTAINED_HANDS                  = 75,
		TAKE_THE_CANNOLI                    = 76,
		MISCHIEF_MANAGED                    = 77,
		CHOPPERD_UP                         = 78,
		CITY_SLEUTH                         = 79,
		DONE_IT_ALL                         = 80,
		KINGPIN                             = 81,
		PUT_EM_UP                           = 82,
		OFFENDER                            = 83,
		RETRO_LEWK                          = 84,
		SCOURING_THE_CITY                   = 85,
		BREAK_IT_UP                         = 86,
		TARGET_PRACTICE                     = 87,
		PRIME_REAL_ESTATE                   = 88,
		VICE_VICE_BABY                      = 89,
		BAKED_DISTRACTIONS                  = 90,
		FIRST_DAY_ON_THE_JOB                = 91,
		WITHOUT_A_SCRATCH                   = 92,
		ESCAPE_ARTIST                       = 93,
		DISPOSING_OF_THE_EVIDENCE           = 94,
		MOB_BOSS                            = 95,
		STREET_SWEEPER                      = 96,
		PLANNED_AHEAD                       = 97,
		GOT_THIS_FIGURED_OUT                = 98,
		BY_A_MILE                           = 99,
		WRECKLESS_DRIVING                   = 100,
		WHEELS_UP                           = 101,
		COME_OUT_TO_PLAY                    = 102,
		WHERE_TO                            = 103,
		LIBERTY_CITY_MINUTE                 = 104,
		FULL_ARTILLERY                      = 105,
		A_MARKED_MAN                        = 106,
		OFFSHORE_DELIVERY                   = 107,
		NOT_SO_FAST                         = 108,
		A_GIFT_FROM_THE_KING                = 109,
		MAN_TOYZ                            = 110,
		SPLISH_SPLASH                       = 111,
		PLAYING_DOCTOR                      = 112,
		GOING_ROGUE                         = 113,
		DIRTY_MONEY                         = 114,
		RIGHT_HAND_MAN                      = 115,
		FAST_FURIOUS_FIRST_RESPONDER        = 116,
		LIBERTY_CITY_SECRETS                = 117,
		IS_THAT_ALL_YOUVE_GOT               = 118,
		KING_OF_LIBERTY_CITY                = 119,
		GOT_ANY_STORIES_OLD_MAN             = 120,
		TALKS_A_LOT                         = 121,
		BLOOD_IN_THE_STREETS                = 122,
		INSTIGATOR                          = 123,
		CHASING_PAPER                       = 124,
		AM_WALKIN_HERE                      = 125,
		HUNTING_SEASON                      = 126,
		REPEAT_OFFENDER                     = 127,
		IF_YOU_AINT_CHEATIN_YOU_AINT_TRYIN  = 128,
		PLAY_FETCH                          = 129,
		PEST_CONTROL                        = 130,
		RELIEF_PITCHER                      = 131,
		LIKE_A_BOSS                         = 132,
		FARE_GAME                           = 133,
		RECYCLER                            = 134,
		NUM_ACHIEVEMENTS                    = 135,
		Achievements_MAX                    = 136
	};

	/**
	 * Enum GTABase.EColPointSurfaceType
	 */
	enum class EColPointSurfaceType : uint8_t
	{
		COLPOINT_SURFACETYPE_DEFAULT           = 0,
		COLPOINT_SURFACETYPE_TARMAC            = 1,
		COLPOINT_SURFACETYPE_GRASS             = 2,
		COLPOINT_SURFACETYPE_GRAVEL            = 3,
		COLPOINT_SURFACETYPE_MUD               = 4,
		COLPOINT_SURFACETYPE_PAVEMENT          = 5,
		COLPOINT_SURFACETYPE_CAR               = 6,
		COLPOINT_SURFACETYPE_GLASS             = 7,
		COLPOINT_SURFACETYPE_TRANSPARENT_CLOTH = 8,
		COLPOINT_SURFACETYPE_GARAGE_DOOR       = 9,
		COLPOINT_SURFACETYPE_CAR_PANEL         = 10,
		COLPOINT_SURFACETYPE_THICK_METAL_PLATE = 11,
		COLPOINT_SURFACETYPE_SCAFFOLD_POLE     = 12,
		COLPOINT_SURFACETYPE_LAMP_POST         = 13,
		COLPOINT_SURFACETYPE_FIRE_HYDRANT      = 14,
		COLPOINT_SURFACETYPE_GIRDER            = 15,
		COLPOINT_SURFACETYPE_METAL_CHAIN_FENCE = 16,
		COLPOINT_SURFACETYPE_PED               = 17,
		COLPOINT_SURFACETYPE_SAND              = 18,
		COLPOINT_SURFACETYPE_SHALLOW_WATER     = 19,
		COLPOINT_SURFACETYPE_WOOD_CRATES       = 20,
		COLPOINT_SURFACETYPE_WOOD_BENCH        = 21,
		COLPOINT_SURFACETYPE_WOOD_SOLID        = 22,
		COLPOINT_SURFACETYPE_RUBBER            = 23,
		COLPOINT_SURFACETYPE_PLASTIC           = 24,
		COLPOINT_SURFACETYPE_VEGETATION        = 25,
		COLPOINT_SURFACETYPE_STEEPHILL         = 26,
		COLPOINT_SURFACETYPE_CONTAINER         = 27,
		COLPOINT_SURFACETYPE_NEWS_VENDOR       = 28,
		COLPOINT_SURFACETYPE_WHEELBASE         = 29,
		COLPOINT_SURFACETYPE_CARDBOARDBOX      = 30,
		COLPOINT_SURFACETYPE_TRANSPARENT_STONE = 31,
		COLPOINT_SURFACETYPE_METAL_GATE        = 32,
		COLPOINT_SURFACETYPE_SAND_NOTBEACH     = 33,
		COLPOINT_SURFACETYPE_CONCRETE_BEACH    = 34,
		COLPOINT_SURFACETYPE_ROCK              = 35,
		COLPOINT_SURFACETYPE_CARPET            = 36,
		COLPOINT_SURFACETYPE_HAY               = 37,
		COLPOINT_SURFACETYPE_GENERIC_FLOOR     = 38,
		COLPOINT_SURFACETYPE_LAST              = 39,
		COLPOINT_SURFACETYPE_MAX               = 40
	};

	/**
	 * Enum GTABase.EPlatformType
	 */
	enum class EPlatformType : uint8_t
	{
		PT_Unknown            = 0,
		PT_XboxOneGDK         = 1,
		PT_XboxOneGDK_S       = 2,
		PT_XboxOneGDK_Scorpio = 3,
		PT_XSX                = 4,
		PT_XSX_Anaconda       = 5,
		PT_XSX_Lockhart       = 6,
		PT_PS4                = 7,
		PT_PS4_Neo            = 8,
		PT_PS4_Neo_4k         = 9,
		PT_PS5                = 10,
		PT_Default            = 11,
		PT_MAX                = 12
	};

	/**
	 * Enum GTABase.EHapticEffectType
	 */
	enum class EHapticEffectType : uint8_t
	{
		HET_SmallArms         = 0,
		HET_Rifle             = 1,
		HET_Explosion         = 2,
		HET_MenuTick          = 3,
		HET_MenuSelection     = 4,
		HET_CarDoor           = 5,
		HET_VehicleImpactLow  = 6,
		HET_VehicleImpactHigh = 7,
		HET_Rocket            = 8,
		HET_RoughTerrain      = 9,
		HET_PedImpactLow      = 10,
		HET_PedImpactHigh     = 11,
		HET_Jetpack           = 12,
		HET_Pickup            = 13,
		HET_TargetAcquired    = 14,
		HET_Flamethrower      = 15,
		HET_ChainsawStart     = 16,
		HET_ChainsawBuzz      = 17,
		HET_MAX               = 18
	};

	/**
	 * Enum GTABase.EGTAExplosionSurface
	 */
	enum class EGTAExplosionSurface : uint8_t
	{
		GES_Default = 0,
		GES_Sand    = 1,
		GES_Water   = 2,
		GES_Dirt    = 3,
		GES_Grass   = 4,
		GES_MAX     = 5
	};

	/**
	 * Enum GTABase.EGTAExplosionType
	 */
	enum class EGTAExplosionType : uint8_t
	{
		GET_Inferno     = 0,
		GET_TinyBlast   = 1,
		GET_SmallBlast  = 2,
		GET_MediumBlast = 3,
		GET_LargeBlast  = 4,
		GET_MAX         = 5
	};

	/**
	 * Enum GTABase.EBP_LANGUAGE
	 */
	enum class EBP_LANGUAGE : uint8_t
	{
		LANGUAGE_ENGLISH             = 0,
		LANGUAGE_FRENCH              = 1,
		LANGUAGE_GERMAN              = 2,
		LANGUAGE_ITALIAN             = 3,
		LANGUAGE_SPANISH             = 4,
		LANGUAGE_RUSSIAN             = 5,
		LANGUAGE_JAPANESE            = 6,
		LANGUAGE_KOREAN              = 7,
		LANGUAGE_CHINESE_SIMPLE      = 8,
		LANGUAGE_CHINESE_TRADITIONAL = 9,
		LANGUAGE_BRAZILIAN           = 10,
		LANGUAGE_MEXICAN             = 11,
		LANGUAGE_POLISH              = 12,
		LANGUAGE_UNSUPPORTED         = 13,
		LANGUAGE_MAX                 = 14
	};

	/**
	 * Enum GTABase.EGTAActivities
	 */
	enum class EGTAActivities : uint8_t
	{
		GTA3_STORY_COMPLETE  = 0,
		GTA3_100_PERCENT     = 1,
		GTAVC_STORY_COMPLETE = 2,
		GTAVC_100_PERCENT    = 3,
		GTASA_STORY_COMPLETE = 4,
		GTASA_100_PERCENT    = 5,
		EGA_MAX              = 6,
		MAX                  = 7
	};

	/**
	 * Enum GTABase.EFrameSpace
	 */
	enum class EFrameSpace : uint8_t
	{
		Bone  = 0,
		Mesh  = 1,
		Actor = 2,
		World = 3,
		MAX   = 4
	};

	/**
	 * Enum GTABase.EGTA3Material
	 */
	enum class EGTA3Material : uint8_t
	{
		GTA3_SURFACETYPE_DEFAULT           = 0,
		GTA3_SURFACETYPE_TARMAC            = 1,
		GTA3_SURFACETYPE_GRASS             = 2,
		GTA3_SURFACETYPE_GRAVEL            = 3,
		GTA3_SURFACETYPE_MUD               = 4,
		GTA3_SURFACETYPE_PAVEMENT          = 5,
		GTA3_SURFACETYPE_CAR               = 6,
		GTA3_SURFACETYPE_GLASS             = 7,
		GTA3_SURFACETYPE_TRANSPARENT_CLOTH = 8,
		GTA3_SURFACETYPE_GARAGE_DOOR       = 9,
		GTA3_SURFACETYPE_CAR_PANEL         = 10,
		GTA3_SURFACETYPE_THICK_METAL_PLATE = 11,
		GTA3_SURFACETYPE_SCAFFOLD_POLE     = 12,
		GTA3_SURFACETYPE_LAMP_POST         = 13,
		GTA3_SURFACETYPE_FIRE_HYDRANT      = 14,
		GTA3_SURFACETYPE_GIRDER            = 15,
		GTA3_SURFACETYPE_METAL_CHAIN_FENCE = 16,
		GTA3_SURFACETYPE_PED               = 17,
		GTA3_SURFACETYPE_SAND              = 18,
		GTA3_SURFACETYPE_SHALLOW_WATER     = 19,
		GTA3_SURFACETYPE_WOOD_CRATES       = 20,
		GTA3_SURFACETYPE_WOOD_BENCH        = 21,
		GTA3_SURFACETYPE_WOOD_SOLID        = 22,
		GTA3_SURFACETYPE_RUBBER            = 23,
		GTA3_SURFACETYPE_PLASTIC           = 24,
		GTA3_SURFACETYPE_VEGETATION        = 25,
		GTA3_SURFACETYPE_STEEPHILL         = 26,
		GTA3_SURFACETYPE_CONTAINER         = 27,
		GTA3_SURFACETYPE_NEWS_VENDOR       = 28,
		GTA3_SURFACETYPE_WHEELBASE         = 29,
		GTA3_SURFACETYPE_CARDBOARDBOX      = 30,
		GTA3_SURFACETYPE_TRANSPARENT_STONE = 31,
		GTA3_SURFACETYPE_METAL_GATE        = 32,
		GTA3_NUM_SURFACE_TYPES             = 33,
		GTA3_MAX                           = 34
	};

	/**
	 * Enum GTABase.ESanAndreasMaterial
	 */
	enum class ESanAndreasMaterial : uint8_t
	{
		SA_SURFACE_TYPE_DEFAULT             = 0,
		SA_SURFACE_TYPE_TARMAC              = 1,
		SA_SURFACE_TYPE_TARMAC_FUCKED       = 2,
		SA_SURFACE_TYPE_TARMAC_REALLYFUCKED = 3,
		SA_SURFACE_TYPE_PAVEMENT            = 4,
		SA_SURFACE_TYPE_PAVEMENT_FUCKED     = 5,
		SA_SURFACE_TYPE_GRAVEL              = 6,
		SA_SURFACE_TYPE_FUCKED_CONCRETE     = 7,
		SA_SURFACE_TYPE_PAINTED_GROUND      = 8,
		SA_SURFACE_TYPE_GRASS_SHORT_LUSH    = 9,
		SA_SURFACE_TYPE_GRASS_MEDIUM_LUSH   = 10,
		SA_SURFACE_TYPE_GRASS_LONG_LUSH     = 11,
		SA_SURFACE_TYPE_GRASS_SHORT_DRY     = 12,
		SA_SURFACE_TYPE_GRASS_MEDIUM_DRY    = 13,
		SA_SURFACE_TYPE_GRASS_LONG_DRY      = 14,
		SA_SURFACE_TYPE_GOLFGRASS_ROUGH     = 15,
		SA_SURFACE_TYPE_GOLFGRASS_SMOOTH    = 16,
		SA_SURFACE_TYPE_STEEP_SLIDYGRASS    = 17,
		SA_SURFACE_TYPE_STEEP_CLIFF         = 18,
		SA_SURFACE_TYPE_FLOWERBED           = 19,
		SA_SURFACE_TYPE_MEADOW              = 20,
		SA_SURFACE_TYPE_WASTEGROUND         = 21,
		SA_SURFACE_TYPE_WOODLANDGROUND      = 22,
		SA_SURFACE_TYPE_VEGETATION          = 23,
		SA_SURFACE_TYPE_MUD_WET             = 24,
		SA_SURFACE_TYPE_MUD_DRY             = 25,
		SA_SURFACE_TYPE_DIRT                = 26,
		SA_SURFACE_TYPE_DIRTTRACK           = 27,
		SA_SURFACE_TYPE_SAND_DEEP           = 28,
		SA_SURFACE_TYPE_SAND_MEDIUM         = 29,
		SA_SURFACE_TYPE_SAND_COMPACT        = 30,
		SA_SURFACE_TYPE_SAND_ARID           = 31,
		SA_SURFACE_TYPE_SAND_MORE           = 32,
		SA_SURFACE_TYPE_SAND_BEACH          = 33,
		SA_SURFACE_TYPE_CONCRETE_BEACH      = 34,
		SA_SURFACE_TYPE_ROCK_DRY            = 35,
		SA_SURFACE_TYPE_ROCK_WET            = 36,
		SA_SURFACE_TYPE_ROCK_CLIFF          = 37,
		SA_SURFACE_TYPE_WATER_RIVERBED      = 38,
		SA_SURFACE_TYPE_WATER_SHALLOW       = 39,
		SA_SURFACE_TYPE_CORNFIELD           = 40,
		SA_SURFACE_TYPE_HEDGE               = 41,
		SA_SURFACE_TYPE_WOOD_CRATES         = 42,
		SA_SURFACE_TYPE_WOOD_SOLID          = 43,
		SA_SURFACE_TYPE_WOOD_THIN           = 44,
		SA_SURFACE_TYPE_GLASS               = 45,
		SA_SURFACE_TYPE_GLASS_WINDOWS_LARGE = 46,
		SA_SURFACE_TYPE_GLASS_WINDOWS_SMALL = 47,
		SA_SURFACE_TYPE_EMPTY1              = 48,
		SA_SURFACE_TYPE_EMPTY2              = 49,
		SA_SURFACE_TYPE_GARAGE_DOOR         = 50,
		SA_SURFACE_TYPE_THICK_METAL_PLATE   = 51,
		SA_SURFACE_TYPE_SCAFFOLD_POLE       = 52,
		SA_SURFACE_TYPE_LAMP_POST           = 53,
		SA_SURFACE_TYPE_METAL_GATE          = 54,
		SA_SURFACE_TYPE_METAL_CHAIN_FENCE   = 55,
		SA_SURFACE_TYPE_GIRDER              = 56,
		SA_SURFACE_TYPE_FIRE_HYDRANT        = 57,
		SA_SURFACE_TYPE_CONTAINER           = 58,
		SA_SURFACE_TYPE_NEWS_VENDOR         = 59,
		SA_SURFACE_TYPE_WHEELBASE           = 60,
		SA_SURFACE_TYPE_CARDBOARDBOX        = 61,
		SA_SURFACE_TYPE_PED                 = 62,
		SA_SURFACE_TYPE_CAR                 = 63,
		SA_SURFACE_TYPE_CAR_PANEL           = 64,
		SA_SURFACE_TYPE_CAR_MOVINGCOMPONENT = 65,
		SA_SURFACE_TYPE_TRANSPARENT_CLOTH   = 66,
		SA_SURFACE_TYPE_RUBBER              = 67,
		SA_SURFACE_TYPE_PLASTIC             = 68,
		SA_SURFACE_TYPE_TRANSPARENT_STONE   = 69,
		SA_SURFACE_TYPE_WOOD_BENCH          = 70,
		SA_SURFACE_TYPE_CARPET              = 71,
		SA_SURFACE_TYPE_FLOORBOARD          = 72,
		SA_SURFACE_TYPE_STAIRSWOOD          = 73,
		SA_SURFACE_TYPE_P_SAND              = 74,
		SA_SURFACE_TYPE_P_SAND_DENSE        = 75,
		SA_SURFACE_TYPE_P_SAND_ARID         = 76,
		SA_SURFACE_TYPE_P_SAND_COMPACT      = 77,
		SA_SURFACE_TYPE_P_SAND_ROCKY        = 78,
		SA_SURFACE_TYPE_P_SANDBEACH         = 79,
		SA_SURFACE_TYPE_P_GRASS_SHORT       = 80,
		SA_SURFACE_TYPE_P_GRASS_MEADOW      = 81,
		SA_SURFACE_TYPE_P_GRASS_DRY         = 82,
		SA_SURFACE_TYPE_P_WOODLAND          = 83,
		SA_SURFACE_TYPE_P_WOODDENSE         = 84,
		SA_SURFACE_TYPE_P_ROADSIDE          = 85,
		SA_SURFACE_TYPE_P_ROADSIDEDES       = 86,
		SA_SURFACE_TYPE_P_FLOWERBED         = 87,
		SA_SURFACE_TYPE_P_WASTEGROUND       = 88,
		SA_SURFACE_TYPE_P_CONCRETE          = 89,
		SA_SURFACE_TYPE_P_OFFICEDESK        = 90,
		SA_SURFACE_TYPE_P_711SHELF1         = 91,
		SA_SURFACE_TYPE_P_711SHELF2         = 92,
		SA_SURFACE_TYPE_P_711SHELF3         = 93,
		SA_SURFACE_TYPE_P_RESTUARANTTABLE   = 94,
		SA_SURFACE_TYPE_P_BARTABLE          = 95,
		SA_SURFACE_TYPE_P_UNDERWATERLUSH    = 96,
		SA_SURFACE_TYPE_P_UNDERWATERBARREN  = 97,
		SA_SURFACE_TYPE_P_UNDERWATERCORAL   = 98,
		SA_SURFACE_TYPE_P_UNDERWATERDEEP    = 99,
		SA_SURFACE_TYPE_P_RIVERBED          = 100,
		SA_SURFACE_TYPE_P_RUBBLE            = 101,
		SA_SURFACE_TYPE_P_BEDROOMFLOOR      = 102,
		SA_SURFACE_TYPE_P_KIRCHENFLOOR      = 103,
		SA_SURFACE_TYPE_P_LIVINGRMFLOOR     = 104,
		SA_SURFACE_TYPE_P_CORRIDORFLOOR     = 105,
		SA_SURFACE_TYPE_P_711FLOOR          = 106,
		SA_SURFACE_TYPE_P_FASTFOODFLOOR     = 107,
		SA_SURFACE_TYPE_P_SKANKYFLOOR       = 108,
		SA_SURFACE_TYPE_P_MOUNTAIN          = 109,
		SA_SURFACE_TYPE_P_MARSH             = 110,
		SA_SURFACE_TYPE_P_BUSHY             = 111,
		SA_SURFACE_TYPE_P_BUSHYMIX          = 112,
		SA_SURFACE_TYPE_P_BUSHYDRY          = 113,
		SA_SURFACE_TYPE_P_BUSHYMID          = 114,
		SA_SURFACE_TYPE_P_GRASSWEEFLOWERS   = 115,
		SA_SURFACE_TYPE_P_GRASSDRYTALL      = 116,
		SA_SURFACE_TYPE_P_GRASSLUSHTALL     = 117,
		SA_SURFACE_TYPE_P_GRASSGRNMIX       = 118,
		SA_SURFACE_TYPE_P_GRASSBRNMIX       = 119,
		SA_SURFACE_TYPE_P_GRASSLOW          = 120,
		SA_SURFACE_TYPE_P_GRASSROCKY        = 121,
		SA_SURFACE_TYPE_P_GRASSSMALLTREES   = 122,
		SA_SURFACE_TYPE_P_DIRTROCKY         = 123,
		SA_SURFACE_TYPE_P_DIRTWEEDS         = 124,
		SA_SURFACE_TYPE_P_GRASSWEEDS        = 125,
		SA_SURFACE_TYPE_P_RIVEREDGE         = 126,
		SA_SURFACE_TYPE_P_POOLSIDE          = 127,
		SA_SURFACE_TYPE_P_FORESTSTUMPS      = 128,
		SA_SURFACE_TYPE_P_FORESTSTICKS      = 129,
		SA_SURFACE_TYPE_P_FORRESTLEAVES     = 130,
		SA_SURFACE_TYPE_P_DESERTROCKS       = 131,
		SA_SURFACE_TYPE_P_FORRESTDRY        = 132,
		SA_SURFACE_TYPE_P_SPARSEFLOWERS     = 133,
		SA_SURFACE_TYPE_P_BUILDINGSITE      = 134,
		SA_SURFACE_TYPE_P_DOCKLANDS         = 135,
		SA_SURFACE_TYPE_P_INDUSTRIAL        = 136,
		SA_SURFACE_TYPE_P_INDUSTJETTY       = 137,
		SA_SURFACE_TYPE_P_CONCRETELITTER    = 138,
		SA_SURFACE_TYPE_P_ALLEYRUBISH       = 139,
		SA_SURFACE_TYPE_P_JUNKYARDPILES     = 140,
		SA_SURFACE_TYPE_P_JUNKYARDGRND      = 141,
		SA_SURFACE_TYPE_P_DUMP              = 142,
		SA_SURFACE_TYPE_P_CACTUSDENSE       = 143,
		SA_SURFACE_TYPE_P_AIRPORTGRND       = 144,
		SA_SURFACE_TYPE_P_CORNFIELD         = 145,
		SA_SURFACE_TYPE_P_GRASSLIGHT        = 146,
		SA_SURFACE_TYPE_P_GRASSLIGHTER      = 147,
		SA_SURFACE_TYPE_P_GRASSLIGHTER2     = 148,
		SA_SURFACE_TYPE_P_GRASSMID1         = 149,
		SA_SURFACE_TYPE_P_GRASSMID2         = 150,
		SA_SURFACE_TYPE_P_GRASSDARK         = 151,
		SA_SURFACE_TYPE_P_GRASSDARK2        = 152,
		SA_SURFACE_TYPE_P_GRASSDIRTMIX      = 153,
		SA_SURFACE_TYPE_P_RIVERBEDSTONE     = 154,
		SA_SURFACE_TYPE_P_RIVERBEDSHALLOW   = 155,
		SA_SURFACE_TYPE_P_RIVERBEDWEEDS     = 156,
		SA_SURFACE_TYPE_P_SEAWEED           = 157,
		SA_SURFACE_TYPE_DOOR                = 158,
		SA_SURFACE_TYPE_PLASTICBARRIER      = 159,
		SA_SURFACE_TYPE_PARKGRASS           = 160,
		SA_SURFACE_TYPE_STAIRSSTONE         = 161,
		SA_SURFACE_TYPE_STAIRSMETAL         = 162,
		SA_SURFACE_TYPE_STAIRSCARPET        = 163,
		SA_SURFACE_TYPE_FLOORMETAL          = 164,
		SA_SURFACE_TYPE_FLOORCONCRETE       = 165,
		SA_SURFACE_TYPE_BIN_BAG             = 166,
		SA_SURFACE_TYPE_THIN_METAL_SHEET    = 167,
		SA_SURFACE_TYPE_METAL_BARREL        = 168,
		SA_SURFACE_TYPE_PLASTIC_CONE        = 169,
		SA_SURFACE_TYPE_PLASTIC_DUMPSTER    = 170,
		SA_SURFACE_TYPE_METAL_DUMPSTER      = 171,
		SA_SURFACE_TYPE_WOOD_PICKET_FENCE   = 172,
		SA_SURFACE_TYPE_WOOD_SLATTED_FENCE  = 173,
		SA_SURFACE_TYPE_WOOD_RANCH_FENCE    = 174,
		SA_SURFACE_TYPE_UNBREAKABLE_GLASS   = 175,
		SA_SURFACE_TYPE_HAY_BALE            = 176,
		SA_SURFACE_TYPE_GORE                = 177,
		SA_SURFACE_TYPE_RAILTRACK           = 178,
		SA_NUM_SURFACE_TYPES                = 179,
		SA_MAX                              = 180
	};

	/**
	 * Enum GTABase.EGTAColSurfaceType
	 */
	enum class EGTAColSurfaceType : uint8_t
	{
		GTA_SURFACE_TYPE_DEFAULT           = 0,
		GTA_SURFACE_TYPE_TARMAC            = 1,
		GTA_SURFACE_TYPE_GRASS             = 2,
		GTA_SURFACE_TYPE_GRAVEL            = 3,
		GTA_SURFACE_TYPE_MUD               = 4,
		GTA_SURFACE_TYPE_PAVEMENT          = 5,
		GTA_SURFACE_TYPE_CAR               = 6,
		GTA_SURFACE_TYPE_GLASS             = 7,
		GTA_SURFACE_TYPE_TRANSPARENT_CLOTH = 8,
		GTA_SURFACE_TYPE_GARAGE_DOOR       = 9,
		GTA_SURFACE_TYPE_CAR_PANEL         = 10,
		GTA_SURFACE_TYPE_THICK_METAL_PLATE = 11,
		GTA_SURFACE_TYPE_SCAFFOLD_POLE     = 12,
		GTA_SURFACE_TYPE_LAMP_POST         = 13,
		GTA_SURFACE_TYPE_FIRE_HYDRANT      = 14,
		GTA_SURFACE_TYPE_GIRDER            = 15,
		GTA_SURFACE_TYPE_METAL_CHAIN_FENCE = 16,
		GTA_SURFACE_TYPE_PED               = 17,
		GTA_SURFACE_TYPE_SAND              = 18,
		GTA_SURFACE_TYPE_SHALLOW_WATER     = 19,
		GTA_SURFACE_TYPE_WOOD_CRATES       = 20,
		GTA_SURFACE_TYPE_WOOD_BENCH        = 21,
		GTA_SURFACE_TYPE_WOOD_SOLID        = 22,
		GTA_SURFACE_TYPE_RUBBER            = 23,
		GTA_SURFACE_TYPE_PLASTIC           = 24,
		GTA_SURFACE_TYPE_VEGETATION        = 25,
		GTA_SURFACE_TYPE_STEEPHILL         = 26,
		GTA_SURFACE_TYPE_CONTAINER         = 27,
		GTA_SURFACE_TYPE_NEWS_VENDOR       = 28,
		GTA_SURFACE_TYPE_WHEELBASE         = 29,
		GTA_SURFACE_TYPE_CARDBOARDBOX      = 30,
		GTA_SURFACE_TYPE_TRANSPARENT_STONE = 31,
		GTA_SURFACE_TYPE_METAL_GATE        = 32,
		GTA_SURFACE_TYPE_MAX               = 33
	};

	/**
	 * Enum GTABase.EGTATransitionState
	 */
	enum class EGTATransitionState : uint8_t
	{
		GTRAN_INITIAL_FADE_IN = 0,
		GTRAN_FADED_IN        = 1,
		GTRAN_FADE_IN         = 2,
		GTRAN_FADED_IN01      = 3,
		GTRAN_FINAL_FADE_OUT  = 4,
		GTRAN_FINAL_FADED_OUT = 5,
		GTRANS_MAX            = 6,
		MAX                   = 7
	};

	/**
	 * Enum GTABase.EGTASettingsCategory
	 */
	enum class EGTASettingsCategory : uint8_t
	{
		SC_Graphics = 0,
		SC_Controls = 1,
		SC_Gameplay = 2,
		SC_Audio    = 3,
		SC_Language = 4,
		SC_MAX      = 5
	};

	/**
	 * Enum GTABase.EGTAWeatherRegion
	 */
	enum class EGTAWeatherRegion : uint8_t
	{
		LA      = 0,
		SF      = 1,
		Vegas   = 2,
		Country = 3,
		Desert  = 4,
		Unused  = 5,
		MAX     = 6
	};

	/**
	 * Enum GTABase.EGTAWeather
	 */
	enum class EGTAWeather : uint8_t
	{
		ExtraSunny      = 0,
		Sunny           = 1,
		ExtraSunny_Smog = 2,
		Sunny_Smog      = 3,
		Cloudy          = 4,
		Rainy           = 5,
		Foggy           = 6,
		Sandstorm       = 7,
		Underwater      = 8,
		Misc1           = 9,
		Misc2           = 10,
		Riots           = 11,
		MAX             = 12
	};

	/**
	 * Enum GTABase.EGTASaveTabState
	 */
	enum class EGTASaveTabState : uint8_t
	{
		STS_None    = 0,
		STS_Load    = 1,
		STS_Save    = 2,
		STS_NewGame = 3,
		STS_Delete  = 4,
		STS_MAX     = 5
	};

	/**
	 * Enum GTABase.EGTAGameType
	 */
	enum class EGTAGameType : uint8_t
	{
		GT_ALL  = 0,
		GT_GTA3 = 1,
		GT_SA   = 2,
		GT_VC   = 3,
		GT_INV  = 4,
		GT_MAX  = 5
	};

	/**
	 * Enum GTABase.EGTAOptionItemStyle
	 */
	enum class EGTAOptionItemStyle : uint8_t
	{
		OISSelection      = 0,
		OISBool           = 1,
		OISSlider         = 2,
		OISFunctionButton = 3,
		MAX               = 4
	};

	/**
	 * Enum GTABase.EGTAPlatforms
	 */
	enum class EGTAPlatforms : uint8_t
	{
		PLAT_ALL     = 0,
		PLAT_PC      = 1,
		PLAT_IOS     = 2,
		PLAT_Android = 3,
		PLAT_PS4     = 4,
		PLAT_XB1     = 5,
		PLAT_Switch  = 6,
		PLAT_PS5     = 7,
		PLAT_XSX     = 8,
		PLAT_Inv     = 9,
		PLAT_MAX     = 10
	};

	/**
	 * Enum GTABase.EGTAInputType
	 */
	enum class EGTAInputType : uint8_t
	{
		InputType_Touch    = 0,
		InputType_Keyboard = 1,
		InputType_Joystick = 2,
		InputType_MAX      = 3
	};

	/**
	 * Enum GTABase.EVolumetricVizType
	 */
	enum class EVolumetricVizType : uint8_t
	{
		Viz_None                 = 0,
		Viz_SmallGrid_AO         = 1,
		Viz_LargeGrid_AO         = 2,
		Viz_BothGrids_AO         = 3,
		Viz_SmallGrid_Uplighting = 4,
		Viz_LargeGrid_Uplighting = 5,
		Viz_BothGrids_Uplighting = 6,
		Viz_SkyOcclusion         = 7,
		Viz_MAX                  = 8
	};

	/**
	 * Enum GTABase.EGTAGrassScaling
	 */
	enum class EGTAGrassScaling : uint8_t
	{
		Uniform = 0,
		Free    = 1,
		LockXY  = 2,
		MAX     = 3
	};

	/**
	 * Enum GTABase.EHUDType
	 */
	enum class EHUDType : uint8_t
	{
		eQuad = 0,
		eText = 1,
		MAX   = 2
	};

	/**
	 * Enum GTABase.EHUDTextJustify
	 */
	enum class EHUDTextJustify : uint8_t
	{
		Left   = 0,
		Center = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum GTABase.EGTAMiscLightType
	 */
	enum class EGTAMiscLightType : uint8_t
	{
		LT_AlwaysOn     = 0,
		LT_StreetLight  = 1,
		LT_DeepNight    = 2,
		LT_NotDeepNight = 3,
		LT_Random       = 4,
		LT_MAX          = 5
	};

	/**
	 * Enum GTABase.ECheckpointType
	 */
	enum class ECheckpointType : uint8_t
	{
		ECT_CHECKPOINT_TUBE         = 0,
		ECT_CHECKPOINT_ENDTUBE      = 1,
		ECT_CHECKPOINT_EMPTYTUBE    = 2,
		ECT_CHECKPOINT_TORUS        = 3,
		ECT_CHECKPOINT_TORUS_NOFADE = 4,
		ECT_CHECKPOINT_TORUSROT     = 5,
		ECT_CHECKPOINT_TORUSTHROUGH = 6,
		ECT_CHECKPOINT_TORUS_UPDOWN = 7,
		ECT_CHECKPOINT_TORUS_DOWN   = 8,
		ECT_CHECKPOINT_NUM          = 9,
		ECT_CHECKPOINT_MAX          = 10
	};

	/**
	 * Enum GTABase.EGTAVizGame
	 */
	enum class EGTAVizGame : uint8_t
	{
		GTA_VIZ     = 0,
		GTA_VIZ_VC  = 1,
		GTA_VIZ_SA  = 2,
		GTA_VIZ_MAX = 3
	};

	/**
	 * Enum GTABase.EGTANodeType
	 */
	enum class EGTANodeType : uint8_t
	{
		CarNode   = 0,
		PedNode   = 1,
		RadarNode = 2,
		MAX       = 3
	};

	/**
	 * Enum GTABase.ERadarMode
	 */
	enum class ERadarMode : uint8_t
	{
		RM_NORMAL               = 0,
		RM_STOPATSTREET         = 1,
		RM_DISABLESWITCHEDOFF   = 2,
		RM_PAYNSPRAY            = 3,
		RM_IGNORETRAFFICFLOW    = 4,
		RM_ENABLEOUTSIDEMISSION = 5,
		RM_MAX                  = 6
	};

	/**
	 * Enum GTABase.ERadarState
	 */
	enum class ERadarState : uint8_t
	{
		RS_NORMAL   = 0,
		RS_INTERIOR = 1,
		RS_MAX      = 2
	};

	/**
	 * Enum GTABase.ERadarBlipAnimaStyle
	 */
	enum class ERadarBlipAnimaStyle : uint8_t
	{
		RAS_ForcePulse = 0,
		RAS_HeartBeat  = 1,
		RAS_MAX        = 2
	};

	/**
	 * Enum GTABase.EGTARadioStations
	 */
	enum class EGTARadioStations : uint8_t
	{
		GTA3_RADIO_HEAD        = 0,
		GTA3_RADIO_CLASS       = 1,
		GTA3_RADIO_JAH         = 2,
		GTA3_RADIO_RISE        = 3,
		GTA3_RADIO_LIPS        = 4,
		GTA3_RADIO_GAME        = 5,
		GTA3_RADIO_MSX         = 6,
		GTA3_RADIO_FLASH       = 7,
		GTA3_RADIO_CHAT        = 8,
		GTA3_MAX_STATIONS      = 9,
		GTAVC_RADIO_WILD       = 10,
		GTAVC_RADIO_FLASH      = 11,
		GTAVC_RADIO_KCHAT      = 12,
		GTAVC_RADIO_FEVER      = 13,
		GTAVC_RADIO_VROCK      = 14,
		GTAVC_RADIO_VCPR       = 15,
		GTAVC_RADIO_ESP        = 16,
		GTAVC_RADIO_EMO        = 17,
		GTAVC_RADIO_WAVE       = 18,
		GTAVC_MAX_STATIONS     = 19,
		GTASA_RADIO_PLAYBACKFM = 20,
		GTASA_RADIO_ROSEFM     = 21,
		GTASA_RADIO_KDST       = 22,
		GTASA_RADIO_BOUNCE     = 23,
		GTASA_RADIO_SFUR       = 24,
		GTASA_RADIO_LOSSANTOS  = 25,
		GTASA_RADIO_RADIOX     = 26,
		GTASA_RADIO_CSR        = 27,
		GTASA_RADIO_KJAH       = 28,
		GTASA_RADIO_MASTER     = 29,
		GTASA_RADIO_WCTR       = 30,
		GTASA_RADIO_ADVERTS    = 31,
		MAX                    = 32
	};

	/**
	 * Enum GTABase.EGTARadioGame
	 */
	enum class EGTARadioGame : uint8_t
	{
		GTA_RADIO     = 0,
		GTA_RADIO_VC  = 1,
		GTA_RADIO_SA  = 2,
		GTA_RADIO_MAX = 3
	};

	/**
	 * Enum GTABase.EGTAReverbPreset
	 */
	enum class EGTAReverbPreset : uint8_t
	{
		GTA_REVERB_GENERIC         = 0,
		GTA_REVERB_PADDEDCELL      = 1,
		GTA_REVERB_ROOM            = 2,
		GTA_REVERB_BATHROOM        = 3,
		GTA_REVERB_LIVINGROOM      = 4,
		GTA_REVERB_STONEROOM       = 5,
		GTA_REVERB_AUDITORIUM      = 6,
		GTA_REVERB_CONCERTHALL     = 7,
		GTA_REVERB_CAVE            = 8,
		GTA_REVERB_ARENA           = 9,
		GTA_REVERB_HANGAR          = 10,
		GTA_REVERB_CARPETEDHALLWAY = 11,
		GTA_REVERB_HALLWAY         = 12,
		GTA_REVERB_STONECORRIDOR   = 13,
		GTA_REVERB_ALLEY           = 14,
		GTA_REVERB_FOREST          = 15,
		GTA_REVERB_CITY            = 16,
		GTA_REVERB_MOUNTAINS       = 17,
		GTA_REVERB_QUARRY          = 18,
		GTA_REVERB_PLAIN           = 19,
		GTA_REVERB_PARKINGLOT      = 20,
		GTA_REVERB_SEWERPIPE       = 21,
		GTA_REVERB_UNDERWATER      = 22,
		GTA_REVERB_NOREVERB        = 23,
		GTA_REVERB_MAX             = 24
	};

	/**
	 * Enum GTABase.ETargetHighlightType
	 */
	enum class ETargetHighlightType : uint8_t
	{
		THT_Friendly = 0,
		THT_Aggro    = 1,
		THT_Subtle   = 2,
		THT_Num      = 3,
		THT_MAX      = 4
	};

	/**
	 * Enum GTABase.GTAVehicleType
	 */
	enum class EGTAVehicleType : uint8_t
	{
		GTAVehicleType_VT_UNSET        = 0,
		GTAVehicleType_VT_CAR          = 1,
		GTAVehicleType_VT_MONSTERTRUCK = 2,
		GTAVehicleType_VT_QUADBIKE     = 3,
		GTAVehicleType_VT_HELI         = 4,
		GTAVehicleType_VT_PLANE        = 5,
		GTAVehicleType_VT_BOAT         = 6,
		GTAVehicleType_VT_TRAIN        = 7,
		GTAVehicleType_VT_FAKE_PLANE   = 8,
		GTAVehicleType_VT_BIKE         = 9,
		GTAVehicleType_VT_BMX          = 10,
		GTAVehicleType_VT_TRAILER      = 11,
		GTAVehicleType_VT_MAX          = 12
	};

	/**
	 * Enum GTABase.FSpecialLightType
	 */
	enum class EFSpecialLightType : uint8_t
	{
		SLT_Dashlight  = 0,
		SLT_Domelight  = 1,
		SLT_SirenLeft  = 2,
		SLT_SirenRight = 3,
		SLT_NUM        = 4,
		SLT_MAX        = 5
	};

	/**
	 * Enum GTABase.HIDMapping
	 */
	enum class EHIDMapping : uint8_t
	{
		HID_MAPPING_UNKNOWN                         = 0,
		HID_MAPPING_ATTACK                          = 1,
		HID_MAPPING_SPRINT                          = 2,
		HID_MAPPING_JUMP                            = 3,
		HID_MAPPING_CROUCH                          = 4,
		HID_MAPPING_ENTER_CAR                       = 5,
		HID_MAPPING_BRAKE                           = 6,
		HID_MAPPING_HANDBRAKE                       = 7,
		HID_MAPPING_ACCELERATE                      = 8,
		HID_MAPPING_CAMERA_CLOSER                   = 9,
		HID_MAPPING_CAMERA_FARTHER                  = 10,
		HID_MAPPING_HORN                            = 11,
		HID_MAPPING_RADIO_PREV_STATION              = 12,
		HID_MAPPING_RADIO_NEXT_STATION              = 13,
		HID_MAPPING_VITAL_STATS                     = 14,
		HID_MAPPING_NEXT_WEAPON                     = 15,
		HID_MAPPING_PREV_WEAPON                     = 16,
		HID_MAPPING_RADAR                           = 17,
		HID_MAPPING_PED_LOOK_BACK                   = 18,
		HID_MAPPING_VEHICLE_LOOK_LEFT               = 19,
		HID_MAPPING_VEHICLE_LOOK_RIGHT              = 20,
		HID_MAPPING_VEHICLE_LOOK_BACK               = 21,
		HID_MAPPING_MISSION_START_AND_CANCEL        = 22,
		HID_MAPPING_VIGILANTE_AND_MISC_VEHICLE      = 23,
		HID_MAPPING_VEHICLE_STEER_X                 = 24,
		HID_MAPPING_VEHICLE_STEER_Y                 = 25,
		HID_MAPPING_VEHICLE_STEER_LEFT              = 26,
		HID_MAPPING_VEHICLE_STEER_RIGHT             = 27,
		HID_MAPPING_LOOK_X                          = 28,
		HID_MAPPING_LOOK_Y                          = 29,
		HID_MAPPING_PED_MOVE_X                      = 30,
		HID_MAPPING_PED_MOVE_Y                      = 31,
		HID_MAPPING_SWAP_WEAPONS_PURCHASE_AND_PHONE = 32,
		HID_MAPPING_WEAPON_ZOOM_IN                  = 33,
		HID_MAPPING_WEAPON_ZOOM_OUT                 = 34,
		HID_MAPPING_ENTER_AND_EXIT_TARGETING        = 35,
		HID_MAPPING_VEHICLE_BOMB                    = 36,
		HID_MAPPING_TURRET_LEFT                     = 37,
		HID_MAPPING_TURRET_RIGHT                    = 38,
		HID_MAPPING_SKIP_CUTSCENE                   = 39,
		HID_MAPPING_GANG_RECRUIT_FOLLOW             = 40,
		HID_MAPPING_GANG_IGNORE_HOLD_POSITION       = 41,
		HID_MAPPING_RHYTHM_UP                       = 42,
		HID_MAPPING_RHYTHM_DOWN                     = 43,
		HID_MAPPING_RHYTHM_LEFT                     = 44,
		HID_MAPPING_RHYTHM_RIGHT                    = 45,
		HID_MAPPING_NITRO                           = 46,
		HID_MAPPING_CRANE_UP                        = 47,
		HID_MAPPING_CRANE_DOWN                      = 48,
		HID_MAPPING_ACCEPT                          = 49,
		HID_MAPPING_CANCEL                          = 50,
		HID_MAPPING_MENU_DOWN                       = 51,
		HID_MAPPING_MENU_UP                         = 52,
		HID_MAPPING_MENU_LEFT                       = 53,
		HID_MAPPING_MENU_RIGHT                      = 54,
		HID_MAPPING_MENU_ACCEPT                     = 55,
		HID_MAPPING_MENU_BACK                       = 56,
		HID_MAPPING_ARCADE_BUTTON                   = 57,
		HID_MAPPING_ARCADE_POWER_OFF                = 58,
		HID_MAPPING_ARCADE_RESET                    = 59,
		HID_MAPPING_ARCADE_JOYSTICK                 = 60,
		HID_MAPPING_GYM_ACTION                      = 61,
		HID_MAPPING_GYM_EASIER_LEVEL                = 62,
		HID_MAPPING_GYM_HARDER_LEVEL                = 63,
		HID_MAPPING_BLACK_JACK_SPLIT                = 64,
		HID_MAPPING_BLACK_JACK_DOUBLE               = 65,
		HID_MAPPING_BLACK_JACK_HIT                  = 66,
		HID_MAPPING_BLACK_JACK_STAND                = 67,
		HID_MAPPING_PLACE_BET                       = 68,
		HID_MAPPING_REMOVE_BET                      = 69,
		HID_MAPPING_NEXT_TARGET                     = 70,
		HID_MAPPING_PREV_TARGET                     = 71,
		HID_MAPPING_WAYPOINT_BLIP                   = 72,
		HID_MAPPING_HELICOPTER_MAGNET_UP            = 73,
		HID_MAPPING_HELICOPTER_MAGNET_DOWN          = 74,
		HID_MAPPING_LOCK_HYDRAULICS                 = 75,
		HID_MAPPING_FLIGHT_ASCEND                   = 76,
		HID_MAPPING_FLIGHT_DESCEND                  = 77,
		HID_MAPPING_FLIGHT_PRIMARY_ATTACK           = 78,
		HID_MAPPING_FLIGHT_SECONDARY_ATTACK         = 79,
		HID_MAPPING_FLIGHT_ALT_LEFT                 = 80,
		HID_MAPPING_FLIGHT_ALT_RIGHT                = 81,
		HID_MAPPING_FLIGHT_ALT_UP                   = 82,
		HID_MAPPING_FLIGHT_ALT_DOWN                 = 83,
		HID_MAPPING_BUNNY_HOP                       = 84,
		HID_MAPPING_MAP_ZOOM_IN                     = 85,
		HID_MAPPING_MAP_ZOOM_OUT                    = 86,
		HID_MAPPING_TAKE_COVER_LEFT                 = 87,
		HID_MAPPING_TAKE_COVER_RIGHT                = 88,
		HID_MAPPING_REPLAY                          = 89,
		HID_MAPPING_TOGGLE_CHEAT_MENU_ONE           = 90,
		HID_MAPPING_TOGGLE_CHEAT_MENU_TWO           = 91,
		HID_MAPPING_MENU_PREV_TAB                   = 92,
		HID_MAPPING_MENU_NEXT_TAB                   = 93,
		HID_MAPPING_VEHICLE_GUNS                    = 94,
		HID_MAPPING_RADAR_ZOOM_OUT                  = 95,
		HID_MAPPING_BMX_ACCELERATE                  = 96,
		HID_MAPPING_BMX_BRAKE                       = 97,
		HID_MAPPING_VEHICLE_BMX_LOOK_LEFT           = 98,
		HID_MAPPING_VEHICLE_BMX_LOOK_RIGHT          = 99,
		HID_MAPPING_BMX_HANDBRAKE                   = 100,
		HID_MAPPING_BMX_ATTACK                      = 101,
		HID_MAPPING_PLANE_RUDDER_LEFT               = 102,
		HID_MAPPING_PLANE_RUDDER_RIGHT              = 103,
		HID_MAPPING_MELEE_ATTACK                    = 104,
		HID_MAPPING_JETPACK_ASCEND                  = 105,
		HID_MAPPING_JETPACK_DESCEND                 = 106,
		HID_MAPPING_JETPACK_FIRE                    = 107,
		HID_MAPPING_WEAPON_WHEEL                    = 108,
		HID_MAPPING_PED_STEALTH                     = 109,
		HID_MAPPING_QUICK_SLOT                      = 110,
		HID_MAPPING_QUICK_SLOT01                    = 111,
		HID_MAPPING_QUICK_SLOT02                    = 112,
		HID_MAPPING_RESET_HYDRAULICS                = 113,
		HID_MAPPING_PREV_TARGET_WITH_STICK          = 114,
		HID_MAPPING_NEXT_TARGET_WITH_STICK          = 115,
		HID_MAPPING_MARKETING_TELEPORT              = 116,
		HID_MAPPING_MARKETING_TOGGLE_ACCELERATION   = 117,
		HID_MAPPING_MAP_ADD_WAYPOINT                = 118,
		HID_MAPPING_MAP_REMOVE_WAYPOINT             = 119,
		HID_MAPPING_MAP_KEY                         = 120,
		HID_MAPPING_FLIGHT_MOUSE_CONTROL            = 121,
		HID_MAPPING_MENU_SHOWGANGS                  = 122,
		HID_MAPPING_MENU_CONFIRM_OPTION             = 123,
		HID_MAPPING_WHEELIE                         = 124,
		HID_MAPPING_STOPPIE                         = 125,
		HID_MAPPING_MENU_UP_LEGEND                  = 126,
		HID_MAPPING_MENU_DOWN_LEGEND                = 127,
		HID_MAPPING_GRAB_PACKAGE                    = 128,
		HID_MAPPING_MENU_ACCOUNTPICKER              = 129,
		HID_MAPPING_CINEMATIC_CAM_NEXT              = 130,
		NUM_HID_MAPPINGS                            = 131,
		HIDMapping_MAX                              = 132
	};

	/**
	 * Enum GTABase.EGTAIMGGame
	 */
	enum class EGTAIMGGame : uint8_t
	{
		GTA_IMG     = 0,
		GTA_IMG_VC  = 1,
		GTA_IMG_SA  = 2,
		GTA_IMG_MAX = 3
	};

	/**
	 * Enum GTABase.WidgetPositionIDs
	 */
	enum class EWidgetPositionIDs : uint8_t
	{
		WIDGET_POSITION_ENTER_CAR                           = 0,
		WIDGET_POSITION_CAR_SHOOT                           = 1,
		WIDGET_POSITION_ACCELERATE                          = 2,
		WIDGET_POSITION_BUTTON_SPRINT_AND_SWIM              = 3,
		WIDGET_POSITION_BRAKE                               = 4,
		WIDGET_POSITION_VEHICLE_STEER_LEFT                  = 5,
		WIDGET_POSITION_VEHICLE_STEER_RIGHT                 = 6,
		WIDGET_POSITION_HORN                                = 7,
		WIDGET_POSITION_HORN_ALT                            = 8,
		WIDGET_POSITION_PHONE                               = 9,
		WIDGET_POSITION_VEHICLE_SHOOT_LEFT                  = 10,
		WIDGET_POSITION_VEHICLE_SHOOT_RIGHT                 = 11,
		WIDGET_POSITION_HANDBRAKE_AND_AIR_SHOOT             = 12,
		WIDGET_POSITION_CAM_TOGGLE                          = 13,
		WIDGET_POSITION_TARGETING_AND_ATTACK                = 14,
		WIDGET_POSITION_VC_SHOOT                            = 15,
		WIDGET_POSITION_VC_SHOOT_ALT                        = 16,
		WIDGET_POSITION_SWAP_WEAPONS                        = 17,
		WIDGET_POSITION_PLACE_BET                           = 18,
		WIDGET_POSITION_REMOVE_BET                          = 19,
		WIDGET_POSITION_NEGATIVE                            = 20,
		WIDGET_POSITION_POSITIVE                            = 21,
		WIDGET_POSITION_POOL_ENGLISH                        = 22,
		WIDGET_POSITION_ARCADE_BUTTON                       = 23,
		WIDGET_POSITION_ARCADE_POWER_OFF                    = 24,
		WIDGET_POSITION_ARCADE_RESET                        = 25,
		WIDGET_POSITION_ARCADE_JOYSTICK                     = 26,
		WIDGET_POSITION_SKIP_CUTSCENE                       = 27,
		WIDGET_POSITION_RACE_LEFT                           = 28,
		WIDGET_POSITION_RACE_RIGHT                          = 29,
		WIDGET_POSITION_STORE_ACCEPT                        = 30,
		WIDGET_POSITION_STORE_CANCEL                        = 31,
		WIDGET_POSITION_STORE_BUY                           = 32,
		WIDGET_POSITION_STEERING_SELECTION                  = 33,
		WIDGET_POSITION_TOUCH_LAYOUT_SELECTION              = 34,
		WIDGET_POSITION_THUMB_CIRCLE                        = 35,
		WIDGET_POSITION_TAP_METER                           = 36,
		WIDGET_POSITION_TAP_METER_BUTTON                    = 37,
		WIDGET_POSITION_MISSION_START_AND_MISSION_CANCEL    = 38,
		WIDGET_POSITION_MISSION_CANCEL_ALT                  = 39,
		WIDGET_POSITION_SCHOOL_EXIT                         = 40,
		WIDGET_POSITION_SCHOOL_LEFT                         = 41,
		WIDGET_POSITION_SCHOOL_RIGHT                        = 42,
		WIDGET_POSITION_SCHOOL_START                        = 43,
		WIDGET_POSITION_SCHOOL_CONTINUE                     = 44,
		WIDGET_POSITION_SCHOOL_TITLE_BACKGROUND             = 45,
		WIDGET_POSITION_SCHOOL_AWARD                        = 46,
		WIDGET_POSITION_SCHOOL_RESULTS                      = 47,
		WIDGET_POSITION_SCHOOL_FRAME_ONE                    = 48,
		WIDGET_POSITION_SCHOOL_FRAME_TWO                    = 49,
		WIDGET_POSITION_SCHOOL_FRAME_THREE                  = 50,
		WIDGET_POSITION_SCHOOL_FRAME_FOUR                   = 51,
		WIDGET_POSITION_BASKETBALL_SHOOT                    = 52,
		WIDGET_POSITION_BASKETBALL_TRICK                    = 53,
		WIDGET_POSITION_GAMBLING_QUIT                       = 54,
		WIDGET_POSITION_GAMBLING_CONTINUE                   = 55,
		WIDGET_POSITION_BLACK_JACK_SPLIT                    = 56,
		WIDGET_POSITION_BLACK_JACK_DOUBLE                   = 57,
		WIDGET_POSITION_BLACK_JACK_HIT                      = 58,
		WIDGET_POSITION_BLACK_JACK_STAND                    = 59,
		WIDGET_POSITION_BLACK_JACK_REGION                   = 60,
		WIDGET_POSITION_BLACK_JACK_SLIDER                   = 61,
		WIDGET_POSITION_RHYTHM_UP                           = 62,
		WIDGET_POSITION_RHYTHM_DOWN                         = 63,
		WIDGET_POSITION_RHYTHM_LEFT                         = 64,
		WIDGET_POSITION_RHYTHM_RIGHT                        = 65,
		WIDGET_POSITION_RHYTHM_SELECT                       = 66,
		WIDGET_POSITION_RHYTHM_EXIT                         = 67,
		WIDGET_POSITION_PLAYER_SCORE                        = 68,
		WIDGET_POSITION_OPPOSITION_SCORE                    = 69,
		WIDGET_POSITION_GANG_REGION                         = 70,
		WIDGET_POSITION_COLOR_PICKER                        = 71,
		WIDGET_POSITION_COLOR_PICKER_PHONES                 = 72,
		WIDGET_POSITION_WOF_FIRST_BET                       = 73,
		WIDGET_POSITION_WOF_SECOND_BET                      = 74,
		WIDGET_POSITION_WOF_THIRD_BET                       = 75,
		WIDGET_POSITION_WOF_FOURTH_BET                      = 76,
		WIDGET_POSITION_WOF_FIFTH_BET                       = 77,
		WIDGET_POSITION_WOF_SIXTH_BET                       = 78,
		WIDGET_POSITION_VIDEO_POKER_ADD_COIN                = 79,
		WIDGET_POSITION_VIDEO_POKER_REMOVE_COIN             = 80,
		WIDGET_POSITION_VIDEO_POKER_HOLD_FIRST_CARD         = 81,
		WIDGET_POSITION_VIDEO_POKER_HOLD_SECOND_CARD        = 82,
		WIDGET_POSITION_VIDEO_POKER_HOLD_THIRD_CARD         = 83,
		WIDGET_POSITION_VIDEO_POKER_HOLD_FOURTH_CARD        = 84,
		WIDGET_POSITION_VIDEO_POKER_HOLD_FIFTH_CARD         = 85,
		WIDGET_POSITION_VIDEO_POKER_HOLD_FIRST_CARD_REGION  = 86,
		WIDGET_POSITION_VIDEO_POKER_HOLD_SECOND_CARD_REGION = 87,
		WIDGET_POSITION_VIDEO_POKER_HOLD_THIRD_CARD_REGION  = 88,
		WIDGET_POSITION_VIDEO_POKER_HOLD_FOURTH_CARD_REGION = 89,
		WIDGET_POSITION_VIDEO_POKER_HOLD_FIFTH_CARD_REGION  = 90,
		WIDGET_POSITION_VIDEO_POKER_EXIT                    = 91,
		WIDGET_POSITION_VIDEO_POKER_DEAL                    = 92,
		WIDGET_POSITION_ITB_FIRST_HORSE                     = 93,
		WIDGET_POSITION_ITB_SECOND_HORSE                    = 94,
		WIDGET_POSITION_ITB_THIRD_HORSE                     = 95,
		WIDGET_POSITION_ITB_FOURTH_HORSE                    = 96,
		WIDGET_POSITION_ITB_FIFTH_HORSE                     = 97,
		WIDGET_POSITION_ITB_FIRST_BET                       = 98,
		WIDGET_POSITION_ITB_SECOND_BET                      = 99,
		WIDGET_POSITION_ITB_THIRD_BET                       = 100,
		WIDGET_POSITION_ITB_FOURTH_BET                      = 101,
		WIDGET_POSITION_ITB_FIFTH_BET                       = 102,
		WIDGET_POSITION_ITB_SIXTH_BET                       = 103,
		WIDGET_POSITION_ITB_SEVENTH_BET                     = 104,
		WIDGET_POSITION_ITB_EIGHTH_BET                      = 105,
		WIDGET_POSITION_ITB_PLACE_BET                       = 106,
		WIDGET_POSITION_ITB_EXIT                            = 107,
		WIDGET_POSITION_MAP                                 = 108,
		WIDGET_POSITION_RESPONSE                            = 109,
		WIDGET_POSITION_HYDRAULICS                          = 110,
		WIDGET_POSITION_DRIVE                               = 111,
		WIDGET_POSITION_PLAYER_INFO                         = 112,
		WIDGET_POSITION_RADAR                               = 113,
		WIDGET_POSITION_HELP_TEXT                           = 114,
		WIDGET_POSITION_HELP_TEXT_ALT                       = 115,
		WIDGET_POSITION_HELP_TEXT_ALT_SHOPS                 = 116,
		WIDGET_POSITION_SWIPE_RADIO                         = 117,
		WIDGET_POSITION_PED_MOVE                            = 118,
		WIDGET_POSITION_SPRINT_AND_BASKETBALL_JUMP          = 119,
		WIDGET_POSITION_SHOOT_LOOK                          = 120,
		WIDGET_POSITION_VEHICLE_STEER_ANALOG                = 121,
		WIDGET_POSITION_VEHICLE_FLICK                       = 122,
		WIDGET_POSITION_LOOK                                = 123,
		WIDGET_POSITION_MISSION_TIMERS                      = 124,
		WIDGET_POSITION_RACING                              = 125,
		WIDGET_POSITION_RACE_RESULTS                        = 126,
		WIDGET_POSITION_HORSE_RESULTS                       = 127,
		WIDGET_POSITION_WAGER                               = 128,
		WIDGET_POSITION_POOL                                = 129,
		WIDGET_POSITION_POKER_PAYOUT                        = 130,
		WIDGET_POSITION_VITAL_STATS                         = 131,
		WIDGET_POSITION_MINIGAME_CANCEL                     = 132,
		WIDGET_POSITION_AIRPORT_LEFT                        = 133,
		WIDGET_POSITION_AIRPORT_RIGHT                       = 134,
		WIDGET_POSITION_TATTOO_PREVIEW                      = 135,
		WIDGET_POSITION_SAVE_NOTIFICATION                   = 136,
		WIDGET_POSITION_REPLAY                              = 137,
		WIDGET_POSITION_PAGER                               = 138,
		NUM_WIDGET_POSITIONS                                = 139,
		WidgetPositionIDs_MAX                               = 140
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct GTABase.DFF2DEffect
	 * Size -> 0x0020
	 */
	struct FDFF2DEffect
	{
	public:
		class FString                                              nodeName;                                                // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      Data;                                                    // 0x0010(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.DFFFrameData
	 * Size -> 0x0020
	 */
	struct FDFFFrameData
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BoneTag;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QBRE[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               BoneRotation;                                            // 0x0010(0x0010) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAModelData
	 * Size -> 0x00A0
	 */
	struct FGTAModelData
	{
	public:
		class FString                                              gtaModelName;                                            // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    modelIndex;                                              // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IHCI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Asset[0x28];                                             // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Blueprint[0x28];                                         // 0x0040(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		TArray<struct FDFF2DEffect>                                FXDatas;                                                 // 0x0068(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      CollisionData;                                           // 0x0078(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FDFFFrameData>                               Frames;                                                  // 0x0088(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ExtraStreamDistance;                                     // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bClassReferenceIsUnique;                                 // 0x009C(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasFrameRotations;                                      // 0x009D(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCollapseMesh;                                        // 0x009E(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9M3U[0x1];                                   // 0x009F(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAStreamRequest
	 * Size -> 0x0048
	 */
	struct FGTAStreamRequest
	{
	public:
		TArray<class UObject*>                                     resultObjects;                                           // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              processor[0x10];                                         // 0x0010(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		unsigned char                                              UnknownData_G0O3[0x28];                                  // 0x0020(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.SpecialCutsceneMapping
	 * Size -> 0x0060
	 */
	struct FSpecialCutsceneMapping
	{
	public:
		TMap<class FString, class FString>                         SpecialToRealName;                                       // 0x0000(0x0050) Edit, NativeAccessSpecifierPublic
		class FString                                              AppendName;                                              // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.HUDItem
	 * Size -> 0x00A0
	 */
	struct FHUDItem
	{
	public:
		EHUDType                                                   Type;                                                    // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XWK6[0x9F];                                  // 0x0001(0x009F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.HelpTextOverrides
	 * Size -> 0x00D0
	 */
	struct FHelpTextOverrides
	{
	public:
		class FString                                              originalKey;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gamepadKey;                                              // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gamepadModernKey;                                        // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gamepadTapToSprintKey;                                   // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gamepadFreeAimKey;                                       // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              touchKey;                                                // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              keyboardKey;                                             // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SwitchKey;                                               // 0x0070(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlaystationKey;                                          // 0x0080(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PS4Key;                                                  // 0x0090(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PS5Key;                                                  // 0x00A0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XBoxKey;                                                 // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PCKey;                                                   // 0x00C0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.ReflectionMaterialSetup
	 * Size -> 0x0058
	 */
	struct FReflectionMaterialSetup
	{
	public:
		class UMaterialInterface*                                  Base;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  SSR;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Planar;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  Cube;                                                    // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        TextureParams;                                           // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        ScalarParams;                                            // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        VectorParams;                                            // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bUseReflectionPower;                                     // 0x0050(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N7I1[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTASelectionOptionSpecifier
	 * Size -> 0x0020
	 */
	struct FGTASelectionOptionSpecifier
	{
	public:
		class FName                                                ForPropertyName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isBool;                                                  // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RD1R[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ForPropertyValue;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAOptionsItemTemplate
	 * Size -> 0x0090
	 */
	struct FGTAOptionsItemTemplate
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayName;                                             // 0x0008(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsDisplayNameKeyed;                                     // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGTAOptionItemStyle                                        Style;                                                   // 0x0021(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GH52[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        SelectionOptions;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    SelectionOffset;                                         // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSlider;                                               // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseText;                                                 // 0x003D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OPP2[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinSlider;                                               // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSlider;                                               // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StepSizeOverride;                                        // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlatformBitMask;                                         // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameBitMask;                                             // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InputType;                                               // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGTASelectionOptionSpecifier>                RequiresOtherSelectionValue;                             // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       RequireListRefreshOnChange;                              // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequireConfirmationOnChange;                             // 0x0069(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ConfirmationMessageOnChangeOnlyForTrue;                  // 0x006A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QO2[0x5];                                   // 0x006B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ConfirmationMessageOnChangeOverride;                     // 0x0070(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       RequireConfirmationPostChange;                           // 0x0088(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresSpecialEnabledCheck;                             // 0x0089(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VisiblyDisabled;                                         // 0x008A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZ46[0x5];                                   // 0x008B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAFidelityChanges
	 * Size -> 0x0044
	 */
	struct FGTAFidelityChanges
	{
	public:
		int32_t                                                    Visuals;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimulationScale;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Streetlights;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    headlights;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResolutionPercent;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Shadows;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameRate;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AntiAlias;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AnisotropicFiltering;                                    // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DistanceScale;                                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TextureQuality;                                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReflectionQuality;                                       // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CarReflectionMethod;                                     // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmbientOcclusion;                                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tessellation;                                            // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CityGlowEffect;                                          // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CloudQuality;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTASettings_Graphics
	 * Size -> 0x0080
	 */
	struct FGTASettings_Graphics
	{
	public:
		int32_t                                                    Visuals;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SimulationScale;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Streetlights;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    headlights;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResolutionPercent;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Shadows;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Brightness;                                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Contrast;                                                // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Sharpening;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Renderer;                                                // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DisplayMode;                                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameRate;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameRatePC;                                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ResolutionSize;                                          // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputMonitor;                                           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VSync;                                                   // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PYS[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AntiAlias;                                               // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AnisotropicFiltering;                                    // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DistanceScale;                                           // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TextureQuality;                                          // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReflectionQuality;                                       // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CarReflectionMethod;                                     // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RTX;                                                     // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmbientOcclusion;                                        // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Tessellation;                                            // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CityGlowEffect;                                          // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CloudQuality;                                            // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Bloom;                                                   // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LensFlare;                                               // 0x006D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MotionBlur;                                              // 0x006E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DepthOfField;                                            // 0x006F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HDR;                                                     // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_STZL[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DLSS;                                                    // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AspectRatio;                                             // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GroundHaze;                                              // 0x007C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEUB[0x3];                                   // 0x007D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTASettings_Controls
	 * Size -> 0x0048
	 */
	struct FGTASettings_Controls
	{
	public:
		int32_t                                                    SteerType;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Accelerometer;                                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TouchLayout;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LeftHanded;                                              // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InvertLook;                                              // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHJR[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BikeControl;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JoypadLookSensitivity;                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JoypadFirstPersonAimingSensitivity;                      // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JoypadThirdPersonAimingSensitivity;                      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       VibrationFeedback;                                       // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4YQ[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MouseSensitivityX;                                       // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MouseSensitivityY;                                       // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TapToShoot;                                              // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GyroControls;                                            // 0x002D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZGS[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GyroSensitivity;                                         // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InvertGyroX;                                             // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InvertGyroY;                                             // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WU9[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ControlScheme;                                           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoClimb;                                               // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ModernKeyboardDriveBy;                                   // 0x003D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_149D[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TouchSensitivity;                                        // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TapToSprint;                                             // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ModernMeleeAttacks;                                      // 0x0045(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59UB[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTASettings_Gameplay
	 * Size -> 0x001C
	 */
	struct FGTASettings_Gameplay
	{
	public:
		int32_t                                                    Traffic;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Targeting;                                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimAssistSensitivity;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VehicleCameraHeight;                                     // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimulationSpeed;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FrameLimiter;                                            // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableAutoSleepInCutscenes;                             // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PauseOnFocusLoss;                                        // 0x0016(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableTargetOutline;                                    // 0x0017(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClassicRadar;                                            // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SHKU[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTASettings_Audio
	 * Size -> 0x0020
	 */
	struct FGTASettings_Audio
	{
	public:
		float                                                      SFXVolume;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MusicVolume;                                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DialogueVolume;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Autotune;                                                // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z717[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultRadioStationSA;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultRadioStationVC;                                   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DefaultRadioStationIII;                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HRTF;                                                    // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReplayKit;                                               // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EPLG[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTASettings_Language
	 * Size -> 0x001C
	 */
	struct FGTASettings_Language
	{
	public:
		int32_t                                                    Language;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Subtitles;                                               // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ULSZ[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SubtitleSize;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HelpTextSize;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InvincibleMode;                                          // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GTZ1[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ColorBlindMode;                                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ReducedFOV;                                              // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ0X[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAFidelitySettings
	 * Size -> 0x0020
	 */
	struct FGTAFidelitySettings
	{
	public:
		class FName                                                Platform;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       b4kOrGreater;                                            // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LUNV[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGTAFidelityOption*>                          FidelityOptions;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.SkeletonToSkeletonMap
	 * Size -> 0x13A0
	 */
	struct FSkeletonToSkeletonMap
	{
	public:
		unsigned char                                              UnknownData_M256[0x13A0];                                // 0x0000(0x13A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.SKBoneSituation
	 * Size -> 0x0018
	 */
	struct FSKBoneSituation
	{
	public:
		TArray<struct FQuat>                                       FrameData;                                               // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStale;                                                  // 0x0014(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMAA[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.SkelProxyBoneTweak
	 * Size -> 0x0040
	 */
	struct FSkelProxyBoneTweak
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H6HC[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Trx;                                                     // 0x0010(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.BloodyFootprint
	 * Size -> 0x00B0
	 */
	struct FBloodyFootprint
	{
	public:
		struct FTransform                                          Transform;                                               // 0x0000(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Lifetime;                                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZQ4[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDecalComponent*                                     Component;                                               // 0x0038(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialAlpha;                                            // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IXK[0x6C];                                  // 0x0044(0x006C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTACarRecordingData
	 * Size -> 0x0038
	 */
	struct FGTACarRecordingData
	{
	public:
		uint32_t                                                   Time;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Speed;                                                   // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MatrixX;                                                 // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MatrixY;                                                 // 0x001C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     SteerAngle;                                              // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     Gas;                                                     // 0x0029(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     Brake;                                                   // 0x002A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int8_t                                                     HandBrake;                                               // 0x002B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Coords;                                                  // 0x002C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTACarRecordingFile
	 * Size -> 0x0020
	 */
	struct FGTACarRecordingFile
	{
	public:
		class FString                                              OriginalFileLocation;                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGTACarRecordingData>                        Keyframes;                                               // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTACinematicLevelLoad
	 * Size -> 0x0018
	 */
	struct FGTACinematicLevelLoad
	{
	public:
		float                                                      TimeNeeded;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeNotNeeded;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToLoad;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LevelToLoad;                                             // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceVisible;                                           // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCurrentlyLoaded;                                        // 0x0015(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OFO0[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTACinematicData
	 * Size -> 0x0048
	 */
	struct FGTACinematicData
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Sequence[0x28];                                          // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FGTACinematicLevelLoad>                      LevelLoads;                                              // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ForceArea;                                               // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePlayerForReflectionPosition;                         // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U8XN[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTABoundingBox
	 * Size -> 0x0028
	 */
	struct FGTABoundingBox
	{
	public:
		struct FVector                                             BoxMin;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoxMax;                                                  // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SphereCentre;                                            // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SphereRadius;                                            // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAColAccelItem
	 * Size -> 0x0030
	 */
	struct FGTAColAccelItem
	{
	public:
		struct FGTABoundingBox                                     Bounds;                                                  // 0x0000(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    modelIndex;                                              // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Level;                                                   // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HasCollisionVols;                                        // 0x002D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_37TA[0x2];                                   // 0x002E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTARect
	 * Size -> 0x0010
	 */
	struct FGTARect
	{
	public:
		float                                                      Left;                                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Top;                                                     // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Right;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bottom;                                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAColDefAccelItem
	 * Size -> 0x0018
	 */
	struct FGTAColDefAccelItem
	{
	public:
		struct FGTARect                                            BoundingBox;                                             // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int16_t                                                    FirstModel;                                              // 0x0010(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    LastModel;                                               // 0x0012(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InMemoryAlways;                                          // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Interior;                                                // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RUVU[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAIplAccelItem
	 * Size -> 0x0014
	 */
	struct FGTAIplAccelItem
	{
	public:
		int32_t                                                    IplIndex;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LodIndex;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    modelIndex;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LodModelIndex;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Actions;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAIplDef
	 * Size -> 0x0034
	 */
	struct FGTAIplDef
	{
	public:
		struct FGTARect                                            BoundingBox;                                             // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Name[0x12];                                              // 0x0010(0x0012) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    FirstBuilding;                                           // 0x0022(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    LastBuilding;                                            // 0x0024(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    FirstDummy;                                              // 0x0026(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    LastDummy;                                               // 0x0028(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    StaticIplIndex;                                          // 0x002A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Interior;                                                // 0x002C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Loaded;                                                  // 0x002D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Required;                                                // 0x002E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Ignore;                                                  // 0x002F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreWhenDeleted;                                       // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LargeIpl;                                                // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2PY[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAColSphere
	 * Size -> 0x0010
	 */
	struct FGTAColSphere
	{
	public:
		float                                                      Radius;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Origin;                                                  // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAColBoundingBox
	 * Size -> 0x002C
	 */
	struct FGTAColBoundingBox
	{
	public:
		struct FGTAColSphere                                       BoundingSphere;                                          // 0x0000(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                BoundingBox;                                             // 0x0010(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAColCapsule
	 * Size -> 0x0024
	 */
	struct FGTAColCapsule
	{
	public:
		unsigned char                                              SpheresAlongLine;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XTH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             position;                                                // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Rotation;                                                // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Length;                                                  // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAColBox
	 * Size -> 0x0050
	 */
	struct FGTAColBox
	{
	public:
		struct FTransform                                          InternalTransform;                                       // 0x0000(0x0030) Edit, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBox                                                Box;                                                     // 0x0030(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EGTAColSurfaceType                                         SurfaceType;                                             // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNOG[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAColTriData
	 * Size -> 0x0028
	 */
	struct FGTAColTriData
	{
	public:
		uint32_t                                                   Dummy;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_APUA[0x24];                                  // 0x0004(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.CollisionMeshGroup
	 * Size -> 0x001C
	 */
	struct FCollisionMeshGroup
	{
	public:
		struct FVector                                             Min;                                                     // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Max;                                                     // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   StartFace;                                               // 0x0018(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   EndFace;                                                 // 0x001A(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.CollisionMeshSection
	 * Size -> 0x0010
	 */
	struct FCollisionMeshSection
	{
	public:
		TArray<struct FCollisionMeshGroup>                         Groups;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.DecalEntry
	 * Size -> 0x0018
	 */
	struct FDecalEntry
	{
	public:
		class UProceduralMeshComponent*                            DecalComponent;                                          // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeStart;                                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeEnd;                                                 // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumEntries;                                              // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxEntries;                                              // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.Text3DEntry
	 * Size -> 0x0020
	 */
	struct FText3DEntry
	{
	public:
		class UText3DComponent*                                    Component;                                               // 0x0000(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CachedString;                                            // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMIDs;                                                // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QULC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAEffectData
	 * Size -> 0x0030
	 */
	struct FGTAEffectData
	{
	public:
		class FName                                                LookupName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     System;                                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     System_VC;                                               // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     System_GTA3;                                             // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           Sound;                                                   // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TransparencyPriority;                                    // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33E0[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.BulletImpactInfo
	 * Size -> 0x00A8
	 */
	struct FBulletImpactInfo
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SurfaceTypes[0x50];                                      // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
		class UMaterialInstanceConstant*                           HoleMIC;                                                 // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         BulletHoleSize;                                          // 0x0060(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BulletHoleVertexColor;                                   // 0x0070(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DebrisCount;                                             // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebrisSize;                                              // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebrisVelocity;                                          // 0x0088(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DebrisColor;                                             // 0x008C(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZRF[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ImpactSystem;                                            // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.AOGridInfo
	 * Size -> 0x0028
	 */
	struct FAOGridInfo
	{
	public:
		int32_t                                                    NumCells;                                                // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSkyCells;                                             // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_41EA[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAMeshVariation
	 * Size -> 0x0010
	 */
	struct FGTAMeshVariation
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceConstant*                           MIC;                                                     // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTANoiseModSettings
	 * Size -> 0x0008
	 */
	struct FGTANoiseModSettings
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Strength;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAGrassProcGeneration
	 * Size -> 0x0058
	 */
	struct FGTAGrassProcGeneration
	{
	public:
		class UMaterialInstanceConstant*                           Material;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector4>                                    UVSets;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FFloatInterval                                      CardHeight;                                              // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      CardWidth;                                               // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CardFlattening;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalRandomization;                                     // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundNormalBottom;                                      // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundNormalTop;                                         // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EdgeBiasedScalingDistance;                               // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGTANoiseModSettings                                HeightNoiseMap;                                          // 0x003C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGTANoiseModSettings                                AONoiseMap;                                              // 0x0044(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGTANoiseModSettings                                UVNoiseMap;                                              // 0x004C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bNonUniformHeight : 1;                                   // 0x0054(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KTO[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAGrassSpawn
	 * Size -> 0x0038
	 */
	struct FGTAGrassSpawn
	{
	public:
		struct FPerPlatformInt                                     StartCullDistance;                                       // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPerPlatformInt                                     EndCullDistance;                                         // 0x0004(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MinLOD;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGTAGrassScaling                                           Scaling;                                                 // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T87L[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScalePower;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ScaleX;                                                  // 0x0014(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ScaleY;                                                  // 0x001C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ScaleZ;                                                  // 0x0024(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      ZOffset;                                                 // 0x002C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RandomRotation : 1;                                      // 0x0034(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              AlignToSurface : 1;                                      // 0x0034(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bCastDynamicShadow : 1;                                  // 0x0034(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bIncludeOnMobile : 1;                                    // 0x0034(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5GA[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTANoiseSettings
	 * Size -> 0x000C
	 */
	struct FGTANoiseSettings
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatInterval                                      Range;                                                   // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAGrassPlacement
	 * Size -> 0x0024
	 */
	struct FGTAGrassPlacement
	{
	public:
		struct FPerPlatformFloat                                   GrassDensity;                                            // 0x0000(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      PlacementJitter;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EdgeMinDistance;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EdgeMaxDistance;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KeepApartDistance;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGTANoiseSettings                                   Noise;                                                   // 0x0014(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              bEdgeAllowCreeping : 1;                                  // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDoNotHugWalls : 1;                                      // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEdgeTapering : 1;                                       // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bChangeOverTime : 1;                                     // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bMaskWithNoise : 1;                                      // 0x0020(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TUIG[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAGrassVariety
	 * Size -> 0x00E0
	 */
	struct FGTAGrassVariety
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGTAMeshVariation>                           Meshes;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              SlowBlueprint;                                           // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConstructProcedurally;                                  // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RTD[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGTAGrassProcGeneration                             Procedural;                                              // 0x0028(0x0058) Edit, NativeAccessSpecifierPublic
		struct FGTAGrassSpawn                                      Spawn;                                                   // 0x0080(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGTAGrassPlacement                                  Place;                                                   // 0x00B8(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGDC[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAGrassListing
	 * Size -> 0x0088
	 */
	struct FGTAGrassListing
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleMultiplier;                                         // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DensityMultiplier;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProceduralHeightMultiplier;                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoundsExpand;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPatchSize;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPatchSize;                                            // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxJoin2DPercent;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxJoinZError;                                           // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAllowedZ;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinWorldZ;                                               // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxWorldZ;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BAYX[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MaterialDictionary[0x50];                                // 0x0038(0x0050) UNKNOWN PROPERTY: MapProperty
	};

	/**
	 * ScriptStruct GTABase.GTAPatchDefinition
	 * Size -> 0x0078
	 */
	struct FGTAPatchDefinition
	{
	public:
		class UGTAClutterGrassType*                                Grasses;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ListingIndex;                                            // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeOnDisk;                                              // 0x000C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                Bounds;                                                  // 0x0010(0x001C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2HWV[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            GroupIndices;                                            // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		struct FVector                                             BaseLocation;                                            // 0x0040(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocationDelta;                                           // 0x004C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z6FS[0x20];                                  // 0x0058(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAForceFeedback
	 * Size -> 0x0010
	 */
	struct FGTAForceFeedback
	{
	public:
		class UForceFeedbackEffect*                                FFE;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       attenuated;                                              // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5QQ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAIFPKeyframe
	 * Size -> 0x0014
	 */
	struct FGTAIFPKeyframe
	{
	public:
		int32_t                                                    KeyframeIndex;                                           // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExtractedDistance;                                       // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtractedTime;                                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAIFPFile
	 * Size -> 0x0020
	 */
	struct FGTAIFPFile
	{
	public:
		bool                                                       bEnableOverridesForThisAnimation;                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7J4N[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    GroupId;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AnimId;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JMVU[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGTAIFPKeyframe>                             Keyframes;                                               // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.PathNode
	 * Size -> 0x0024
	 */
	struct FPathNode
	{
	public:
		uint32_t                                                   PreviousLink;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NextLink;                                                // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             position;                                                // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IndexAdjacentNodes;                                      // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NodeIndex;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PathWidth;                                               // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Group;                                                   // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NumAdjacentNodes;                                        // 0x001E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDeadEnd : 1;                                            // 0x001F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSwitchedOff : 1;                                        // 0x001F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bRoadBlock : 1;                                          // 0x001F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bWaterNode : 1;                                          // 0x001F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bSwitchedOffOriginal : 1;                                // 0x001F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bAlreadyFound : 1;                                       // 0x001F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bDontWanderHere : 1;                                     // 0x001F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bInteriorNode : 1;                                       // 0x001F(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Speed;                                                   // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Density;                                                 // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SpecialFunction;                                         // 0x0022(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSLD[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.PathLink
	 * Size -> 0x0028
	 */
	struct FPathLink
	{
	public:
		struct FVector                                             position;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Node1Region;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Node1Index;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0014(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Width;                                                   // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LanesTo;                                                 // 0x0021(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LanesFrom;                                               // 0x0022(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Node1HasMoreTrafficLightNeighbors;                       // 0x0023(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TrafficLightsCycle;                                      // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BridgeOrRailwayLights;                                   // 0x0025(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGHU[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.PathAdjacent
	 * Size -> 0x0010
	 */
	struct FPathAdjacent
	{
	public:
		int32_t                                                    AdjNodeIndex;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AdjNodeRegion;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    LinkIndex;                                               // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    LinkRegion;                                              // 0x000A(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Length;                                                  // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Flags;                                                   // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UBD9[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTARegionMetadata
	 * Size -> 0x0018
	 */
	struct FGTARegionMetadata
	{
	public:
		TArray<struct FBox>                                        RegionBounds;                                            // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              ColorGroups[0x2];                                        // 0x0010(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FQV9[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.NodeAddr
	 * Size -> 0x0008
	 */
	struct FNodeAddr
	{
	public:
		int32_t                                                    NodeIndex;                                               // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RegionIndex;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.FloodTweak
	 * Size -> 0x0014
	 */
	struct FFloodTweak
	{
	public:
		struct FNodeAddr                                           Addr;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x0008(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.PathLinkAssoc
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	struct FPathLinkAssoc : public FPathLink
	{
	public:
		unsigned char                                              UnknownData_PVFW[0x4];                                   // 0x0028(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Node2Region;                                             // 0x002C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Node2Index;                                              // 0x0030(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XZ23[0xC];                                   // 0x0034(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTASelectedNode
	 * Size -> 0x0080
	 */
	struct FGTASelectedNode
	{
	public:
		int32_t                                                    Region;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NodeIndex;                                               // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPathNode                                           Node;                                                    // 0x0008(0x0024) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BQT[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPathNode>                                   AdjacentNodes;                                           // 0x0030(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		TArray<struct FPathLinkAssoc>                              Links;                                                   // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPathLinkAssoc>                              LinksBackup;                                             // 0x0050(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPathAdjacent>                               AdjacentsBackup;                                         // 0x0060(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TJ2[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bNeedsNewPosition;                                       // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNewNode;                                                // 0x0079(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z478[0x6];                                   // 0x007A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.RawNodesContainer
	 * Size -> 0x0010
	 */
	struct FRawNodesContainer
	{
	public:
		unsigned char                                              UnknownData_DCSM[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.RawSelectedNode
	 * Size -> 0x000C
	 */
	struct FRawSelectedNode
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IndexInGroup;                                            // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEdit;                                                   // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AUD9[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.ConstructNode
	 * Size -> 0x0034
	 */
	struct FConstructNode
	{
	public:
		struct FVector                                             position;                                                // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Direction;                                               // 0x000C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Width;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MedianWidth;                                             // 0x001C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UVDist;                                                  // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBacktracking;                                           // 0x0024(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBidirectional;                                          // 0x0025(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUYZ[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MeshRef;                                                 // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MapName;                                                 // 0x002C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.ConstructPath
	 * Size -> 0x0010
	 */
	struct FConstructPath
	{
	public:
		TArray<struct FConstructNode>                              Path;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAClothingModel
	 * Size -> 0x0058
	 */
	struct FGTAClothingModel
	{
	public:
		class FName                                                ModelName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SkeletalMesh[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              maskTexture[0x28];                                       // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct GTABase.GTAClothingModelType
	 * Size -> 0x0018
	 */
	struct FGTAClothingModelType
	{
	public:
		class FName                                                ModelTypeName;                                           // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGTAClothingModel>                           Models;                                                  // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAClothingMaterialPair
	 * Size -> 0x0088
	 */
	struct FGTAClothingMaterialPair
	{
	public:
		unsigned char                                              Material[0x28];                                          // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              replacesMaterial[0x28];                                  // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StaticMesh[0x28];                                        // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              SocketName;                                              // 0x0078(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAClothingMaterial
	 * Size -> 0x0018
	 */
	struct FGTAClothingMaterial
	{
	public:
		class FName                                                MaterialName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGTAClothingMaterialPair>                    MaterialSwaps;                                           // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAClothingMaterialType
	 * Size -> 0x0018
	 */
	struct FGTAClothingMaterialType
	{
	public:
		class FName                                                MaterialTypeName;                                        // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGTAClothingMaterial>                        Materials;                                               // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.BoneHackTweak
	 * Size -> 0x0020
	 */
	struct FBoneHackTweak
	{
	public:
		int32_t                                                    BoneTag;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Axis;                                                    // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Offset;                                                  // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTARadarSprite
	 * Size -> 0x0060
	 */
	struct FGTARadarSprite
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                LegendText;                                              // 0x0008(0x0018) Edit, NativeAccessSpecifierPublic
		int32_t                                                    LegendCategory;                                          // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SE70[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Texture;                                                 // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector4                                            UVCoords;                                                // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFlat;                                                 // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDisplayedOnEdge;                                      // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCameraAligned;                                          // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayerAligned;                                          // 0x0043(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeverDistanceScale;                                     // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CQ1[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldAnimateInMap;                                     // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldAnimateInRadar;                                   // 0x004D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERadarBlipAnimaStyle                                       AnimationStyle;                                          // 0x004E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_813J[0x1];                                   // 0x004F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ZOrderOverride;                                          // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_02MP[0xC];                                   // 0x0054(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.RadarEdgeSprite
	 * Size -> 0x0058
	 */
	struct FRadarEdgeSprite
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox2D                                              UVs;                                                     // 0x0008(0x0014) BlueprintVisible, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             Offsets;                                                 // 0x001C(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FAnchors                                            Anchors;                                                 // 0x002C(0x0010) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x003C(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Priority;                                                // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZOrderOverride;                                          // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceFromPlayer;                                      // 0x0054(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTARadioStation
	 * Size -> 0x0010
	 */
	struct FGTARadioStation
	{
	public:
		EGTARadioStations                                          Station;                                                 // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_46F0[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           RadioAudio;                                              // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.CachedSoundWaveAsset
	 * Size -> 0x0040
	 */
	struct FCachedSoundWaveAsset
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActualStartTime;                                         // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TotalNumFrames;                                          // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PX7T[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SoundAsset[0x28];                                        // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class USoundWave*                                          PreloadedSoundWave;                                      // 0x0038(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.ProcQueuedPayload
	 * Size -> 0x0028
	 */
	struct FProcQueuedPayload
	{
	public:
		unsigned char                                              UnknownData_KBR1[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundWave*                                          Sound;                                                   // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9DTQ[0x10];                                  // 0x0018(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAVisualOption
	 * Size -> 0x0020
	 */
	struct FGTAVisualOption
	{
	public:
		class FString                                              CVar;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAVisualsSetting
	 * Size -> 0x0038
	 */
	struct FGTAVisualsSetting
	{
	public:
		TArray<struct FGTAVisualOption>                            CVars;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FGTAVisualOption>                            ExtraCVars;                                              // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    WindowLights_Quality;                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindowLights_Distance;                                   // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindowLights_FadeInDistance;                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInteriorShadowedLights;                               // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxInteriorActiveLights;                                 // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5NM[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTASimulationScaleSetting
	 * Size -> 0x0010
	 */
	struct FGTASimulationScaleSetting
	{
	public:
		float                                                      PedDensityMult;                                          // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PedDistanceMult;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CarDensityMult;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CarDistanceMult;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAShadowSetting
	 * Size -> 0x001C
	 */
	struct FGTAShadowSetting
	{
	public:
		float                                                      DynamicShadowDistance;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DynamicShadowCascades;                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarShadowDistance;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FarShadowCascades;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTreesCastFarShadows;                                    // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMoonShadows;                                      // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableMorningSunShadows;                                // 0x0012(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFAB[0x1];                                   // 0x0013(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DistributionExponent;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxShadowCasters;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTACVarListSetting
	 * Size -> 0x0010
	 */
	struct FGTACVarListSetting
	{
	public:
		TArray<struct FGTAVisualOption>                            CVars;                                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAHeadlightSetting
	 * Size -> 0x0014
	 */
	struct FGTAHeadlightSetting
	{
	public:
		bool                                                       bCastShadows;                                            // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDynamicTailLights;                                      // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLowCostLights;                                          // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNW4[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShadowResolutionScale;                                   // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadowDistance;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LightDrawDistance;                                       // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttenuationRadius;                                       // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAStreetlightSetting
	 * Size -> 0x0018
	 */
	struct FGTAStreetlightSetting
	{
	public:
		int32_t                                                    DecalDistance;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VisibleDistance;                                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpotLightShadowDistance;                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointLightShadowDistance;                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadowResolutionScale;                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastSpotlightShadows;                                   // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastPointlightShadows;                                  // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLowCostLights;                                          // 0x0016(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GL8O[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTASceneExperiment
	 * Size -> 0x0040
	 */
	struct FGTASceneExperiment
	{
	public:
		class FString                                              ExperimentName;                                          // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDevelopmentOnly;                                        // 0x0010(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDiffFromBaseline;                                       // 0x0011(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_142I[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      EnableCommands;                                          // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      DisableCommands;                                         // 0x0028(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ScreenPercentageOverride;                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1PRP[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAProbeSpawn
	 * Size -> 0x0068
	 */
	struct FGTAProbeSpawn
	{
	public:
		unsigned char                                              BPClass[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              SkelMesh[0x28];                                          // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector                                             Location;                                                // 0x0050(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x005C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTASceneProbe
	 * Size -> 0x0078
	 */
	struct FGTASceneProbe
	{
	public:
		class FString                                              ProbeName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlayerPosition;                                          // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CameraPosition;                                          // 0x001C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CameraRotation;                                          // 0x0028(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CameraFOV;                                               // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeOfDay;                                               // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapturedPedMult;                                         // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapturedCarMult;                                         // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IY1P[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGTAProbeSpawn>                              SpawnData;                                               // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AGTAActor*>                                   SpawnedActors;                                           // 0x0058(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W2BW[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.VariationAttachment
	 * Size -> 0x0010
	 */
	struct FVariationAttachment
	{
	public:
		class UStaticMesh*                                         Mesh;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WP1O[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.NextVariationData
	 * Size -> 0x00B8
	 */
	struct FNextVariationData
	{
	public:
		TArray<class UTexture2D*>                                  SkinBaseColors;                                          // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  SkinAdditionalBaseColors;                                // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UTexture2D*>                                  ClothingBaseColors;                                      // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          EyeMaterials;                                            // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                HairColors;                                              // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          AccessoryMaterials;                                      // 0x0050(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVariationAttachment>                        Attachments;                                             // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                SkinSlotName;                                            // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AdditionalSkinSlotName;                                  // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                ClothingSlotName;                                        // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EyeSlotName;                                             // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HairSlotName;                                            // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AccessorySlotName;                                       // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SkinSlotIndex;                                           // 0x00A0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AdditionalSkinSlotIndex;                                 // 0x00A4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ClothingSlotIndex;                                       // 0x00A8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EyeSlotIndex;                                            // 0x00AC(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HairSlotIndex;                                           // 0x00B0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AccessorySlotIndex;                                      // 0x00B4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.RequestedSoundStruct
	 * Size -> 0x0002
	 */
	struct FRequestedSoundStruct
	{
	public:
		unsigned char                                              UnknownData_53HI[0x2];                                   // 0x0000(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.TargetHaloInfo
	 * Size -> 0x00B8
	 */
	struct FTargetHaloInfo
	{
	public:
		class AActor*                                              TargetActor;                                             // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDeactivating;                                           // 0x0008(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D04B[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ETargetHighlightType                                       Type;                                                    // 0x0010(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UEUU[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UStaticMeshComponent*, class UStaticMeshComponent*> StaticMap;                                               // 0x0018(0x0050) ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic
		TMap<class USkinnedMeshComponent*, class UPoseableMeshComponent*> SkinnedMap;                                              // 0x0068(0x0050) ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.SkySettings
	 * Size -> 0x0128
	 */
	struct FSkySettings
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudDensityVariation;                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudBaseDensity;                                        // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudVariationSpeed;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloudWindSpeed;                                          // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   SkylightColor;                                           // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   SkyLowerColor;                                           // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   SkyUpperColor;                                           // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   SkyReflectionColor;                                      // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   CameraParameters;                                        // 0x0038(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   CloudParams;                                             // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   CloudBackgroundColor;                                    // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   CloudLowerColor;                                         // 0x0050(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   CloudUpperColor;                                         // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   CloudSecondaryColor;                                     // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   VolumetricCloudColor;                                    // 0x0068(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   VolumetricCloudExtinction;                               // 0x0070(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   VolumetricCloudEmission;                                 // 0x0078(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   FogColor;                                                // 0x0080(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   FogParameters;                                           // 0x0088(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   MoonColor;                                               // 0x0090(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   StarsColor;                                              // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   SunColor;                                                // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         SunshineAmount;                                          // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   UplightingColor;                                         // 0x00B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveLinearColor*                                   PostSettings;                                            // 0x00B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         CityGlowAmount;                                          // 0x00C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInstanceDynamic*>                    ActiveMaterials;                                         // 0x00C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          PostProcessMaterials;                                    // 0x00D8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          DLSSPostProcessMaterials;                                // 0x00E8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseRainCulling;                                         // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NX4O[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     CameraFX;                                                // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            CameraFXComponent;                                       // 0x0108(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RepressSkyAmt;                                           // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LerpSkyColor;                                            // 0x0114(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNHT[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTATrafficLight
	 * Size -> 0x0024
	 */
	struct FGTATrafficLight
	{
	public:
		struct FVector                                             Coor1;                                                   // 0x0000(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Coor2;                                                   // 0x000C(0x000C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EntityOrientation;                                       // 0x0018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EntityX;                                                 // 0x001C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EntityY;                                                 // 0x0020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.ScrollListStyle
	 * Size -> 0x0158
	 */
	struct FScrollListStyle
	{
	public:
		struct FSlateColor                                         SlotTextColor;                                           // 0x0000(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SlotTextColorSelected;                                   // 0x0028(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SlotColor1;                                              // 0x0050(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SlotColor2;                                              // 0x0078(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SlotColorSelected;                                       // 0x00A0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SlotColorDisabled;                                       // 0x00C8(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SlotColorSelectedDisabled;                               // 0x00F0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         SlotTextColorDisabled;                                   // 0x0118(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      SlotHeight;                                              // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinimumEntryNumber;                                      // 0x0144(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundWave*                                          HoverSound;                                              // 0x0148(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHoverSoundWithMouse;                                  // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IT16[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.DynamicMaterials
	 * Size -> 0x0010
	 */
	struct FDynamicMaterials
	{
	public:
		TArray<class UMaterialInstanceDynamic*>                    Materials;                                               // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.WindowSectionInfo
	 * Size -> 0x0020
	 */
	struct FWindowSectionInfo
	{
	public:
		int32_t                                                    SectionIndex;                                            // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZD5G[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            SectionSphere;                                           // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.WindowSectionInfoContainer
	 * Size -> 0x0010
	 */
	struct FWindowSectionInfoContainer
	{
	public:
		TArray<struct FWindowSectionInfo>                          Sections;                                                // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.DamageInfoContainer
	 * Size -> 0x0020
	 */
	struct FDamageInfoContainer
	{
	public:
		TArray<int32_t>                                            NumTrianglesOk;                                          // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            NumTriangles;                                            // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAColorEntry
	 * Size -> 0x0034
	 */
	struct FGTAColorEntry
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColorIndex;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                VehicleOverrideName;                                     // 0x000C(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0014(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        AltColor;                                                // 0x0024(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.WindowLightCollection
	 * Size -> 0x0020
	 */
	struct FWindowLightCollection
	{
	public:
		int32_t                                                    Channel;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumWindows;                                              // 0x0004(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeOnDisk;                                              // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00ET[0x14];                                  // 0x000C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.SuperBounds
	 * Size -> 0x0030
	 */
	struct FSuperBounds
	{
	public:
		struct FBox                                                FullBounds;                                              // 0x0000(0x001C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NZBO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBox>                                        DiscreteBounds;                                          // 0x0020(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.RuntimeProxyComponent
	 * Size -> 0x0028
	 */
	struct FRuntimeProxyComponent
	{
	public:
		class UStaticMeshComponent*                                Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7IEB[0x1C];                                  // 0x000C(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTASubMap
	 * Size -> 0x0108
	 */
	struct FGTASubMap
	{
	public:
		class FName                                                MapName;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MeshProxy[0x28];                                         // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StreetDecalProxy[0x28];                                  // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FSuperBounds                                        Bounds;                                                  // 0x0058(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
		struct FRuntimeProxyComponent                              MapProxyComponent;                                       // 0x0088(0x0028) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRuntimeProxyComponent                              MapStreetlightComponent;                                 // 0x00B0(0x0028) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UStreetDecalComponent*                               MapStreetDecalsComponent;                                // 0x00D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubMapLoading;                                          // 0x00E0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSubMapLoaded;                                           // 0x00E1(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TS23[0x6];                                   // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastLoadRequest;                                         // 0x00E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     LastPreloadRequest;                                      // 0x00F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     LastUnloadRequest;                                       // 0x00F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StreamingDistanceMultiplier;                             // 0x0100(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3WSC[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAQuadrant
	 * Size -> 0x0198
	 */
	struct FGTAQuadrant
	{
	public:
		class FName                                                QuadrantName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                HLODMap;                                                 // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MeshProxy[0x28];                                         // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HLODProxy[0x28];                                         // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StreetDecalProxy[0x28];                                  // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HeadlightRibbonProxy[0x28];                              // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FGTASubMap>                                  maps;                                                    // 0x00B0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bNeverLoadMaps;                                          // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContainsCinematicForceLoadMap;                          // 0x00C1(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMarkForReadahead;                                       // 0x00C2(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZDP[0x5];                                   // 0x00C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSuperBounds                                        Bounds;                                                  // 0x00C8(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
		struct FRuntimeProxyComponent                              QuadrantProxyComponent;                                  // 0x00F8(0x0028) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRuntimeProxyComponent                              QuadrantHLODComponent;                                   // 0x0120(0x0028) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRuntimeProxyComponent                              QuadrantStreetlightComponent;                            // 0x0148(0x0028) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRuntimeProxyComponent                              QuadrantHeadlightRibbonComponent;                        // 0x0170(0x0028) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAMapSection
	 * Size -> 0x00B0
	 */
	struct FGTAMapSection
	{
	public:
		class FName                                                SectionName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         MeshProxy;                                               // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         DistantHLODProxy;                                        // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIncludeQuadrantStreetlights;                            // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TT1D[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSuperBounds                                        Bounds;                                                  // 0x0020(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
		struct FRuntimeProxyComponent                              SectionProxyComponent;                                   // 0x0050(0x0028) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FRuntimeProxyComponent                              SectionHLODComponent;                                    // 0x0078(0x0028) Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FGTAQuadrant>                                Quadrants;                                               // 0x00A0(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAInteriorMap
	 * Size -> 0x0028
	 */
	struct FGTAInteriorMap
	{
	public:
		class FName                                                MapName;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                Bounds;                                                  // 0x0008(0x001C) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bHasLightSetup;                                          // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMapLoaded;                                              // 0x0025(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D4G3[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAInteriorArea
	 * Size -> 0x0010
	 */
	struct FGTAInteriorArea
	{
	public:
		TArray<struct FGTAInteriorMap>                             maps;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.IMGFileEntry
	 * Size -> 0x0020
	 */
	struct FIMGFileEntry
	{
	public:
		class FString                                              Filename;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      contents;                                                // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.UE4CachedMapAsset
	 * Size -> 0x0090
	 */
	struct FUE4CachedMapAsset
	{
	public:
		struct FVector                                             position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0018(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CUF[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          NonInstancedTransform;                                   // 0x0030(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    modelIndex;                                              // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_324Z[0x2C];                                  // 0x0064(0x002C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.UE4CachedMap
	 * Size -> 0x0028
	 */
	struct FUE4CachedMap
	{
	public:
		unsigned char                                              UnknownData_N3XH[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FUE4CachedMapAsset>                          Cache;                                                   // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.StreetDecalData
	 * Size -> 0x0010
	 */
	struct FStreetDecalData
	{
	public:
		TArray<struct FVector>                                     Points;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.StreetLightLowQualitySetting
	 * Size -> 0x0018
	 */
	struct FStreetLightLowQualitySetting
	{
	public:
		float                                                      ZOffset;                                                 // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewRadius;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewIntensity;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewInnerConeAngle;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewOuterConeAngle;                                       // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NewExponent;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.AOGenSettings
	 * Size -> 0x001C
	 */
	struct FAOGenSettings
	{
	public:
		float                                                      ray_distance_degrees;                                    // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      face_distance;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      power;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      weld_distance;                                           // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      projection_distance;                                     // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      penetration_check_distance;                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      extrusion_step_distance;                                 // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.UplightGenSettings
	 * Size -> 0x0048
	 */
	struct FUplightGenSettings
	{
	public:
		float                                                      attenuation_threshold;                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      angle_power;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      absorption;                                              // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      point_scale;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      spot_scale;                                              // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      rect_scale;                                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      window_scale;                                            // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Intensity;                                               // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        additive;                                                // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      origin_power;                                            // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      color_power;                                             // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ao_percent_applied;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      scattering_amount;                                       // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      upscattering;                                            // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      directionality;                                          // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.DistantMeshData
	 * Size -> 0x0001
	 */
	struct FDistantMeshData
	{
	public:
		unsigned char                                              UnknownData_9NXU[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.DistantMeshSubstitution
	 * Size -> 0x0020
	 */
	struct FDistantMeshSubstitution
	{
	public:
		class UStaticMesh*                                         MeshToSubstitute;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInstanceConstant*                           WithOverriddenMaterial;                                  // 0x0008(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         UseAtlasMesh;                                            // 0x0010(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDistantMeshData                                    Data;                                                    // 0x0018(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_36UD[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.EntityLink
	 * Size -> 0x0028
	 */
	struct FEntityLink
	{
	public:
		class ADynamicIPLMapActor*                                 Actor;                                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D5FB[0x20];                                  // 0x0008(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.SCAchive
	 * Size -> 0x0050
	 */
	struct FSCAchive
	{
	public:
		class FString                                              AchivementName;                                          // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                LocalizedAchivementName;                                 // 0x0010(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                LocalizedDescription;                                    // 0x0028(0x0018) BlueprintVisible, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isUnlocked;                                              // 0x0048(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       invisibleWhenLocked;                                     // 0x0049(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U9VN[0x6];                                   // 0x004A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.KeyboardDisplayStrings
	 * Size -> 0x0028
	 */
	struct FKeyboardDisplayStrings
	{
	public:
		class FString                                              theEvent;                                                // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              theMapping;                                              // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mapping;                                                 // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O62A[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTACollisionDataWrapper
	 * Size -> 0x0038
	 */
	struct FGTACollisionDataWrapper
	{
	public:
		class FString                                              OriginalCollisionModelNameMirror;                        // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CollisionRef[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct GTABase.GTAColTriIndex
	 * Size -> 0x0010
	 */
	struct FGTAColTriIndex
	{
	public:
		int32_t                                                    TriIndex[0x3];                                           // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGTAColSurfaceType                                         SurfaceType;                                             // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JNV[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAColTriVertex
	 * Size -> 0x000C
	 */
	struct FGTAColTriVertex
	{
	public:
		struct FVector                                             Vertex;                                                  // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.PostDecalSettings
	 * Size -> 0x0060
	 */
	struct FPostDecalSettings
	{
	public:
		class UMaterialInterface*                                  MI;                                                      // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GridSize;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SizeX;                                                   // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SizeY;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rotation;                                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistance;                                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeshOffset;                                              // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGroundOnly;                                             // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7HY[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinVisualSetting;                                        // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeTilFade;                                             // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeSpentFading;                                         // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        VertexColor;                                             // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDirDeviation;                                         // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxEntriesPerBatch;                                      // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BOO2[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            UVScaleOffset;                                           // 0x0050(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GrassMovement
	 * Size -> 0x0020
	 */
	struct FGrassMovement
	{
	public:
		unsigned char                                              UnknownData_6MWA[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAGrassPatch
	 * Size -> 0x000C
	 */
	struct FGTAGrassPatch
	{
	public:
		unsigned char                                              UnknownData_L4UL[0xC];                                   // 0x0000(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GrassMaterialSetup
	 * Size -> 0x0018
	 */
	struct FGrassMaterialSetup
	{
	public:
		bool                                                       bOverrideMaterialBlending;                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEdgesRequireWalls;                                      // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0D1D[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector4>                                    ValidUVCoords;                                           // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAWorldOverlayTexture
	 * Size -> 0x0048
	 */
	struct FGTAWorldOverlayTexture
	{
	public:
		struct FVector                                             MinCoordinates;                                          // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxCoordinates;                                          // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowWrap;                                              // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertMask;                                             // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SYZE[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Texture[0x28];                                           // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct GTABase.HudString
	 * Size -> 0x0040
	 */
	struct FHudString
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           position;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1D5[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFont*                                               Font;                                                    // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHUDTextJustify                                            justify;                                                 // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2X4T[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DisplayTime;                                             // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseShadow;                                               // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OQR0[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.HUDText
	 * Size -> 0x0040
	 */
	struct FHUDText
	{
	public:
		struct FHudString                                          HudString;                                               // 0x0000(0x0040) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.HUDQuad
	 * Size -> 0x0058
	 */
	struct FHUDQuad
	{
	public:
		TWeakObjectPtr<class UObject>                              drawable;                                                // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FAGN[0x50];                                  // 0x0008(0x0050) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.BevelInfo
	 * Size -> 0x000C
	 */
	struct FBevelInfo
	{
	public:
		float                                                      BevelDistance;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HardBevelAngle;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeldDistance;                                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.SimpleEditNode
	 * Size -> 0x0028
	 */
	struct FSimpleEditNode
	{
	public:
		struct FVector                                             position;                                                // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConsideredExternal;                                     // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AEP[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRawSelectedNode                                    InternalLink;                                            // 0x0010(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FRawSelectedNode                                    ExternalLink;                                            // 0x001C(0x000C) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.UGTAClothingEntry
	 * Size -> 0x00C8
	 */
	struct FUGTAClothingEntry
	{
	public:
		class FString                                              DisplayName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SkeletalMesh[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Material[0x28];                                          // 0x0038(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              maskTexture[0x28];                                       // 0x0060(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StaticMesh[0x28];                                        // 0x0088(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FString                                              SocketName;                                              // 0x00B0(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    materialIndex;                                           // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9MWJ[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.GTAPoseableComponentClothTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FGTAPoseableComponentClothTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_BELS[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.TerrainBlendEntry
	 * Size -> 0x00A0
	 */
	struct FTerrainBlendEntry
	{
	public:
		unsigned char                                              TargetMaterial[0x28];                                    // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Material0[0x28];                                         // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Material1[0x28];                                         // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BlendTexture[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct GTABase.TerrainOverlayEntry
	 * Size -> 0x0078
	 */
	struct FTerrainOverlayEntry
	{
	public:
		unsigned char                                              TargetMaterial[0x28];                                    // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              OverlayMaterial[0x28];                                   // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BlendTexture[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct GTABase.SlotImageStruct
	 * Size -> 0x0030
	 */
	struct FSlotImageStruct
	{
	public:
		class UObject*                                             Image;                                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EI9J[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              string;                                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              extraString;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.TabbedMenuStyle
	 * Size -> 0x0070
	 */
	struct FTabbedMenuStyle
	{
	public:
		float                                                      VerticalTabPercentage;                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0STB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TabTypeClass;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TabConfirmationDialog;                                   // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FText>                                        TabNames;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      TabContent;                                              // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class FString>                                      CustomFunctionStrings;                                   // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FMargin                                             SelectedTabMargin;                                       // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             RegularTabMargin;                                        // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    StartingTab;                                             // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D2D9[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.ConfirmationMenuStyle
	 * Size -> 0x00F0
	 */
	struct FConfirmationMenuStyle
	{
	public:
		struct FSlateColor                                         ConfirmButtonColor;                                      // 0x0000(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         ConfirmTextColor;                                        // 0x0028(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         CancelButtonColor;                                       // 0x0050(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         CancelTextColor;                                         // 0x0078(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         ConfirmMessageTextColor;                                 // 0x00A0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         ConfirmBGColor;                                          // 0x00C8(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.BackgroundImage
	 * Size -> 0x0110
	 */
	struct FBackgroundImage
	{
	public:
		struct FSlateBrush                                         BackgroundImages;                                        // 0x0000(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         ForegroundImages;                                        // 0x0088(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.GTAUpgradeMaterial
	 * Size -> 0x0028
	 */
	struct FGTAUpgradeMaterial
	{
	public:
		TArray<class UMaterialInstanceDynamic*>                    DynMatRefs;                                              // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		int32_t                                                    UpgradeID;                                               // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KXK5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMeshComponent*                                      MeshComponentRef;                                        // 0x0018(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HB6[0x8];                                   // 0x0020(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.WindowLightCollectionParameters
	 * Size -> 0x0058
	 */
	struct FWindowLightCollectionParameters
	{
	public:
		class UTexture2D*                                          EmissiveBase;                                            // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BaseColorMult;                                           // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          EmissiveMask;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          WindowMask;                                              // 0x0020(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           WindowUVOffset;                                          // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           WindowUVMult;                                            // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WindowComponentMult;                                     // 0x0038(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WindowMinMask;                                           // 0x0044(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BaseUVScale;                                             // 0x0048(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EnableRandomization;                                     // 0x0050(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseInverseAlphaModulation;                              // 0x0054(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVertexColor;                                         // 0x0055(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYHF[0x2];                                   // 0x0056(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.DynamicWindowLightInfo
	 * Size -> 0x0010
	 */
	struct FDynamicWindowLightInfo
	{
	public:
		class ULightComponent*                                     Component;                                               // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   LastRenderedFrame;                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OriginalIntensity;                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct GTABase.WindowLight
	 * Size -> 0x0018
	 */
	struct FWindowLight
	{
	public:
		unsigned char                                              UnknownData_Y7KL[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.RibbonMaterialMap
	 * Size -> 0x0060
	 */
	struct FRibbonMaterialMap
	{
	public:
		unsigned char                                              HeadlightMIC[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HeadlightEmissiveMIC[0x28];                              // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ForMeshes[0x10];                                         // 0x0050(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct GTABase.MappingStruct
	 * Size -> 0x0038
	 */
	struct FMappingStruct
	{
	public:
		class FString                                              Tag;                                                     // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              helpTag;                                                 // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHIDMapping                                                mapping;                                                 // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G67R[0x17];                                  // 0x0021(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct GTABase.BevelVertInfluences
	 * Size -> 0x0028
	 */
	struct FBevelVertInfluences
	{
	public:
		unsigned char                                              UnknownData_45OK[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
