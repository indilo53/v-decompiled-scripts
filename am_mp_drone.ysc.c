#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	vector3 vLocal_115[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_212 = 0;
	struct<195> Local_213 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1069547520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	struct<12> ScriptParam_0 = { 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_110 = -1;
	iLocal_111 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_419(ScriptParam_0);
	}
	else
	{
		func_400(0);
	}
	while (true)
	{
		func_399();
		if (func_388())
		{
			func_400(0);
		}
		if (func_383())
		{
			func_400(0);
		}
		func_2();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
}

void func_2()
{
	if (!func_382(4))
	{
		func_381();
		func_378();
		func_377();
		func_374();
		func_372();
		func_371();
	}
	if (func_382(0))
	{
		func_328();
	}
	else if (func_382(1))
	{
		if (!func_327())
		{
			func_321();
			func_307();
		}
		else
		{
			func_305(1);
			func_304(5);
		}
	}
	else if (func_382(2))
	{
		func_303();
		func_298();
		func_296();
		func_295();
		func_294();
		func_293();
		func_292();
		func_287();
		func_281();
		func_273();
		func_271();
		func_234();
		func_233();
		func_229();
		if (func_222())
		{
			func_221();
			return;
		}
		func_217();
		func_216();
		func_210();
		func_198(0);
		func_185();
		func_176();
		func_168();
		func_150();
		func_143();
		func_142();
		func_74();
		func_59();
		func_58();
	}
	else if (func_382(3))
	{
		func_19();
	}
	else if (func_382(4))
	{
		func_15();
		func_12();
	}
	else if (func_382(5))
	{
		func_10();
	}
	if (!func_382(2) && !func_382(4))
	{
		func_4();
	}
	func_3();
}

void func_3()
{
	Local_213.f_42++;
	if (Local_213.f_42 >= 32)
	{
		Local_213.f_42 = 0;
	}
}

void func_4()
{
	int iVar0;
	
	if (Local_213.f_108)
	{
		if (func_9(&(Local_213.f_164)))
		{
			if (func_8())
			{
				iVar0 = Global_262145.f_24608;
			}
			else
			{
				iVar0 = Global_262145.f_24008;
			}
			if (func_6(&(Local_213.f_164), iVar0, 0))
			{
				func_5(&(Local_213.f_164));
				Local_213.f_17 = 100;
				GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 4);
				GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 3);
				GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 24);
				Local_213.f_108 = 0;
			}
		}
	}
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_7(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_7(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = GAMEPLAY::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_8()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 2);
}

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

void func_10()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
		{
			if (!func_11())
			{
				func_400(1);
			}
			else
			{
				func_400(0);
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
		}
	}
	else if (!func_11())
	{
		func_400(1);
	}
	else
	{
		func_400(0);
	}
}

bool func_11()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 16);
}

void func_12()
{
	char* sVar0;
	
	if (Local_213.f_42 == -1)
	{
		return;
	}
	if (!func_13(Local_213.f_42))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(vLocal_115[Local_213.f_42 /*3*/].f_2))
	{
		sVar0 = "scr_xs_props";
		STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_213.f_123[Local_213.f_42]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				Local_213.f_123[Local_213.f_42] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(vLocal_115[Local_213.f_42 /*3*/].f_2), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
		}
	}
	else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_213.f_123[Local_213.f_42]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_213.f_123[Local_213.f_42], 0);
	}
}

int func_13(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_14()
{
	return -1;
}

void func_15()
{
	if (Local_213.f_42 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(vLocal_115[Local_213.f_42 /*3*/].f_2) && func_18(NETWORK::NET_TO_OBJ(vLocal_115[Local_213.f_42 /*3*/].f_2)))
		{
			if (func_17(Local_213.f_42))
			{
				Local_213.f_109 = "DLC_Arena_Drone_Sounds";
			}
			else if (func_16(Local_213.f_42))
			{
				Local_213.f_109 = "DLC_Arena_Battle_Drone_Sounds";
			}
			else if (func_13(Local_213.f_42))
			{
				Local_213.f_109 = "DLC_Arena_Piloted_Missile_Sounds";
			}
			else
			{
				Local_213.f_109 = "DLC_BTL_Drone_Sounds";
			}
			if (Local_213.f_43[Local_213.f_42] == -1)
			{
				Local_213.f_43[Local_213.f_42] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(Local_213.f_43[Local_213.f_42], "Flight_Loop", NETWORK::NET_TO_OBJ(vLocal_115[Local_213.f_42 /*3*/].f_2), Local_213.f_109, 0, 0);
				AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_43[Local_213.f_42], "DroneRotationalSpeed", 1f);
			}
			else
			{
				AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_43[Local_213.f_42], "DroneRotationalSpeed", 1f);
			}
		}
		else if (Local_213.f_43[Local_213.f_42] != -1)
		{
			AUDIO::STOP_SOUND(Local_213.f_43[Local_213.f_42]);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_43[Local_213.f_42]);
			Local_213.f_43[Local_213.f_42] = -1;
		}
	}
}

int func_16(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 1)
		{
			return 1;
		}
	}
	return 0;
}

int func_17(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (vLocal_115[iParam0 /*3*/].f_1 == 2)
		{
			return 1;
		}
	}
	return 0;
}

int func_18(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_19()
{
	int iVar0;
	
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	CONTROLS::DISABLE_CONTROL_ACTION(0, 199, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 200, 1);
	func_57();
	func_55();
	func_49(1);
	if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 1))
	{
		if (!func_25() && !func_24())
		{
			if ((func_23() || func_8()) || func_22())
			{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
		{
			ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_213.f_110), 1);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_31))
		{
			Local_213.f_31 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_31, "HUD_Static_Loop", Local_213.f_109, 1);
		}
		if (!func_21())
		{
			CONTROLS::SET_PAD_SHAKE(0, 300, 100);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("RemixDrone");
			GAMEPLAY::SET_BIT(&(Local_213.f_6), 0);
		}
		GAMEPLAY::SET_BIT(&(Local_213.f_5), 1);
	}
	else if (!func_9(&(Local_213.f_160)))
	{
		func_7(&(Local_213.f_160), 0, 0);
	}
	else
	{
		iVar0 = 1000;
		if (func_20())
		{
			iVar0 = 500;
		}
		if (func_6(&(Local_213.f_160), iVar0, 0) || func_21())
		{
			if (Local_213.f_35 == -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_35))
				{
					Local_213.f_35 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_35, "HUD_Disconnect", Local_213.f_109, 1);
				}
			}
			func_305(1);
			func_304(5);
		}
	}
}

bool func_20()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 4);
}

bool func_21()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 20);
}

bool func_22()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 3);
}

bool func_23()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 11);
}

bool func_24()
{
	return Global_2506066;
}

int func_25()
{
	if ((func_48(PLAYER::PLAYER_ID(), 0) && Global_1319089 == 1) && func_26())
	{
		return 1;
	}
	return 0;
}

int func_26()
{
	if (Global_1319089 != -1 || Global_1319095 != -1)
	{
		if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_46(PLAYER::PLAYER_PED_ID(), 2106541073))
		{
			return 0;
		}
		if (((((!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3))
		{
			return 0;
		}
		if (func_27())
		{
			return 0;
		}
	}
	return 1;
}

int func_27()
{
	int iVar0;
	
	if (func_45(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_44(PLAYER::PLAYER_ID());
		if (func_43(iVar0, 0, 1))
		{
			if ((((((func_42(iVar0) && func_40(func_41(iVar0)) == 4) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && func_39(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)))
			{
				return 1;
			}
			if (!func_38(Global_4456448.f_138474))
			{
				if (func_45(iVar0))
				{
					if (func_37(iVar0))
					{
						return 1;
					}
					else if (func_42(PLAYER::PLAYER_ID()) || func_36())
					{
						return 1;
					}
				}
			}
		}
	}
	if (Global_1681655)
	{
		return 1;
	}
	if (func_35(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_34(PLAYER::PLAYER_ID());
		if (func_43(iVar0, 0, 1))
		{
			if ((((((func_42(iVar0) && func_40(func_41(iVar0)) == 9) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar0))) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0))) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0)) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 0)) == joaat("avenger"))
			{
				return 1;
			}
			if (func_33(iVar0))
			{
				return 1;
			}
			else if (func_42(PLAYER::PLAYER_ID()) || func_36())
			{
				return 1;
			}
		}
	}
	if (func_48(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_32(PLAYER::PLAYER_ID());
		if (func_43(iVar0, 0, 1))
		{
			if ((((Global_1589668 != func_14() && func_42(Global_1589668)) && func_40(func_41(Global_1589668)) == 11) && func_31(Global_1589668, -1)) && VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(Global_1589668), 0), -1988428699))
			{
				return 1;
			}
			else if (func_30(iVar0))
			{
				return 1;
			}
			else if (func_42(PLAYER::PLAYER_ID()) || func_36())
			{
				return 1;
			}
		}
	}
	if (func_35(PLAYER::PLAYER_ID()) || func_29(PLAYER::PLAYER_ID()))
	{
		switch (Global_1319095)
		{
			case 1:
				if (Global_262145.f_22457)
				{
					return 1;
				}
				break;
			
			case 2:
				if (Global_262145.f_22458)
				{
					return 1;
				}
				break;
			
			case 3:
				if (Global_262145.f_22459)
				{
					return 1;
				}
				break;
			}
	}
	if (Global_1319093 == 1)
	{
		return 1;
	}
	if (func_28(3))
	{
		if (Global_1573351 == 185)
		{
			if (Global_1574432 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_28(int iParam0)
{
	return Global_262145.f_5003[iParam0] == Global_4456448.f_138474;
}

int func_29(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_43(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_40(Global_2424047[iParam0 /*416*/].f_309.f_5) == 10;
			}
		}
	}
	return 0;
}

int func_30(int iParam0)
{
	if (iParam0 != func_14())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309.f_3, 4);
	}
	return 0;
}

int func_31(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_43(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(int iParam0)
{
	if (iParam0 == func_14())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_33(int iParam0)
{
	if (iParam0 != func_14())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309.f_2, 6);
	}
	return 0;
}

int func_34(int iParam0)
{
	if (iParam0 == func_14())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_35(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_43(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_14())
			{
				return func_40(Global_2424047[iParam0 /*416*/].f_309.f_5) == 8;
			}
		}
	}
	return 0;
}

var func_36()
{
	return GAMEPLAY::IS_BIT_SET(Global_1671295, 6);
}

int func_37(int iParam0)
{
	if (iParam0 != func_14())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 6);
	}
	return 0;
}

bool func_38(int iParam0)
{
	return Global_262145.f_4994[4] == iParam0;
}

int func_39(var uParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("hauler2") || ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
	}
	return -1;
}

int func_41(int iParam0)
{
	if (iParam0 != func_14() && func_43(iParam0, 1, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_309.f_14;
	}
	return -1;
}

int func_42(int iParam0)
{
	if (iParam0 != func_14() && func_43(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 3);
	}
	return 0;
}

int func_43(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0)
{
	if (iParam0 == func_14())
	{
		return iParam0;
	}
	return Global_2424047[iParam0 /*416*/].f_309.f_8;
}

int func_45(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (func_43(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_14())
			{
				return func_40(Global_2424047[iParam0 /*416*/].f_309.f_5) == 5;
			}
		}
	}
	return 0;
}

int func_46(var uParam0, int iParam1)
{
	if (func_47(uParam0))
	{
		if (AI::GET_SCRIPT_TASK_STATUS(uParam0, iParam1) == 1 || AI::GET_SCRIPT_TASK_STATUS(uParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_47(var uParam0)
{
	if (func_18(uParam0))
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_48(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(uVar0) == -1988428699)
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_14())
	{
		if (func_43(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_14())
			{
				return func_40(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

void func_49(int iParam0)
{
	if (func_54())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_53(0))
		{
			func_50(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_2424, 2);
	}
}

void func_50(int iParam0)
{
	if (func_54())
	{
		return;
	}
	if (Global_14725)
	{
		func_52(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2424, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2423, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_51())
	{
		Global_14553.f_1 = 3;
	}
}

int func_51()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_52(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_53(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

int func_53(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2423, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_54()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 19);
}

void func_55()
{
	UNK1::_0xEB2D525B57F42B40();
	func_56();
}

void func_56()
{
	Global_17272.f_134 = 1;
}

void func_57()
{
	Global_1312666 = 1;
}

void func_58()
{
	char* sVar0;
	
	if (!func_20())
	{
		return;
	}
	sVar0 = "scr_xs_props";
	STREAMING::REQUEST_NAMED_PTFX_ASSET(sVar0);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(sVar0))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_213.f_123[PLAYER::PLAYER_ID()]))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET(sVar0);
				Local_213.f_123[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_xs_guided_missile_trail", NETWORK::NET_TO_OBJ(Local_213.f_110), 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			}
		}
	}
}

void func_59()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_213.f_111))
		{
			STREAMING::REQUEST_MODEL(func_73());
			if (STREAMING::HAS_MODEL_LOADED(func_73()))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 6))
				{
					if (func_67(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0, 0) + 1, 0, 1))
					{
						NETWORK::RESERVE_NETWORK_MISSION_PEDS(NETWORK::_0xCB215C4B56A7FAE7(0) + 1);
						GAMEPLAY::SET_BIT(&(Local_213.f_5), 6);
					}
				}
				else if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					Local_213.f_111 = PED::CREATE_PED(26, func_73(), Local_213.f_105, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_213.f_110)), 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_213.f_111, 1);
					ENTITY::SET_ENTITY_VISIBLE(Local_213.f_111, 0, 0);
					ENTITY::SET_ENTITY_HAS_GRAVITY(Local_213.f_111, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_213.f_111, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_73());
					PED::SET_PED_CONFIG_FLAG(Local_213.f_111, 118, 0);
					PED::SET_PED_CONFIG_FLAG(Local_213.f_111, 108, 1);
					PED::SET_PED_CONFIG_FLAG(Local_213.f_111, 208, 1);
					ENTITY::SET_ENTITY_PROOFS(Local_213.f_111, 1, 1, 1, 1, 1, 0, 0, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_213.f_111, NETWORK::NET_TO_OBJ(Local_213.f_110), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					ENTITY::_SET_ENTITY_COLLISION_2(Local_213.f_111, 0, 0);
					Global_1681628.f_21 = Local_213.f_111;
				}
			}
		}
		else if (func_18(Local_213.f_111))
		{
			if (ENTITY::IS_ENTITY_VISIBLE(Local_213.f_111))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_213.f_111, 0, 0);
			}
			if (!func_65(PLAYER::PLAYER_ID()) && !func_62(PLAYER::PLAYER_ID(), 236))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_61(Global_1574998);
				}
			}
			else if ((Global_1681628.f_3 == -1 || Global_1681628.f_3 == 0) || Global_1681628.f_3 == Global_1574987)
			{
				func_61(Global_1574998);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Local_213.f_111) != func_60())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_213.f_111, func_60());
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(Local_213.f_111))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_213.f_111, NETWORK::NET_TO_OBJ(Local_213.f_110), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				ENTITY::_SET_ENTITY_COLLISION_2(Local_213.f_111, 0, 0);
			}
		}
	}
}

int func_60()
{
	if (Global_1681628.f_3 != -1 && Global_1681628.f_3 != 0)
	{
		return Global_1681628.f_3;
	}
	return Global_1574998;
}

void func_61(int iParam0)
{
	if (Global_1681628.f_3 != iParam0)
	{
		Global_1681628.f_3 = iParam0;
	}
}

int func_62(var uParam0, int iParam1)
{
	if (func_64(uParam0) == iParam1)
	{
		return func_63(uParam0);
	}
	return 0;
}

int func_63(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1626536[iVar0 /*603*/].f_1, 7);
	}
	return 0;
}

int func_64(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/];
	}
	return -1;
}

bool func_65(int iParam0)
{
	return func_66(iParam0, 20);
}

var func_66(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1626536[iParam0 /*603*/].f_11.f_4, iParam1);
}

bool func_67(int iParam0, bool bParam1, bool bParam2)
{
	return func_68(2, iParam0, 1, bParam1, bParam2);
}

int func_68(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_1383928, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_72(iParam0) - func_71(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_71(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_72(iParam0) - func_70(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_71(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_72(iParam0) - func_71(iParam0, 1));
		}
		if (!bParam4 && Global_1589819[PLAYER::PLAYER_ID() /*818*/] != 3)
		{
			iVar1 = (iVar1 - func_69(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383928.f_1;
			break;
		
		case 1:
			return Global_1383928.f_2;
			break;
		
		case 2:
			return Global_1383928.f_3;
			break;
	}
	return 0;
}

int func_71(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2424047[iVar0 /*416*/].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1383936;
			break;
		
		case 1:
			return Global_1383937;
			break;
		
		case 2:
			return Global_1383938;
			break;
	}
	return 0;
}

int func_73()
{
	return joaat("g_m_m_chigoon_01");
}

void func_74()
{
	if (func_141())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
	{
		if (CAM::DOES_CAM_EXIST(Local_213.f_119) && CAM::IS_CAM_RENDERING(Local_213.f_119))
		{
			if (!func_20())
			{
				func_134();
				func_101();
			}
			else
			{
				func_83();
				func_77();
			}
			UNK1::_0xAF66DCEE6609B148();
			func_76(1);
			func_75(2);
		}
	}
}

void func_75(int iParam0)
{
	Global_1315706 = iParam0;
}

void func_76(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_77()
{
	int iVar0;
	
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_213.f_120))
	{
		Local_213.f_120 = func_82();
		return;
	}
	iVar0 = func_81();
	if (iVar0 < 0 || !func_18(iVar0))
	{
		return;
	}
	func_80(Local_213.f_120, 0);
	func_79(Local_213.f_120, 3, 3, 3);
	func_78(Local_213.f_120, 0f, 0f, 0f, 0f, (ENTITY::GET_ENTITY_HEADING(iVar0) + 180f));
	GRAPHICS::_SET_UI_LAYER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_213.f_120, 255, 255, 255, 0, 0);
}

void func_78(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam2);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_79(var uParam0, int iParam1, int iParam2, int iParam3)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_WEAPON_VALUES");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_80(var uParam0, int iParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_81()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		return Global_1681628.f_18;
	}
	return -1;
}

var func_82()
{
	char* sVar0;
	
	sVar0 = "";
	switch (Global_4456448.f_154963)
	{
		case 1:
			sVar0 = "ARENA_GUN_CAM_APOCALYPSE";
			break;
		
		case 2:
			sVar0 = "ARENA_GUN_CAM_SCIFI";
			break;
		
		case 3:
			sVar0 = "ARENA_GUN_CAM_CONSUMER";
			break;
		
		default:
			sVar0 = "INVALID_THEME";
			break;
	}
	return unk_0x67D02A194A2FC2BD(sVar0);
}

void func_83()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 16))
	{
		if (func_99(0, -1, 0))
		{
			func_98(-1);
			func_97(20, "DRONE_SPACE", -1);
			func_97(21, "DRONE_POSITION", -1);
			if (!CONTROLS::_IS_INPUT_DISABLED(0))
			{
				func_96(208, "DRONE_SPEEDU", -1, 0);
				func_96(207, "DRONE_SLOWD", -1, 0);
			}
			else
			{
				func_96(209, "DRONE_SPEEDU", -1, 0);
				func_96(210, "DRONE_SLOWD", -1, 0);
			}
			func_96(75, "MOVE_DRONE_RE", -1, 0);
			GAMEPLAY::SET_BIT(&(Local_213.f_5), 16);
		}
	}
	else
	{
		func_84(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (CONTROLS::_IS_INPUT_DISABLED(0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 17))
		{
			GAMEPLAY::SET_BIT(&(Local_213.f_5), 17);
			GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 16);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 17))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 17);
		GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 16);
	}
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_95(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_92(bParam4, bParam8))
	{
		return;
	}
	if (func_90())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_87(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_17411.f_4769 != 0)
	{
		if (CONTROLS::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (Global_17411.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_17411.f_5026[iVar1], 1), 64);
				}
				else if (Global_17411.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), CONTROLS::_0x80C2FD58D720C801(2, Global_17411.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17411.f_4770 = 0;
		}
		if (!Global_17411.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT((1f - (Global_17411.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_4964[iVar1 /*4*/])) != GAMEPLAY::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
					func_86(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_4964[iVar2 /*4*/])) == GAMEPLAY::GET_HASH_KEY("PREV"))
					{
						func_86(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_85(&(Global_17411.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_17411.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17411.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (Global_17411.f_5026[iVar1] != 359 && GAMEPLAY::IS_BIT_SET(Global_17411.f_5052, iVar1))
						{
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_17411.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(359);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4267964.f_16)) != GAMEPLAY::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_17411.f_4769);
				func_86(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_85(&(Global_4267964.f_16));
				}
				else
				{
					iVar4 = Global_17411.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4267964.f_16));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17411.f_5082)
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_17411.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17411.f_4769)
		{
			if (Global_17411.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17411.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4267964.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4267964.f_16));
				if (bParam5)
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17411.f_8353)
			{
				UI::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_17411.f_8353 = 1;
			}
		}
		else if (Global_17411.f_8353)
		{
			UI::RESET_HUD_COMPONENT_VALUES(15);
			Global_17411.f_8353 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_17411.f_5055)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_17411.f_5660[iVar0 /*10*/], Global_17411.f_5053, Global_17411.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_17411.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_85(var uParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_86(var uParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

bool func_87(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_88(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_88(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_89();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_89()
{
	return Global_1312745;
}

int func_90()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_91())
	{
		vVar0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_14498 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_91()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_92(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_94(8, -1) && func_93() != 64)) || (UI::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_71850) || Global_17411.f_8352) || UI::IS_WARNING_MESSAGE_ACTIVE()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_93()
{
	return Global_1312802;
}

var func_94(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1371947.f_1048, iParam0);
}

int func_95(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_NETWORK_GET_PLAYER_PED_FROM_INDEX();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = GAMEPLAY::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_17411.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17411.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17411.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_96(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		GAMEPLAY::SET_BIT(&(Global_17411.f_5052), Global_17411.f_4769);
	}
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = iParam0;
	Global_17411.f_5039[Global_17411.f_4769] = 32;
	Global_17411.f_4769++;
}

void func_97(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = CONTROLS::_0x80C2FD58D720C801(2, iParam0, 1);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_17411.f_5052), Global_17411.f_4769);
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = 359;
	Global_17411.f_5039[Global_17411.f_4769] = iParam0;
	Global_17411.f_4769++;
}

