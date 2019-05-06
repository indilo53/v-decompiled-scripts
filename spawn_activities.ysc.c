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
	var uLocal_60 = 0;
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
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
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_152())
		{
			func_149();
		}
		if (func_139())
		{
			func_149();
		}
		switch (iLocal_96)
		{
			case 0:
				if (Global_2409250.f_27 && Global_1316753 == -1)
				{
				}
				else
				{
					if (!Global_2409250.f_16)
					{
						func_48();
					}
					if (!Global_2409250.f_15)
					{
						func_23();
					}
					if (func_17())
					{
						iLocal_96 = 1;
					}
				}
				break;
			
			case 1:
				if (func_1())
				{
					func_149();
				}
				break;
			
			case 2:
				break;
		}
	}
}

int func_1()
{
	var uVar0;
	
	if (Global_2409250.f_16)
	{
		if (((!NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !CUTSCENE::IS_CUTSCENE_PLAYING()) && !func_16()) && !func_11(PLAYER::PLAYER_ID()))
		{
			NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(0);
		}
		if (func_10())
		{
			if (!iLocal_97)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
				}
				else
				{
					uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (!ENTITY::IS_ENTITY_DEAD(uVar0, 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar0, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(uVar0, 1, 0f, 0f, -1f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						AI::TASK_VEHICLE_DRIVE_WANDER(PLAYER::PLAYER_PED_ID(), uVar0, 20f, 786603);
						iLocal_99 = 1;
					}
				}
				iLocal_97 = 1;
			}
		}
		func_7();
		if (func_6(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (!Global_2409250.f_29)
			{
				Global_2409250.f_30 = NETWORK::GET_NETWORK_TIME();
				Global_2409250.f_29 = 1;
			}
			switch (Global_2409250)
			{
				case 0:
					if (!Global_2409250.f_17)
					{
						Global_2409250.f_30 = NETWORK::GET_NETWORK_TIME();
						Global_2409250.f_17 = 1;
					}
					if (func_4() || func_3())
					{
						if (Global_2409250.f_27)
						{
							if (CAM::DOES_CAM_EXIST(uLocal_94))
							{
								CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
							}
							if (CAM::DOES_CAM_EXIST(uLocal_94))
							{
								CAM::DESTROY_CAM(uLocal_94, 1);
							}
						}
						return 1;
					}
					break;
				
				case 1:
					if ((func_4() || !func_2(-258271821)) || func_3())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							ENTITY::FREEZE_ENTITY_POSITION(uVar0, 0);
							ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uVar0, 1);
						}
						Global_2409250.f_10 = 1;
						iLocal_99 = 0;
						AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						return 1;
					}
					break;
				
				case 2:
					if ((func_4() || !func_2(-1146898486)) || func_3())
					{
						AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						iLocal_99 = 0;
						return 1;
					}
					else if (Global_2409250.f_28 > 0)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							AI::SET_NEXT_DESIRED_MOVE_STATE(1f);
							AI::TASK_WANDER_STANDARD(PLAYER::PLAYER_PED_ID(), 1193033728, 0);
						}
					}
					break;
				
				case 7:
					STREAMING::REQUEST_ANIM_DICT("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
					STREAMING::REQUEST_ANIM_DICT("get_up@directional@movement@from_seated@standard");
					if (STREAMING::HAS_ANIM_DICT_LOADED("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED"))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "get_up@directional@movement@from_seated@standard", "get_up_l_0", 3))
							{
								AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 1090519040, -1056964608, -1, 2, 0, 0, 0, 0);
							}
							else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "get_up@directional@movement@from_seated@standard", "get_up_l_0") > 0.85f)
							{
								AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								STREAMING::REMOVE_ANIM_DICT("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
								STREAMING::REMOVE_ANIM_DICT("get_up@directional@movement@from_seated@standard");
								iLocal_99 = 0;
								if (Global_2409250.f_21)
								{
									CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
									Global_2409250.f_21 = 0;
								}
								return 1;
							}
						}
						else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front") > 0.85f && STREAMING::HAS_ANIM_DICT_LOADED("get_up@directional@movement@from_seated@standard"))
						{
							AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "get_up@directional@movement@from_seated@standard", "get_up_l_0", 1090519040, -1056964608, -1, 2, 0, 0, 0, 0);
						}
						else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front") < 0.01f)
						{
							AI::SET_ANIM_RATE(PLAYER::PLAYER_PED_ID(), 1f, 0, 0);
						}
					}
					break;
				
				case 3:
					return 1;
					break;
				
				case 4:
				case 5:
					if (Global_2409250.f_19)
					{
						return 1;
					}
					break;
				
				default:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), iParam0);
	if (!iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Global_2409250.f_29)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2409250.f_30)) > 6000)
		{
			return 1;
		}
	}
	return 0;
}

int func_4()
{
	if (func_5(0))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)
{
	if (CONTROLS::_0xD7D22F5592AED8BA(iParam0) < 2000)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_7()
{
	if (Global_2409250 == 0)
	{
		if (Global_2409250.f_27)
		{
			if (func_9())
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_94))
				{
					if (CAM::DOES_CAM_EXIST(uLocal_95))
					{
						CAM::DESTROY_CAM(uLocal_95, 0);
					}
					uLocal_94 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					func_8(Global_2409250.f_26, uLocal_94);
					CAM::SHAKE_CAM(uLocal_94, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_ACTIVE(uLocal_94, 1);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
			}
		}
	}
}

void func_8(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			CAM::SET_CAM_COORD(uParam1, -1589.074f, -3015.353f, -74.8535f);
			CAM::SET_CAM_ROT(uParam1, -15.8449f, 0f, 78.0001f, 2);
			CAM::SET_CAM_FOV(uParam1, 25.1368f);
			break;
		
		case 2:
			CAM::SET_CAM_COORD(uParam1, -1589.807f, -3008.426f, -74.9934f);
			CAM::SET_CAM_ROT(uParam1, -17.1168f, 0f, 104.7282f, 2);
			CAM::SET_CAM_FOV(uParam1, 34.7654f);
			break;
		
		case 4:
			CAM::SET_CAM_COORD(uParam1, -1592.237f, -3008.188f, -78.166f);
			CAM::SET_CAM_ROT(uParam1, -3.025f, 0f, 121.1804f, 2);
			CAM::SET_CAM_FOV(uParam1, 35.9f);
			break;
	}
}

int func_9()
{
	switch (Global_2409250.f_26)
	{
		case 0:
		case 2:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_10()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() > 9)
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_11(int iParam0)
{
	if (func_13(iParam0, 0))
	{
		return 1;
	}
	if (func_12())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_12()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_13(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_14(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
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

int func_14(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_15();
	}
	if (Global_1312837[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_15()
{
	return Global_1312736;
}

bool func_16()
{
	return Global_93284.f_328 > 0;
}

int func_17()
{
	if (Global_2409250.f_18)
	{
		func_22();
		return 1;
	}
	if (func_21() || func_20())
	{
		func_22();
		return 1;
	}
	if ((func_19() && Global_2409250 != 6) && !Global_2409250.f_27)
	{
		func_22();
		return 1;
	}
	if (Global_2409250.f_16 && Global_2409250.f_15)
	{
		return 1;
	}
	else if (!Global_2409250.f_20)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("spawn_activities")) == 0)
		{
			if (func_18("spawn_activities", 1424))
			{
				Global_2409250.f_20 = 1;
			}
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("spawn_activities")) == 0)
	{
		func_22();
		return 1;
	}
	if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2409250.f_3)) > 120000)
	{
		func_22();
		return 1;
	}
	GAMEPLAY::SET_BIT(&(Global_1663731[1]), 22);
	return 0;
}

int func_18(char* sParam0, int iParam1)
{
	var uVar0;
	
	if (SCRIPT::DOES_SCRIPT_EXIST(sParam0))
	{
		SCRIPT::REQUEST_SCRIPT(sParam0);
		if (SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			if (iParam1 <= 0)
			{
				iParam1 = 512;
			}
			uVar0 = SYSTEM::START_NEW_SCRIPT(sParam0, iParam1);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
			return 1;
		}
	}
	return 0;
}