void func_98(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_4769 = 0;
	Global_17411.f_4770 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17411.f_4964[iVar0 /*4*/]), "", 16);
		Global_17411.f_5013[iVar0] = -1;
		Global_17411.f_5026[iVar0] = 359;
		Global_17411.f_5039[iVar0] = 32;
		iVar0++;
	}
	Global_17411.f_5052 = 0;
	StringCopy(&(Global_4267964.f_16), "", 16);
	Global_4267964.f_20 = -1;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (!func_95(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_99(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_95(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17411.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_5635[iVar0 /*4*/])))
	{
		UI::REQUEST_ADDITIONAL_TEXT(&(Global_17411.f_5635[iVar0 /*4*/]), 9);
		Global_17411.f_5628[iVar0] = 1;
		if (!UI::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_17411.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_17411.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_17411.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17411.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_100(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_100(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_101()
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_213.f_120))
	{
		Local_213.f_120 = unk_0x67D02A194A2FC2BD("DRONE_CAM");
		return;
	}
	if (func_22() || func_54())
	{
		func_133("SET_DETONATE_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_133("SET_DETONATE_METER_IS_VISIBLE", 1);
	}
	if ((func_22() || func_54()) || func_8())
	{
		func_133("SET_SHOCK_METER_IS_VISIBLE", 0);
	}
	else
	{
		func_133("SET_SHOCK_METER_IS_VISIBLE", 1);
	}
	if (func_8())
	{
		func_133("SET_EMP_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_133("SET_EMP_METER_IS_VISIBLE", 0);
	}
	if (!func_22() && !func_54())
	{
		func_133("SET_RETICLE_IS_VISIBLE", 1);
	}
	else
	{
		func_133("SET_RETICLE_IS_VISIBLE", 0);
	}
	func_133("SET_HEADING_METER_IS_VISIBLE", 1);
	func_133("SET_ZOOM_METER_IS_VISIBLE", 1);
	if ((!func_22() && !func_54()) && !func_8())
	{
		func_133("SET_BOOST_METER_IS_VISIBLE", 1);
	}
	else
	{
		func_133("SET_BOOST_METER_IS_VISIBLE", 0);
	}
	func_133("SET_MISSILE_METER_IS_VISIBLE", 0);
	func_133("SET_BOTTOM_LEFT_CORNER_IS_VISIBLE", 0);
	if (func_131(PLAYER::PLAYER_ID()) == 240)
	{
		if (Local_213.f_77 >= (func_130() - 50f) || Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 50)))
		{
			func_133("SET_SOUND_WAVE_IS_VISIBLE", 0);
			func_129();
			if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 13))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 13);
			}
		}
		else
		{
			func_125(func_126());
			if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 13))
			{
				func_133("SET_SOUND_WAVE_IS_VISIBLE", 1);
				GAMEPLAY::SET_BIT(&(Local_213.f_5), 13);
			}
		}
	}
	else
	{
		func_133("SET_SOUND_WAVE_IS_VISIBLE", 0);
		func_129();
	}
	func_133("SET_INFO_LIST_IS_VISIBLE", 0);
	if (!func_22() && !func_54())
	{
		if (!func_8())
		{
			func_124(Local_213.f_17);
		}
		else
		{
			func_123(Local_213.f_17);
		}
		func_122(Local_213.f_18);
	}
	func_121(Local_213.f_19);
	func_120(0, "DRONE_ZOOM_1");
	func_120(1, "");
	func_120(2, "DRONE_ZOOM_2");
	func_120(3, "");
	func_120(4, "DRONE_ZOOM_3");
	func_118();
	func_116();
	func_114();
	func_113(SYSTEM::ROUND((ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_213.f_110)) + 180f)));
	if (func_131(PLAYER::PLAYER_ID()) == 240)
	{
		func_112(func_126());
	}
	if (func_111())
	{
		func_104();
	}
	else
	{
		func_102();
	}
	GRAPHICS::_SET_UI_LAYER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_213.f_120, 255, 255, 255, 0, 0);
}

void func_102()
{
	if (Local_213.f_105.f_2 >= (func_130() - 20f))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
		{
			Local_213.f_34 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_34, "Out_Of_Bounds_Alarm_Loop", Local_213.f_109, 1);
		}
		if (Local_213.f_105.f_2 >= (func_130() - 20f) && Local_213.f_105.f_2 < (func_130() - 16f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.1f);
		}
		else if (Local_213.f_105.f_2 >= (func_130() - 16f) && Local_213.f_105.f_2 < (func_130() - 13f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.2f);
		}
		else if (Local_213.f_105.f_2 >= (func_130() - 13f) && Local_213.f_105.f_2 < (func_130() - 10f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.3f);
		}
		else if (Local_213.f_105.f_2 >= (func_130() - 10f) && Local_213.f_105.f_2 < (func_130() - 8f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.4f);
		}
		else if (Local_213.f_105.f_2 >= (func_130() - 8f) && Local_213.f_105.f_2 < (func_130() - 6f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.5f);
		}
		else if (Local_213.f_105.f_2 >= (func_130() - 6f) && Local_213.f_105.f_2 < (func_130() - 4f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.6f);
		}
		else if (Local_213.f_105.f_2 >= (func_130() - 4f) && Local_213.f_105.f_2 < (func_130() - 3f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.7f);
		}
		else if (Local_213.f_105.f_2 >= (func_130() - 3f) && Local_213.f_105.f_2 < (func_130() - 2f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.8f);
		}
		else if (Local_213.f_105.f_2 >= (func_130() - 2f) && Local_213.f_105.f_2 < (func_130() - 1f))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.9f);
		}
		else if (Local_213.f_105.f_2 >= (func_130() - 1f) && Local_213.f_105.f_2 < func_130())
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(1f);
		}
	}
	else
	{
		func_133("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
		{
			AUDIO::STOP_SOUND(Local_213.f_34);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_34);
			Local_213.f_34 = -1;
		}
	}
}

void func_103(float fParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, "SET_WARNING_FLASH_RATE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_104()
{
	if (Local_213.f_77 >= (func_130() - 50f) || Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 50)))
	{
		func_105();
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
		{
			Local_213.f_34 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_34, "Out_Of_Bounds_Alarm_Loop", Local_213.f_109, 1);
		}
		if ((Local_213.f_77 >= (func_130() - 50f) && Local_213.f_77 < (func_130() - 45f)) || (Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 50)) && Local_213.f_78 < IntToFloat((Global_262145.f_24015 - 45))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.1f);
		}
		else if ((Local_213.f_77 >= (func_130() - 45f) && Local_213.f_77 < (func_130() - 40f)) || (Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 45)) && Local_213.f_78 < IntToFloat((Global_262145.f_24015 - 40))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.2f);
		}
		else if ((Local_213.f_77 >= (func_130() - 40f) && Local_213.f_77 < (func_130() - 35f)) || (Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 40)) && Local_213.f_78 < IntToFloat((Global_262145.f_24015 - 35))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.3f);
		}
		else if ((Local_213.f_77 >= (func_130() - 35f) && Local_213.f_77 < (func_130() - 30f)) || (Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 35)) && Local_213.f_78 < IntToFloat((Global_262145.f_24015 - 30))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.4f);
		}
		else if ((Local_213.f_77 >= (func_130() - 30f) && Local_213.f_77 < (func_130() - 25f)) || (Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 30)) && Local_213.f_78 < IntToFloat((Global_262145.f_24015 - 25))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.5f);
		}
		else if ((Local_213.f_77 >= (func_130() - 25f) && Local_213.f_77 < (func_130() - 20f)) || (Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 25)) && Local_213.f_78 < IntToFloat((Global_262145.f_24015 - 20))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.6f);
		}
		else if ((Local_213.f_77 >= (func_130() - 20f) && Local_213.f_77 < (func_130() - 15f)) || (Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 20)) && Local_213.f_78 < IntToFloat((Global_262145.f_24015 - 15))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.7f);
		}
		else if ((Local_213.f_77 >= (func_130() - 15f) && Local_213.f_77 < (func_130() - 10f)) || (Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 15)) && Local_213.f_78 < IntToFloat((Global_262145.f_24015 - 10))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.8f);
		}
		else if ((Local_213.f_77 >= (func_130() - 10f) && Local_213.f_77 < (func_130() - 5f)) || (Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 10)) && Local_213.f_78 < IntToFloat((Global_262145.f_24015 - 5))))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(0.9f);
		}
		else if ((Local_213.f_77 >= (func_130() - 5f) && Local_213.f_77 < func_130()) || (Local_213.f_78 >= IntToFloat((Global_262145.f_24015 - 5)) && Local_213.f_78 < IntToFloat(Global_262145.f_24015)))
		{
			func_133("SET_WARNING_IS_VISIBLE", 1);
			func_103(1f);
		}
	}
	else
	{
		func_133("SET_WARNING_IS_VISIBLE", 0);
		if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
		{
			AUDIO::STOP_SOUND(Local_213.f_34);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_34);
			Local_213.f_34 = -1;
		}
	}
}

void func_105()
{
	int iVar0;
	
	if (CAM::IS_SCREEN_FADED_IN() && !GAMEPLAY::IS_BIT_SET(Global_1671295.f_3, 15))
	{
		if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			iVar0 = func_108(22045, -1, -1);
			if (iVar0 < 4)
			{
				func_107("HACK_DRONE_DIS", -1);
				iVar0++;
				func_106(22045, iVar0, -1, 1);
				GAMEPLAY::SET_BIT(&(Global_1671295.f_3), 15);
			}
		}
	}
}

var func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_89();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_107(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_89();
	}
	iVar0 = 0;
	iVar1 = func_110(iParam0, iParam1);
	uVar2 = func_109(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_0x94F12ABF9C79E339((iParam0 - 25538)) * 8) * 8;
	}
	return iVar0;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_89();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	return iVar0;
}

bool func_111()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 1);
}

void func_112(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, "ATTENUATE_SOUND_WAVE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_113(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, "SET_HEADING");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_114()
{
	if (func_8())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 11) && !Local_213.f_108)
		{
			func_115(1);
		}
		else
		{
			func_115(0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 11) || GAMEPLAY::IS_BIT_SET(Local_213.f_5, 23))
	{
		func_115(1);
	}
	else
	{
		func_115(0);
	}
}

void func_115(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, "SET_RETICLE_ON_TARGET");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_116()
{
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 4) || (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 3) && func_8()))
	{
		if (Local_213.f_17 == 100)
		{
			func_117(1);
		}
		else if (Local_213.f_17 != 0 && Local_213.f_17 != 100)
		{
			func_117(2);
		}
	}
	else
	{
		func_117(0);
	}
}

void func_117(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, "SET_RETICLE_STATE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_118()
{
	switch (Local_213.f_23)
	{
		case 0:
			func_119(0);
			break;
		
		case 1:
			func_119(2);
			break;
		
		case 2:
			func_119(4);
			break;
	}
}

void func_119(int iParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, "SET_ZOOM");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_120(int iParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, "SET_ZOOM_LABEL");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam0);
	func_85(sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_121(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, "SET_BOOST_PERCENTAGE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_122(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, "SET_DETONATE_PERCENTAGE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_123(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, "SET_EMP_PERCENTAGE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_124(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, "SET_SHOCK_PERCENTAGE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_125(var uParam0)
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_41))
	{
		Local_213.f_41 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_41, "Scanner_Loop", "DLC_BTL_Target_Pursuit_Sounds", 1);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_41, "signalstrength", uParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_41, "signalstrength", uParam0);
	}
}

float func_126()
{
	float fVar0;
	
	if (func_131(PLAYER::PLAYER_ID()) == 240)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
		{
			fVar0 = func_127(NETWORK::NET_TO_OBJ(Local_213.f_110), func_128(), 1);
			if (fVar0 >= 200f)
			{
				return 0f;
			}
			else if (fVar0 >= 180f && fVar0 < 200f)
			{
				return 0.1f;
			}
			else if (fVar0 >= 160f && fVar0 < 180f)
			{
				return 0.2f;
			}
			else if (fVar0 >= 140f && fVar0 < 160f)
			{
				return 0.3f;
			}
			else if (fVar0 >= 120f && fVar0 < 140f)
			{
				return 0.4f;
			}
			else if (fVar0 >= 100f && fVar0 < 120f)
			{
				return 0.5f;
			}
			else if (fVar0 >= 80f && fVar0 < 100f)
			{
				return 0.6f;
			}
			else if (fVar0 >= 60f && fVar0 < 80f)
			{
				return 0.7f;
			}
			else if (fVar0 >= 40f && fVar0 < 60f)
			{
				return 0.8f;
			}
			else if (fVar0 >= 20f && fVar0 < 40f)
			{
				return 0.9f;
			}
			else if (fVar0 <= 20f)
			{
				return 1f;
			}
		}
	}
	return 0f;
}

float func_127(var uParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, iParam4);
}

Vector3 func_128()
{
	if (func_131(PLAYER::PLAYER_ID()) == 240)
	{
		return Global_1688031;
	}
	return 0f, 0f, 0f;
}

void func_129()
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_41))
	{
		AUDIO::STOP_SOUND(Local_213.f_41);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_41);
		Local_213.f_41 = -1;
	}
}

float func_130()
{
	if (Global_1681628.f_6 == 0f)
	{
		return Global_262145.f_24016;
	}
	return Global_1681628.f_6;
}

int func_131(int iParam0)
{
	if (func_132(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_132(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_133(char* sParam0, int iParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Local_213.f_120, sParam0);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_134()
{
	int iVar0;
	int iVar1;
	
	if (func_54())
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 16))
	{
		if (func_99(0, -1, 0))
		{
			func_98(-1);
			func_97(21, "DRONE_MOVE", -1);
			func_97(20, "DRONE_POSITION", -1);
			if (!CONTROLS::_IS_INPUT_DISABLED(0))
			{
				func_96(210, "CELL_284", -1, 0);
				if (!func_22() && !func_8())
				{
					func_96(209, "BOOST_DRONE_E", -1, 0);
				}
				func_96(208, "MOVE_DRONE_UP", -1, 0);
				func_96(207, "MOVE_DRONE_DO", -1, 0);
			}
			else
			{
				func_97(29, "CELL_284", -1);
				if (!func_22() && !func_8())
				{
					func_96(203, "BOOST_DRONE_E", -1, 0);
				}
				func_96(209, "MOVE_DRONE_UP", -1, 0);
				func_96(210, "MOVE_DRONE_DO", -1, 0);
			}
			if (!func_22())
			{
				iVar0 = 206;
				if (CONTROLS::_IS_INPUT_DISABLED(0))
				{
					iVar0 = 237;
				}
				if (func_8())
				{
					func_96(iVar0, "MOVE_DRONE_EM", -1, 0);
				}
				else
				{
					func_96(iVar0, "MOVE_DRONE_ST", -1, 0);
				}
				iVar1 = 205;
				if (CONTROLS::_IS_INPUT_DISABLED(0))
				{
					iVar1 = 238;
				}
				func_96(iVar1, "MOVE_DRONE_EX", -1, 0);
			}
			if (!func_8())
			{
				if ((((func_140(0) || func_140(1)) || func_139()) || UNK1::_IS_RECORDING()) || func_135(PLAYER::PLAYER_ID()))
				{
				}
				else
				{
					func_96(201, "DRONE_PHOTO", -1, 0);
				}
			}
			func_96(80, "MOVE_DRONE_RE", -1, 0);
			GAMEPLAY::SET_BIT(&(Local_213.f_5), 16);
		}
	}
	else
	{
		func_84(0, -1, 0, 1, 0, 0, 1, 1, 0);
	}
	if (CONTROLS::_IS_INPUT_DISABLED(0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 17))
		{
			GAMEPLAY::SET_BIT(&(Local_213.f_5), 17);
			GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 16);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 17))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 17);
		GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 16);
	}
}

int func_135(int iParam0)
{
	if (func_138(func_131(iParam0)))
	{
		if (func_137() != func_14())
		{
			if (func_136() == func_137())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_136()
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_35;
}

int func_137()
{
	return Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11;
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
			return 1;
		
		default:
	}
	return 0;
}

var func_139()
{
	return Global_17272.f_135;
}

bool func_140(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

bool func_141()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 7);
}

void func_142()
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
		{
			if ((CAM::DOES_CAM_EXIST(Local_213.f_119) && CAM::IS_CAM_RENDERING(Local_213.f_119)) && !func_54())
			{
				iVar0 = 80;
				if (func_20())
				{
					iVar0 = 75;
				}
				if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, iVar0) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 7))
					{
						GAMEPLAY::SET_BIT(&(Local_213.f_5), 7);
					}
				}
			}
		}
	}
}

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if ((func_149() || !func_135(PLAYER::PLAYER_ID())) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = func_148(1);
	func_147(iVar0);
	iVar1 = func_148(0);
	iVar2 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_213.f_96, 2f, iVar1, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iVar2 != Local_213.f_112)
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iVar2, joaat("weapon_stungun"), 0) || ENTITY::GET_ENTITY_HEALTH(iVar2) == 999)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 26))
			{
				func_146(func_137(), 1);
				GAMEPLAY::SET_BIT(&(Local_213.f_5), 26);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_213.f_112))
	{
		if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_213.f_112, joaat("weapon_stungun"), 0) || ENTITY::GET_ENTITY_HEALTH(Local_213.f_112) == 999)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 26))
			{
				func_146(func_137(), 1);
				GAMEPLAY::SET_BIT(&(Local_213.f_5), 26);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 26))
	{
		uVar3 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_213.f_96, 2f, iVar0, 0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(uVar3))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_213.f_112))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_213.f_112, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar2, 0, 0);
			}
			func_144(1);
		}
	}
}

void func_144(bool bParam0)
{
	if (bParam0)
	{
		if (!func_145())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 1);
		}
	}
	else if (func_145())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 1);
	}
}

bool func_145()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 1);
}

void func_146(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	
	vVar0.x = -1498120964;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam1;
	iVar3 = 0;
	if (iParam0 != func_14())
	{
		GAMEPLAY::SET_BIT(&iVar3, iParam0);
	}
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar3);
	}
}

int func_147(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_148(bool bParam0)
{
	if (!bParam0)
	{
		if (Global_1681628.f_17 != 0)
		{
			return Global_1681628.f_17;
		}
		else
		{
			return -2143187667;
		}
	}
	else
	{
		return -1184972439;
	}
	return 0;
}

var func_149()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 14);
}

void func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	
	if ((GAMEPLAY::IS_BIT_SET(Local_213.f_5, 1) || func_159()) || func_158())
	{
		Local_213.f_17 = 0;
		Local_213.f_18 = 0;
		if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 10))
		{
			GAMEPLAY::SET_BIT(&(Local_213.f_5), 10);
		}
		return;
	}
	if (!func_158())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 10))
		{
			Local_213.f_17 = 100;
			GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 10);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
		{
			if ((CAM::DOES_CAM_EXIST(Local_213.f_119) && CAM::IS_CAM_RENDERING(Local_213.f_119)) && !GAMEPLAY::IS_BIT_SET(Local_213.f_5, 2))
			{
				if ((!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 4) && !GAMEPLAY::IS_BIT_SET(Local_213.f_5, 3)) && !Local_213.f_108)
				{
					iVar0 = 206;
					if (CONTROLS::_IS_INPUT_DISABLED(0))
					{
						iVar0 = 237;
					}
					if ((((CONTROLS::IS_CONTROL_JUST_RELEASED(2, iVar0) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, iVar0)) && !GAMEPLAY::IS_BIT_SET(Local_213.f_5, 5)) && !GAMEPLAY::IS_BIT_SET(Local_213.f_5, 24)) && !func_54())
					{
						GAMEPLAY::SET_BIT(&(Local_213.f_5), 24);
						if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 11))
						{
							Local_213.f_25++;
						}
					}
					if (func_8())
					{
						func_154();
					}
					else
					{
						func_153();
					}
				}
				else if (func_9(&(Local_213.f_164)))
				{
					if (func_8())
					{
						iVar1 = Global_262145.f_24608;
					}
					else
					{
						iVar1 = Global_262145.f_24008;
					}
					if (func_6(&(Local_213.f_164), iVar1, 0))
					{
						func_5(&(Local_213.f_164));
						Local_213.f_17 = 100;
						if (Local_213.f_29 != -1)
						{
							AUDIO::STOP_SOUND(Local_213.f_29);
							AUDIO::RELEASE_SOUND_ID(Local_213.f_29);
							Local_213.f_29 = -1;
						}
						if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_32))
						{
							AUDIO::STOP_SOUND(Local_213.f_32);
							AUDIO::RELEASE_SOUND_ID(Local_213.f_32);
							Local_213.f_32 = -1;
						}
						GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 4);
						GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 3);
						GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 24);
						Local_213.f_108 = 0;
					}
					else
					{
						iVar2 = (100 * GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_164)));
						Local_213.f_17 = (iVar2 / iVar1);
						if (!func_8())
						{
							if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_29))
							{
								Local_213.f_29 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_29, "HUD_Shock_Recharge", Local_213.f_109, 1);
								AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_29, "Time", (IntToFloat(iVar1) / 1000f));
							}
						}
					}
				}
				Local_213.f_194.f_2 = 2;
				if (CONTROLS::_IS_INPUT_DISABLED(0))
				{
					Local_213.f_194.f_3 = 238;
				}
				else
				{
					Local_213.f_194.f_3 = 205;
				}
				iVar3 = Global_262145.f_24011;
				if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 31))
				{
					Local_213.f_21 = 100;
				}
				if (func_8())
				{
					iVar3 = (iVar3 / 2);
					if (GAMEPLAY::IS_BIT_SET(Local_213.f_6, 1))
					{
						Local_213.f_20 = ((Local_213.f_22 * (Global_262145.f_24011 / 2)) / 100);
						Local_213.f_20 = ((Global_262145.f_24011 / 2) - Local_213.f_20);
						GAMEPLAY::CLEAR_BIT(&(Local_213.f_6), 1);
					}
					if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 31))
					{
						iVar3 = Local_213.f_20;
					}
				}
				else
				{
					Local_213.f_21 = 100;
				}
				if (!func_152())
				{
					if (!func_54() && func_151(&(Local_213.f_194), 1, iVar3))
					{
						if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_33))
						{
							Local_213.f_33 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FROM_ENTITY(Local_213.f_33, "Destroyed", NETWORK::NET_TO_OBJ(Local_213.f_110), Local_213.f_109, 1, 0);
						}
						unk_0x15CFA549788D35EF();
						iVar4 = 0;
						if (func_8())
						{
							iVar4 = 69;
						}
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_213.f_105, iVar4, 0.5f, 1, 0, 1065353216);
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
						}
						CONTROLS::SET_PAD_SHAKE(0, 300, 200);
						GAMEPLAY::SET_BIT(&(Local_213.f_5), 2);
					}
				}
				if (func_9(&(Local_213.f_194)))
				{
					CONTROLS::SET_PAD_SHAKE(0, 300, 20);
					if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 5))
					{
						GAMEPLAY::SET_BIT(&(Local_213.f_5), 5);
					}
					func_5(&(Local_213.f_186));
					if (!func_6(&(Local_213.f_194), iVar3, 0))
					{
						iVar5 = (Local_213.f_21 * GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_194)));
						if (!func_8())
						{
							Local_213.f_18 = (iVar5 / iVar3);
						}
						else if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 31))
						{
							Local_213.f_18 = (iVar5 / iVar3);
						}
						else
						{
							Local_213.f_18 = (Local_213.f_22 + (iVar5 / iVar3));
						}
						if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_30))
						{
							Local_213.f_30 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_30, "HUD_Detonate_Charge", Local_213.f_109, 1);
						}
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 5))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 5);
					if (!func_8())
					{
						Local_213.f_18 = 0;
					}
					else
					{
						GAMEPLAY::SET_BIT(&(Local_213.f_5), 31);
						Local_213.f_21 = (100 - Local_213.f_18);
						Local_213.f_20 = (iVar3 - GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_194)));
						Local_213.f_22 = Local_213.f_18;
						func_5(&(Local_213.f_186));
					}
					if (Local_213.f_30 != -1)
					{
						AUDIO::STOP_SOUND(Local_213.f_30);
						AUDIO::RELEASE_SOUND_ID(Local_213.f_30);
						Local_213.f_30 = -1;
					}
				}
				else if (func_8())
				{
					if (Local_213.f_18 > 0)
					{
						if (Local_213.f_18 <= 2)
						{
							Local_213.f_18 = 0;
						}
						if (!func_9(&(Local_213.f_186)))
						{
							func_7(&(Local_213.f_186), 0, 0);
						}
						else
						{
							iVar6 = Global_262145.f_24011;
							if (!func_6(&(Local_213.f_186), iVar6, 0))
							{
								fVar7 = ((100f - IntToFloat(Local_213.f_21)) / SYSTEM::TO_FLOAT((iVar6 / GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_186)))));
								Local_213.f_18 = (Local_213.f_18 - SYSTEM::ROUND(fVar7));
								Local_213.f_22 = Local_213.f_18;
								Local_213.f_21 = (100 - Local_213.f_18);
								GAMEPLAY::SET_BIT(&(Local_213.f_6), 1);
							}
							else
							{
								Local_213.f_18 = 0;
							}
						}
					}
					else
					{
						func_5(&(Local_213.f_194));
						GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 31);
						GAMEPLAY::CLEAR_BIT(&(Local_213.f_6), 1);
					}
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
		}
	}
}

int func_151(var uParam0, int iParam1, int iParam2)
{
	if (CONTROLS::IS_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) || (CONTROLS::IS_DISABLED_CONTROL_PRESSED(uParam0->f_2, uParam0->f_3) && iParam1))
	{
		if (!func_9(uParam0))
		{
			func_7(uParam0, 0, 0);
		}
		else if (func_6(uParam0, iParam2, 0))
		{
			func_5(uParam0);
			return 1;
		}
	}
	else
	{
		func_5(uParam0);
	}
	return 0;
}

int func_152()
{
	if (func_111())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_153()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	var uVar15;
	
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 24))
	{
		if (Local_213.f_12 == 1)
		{
			if (Local_213.f_159 == 2)
			{
				vVar0 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
				vVar3 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
				vVar6 = { (-SYSTEM::SIN(vVar3.z) * SYSTEM::COS(vVar3.x)), (SYSTEM::COS(vVar3.z) * SYSTEM::COS(vVar3.x)), SYSTEM::SIN(vVar3.x) };
				vVar9 = { 10f, 10f, 10f };
				vVar12 = { vVar0 + vVar6 * vVar9 };
				uVar15 = Global_262145.f_24009;
				if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 23))
				{
					uVar15 = Global_262145.f_24010;
				}
				GAMEPLAY::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(Local_213.f_105 + Vector(0f, 0f, 0f), vVar12, uVar15, 1, joaat("weapon_stungun"), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, NETWORK::NET_TO_OBJ(Local_213.f_110), 0, 0, 0, 1, 0, 0);
				Local_213.f_17 = 100;
				Local_213.f_18 = 0;
				CONTROLS::SET_PAD_SHAKE(0, 300, 150);
				if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_32))
				{
					Local_213.f_32 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(Local_213.f_32, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_213.f_110), Local_213.f_109, 1, 0);
				}
				if (Local_213.f_30 != -1)
				{
					AUDIO::STOP_SOUND(Local_213.f_30);
					AUDIO::RELEASE_SOUND_ID(Local_213.f_30);
					Local_213.f_30 = -1;
				}
				GAMEPLAY::SET_BIT(&(Local_213.f_5), 4);
				func_7(&(Local_213.f_164), 0, 0);
			}
		}
	}
}

void func_154()
{
	if ((GAMEPLAY::IS_BIT_SET(Local_213.f_5, 24) && !GAMEPLAY::IS_BIT_SET(Local_213.f_5, 3)) && !Local_213.f_108)
	{
		if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_xs_dr"))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_xs_dr");
				GRAPHICS::_START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_xs_dr_emp", NETWORK::NET_TO_OBJ(Local_213.f_110), 0f, -0.5f, 0f, 0f, 0f, 0f, 3f, 0, 0, 0);
			}
		}
		Local_213.f_17 = 100;
		CONTROLS::SET_PAD_SHAKE(0, 300, 150);
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_32))
		{
			Local_213.f_32 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_213.f_32, "Shock_Fire", NETWORK::NET_TO_OBJ(Local_213.f_110), Local_213.f_109, 1, 0);
		}
		if (Local_213.f_30 != -1)
		{
			AUDIO::STOP_SOUND(Local_213.f_30);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_30);
			Local_213.f_30 = -1;
		}
		func_155(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_213.f_110), 1), 0);
		GAMEPLAY::SET_BIT(&(Local_213.f_5), 3);
		Local_213.f_108 = 1;
		func_7(&(Local_213.f_164), 0, 0);
	}
}

void func_155(vector3 vParam0, bool bParam3)
{
	struct<6> Var0;
	
	Var0 = 262560226;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { vParam0 };
	Var0.f_5 = bParam3;
	if (!bParam3)
	{
		if (!func_157(1, 1) == 0)
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, func_157(1, 1));
		}
	}
	else if (Global_1681628.f_19 != func_14())
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, func_156(Global_1681628.f_19));
	}
}

var func_156(var uParam0)
{
	var uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, uParam0);
	return uVar0;
}

int func_157(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_43(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_87(iVar2, 0))
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_158()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 8);
}

int func_159()
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0)) && !GAMEPLAY::IS_BIT_SET(Local_213.f_5, 2))
	{
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (func_135(PLAYER::PLAYER_ID()) && GAMEPLAY::IS_BIT_SET(Global_2527313, 0))
		{
		}
		else if (func_167())
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(NETWORK::NET_TO_OBJ(Local_213.f_110)))
			{
				Local_213.f_24 = 1;
				return 1;
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 2))
	{
		Local_213.f_24 = 4;
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 9))
	{
		Local_213.f_24 = 1;
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 7))
	{
		Local_213.f_24 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_213.f_110)) || func_166(NETWORK::NET_TO_ENT(Local_213.f_110), 0))
		{
			Local_213.f_24 = 3;
			return 1;
		}
	}
	if (func_164(PLAYER::PLAYER_ID()))
	{
		Local_213.f_24 = 0;
		return 1;
	}
	if (func_111())
	{
		if (Global_1589668 != func_14())
		{
			if (func_30(Global_1589668))
			{
				Local_213.f_24 = 0;
				return 1;
			}
		}
	}
	if (func_163())
	{
		Local_213.f_24 = 1;
		return 1;
	}
	if (func_162(PLAYER::PLAYER_ID()))
	{
		Local_213.f_24 = 0;
		return 1;
	}
	if (func_161())
	{
		Local_213.f_24 = 0;
		return 1;
	}
	if (func_160())
	{
		Local_213.f_24 = 0;
		return 1;
	}
	if (func_11())
	{
		Local_213.f_24 = 0;
		return 1;
	}
	if (func_21())
	{
		return 1;
	}
	return 0;
}

bool func_160()
{
	return Global_91021;
}

bool func_161()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 9);
}

int func_162(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (Global_1626536[iVar0 /*603*/].f_8)
		{
			return 1;
		}
	}
	return 0;
}

int func_163()
{
	vector3 vVar0;
	
	if (Local_213.f_16 == -1945204837)
	{
		if (func_18(NETWORK::NET_TO_OBJ(Local_213.f_110)))
		{
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(NETWORK::NET_TO_OBJ(Local_213.f_110)) == -25693127)
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_213.f_110), 1) };
				if (vVar0.z >= 47f)
				{
					return 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (func_18(NETWORK::NET_TO_OBJ(Local_213.f_110)))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_OBJ(Local_213.f_110), -1071.258f, -242.5484f, 48.02133f, -1069.456f, -245.9234f, 43.87983f, 3f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_164(int iParam0)
{
	if (iParam0 != func_14() && func_43(iParam0, 1, 1))
	{
		if (func_42(iParam0) && !func_165(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	if (iParam0 != func_14() && func_43(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_309, 4);
	}
	return 0;
}

int func_166(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(uParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(uParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_167()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 15);
}

void func_168()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	int iVar18;
	var uVar19;
	vector3 vVar22;
	var uVar25;
	bool bVar26;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
		{
			vVar0 = { Local_213.f_105 };
			switch (Local_213.f_12)
			{
				case 0:
					vVar3 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
					vVar6 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
					vVar9 = { (-SYSTEM::SIN(vVar6.z) * SYSTEM::COS(vVar6.x)), (SYSTEM::COS(vVar6.z) * SYSTEM::COS(vVar6.x)), SYSTEM::SIN(vVar6.x) };
					vVar12 = { 10f, 10f, 10f };
					if (func_8())
					{
						vVar12 = { Global_262145.f_24609, Global_262145.f_24609, Global_262145.f_24609 };
					}
					vVar15 = { vVar3 + vVar9 * vVar12 };
					vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_213.f_105, ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_213.f_110)), 0f, -0.1f, 0f) };
					Local_213.f_117 = WORLDPROBE::START_SHAPE_TEST_LOS_PROBE(vVar0, vVar15, 123, NETWORK::NET_TO_OBJ(Local_213.f_110), 7);
					if (Local_213.f_117 != 0)
					{
						Local_213.f_12 = 1;
					}
					break;
				
				case 1:
					Local_213.f_159 = WORLDPROBE::GET_SHAPE_TEST_RESULT(Local_213.f_117, &iVar18, &vVar22, &uVar19, &uVar25);
					if (Local_213.f_159 == 2)
					{
						if (iVar18 == 0)
						{
							Local_213.f_13 = 1;
							vVar22 = { 0f, 0f, 0f };
							if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 11) && !func_8())
							{
								GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 11);
							}
							if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 23))
							{
								GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 23);
							}
							func_175();
						}
						else
						{
							Local_213.f_13 = 2;
							if (ENTITY::DOES_ENTITY_EXIST(uVar25))
							{
								if (ENTITY::IS_ENTITY_A_PED(uVar25))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uVar25, 0))
									{
										if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar25)))
										{
											if (func_173(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar25))))
											{
												bVar26 = true;
											}
										}
										else
										{
											if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 23))
											{
												GAMEPLAY::SET_BIT(&(Local_213.f_5), 23);
												if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 11) && !func_8())
												{
													GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 11);
												}
											}
											if (!func_65(PLAYER::PLAYER_ID()) && !func_62(PLAYER::PLAYER_ID(), 236))
											{
												if ((func_172(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar25)) || func_171(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar25))) || func_170(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar25)))
												{
													func_61(Global_1574998);
													func_169(&(Local_213.f_172), 0, 0);
												}
												else
												{
													func_175();
												}
											}
										}
										if ((((!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 11) && !bVar26) && func_18(Global_1681628.f_21)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_1681628.f_21, uVar25, 511)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar25)))
										{
											GAMEPLAY::SET_BIT(&(Local_213.f_5), 11);
											if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 23))
											{
												GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 23);
											}
										}
									}
								}
								else
								{
									if (!func_8())
									{
										if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 11))
										{
											GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 11);
										}
									}
									if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 23))
									{
										GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 23);
									}
									func_175();
								}
							}
							else
							{
								func_175();
							}
							Local_213.f_117 = 0;
							Local_213.f_12 = 0;
						}
					}
					else if (Local_213.f_159 == 0)
					{
						Local_213.f_12 = 0;
					}
					break;
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
		}
	}
}

void func_169(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::_0x89023FBBF9200E9F();
		}
	}
	else
	{
		*uParam0 = GAMEPLAY::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_170(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uParam0) == -183807561)
		{
			return 1;
		}
	}
	return 0;
}

int func_171(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if ((((((((((((PED::GET_PED_TYPE(uParam0) == 7 || PED::GET_PED_TYPE(uParam0) == 8) || PED::GET_PED_TYPE(uParam0) == 9) || PED::GET_PED_TYPE(uParam0) == 10) || PED::GET_PED_TYPE(uParam0) == 11) || PED::GET_PED_TYPE(uParam0) == 12) || PED::GET_PED_TYPE(uParam0) == 13) || PED::GET_PED_TYPE(uParam0) == 14) || PED::GET_PED_TYPE(uParam0) == 15) || PED::GET_PED_TYPE(uParam0) == 16) || PED::GET_PED_TYPE(uParam0) == 17) || PED::GET_PED_TYPE(uParam0) == 18) || PED::GET_PED_TYPE(uParam0) == 19)
		{
			return 1;
		}
	}
	return 0;
}

int func_172(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if ((((PED::GET_PED_TYPE(uParam0) == 6 || PED::GET_PED_TYPE(uParam0) == 29) || PED::GET_PED_TYPE(uParam0) == 27) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uParam0) == -472287501) || PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uParam0) == -1533126372)
		{
			return 1;
		}
	}
	return 0;
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_174(iParam0);
	if (!iVar0 == func_14())
	{
		if (iVar0 == func_174(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_174(int iParam0)
{
	if (iParam0 != func_14())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_14();
}

void func_175()
{
	if (func_9(&(Local_213.f_172)))
	{
		if (func_6(&(Local_213.f_172), 60000, 0))
		{
			func_5(&(Local_213.f_172));
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) <= 0)
			{
				func_61(Global_1574987);
			}
		}
	}
}

void func_176()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	vector3 vVar14;
	vector3 vVar17;
	int iVar20;
	var uVar21;
	vector3 vVar24;
	var uVar27;
	int iVar28;
	int iVar29;
	
	if ((func_20() || func_8()) || func_22())
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 29))
		{
			return;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
	{
		if (unk_0x7EF7649B64D7FF10(NETWORK::NET_TO_OBJ(Local_213.f_110)))
		{
			return;
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
		{
			switch (Local_213.f_10)
			{
				case 0:
					if ((func_8() || func_22()) || func_20())
					{
						fVar13 = 0.3f;
					}
					else
					{
						fVar13 = (func_179(Local_213.f_156) * 1.5f);
					}
					if (func_20())
					{
						vVar14 = { Local_213.f_105 };
						vVar1 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
						vVar4 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
						vVar7 = { (-SYSTEM::SIN(vVar4.z) * SYSTEM::COS(vVar4.x)), (SYSTEM::COS(vVar4.z) * SYSTEM::COS(vVar4.x)), SYSTEM::SIN(vVar4.x) };
						vVar10 = { 0.9f, 0.9f, 0.9f };
						vVar17 = { vVar1 + vVar7 * vVar10 };
					}
					else
					{
						vVar14 = { Local_213.f_105 };
						vVar17 = { Local_213.f_105 };
					}
					Local_213.f_116 = WORLDPROBE::START_SHAPE_TEST_CAPSULE(vVar14, vVar17, fVar13, 511, NETWORK::NET_TO_OBJ(Local_213.f_110), 4);
					if (Local_213.f_116 != 0)
					{
						Local_213.f_10 = 1;
					}
					break;
				
				case 1:
					iVar28 = WORLDPROBE::GET_SHAPE_TEST_RESULT(Local_213.f_116, &iVar20, &vVar24, &uVar21, &uVar27);
					if (iVar28 == 2)
					{
						if (iVar20 == 0)
						{
							Local_213.f_11 = 1;
							vVar24 = { 0f, 0f, 0f };
						}
						else
						{
							if (ENTITY::DOES_ENTITY_EXIST(uVar27))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(uVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uVar27, 0) && ENTITY::GET_ENTITY_MODEL(uVar27) != Local_213.f_156)
									{
										if (ENTITY::GET_ENTITY_SPEED(uVar27) > 0.5f || func_177(ENTITY::GET_ENTITY_MODEL(uVar27)))
										{
											if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 9))
											{
												GAMEPLAY::SET_BIT(&(Local_213.f_5), 9);
											}
										}
									}
								}
								else if (ENTITY::IS_ENTITY_A_PED(uVar27))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uVar27, 0))
									{
										if (!PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar27)))
										{
											if (Local_213.f_26 == 0)
											{
												iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
												if (iVar0 == 0)
												{
													iVar29 = 83;
												}
												else if (iVar0 == 1)
												{
													iVar29 = 88;
												}
												else
												{
													iVar29 = 77;
												}
												Local_213.f_26 = DECISIONEVENT::ADD_SHOCKING_EVENT_AT_POSITION(iVar29, Local_213.f_105, 5000f);
												func_169(&(Local_213.f_178), 0, 0);
											}
										}
									}
								}
							}
							Local_213.f_11 = 2;
							CONTROLS::SET_PAD_SHAKE(0, 300, 50);
							Local_213.f_116 = 0;
							Local_213.f_10 = 0;
						}
					}
					else if (iVar28 == 0)
					{
						Local_213.f_10 = 0;
					}
					break;
			}
			if (Local_213.f_26 != 0)
			{
				if (func_9(&(Local_213.f_178)))
				{
					if (func_6(&(Local_213.f_178), 5000, 0))
					{
						DECISIONEVENT::REMOVE_SHOCKING_EVENT(Local_213.f_26);
						func_5(&(Local_213.f_178));
						Local_213.f_26 = 0;
					}
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
		}
	}
}

int func_177(int iParam0)
{
	switch (iParam0)
	{
		case joaat("chernobog"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("skylift"):
		case joaat("taco"):
			return 1;
			break;
	}
	if (func_178(iParam0, 1))
	{
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_178(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14096)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14097)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14095)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14098)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14100)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14099)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18543)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18545)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18549)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18546)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18553)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18551)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18556)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20499)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20500)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

float func_179(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	
	func_180(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	return GAMEPLAY::ABSF((vVar0.z - vVar3.z));
}

void func_180(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		GAMEPLAY::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_183(iParam0);
		if (iVar0 != 0)
		{
			func_181(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_181(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_182(iParam0, &Global_1315802);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315802[iVar0]))
		{
			GAMEPLAY::GET_MODEL_DIMENSIONS(Global_1315802[iVar0], &(Global_1315806[iVar0 /*3*/]), &(Global_1315813[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315806[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315813[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315806[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315813[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315820[iVar0] = (Global_1315813[iVar0 /*3*/] - Global_1315806[iVar0 /*3*/]);
		Global_1315823[iVar0] = (Global_1315813[iVar0 /*3*/].f_1 - Global_1315806[iVar0 /*3*/].f_1);
		Global_1315826[iVar0] = (Global_1315813[iVar0 /*3*/].f_2 - Global_1315806[iVar0 /*3*/].f_2);
		if (Global_1315820[iVar0] > Global_1315829)
		{
			Global_1315829 = Global_1315820[iVar0];
		}
		if (Global_1315826[iVar0] > Global_1315830)
		{
			Global_1315830 = Global_1315826[iVar0];
		}
		iVar0++;
	}
	Global_1315831 = (Global_1315829 * -0.5f);
	Global_1315834 = (Global_1315829 * 0.5f);
	Global_1315831.f_1 = ((((0.5f * Global_1315823[0]) + Global_1315823[1]) + Global_1315802.f_3) * -1f);
	Global_1315834.f_1 = (0.5f * Global_1315823[0]);
	Global_1315831.f_2 = (Global_1315826[0] * -0.5f);
	Global_1315834.f_2 = (Global_1315826[0] * 0.5f);
	*uParam1 = { Global_1315831 };
	*uParam2 = { Global_1315834 };
}

void func_182(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_183(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_184(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_184(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_185()
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (func_18(NETWORK::NET_TO_OBJ(Local_213.f_110)))
		{
			iVar0 = func_188(NETWORK::NET_TO_OBJ(Local_213.f_110));
			if (iVar0 != -1)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_1573352.f_367, iVar0) && !GAMEPLAY::IS_BIT_SET(Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_554, iVar0))
				{
					func_186(1);
				}
			}
		}
	}
}

void func_186(bool bParam0)
{
	if (bParam0)
	{
		if (func_187())
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1681628, 9))
			{
				GAMEPLAY::SET_BIT(&Global_1681628, 9);
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1681628, 9))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 9);
	}
}

bool func_187()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 5);
}

int func_188(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0) && !ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		if (func_196(uParam0))
		{
			return 15;
		}
		if (func_193(uParam0))
		{
			return 28;
		}
		if (func_192(uParam0))
		{
			return 23;
		}
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0);
		if (iVar0 != 0)
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				iVar2 = iVar1;
				func_189(iVar2);
				if (Global_1675125[iVar1] == iVar0)
				{
					return iVar2;
				}
				iVar1++;
			}
		}
	}
	return -1;
}

void func_189(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1675125[iVar0] == 0)
	{
		Global_1675125[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(func_191(iParam0), func_190(iParam0));
	}
}

char* func_190(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		default:
	}
	return "";
}

Vector3 func_191(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_192(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0, 1), -16.2669f, -685.4531f, 31.3381f, 1) <= 80f)
		{
			if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, -73.06738f, -689.2972f, 31.96555f, -68.41993f, -676.6198f, 36.63721f, 4.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, 25.07854f, -664.3469f, 30.40673f, 14.14475f, -690.1883f, 38.61758f, 16f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, -18.7689f, -659.366f, 30.79917f, -15.31378f, -703.7052f, 38.08809f, 54.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, 9.119493f, -710.9459f, 30.83068f, -39.76558f, -693.0358f, 38.08809f, 24.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, -69.84457f, -683.3396f, 30.70474f, -39.69342f, -690.2305f, 36.58809f, 17.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, -43.32302f, -693.9668f, 30.58809f, -72.39151f, -683.4483f, 39.48361f, 20f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, -39.63783f, -686.181f, 30.58809f, -39.30408f, -662.2571f, 39.48083f, 20f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_193(var uParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(uParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2016.6f, -1039.867f, -3.801932f, -2129.956f, -1003.351f, 22.18234f, 15.75f, 0, 1, 0)) || func_194());
}