var func_19()
{
	return Global_2448386.f_734;
}

var func_20()
{
	return Global_2459442;
}

var func_21()
{
	return Global_1312853;
}

void func_22()
{
	Global_2409250.f_23 = -1;
	Global_2409250.f_24 = -1;
}

void func_23()
{
	if (!Global_2409250.f_23 > -1 || !Global_2409250.f_24 > -1)
	{
		Global_2409250.f_15 = 1;
	}
	else
	{
		if (Global_2409250.f_25 == 0)
		{
			if ((!func_39(Global_2409250.f_23, Global_2409250.f_24) || func_37(func_38(Global_2409250.f_23, Global_2409250.f_24), -1, 0) > 0) || Global_2409250.f_27)
			{
				if (func_39(Global_2409250.f_23, Global_2409250.f_24))
				{
					if (func_37(func_38(Global_2409250.f_23, Global_2409250.f_24), -1, 0) < 0)
					{
						func_36(func_38(Global_2409250.f_23, Global_2409250.f_24), 0, -1, 1, 0);
					}
					func_32(func_38(Global_2409250.f_23, Global_2409250.f_24), -1);
				}
				if (Global_2409250.f_27)
				{
					if (func_31())
					{
						func_30();
					}
					func_25(Global_2409250.f_23, Global_2409250.f_24, 1, 1, func_29(), 1, 0, 0, 0);
				}
				else
				{
					func_25(Global_2409250.f_23, Global_2409250.f_24, 1, 1, 1, 1, 0, 0, 0);
				}
				Global_2409250.f_25++;
			}
			else
			{
				Global_2409250.f_15 = 1;
			}
		}
		if (Global_2409250.f_25 == 1)
		{
			if ((func_24() || (Global_4254407 == -1 && Global_4254407.f_1 == -1)) || Global_4254407.f_3 == 0)
			{
				Global_2409250.f_25++;
				Global_2409250.f_15 = 1;
			}
		}
	}
}

int func_24()
{
	if (Global_4254407.f_770 == 1)
	{
		return 1;
	}
	return 0;
}

void func_25(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Global_4254407 = iParam0;
	Global_4254407.f_1 = iParam1;
	if (bParam3)
	{
		if (func_28(&Global_4254407))
		{
			func_27(&Global_4254407);
		}
	}
	Global_4254407.f_3 = 1;
	if (iParam4 || func_26(iParam0, iParam1))
	{
		Global_4254407.f_4 = 1;
	}
	Global_4254407.f_9 = iParam2;
	Global_4254407.f_13 = iParam5;
	Global_4254407.f_14 = iParam6;
	Global_4254407.f_15 = iParam7;
	Global_4254407.f_830 = iParam8;
	if (GAMEPLAY::IS_BIT_SET(Global_2385, 3))
	{
		Global_4254407.f_5 = 1;
	}
}

int func_26(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
					break;
				
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
					return 1;
					break;
				
				case 0:
				default:
					return 0;
					break;
			}
			break;
	}
	return 0;
}

void func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_37(func_38(2, 46), -1, 0);
	iVar1 = func_37(func_38(2, 45), -1, 0);
	iVar2 = func_37(func_38(2, 44), -1, 0);
	if (iVar0 > 0)
	{
		uParam0->f_1 = 46;
	}
	else if (iVar1 > 0)
	{
		uParam0->f_1 = 45;
	}
	else if (iVar2 > 0)
	{
		uParam0->f_1 = 44;
	}
}

int func_28(var uParam0)
{
	if (*uParam0 == 2)
	{
		if ((uParam0->f_1 == 44 || uParam0->f_1 == 45) || uParam0->f_1 == 46)
		{
			return 1;
		}
	}
	return 0;
}

int func_29()
{
	switch (Global_2409250.f_26)
	{
		case 0:
		case 2:
			return 0;
		
		case 1:
		case 3:
			return 1;
		
		case 4:
			switch (Global_1316751)
			{
				case 3:
				case 4:
					return 1;
				
				default:
			}
		
		default:
	}
	return 0;
}

void func_30()
{
	int iVar0;
	
	switch (Global_2409250.f_26)
	{
		case 0:
		case 2:
			Global_2409250.f_24 = 36;
			break;
		
		case 4:
			switch (Global_1316751)
			{
				case 0:
				case 1:
					Global_2409250.f_24 = 36;
					break;
				
				case 2:
					iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
					switch (iVar0)
					{
						case 0:
							Global_2409250.f_24 = 30;
							break;
						
						case 1:
							Global_2409250.f_24 = 32;
							break;
						
						case 2:
							Global_2409250.f_24 = 33;
							break;
						
						case 3:
							Global_2409250.f_24 = 35;
							break;
						
						case 4:
							Global_2409250.f_24 = 37;
							break;
						
						case 5:
							Global_2409250.f_24 = 38;
							break;
					}
					break;
				
				case 3:
				case 4:
					iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 7);
					switch (iVar0)
					{
						case 0:
							Global_2409250.f_24 = 36;
							break;
						
						case 1:
							Global_2409250.f_24 = 30;
							break;
						
						case 2:
							Global_2409250.f_24 = 32;
							break;
						
						case 3:
							Global_2409250.f_24 = 33;
							break;
						
						case 4:
							Global_2409250.f_24 = 35;
							break;
						
						case 5:
							Global_2409250.f_24 = 37;
							break;
						
						case 6:
							Global_2409250.f_24 = 38;
							break;
					}
					break;
			}
			break;
	}
}