int func_194()
{
	vector3 vVar0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		vVar0 = { -2073.541f, -1021.104f, 14.99213f };
		if (SYSTEM::VDIST2(func_195(PLAYER::PLAYER_ID()), vVar0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(vVar0, 60f))
			{
				return 1;
			}
		}
	}
	return 0;
}

Vector3 func_195(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

bool func_196(var uParam0)
{
	return ((!ENTITY::IS_ENTITY_DEAD(uParam0, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f), Vector(22.18234f, -1003.351f, -2129.956f) + Vector(0f, 7773.967f, 654.731f), 15.75f, 0, 1, 0)) || func_197());
}

int func_197()
{
	vector3 vVar0;
	
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		vVar0 = { Vector(-3.801932f, -1039.867f, -2016.6f) + Vector(0f, 7773.967f, 654.731f) };
		if (SYSTEM::VDIST2(func_195(PLAYER::PLAYER_ID()), vVar0) <= 25600f)
		{
			if (CAM::IS_SPHERE_VISIBLE(vVar0, 50f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_198(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (func_20())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (CAM::DOES_CAM_EXIST(Local_213.f_119) && CAM::IS_CAM_ACTIVE(Local_213.f_119))
		{
			if (CAM::IS_CAM_RENDERING(Local_213.f_119) || iParam0)
			{
				if (!func_54())
				{
					func_49(0);
				}
				func_209(1);
				if ((!func_208() || GAMEPLAY::IS_BIT_SET(Local_213.f_5, 1)) || func_159())
				{
					UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
				}
				else
				{
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
					func_57();
					func_206(1);
					uVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(NETWORK::NET_TO_ENT(Local_213.f_110));
					if (INTERIOR::IS_VALID_INTERIOR(uVar0))
					{
						Global_1681628.f_22 = uVar0;
						if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 8))
						{
							Local_213.f_80 = func_205(unk_0xF49B58631D9E22D9(uVar0));
							unk_0x252BDC06B73FA6EA(uVar0, &(Local_213.f_102), &(Local_213.f_16));
							GAMEPLAY::SET_BIT(&(Local_213.f_5), 8);
						}
						iVar1 = 0;
						if (func_204(Local_213.f_105.f_2, 43f, 48.7f))
						{
							iVar1 = 1;
						}
						if (Global_1681628.f_7 == -1f)
						{
							UI::RESPONDING_AS_TEMP(1f);
						}
						else
						{
							UI::RESPONDING_AS_TEMP(Global_1681628.f_7);
						}
						if (!func_135(PLAYER::PLAYER_ID()) && !func_201(PLAYER::PLAYER_ID()))
						{
							if (!func_200())
							{
								func_199(1);
							}
						}
						UI::_SET_RADAR_BIGMAP_ENABLED(0, 0);
						UI::SET_RADAR_AS_INTERIOR_THIS_FRAME(Local_213.f_16, Local_213.f_102, Local_213.f_102.f_1, SYSTEM::FLOOR(Local_213.f_80), iVar1);
					}
					else
					{
						Local_213.f_16 = -1;
						if (Global_1681628.f_7 == -1f)
						{
							UI::RESPONDING_AS_TEMP(0f);
						}
						else
						{
							UI::RESPONDING_AS_TEMP(Global_1681628.f_7);
						}
						if (!func_200())
						{
							func_199(1);
						}
						UI::_SET_RADAR_BIGMAP_ENABLED(0, 0);
						Global_1681628.f_22 = -1;
						if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 8))
						{
							GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 8);
						}
					}
				}
			}
		}
	}
}

void func_199(int iParam0)
{
	Global_2460889 = iParam0;
}

bool func_200()
{
	return Global_2460889;
}

int func_201(int iParam0)
{
	if (func_203(iParam0))
	{
		return 1;
	}
	if (func_202(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_66(iParam0, 9);
	}
	return 0;
}

int func_203(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1626536[iVar0 /*603*/].f_1, 0);
	}
	return 0;
}

int func_204(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 >= fParam1 && fParam0 < fParam2)
	{
		return 1;
	}
	return 0;
}

float func_205(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_206(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_93734.f_8 = 1;
	}
	else
	{
		Global_93734.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		func_207(iVar0);
		iVar0++;
	}
}

void func_207(int iParam0)
{
	Global_93734.f_178[iParam0] = 1;
	Global_93734.f_177 = 1;
}

bool func_208()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 4);
}

void func_209(int iParam0)
{
	if (Global_2528542.f_4545 != iParam0)
	{
		Global_2528542.f_4545 = iParam0;
	}
}

void func_210()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	vector3 vVar16;
	float fVar19;
	vector3 vVar20;
	float fVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	vector3 vVar30;
	float fVar33;
	float fVar34;
	var uVar35;
	var uVar36;
	vector3 vVar37;
	
	if (!func_20() || func_159())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
		{
			fVar0 = 26f;
			fVar1 = 40f;
			fVar2 = 30f;
			fVar3 = 30f;
			iVar4 = 1;
			fVar5 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_213.f_110));
			fVar6 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_213.f_110));
			fVar7 = (30f * SYSTEM::TIMESTEP());
			func_215();
			CONTROLS::_DISABLE_INPUT_GROUP(2);
			func_214(&(Local_213[0]), &(Local_213[1]), &(Local_213[2]), &(Local_213[3]), 0, 0);
			if (CONTROLS::_IS_INPUT_DISABLED(0))
			{
				iVar4 = 2;
				Local_213[2] = (Local_213[2] * iVar4);
				Local_213[3] = (Local_213[3] * iVar4);
			}
			if (CONTROLS::IS_LOOK_INVERTED())
			{
				Local_213[3] = (Local_213[3] * -1);
				Local_213[1] = (Local_213[1] * -1);
			}
			if ((Local_213[2] != 0 || Local_213[3] != 0) || (Local_213[0] != 0 || Local_213[1] != 0))
			{
				if (Local_213[2] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_213[2])));
				}
				else if (Local_213[0] != 0)
				{
					fVar8 = (1f / (127f / IntToFloat(Local_213[0])));
				}
				else
				{
					fVar8 = 0f;
				}
				if (Local_213[3] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_213[3])));
				}
				else if (Local_213[1] != 0)
				{
					fVar9 = (1f / (127f / IntToFloat(Local_213[1])));
				}
				else
				{
					fVar9 = 0f;
				}
				vVar13 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), 2) };
				fVar10 = (((fVar9 * 0.05f) * fVar7) * fVar0);
				fVar11 = -(((fVar8 * 0.05f) * fVar7) * fVar0);
				if ((fVar5 != 0f || Local_213[2] != 0) || Local_213[0] != 0)
				{
					if (Local_213[2] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_213[2])));
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else if (Local_213[0] != 0)
					{
						fVar19 = (1f / (127f / IntToFloat(Local_213[0])));
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else
					{
						if (fVar5 > 0.1f || fVar5 < -0.1f)
						{
							if (fVar5 > 0f)
							{
								fVar19 = -1f;
							}
							else
							{
								fVar19 = 1f;
							}
						}
						if (vVar13.y != 0f)
						{
							if (vVar13.y < 2f && vVar13.y > 0f)
							{
								fVar19 = 0.0001f;
							}
							else if (vVar13.y > -2f && vVar13.y < 0f)
							{
								fVar19 = -0.0001f;
							}
						}
						else
						{
							fVar19 = 0f;
						}
						fVar12 = -(((fVar19 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				else
				{
					fVar12 = 0f;
				}
				vVar16 = { Vector(fVar11, fVar12, fVar10) + vVar13 };
				if (fVar5 != 0f)
				{
					if (Local_213[2] == 0 && Local_213[0] == 0)
					{
						if (vVar16.y > fVar2)
						{
							vVar16.y = fVar2;
						}
						else if (vVar16.y < -fVar2)
						{
							vVar16.y = -fVar2;
						}
					}
					else if (vVar16.y > fVar2)
					{
						vVar16.y = fVar2;
					}
					else if (vVar16.y < -fVar2)
					{
						vVar16.y = -fVar2;
					}
				}
				if (vVar16.x > fVar3)
				{
					vVar16.x = fVar3;
				}
				else if (vVar16.x < -fVar3)
				{
					vVar16.x = -fVar3;
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 12))
				{
					GAMEPLAY::SET_BIT(&(Local_213.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), Vector(0f, 0f, 0f) + Vector(vVar16.z, vVar16.y, vVar16.x), 2, 1);
			}
			else if (((Local_213[2] != 0 || Local_213[3] != 0) || Local_213[0] != 0) || Local_213[1] != 0)
			{
				vVar20 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), 2) };
				if (func_213())
				{
					if (func_212())
					{
						fVar24 = -1f;
						Local_213.f_86 = fVar24;
					}
				}
				else
				{
					if (Local_213[2] != 0)
					{
						fVar23 = (1f / (127f / IntToFloat(Local_213[2])));
						Local_213.f_86 = fVar23;
					}
					else if (Local_213[0] != 0)
					{
						fVar23 = (1f / (127f / IntToFloat(Local_213[0])));
						Local_213.f_86 = fVar23;
					}
					else
					{
						fVar23 = 0f;
					}
					if (Local_213[3] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_213[3])));
						Local_213.f_86 = fVar23;
					}
					else if (Local_213[1] != 0)
					{
						fVar24 = (1f / (127f / IntToFloat(Local_213[1])));
						Local_213.f_86 = fVar23;
					}
					else
					{
						fVar24 = 0f;
					}
				}
				fVar25 = -(((fVar24 * 0.05f) * fVar7) * fVar1);
				fVar26 = -(((fVar23 * 0.05f) * fVar7) * fVar1);
				if (fVar5 != 0f)
				{
					if (Local_213[2] == 0 && Local_213[0] == 0)
					{
						if (fVar5 > 1f || fVar5 < -1f)
						{
							if (fVar5 > 0f)
							{
								fVar23 = -1f;
							}
							else
							{
								fVar23 = 1f;
							}
						}
						if (vVar20.y < 2f && vVar20.y > 0f)
						{
							fVar23 = 0.0001f;
						}
						else if (vVar20.y > -2f && vVar20.y < 0f)
						{
							fVar23 = -0.0001f;
						}
						fVar26 = -(((fVar23 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				vVar27 = { Vector(0f, fVar26, fVar25) + vVar20 };
				if (vVar27.y > fVar2)
				{
					vVar27.y = fVar2;
				}
				else if (vVar27.y < -fVar2)
				{
					vVar27.y = -fVar2;
				}
				if (vVar27.x > fVar3)
				{
					vVar27.x = fVar3;
				}
				else if (vVar27.x < -fVar3)
				{
					vVar27.x = -fVar3;
				}
				if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 12))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), Vector(0f, 0f, 0f) + Vector(vVar20.z, vVar27.y, vVar27.x), 2, 1);
			}
			else
			{
				Local_213.f_86 = 0f;
				vVar30 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), 2) };
				if (fVar5 != 0f || fVar6 != 0f)
				{
					if (vVar30.y != 0f)
					{
						if (vVar30.y < 0f)
						{
							fVar33 = -1f;
						}
						else
						{
							fVar33 = 1f;
						}
					}
					else
					{
						fVar33 = 0f;
					}
					if (fVar6 != 0f)
					{
						if (vVar30.x < 0f)
						{
							fVar34 = -1f;
						}
						else
						{
							fVar34 = 1f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					if (vVar30.y != 0f)
					{
						if (vVar30.y < 2f && vVar30.y > 0f)
						{
							fVar33 = 0.0001f;
						}
						else if (vVar30.y > -2f && vVar30.y < 0f)
						{
							fVar33 = -0.0001f;
						}
					}
					else
					{
						fVar33 = 0f;
					}
					if (vVar30.x != 0f)
					{
						if (vVar30.x < 2f && vVar30.x > 0f)
						{
							fVar34 = 0.0001f;
						}
						else if (vVar30.x > -2f && vVar30.x < 0f)
						{
							fVar34 = -0.0001f;
						}
					}
					else
					{
						fVar34 = 0f;
					}
					uVar35 = func_211(-(((fVar34 * 0.05f) * fVar7) * (fVar1 - 25f)));
					uVar36 = func_211(-(((fVar33 * 0.05f) * fVar7) * (fVar1 - 25f)));
					vVar37 = { Vector(0f, uVar36, uVar35) + vVar30 };
					if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 12))
					{
						vVar37.x = vVar30.x;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), Vector(0f, 0f, 0f) + Vector(vVar30.z, vVar37.y, vVar37.x), 2, 1);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
		}
	}
}

float func_211(float fParam0)
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

bool func_212()
{
	return GAMEPLAY::IS_BIT_SET(Local_213.f_5, 22);
}

bool func_213()
{
	return GAMEPLAY::IS_BIT_SET(Local_213.f_5, 21);
}

void func_214(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((CONTROLS::_0x5B84D09CEC5209C5(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((CONTROLS::_0x5B84D09CEC5209C5(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((CONTROLS::_0x5B84D09CEC5209C5(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((CONTROLS::_0x5B84D09CEC5209C5(2, 221) * 127f));
	if (bParam4)
	{
		if (!CONTROLS::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((CONTROLS::_0x4F8A26A890FD62FB(2, 218) * 127f));
		}
		if (!CONTROLS::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((CONTROLS::_0x4F8A26A890FD62FB(2, 219) * 127f));
		}
		if (!CONTROLS::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((CONTROLS::_0x4F8A26A890FD62FB(2, 220) * 127f));
		}
		if (!CONTROLS::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((CONTROLS::_0x4F8A26A890FD62FB(2, 221) * 127f));
		}
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (bParam5)
		{
			if (CONTROLS::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (CONTROLS::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_215()
{
	if (func_111())
	{
		switch (Local_213.f_23)
		{
			case 0:
				Local_213.f_84 = 90f;
				Local_213.f_83 = 90f;
				break;
			
			case 1:
				Local_213.f_84 = 75f;
				Local_213.f_83 = 75f;
				break;
			
			case 2:
				Local_213.f_84 = 45f;
				Local_213.f_83 = 45f;
				break;
		}
	}
	else
	{
		switch (Local_213.f_23)
		{
			case 0:
				Local_213.f_84 = 90f;
				Local_213.f_83 = 90f;
				break;
			
			case 1:
				Local_213.f_84 = 80f;
				Local_213.f_83 = 80f;
				break;
			
			case 2:
				Local_213.f_84 = 70f;
				Local_213.f_83 = 70f;
				break;
			}
	}
}

void func_216()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	float fVar21;
	vector3 vVar22;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	vector3 vVar29;
	vector3 vVar32;
	float fVar35;
	float fVar36;
	var uVar37;
	var uVar38;
	vector3 vVar39;
	
	if ((GAMEPLAY::IS_BIT_SET(Local_213.f_5, 1) || func_159()) || func_20())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
		{
			fVar0 = 40f;
			fVar1 = 40f;
			fVar2 = 19f;
			fVar3 = 14f;
			iVar4 = 1;
			fVar5 = ENTITY::GET_ENTITY_ROLL(NETWORK::NET_TO_OBJ(Local_213.f_110));
			fVar6 = ENTITY::GET_ENTITY_PITCH(NETWORK::NET_TO_OBJ(Local_213.f_110));
			fVar7 = (30f * SYSTEM::TIMESTEP());
			func_215();
			CONTROLS::_DISABLE_INPUT_GROUP(2);
			func_214(&(Local_213[0]), &(Local_213[1]), &(Local_213[2]), &(Local_213[3]), 0, 0);
			if (CONTROLS::_IS_INPUT_DISABLED(0))
			{
				iVar4 = 5;
				Local_213[2] = (Local_213[2] * iVar4);
				Local_213[3] = (Local_213[3] * iVar4);
			}
			if (CONTROLS::IS_LOOK_INVERTED())
			{
				Local_213[3] = (Local_213[3] * -1);
			}
			if (func_6(&(Local_213.f_190), 750, 0))
			{
				if (!CONTROLS::_IS_INPUT_DISABLED(0))
				{
					bVar8 = CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, 210);
				}
				else
				{
					bVar8 = (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, 242));
					if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, 241))
					{
						bVar9 = true;
					}
				}
				if (bVar8)
				{
					func_169(&(Local_213.f_190), 0, 0);
				}
			}
			if (bVar8 && !func_213())
			{
				if (!CONTROLS::_IS_INPUT_DISABLED(0))
				{
					Local_213.f_23++;
				}
				else if (bVar9)
				{
					Local_213.f_23 = (Local_213.f_23 - 1);
				}
				else
				{
					Local_213.f_23++;
				}
				if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
				{
					Local_213.f_36 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_36, "HUD_Zoom_Change", Local_213.f_109, 1);
				}
				if (Local_213.f_23 > 2)
				{
					Local_213.f_23 = 0;
				}
				else if (Local_213.f_23 < 0)
				{
					Local_213.f_23 = 2;
				}
			}
			else if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
			{
				AUDIO::STOP_SOUND(Local_213.f_36);
				AUDIO::RELEASE_SOUND_ID(Local_213.f_36);
				Local_213.f_36 = -1;
			}
			Local_213.f_85 = (Local_213.f_85 + (((Local_213.f_83 - Local_213.f_85) * 0.06f) * fVar7));
			CAM::SET_CAM_FOV(Local_213.f_119, Local_213.f_85);
			if (Local_213[2] != 0 || Local_213[3] != 0)
			{
				if (Local_213[2] != 0)
				{
					fVar10 = (1f / (127f / IntToFloat(Local_213[2])));
				}
				else
				{
					fVar10 = 0f;
				}
				if (Local_213[3] != 0)
				{
					fVar11 = (1f / (127f / IntToFloat(Local_213[3])));
				}
				else
				{
					fVar11 = 0f;
				}
				vVar15 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), 2) };
				fVar12 = (((fVar11 * 0.05f) * fVar7) * fVar0);
				fVar13 = -(((fVar10 * 0.05f) * fVar7) * fVar0);
				if ((fVar5 != 0f || Local_213[0] != 0) && !func_54())
				{
					if (Local_213[0] != 0)
					{
						fVar21 = (1f / (127f / IntToFloat(Local_213[0])));
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
					else
					{
						if (fVar5 > 0.1f || fVar5 < -0.1f)
						{
							if (fVar5 > 0f)
							{
								fVar21 = -1f;
							}
							else
							{
								fVar21 = 1f;
							}
						}
						if (vVar15.y != 0f)
						{
							if (vVar15.y < 1.5f && vVar15.y > 0f)
							{
								fVar21 = 0.001f;
							}
							else if (vVar15.y > -1.5f && vVar15.y < 0f)
							{
								fVar21 = -0.001f;
							}
						}
						else
						{
							fVar21 = 0f;
						}
						fVar14 = -(((fVar21 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				else
				{
					fVar14 = 0f;
				}
				vVar18 = { Vector(fVar13, fVar14, fVar12) + vVar15 };
				if (fVar5 != 0f)
				{
					if (Local_213[0] == 0)
					{
						if (vVar18.y > fVar2)
						{
							vVar18.y = fVar2;
						}
						else if (vVar18.y < -fVar2)
						{
							vVar18.y = -fVar2;
						}
					}
					else if (vVar18.y > fVar2)
					{
						vVar18.y = fVar2;
					}
					else if (vVar18.y < -fVar2)
					{
						vVar18.y = -fVar2;
					}
				}
				if (vVar18.x > fVar3)
				{
					vVar18.x = fVar3;
				}
				else if (vVar18.x < -fVar3)
				{
					vVar18.x = -fVar3;
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 12))
				{
					GAMEPLAY::SET_BIT(&(Local_213.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), Vector(0f, 0f, 0f) + Vector(vVar18.z, vVar18.y, vVar18.x), 2, 1);
			}
			else if (((Local_213[0] != 0 || Local_213[1] != 0) && !func_213()) && !func_54())
			{
				vVar22 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), 2) };
				if (func_213())
				{
					if (func_212())
					{
						fVar26 = -1f;
						Local_213.f_86 = fVar26;
					}
				}
				else
				{
					if (Local_213[0] != 0)
					{
						fVar25 = (1f / (127f / IntToFloat(Local_213[0])));
						Local_213.f_86 = fVar25;
					}
					else
					{
						fVar25 = 0f;
					}
					if (Local_213[1] != 0)
					{
						fVar26 = (1f / (127f / IntToFloat(Local_213[1])));
						Local_213.f_86 = fVar25;
					}
					else
					{
						fVar26 = 0f;
					}
				}
				fVar27 = -(((fVar26 * 0.05f) * fVar7) * fVar1);
				fVar28 = -(((fVar25 * 0.05f) * fVar7) * fVar1);
				if (fVar5 != 0f)
				{
					if ((Local_213[0] == 0 && !func_54()) || func_213())
					{
						if (fVar5 > 1f || fVar5 < -1f)
						{
							if (fVar5 > 0f)
							{
								fVar25 = -1f;
							}
							else
							{
								fVar25 = 1f;
							}
						}
						if (vVar22.y < 1.5f && vVar22.y > 0f)
						{
							fVar25 = 0.001f;
						}
						else if (vVar22.y > -1.5f && vVar22.y < 0f)
						{
							fVar25 = -0.001f;
						}
						fVar28 = -(((fVar25 * 0.05f) * fVar7) * (fVar1 - 25f));
					}
				}
				vVar29 = { Vector(0f, fVar28, fVar27) + vVar22 };
				if (vVar29.y > fVar2)
				{
					vVar29.y = fVar2;
				}
				else if (vVar29.y < -fVar2)
				{
					vVar29.y = -fVar2;
				}
				if (vVar29.x > fVar3)
				{
					vVar29.x = fVar3;
				}
				else if (vVar29.x < -fVar3)
				{
					vVar29.x = -fVar3;
				}
				if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 12))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 12);
				}
				ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), Vector(0f, 0f, 0f) + Vector(vVar22.z, vVar29.y, vVar29.x), 2, 1);
			}
			else if (!func_212() && !func_213())
			{
				Local_213.f_86 = 0f;
				vVar32 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), 2) };
				if (fVar5 != 0f || fVar6 != 0f)
				{
					if (vVar32.y != 0f)
					{
						if (vVar32.y < 0f)
						{
							fVar35 = -1f;
						}
						else
						{
							fVar35 = 1f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (fVar6 != 0f)
					{
						if (vVar32.x < 0f)
						{
							fVar36 = -1f;
						}
						else
						{
							fVar36 = 1f;
						}
					}
					else
					{
						fVar36 = 0f;
					}
					if (vVar32.y != 0f)
					{
						if (vVar32.y < 1.5f && vVar32.y > 0f)
						{
							fVar35 = 0.001f;
						}
						else if (vVar32.y > -1.5f && vVar32.y < 0f)
						{
							fVar35 = -0.001f;
						}
					}
					else
					{
						fVar35 = 0f;
					}
					if (vVar32.x != 0f)
					{
						if (vVar32.x < 1.5f && vVar32.x > 0f)
						{
							fVar36 = 0.001f;
						}
						else if (vVar32.x > -1.5f && vVar32.x < 0f)
						{
							fVar36 = -0.001f;
						}
					}
					else
					{
						fVar36 = 0f;
					}
					uVar37 = func_211(-(((fVar36 * 0.05f) * fVar7) * (fVar1 - 25f)));
					uVar38 = func_211(-(((fVar35 * 0.05f) * fVar7) * (fVar1 - 25f)));
					vVar39 = { Vector(0f, uVar38, uVar37) + vVar32 };
					if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 12))
					{
						vVar39.x = vVar32.x;
					}
					ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), Vector(0f, 0f, 0f) + Vector(vVar32.z, vVar39.y, vVar39.x), 2, 1);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
		}
	}
}

void func_217()
{
	int iVar0;
	int iVar1;
	
	if (func_48(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_148(0);
		Local_213.f_96 = { func_220(&Local_213) };
		if (!ENTITY::DOES_ENTITY_EXIST(Local_213.f_112))
		{
			if (!func_219(Local_213.f_96))
			{
				if (func_147(iVar0))
				{
					Local_213.f_112 = OBJECT::CREATE_OBJECT(iVar0, Local_213.f_96, 0, 0, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_213.f_112, Local_213.f_96, 0, 0, 1);
					ENTITY::SET_ENTITY_COLLISION(Local_213.f_112, 1, 0);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_213.f_112, 1, 1);
					ENTITY::SET_ENTITY_RECORDS_COLLISIONS(Local_213.f_112, 1);
					ENTITY::SET_ENTITY_HEADING(Local_213.f_112, func_218());
					ENTITY::FREEZE_ENTITY_POSITION(Local_213.f_112, 1);
					ENTITY::SET_ENTITY_VISIBLE(Local_213.f_112, 0, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
		}
		else
		{
			iVar1 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Local_213.f_96, 2f, iVar0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != Local_213.f_112)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					ENTITY::_SET_ENTITY_COLLISION_2(iVar1, 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iVar1, 1);
					ENTITY::SET_ENTITY_VISIBLE(iVar1, 1, 0);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar1);
				}
			}
		}
	}
	else
	{
		Local_213.f_96 = { func_220(&Local_213) };
	}
}

float func_218()
{
	if (Global_1681628.f_5 != 0f)
	{
		return Global_1681628.f_5;
	}
	return 0f;
}

int func_219(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_220(var uParam0)
{
	if (!func_219(Global_1681628.f_8))
	{
		return Global_1681628.f_8;
	}
	else
	{
		return uParam0->f_96;
	}
	return 0f, 0f, 0f;
}

void func_221()
{
	if (Local_213.f_30 != -1)
	{
		AUDIO::STOP_SOUND(Local_213.f_30);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_30);
		Local_213.f_30 = -1;
	}
}

int func_222()
{
	if (UI::IS_PAUSE_MENU_ACTIVE() || NETWORK::_0x2EAC52B4019E2782())
	{
		return 1;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 1;
	}
	if (func_141())
	{
		return 1;
	}
	if (func_227(PLAYER::PLAYER_ID()) && !func_226())
	{
		return 1;
	}
	if (func_135(PLAYER::PLAYER_ID()))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2527313, 0))
		{
			return 1;
		}
	}
	if (Global_1657075 || Global_1312791)
	{
		func_225(1);
		return 1;
	}
	if ((func_223(0) || func_140(1)) || func_139())
	{
		func_49(0);
		func_57();
		func_74();
		return 1;
	}
	return 0;
}

int func_223(bool bParam0)
{
	if (CONTROLS::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_224(PLAYER::PLAYER_PED_ID()))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17272.f_130)
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (((CONTROLS::IS_CONTROL_PRESSED(0, 166) || CONTROLS::IS_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 166) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_224(var uParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_225(bool bParam0)
{
	if (bParam0)
	{
		if (!func_21())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 20);
		}
	}
	else if (func_21())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 20);
	}
}

bool func_226()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_30, 12) && GAMEPLAY::IS_BIT_SET(Global_1689320, 0));
}

int func_227(int iParam0)
{
	if (func_87(iParam0, 0))
	{
		return 1;
	}
	if (func_228())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_228()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

void func_229()
{
	var uVar0;
	float fVar1;
	float fVar2;
	
	if (func_20())
	{
		return;
	}
	if (func_208())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
		{
			if (!UI::DOES_BLIP_EXIST(Local_213.f_121))
			{
				Local_213.f_121 = func_231(Local_213.f_105, 0);
				UI::SET_BLIP_SPRITE(Local_213.f_121, 627);
			}
			else
			{
				uVar0 = func_230(Local_213.f_81);
				fVar1 = Local_213.f_105;
				fVar2 = Local_213.f_105.f_1;
				UI::SET_BLIP_DISPLAY(Local_213.f_121, 2);
				UI::SET_BLIP_COORDS(Local_213.f_121, Local_213.f_105);
				if (((func_8() || func_22()) && UI::IS_PAUSE_MENU_ACTIVE()) && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					if (!UI::_0x9049FE339D5F6F6F())
					{
						fVar1 = -323.1f;
						fVar2 = -1970.9f;
						UI::SET_BLIP_COORDS(Local_213.f_121, fVar1, fVar2, 0f);
						UI::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar1, fVar2);
						UI::_0x20FE7FDFEEAD38C0();
					}
				}
				UI::LOCK_MINIMAP_POSITION(fVar1, fVar2);
				UI::SET_BLIP_ROTATION(Local_213.f_121, SYSTEM::ROUND(uVar0));
				UI::SET_BLIP_SCALE(Local_213.f_121, 1f);
				UI::SET_BLIP_PRIORITY(Local_213.f_121, 9);
				UI::LOCK_MINIMAP_ANGLE(SYSTEM::ROUND(uVar0));
			}
		}
	}
}

float func_230(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

var func_231(vector3 vParam0, int iParam3)
{
	var uVar0;
	
	uVar0 = UI::ADD_BLIP_FOR_COORD(vParam0);
	UI::SET_BLIP_SCALE(uVar0, func_232(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	UI::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_232(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_233()
{
	if (func_20())
	{
		if (Local_213.f_105.f_2 >= (func_130() - 20f))
		{
			if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
			{
				Local_213.f_34 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_34, "Out_Of_Bounds_Alarm_Loop", Local_213.f_109, 1);
			}
		}
		else if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
		{
			AUDIO::STOP_SOUND(Local_213.f_34);
			AUDIO::RELEASE_SOUND_ID(Local_213.f_34);
			Local_213.f_34 = -1;
		}
	}
}

void func_234()
{
	if (func_22() || func_111())
	{
		switch (Local_213.f_158)
		{
			case 0:
				func_254();
				break;
			
			case 1:
				func_244();
				break;
			
			case 2:
				func_242();
				break;
			
			case 3:
				func_235();
				break;
			}
	}
}

void func_235()
{
	func_50(1);
	if (!func_241())
	{
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_239(0);
	func_237(0);
	func_236(0);
}

void func_236(int iParam0)
{
	if (Local_213.f_158 != iParam0)
	{
		Local_213.f_158 = iParam0;
	}
}

void func_237(bool bParam0)
{
	if (bParam0)
	{
		if (!func_238())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 17);
		}
	}
	else if (func_238())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 17);
	}
}

bool func_238()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 17);
}

void func_239(bool bParam0)
{
	if (bParam0)
	{
		if (!func_240())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 18);
		}
	}
	else if (func_240())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 18);
	}
}

bool func_240()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 18);
}

bool func_241()
{
	return Global_1671295.f_163;
}

void func_242()
{
	if (func_240() || UI::IS_PAUSE_MENU_ACTIVE())
	{
		func_50(1);
		func_243(0);
		GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 16);
		func_236(3);
	}
}

void func_243(bool bParam0)
{
	if (bParam0)
	{
		if (!func_54())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 19);
		}
	}
	else if (func_54())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 19);
	}
}

void func_244()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (func_6(&(Local_213.f_180), 3000, 0))
		{
			if (func_253())
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4269308, 2) || func_6(&(Local_213.f_184), 8000, 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
					{
					}
					CAM::DO_SCREEN_FADE_IN(500);
					func_245(PLAYER::PLAYER_ID(), 1, 0, 0);
					func_5(&(Local_213.f_180));
					func_5(&(Local_213.f_184));
					func_236(2);
				}
			}
			else if (func_6(&(Local_213.f_184), 15000, 0))
			{
				func_5(&(Local_213.f_180));
				func_5(&(Local_213.f_184));
				func_50(1);
				func_243(0);
				GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 16);
				func_236(3);
			}
		}
	}
}