int func_31()
{
	if (Global_2409250.f_24 == 2)
	{
		switch (Global_2409250.f_24)
		{
			case 30:
			case 32:
			case 33:
			case 34:
			case 35:
			case 36:
			case 37:
			case 38:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_37(iParam0, func_35(iParam1), 0);
	iVar0++;
	if (!func_34(iParam0))
	{
		func_36(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_33(iParam0, iVar0, iParam1, 1);
	}
}

void func_33(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_35(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_35(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_35(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_35(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_35(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_35(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_35(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_35(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_35(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_35(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_35(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_35(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_35(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_35(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_35(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_35(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_35(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_35(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_35(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_35(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_35(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_35(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_35(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_35(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_35(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_35(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_35(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_35(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_35(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_35(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_35(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_35(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_35(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_34(int iParam0)
{
	if (Global_1378818)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8527:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
				return 1;
				break;
			}
	}
	return 0;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_15();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

void func_36(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_35(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_37(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_35(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_38(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1097;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 40:
					return 1097;
					break;
				
				case 41:
					return 62;
					break;
				
				case 42:
					return 63;
					break;
				
				case 43:
					return 7867;
					break;
				
				case 44:
					return 1275;
					break;
				
				case 45:
					return 1276;
					break;
				
				case 46:
					return 1277;
					break;
			}
			break;
	}
	return 0;
}

int func_39(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 40:
					if ((func_46(PLAYER::PLAYER_ID()) != -1 && func_44(func_46(PLAYER::PLAYER_ID()), 11)) && func_42() == 0)
					{
						return !func_40();
					}
					return 1;
					break;
				
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
				case 46:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_40()
{
	return func_41(PLAYER::PLAYER_ID());
}

var func_41(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_309.f_3, 13);
}

int func_42()
{
	return func_43(PLAYER::PLAYER_ID());
}

var func_43(int iParam0)
{
	return GAMEPLAY::GET_BITS_IN_RANGE(Global_2423801[iParam0 /*413*/].f_309.f_3, 28, 31);
}

bool func_44(int iParam0, int iParam1)
{
	return func_45(iParam0) == iParam1;
}

int func_45(int iParam0)
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
	}
	return -1;
}

int func_46(int iParam0)
{
	if (iParam0 != func_47())
	{
		if (func_6(iParam0, 1, 1))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4;
		}
		else if (((Global_1312857 || Global_2405070.f_2662) && iParam0 == PLAYER::PLAYER_ID()) && func_6(iParam0, 1, 0))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4;
		}
	}
	return -1;
}

int func_47()
{
	return -1;
}

void func_48()
{
	if (!Global_2409250 > -1)
	{
		Global_2409250.f_16 = 1;
	}
	else
	{
		switch (Global_2409250)
		{
			case 0:
				switch (Global_2409250.f_1)
				{
					case 0:
						if (func_6(PLAYER::PLAYER_ID(), 0, 0))
						{
							Global_2409250.f_16 = 1;
						}
						break;
				}
				break;
			
			case 1:
				if (Global_2409250.f_1 == 0)
				{
					if (func_102())
					{
						Global_2409250.f_2 = 0;
						Global_2409250.f_8 = 1;
						Global_2409250.f_11 = 1;
						Global_2409250.f_12 = 1;
						Global_2409250.f_9 = 1;
						Global_2409250.f_1++;
					}
					else
					{
						Global_2409250.f_16 = 1;
					}
				}
				if (Global_2409250.f_1 == 1)
				{
					if (func_102())
					{
						if (func_6(PLAYER::PLAYER_ID(), 0, 0))
						{
							if (func_100(0))
							{
								Global_2409250.f_1++;
							}
						}
					}
					else
					{
						Global_2409250.f_16 = 1;
					}
				}
				if (Global_2409250.f_1 == 2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						Global_2409250.f_16 = 1;
					}
				}
				break;
			
			case 2:
				if (func_6(PLAYER::PLAYER_ID(), 0, 0))
				{
					if (Global_2409250.f_28 > 0)
					{
						AI::SET_NEXT_DESIRED_MOVE_STATE(2f);
						AI::TASK_WANDER_STANDARD(PLAYER::PLAYER_PED_ID(), 1193033728, 0);
					}
					else
					{
						AI::TASK_WANDER_STANDARD(PLAYER::PLAYER_PED_ID(), 1193033728, 0);
					}
					iLocal_99 = 1;
					Global_2409250.f_16 = 1;
				}
				break;
			
			case 7:
				if (Global_2409250.f_37)
				{
					iLocal_99 = 1;
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(160f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					Global_2409250.f_16 = 1;
					Global_2409250.f_37 = 0;
				}
				else if (func_6(PLAYER::PLAYER_ID(), 0, 0))
				{
					STREAMING::REQUEST_ANIM_DICT("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED");
					if (STREAMING::HAS_ANIM_DICT_LOADED("GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED"))
					{
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 3))
						{
							AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "GET_UP@DIRECTIONAL@TRANSITION@PRONE_TO_SEATED@INJURED", "front", 1090519040, -1056964608, -1, 2, 0, 0, 0, 0);
							iLocal_99 = 1;
						}
						else
						{
							AI::SET_ANIM_RATE(PLAYER::PLAYER_PED_ID(), 0f, 0, 0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(160f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							Global_2409250.f_16 = 1;
						}
					}
				}
				break;
			
			case 3:
			case 4:
			case 5:
			case 6:
				if (func_6(PLAYER::PLAYER_ID(), 0, 0))
				{
					if (Global_2409250.f_1 == 0)
					{
						func_99(Global_2409250);
						if (!Global_2405070.f_2662 && !func_98())
						{
							Global_2405070.f_2659 = 1;
						}
						uLocal_100 = NETWORK::GET_NETWORK_TIME();
						Global_2409250.f_1++;
					}
					if (Global_2409250.f_1 == 1)
					{
						if (!func_96(Global_2409250) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_100) > 20000)
						{
							Global_2409250.f_16 = 1;
							func_95();
						}
						else
						{
							Global_1315788 = 1;
							if (!Global_2405070.f_2662 && !func_98())
							{
								func_49();
							}
							if (!iLocal_98)
							{
								BRAIN::ENABLE_SCRIPT_BRAIN_SET(8);
								BRAIN::ENABLE_SCRIPT_BRAIN_SET(2);
								iLocal_98 = 1;
							}
						}
					}
				}
				break;
			
			default:
				break;
			}
	}
}

void func_49()
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 19400;
	if ((((((GAMEPLAY::IS_BIT_SET(Global_1589396.f_22, 5) || GAMEPLAY::IS_BIT_SET(Global_1589396.f_22, 6)) || GAMEPLAY::IS_BIT_SET(Global_1589396.f_22, 8)) || GAMEPLAY::IS_BIT_SET(Global_1589396.f_22, 7)) || GAMEPLAY::IS_BIT_SET(Global_1589396.f_22, 9)) || GAMEPLAY::IS_BIT_SET(Global_1589396.f_22, 20)) || func_94())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1048576.f_8, 0))
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_1164, 1, 0))
			{
				SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
				if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
					GAMEPLAY::SET_BIT(&(Global_1048576.f_8), 0);
				}
			}
		}
	}
	else if (Global_2405070.f_2659)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1048576.f_8, 0))
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_1164, 1, 0))
			{
				SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
				if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
					GAMEPLAY::SET_BIT(&(Global_1048576.f_8), 0);
				}
			}
		}
	}
	else if (Global_1589396.f_19 != 0 && func_93(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1048576.f_8, 0))
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_1164, 1, 0))
			{
				SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
				if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
				{
					SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
					GAMEPLAY::SET_BIT(&(Global_1048576.f_8), 0);
				}
			}
		}
	}
	else if (Global_2458662)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_1164, 1, 0))
		{
			SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
			if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
			{
				SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
				GAMEPLAY::SET_BIT(&(Global_1048576.f_8), 0);
				Global_2458662 = 0;
			}
		}
	}
	else if (((((!GAMEPLAY::IS_BIT_SET(Global_1048576.f_8, 0) && !GAMEPLAY::IS_BIT_SET(Global_2524719.f_382.f_5, 3)) && (!Global_2405069 || (Global_2405069 && Global_2449169.f_1.f_2826.f_13 > 0))) && !func_92()) && !func_87()) && !func_86())
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) <= 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PROPERTY_INT", Global_1048576.f_1164, 1, 0))
		{
			if (!func_85())
			{
				if (func_81())
				{
					SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
					if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
					{
						SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
						SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
						GAMEPLAY::SET_BIT(&(Global_1048576.f_8), 0);
						GAMEPLAY::SET_BIT(&(Global_1589396.f_22), 12);
						return;
					}
					return;
				}
			}
			else
			{
				if (!func_80(Global_1048576.f_1163) && GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_79(PLAYER::PLAYER_ID()), func_78(Global_1048576.f_1163), 1) <= 30f)
				{
					if (func_76(&(Global_1049778[Global_1048576.f_1163 /*1951*/]), 1, 0))
					{
						if (!Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_661)
						{
							SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
							if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
								GAMEPLAY::SET_BIT(&(Global_1048576.f_8), 0);
								GAMEPLAY::SET_BIT(&(Global_1589396.f_22), 12);
								return;
							}
							return;
						}
					}
					else
					{
						Var1 = { func_79(PLAYER::PLAYER_ID()) };
					}
				}
				if (func_72(Global_1048576.f_1163, 0, 0))
				{
					if (func_63(Global_1048576.f_1163, PLAYER::PLAYER_ID(), 0, 1) || func_76(&(Global_1049778[Global_1048576.f_1163 /*1951*/]), 1, 0))
					{
						if (!Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_661)
						{
							SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
							if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
								GAMEPLAY::SET_BIT(&(Global_1048576.f_8), 0);
								GAMEPLAY::SET_BIT(&(Global_1589396.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_79(PLAYER::PLAYER_ID()), func_62(2), 1) <= 30f)
				{
					func_61(&Var1, 2);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var1.f_3, Var1.f_6, 0, 1, 0))
					{
						if (!Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_661)
						{
							SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
							if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
								GAMEPLAY::SET_BIT(&(Global_1048576.f_8), 0);
								GAMEPLAY::SET_BIT(&(Global_1589396.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_79(PLAYER::PLAYER_ID()), func_62(6), 1) <= 30f)
				{
					func_61(&Var1, 6);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var1.f_3, Var1.f_6, 0, 1, 0))
					{
						if (!Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_661)
						{
							SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
							if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
								GAMEPLAY::SET_BIT(&(Global_1048576.f_8), 0);
								GAMEPLAY::SET_BIT(&(Global_1589396.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_79(PLAYER::PLAYER_ID()), func_62(10), 1) <= 30f)
				{
					func_61(&Var1, 10);
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var1, Var1.f_3, Var1.f_6, 0, 1, 0))
					{
						if (!Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_661)
						{
							SCRIPT::REQUEST_SCRIPT("AM_MP_PROPERTY_INT");
							if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PROPERTY_INT"))
							{
								SYSTEM::START_NEW_SCRIPT("AM_MP_PROPERTY_INT", iVar0);
								SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PROPERTY_INT");
								GAMEPLAY::SET_BIT(&(Global_1048576.f_8), 0);
								GAMEPLAY::SET_BIT(&(Global_1589396.f_22), 12);
								return;
							}
							return;
						}
					}
				}
				Global_1048576.f_1163++;
				if (Global_1048576.f_1163 > 124 || GAMEPLAY::IS_BIT_SET(Global_1048576.f_8, 10))
				{
					Global_1048576.f_1163 = 0;
					Global_1048576.f_1165 = 0;
					if (GAMEPLAY::IS_BIT_SET(Global_1048576.f_8, 10))
					{
						GAMEPLAY::CLEAR_BIT(&(Global_1048576.f_8), 10);
					}
					if (Global_2449169.f_1.f_2826.f_13 != 0)
					{
						if ((!func_60() && !func_59()) && !NETWORK::NETWORK_IS_IN_TRANSITION())
						{
							if ((!func_58() && !func_57()) && !func_56())
							{
								if ((!func_55() && !func_54()) && !func_53())
								{
									if (!func_52())
									{
										if (!func_51())
										{
											if (!Global_2449169.f_2844.f_157)
											{
												func_50();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_50()
{
	Global_2449169.f_1.f_2826.f_13 = 0;
	Global_2449169.f_1.f_2826 = 0;
	Global_2449169.f_1.f_2826.f_1 = 0;
	Global_2449169.f_1.f_2826.f_2 = 0;
	Global_2449169.f_1.f_2826.f_3 = 0;
	Global_2449169.f_1.f_2826.f_4 = 0;
	Global_2449169.f_1.f_2826.f_5 = 0;
	Global_2449169.f_1.f_2826.f_6 = 0;
	Global_2449169.f_1.f_2826.f_7 = 0;
	Global_2449169.f_1.f_2826.f_8 = 0;
	Global_2449169.f_1.f_2826.f_9 = 0;
	Global_2449169.f_1.f_2826.f_10 = 0;
	Global_2449169.f_1.f_2826.f_11 = 0;
	Global_2449169.f_1.f_2826.f_12 = 0;
}

bool func_51()
{
	return Global_2448386.f_637;
}

bool func_52()
{
	return Global_2448386.f_735;
}

bool func_53()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 20);
}

bool func_54()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 2);
}

bool func_55()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 1);
}

bool func_56()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_196 != 0;
}

bool func_57()
{
	return Global_1646081.f_3;
}

bool func_58()
{
	return Global_2448386.f_629;
}

bool func_59()
{
	return Global_2448386.f_580;
}

bool func_60()
{
	return Global_2448386.f_581;
}

struct<8> func_61(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			*uParam0 = { 175.0434f, -998.7965f, -100.2256f };
			uParam0->f_3 = { 175.0878f, -1009.004f, -95.99992f };
			uParam0->f_6 = 14f;
			break;
		
		case 6:
			*uParam0 = { 212.9084f, -999.6776f, -99.99996f };
			uParam0->f_3 = { 189.6844f, -1000.068f, -95.2507f };
			uParam0->f_6 = 16.75f;
			break;
		
		case 10:
			*uParam0 = { 230.0094f, -1009.124f, -100.6539f };
			uParam0->f_3 = { 230.5939f, -964.022f, -94.53618f };
			uParam0->f_6 = 23.5f;
			break;
	}
	return *uParam0;
}

Vector3 func_62(int iParam0)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 2:
			vVar0 = { 172.7787f, -1003.21f, -99.9999f };
			break;
		
		case 6:
			vVar0 = { 198.6071f, -1000.536f, -100f };
			break;
		
		case 10:
			vVar0 = { 227.8602f, -991.1093f, -99.9999f };
			break;
	}
	return vVar0;
}

int func_63(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	struct<6> Var0[2];
	
	if (func_71(iParam0) || func_72(iParam0, 0, 0))
	{
		if (func_6(uParam1, 1, 1))
		{
			if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Global_1049778[iParam0 /*1951*/].f_146.f_47, func_79(PLAYER::PLAYER_ID()), !bParam2) <= 75f)
			{
				func_65(iParam0, 971, &(Var0[0 /*6*/]), func_70(iParam0), 1);
				func_65(iParam0, 972, &(Var0[1 /*6*/]), func_70(iParam0), 1);
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(uParam1), Var0[0 /*6*/], Var0[1 /*6*/], Var0[0 /*6*/].f_3.f_2, 0, 1, 0))
				{
					return 1;
				}
				else if (bParam3)
				{
					return 0;
				}
				if (bParam2)
				{
					if (Var0[0 /*6*/].f_2 < Var0[1 /*6*/].f_2)
					{
						Var0[0 /*6*/].f_2 = (Var0[0 /*6*/].f_2 - 1000f);
					}
					else
					{
						Var0[1 /*6*/].f_2 = (Var0[1 /*6*/].f_2 - 1000f);
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYER_PED(uParam1), Var0[0 /*6*/], Var0[1 /*6*/], 30f, 0, 1, 0))
					{
						return 1;
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						return 1;
					}
				}
				if (func_64(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_64(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_196, 5);
}

void func_65(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<6> Var0[2];
	vector3 vVar13;
	
	Var0[0 /*6*/] = { func_69(iParam3, bParam4) };
	Var0[1 /*6*/] = { func_69(iParam0, bParam4) };
	*uParam2 = { func_67(iParam1, iParam3) };
	vVar13 = { *uParam2 - Var0[0 /*6*/] };
	vVar13 = { func_66(vVar13, -Var0[0 /*6*/].f_3.f_2) };
	vVar13 = { func_66(vVar13, Var0[1 /*6*/].f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0[1 /*6*/], 0f, vVar13) };
	switch (iParam1)
	{
		case 6:
		case 2:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 34:
		case 35:
		case 36:
		case 38:
		case 39:
		case 120:
		case 121:
		case 125:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 42:
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
		case 64:
		case 65:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 67:
		case 68:
		case 109:
		case 69:
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
		case 81:
		case 82:
		case 83:
		case 85:
		case 84:
		case 89:
		case 90:
		case 91:
		case 92:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 93:
		case 99:
		case 100:
		case 106:
		case 107:
		case 108:
		case 119:
		case 122:
		case 123:
		case 124:
		case 138:
		case 139:
		case 140:
		case 130:
		case 128:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 153:
		case 154:
		case 155:
		case 157:
		case 234:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 235:
		case 149:
		case 150:
		case 151:
		case 152:
		case 172:
		case 187:
		case 173:
		case 201:
		case 188:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 284:
		case 285:
		case 286:
		case 287:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 216:
		case 217:
		case 182:
		case 183:
		case 181:
		case 156:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 300:
		case 301:
		case 302:
		case 303:
		case 304:
		case 306:
		case 305:
		case 308:
		case 309:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:
		case 319:
		case 320:
		case 321:
		case 322:
		case 323:
		case 324:
		case 325:
		case 326:
		case 327:
		case 328:
		case 329:
		case 307:
		case 331:
		case 332:
		case 333:
		case 334:
		case 310:
		case 335:
		case 336:
		case 337:
		case 338:
		case 339:
		case 311:
		case 340:
		case 435:
		case 436:
		case 437:
		case 470:
		case 477:
		case 504:
		case 507:
		case 510:
		case 513:
		case 528:
		case 531:
		case 534:
		case 537:
		case 540:
		case 547:
		case 445:
		case 446:
		case 447:
		case 448:
		case 449:
		case 450:
		case 471:
		case 472:
		case 478:
		case 479:
		case 505:
		case 506:
		case 508:
		case 509:
		case 511:
		case 512:
		case 514:
		case 515:
		case 529:
		case 530:
		case 532:
		case 533:
		case 535:
		case 536:
		case 538:
		case 539:
		case 541:
		case 542:
		case 548:
		case 549:
		case 432:
		case 433:
		case 434:
		case 451:
		case 452:
		case 453:
		case 454:
		case 455:
		case 456:
		case 459:
		case 460:
		case 461:
		case 462:
		case 463:
		case 464:
		case 560:
		case 546:
		case 587:
		case 588:
		case 589:
		case 590:
		case 591:
		case 592:
		case 501:
		case 502:
		case 500:
		case 616:
		case 615:
		case 612:
		case 629:
		case 630:
		case 631:
		case 714:
		case 633:
		case 634:
		case 635:
		case 636:
		case 637:
		case 638:
		case 639:
		case 640:
		case 643:
		case 644:
		case 641:
		case 642:
		case 646:
		case 645:
		case 647:
		case 648:
		case 649:
		case 650:
		case 666:
		case 667:
		case 668:
		case 669:
		case 670:
		case 671:
		case 673:
		case 674:
		case 675:
		case 676:
		case 677:
		case 689:
		case 690:
		case 691:
		case 692:
		case 693:
		case 694:
		case 695:
		case 696:
		case 697:
		case 698:
		case 699:
		case 700:
		case 701:
		case 702:
		case 703:
		case 704:
		case 705:
		case 706:
		case 707:
		case 708:
		case 709:
		case 710:
		case 711:
		case 712:
		case 713:
		case 632:
		case 738:
		case 739:
		case 740:
		case 741:
		case 742:
		case 743:
		case 744:
		case 745:
		case 746:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
		case 732:
		case 733:
		case 734:
		case 735:
		case 736:
		case 737:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 755:
		case 756:
		case 757:
		case 758:
		case 759:
		case 760:
		case 761:
		case 762:
		case 763:
		case 764:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 770:
		case 771:
		case 772:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 789:
		case 790:
		case 791:
		case 792:
		case 793:
		case 794:
		case 795:
		case 796:
		case 797:
		case 798:
		case 799:
		case 800:
		case 802:
		case 801:
		case 803:
		case 804:
		case 805:
		case 806:
		case 807:
		case 808:
		case 809:
		case 678:
		case 679:
		case 680:
		case 681:
		case 682:
		case 683:
		case 684:
		case 685:
		case 810:
		case 811:
		case 812:
		case 813:
		case 814:
		case 815:
		case 817:
		case 816:
		case 819:
		case 818:
		case 820:
		case 821:
		case 822:
		case 823:
		case 824:
		case 825:
		case 826:
		case 827:
		case 828:
		case 829:
		case 830:
		case 831:
		case 832:
		case 833:
		case 834:
		case 835:
		case 836:
		case 837:
		case 838:
		case 839:
		case 840:
		case 841:
		case 842:
		case 843:
		case 844:
		case 845:
		case 846:
		case 847:
		case 848:
		case 849:
		case 850:
		case 851:
		case 852:
		case 853:
		case 854:
		case 855:
		case 856:
		case 686:
		case 687:
		case 688:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
	switch (iParam1)
	{
		case 857:
		case 858:
		case 859:
		case 860:
		case 861:
		case 862:
		case 863:
		case 864:
		case 865:
		case 866:
		case 867:
		case 868:
		case 869:
		case 870:
		case 871:
		case 872:
		case 873:
		case 874:
		case 875:
		case 876:
		case 877:
		case 878:
		case 879:
		case 880:
		case 881:
		case 882:
		case 883:
		case 884:
		case 888:
		case 889:
		case 890:
		case 891:
		case 651:
		case 652:
		case 653:
		case 654:
		case 655:
		case 656:
		case 657:
		case 658:
		case 659:
		case 660:
		case 661:
		case 662:
		case 663:
		case 664:
		case 665:
		case 887:
		case 894:
		case 895:
		case 896:
		case 897:
		case 898:
		case 899:
		case 900:
		case 901:
		case 902:
		case 903:
		case 904:
		case 905:
		case 906:
		case 907:
		case 908:
		case 911:
		case 913:
		case 914:
		case 915:
		case 916:
		case 917:
		case 918:
		case 919:
		case 920:
		case 921:
		case 922:
		case 923:
		case 924:
		case 925:
		case 926:
		case 927:
		case 928:
		case 929:
		case 930:
		case 931:
		case 932:
		case 954:
		case 955:
		case 956:
		case 957:
		case 958:
		case 959:
		case 968:
		case 969:
		case 970:
		case 973:
		case 974:
		case 975:
		case 976:
		case 977:
		case 978:
		case 979:
		case 980:
		case 981:
		case 982:
		case 983:
		case 984:
		case 985:
		case 986:
		case 987:
		case 988:
		case 989:
		case 990:
		case 1008:
		case 1009:
		case 1010:
		case 991:
		case 992:
		case 993:
		case 994:
		case 995:
		case 996:
		case 997:
		case 998:
		case 999:
		case 960:
		case 961:
		case 962:
		case 963:
		case 964:
		case 965:
		case 966:
		case 967:
		case 1000:
		case 1001:
		case 1002:
		case 1003:
		case 1004:
		case 1005:
		case 1006:
		case 1007:
		case 1011:
		case 1012:
		case 1013:
			while (Var0[0 /*6*/].f_3.f_2 > 180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[0 /*6*/].f_3.f_2 < -180f)
			{
				Var0[0 /*6*/].f_3.f_2 = (Var0[0 /*6*/].f_3.f_2 + 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 > 180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 - 360f);
			}
			while (Var0[1 /*6*/].f_3.f_2 < -180f)
			{
				Var0[1 /*6*/].f_3.f_2 = (Var0[1 /*6*/].f_3.f_2 + 360f);
			}
			uParam2->f_3.f_2 = (uParam2->f_3.f_2 + (Var0[1 /*6*/].f_3.f_2 - Var0[0 /*6*/].f_3.f_2));
			while (uParam2->f_3.f_2 > 180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 - 360f);
			}
			while (uParam2->f_3.f_2 < -180f)
			{
				uParam2->f_3.f_2 = (uParam2->f_3.f_2 + 360f);
			}
			break;
	}
}

Vector3 func_66(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_67(var uParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar23;
	
	iVar23 = 0;
	if (func_68(iParam1, &uVar6))
	{
		iVar23 = 1;
	}
	if (iVar23 && GAMEPLAY::_0xB335F761606DB47C(&Var0, &(Var0.f_3), uParam0, uVar6))
	{
		return Var0;
	}
	return Var0;
}

int func_68(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1:
		case 1:
			*uParam1 = 0;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap", 64);
			return 1;
			break;
		
		case 61:
			*uParam1 = 1;
			StringCopy(&(uParam1->f_1), "BaseElementLocationsMap_HighApt", 64);
			return 1;
			break;
		
		case 73:
			*uParam1 = 2;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap1", 64);
			return 1;
			break;
		
		case 77:
			*uParam1 = 3;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap2", 64);
			return 1;
			break;
		
		case 83:
			*uParam1 = 4;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap3", 64);
			return 1;
			break;
		
		case 86:
			*uParam1 = 5;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap4", 64);
			return 1;
			break;
		
		case 88:
			*uParam1 = 6;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap5", 64);
			return 1;
			break;
		
		case 91:
			*uParam1 = 7;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap6", 64);
			return 1;
			break;
		
		case 97:
			*uParam1 = 8;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap7", 64);
			return 1;
			break;
		
		case 109:
			*uParam1 = 9;
			StringCopy(&(uParam1->f_1), "ExtraBaseElementLocMap8", 64);
			return 1;
			break;
	}
	return 0;
}

struct<6> func_69(int iParam0, bool bParam1)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case -1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 1:
			Var0 = { -794.9184f, 339.6266f, 200.4135f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 2:
			Var0 = { -761.0982f, 317.6259f, 169.5963f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { -761.1888f, 317.6295f, 216.0503f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { -795.3856f, 340.0188f, 152.7941f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 61:
			Var0 = { -778.5056f, 332.3779f, 212.1968f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 5:
			Var0 = { -258.1807f, -950.6853f, 70.0239f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 6:
			Var0 = { -285.0051f, -957.6552f, 85.3035f };
			Var0.f_3 = { 0f, 0f, -110f };
			break;
		
		case 7:
			Var0 = { -1471.882f, -530.7484f, 62.34918f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 34:
			Var0 = { -1471.882f, -530.7484f, 49.72156f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 62:
			Var0 = { -1463.15f, -540.2369f, 74.2439f };
			Var0.f_3 = { 0f, 0f, -145f };
			break;
		
		case 35:
			Var0 = { -885.3702f, -451.4775f, 119.327f };
			Var0.f_3 = { 0f, 0f, 27.55617f };
			break;
		
		case 36:
			Var0 = { -913.0385f, -438.4284f, 114.3997f };
			Var0.f_3 = { 0f, 0f, -153.3093f };
			break;
		
		case 37:
			Var0 = { -892.5499f, -430.4789f, 88.25368f };
			Var0.f_3 = { 0f, 0f, 116.9193f };
			break;
		
		case 38:
			Var0 = { -35.0462f, -576.317f, 82.90739f };
			Var0.f_3 = { 0f, 0f, 160f };
			break;
		
		case 39:
			Var0 = { -10.3788f, -590.7431f, 93.02542f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 65:
			Var0 = { -22.2487f, -589.1461f, 80.2305f };
			Var0.f_3 = { 0f, 0f, 69.88f };
			break;
		
		case 40:
			Var0 = { -900.6311f, -376.7462f, 78.27306f };
			Var0.f_3 = { 0f, 0f, 26.92611f };
			break;
		
		case 41:
			Var0 = { -929.483f, -374.5104f, 102.2329f };
			Var0.f_3 = { 0f, 0f, -152.5531f };
			break;
		
		case 63:
			Var0 = { -914.4202f, -375.8189f, 114.4743f };
			Var0.f_3 = { 0f, 0f, -63f };
			break;
		
		case 42:
			Var0 = { -617.1647f, 64.6042f, 100.8196f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 43:
			Var0 = { -584.2015f, 42.7133f, 86.4187f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { -609.5665f, 50.2203f, 98.3998f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 73:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = { 0f, 0f, 11f };
			break;
		
		case 74:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = { 0f, 0f, -63.5f };
			break;
		
		case 75:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = { 0f, 0f, -71.5f };
			break;
		
		case 76:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = { 0f, 0f, 40.5f };
			break;
		
		case 77:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = { 0f, 0f, 6f };
			break;
		
		case 78:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = { 0f, 0f, -14.5f };
			break;
		
		case 79:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = { 0f, 0f, -29f };
			break;
		
		case 80:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = { 0f, 0f, 4.5f };
			break;
		
		case 81:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 82:
			Var0 = { 374.2012f, 416.9688f, 142.6977f };
			Var0.f_3 = { 0f, 0f, -14f };
			break;
		
		case 83:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 84:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 85:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 86:
			Var0 = { -1573.098f, -4085.806f, 9.7851f };
			Var0.f_3 = { 0f, 0f, 162f };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			Var0 = { 342.8157f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			Var0 = { 260.3297f, -997.4288f, -100f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 87:
			Var0 = { -1572.187f, -570.8315f, 109.9879f };
			Var0.f_3 = { 0f, 0f, -54f };
			break;
		
		case 88:
			Var0 = { -1383.954f, -476.7112f, 73.507f };
			Var0.f_3 = { 0f, 0f, 8f };
			break;
		
		case 89:
			Var0 = { -138.0029f, -629.739f, 170.2854f };
			Var0.f_3 = { 0f, 0f, -84f };
			break;
		
		case 90:
			Var0 = { -74.8895f, -817.6883f, 244.8508f };
			Var0.f_3 = { 0f, 0f, 70f };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			Var0 = { 1100.764f, -3159.384f, -34.9342f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			Var0 = { 1005.806f, -3157.67f, -36.0897f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 103:
			if (!bParam1)
			{
				Var0 = { -1576.571f, -569.7595f, 85.5f };
				Var0.f_3 = { 0f, 0f, 36.1f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 104:
			if (!bParam1)
			{
				Var0 = { -1571.254f, -566.5865f, 85.5f };
				Var0.f_3 = { 0f, 0f, -53.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 105:
			if (!bParam1)
			{
				Var0 = { -1568.098f, -571.9171f, 85.5f };
				Var0.f_3 = { 0f, 0f, -143.9f };
			}
			else
			{
				Var0 = { -1578.022f, -576.4251f, 104.2f };
				Var0.f_3 = { 0f, 0f, -144.04f };
			}
			break;
		
		case 106:
			if (!bParam1)
			{
				Var0 = { -1384.518f, -475.8657f, 56.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 107:
			if (!bParam1)
			{
				Var0 = { -1384.538f, -475.8829f, 48.1f };
				Var0.f_3 = { 0f, 0f, 98.7f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 108:
			if (!bParam1)
			{
				Var0 = { -1378.994f, -477.2481f, 56.1f };
				Var0.f_3 = { 0f, 0f, -81.1f };
			}
			else
			{
				Var0 = { -1391.245f, -473.9638f, 77.2f };
				Var0.f_3 = { 0f, 0f, 98.86f };
			}
			break;
		
		case 109:
			if (!bParam1)
			{
				Var0 = { -186.5683f, -576.4624f, 135f };
				Var0.f_3 = { 0f, 0f, 96.16f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 110:
			if (!bParam1)
			{
				Var0 = { -113.886f, -564.3862f, 135f };
				Var0.f_3 = { 0f, 0f, 110.96f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 111:
			if (!bParam1)
			{
				Var0 = { -134.6568f, -635.1774f, 135f };
				Var0.f_3 = { 0f, 0f, -9.04f };
			}
			else
			{
				Var0 = { -146.6167f, -596.6301f, 166f };
				Var0.f_3 = { 0f, 0f, -140f };
			}
			break;
		
		case 112:
			if (!bParam1)
			{
				Var0 = { -79.0479f, -822.6393f, 221f };
				Var0.f_3 = { 0f, 0f, 70f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 113:
			if (!bParam1)
			{
				Var0 = { -70.3086f, -819.5784f, 221f };
				Var0.f_3 = { 0f, 0f, 160f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
		
		case 114:
			if (!bParam1)
			{
				Var0 = { -79.9861f, -818.425f, 221f };
				Var0.f_3 = { 0f, 0f, -20f };
			}
			else
			{
				Var0 = { -73.904f, -821.6204f, 284f };
				Var0.f_3 = { 0f, 0f, -110f };
			}
			break;
	}
	return Var0;
}

int func_70(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 109;
			break;
	}
	return -1;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_72(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_73(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_73(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

int func_73(int iParam0, bool bParam1)
{
	if (Global_1589590 != func_47())
	{
		if (!func_75(Global_1589590))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1589590)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2423801[Global_1589590 /*413*/].f_195, 24) || func_74(Global_1589590))
				{
					return 1;
				}
			}
		}
	}
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 24);
}

int func_74(int iParam0)
{
	if (iParam0 != func_47())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 9);
	}
	return 0;
}

int func_75(int iParam0)
{
	if (iParam0 != func_47())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 2);
	}
	return 0;
}

int func_76(var uParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	
	if (iParam1 == 2 && !func_77(uParam0->f_31, -1))
	{
		if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_79(PLAYER::PLAYER_ID()), uParam0->f_1742.f_150, 1) <= 30f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(func_79(PLAYER::PLAYER_ID()), uParam0->f_1742.f_153, uParam0->f_1742.f_153.f_3, uParam0->f_1742.f_153.f_6, 0, 1))
			{
				return 1;
			}
		}
	}
	else
	{
		vVar0 = { func_79(PLAYER::PLAYER_ID()) };
		if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_79(PLAYER::PLAYER_ID()), uParam0->f_146.f_47, 1) <= 40f)
		{
			if ((OBJECT::IS_POINT_IN_ANGLED_AREA(func_79(PLAYER::PLAYER_ID()), uParam0->f_146.f_57[0 /*8*/], uParam0->f_146.f_57[0 /*8*/].f_3, uParam0->f_146.f_57[0 /*8*/].f_6, 0, 1) || OBJECT::IS_POINT_IN_ANGLED_AREA(func_79(PLAYER::PLAYER_ID()), uParam0->f_146.f_57[1 /*8*/], uParam0->f_146.f_57[1 /*8*/].f_3, uParam0->f_146.f_57[1 /*8*/].f_6, 0, 1)) || OBJECT::IS_POINT_IN_ANGLED_AREA(func_79(PLAYER::PLAYER_ID()), uParam0->f_146.f_57[2 /*8*/], uParam0->f_146.f_57[2 /*8*/].f_3, uParam0->f_146.f_57[2 /*8*/].f_6, 0, 1))
			{
				return 1;
			}
			else if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, uParam0->f_146.f_1592, 1) < (uParam0->f_146.f_1595 + fParam2) && (vVar0.z > uParam0->f_146.f_57[2 /*8*/].f_2 && vVar0.z < uParam0->f_146.f_57[2 /*8*/].f_3.f_2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_77(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

Vector3 func_78(int iParam0)
{
	vector3 vVar0;
	vector3 vVar6;
	
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			vVar6 = { Global_1049778[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			vVar6 = { 348.132f, -997.2031f, -100.1741f };
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			vVar6 = { 264.3808f, -997.7274f, -100.0087f };
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			vVar6 = { Global_1049778[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			vVar6 = { Global_1049778[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			vVar6 = { Global_1049778[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 83:
		case 84:
		case 85:
			vVar6 = { Global_1049778[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 86:
			func_65(iParam0, 3, &vVar0, 86, 0);
			vVar6 = { vVar0 };
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			vVar6 = { Global_1049778[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			vVar6 = { Global_1049778[iParam0 /*1951*/].f_146.f_47 };
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			vVar6 = { Global_1049778[iParam0 /*1951*/].f_146.f_47 };
			break;
	}
	return vVar6;
}

Vector3 func_79(var uParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_80(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 22:
		case 23:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 0;
		
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
		case 60:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
			return 1;
		
		default:
	}
	return 0;
}

int func_81()
{
	if (func_83(Global_1048576.f_1165))
	{
		if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_79(PLAYER::PLAYER_ID()), Global_3934119[Global_1048576.f_1165 /*2012*/].f_146.f_47, 1) <= 30f)
		{
			if (func_82(PLAYER::PLAYER_ID(), 0, 0))
			{
				if (!Global_2405070.f_2659 && !Global_2405070.f_2661)
				{
					return 0;
				}
			}
			if (func_76(&(Global_3934119[Global_1048576.f_1165 /*2012*/]), 1, 0))
			{
				if (!Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_661)
				{
					return 1;
				}
			}
		}
	}
	Global_1048576.f_1165++;
	if (Global_1048576.f_1165 >= 36)
	{
		Global_1048576.f_1165 = -1;
	}
	return 0;
}

int func_82(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2423801[iParam0 /*413*/].f_222 == 99)
	{
		if ((iParam2 && Global_2423801[iParam0 /*413*/].f_225 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2423801[iParam0 /*413*/].f_222 == 13)
		{
			return 0;
		}
	}
	return 1;
}

int func_83(int iParam0)
{
	if (func_84(iParam0))
	{
		return Global_2533312.f_2[iParam0];
	}
	return 0;
}

int func_84(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

int func_85()
{
	if (Global_1048576.f_1165 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_86()
{
	return Global_1668658.f_28;
}

int func_87()
{
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() && ((func_59() || func_60()) || (func_56() && func_91() <= 21))) && func_88())
	{
		return 1;
	}
	return 0;
}

int func_88()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_90();
	}
	return func_89(Global_4456448.f_130782);
}

int func_89(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4984[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_90()
{
	return Global_2448386.f_14;
}

int func_91()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_196;
}

int func_92()
{
	if (Global_2449169.f_6101 && !Global_2458661)
	{
		return 1;
	}
	return 0;
}

int func_93(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_47())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
		{
			return 1;
		}
	}
	return 0;
}

var func_94()
{
	return Global_2449169.f_1.f_2840;
}

void func_95()
{
	Global_2409250.f_14 = 0;
}

int func_96(int iParam0)
{
	if (iParam0 == func_97())
	{
		return Global_2409250.f_14;
	}
	return 0;
}

int func_97()
{
	return Global_2409250;
}

bool func_98()
{
	return Global_1668658.f_15 != -1;
}

void func_99(int iParam0)
{
	if (iParam0 == func_97())
	{
		Global_2409250.f_14 = 1;
	}
}

int func_100(int iParam0)
{
	if (func_102())
	{
		if (Global_2409250.f_2 == 0)
		{
			Global_2409250.f_6 = 1;
			Global_2409250.f_4 = iParam0;
			Global_2409250.f_2++;
		}
		if (Global_2409250.f_2 == 1)
		{
			if (!Global_2409250.f_6)
			{
				Global_2409250.f_2 = 0;
				func_101();
				return 1;
			}
		}
	}
	return 0;
}

void func_101()
{
	Global_2409250.f_8 = 1;
	Global_2409250.f_11 = 0;
	Global_2409250.f_12 = 0;
	Global_2409250.f_4 = 1;
	Global_2409250.f_9 = 0;
	Global_2409250.f_2 = 0;
}

int func_102()
{
	int iVar0;
	
	iVar0 = func_137();
	if ((((((iVar0 > -1 && !Global_1321304[iVar0 /*141*/].f_66 == 0) && !GAMEPLAY::IS_BIT_SET(Global_1321304[iVar0 /*141*/].f_102, 1)) && !GAMEPLAY::IS_BIT_SET(Global_1321304[iVar0 /*141*/].f_102, 6)) && !func_136(0)) && !func_136(31)) && func_103())
	{
		return 1;
	}
	return 0;
}

int func_103()
{
	int iVar0;
	
	iVar0 = func_135();
	if (((((((((((((((((((((((((((func_134() || func_133()) || func_124()) || (func_123() && !func_121())) || (func_56() && !func_120())) || func_119(PLAYER::PLAYER_ID())) || func_118(PLAYER::PLAYER_ID())) || func_117(PLAYER::PLAYER_ID())) || func_116()) || func_113()) || func_112()) || func_111()) || func_110()) || (func_109() && !func_120())) || (func_12() && !func_6(PLAYER::PLAYER_ID(), 1, 0))) || func_13(PLAYER::PLAYER_ID(), 0)) || Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 10) || Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 11) || Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 12) || Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 13) || Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 14) || Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 15) || Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 1) || Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 3) || Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 8) || Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 122) || func_108()) || (func_107() && (func_106() || func_104())))
	{
		return 0;
	}
	else if (iVar0 != -1)
	{
		if (((((((((Global_1589747[iVar0 /*790*/] == 10 || Global_1589747[iVar0 /*790*/] == 11) || Global_1589747[iVar0 /*790*/] == 12) || Global_1589747[iVar0 /*790*/] == 13) || Global_1589747[iVar0 /*790*/] == 14) || Global_1589747[iVar0 /*790*/] == 15) || Global_1589747[iVar0 /*790*/] == 1) || Global_1589747[iVar0 /*790*/] == 3) || Global_1589747[iVar0 /*790*/] == 8) || Global_1589747[iVar0 /*790*/] == 122)
		{
			return 0;
		}
	}
	return 1;
}

int func_104()
{
	if (func_105() == 1 || func_105() == 4)
	{
		return 1;
	}
	return 0;
}

int func_105()
{
	return Global_1312466.f_18;
}

int func_106()
{
	if (func_105() == 3 || func_105() == 2)
	{
		return 1;
	}
	return 0;
}

var func_107()
{
	return GAMEPLAY::IS_BIT_SET(Global_2449169.f_1.f_2809, 5);
}

int func_108()
{
	if (((Global_1654543 && !Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 6) && !Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_509 >= 0) && !Global_1654546)
	{
		return 1;
	}
	return 0;
}

var func_109()
{
	return Global_2448386.f_715;
}

var func_110()
{
	return Global_2448386.f_610;
}

var func_111()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 14);
}

var func_112()
{
	return Global_1574393;
}

int func_113()
{
	if (func_115(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID()))
	{
		if (func_91() == 26)
		{
			return 1;
		}
	}
	return 0;
}

bool func_114(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

bool func_115(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

var func_116()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_558.f_1, 0);
}

bool func_117(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 4;
}

bool func_118(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 6;
}

bool func_119(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 5;
}

bool func_120()
{
	return Global_2448386.f_36.f_50;
}

int func_121()
{
	if (func_122())
	{
		return 1;
	}
	if ((Global_2405070.f_26.f_6 > 0 && !Global_2405070.f_26.f_7) && !Global_2405070.f_26.f_4)
	{
		return 1;
	}
	return 0;
}

bool func_122()
{
	return Global_1312834;
}

var func_123()
{
	return Global_2405070.f_26.f_1;
}

int func_124()
{
	if (func_137() > -1)
	{
		if ((func_115(PLAYER::PLAYER_ID()) || func_114(PLAYER::PLAYER_ID())) || (func_130() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
		{
			if ((func_129(Global_1321304[func_137() /*141*/].f_66) || (func_127(Global_1321304[func_137() /*141*/].f_66) && func_126(Global_1321304[func_137() /*141*/].f_66))) || func_125(Global_1321304[func_137() /*141*/].f_66))
			{
				return 1;
			}
		}
	}
	return Global_2405070.f_26;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case joaat("monster3"):
		case 840387324:
		case -715746948:
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case 1909700336:
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case -2042350822:
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case 1742022738:
		case joaat("brutus"):
		case joaat("brutus2"):
		case 2038858402:
		case joaat("scarab"):
		case joaat("scarab2"):
		case -579747861:
		case joaat("dominator4"):
		case joaat("dominator5"):
		case -1293924613:
		case joaat("impaler2"):
		case joaat("impaler3"):
		case -1744505657:
		case joaat("imperator"):
		case joaat("imperator2"):
		case -755532233:
		case joaat("zr380"):
		case joaat("zr3802"):
		case -1478704292:
		case joaat("issi4"):
		case joaat("issi5"):
		case 1239571361:
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case -1374500452:
			return 1;
			break;
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
			return Global_262145.f_21122;
		
		case joaat("ardent"):
			return Global_262145.f_21123;
		
		case joaat("nightshark"):
			return Global_262145.f_21124;
		
		case joaat("insurgent3"):
			return Global_262145.f_21125;
		
		case joaat("technical3"):
			return Global_262145.f_21126;
		
		case joaat("halftrack"):
			return Global_262145.f_21127;
		
		case joaat("trailersmall2"):
			return Global_262145.f_21128;
		
		case joaat("tampa3"):
			return Global_262145.f_21129;
		
		case joaat("dune3"):
			return Global_262145.f_21130;
		
		case joaat("oppressor"):
			return Global_262145.f_21131;
		
		case joaat("vigilante"):
			return Global_262145.f_22210;
		
		case joaat("thruster"):
			return Global_262145.f_22767;
		
		case joaat("deluxo"):
			return Global_262145.f_22768;
			break;
		
		case 886810209:
			return Global_262145.f_22769;
		
		case joaat("riot2"):
			return Global_262145.f_22770;
		
		case joaat("chernobog"):
			return Global_262145.f_22771;
		
		case joaat("barrage"):
			return Global_262145.f_22772;
		
		case joaat("khanjali"):
			return Global_262145.f_22773;
		
		case joaat("comet4"):
			return Global_262145.f_22774;
		
		case joaat("savestra"):
			return Global_262145.f_22775;
		
		case joaat("revolter"):
			return Global_262145.f_22777;
		
		case joaat("avenger"):
			return Global_262145.f_22778;
		
		case joaat("volatol"):
			return Global_262145.f_22779;
		
		case joaat("akula"):
			return Global_262145.f_22780;
		
		case joaat("oppressor2"):
			return Global_262145.f_22781;
		
		case joaat("scramjet"):
			return Global_262145.f_22782;
	}
	if (iParam0 == joaat("viseris"))
	{
		return Global_262145.f_22776;
	}
	return 0;
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("oppressor"):
		case joaat("tampa3"):
		case joaat("trailersmall2"):
		case joaat("trailerlarge"):
		case joaat("technical3"):
		case joaat("insurgent3"):
		case joaat("phantom3"):
		case joaat("ardent"):
		case joaat("nightshark"):
		case joaat("hauler2"):
		case joaat("caddy3"):
		case joaat("vigilante"):
		case joaat("thruster"):
		case joaat("deluxo"):
		case 886810209:
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("barrage"):
		case joaat("khanjali"):
		case joaat("avenger"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("caracara"):
		case joaat("menacer"):
		case joaat("scramjet"):
		case joaat("oppressor2"):
			return 1;
		
		default:
	}
	if (func_128(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_128(int iParam0)
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case -398987772:
		case joaat("brutus"):
		case joaat("imperator2"):
		case -755532233:
		case -1374500452:
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case 840387324:
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return 1;
		
		default:
	}
	return 0;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("voltic2"):
		case joaat("ruiner2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("phantom2"):
		case joaat("technical2"):
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("rcbandito"):
			return 1;
		
		default:
	}
	return 0;
}

int func_130()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_132();
	}
	return func_131(Global_4456448.f_130782);
}

int func_131(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5002[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_132()
{
	return Global_2448386.f_16;
}

var func_133()
{
	return Global_1654521;
}

var func_134()
{
	return Global_2437022.f_502.f_59;
}

var func_135()
{
	return Global_2448386.f_652;
}

bool func_136(int iParam0)
{
	if (iParam0 < 32)
	{
		return GAMEPLAY::IS_BIT_SET(Global_2437022.f_502.f_1, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2437022.f_502.f_2, (iParam0 - 32));
}

int func_137()
{
	if (Global_2097152[func_138() /*12745*/].f_8178.f_2 >= 261)
	{
		Global_2097152[func_138() /*12745*/].f_8178.f_2 = -1;
		return -1;
	}
	return Global_2097152[func_138() /*12745*/].f_8178.f_2;
}

int func_138()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_139()
{
	var uVar0;
	
	func_146(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_145())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_144())
	{
		return 1;
	}
	if (func_143(157))
	{
		if (!func_142())
		{
			return 1;
		}
	}
	if (func_143(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_140() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_140()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_140()
{
	switch (func_141())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_141()
{
	return Global_25459;
}

bool func_142()
{
	return Global_2448386.f_587;
}

int func_143(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_144()
{
	return Global_2458191;
}

bool func_145()
{
	return Global_2448386.f_582;
}

void func_146(var uParam0)
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
				case -563286670:
					func_147(iVar0);
					break;
				
				case 566035618:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == -1989728150)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_147(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_148(uVar4, &bVar5))
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

int func_148(var uParam0, var uParam1)
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

void func_149()
{
	func_150();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_150()
{
	Global_4254407.f_9 = 0;
	func_151();
	if (CAM::DOES_CAM_EXIST(uLocal_94))
	{
		CAM::DESTROY_CAM(uLocal_94, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_95))
	{
		CAM::DESTROY_CAM(uLocal_95, 0);
	}
	if (iLocal_99)
	{
		if (func_6(PLAYER::PLAYER_ID(), 0, 1))
		{
			AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
}

void func_151()
{
	struct<38> Var0;
	
	Var0.f_4 = 1;
	Var0.f_5 = 1;
	Var0.f_18 = 1;
	Var0.f_22 = 1125515264;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_26 = -1;
	Global_2409250 = { Var0 };
}

bool func_152()
{
	return Global_1312749;
}