void func_245(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_252())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_250())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar25 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_87(PLAYER::PLAYER_ID(), 0) && !func_228()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2424047[iParam0 /*416*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_249(uVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar25, 1, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar25))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar25, 0);
					}
					ENTITY::_SET_ENTITY_SOMETHING(uVar25, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar25, 0);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar25, 1);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar25) && PED::_0x7350823473013C02(uVar25))
				{
					PED::_0x4668D80430D6C299(uVar25);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar25, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_248();
					func_247();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2424047[iParam0 /*416*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2668)
				{
					Global_2405071.f_2668 = 0;
				}
			}
			else
			{
				if (!func_249(uVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar25, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar25))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uVar25, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_SOMETHING(uVar25, 1);
						}
					}
					if (func_246(Global_4456448.f_161209))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar25, 1);
					}
				}
				if (Global_1312844)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar25, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(uVar25) && !PED::IS_PED_IN_ANY_VEHICLE(uVar25, 0))
					{
						AI::CLEAR_PED_TASKS_IMMEDIATELY(uVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar26);
		}
	}
}

bool func_246(int iParam0)
{
	return iParam0 == 17;
}

void func_247()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_248()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_249(var uParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_250()
{
	if (func_251() == 0)
	{
		return 1;
	}
	return 0;
}

int func_251()
{
	return Global_1312467.f_18;
}

int func_252()
{
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

int func_253()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_254()
{
	if (func_270())
	{
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 201))
		{
			func_243(1);
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_98(-1);
				func_245(PLAYER::PLAYER_ID(), 0, 0, 0);
				CAM::DO_SCREEN_FADE_OUT(500);
				func_268(1, -1);
				func_255(3, 1, 1, 0);
				func_7(&(Local_213.f_180), 0, 0);
				func_7(&(Local_213.f_184), 0, 0);
				func_236(1);
			}
		}
	}
}

int func_255(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (Global_71590)
	{
		if ((iParam0 != 17 && iParam0 != 3) && iParam0 != 23)
		{
			return 0;
		}
		if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 14))
		{
			if (iParam0 == 17)
			{
				GAMEPLAY::SET_BIT(&Global_4269308, 14);
				GAMEPLAY::SET_BIT(&Global_4269308, 16);
			}
			if (iParam0 == 3)
			{
				GAMEPLAY::SET_BIT(&Global_4269308, 14);
				GAMEPLAY::SET_BIT(&Global_4269308, 15);
			}
			if (iParam0 == 23)
			{
				GAMEPLAY::SET_BIT(&Global_4269308, 14);
				GAMEPLAY::SET_BIT(&Global_4269308, 27);
			}
		}
		if (Global_2430[iParam0 /*15*/].f_9 == 0)
		{
			func_266();
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[iParam0 /*15*/].f_9) > 0)
		{
			GAMEPLAY::CLEAR_BIT(&Global_4269308, 14);
			GAMEPLAY::CLEAR_BIT(&Global_4269308, 16);
			GAMEPLAY::CLEAR_BIT(&Global_4269308, 15);
			GAMEPLAY::CLEAR_BIT(&Global_4269308, 27);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_260();
	if (Global_14553.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_53(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14519 == 1)
	{
		return 0;
	}
	if (Global_14553.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_14550))
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14553.f_1 < 4)
			{
				func_259("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_14550 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_14535)
	{
		SYSTEM::WAIT(0);
	}
	func_266();
	func_256();
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[iParam0 /*15*/].f_9) == 0)
	{
		Global_3029 = 0;
		Global_14553.f_1 = 7;
		func_259(&(Global_2430[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[iParam0 /*15*/].f_9) == 0)
			{
				Global_14551 = SYSTEM::START_NEW_SCRIPT(&(Global_2430[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2430[iParam0 /*15*/].f_9) == 0)
		{
			Global_14551 = SYSTEM::START_NEW_SCRIPT(&(Global_2430[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2430[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_256()
{
	if (Global_71590 == 0)
	{
		Global_2430[14 /*15*/].f_4 = -99;
		Global_2430[4 /*15*/].f_4 = -99;
		if (Global_2458608)
		{
			if (func_258(14))
			{
				func_257(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_257(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_257(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_257(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_257(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2430[iParam0 /*15*/]), sParam1, 16);
	Global_2430[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2430[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2430[iParam0 /*15*/].f_9 = GAMEPLAY::GET_HASH_KEY(sParam3);
	Global_2430[iParam0 /*15*/].f_10 = iParam4;
	Global_2430[iParam0 /*15*/].f_11 = iParam5;
	Global_2430[iParam0 /*15*/].f_12 = iParam6;
	Global_2430[iParam0 /*15*/].f_13 = iParam7;
	Global_2430[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2430[iParam0 /*15*/].f_12 == 0)
	{
		Global_2430[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2430[iParam0 /*15*/].f_13 == 0)
	{
		Global_2430[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2430[iParam0 /*15*/].f_14 == 0)
	{
		Global_2430[iParam0 /*15*/].f_14 = 0;
	}
}

bool func_258(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_259(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_260()
{
	if (func_258(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_261();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_261()
{
	func_262();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_262()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_265(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_264(PLAYER::PLAYER_PED_ID());
			if (func_263(iVar0) && (!func_258(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_263(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_263(int iParam0)
{
	return iParam0 < 3;
}

int func_264(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_265(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_265(int iParam0)
{
	if (func_263(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_266()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2430[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_71590 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 161)
		{
			if (Global_106565.f_28044[iVar2 /*29*/].f_19[Global_14553] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_257(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_257(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_257(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_36425 == 15 && func_267(0) == 0) && Global_2428 == 0)
		{
			func_257(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14728 = 0;
			Global_2429 = 255;
		}
		else
		{
			func_257(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14728 = 1;
			Global_2429 = 42;
		}
		if (iVar1 == 1)
		{
			func_257(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_257(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_257(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_257(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_257(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_106565.f_14045.f_89 == 1)
		{
			func_257(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_106565.f_14045.f_88 == 1)
		{
			func_257(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_257(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_257(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_257(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_257(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_257(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_257(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_257(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_257(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_257(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_257(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_257(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_257(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_257(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_257(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_257(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_257(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_257(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (GAMEPLAY::IS_BIT_SET(Global_4269308, 4) == 1)
		{
			func_257(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_257(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_257(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_257(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_257(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_257(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_257(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_257(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_257(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_257(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_257(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_257(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_257(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_257(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_257(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_257(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_257(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 4) == 1)
		{
			if (Global_1573916)
			{
				func_257(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4269308, 20) == 1)
			{
				func_257(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4269308, 22) == 1)
			{
				func_257(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4269308, 26) == 1)
			{
				func_257(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((GAMEPLAY::IS_BIT_SET(Global_4269308, 4) == 0 && Global_1573916 == 0) && GAMEPLAY::IS_BIT_SET(Global_4269308, 20) == 0) && GAMEPLAY::IS_BIT_SET(Global_4269308, 22) == 0) && GAMEPLAY::IS_BIT_SET(Global_4269308, 26) == 0)
		{
			func_257(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

int func_267(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71838, 0);
}

void func_268(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_95(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17411.f_8353)
	{
		UI::RESET_HUD_COMPONENT_VALUES(15);
		Global_17411.f_8353 = 0;
	}
	UI::_CLEAR_NOTIFICATIONS_POS(0f);
	if (Global_17411.f_5628[iVar0])
	{
		UI::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_17411.f_5628[iVar0] = 0;
	}
	if (Global_17411.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_17411.f_5614[iVar0] = 0;
	}
	if (Global_17411.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_17411.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_269(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_269(var uParam0)
{
	if (uParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		}
		*uParam0 = 0;
		uParam0->f_9 = 0;
	}
}

int func_270()
{
	if (func_54())
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if ((func_140(0) || func_139()) || UNK1::_IS_RECORDING())
	{
		func_5(&(Local_213.f_188));
		func_7(&(Local_213.f_188), 0, 0);
		GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 16);
		func_74();
		return 0;
	}
	else if (func_9(&(Local_213.f_188)))
	{
		if (!func_6(&(Local_213.f_188), 2000, 0))
		{
			return 0;
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 16);
			func_5(&(Local_213.f_188));
		}
	}
	if (func_135(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_271()
{
	if (func_272())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 25))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_213.f_110), 1);
					GAMEPLAY::SET_BIT(&(Local_213.f_5), 25);
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 25))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
			{
				ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_213.f_110), 0);
				GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 25);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
			}
		}
	}
}

int func_272()
{
	if (func_135(PLAYER::PLAYER_ID()))
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2527313, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_273()
{
	var uVar0;
	
	if (func_20())
	{
		Global_1681628.f_1 = 0;
	}
	if (func_274() || func_159())
	{
		if (!func_9(&(Local_213.f_162)))
		{
			func_7(&(Local_213.f_162), 0, 0);
		}
		else if (func_6(&(Local_213.f_162), Global_1681628.f_1, 0) || func_159())
		{
			func_5(&(Local_213.f_160));
			if (func_20())
			{
				if (func_18(PLAYER::PLAYER_PED_ID()))
				{
					FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_213.f_105, 72, 0.5f, 1, 0, 1065353216);
				}
				else
				{
					FIRE::ADD_EXPLOSION(Local_213.f_105, 72, 0.5f, 1, 0, 1065353216, 0);
				}
				CONTROLS::SET_PAD_SHAKE(0, 300, 200);
				NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_213.f_110, 1);
				STREAMING::CLEAR_FOCUS();
				uVar0 = NETWORK::NET_TO_OBJ(Local_213.f_110);
				OBJECT::DELETE_OBJECT(&uVar0);
				GAMEPLAY::SET_BIT(&(Local_213.f_6), 2);
			}
			func_305(1);
			func_304(3);
		}
	}
	else if (func_9(&(Local_213.f_162)))
	{
		func_169(&(Local_213.f_162), 0, 0);
	}
}

int func_274()
{
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0)) && !GAMEPLAY::IS_BIT_SET(Local_213.f_5, 2))
	{
		return 1;
	}
	if (Local_213.f_11 == 2)
	{
		Local_213.f_24 = 1;
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 1))
	{
		return 1;
	}
	if (func_280())
	{
		Local_213.f_24 = 5;
		return 1;
	}
	if (func_111() && func_276())
	{
		Local_213.f_24 = 5;
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 2))
	{
		Local_213.f_24 = 4;
		return 1;
	}
	if (func_145())
	{
		if (!func_9(&(Local_213.f_170)))
		{
			func_7(&(Local_213.f_170), 0, 0);
		}
		else if (func_6(&(Local_213.f_170), 3000, 0))
		{
			Local_213.f_24 = 0;
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 7))
	{
		Local_213.f_24 = 0;
		return 1;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(NETWORK::NET_TO_OBJ(Local_213.f_110)) || func_166(NETWORK::NET_TO_ENT(Local_213.f_110), 0))
		{
			Local_213.f_24 = 3;
			return 1;
		}
	}
	if (!func_111() && !func_275())
	{
		if (Local_213.f_105.f_2 >= func_130())
		{
			Local_213.f_24 = 5;
			return 1;
		}
	}
	return 0;
}

bool func_275()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 0);
}

int func_276()
{
	int iVar0;
	
	if (func_279())
	{
		return 0;
	}
	if (func_43(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
		{
			if (func_111())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_278()) && !ENTITY::IS_ENTITY_DEAD(func_278(), 0))
				{
					iVar0 = func_278();
				}
			}
			else
			{
				iVar0 = PLAYER::PLAYER_PED_ID();
			}
			if (func_18(iVar0) && func_18(NETWORK::NET_TO_OBJ(Local_213.f_110)))
			{
				Local_213.f_77 = func_277(iVar0, NETWORK::NET_TO_OBJ(Local_213.f_110), 1);
				if (Local_213.f_77 > func_130())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_277(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam1, 0))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
	}
	else
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 0) };
	}
	return GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, iParam2);
}

int func_278()
{
	if (Global_1589668 != func_14())
	{
		if (!func_30(Global_1589668))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1365159))
			{
				return Global_1365159;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Global_1687946[Global_1589668]))
			{
				return Global_1687946[Global_1589668];
			}
		}
	}
	return -1;
}

bool func_279()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 6);
}

int func_280()
{
	float fVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0))
	{
		if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Local_213.f_105, &fVar0, 1, 0))
		{
			Local_213.f_78 = (Local_213.f_105.f_2 - fVar0);
			if (Local_213.f_78 > IntToFloat(Global_262145.f_24015))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_281()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	
	if (!func_20())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0)) && CAM::DOES_CAM_EXIST(Local_213.f_119))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
		{
			vVar0 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), 2) };
			vVar0 = { (vVar0.x + 180f), (-vVar0.y + 180f), vVar0.z };
			CAM::SET_CAM_ROT(Local_213.f_119, vVar0, 2);
			if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 1) || func_159())
			{
				return;
			}
			vVar3 = { func_284(func_285()) };
			vVar6 = { func_284(func_283(func_285())) };
			vVar9 = { func_282(vVar3, vVar6) };
			fVar12 = 5f;
			if (!CONTROLS::_IS_INPUT_DISABLED(0))
			{
				if (CONTROLS::_0x5B84D09CEC5209C5(2, 208) != 0f)
				{
					iVar13 = 1;
				}
				if (CONTROLS::_0x5B84D09CEC5209C5(2, 207) != 0f)
				{
					iVar14 = 1;
				}
			}
			else
			{
				if (CONTROLS::_0x5B84D09CEC5209C5(2, 209) != 0f)
				{
					iVar13 = 1;
				}
				if (CONTROLS::_0x5B84D09CEC5209C5(2, 210) != 0f)
				{
					iVar14 = 1;
				}
			}
			if (iVar13 && !func_222())
			{
				Local_213.f_76 = 140f;
				fVar12 = 7f;
			}
			else if (iVar14 && !func_222())
			{
				Local_213.f_76 = 60f;
				fVar12 = 3.5f;
			}
			else
			{
				Local_213.f_76 = 100f;
			}
			if (CONTROLS::_IS_INPUT_DISABLED(0))
			{
				if (Local_213[2] >= 127)
				{
					Local_213[2] = 127;
				}
				else if (Local_213[2] <= -127)
				{
					Local_213[2] = -127;
				}
				if (Local_213[0] >= 127)
				{
					Local_213[0] = 127;
				}
				else if (Local_213[0] <= -127)
				{
					Local_213[0] = -127;
				}
			}
			if (Local_213[2] > 0 || Local_213[0] > 0)
			{
				if (Local_213[2] > 0)
				{
					fVar15 = -(fVar12 / (127f / IntToFloat(Local_213[2])));
				}
				else
				{
					fVar15 = -(fVar12 / (127f / IntToFloat(Local_213[0])));
				}
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar9 * Vector(fVar15, fVar15, fVar15), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar3 * Vector(-Local_213.f_76, -Local_213.f_76, -Local_213.f_76), 0, 1, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else if (Local_213[2] < 0 || Local_213[0] < 0)
			{
				if (Local_213[0] < 0)
				{
					fVar16 = -(fVar12 / (127f / IntToFloat(Local_213[0])));
				}
				else
				{
					fVar16 = -(fVar12 / (127f / IntToFloat(Local_213[2])));
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar3 * Vector(-Local_213.f_76, -Local_213.f_76, -Local_213.f_76), 0, 1, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar9 * Vector(fVar16, fVar16, fVar16), 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, 0f, 0f, 1f, 0f, -1.2f, 0f, 0, 1, 1, 1, 0, 1);
			}
			else
			{
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar3 * Vector(-Local_213.f_76, -Local_213.f_76, -Local_213.f_76), 0, 1, 1, 0);
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
		}
	}
}

Vector3 func_282(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

Vector3 func_283(struct<2> Param0, var uParam2)
{
	vector3 vVar0;
	
	vVar0 = { SYSTEM::SIN(Param0.f_1), (-SYSTEM::SIN(Param0) * SYSTEM::COS(Param0.f_1)), (SYSTEM::COS(Param0) * SYSTEM::COS(Param0.f_1)) };
	return vVar0;
}

Vector3 func_284(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

Vector3 func_285()
{
	vector3 vVar0;
	
	vVar0 = { 0f, 1f, 0f };
	func_286(&vVar0);
	return vVar0;
}

void func_286(var uParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(0f);
	fVar1 = SYSTEM::SIN(0f);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

void func_287()
{
	float fVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	vector3 vVar23;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	vector3 vVar34;
	float fVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	
	if (func_20())
	{
		return;
	}
	if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_213.f_110), 0)) && CAM::DOES_CAM_EXIST(Local_213.f_119))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
		{
			fVar0 = 0f;
			if (!func_22() && !func_8())
			{
				if (!func_213())
				{
					if (func_9(&(Local_213.f_168)))
					{
						iVar1 = Global_262145.f_24013;
						if (func_8())
						{
							iVar1 = (iVar1 / 3);
						}
						if (!func_6(&(Local_213.f_168), iVar1, 0))
						{
							iVar2 = (100 * GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_168)));
							Local_213.f_19 = (iVar2 / iVar1);
						}
						else
						{
							if (func_18(Local_213.f_111))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_213.f_111, NETWORK::NET_TO_OBJ(Local_213.f_110), -1, 0f, 0f, -0.25f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							Local_213.f_19 = 100;
							func_5(&(Local_213.f_168));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_40))
							{
								AUDIO::STOP_SOUND(Local_213.f_40);
								AUDIO::RELEASE_SOUND_ID(Local_213.f_40);
								Local_213.f_40 = -1;
							}
						}
					}
					if (!CONTROLS::_IS_INPUT_DISABLED(0))
					{
						uVar3 = CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, 209);
					}
					else
					{
						uVar3 = CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, 203);
					}
					if (((uVar3 && Local_213.f_19 == 100) && !func_222()) && !func_54())
					{
						fVar0 = 120f;
						if (func_8())
						{
							fVar0 = 110f;
						}
						if (IntToFloat(Local_213[1]) != 0f)
						{
							func_291(1);
						}
						else
						{
							func_291(0);
						}
						GRAPHICS::ANIMPOSTFX_PLAY("RaceTurbo", 0, 0);
						func_7(&(Local_213.f_166), 0, 0);
						func_290(1);
						if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_39))
						{
							Local_213.f_39 = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_39, "HUD_Boost_Loop", Local_213.f_109, 1);
						}
					}
				}
				else
				{
					fVar0 = 120f;
					if (func_8())
					{
						fVar0 = 115f;
					}
					if (CAM::DOES_CAM_EXIST(Local_213.f_119))
					{
						if (!CAM::IS_CAM_SHAKING(Local_213.f_119))
						{
							CAM::SHAKE_CAM(Local_213.f_119, "DRONE_BOOST_SHAKE", 1065353216);
							CAM::SET_CAM_SHAKE_AMPLITUDE(Local_213.f_119, 0.15f);
						}
					}
					if (func_9(&(Local_213.f_166)))
					{
						if (func_6(&(Local_213.f_166), Global_262145.f_24012, 0))
						{
							Local_213.f_19 = 0;
							func_291(0);
							func_290(0);
							func_5(&(Local_213.f_168));
							func_7(&(Local_213.f_168), 0, 0);
							CAM::STOP_CAM_SHAKING(Local_213.f_119, 1);
							CONTROLS::STOP_PAD_SHAKE(0);
							GRAPHICS::ANIMPOSTFX_STOP("RaceTurbo");
							func_5(&(Local_213.f_166));
							if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_39))
							{
								AUDIO::STOP_SOUND(Local_213.f_39);
								AUDIO::RELEASE_SOUND_ID(Local_213.f_39);
								Local_213.f_39 = -1;
							}
							if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_40))
							{
								Local_213.f_40 = AUDIO::GET_SOUND_ID();
								AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_40, "HUD_Boost_Recharge_Loop", Local_213.f_109, 1);
							}
						}
						else
						{
							fVar4 = (100f / (SYSTEM::TO_FLOAT(Global_262145.f_24012) / IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_166))));
							Local_213.f_19 = (100 - SYSTEM::ROUND(fVar4));
							CONTROLS::SET_PAD_SHAKE(0, Global_262145.f_24012, 255);
						}
					}
				}
			}
			vVar5 = { Local_213.f_105 };
			vVar8 = { ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_213.f_110), 2) };
			vVar8 = { (vVar8.x + 180f), (-vVar8.y + 180f), vVar8.z };
			CAM::SET_CAM_ROT(Local_213.f_119, vVar8, 2);
			if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 1) || func_159())
			{
				return;
			}
			vVar11 = { func_284(func_285()) };
			vVar14 = { func_284(func_283(func_285())) };
			GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar17, 1, 0);
			if (!func_289())
			{
				if (Local_213.f_9 == 2 || (vVar5.z - fVar17) < 2f)
				{
					fVar18 = 24f;
					if (Local_213[1] != 0)
					{
						CONTROLS::DISABLE_CONTROL_ACTION(2, 207, 1);
					}
					if (CONTROLS::_0x5B84D09CEC5209C5(2, 207) != 0f || Local_213[1] != 0)
					{
						if ((vVar5.z - fVar17) < 0.5f || CONTROLS::_0x5B84D09CEC5209C5(2, 207) != 0f)
						{
							fVar18 = 24f;
						}
						else
						{
							fVar18 = 10f;
						}
					}
					else
					{
						fVar18 = 3f;
					}
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, 0f, 0f, fVar18, 0, 1, 1, 0);
				}
			}
			if (CONTROLS::_IS_INPUT_DISABLED(0))
			{
				if (Local_213[2] >= 127)
				{
					Local_213[2] = 127;
				}
				else if (Local_213[2] <= -127)
				{
					Local_213[2] = -127;
				}
				if (Local_213[0] >= 127)
				{
					Local_213[0] = 127;
				}
				else if (Local_213[0] <= -127)
				{
					Local_213[0] = -127;
				}
			}
			if (!CONTROLS::_IS_INPUT_DISABLED(0))
			{
				if (CONTROLS::_0x5B84D09CEC5209C5(2, 208) != 0f)
				{
					iVar19 = 1;
				}
				if (CONTROLS::_0x5B84D09CEC5209C5(2, 207) != 0f)
				{
					iVar20 = 1;
				}
			}
			else
			{
				if (CONTROLS::_0x5B84D09CEC5209C5(2, 209) != 0f)
				{
					iVar19 = 1;
				}
				if (CONTROLS::_0x5B84D09CEC5209C5(2, 210) != 0f)
				{
					iVar20 = 1;
				}
			}
			if (((iVar19 && func_288()) && !func_54()) || (func_213() && !func_212()))
			{
				if (func_22() || func_8())
				{
					fVar22 = 10f;
				}
				if (func_213() && !func_212())
				{
					if (!CONTROLS::_IS_INPUT_DISABLED(0))
					{
						fVar21 = ((Local_213.f_76 + fVar0) / (1f / CONTROLS::_0x5B84D09CEC5209C5(2, 208)));
					}
					else
					{
						fVar21 = ((Local_213.f_76 + fVar0) / (1f / CONTROLS::_0x5B84D09CEC5209C5(2, 209)));
					}
				}
				else if (!CONTROLS::_IS_INPUT_DISABLED(0))
				{
					fVar21 = ((Local_213.f_76 + fVar22) / (1f / CONTROLS::_0x5B84D09CEC5209C5(2, 208)));
				}
				else
				{
					fVar21 = ((Local_213.f_76 + fVar22) / (1f / CONTROLS::_0x5B84D09CEC5209C5(2, 209)));
				}
				vVar23 = { vVar14 * Vector(fVar21, fVar21, fVar21) };
				if (vVar23.z > 149f)
				{
					vVar23.z = 149f;
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar23, 0, 1, 1, 0);
			}
			else if (((iVar20 && !func_54()) && func_288()) && !func_222())
			{
				if (func_22() || func_8())
				{
					fVar27 = 10f;
				}
				if (!CONTROLS::_IS_INPUT_DISABLED(0))
				{
					fVar26 = ((Local_213.f_76 + fVar27) / (1f / CONTROLS::_0x5B84D09CEC5209C5(2, 207)));
				}
				else
				{
					fVar26 = ((Local_213.f_76 + fVar27) / (1f / CONTROLS::_0x5B84D09CEC5209C5(2, 210)));
				}
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar14 * Vector(-fVar26, -fVar26, -fVar26), 0, 1, 1, 0);
			}
			if (((Local_213[1] > 0 && !func_213()) && !func_222()) && !func_54())
			{
				if (func_22())
				{
					fVar30 = 40f;
				}
				else
				{
					fVar30 = 6.4f;
				}
				fVar28 = (Local_213.f_76 / (127f / IntToFloat(Local_213[1])));
				fVar29 = (fVar30 / (127f / IntToFloat(Local_213[1])));
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar11 * Vector(fVar28, fVar28, fVar28), 0, 1, 1, 0);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, 0f, 0f, fVar29, 0, 1, 1, 0);
			}
			else if ((((Local_213[1] < 0 && !func_213()) && !func_222()) && !func_54()) || (func_213() && func_212()))
			{
				if (func_213() && func_212())
				{
					fVar33 = 50f;
					if (func_8())
					{
						fVar31 = (Local_213.f_76 / -1f);
					}
					else
					{
						fVar31 = ((Local_213.f_76 + fVar0) / -1f);
					}
					fVar32 = (fVar33 / -1f);
				}
				else
				{
					if (func_22() || func_8())
					{
						fVar33 = 40f;
					}
					else
					{
						fVar33 = 6.4f;
					}
					if (func_8())
					{
						fVar31 = (Local_213.f_76 / (127f / IntToFloat(Local_213[1])));
					}
					else
					{
						fVar31 = ((Local_213.f_76 + fVar0) / (127f / IntToFloat(Local_213[1])));
					}
					fVar32 = (fVar33 / (127f / IntToFloat(Local_213[1])));
				}
				if (func_8())
				{
					if (!func_212())
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, 0f, 0f, -fVar32, 0, 1, 1, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar11 * Vector(fVar31, fVar31, fVar31), 0, 1, 1, 0);
					}
					else
					{
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, 0f, 0f, 41f, 0, 1, 1, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, 0f, -149f, 0f, 0, 1, 1, 0);
					}
				}
				else
				{
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, 0f, 0f, -fVar32, 0, 1, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar11 * Vector(fVar31, fVar31, fVar31), 0, 1, 1, 0);
				}
			}
			vVar34 = { func_282(vVar11, vVar14) };
			if ((!func_213() && !func_222()) && !func_54())
			{
				if (Local_213[0] > 0)
				{
					fVar37 = -(Local_213.f_76 / (127f / IntToFloat(Local_213[0])));
					fVar38 = (8f / (127f / IntToFloat(Local_213[0])));
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar34 * Vector(fVar37, fVar37, fVar37), 0, 1, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, 0f, 0f, fVar38, 0, 1, 1, 0);
				}
				else if (Local_213[0] < 0)
				{
					fVar39 = -(Local_213.f_76 / (127f / IntToFloat(Local_213[0])));
					fVar40 = (8f / (127f / IntToFloat(Local_213[0])));
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, vVar34 * Vector(fVar39, fVar39, fVar39), 0, 1, 1, 0);
					ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(NETWORK::NET_TO_OBJ(Local_213.f_110), 0, 0f, 0f, -fVar40, 0, 1, 1, 0);
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
		}
	}
}

int func_288()
{
	if (func_222())
	{
		return 0;
	}
	if (func_213() && !func_212())
	{
		return 0;
	}
	return 1;
}

bool func_289()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 2);
}

void func_290(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 21))
		{
			GAMEPLAY::SET_BIT(&(Local_213.f_5), 21);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 21))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 21);
	}
}

void func_291(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 22))
		{
			GAMEPLAY::SET_BIT(&(Local_213.f_5), 22);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 22))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 22);
	}
}

void func_292()
{
	float fVar0;
	float fVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_213.f_110), 0))
		{
			if ((func_8() || func_22()) || func_20())
			{
				fVar0 = -323.1f;
				fVar1 = -1970.9f;
			}
			else
			{
				fVar0 = Local_213.f_105;
				fVar1 = Local_213.f_105.f_1;
			}
			UI::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(fVar0, fVar1);
			unk_0xA17784FCA9548D15(fVar0, fVar1, 0);
			if (!INTERIOR::IS_VALID_INTERIOR(Global_1681628.f_22) && !func_20())
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 8))
				{
					UI::_0x20FE7FDFEEAD38C0();
				}
				UI::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
			}
		}
	}
}

void func_293()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_38) && Local_213.f_38 == -1)
		{
			Local_213.f_38 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_38, "HUD_Loop", Local_213.f_109, 1);
		}
	}
}

void func_294()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_28))
		{
			Local_213.f_28 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FROM_ENTITY(Local_213.f_28, "Flight_Loop", NETWORK::NET_TO_OBJ(Local_213.f_110), Local_213.f_109, 0, 0);
			AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_28, "DroneRotationalSpeed", Local_213.f_86);
		}
		else
		{
			AUDIO::SET_VARIABLE_ON_SOUND(Local_213.f_28, "DroneRotationalSpeed", Local_213.f_86);
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_37))
		{
			AUDIO::RELEASE_SOUND_ID(Local_213.f_37);
			Local_213.f_37 = -1;
		}
	}
}

void func_295()
{
	if (func_43(PLAYER::PLAYER_ID(), 1, 1))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 450, 1);
	}
}

void func_296()
{
	int iVar0;
	
	if (func_8())
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_213.f_42);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110) && func_43(iVar0, 1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0))
			{
				if (func_297(NETWORK::NET_TO_OBJ(Local_213.f_110), PLAYER::GET_PLAYER_PED(iVar0), Global_262145.f_24609, 1))
				{
					if (!func_173(PLAYER::PLAYER_ID(), iVar0))
					{
						if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar0) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							GAMEPLAY::SET_BIT(&(Local_213.f_5), 11);
							return;
						}
					}
				}
			}
		}
		GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 11);
	}
}

bool func_297(var uParam0, var uParam1, float fParam2, int iParam3)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0, iParam3), ENTITY::GET_ENTITY_COORDS(uParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_298()
{
	int iVar0;
	
	if (func_18(func_81()))
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_213.f_42);
		if (PLAYER::PLAYER_ID() != iVar0)
		{
			if (func_43(iVar0, 1, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_213.f_7, Local_213.f_42))
				{
					if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
					{
						GAMEPLAY::CLEAR_BIT(&(Local_213.f_7), Local_213.f_42);
					}
				}
				if (SYSTEM::VDIST2(func_195(iVar0), Local_213.f_105) < 12100f)
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_213.f_7, Local_213.f_42) && func_300(iVar0))
					{
						func_299(iVar0, 1);
						NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_213.f_110, iVar0, 1);
						GAMEPLAY::SET_BIT(&(Local_213.f_7), Local_213.f_42);
					}
				}
				else if (SYSTEM::VDIST2(func_195(iVar0), Local_213.f_105) > 14400f)
				{
					if (GAMEPLAY::IS_BIT_SET(Local_213.f_7, Local_213.f_42))
					{
						func_299(iVar0, 0);
						NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_213.f_110, iVar0, 0);
						GAMEPLAY::CLEAR_BIT(&(Local_213.f_7), Local_213.f_42);
					}
				}
			}
		}
	}
}

void func_299(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	
	vVar0.x = -151132536;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam1;
	iVar3 = func_156(iParam0);
	if (!iVar3 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 3, iVar3);
	}
}

int func_300(int iParam0)
{
	if (func_302(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_42(iParam0))
	{
		return 0;
	}
	if (func_301(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_301(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 14))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 11))
	{
		return 1;
	}
	return 0;
}

int func_302(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_14())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_303()
{
	int iVar0;
	
	if ((func_20() || func_8()) || func_22())
	{
		iVar0 = 1000;
		if (func_8() || func_22())
		{
			iVar0 = 7000;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 29))
		{
			if (CAM::DOES_CAM_EXIST(Local_213.f_119) && CAM::IS_CAM_RENDERING(Local_213.f_119))
			{
				if (func_18(func_81()))
				{
					if (func_6(&(Local_213.f_182), iVar0, 0))
					{
						ENTITY::_SET_ENTITY_COLLISION_2(func_81(), 1, 0);
						ENTITY::SET_ENTITY_COLLISION(func_81(), 1, 0);
						GAMEPLAY::SET_BIT(&(Local_213.f_5), 29);
					}
				}
			}
		}
	}
}

void func_304(int iParam0)
{
	if (Local_213.f_157 != iParam0)
	{
		Local_213.f_157 = iParam0;
	}
}

void func_305(bool bParam0)
{
	if (bParam0)
	{
		if (!func_306())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 13);
		}
	}
	else if (func_306())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 13);
	}
}

bool func_306()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 13);
}

void func_307()
{
	vector3 vVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
		{
			if (!CAM::DOES_CAM_EXIST(Local_213.f_119) && GAMEPLAY::IS_BIT_SET(Local_213.f_5, 0))
			{
				if (func_316())
				{
					if (func_275())
					{
						func_245(PLAYER::PLAYER_ID(), 0, 32768, 0);
					}
					else if (!func_20())
					{
						func_245(PLAYER::PLAYER_ID(), 0, 0, 0);
					}
					if (!func_315())
					{
						unk_0x32888337579A5970();
					}
					else
					{
						unk_0x15CFA549788D35EF();
					}
					Local_213.f_119 = CAM::CREATE_CAMERA(26379945, 1);
					CAM::SET_CAM_FOV(Local_213.f_119, Local_213.f_82);
					CAM::SET_CAM_NEAR_CLIP(Local_213.f_119, 0.01f);
					CAM::SET_CAM_NEAR_DOF(Local_213.f_119, 0.01f);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					if (func_20())
					{
						GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
					}
					vVar0 = { 0f, -0.038f, -0.004f };
					if (func_8() || func_22())
					{
						vVar0 = { 0f, -0.099f, -0.02f };
					}
					else if (func_20())
					{
						vVar0 = { 0f, -0.9f, 0f };
					}
					CAM::ATTACH_CAM_TO_ENTITY(Local_213.f_119, NETWORK::NET_TO_OBJ(Local_213.f_110), vVar0, 1);
					if (func_20())
					{
						CAM::SET_CAM_ROT(Local_213.f_119, func_314() - Vector(0f, -180f, 180f), 2);
					}
					PED::_0xD8C3BE3EE94CAF2D(Local_213.f_105, 100f, 200f);
					STREAMING::_SET_FOCUS_AREA(Local_213.f_105, CAM::GET_CAM_ROT(Local_213.f_119, 2));
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_213.f_110), 0);
					func_313();
					if (AUDIO::HAS_SOUND_FINISHED(Local_213.f_37))
					{
						Local_213.f_37 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(Local_213.f_37, "HUD_Startup", Local_213.f_109, 1);
					}
					if (!func_275())
					{
						if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					func_229();
					if (func_20())
					{
						func_77();
					}
					else
					{
						func_101();
					}
					func_198(1);
					func_216();
					func_287();
					CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
					Local_213.f_122 = NETWORK::GET_NETWORK_TIME();
					func_310(1);
					func_309(1);
					func_308(158);
					GAMEPLAY::SET_BIT(&(vLocal_115[PLAYER::PLAYER_ID() /*3*/]), 0);
					func_304(2);
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					AI::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			else
			{
				if (CAM::DOES_CAM_EXIST(Local_213.f_119))
				{
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 0))
				{
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
		}
	}
}

void func_308(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8462)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1312570.f_1[iVar0] == -1)
		{
			Global_1312570.f_1[iVar0] = iParam0;
			Global_1312570 = 1;
			return;
		}
		iVar0++;
	}
}

void func_309(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_328, 26))
		{
			GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_328), 26);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_328, 26))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_328), 26);
	}
}

void func_310(bool bParam0)
{
	if (bParam0)
	{
		if (!func_187())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 5);
		}
	}
	else
	{
		if (func_187())
		{
			GAMEPLAY::CLEAR_BIT(&Global_1681628, 5);
		}
		func_311(0);
	}
}

void func_311(bool bParam0)
{
	if (bParam0)
	{
		if (!func_312())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 12);
		}
	}
	else if (func_312())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 12);
	}
}

bool func_312()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 12);
}

void func_313()
{
	if (func_111())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
		}
	}
	else if (func_8())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
		}
	}
	else if (func_22())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
		{
			AUDIO::START_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
		}
	}
	else if (func_20())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
		}
	}
}

Vector3 func_314()
{
	return Global_1681628.f_14;
}

bool func_315()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 10);
}

int func_316()
{
	if (func_23() && !func_25())
	{
		return 1;
	}
	if (func_319())
	{
		return 1;
	}
	if (func_318())
	{
		return 1;
	}
	if (func_25() && func_317())
	{
		return 1;
	}
	if (!func_48(PLAYER::PLAYER_ID(), 0) && !func_241())
	{
		return 1;
	}
	return 0;
}

int func_317()
{
	if (Global_1319089 != -1 || Global_1319095 != -1)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_idle_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter_control", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "COMPUTER_enter", 3))
		{
			return 1;
		}
		if (func_27())
		{
			return 0;
		}
	}
	return 0;
}

int func_318()
{
	return 0;
}

int func_319()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (func_25() || func_320())
	{
		return 0;
	}
	if (func_318())
	{
		return 0;
	}
	return 1;
}

int func_320()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1421.593f, -3011.17f, -80.24994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1419.463f, -3009.145f, -80.49994f, -1420.684f, -3010.617f, -77.99994f, 2f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_321()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	iVar0 = joaat("bmx");
	if (func_147(Local_213.f_156) && func_147(iVar0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
			{
				if (!func_275())
				{
					if (func_111())
					{
						if (func_18(func_278()))
						{
							vVar1 = { ENTITY::GET_ENTITY_COORDS(func_278(), 1) };
						}
					}
					else
					{
						vVar1 = { Local_213.f_93 };
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_245(PLAYER::PLAYER_ID(), 0, 0, 0);
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 18))
					{
						if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(vVar1, 100f, 1))
						{
							GAMEPLAY::SET_BIT(&(Local_213.f_5), 18);
						}
					}
					else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 19))
						{
							if (func_111())
							{
								if (func_324())
								{
									GAMEPLAY::SET_BIT(&(Local_213.f_5), 19);
								}
							}
							else
							{
								if (!func_219(func_323()))
								{
									Local_213.f_93 = { func_323() };
								}
								GAMEPLAY::SET_BIT(&(Local_213.f_5), 19);
							}
						}
					}
				}
				if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 19) || func_275())
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 20))
					{
						Local_213.f_113 = VEHICLE::CREATE_VEHICLE(iVar0, Local_213.f_93, 0f, 0, 0, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_213.f_113, 1, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_213.f_113, Local_213.f_93, 0, 0, 1);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_213.f_113, 1);
						ENTITY::_SET_ENTITY_COLLISION_2(Local_213.f_113, 0, 0);
						ENTITY::SET_ENTITY_VISIBLE(Local_213.f_113, 0, 0);
						GAMEPLAY::SET_BIT(&(Local_213.f_5), 20);
					}
					else if (func_67(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0, 1) + 1, 0, 1))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 30))
						{
							unk_0x797F9C5E661D920E(NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0, 1) + 1);
							GAMEPLAY::SET_BIT(&(Local_213.f_5), 30);
						}
						if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
						{
							if (func_322(&(Local_213.f_110), Local_213.f_156, Local_213.f_93, 0, 1, 1, 1, 1, 0, 0))
							{
								Global_1681628.f_18 = NETWORK::NET_TO_OBJ(Local_213.f_110);
								if (func_111())
								{
									if (func_18(func_278()))
									{
										ENTITY::SET_ENTITY_ROTATION(func_81(), ENTITY::GET_ENTITY_ROTATION(func_278(), 2), 2, 1);
										fVar4 = (ENTITY::GET_ENTITY_HEADING(func_278()) + 180f);
									}
								}
								Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_407 = { Local_213.f_93 };
								Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_410 = fVar4;
								vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_2 = Local_213.f_110;
								NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Local_213.f_110, PLAYER::PLAYER_ID(), 1);
								unk_0x38C1CB1CB119A016(NETWORK::NET_TO_ENT(Local_213.f_110), 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_213.f_110), 1, 1);
								ENTITY::SET_ENTITY_COORDS_NO_OFFSET(func_81(), Local_213.f_93, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(func_81(), fVar4);
								unk_0x4BA166079D658ED4(func_81(), 1);
								if (!func_219(func_314()))
								{
									ENTITY::SET_ENTITY_ROTATION(func_81(), func_314(), 2, 1);
								}
								if (func_20())
								{
									ENTITY::_SET_ENTITY_COLLISION_2(func_81(), 0, 0);
								}
								NETWORK::_NETWORK_SET_NETWORK_ID_DYNAMIC(Local_213.f_110, 1);
								if (func_135(PLAYER::PLAYER_ID()))
								{
									ENTITY::SET_ENTITY_HEALTH(func_81(), Global_262145.f_24014 * 5, 0);
								}
								else
								{
									ENTITY::SET_ENTITY_HEALTH(func_81(), Global_262145.f_24014, 0);
								}
								ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_213.f_110), 1);
								NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_213.f_110, 0);
								ENTITY::SET_ENTITY_RECORDS_COLLISIONS(NETWORK::NET_TO_ENT(Local_213.f_110), 1);
								PED::_0xD8C3BE3EE94CAF2D(Local_213.f_93, 100f, 200f);
								STREAMING::_SET_FOCUS_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_213.f_110), 1), ENTITY::GET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_213.f_110), 2));
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_213.f_156);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
							}
						}
					}
				}
			}
			else
			{
				ENTITY::SET_ENTITY_HAS_GRAVITY(NETWORK::NET_TO_OBJ(Local_213.f_110), 0);
				if (func_18(Local_213.f_113) && func_18(NETWORK::NET_TO_ENT(Local_213.f_110)))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_213.f_113, NETWORK::NET_TO_OBJ(Local_213.f_110), -1, 0f, 0f, -0.8f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					GAMEPLAY::SET_BIT(&(Local_213.f_5), 0);
				}
			}
		}
	}
}

int func_322(var uParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(uParam1, vParam2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(uParam1, vParam2, iParam6, bParam5, iParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(*uParam0), iParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), 1);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), 0, 0);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

Vector3 func_323()
{
	return Global_1681628.f_11;
}

int func_324()
{
	if (Local_213.f_15 == 0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_213.f_5, 14))
		{
			if ((!func_135(PLAYER::PLAYER_ID()) && func_111()) && func_18(func_278()))
			{
				Local_213.f_93 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_278(), 1), ENTITY::GET_ENTITY_HEADING(func_278()), -0.7f, 1.6f, 4f) };
				GAMEPLAY::SET_BIT(&(Local_213.f_5), 14);
			}
			else
			{
				if (func_111() && func_18(func_278()))
				{
					Local_213.f_93 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_278(), 1), ENTITY::GET_ENTITY_HEADING(func_278()), -0.7f, 1.6f, 4f) };
				}
				Local_213.f_93 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_93 - 1.5f), (Local_213.f_93 + 1.5f));
				Local_213.f_93.f_1 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_93.f_1 - 1.5f), (Local_213.f_93.f_1 + 1.5f));
				Local_213.f_93.f_2 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_93.f_2 + 0.5f), (Local_213.f_93.f_2 + 1.5f));
				if (!func_326(Local_213.f_93))
				{
					GAMEPLAY::SET_BIT(&(Local_213.f_5), 14);
				}
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 15))
		{
			Local_213.f_93 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_93 - 1.5f), (Local_213.f_93 + 1.5f));
			Local_213.f_93.f_1 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_93.f_1 - 1.5f), (Local_213.f_93.f_1 + 1.5f));
			Local_213.f_93.f_2 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((Local_213.f_93.f_2 + 0.5f), (Local_213.f_93.f_2 + 1.5f));
			if (!func_326(Local_213.f_93))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 15);
			}
		}
		func_325(Local_213.f_93);
	}
	else if (Local_213.f_15 == 1 && !func_326(Local_213.f_93))
	{
		return 1;
	}
	else
	{
		Local_213.f_15 = 0;
		GAMEPLAY::SET_BIT(&(Local_213.f_5), 15);
	}
	return 0;
}

void func_325(vector3 vParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	vector3 vVar6;
	var uVar9;
	int iVar10;
	
	switch (Local_213.f_14)
	{
		case 0:
			if (func_111())
			{
				if (func_18(func_278()))
				{
					uVar0 = func_278();
				}
			}
			if (func_8() || func_22())
			{
				fVar1 = func_179(Local_213.f_156);
			}
			else
			{
				fVar1 = (func_179(Local_213.f_156) * 11f);
			}
			Local_213.f_118 = WORLDPROBE::START_SHAPE_TEST_CAPSULE(vParam0, vParam0, fVar1, 511, uVar0, 4);
			if (Local_213.f_118 != 0)
			{
				Local_213.f_14 = 1;
			}
			break;
		
		case 1:
			iVar10 = WORLDPROBE::GET_SHAPE_TEST_RESULT(Local_213.f_118, &iVar2, &vVar6, &uVar3, &uVar9);
			if (iVar10 == 2)
			{
				if (iVar2 == 0)
				{
					Local_213.f_15 = 1;
					vVar6 = { 0f, 0f, 0f };
				}
				else
				{
					Local_213.f_15 = 2;
					Local_213.f_118 = 0;
					Local_213.f_14 = 0;
				}
			}
			else if (iVar10 == 0)
			{
				Local_213.f_14 = 0;
			}
			break;
	}
}

int func_326(vector3 vParam0)
{
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, -1036.27f, -228.704f, 53.76435f, -1096.765f, -258.69f, 35.77808f, 20f, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_327()
{
	if (func_241())
	{
		return Global_1671295.f_164 == 0;
	}
	return 0;
}

void func_328()
{
	if (func_43(PLAYER::PLAYER_ID(), 1, 1))
	{
		Local_213.f_96 = { func_220(&Local_213) };
		if (!func_219(func_323()))
		{
			Local_213.f_93 = { func_323() };
		}
		else
		{
			Local_213.f_93 = { func_195(PLAYER::PLAYER_ID()) };
			Local_213.f_93 = { Local_213.f_93, Local_213.f_93.f_1, (Local_213.f_93.f_2 + 1.5f) };
		}
		if (func_48(PLAYER::PLAYER_ID(), 0))
		{
			func_370(1);
		}
		if (func_48(PLAYER::PLAYER_ID(), 0))
		{
			func_366();
		}
		else if (((func_364(PLAYER::PLAYER_ID()) == 2 || func_364(PLAYER::PLAYER_ID()) == 1) && !GAMEPLAY::IS_BIT_SET(Global_1689320, 6)) && !GAMEPLAY::IS_BIT_SET(Global_1689321, 0))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2506183, 0))
			{
				func_363(1);
				func_356(0, 0);
				func_355();
				func_311(1);
				func_304(1);
			}
		}
		else if ((func_24() && func_351()) && !GAMEPLAY::IS_BIT_SET(Global_1689320, 6))
		{
			func_329();
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_1689320, 6) && GAMEPLAY::IS_BIT_SET(Global_1689321, 0))
		{
			func_356(0, 0);
			func_311(1);
			func_304(1);
		}
		else if (func_219(Local_213.f_90))
		{
			Local_213.f_108 = 0;
			func_311(1);
			func_304(1);
		}
	}
}

void func_329()
{
	vector3 vVar0;
	var uVar3;
	
	if (!func_344())
	{
		if ((((((func_343() || func_342()) && !Global_1657075) && func_351()) && !GAMEPLAY::IS_BIT_SET(Global_2506071, 6)) && Global_1312792) && !(func_343() && Global_262145.f_25615))
		{
			if ((((((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 224) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 224)) && !CONTROLS::IS_CONTROL_JUST_PRESSED(2, 223)) && !CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 223)) && !CONTROLS::IS_CONTROL_JUST_PRESSED(2, 235)) && !CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 235)) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 19))
			{
				if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(Global_262145.f_25617, 0, 0, 1, -1, 0) || GAMEPLAY::IS_BIT_SET(Global_2506071, 2))
				{
					GAMEPLAY::SET_BIT(&Global_2506071, 0);
					func_356(0, 0);
					func_311(1);
					func_304(1);
					func_338();
					func_336(73, -1);
					func_333();
					vVar0 = { func_332() };
					func_330(vVar0, 0f, 0f, 0f);
					if (func_343())
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(uVar3, "Select_Spec_Drone", PLAYER::PLAYER_PED_ID(), "DLC_AW_Spectator_Tablet_Sounds", 1, 0);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Global_2506071, 4))
				{
					GAMEPLAY::SET_BIT(&Global_2506071, 4);
				}
			}
		}
	}
}

void func_330(vector3 vParam0, vector3 vParam3)
{
	if (!func_331(Global_1681628.f_11, vParam0, 0))
	{
		Global_1681628.f_11 = { vParam0 };
		vParam3 = { vParam3 + Vector(0f, -180f, 180f) };
		Global_1681628.f_14 = { vParam3 };
	}
}

bool func_331(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_332()
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	
	fVar0 = 0f;
	fVar1 = 6f;
	fVar2 = 6f;
	vVar3 = { 2800f, -3800.2f, 170f };
	if ((Global_4456448.f_154963.f_1 == 3 || Global_4456448.f_154963.f_1 == 3) || Global_4456448.f_154963.f_1 == 3)
	{
		vVar3.y = -3860f;
	}
	fVar1 = (fVar1 * IntToFloat(NETWORK::PARTICIPANT_ID_TO_INT()));
	fVar2 = (fVar2 * IntToFloat((NETWORK::PARTICIPANT_ID_TO_INT() / 8)));
	fVar1 = (fVar1 - (8f * fVar2));
	return OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar0, fVar1, fVar2, 0f);
}

void func_333()
{
	int iVar0;
	
	iVar0 = func_334(73, -1);
	if (iVar0 >= 50)
	{
		GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_333.f_3), 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_333.f_3), 13);
	}
}

int func_334(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2572886[iParam0 /*3*/][func_335(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_335(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_89();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

void func_336(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_334(iParam0, func_335(iParam1));
	iVar0++;
	func_337(iParam0, iVar0, iParam1);
}

void func_337(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = Global_2572886[iParam0 /*3*/][func_335(uParam2)];
	STATS::STAT_SET_INT(uVar0, iParam1, 1);
}

void func_338()
{
	func_339(1, 7982);
}

void func_339(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_341(iParam1, -1, 0);
	func_340(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_335(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_341(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_335(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

var func_342()
{
	return Global_2458641;
}

int func_343()
{
	if (Global_2458640 >= 0 && Global_2458640 < 10)
	{
		return 1;
	}
	return 0;
}

int func_344()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.915f, -3009.132f, -79.99994f, -1421.98f, -3009.121f, -77.74994f, 1f, 0, 1, 0))
	{
		return 1;
	}
	if (func_350())
	{
		return 1;
	}
	if (func_349())
	{
		return 1;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_241())
	{
		return 1;
	}
	if (func_48(PLAYER::PLAYER_ID(), 0))
	{
		if (func_30(Global_1589668))
		{
			return 1;
		}
	}
	if (func_111())
	{
		if (func_348())
		{
			if (func_347())
			{
				return 1;
			}
			if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 28))
			{
				return 1;
			}
		}
	}
	if (func_162(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_53(0))
	{
		return 1;
	}
	if (func_253())
	{
		return 1;
	}
	if (func_111())
	{
		if (func_23())
		{
			if (func_43(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (func_127(PLAYER::PLAYER_PED_ID(), -1422.188f, -3015.926f, -80.1554f, 1) < 1.5f)
				{
					return 1;
				}
				if (func_346())
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_345(PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	if (func_160())
	{
		return 1;
	}
	if (Global_262145.f_24024)
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 27))
	{
		return 1;
	}
	if (func_48(PLAYER::PLAYER_ID(), 0))
	{
		if (func_18(func_278()))
		{
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_278(), -136.1614f, 4617.176f, 124.5134f, -490.3058f, 4924.749f, 159.0677f, 19.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_278(), 908.465f, 34.85726f, 79.35429f, 926.4139f, 64.37743f, 87.99218f, 19f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(func_278(), 946.8937f, -6.119501f, 77.90774f, 962.0698f, -5.454865f, 88.65581f, 10.75f, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_1319093)
	{
		return 1;
	}
	if (Global_2507141)
	{
		return 1;
	}
	if (Global_2507139)
	{
		return 1;
	}
	return 0;
}

int func_345(var uParam0, int iParam1)
{
	if (iParam1 && (!ENTITY::DOES_ENTITY_EXIST(uParam0) || ENTITY::IS_ENTITY_DEAD(uParam0, 0)))
	{
		return 0;
	}
	if (AI::GET_IS_TASK_ACTIVE(uParam0, 2))
	{
		return 1;
	}
	if (PED::GET_VEHICLE_PED_IS_TRYING_TO_ENTER(uParam0) != 0 || PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(uParam0) != 0)
	{
		return 1;
	}
	return 0;
}

int func_346()
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.588f, -3013.374f, -79.99994f, -1421.918f, -3012.804f, -77.99994f, 0.675f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_347()
{
	if (Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_8 != func_14() && PLAYER::PLAYER_ID() != func_14())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589819[Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_8 /*818*/].f_273.f_328, 20);
	}
	return 0;
}

int func_348()
{
	if (func_135(PLAYER::PLAYER_ID()) && Global_1681628.f_4 == -1)
	{
		return 0;
	}
	return 1;
}

int func_349()
{
	if (Global_2437364.f_1155.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_350()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

int func_351()
{
	int iVar0;
	int iVar1;
	
	if (func_354() && !func_353())
	{
		return 1;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (iVar0 >= 4 || iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = Global_969025.f_13[iVar0];
	if (iVar1 < 17)
	{
		if ((((GAMEPLAY::IS_BIT_SET(Global_4456448.f_105[iVar0 /*11309*/].f_5604[iVar1], 23) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_105[iVar0 /*11309*/].f_5604[iVar1], 24)) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_105[iVar0 /*11309*/].f_5604[iVar1], 25)) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_105[iVar0 /*11309*/].f_5604[iVar1], 26)) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_32, 16))
		{
			return 1;
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_32, 16))
	{
		return 1;
	}
	else if (func_342() || func_352(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

var func_352(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_39.f_18, 14);
}

int func_353()
{
	if (Global_4456448.f_139770 == 1 || Global_4456448.f_139770 == 2)
	{
		return 1;
	}
	return 0;
}

var func_354()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_154961, 12);
}

void func_355()
{
	GAMEPLAY::CLEAR_BIT(&Global_2506183, 0);
}

void func_356(bool bParam0, bool bParam1)
{
	Local_213.f_76 = Global_262145.f_24017;
	if (func_22() || func_8())
	{
		Local_213.f_76 = (Local_213.f_76 * 4.5f);
	}
	else if (func_20())
	{
		Local_213.f_76 = 100f;
	}
	if (func_22())
	{
		Local_213.f_156 = -388213579;
	}
	else if (func_8())
	{
		Local_213.f_156 = 442185650;
	}
	else if (func_20())
	{
		Local_213.f_156 = 1270560417;
		func_362(1);
	}
	else
	{
		Local_213.f_156 = -1904523353;
	}
	if (bParam1)
	{
		Local_213.f_93 = { Local_213.f_99 };
	}
	Global_1681628.f_1 = 1500;
	func_361();
	func_360(1);
	func_359(1);
	if (func_22() || func_20())
	{
		func_358(1);
	}
	else if (func_8())
	{
		func_358(0);
	}
	if (func_8())
	{
		STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_xs_dr");
	}
	if (!func_111() && !func_275())
	{
		func_357(200f);
	}
	func_61(Global_1574987);
	if (bParam0)
	{
	}
}

void func_357(float fParam0)
{
	if (Global_1681628.f_6 != fParam0)
	{
		Global_1681628.f_6 = fParam0;
	}
}

void func_358(bool bParam0)
{
	if (bParam0)
	{
		if (!func_158())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 8);
		}
	}
	else if (func_158())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 8);
	}
}

void func_359(bool bParam0)
{
	if (bParam0)
	{
		if (!func_289())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 2);
		}
	}
	else if (func_289())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 2);
	}
}

void func_360(bool bParam0)
{
	if (bParam0)
	{
		if (!func_208())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 4);
		}
	}
	else if (func_208())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 4);
	}
}

void func_361()
{
	if (!Local_213.f_108)
	{
		Local_213.f_17 = 100;
	}
	Local_213.f_18 = 0;
	Local_213.f_19 = 100;
	Local_213.f_82 = 90f;
	Local_213.f_85 = 90f;
	if (!func_20())
	{
		Local_213.f_120 = unk_0x67D02A194A2FC2BD("DRONE_CAM");
	}
	else
	{
		Local_213.f_120 = func_82();
	}
	if (func_22())
	{
		Local_213.f_109 = "DLC_Arena_Drone_Sounds";
	}
	else if (func_8())
	{
		Local_213.f_109 = "DLC_Arena_Battle_Drone_Sounds";
	}
	else if (func_20())
	{
		Local_213.f_109 = "DLC_Arena_Piloted_Missile_Sounds";
	}
	else
	{
		Local_213.f_109 = "DLC_BTL_Drone_Sounds";
	}
}

void func_362(bool bParam0)
{
	if (bParam0)
	{
		if (!func_167())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 15);
		}
	}
	else if (func_167())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 15);
	}
}

void func_363(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 4))
		{
			Global_1681628.f_2 = 0;
			GAMEPLAY::SET_BIT(&(Global_1681628.f_2), 4);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 4))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1681628.f_2), 4);
	}
}

int func_364(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID() && !func_365())
	{
		return Global_2506088.f_1;
	}
	return Global_2417757.f_2620[iParam0 /*3*/].f_1;
}

int func_365()
{
	if (((Global_2506091 != 0 && Global_2506091 == Global_2506092) && Global_2506080 != 3) && Global_2506080 != 1)
	{
		return 0;
	}
	return 1;
}

void func_366()
{
	if (!func_344())
	{
		if (func_25())
		{
			if (func_319())
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED() && !UI::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_369("DRONE_TRIG");
				}
			}
			else if (func_368("DRONE_TRIG"))
			{
				UI::CLEAR_HELP(1);
			}
			if (func_25() || func_318())
			{
				if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 176) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 176))
				{
					func_311(1);
					func_304(1);
					UI::CLEAR_HELP(1);
				}
			}
			else if (func_368("DRONE_TRIG"))
			{
				if ((CONTROLS::IS_CONTROL_JUST_RELEASED(2, 51) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					Local_213.f_108 = 0;
					func_311(1);
					func_304(1);
					UI::CLEAR_HELP(1);
				}
			}
		}
		else if ((func_23() && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1420.684f, -3010.617f, -77.99994f, -1423.142f, -3012.295f, -77.74994f, 2f, 0, 1, 0)) && func_319())
		{
			if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED() && !UI::IS_HELP_MESSAGE_ON_SCREEN())
			{
				func_369("DRONE_TRIG");
			}
			if (func_368("DRONE_TRIG"))
			{
				if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 51) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 51))
				{
					Local_213.f_108 = 0;
					func_311(1);
					func_304(1);
					UI::CLEAR_HELP(1);
				}
			}
		}
		else if (func_368("DRONE_TRIG"))
		{
			UI::CLEAR_HELP(1);
		}
		if (func_367() || func_25())
		{
			if (func_368("DRONE_TRIG"))
			{
				UI::CLEAR_HELP(1);
			}
		}
	}
	else if (func_368("DRONE_TRIG"))
	{
		UI::CLEAR_HELP(1);
	}
}

int func_367()
{
	if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "enter_left", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "exit_left", 3)) || func_46(PLAYER::PLAYER_PED_ID(), 2106541073))
	{
		return 1;
	}
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "ANIM@AMB@FACILITY@LAUNCH_CONTROLS@", "computer_exit", 3))
	{
		return 1;
	}
	return 0;
}

bool func_368(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_369(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_370(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 1))
		{
			Global_1681628.f_2 = 0;
			GAMEPLAY::SET_BIT(&(Global_1681628.f_2), 1);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1681628.f_2), 1);
	}
}

void func_371()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_213.f_110), 0))
		{
			Local_213.f_105 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_213.f_110), 1) };
			Local_213.f_81 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_213.f_110));
			if (!func_9(&(Local_213.f_174)))
			{
				func_7(&(Local_213.f_174), 0, 0);
			}
			else if (func_6(&(Local_213.f_174), 1000, 0))
			{
				if (!func_331(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_407, Local_213.f_105, 0))
				{
					Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_407 = { Local_213.f_105 };
				}
				if (Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_410 != ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_213.f_110)))
				{
					Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_410 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_213.f_110));
				}
				func_5(&(Local_213.f_174));
			}
		}
	}
	if (func_18(Local_213.f_113))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_213.f_113))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_213.f_113, 0, 0);
		}
	}
	if (func_18(Local_213.f_111))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Local_213.f_111))
		{
			ENTITY::SET_ENTITY_VISIBLE(Local_213.f_111, 0, 0);
		}
	}
}

void func_372()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_373(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_373(int iParam0)
{
	struct<2> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0) && NETWORK::NET_TO_ENT(Local_213.f_110) == Var0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
					{
						if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)) && PLAYER::PLAYER_PED_ID() != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1))
						{
							Local_213.f_24 = 2;
						}
					}
				}
			}
		}
	}
}

void func_374()
{
	if (func_382(2))
	{
		if ((func_111() || func_8()) || func_22())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				func_245(PLAYER::PLAYER_ID(), 1, 0, 0);
			}
		}
		CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 0);
		if (!func_20())
		{
			func_375();
			CONTROLS::ENABLE_CONTROL_ACTION(0, 19, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(0, 166, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(0, 167, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(0, 168, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(0, 169, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 218, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 219, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 220, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 221, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 205, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 206, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 207, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 208, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 209, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 210, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 202, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 51, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 190, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 189, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 188, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 187, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 201, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 199, 1);
			CONTROLS::ENABLE_CONTROL_ACTION(2, 200, 1);
			if (CONTROLS::_IS_INPUT_DISABLED(0))
			{
				CONTROLS::ENABLE_CONTROL_ACTION(0, 238, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(0, 237, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(2, 235, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(2, 234, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(2, 1, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(2, 174, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(2, 175, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(0, 174, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(0, 175, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(0, 245, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(0, 246, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(0, 247, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(0, 248, 1);
			}
			if (UI::IS_PAUSE_MENU_ACTIVE())
			{
				CONTROLS::ENABLE_CONTROL_ACTION(0, 201, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(0, 202, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(0, 188, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(0, 187, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(0, 189, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(2, 195, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(2, 196, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(2, 198, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(2, 197, 1);
				CONTROLS::ENABLE_CONTROL_ACTION(2, 217, 1);
			}
		}
	}
}

void func_375()
{
	func_376();
}

void func_376()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 359)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, iVar0, 1);
		iVar0++;
	}
}

void func_377()
{
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 28))
	{
		if (!func_9(&(Local_213.f_176)))
		{
			func_7(&(Local_213.f_176), 0, 0);
		}
		else if (func_6(&(Local_213.f_176), 5000, 0))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 28);
			func_5(&(Local_213.f_176));
		}
	}
}

void func_378()
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(Local_213.f_5, 27))
	{
		if (Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_8 != func_14())
		{
			iVar0 = Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_8;
		}
		else if (Global_1589668 != func_14())
		{
			iVar0 = Global_1589668;
		}
		else if (func_379(PLAYER::PLAYER_ID(), 0))
		{
			if (func_137() != func_14())
			{
				iVar0 = func_137();
			}
		}
		if (iVar0 != func_14())
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_146(iVar0, 0);
					GAMEPLAY::CLEAR_BIT(&(Local_213.f_5), 27);
				}
			}
		}
	}
}

bool func_379(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_380(iParam0))
		{
			return 0;
		}
	}
	return Global_1626536[iParam0 /*603*/].f_11 != func_14();
}

int func_380(int iParam0)
{
	if (iParam0 != func_14())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_14())
		{
			return Global_1626536[iParam0 /*603*/].f_11 == iParam0;
		}
	}
	return 0;
}

void func_381()
{
	vector3 vVar0;
	
	if (func_111())
	{
		if (func_382(1))
		{
			if (func_18(func_278()))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(func_278(), 1) };
				PED::_0xD8C3BE3EE94CAF2D(vVar0, 200f, 200f);
				PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_213.f_105, 500f, 30);
			}
		}
	}
	if (func_382(1) || func_382(2))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
		{
			if (CAM::DOES_CAM_EXIST(Local_213.f_119) && CAM::IS_CAM_RENDERING(Local_213.f_119))
			{
				if (func_382(2))
				{
					PED::_0xD8C3BE3EE94CAF2D(Local_213.f_105, 200f, 200f);
					unk_0x483ACA1176CA93F1();
					STREAMING::_SET_FOCUS_AREA(Local_213.f_105, CAM::GET_CAM_ROT(Local_213.f_119, 2));
					if ((GAMEPLAY::GET_FRAME_COUNT() % 120) == 0)
					{
						PED::SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(Local_213.f_105, 500f, 30);
					}
				}
			}
		}
	}
}

bool func_382(int iParam0)
{
	return Local_213.f_157 == iParam0;
}

int func_383()
{
	if (func_387())
	{
		return 1;
	}
	if (!func_250())
	{
		return 1;
	}
	if (PLAYER::PLAYER_ID() != func_14())
	{
		if (func_227(PLAYER::PLAYER_ID()) && !func_226())
		{
			return 1;
		}
	}
	if (func_164(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_301(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (func_386())
	{
		if (func_385())
		{
			return 1;
		}
		if (func_302(PLAYER::PLAYER_ID(), 1, 1))
		{
			return 1;
		}
		if (func_24())
		{
			return 1;
		}
		if (!func_384())
		{
			if (func_6(&(Local_213.f_192), 10000, 0))
			{
				return 1;
			}
		}
		else
		{
			func_5(&(Local_213.f_192));
		}
	}
	return 0;
}

int func_384()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (GAMEPLAY::IS_BIT_SET(vLocal_115[iVar0 /*3*/], 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_385()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 22);
}

bool func_386()
{
	return GAMEPLAY::IS_BIT_SET(Local_213.f_6, 3);
}

bool func_387()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 0);
}

int func_388()
{
	var uVar0;
	
	func_396(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_395())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_394())
	{
		return 1;
	}
	if (func_393(157))
	{
		if (!func_392())
		{
			return 1;
		}
	}
	if (func_393(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_389() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_389()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_389()
{
	switch (func_391())
	{
		case 0:
			return func_390();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_390()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_391()
{
	return Global_25765;
}

bool func_392()
{
	return Global_2448756.f_586;
}

int func_393(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_394()
{
	return Global_2458613;
}

bool func_395()
{
	return Global_2448756.f_581;
}

void func_396(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_397(iVar0);
					break;
				
				case -42615386:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_397(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_43(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_398(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, vVar0.z);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_398(var uParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(uParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_399()
{
	SYSTEM::WAIT(0);
}

void func_400(bool bParam0)
{
	if (!func_386())
	{
		func_406(bParam0);
	}
	else
	{
		func_401();
	}
}

void func_401()
{
	func_5(&(Local_213.f_192));
	func_405(0);
	func_404(0);
	func_403(0);
	func_402();
}

void func_402()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_403(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1681628, 21))
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 21);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1681628, 21))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 21);
	}
}

void func_404(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1681628, 22))
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 22);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1681628, 22))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 22);
	}
}

void func_405(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_272, 31))
		{
			GAMEPLAY::SET_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_272), 31);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_272, 31))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_273.f_272), 31);
	}
}

void func_406(bool bParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_213.f_110))
	{
		NETWORK::SET_NETWORK_ID_CAN_MIGRATE(Local_213.f_110, 1);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_213.f_110))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_213.f_6, 2))
			{
				if (func_20())
				{
					if (func_18(PLAYER::PLAYER_PED_ID()))
					{
						FIRE::ADD_OWNED_EXPLOSION(PLAYER::PLAYER_PED_ID(), Local_213.f_105, 72, 0.5f, 1, 0, 1065353216);
					}
					else
					{
						FIRE::ADD_EXPLOSION(Local_213.f_105, 72, 0.5f, 1, 0, 1065353216, 0);
					}
					CONTROLS::SET_PAD_SHAKE(0, 300, 200);
					GAMEPLAY::SET_BIT(&(Local_213.f_6), 2);
				}
			}
			STREAMING::CLEAR_FOCUS();
			uVar0 = NETWORK::NET_TO_OBJ(Local_213.f_110);
			NETWORK::NETWORK_FADE_OUT_ENTITY(uVar0, 0, 1);
			OBJECT::DELETE_OBJECT(&uVar0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_213.f_110);
			return;
		}
	}
	if (func_368("DRONE_TRIG"))
	{
		UI::CLEAR_HELP(1);
	}
	if (func_18(Local_213.f_111))
	{
		uVar1 = Local_213.f_111;
		PED::DELETE_PED(&uVar1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_213.f_112))
	{
		OBJECT::DELETE_OBJECT(&(Local_213.f_112));
	}
	if (UI::DOES_BLIP_EXIST(Local_213.f_121))
	{
		UI::REMOVE_BLIP(&(Local_213.f_121));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_213.f_113))
	{
		VEHICLE::DELETE_VEHICLE(&(Local_213.f_113));
	}
	unk_0x15CFA549788D35EF();
	UI::UNLOCK_MINIMAP_ANGLE();
	UI::UNLOCK_MINIMAP_POSITION();
	UI::RESPONDING_AS_TEMP(0f);
	if (func_200())
	{
		func_199(0);
	}
	func_268(1, -1);
	func_418();
	func_209(0);
	if (func_417() && (!func_227(PLAYER::PLAYER_ID()) || func_226()))
	{
		func_245(PLAYER::PLAYER_ID(), 1, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	Local_213.f_77 = 0f;
	Local_213.f_78 = 0f;
	Local_213.f_11 = 0;
	Local_213.f_13 = 0;
	Local_213.f_9 = 0;
	Local_213.f_15 = 0;
	func_5(&(Local_213.f_160));
	func_5(&(Local_213.f_162));
	if (!Local_213.f_108)
	{
		func_5(&(Local_213.f_164));
	}
	func_5(&(Local_213.f_168));
	func_5(&(Local_213.f_166));
	func_5(&(Local_213.f_170));
	func_5(&(Local_213.f_172));
	func_5(&(Local_213.f_178));
	func_5(&(Local_213.f_176));
	func_5(&(Local_213.f_174));
	func_5(&(Local_213.f_180));
	func_5(&(Local_213.f_182));
	func_5(&(Local_213.f_184));
	func_5(&(Local_213.f_188));
	func_5(&(Local_213.f_190));
	Local_213.f_26 = 0;
	Local_213.f_5 = 0;
	Local_213.f_6 = 0;
	Global_1681628.f_3 = -1;
	func_416(-1f);
	func_357(0f);
	func_206(0);
	func_360(0);
	func_415(0);
	func_358(0);
	func_186(0);
	func_414(0);
	func_144(0);
	func_413(0);
	func_412(0);
	func_411(0);
	func_50(1);
	func_239(0);
	func_237(0);
	func_243(0);
	func_362(0);
	func_330(0f, 0f, 0f, 0f, 0f, 0f);
	func_410();
	Global_1681628.f_22 = -1;
	GAMEPLAY::CLEAR_BIT(&Global_2506071, 0);
	GAMEPLAY::CLEAR_BIT(&Global_1689321, 0);
	func_304(0);
	if (!func_409(0))
	{
		func_235();
	}
	if (func_187())
	{
		func_133("SET_WARNING_IS_VISIBLE", 0);
		if (func_111())
		{
			if (Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_8 != func_14() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_8))
			{
				iVar2 = Global_2424047[PLAYER::PLAYER_ID() /*416*/].f_309.f_8;
			}
			else if (Global_1589668 != func_14() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1589668))
			{
				iVar2 = Global_1589668;
			}
			else if (func_379(PLAYER::PLAYER_ID(), 0))
			{
				if (func_137() != func_14() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_137()))
				{
					iVar2 = func_137();
				}
			}
			if (iVar2 != func_14())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					func_146(iVar2, 0);
					GAMEPLAY::SET_BIT(&(Local_213.f_5), 28);
				}
				else
				{
					GAMEPLAY::SET_BIT(&(Local_213.f_5), 27);
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&(Local_213.f_5), 27);
			}
		}
		func_310(0);
		func_309(0);
		GAMEPLAY::CLEAR_BIT(&(vLocal_115[PLAYER::PLAYER_ID() /*3*/]), 0);
		uVar3 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_213.f_122));
		unk_0x66C7BB2416ED3FCE(uVar3, Local_213.f_24, Local_213.f_25);
	}
	func_408();
	func_311(0);
	func_225(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_213.f_120));
	if (func_148(1) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_148(1));
	}
	if (func_148(0) != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_148(0));
	}
	func_305(0);
	func_268(1, -1);
	Local_213.f_24 = 0;
	Local_213.f_25 = 0;
	DECISIONEVENT::REMOVE_SHOCKING_EVENT(Local_213.f_26);
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Local_213.f_123[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Local_213.f_123[PLAYER::PLAYER_ID()], 0);
	}
	if (!bParam0)
	{
		if (!func_135(PLAYER::PLAYER_ID()))
		{
			func_407(0f, 0f, 0f, 0f);
		}
		Global_1681628.f_2 = 0;
		func_402();
	}
	else
	{
		func_356(0, 1);
	}
}

void func_407(vector3 vParam0, float fParam3)
{
	if (!func_331(Global_1681628.f_8, vParam0, 0))
	{
		Global_1681628.f_8 = { vParam0 };
		Global_1681628.f_5 = fParam3;
	}
}

void func_408()
{
	int iVar0;
	
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_38))
	{
		AUDIO::STOP_SOUND(Local_213.f_38);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_38);
		Local_213.f_38 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_27))
	{
		AUDIO::STOP_SOUND(Local_213.f_27);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_27);
		Local_213.f_27 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_28))
	{
		AUDIO::STOP_SOUND(Local_213.f_28);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_28);
		Local_213.f_28 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_29))
	{
		AUDIO::STOP_SOUND(Local_213.f_29);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_29);
		Local_213.f_29 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_30))
	{
		AUDIO::STOP_SOUND(Local_213.f_30);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_30);
		Local_213.f_30 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_31))
	{
		AUDIO::STOP_SOUND(Local_213.f_31);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_31);
		Local_213.f_31 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_37))
	{
		AUDIO::STOP_SOUND(Local_213.f_37);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_37);
		Local_213.f_37 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_36))
	{
		AUDIO::STOP_SOUND(Local_213.f_36);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_36);
		Local_213.f_36 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_35))
	{
		AUDIO::STOP_SOUND(Local_213.f_35);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_35);
		Local_213.f_35 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_34))
	{
		AUDIO::STOP_SOUND(Local_213.f_34);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_34);
		Local_213.f_34 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_33))
	{
		AUDIO::STOP_SOUND(Local_213.f_33);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_33);
		Local_213.f_33 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_32))
	{
		AUDIO::STOP_SOUND(Local_213.f_32);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_32);
		Local_213.f_32 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_39))
	{
		AUDIO::STOP_SOUND(Local_213.f_39);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_39);
		Local_213.f_39 = -1;
	}
	if (!AUDIO::HAS_SOUND_FINISHED(Local_213.f_40))
	{
		AUDIO::STOP_SOUND(Local_213.f_40);
		AUDIO::RELEASE_SOUND_ID(Local_213.f_40);
		Local_213.f_40 = -1;
	}
	if (func_386())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Local_213.f_43[iVar0] != -1)
			{
				AUDIO::STOP_SOUND(Local_213.f_43[iVar0]);
				AUDIO::RELEASE_SOUND_ID(Local_213.f_43[iVar0]);
				Local_213.f_43[iVar0] = -1;
			}
			iVar0++;
		}
	}
	func_129();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_BTL_Hacker_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_BTL_Hacker_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_aw_arena_piloted_missile_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_aw_arena_piloted_missile_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Battle_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Battle_Drone_HUD_Scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Arena_Spectator_Drone_HUD_Scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("DLC_Arena_Spectator_Drone_HUD_Scene");
	}
}

bool func_409(int iParam0)
{
	return Local_213.f_158 == iParam0;
}

void func_410()
{
	if (func_141())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 7);
	}
}

void func_411(bool bParam0)
{
	if (bParam0)
	{
		if (func_187())
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_1681628, 16))
			{
				GAMEPLAY::SET_BIT(&Global_1681628, 16);
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1681628, 16))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 16);
	}
}

void func_412(bool bParam0)
{
	if (bParam0)
	{
		if (!func_387())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 6);
		}
	}
	else if (func_387())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 6);
	}
}

void func_413(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1681628, 3))
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 3);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1681628, 3))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 3);
	}
}

void func_414(bool bParam0)
{
	if (bParam0)
	{
		if (!func_315())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 10);
		}
	}
	else if (func_315())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 10);
	}
}

void func_415(bool bParam0)
{
	if (bParam0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(GAMEPLAY::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_387())
			{
				GAMEPLAY::SET_BIT(&Global_1681628, 0);
			}
		}
	}
	else if (func_387())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 0);
	}
}

void func_416(float fParam0)
{
	if (Global_1681628.f_7 != fParam0)
	{
		Global_1681628.f_7 = fParam0;
	}
}

int func_417()
{
	if (!func_250())
	{
		return 0;
	}
	if (func_42(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_187())
	{
		return 0;
	}
	if (func_20())
	{
		return 0;
	}
	return 1;
}

void func_418()
{
	if (CAM::DOES_CAM_EXIST(Local_213.f_119))
	{
		CAM::DESTROY_CAM(Local_213.f_119, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		if (!func_21() || GAMEPLAY::IS_BIT_SET(Local_213.f_6, 0))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
}

void func_419(struct<12> Param0)
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, Param0);
	func_425(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&uLocal_212, 1);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_115, 97);
	if (!func_424())
	{
		func_400(0);
	}
	if (Param0.f_11)
	{
		GAMEPLAY::SET_BIT(&(Local_213.f_6), 3);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_386())
		{
			Local_213.f_90 = { Param0.f_2 };
			switch (Param0.f_1)
			{
				case 0:
					if (ENTITY::DOES_ENTITY_EXIST(func_278()) && !ENTITY::IS_ENTITY_DEAD(func_278(), 0))
					{
						Local_213.f_99 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(func_278(), 1), ENTITY::GET_ENTITY_HEADING(func_278()), 0f, 1.6f, 2.9f) };
						Local_213.f_93 = { Local_213.f_99 };
					}
					func_370(1);
					vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_1 = 0;
					break;
				
				case 1:
					func_423(1);
					Local_213.f_99 = { Param0.f_5 };
					vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_1 = 1;
					break;
				
				case 2:
					func_422(1);
					Local_213.f_99 = { Param0.f_5 };
					vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_1 = 2;
					break;
				
				case 3:
					func_363(1);
					Local_213.f_99 = { Param0.f_5 };
					vLocal_115[PLAYER::PLAYER_ID() /*3*/].f_1 = 3;
					break;
				
				default:
					func_421(1);
					Local_213.f_99 = { Param0.f_5 };
					break;
			}
			Local_213.f_96 = { Param0.f_8 };
			if (func_219(func_323()))
			{
				func_330(Local_213.f_99, 0f, 0f, 0f);
			}
		}
	}
	else
	{
		func_400(0);
	}
	if (!func_386())
	{
		func_356(1, 1);
	}
	else
	{
		func_420();
	}
}

void func_420()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Local_213.f_43[iVar0] = -1;
		iVar0++;
	}
	func_304(4);
}

void func_421(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 0))
		{
			Global_1681628.f_2 = 0;
			GAMEPLAY::SET_BIT(&(Global_1681628.f_2), 0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1681628.f_2), 0);
	}
}

void func_422(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 3))
		{
			Global_1681628.f_2 = 0;
			GAMEPLAY::SET_BIT(&(Global_1681628.f_2), 3);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 3))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1681628.f_2), 3);
	}
}

void func_423(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 2))
		{
			Global_1681628.f_2 = 0;
			GAMEPLAY::SET_BIT(&(Global_1681628.f_2), 2);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1681628.f_2, 2))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1681628.f_2), 2);
	}
}

int func_424()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_395())
		{
			return 0;
		}
		if (func_393(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_425(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_402();
			}
			else
			{
				return 0;
			}
		}
		if (!func_426())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_402();
					}
					else
					{
						return 0;
					}
				}
				if (func_395())
				{
					if (!bParam2)
					{
						func_402();
					}
					else
					{
						return 0;
					}
				}
				if (func_393(155))
				{
					if (!bParam2)
					{
						func_402();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_402();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_402();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_402();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_426()
{
	return Global_1312844;
}

