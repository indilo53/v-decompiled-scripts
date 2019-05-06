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
	struct<65> Local_110 = { 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_175[32];
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	int iLocal_370 = 0;
	vector3 vLocal_371 = { 0f, 0f, 0f };
	struct<8> Local_374[15];
	vector3 vLocal_495 = { 0f, 0f, 0f };
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	vector3 vLocal_510 = { 0f, 0f, 0f };
	vector3 vLocal_513 = { 0f, 0f, 0f };
	var uLocal_516 = 0;
	int iLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	vLocal_371 = { 104.4489f, -1320.723f, 28.26478f };
	iLocal_503 = -1;
	iLocal_504 = -1;
	iLocal_506 = -1;
	iLocal_507 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1202(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1165(ScriptParam_0);
	}
	else
	{
		func_1112();
	}
	while (true)
	{
		func_1111();
		if (func_1104())
		{
			func_1112();
		}
		else if (func_1098(1))
		{
			func_1112();
		}
		Global_1666806.f_2 = Local_110.f_63;
		Global_1666806.f_3 = Local_110.f_64;
		switch (func_1097(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_1096() == 1)
				{
					if (func_1095())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
						{
						}
						func_1094();
						if (func_1093())
						{
							func_1078(159, 1, -1, 0);
							OBJECT::_0x78857FC65CADB909(1);
						}
						else
						{
							func_1078(159, 0, -1, 0);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
							{
								OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_12), 1, 1);
							}
						}
						if (func_1077() == 1)
						{
							STREAMING::REMOVE_IPL("CS3_07_MPGates");
							GAMEPLAY::SET_BIT(&uLocal_368, 4);
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), 1);
						}
						else if (func_1077() == 2)
						{
							func_1076();
						}
						else if (func_1077() == 3)
						{
							func_1075();
						}
						if (func_1074(1))
						{
							GAMEPLAY::SET_BIT(&uLocal_369, 5);
						}
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
						{
							ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_110.f_12), 1200);
						}
						func_1073();
						func_1066();
						Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 1;
					}
				}
				else if (func_1096() == 4)
				{
					Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_1096() == 1)
				{
					func_1065();
					func_1057();
					func_382();
					func_377();
					if (func_1093() || func_376())
					{
						func_218(&(Global_1358108.f_534), &Global_1358108, 27, &(Global_1358108.f_1), &(Global_1358108.f_117), -1, 0, 0);
					}
				}
				else if (func_1096() == 4)
				{
					Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				func_217();
				break;
			
			case 3:
				func_216(&(Local_110.f_52));
				if (func_215(&(Local_110.f_52)))
				{
					Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
				}
				func_217();
				break;
			
			case 2:
				func_217();
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
			
			case 4:
				func_1112();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_1096())
			{
				case 0:
					if (func_1077() != -1)
					{
						if ((func_205() && func_47()) && func_26())
						{
							func_25();
							func_23();
							if (func_1077() == 3)
							{
								GAMEPLAY::SET_BIT(&(Local_110.f_1), 6);
							}
							Local_110 = 1;
							Local_110.f_8 = NETWORK::PARTICIPANT_ID_TO_INT();
							Local_110.f_9 = PLAYER::PLAYER_ID();
							func_1078(159, 1, -1, 0);
							STATS::_0x6DEE77AFF8C21BD1(&(Local_110.f_63), &(Local_110.f_64));
						}
					}
					break;
				
				case 1:
					func_14();
					func_13();
					func_4();
					if (func_2())
					{
						Local_110 = 4;
					}
					else if (func_1())
					{
						Local_110 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2524719.f_4883.f_34)
	{
		Global_2524719.f_4883.f_34 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 0))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Local_110.f_51 > 0)
	{
		if (Local_110 != 4)
		{
		}
	}
	return 0;
}

void func_4()
{
	switch (Local_110.f_51)
	{
		case 0:
			Local_110.f_51 = 1;
			break;
		
		case 1:
			func_11();
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 7))
			{
				Local_110.f_51 = 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 20))
			{
				if (Local_110.f_5 != -1)
				{
					Local_110.f_51 = 2;
				}
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[0]))
				{
					if (func_10(Local_110.f_13[0]))
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_1), 6);
					}
				}
			}
			func_11();
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
	func_5();
}

void func_5()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 16))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 20))
		{
			if (!func_9(&(Local_110.f_60)))
			{
				func_8(&(Local_110.f_60), 0, 0);
			}
			else if (func_6(&(Local_110.f_60), func_7(), 0))
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_1), 20);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

int func_7()
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
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

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

int func_10(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

void func_11()
{
	if (!func_9(&(Local_110.f_54)))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 2))
		{
			func_8(&(Local_110.f_54), 0, 0);
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 4))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 3))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
			{
				if (func_6(&(Local_110.f_54), func_12(), 0))
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_1), 3);
				}
			}
		}
	}
}

int func_12()
{
	return Global_262145.f_12336;
}

void func_13()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_110.f_35[iVar0])
		{
			case 0:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[iVar0]))
				{
					if (func_1077() != 2)
					{
						Local_110.f_35[iVar0] = 3;
					}
					else
					{
						Local_110.f_35[iVar0] = 1;
					}
				}
				break;
			
			case 1:
				if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 11))
				{
					Local_110.f_35[iVar0] = 3;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 12))
				{
					Local_110.f_35[iVar0] = 3;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 13))
				{
					Local_110.f_35[iVar0] = 3;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 14))
				{
					Local_110.f_35[iVar0] = 3;
				}
				break;
			
			case 3:
				break;
		}
		iVar0++;
	}
}

void func_14()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	if (Local_110 != 4)
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
			{
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
				{
					iLocal_370 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
					if (func_1202(iVar4, 1, 1))
					{
						func_15(iLocal_370, 0);
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 2))
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_1), 2);
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 7))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 7))
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_1), 7);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 11))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 12))
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_1), 11);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 12))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 13))
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_1), 12);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 13))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 14))
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_1), 13);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 14))
					{
						if (Local_175[iLocal_370 /*6*/].f_2 != 0)
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_1), 14);
						}
					}
					if (iVar0 == -1)
					{
						if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 2))
						{
							iVar0 = iLocal_370;
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 4))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 3))
							{
								Local_110.f_6 = iVar4;
								GAMEPLAY::SET_BIT(&(Local_110.f_1), 1);
							}
						}
					}
					if (iVar1 == -1)
					{
						if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 8))
						{
							iVar1 = iLocal_370;
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 8))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 9))
						{
							Local_110.f_6 = iVar4;
							GAMEPLAY::SET_BIT(&(Local_110.f_1), 8);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 10))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 11))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 5))
							{
								Local_110.f_6 = iVar4;
							}
							GAMEPLAY::SET_BIT(&(Local_110.f_1), 10);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 15))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 15))
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_1), 15);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 18))
					{
						if (GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 16))
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_1), 18);
						}
					}
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 0))
					{
						if (!bVar2)
						{
							if ((((((((GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 3)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 4)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 5)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 8)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 9)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 10)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 15)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 18))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_175[iLocal_370 /*6*/].f_1, 1))
								{
									bVar2 = true;
								}
							}
							else
							{
								bVar2 = true;
							}
						}
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 5))
				{
					if (Local_110.f_9 > -1)
					{
						if (iVar3 == Local_110.f_9)
						{
							GAMEPLAY::SET_BIT(&(Local_110.f_1), 5);
						}
					}
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 5))
			{
				if (Local_110.f_9 > -1)
				{
					if (iVar3 == Local_110.f_9)
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_1), 5);
					}
				}
			}
			iVar3++;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 4))
			{
				if (Local_110.f_5 != iVar0)
				{
					Local_110.f_5 = iVar0;
					if (Local_110.f_5 == -1)
					{
					}
					else if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 16))
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_1), 16);
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 8))
		{
			if (Local_110.f_7 != iVar1)
			{
				Local_110.f_7 = iVar1;
				if (Local_110.f_7 == -1)
				{
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 16))
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_1), 16);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 0))
		{
			if (!bVar2)
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_1), 0);
			}
		}
	}
}

void func_15(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_1077() == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_2, uParam0))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[iParam1]))
			{
				if (func_21(Local_110.f_29[iParam1]))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(uParam0));
					if (!func_19(iVar0, 1))
					{
						bVar2 = true;
					}
					else if (Local_110.f_9 > -1)
					{
						iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9);
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
						{
							if (!func_16(iVar0, iVar1, 1))
							{
								bVar2 = true;
							}
							else
							{
								GAMEPLAY::SET_BIT(&(Local_110.f_2), uParam0);
							}
						}
					}
					if (bVar2)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_110.f_29[iParam1]), iVar0, 1);
						GAMEPLAY::SET_BIT(&(Local_110.f_2), uParam0);
					}
				}
			}
		}
	}
}

int func_16(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_18())
	{
		if (!bParam2)
		{
			if (func_17(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1625435[iParam0 /*560*/].f_11 != func_18())
		{
			return iParam1 == Global_1625435[iParam0 /*560*/].f_11;
		}
	}
	return 0;
}

int func_17(int iParam0, int iParam1)
{
	if (iParam1 != func_18())
	{
		if (iParam0 != func_18())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 != func_18())
			{
				if (Global_1625435[iParam0 /*560*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_18()
{
	return -1;
}

bool func_19(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_20(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_18();
}

int func_20(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_18())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_21(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_22(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_22(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_23()
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 17))
	{
		vVar0 = { 200f, 200f, 200f };
		vVar3 = { func_24() };
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar3 - vVar0, vVar3 + vVar0, 0, 1);
		GAMEPLAY::SET_BIT(&(Local_110.f_1), 17);
	}
}

Vector3 func_24()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = func_1077();
	iVar1 = func_25();
	vVar2 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 1:
			switch (iVar1)
			{
				case 0:
					vVar2 = { -575.3725f, 5373.049f, 69.2404f };
					break;
				
				case 1:
					vVar2 = { -3172.135f, 1110.661f, 19.8375f };
					break;
				
				case 2:
					vVar2 = { 872.9173f, 2863.337f, 55.7587f };
					break;
			}
			break;
		
		case 0:
			switch (iVar1)
			{
				case 0:
					vVar2 = { 2308.704f, 4886.404f, 40.8082f };
					break;
				
				case 1:
					vVar2 = { 1209.813f, 1859.069f, 77.9116f };
					break;
				
				case 2:
					vVar2 = { -1928.495f, 2061.418f, 139.8375f };
					break;
			}
			break;
		
		case 2:
			switch (iVar1)
			{
				case 0:
					vVar2 = { -3020.817f, 84.6034f, 10.6835f };
					break;
				
				case 1:
					vVar2 = { -1041.637f, 796.9575f, 166.2528f };
					break;
				
				case 2:
					vVar2 = { 690.2265f, 602.1689f, 127.9112f };
					break;
			}
			break;
		
		case 3:
			switch (iVar1)
			{
				case 0:
					vVar2 = { 1530.058f, 1727.639f, 108.9429f };
					break;
				
				case 1:
					vVar2 = { 783.2252f, 1278.739f, 359.2967f };
					break;
				
				case 2:
					vVar2 = { -1796.565f, 407.1885f, 112.4107f };
					break;
			}
			break;
	}
	return vVar2;
}

int func_25()
{
	int iVar0;
	int iVar1;
	
	if (Local_110.f_4 != -1)
	{
		return Local_110.f_4;
	}
	iVar0 = 0;
	iVar1 = func_1077();
	switch (iVar1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
			break;
	}
	Local_110.f_4 = iVar0;
	return Local_110.f_4;
}

int func_26()
{
	switch (Local_110.f_3)
	{
		case 1:
			func_28(0, joaat("rhino"), -2117.102f, 3292.854f, 31.8103f, 174.0669f, 0);
			break;
		
		case 2:
			func_28(0, joaat("fbi"), -1297.834f, -3399.368f, 12.9452f, 109.6593f, 0);
			func_28(1, joaat("superd"), -1303.505f, -3396.021f, 12.9452f, 152.3324f, 0);
			break;
		
		case 0:
			func_28(0, joaat("hexer"), -1057.896f, 4903.114f, 210.3096f, 127.0391f, 0);
			func_28(1, joaat("hexer"), -1060.599f, 4903.006f, 210.642f, 126.9637f, 0);
			break;
		
		case 3:
			return 1;
	}
	if (!func_27())
	{
		return 0;
	}
	return 1;
}

int func_27()
{
	switch (func_1077())
	{
		case 1:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
			{
				return 1;
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[1]))
			{
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_28(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	float fVar0;
	float fVar1;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[iParam0]))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_10, iParam0))
				{
					GAMEPLAY::CLEAR_AREA(vParam2, 5f, 1, 0, 0, 0);
					GAMEPLAY::SET_BIT(&(Local_110.f_10), iParam0);
				}
				if (func_31(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_30(&(Local_110.f_29[iParam0]), iParam1, vParam2, fParam5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_110.f_29[iParam0]), 1, 1);
						if (bParam6)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), 2);
						}
						else
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), 1);
						}
						VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), 1);
						VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), 0);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), 0, 0);
						VEHICLE::_0x9737A37136F07E75(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), 1);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), 0);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), 1);
						ROPE::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]));
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), 1, 1, 0);
						ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), 1);
						VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), 0);
						if (func_1077() == 1)
						{
							if (iParam1 == joaat("rhino"))
							{
								fVar0 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0])));
								fVar1 = func_29();
								fVar0 = (fVar0 * fVar1);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), SYSTEM::ROUND(fVar0), 0);
								ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), SYSTEM::ROUND(fVar0));
								VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), fVar0);
								VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), fVar0);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_110.f_29[iParam0]), fVar0);
							}
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_29()
{
	return Global_262145.f_12342;
}

int func_30(var uParam0, int iParam1, vector3 vParam2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	var uVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		GAMEPLAY::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	uVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, uParam5, iParam7, iParam6, iParam14);
	if (ENTITY::DOES_ENTITY_EXIST(uVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(uVar1);
		Global_2524719.f_6178 = uVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(uVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(uVar1, iParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(uVar1, iParam9);
			unk_0xB2E0C0D6922D31F2(uVar1, 1);
			if (bParam12)
			{
				unk_0xFC40CBF7B90CA77C(uVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(uVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_31(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405070.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (fParam14 > 0f)
	{
		if (func_41(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_32(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

int func_32(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1202(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_37(PLAYER::PLAYER_ID()), vParam0, 1) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1202(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_33(iVar1) || !bParam10) && !Global_2423801[iVar1 /*413*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_37(iVar1), vParam0, 1) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_37(iVar1), vParam0, 1) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_35(-1, 0) == 8;
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

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
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

int func_36()
{
	return Global_1312736;
}

Vector3 func_37(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_40() && Global_1589747[iVar0 /*790*/].f_761) && !func_39(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_38(iParam0);
}

Vector3 func_38(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_39(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_40()
{
	return Global_2448386.f_16;
}

int func_41(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_1202(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_33(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_42(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_38(iVar1), vParam0, 1) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0)
{
	if (func_46(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2503649 = { func_45(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2503649))
	{
		return 1;
	}
	if (func_43(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (!iVar0 == func_18())
	{
		if (iVar0 == func_44(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_44(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_18();
}

struct<13> func_45(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_46(var uParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2503649 = { func_45(uParam0) };
		Global_2503662 = { func_45(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2503649))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2503662))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2503579, 35, &Global_2503649);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2503614, 35, &Global_2503662);
				if (Global_2503579 == Global_2503614)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_47()
{
	switch (Local_110.f_3)
	{
		case 1:
			return 1;
		
		case 0:
		case 2:
			if (func_48(1, 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_48(0, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_48(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<35> Var1;
	vector3 vVar36;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_32 = -1082130432;
	Var1.f_34 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				vVar36 = { func_204() };
				if (!func_9(&(Local_110.f_58)))
				{
					func_8(&(Local_110.f_58), 0, 0);
				}
				if (func_49(vVar36, 5f, &vLocal_495, &uLocal_498, &Var1) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 19))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 19))
					{
						vLocal_495 = { vVar36 };
					}
					Local_110.f_12 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(-301062413, vLocal_495, 1, iVar0));
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_110.f_12, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_110.f_12), vLocal_495 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_110.f_12), 1);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_110.f_12), 1);
					if (bParam0)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[iParam1]))
						{
							if (!func_10(Local_110.f_13[iParam1]))
							{
								OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(NETWORK::NET_TO_OBJ(Local_110.f_12), NETWORK::NET_TO_PED(Local_110.f_13[iParam1]));
							}
						}
					}
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_110.f_12), vVar36 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 19))
				{
					if (func_6(&(Local_110.f_58), 15000, 0))
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_1), 19);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
	{
		return 1;
	}
	return 0;
}

int func_49(vector3 vParam0, float fParam3, var uParam4, var uParam5, var uParam6)
{
	struct<17> Var0;
	struct<18> Var34;
	vector3 vVar62;
	
	if (uParam6->f_5 > (fParam3 - 20f))
	{
		uParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34 = { vParam0 };
	Var34.f_3 = uParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_50(&Var34, uParam6, &Var0))
	{
		if ((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8)
		{
			vVar62 = { vParam0 - Var0[0 /*3*/] };
			if (vVar62.z > uParam6->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_50(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	vector3 vVar18;
	vector3 vVar21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar85;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405070.f_2449 == *uParam0 || !Global_2405070.f_2449.f_1 == uParam0->f_1) || !Global_2405070.f_2449.f_2 == uParam0->f_2) || !Global_2405070.f_2452 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405070.f_2463 == uParam0->f_8 || !Global_2405070.f_2463.f_1 == uParam0->f_8.f_1) || !Global_2405070.f_2463.f_2 == uParam0->f_8.f_2) || !Global_2405070.f_2466 == uParam0->f_11) || !Global_2405070.f_2466.f_1 == uParam0->f_11.f_1) || !Global_2405070.f_2466.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405070.f_2463 == uParam0->f_8 || !Global_2405070.f_2463.f_1 == uParam0->f_8.f_1) || !Global_2405070.f_2463.f_2 == uParam0->f_8.f_2) || !Global_2405070.f_2466 == uParam0->f_11) || !Global_2405070.f_2466.f_1 == uParam0->f_11.f_1) || !Global_2405070.f_2466.f_2 == uParam0->f_11.f_2) || !Global_2405070.f_2469 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405070.f_2447 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_2456))
			{
				if (Global_2405070.f_2456 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2453) < func_203(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2453) < func_203(0))
				{
					return 0;
				}
			}
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_202();
		}
		Global_2405070.f_2447 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2453) > func_203(0))
	{
		Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
		func_196();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		vVar8 = { *uParam0 };
	}
	else
	{
		vVar8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar11 = { vVar8 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar14 = { vVar8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405070.f_2447)
	{
		NETWORK::_0xFB8F2A6F3DF08CBE();
		PED::_0xFEE4A5459472A9F8();
		func_202();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_31(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_2405070.f_2470 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405070.f_2449 = { *uParam0 };
					Global_2405070.f_2452 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405070.f_2463 = { uParam0->f_8 };
					Global_2405070.f_2466 = { uParam0->f_11 };
					Global_2405070.f_2469 = 0f;
					Global_2405070.f_2449 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405070.f_2463 = { uParam0->f_8 };
					Global_2405070.f_2466 = { uParam0->f_11 };
					Global_2405070.f_2469 = uParam0->f_14;
					Global_2405070.f_2449 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_195(vVar8.x, vVar8.y);
			}
			Global_2405070.f_2448 = 1;
			Global_2405070.f_2447 = 1;
			Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
			Global_2405070.f_2453 = NETWORK::GET_NETWORK_TIME();
			Global_2405070.f_2456 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405070.f_2447)
	{
		if (Global_2405070.f_2448 == 1)
		{
			if (PATHFIND::_0xF7B79A50B905A30D(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2454) > 5000)
			{
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_194(Global_4456448.f_152990))
					{
						Var26.f_9 = 1;
					}
					func_169(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_168(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405070.f_2448 = 9;
				}
				else
				{
					Global_2405070.f_2448 = 2;
				}
			}
		}
		if (Global_2405070.f_2448 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar11, vVar14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2454) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar11, vVar14) == 0)
			{
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_34(PLAYER::PLAYER_ID(), 0))
				{
					Global_2405070.f_2448 = 3;
				}
				else
				{
					Global_2405070.f_2448 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2458) > 7000)
			{
				func_167(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405070.f_2448 == 3)
		{
			if (func_166() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2454) > 10000)
			{
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
				Global_2405070.f_2448 = 4;
			}
		}
		if (Global_2405070.f_2448 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_196();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::_0x5A6FFA2433E2F14C(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
								Global_2405070.f_2448 = 5;
							}
							break;
						
						case 1:
							func_165(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							if (NETWORK::_0x4BA92A18502BCA61(PLAYER::PLAYER_ID(), vVar18, vVar21, uVar24, *uParam1, iVar0))
							{
								Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
								Global_2405070.f_2448 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::_0x4BA92A18502BCA61(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
								Global_2405070.f_2448 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
					Global_2405070.f_2448 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_165(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405070.f_2448 == 5)
		{
			if (func_102(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405070.f_2474.f_5)
				{
					Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
					Global_2405070.f_2448 = 6;
				}
				else
				{
					Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_2405070.f_2448 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2454) > 20000)
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
				Global_2405070.f_2448 = 8;
			}
		}
		if (Global_2405070.f_2448 == 6)
		{
			iVar0 = 0;
			Global_2405070.f_2474.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_101(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_100(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
			Global_2405070.f_2448 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_165(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
					PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405070.f_2448 == 7)
		{
			if (func_102(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405070.f_2608[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_168(Global_2405070.f_2608[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2608[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_98(Global_2405070.f_2608[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2608[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2405070.f_2608[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2608[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_53(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2405070.f_2448 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2454) > 20000)
			{
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
				Global_2405070.f_2448 = 8;
			}
		}
		if (Global_2405070.f_2448 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_52(Global_2405070.f_483))
				{
				}
			}
			else if (Global_2405070.f_2474.f_2)
			{
				func_51(uParam2, &(Global_2405070.f_2474.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405070.f_2449 };
				func_53(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
			Global_2405070.f_2448 = 9;
		}
		if (Global_2405070.f_2448 == 9)
		{
			Global_2405070.f_2447 = 0;
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_202();
			return 1;
		}
		Global_2405070.f_2453 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_51(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_52(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_53(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar3;
	struct<56> Var4;
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	vector3 vVar67;
	vector3 vVar70;
	vector3 vVar73;
	float fVar76;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar67 = { *uParam5 };
						if (func_101(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_100(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_100(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_57(*uParam0, &vVar0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
	{
		vVar0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { uParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_55(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_9 = 1;
		}
		func_169(&vVar0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_54(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
		{
			if (func_57(*uParam0, &vVar0, iVar66, iParam3, 0))
			{
				if (!func_54(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar70 };
					}
					if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar63, 0, 0))
					{
						vVar0.z = uVar63;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar70 };
				}
				if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar63, 0, 0))
				{
					vVar0.z = uVar63;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405070.f_658 = 1;
}

int func_54(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_98(vParam0, vParam4, vParam7, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam4, vParam7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_55(int iParam0, bool bParam1)
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
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_18())
			{
				return func_56(Global_2423801[iParam0 /*413*/].f_309.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_56(int iParam0)
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

int func_57(vector3 vParam0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_97(vParam0, uParam3))
	{
		if (func_58(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam3, iParam4))
	{
		if (func_58(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_58(vector3 vParam0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_78(Global_2405070.f_506, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_65(*uParam3, 1056964608))
			{
				if (!func_59(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_59(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	vVar1 = { *uParam0 };
	iVar4 = func_64(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411257[iVar4])
	{
		if (func_63(vVar1, &(Global_2410113[iVar4 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_60(&vVar1, Global_2410113[iVar4 /*127*/][iVar0 /*7*/], Global_2410113[iVar4 /*127*/][iVar0 /*7*/].f_3, Global_2410113[iVar4 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411257[8])
	{
		if (func_63(vVar1, &(Global_2410113[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_60(&vVar1, Global_2410113[8 /*127*/][iVar0 /*7*/], Global_2410113[8 /*127*/][iVar0 /*7*/].f_3, Global_2410113[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_60(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	
	vVar0 = { vParam4 - vParam1 };
	vVar0.z = 0f;
	vVar3 = { *uParam0 - vParam1 };
	vVar3.z = 0f;
	vVar6 = { func_62(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_61(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_61(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *uParam0 + vVar6 };
		fVar16 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.z = 0f;
		vVar6 = { func_62(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.z = 0f;
		vVar29 = { *uParam0 - vVar20 };
		vVar29.z = 0f;
		vVar6 = { func_62(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_61(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_61(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *uParam0 + vVar6 };
		if (SYSTEM::VDIST(vVar10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar10 };
		}
		else
		{
			*uParam0 = { vVar13 };
		}
	}
}

float func_61(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_62(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

bool func_63(vector3 vParam0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_64(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411267[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411267[1])
	{
		if (Param0 < Global_2411271[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411267[2])
	{
		if (Param0 < Global_2411271[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411271[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411271[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_65(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	if (func_75(PLAYER::PLAYER_ID(), 1))
	{
		if (Global_4456448.f_59274 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_59274)
			{
				if (Global_4456448.f_59275[iVar0 /*80*/].f_7 != 0)
				{
					if (func_66(vParam0, Global_4456448.f_59275[iVar0 /*80*/], Global_4456448.f_59275[iVar0 /*80*/].f_6, Global_4456448.f_59275[iVar0 /*80*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_55666 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_55666)
			{
				if (Global_4456448.f_55669[iVar0 /*149*/].f_16 != 0)
				{
					if (func_66(vParam0, Global_4456448.f_55669[iVar0 /*149*/], Global_4456448.f_55669[iVar0 /*149*/].f_3, Global_4456448.f_55669[iVar0 /*149*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_79604 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_79604)
			{
				if (Global_4456448.f_79608[iVar0 /*217*/].f_12 != 0)
				{
					if (func_66(vParam0, Global_4456448.f_79608[iVar0 /*217*/], Global_4456448.f_79608[iVar0 /*217*/].f_3, Global_4456448.f_79608[iVar0 /*217*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_66(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (SYSTEM::VDIST(vParam0, vParam3) < func_74(iParam7, 1008981770))
	{
		func_67(vParam3, fParam6, iParam7, &vVar0, &vVar3, &uVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar3, uVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_67(vector3 vParam0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	vVar0 = { 0f, 1f, 0f };
	func_73(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_68(iParam4, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.z = (vVar9.z - ((0.5f * GAMEPLAY::ABSF((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.z = (vVar12.z + ((0.5f * GAMEPLAY::ABSF((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*uParam6 = { vVar12 };
	*uParam7 = GAMEPLAY::ABSF((vVar6.x - vVar3.x));
}

void func_68(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		GAMEPLAY::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_71(iParam0);
		if (iVar0 != 0)
		{
			func_69(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_69(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_70(iParam0, &Global_1315792);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315792[iVar0]))
		{
			GAMEPLAY::GET_MODEL_DIMENSIONS(Global_1315792[iVar0], &(Global_1315796[iVar0 /*3*/]), &(Global_1315803[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315796[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315803[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315796[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315803[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315796[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315803[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315796[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315803[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315810[iVar0] = (Global_1315803[iVar0 /*3*/] - Global_1315796[iVar0 /*3*/]);
		Global_1315813[iVar0] = (Global_1315803[iVar0 /*3*/].f_1 - Global_1315796[iVar0 /*3*/].f_1);
		Global_1315816[iVar0] = (Global_1315803[iVar0 /*3*/].f_2 - Global_1315796[iVar0 /*3*/].f_2);
		if (Global_1315810[iVar0] > Global_1315819)
		{
			Global_1315819 = Global_1315810[iVar0];
		}
		if (Global_1315816[iVar0] > Global_1315820)
		{
			Global_1315820 = Global_1315816[iVar0];
		}
		iVar0++;
	}
	Global_1315821 = (Global_1315819 * -0.5f);
	Global_1315824 = (Global_1315819 * 0.5f);
	Global_1315821.f_1 = ((((0.5f * Global_1315813[0]) + Global_1315813[1]) + Global_1315792.f_3) * -1f);
	Global_1315824.f_1 = (0.5f * Global_1315813[0]);
	Global_1315821.f_2 = (Global_1315816[0] * -0.5f);
	Global_1315824.f_2 = (Global_1315816[0] * 0.5f);
	*uParam1 = { Global_1315821 };
	*uParam2 = { Global_1315824 };
}

void func_70(int iParam0, var uParam1)
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

int func_71(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_72(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_73(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_74(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_68(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

int func_75(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_76(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589747[iParam0 /*790*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_76(int iParam0)
{
	return func_77(iParam0);
}

var func_77(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

int func_78(vector3 vParam0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_91(vParam0))
	{
		if (func_90(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_81(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_80(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_79(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_79(var uParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_73(&vVar0, 0f, 0f, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_73(&vVar0, 0f, 0f, fParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar3.x;
	uParam0->f_1 = vVar3.y;
}

int func_80(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405070.f_2719[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_81(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_86(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_83(&vVar2, &(Global_2405070.f_362[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_86(vVar2, &uVar1) || func_82(vVar2))
			{
				vVar2 = { *uParam0 };
				func_83(&vVar2, &(Global_2405070.f_362[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_82(vector3 vParam0)
{
	float fVar0;
	
	if (Global_2405070.f_587 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405070.f_584);
		if (fVar0 < Global_2405070.f_587)
		{
			return 1;
		}
	}
	return 0;
}

void func_83(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_85(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405070.f_2717) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_85(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_79(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405070.f_2717) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_84(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_60(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_84(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.y = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.y = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.y = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam7);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_85(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam10)
	{
		case 0:
			func_79(&vParam0, vParam3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_84(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		
		case 2:
			func_60(&vParam0, vParam3, vParam6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_168(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_98(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam3, vParam6, fParam9, 0, 1))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_86(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_89())
	{
		return 0;
	}
	iVar1 = func_88();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405070.f_362[iVar0 /*12*/].f_9 == 1)
		{
			if (func_87(vParam0, &(Global_2405070.f_362[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_87(vector3 vParam0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_168(vParam0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405070.f_2717) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_98(vParam0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(vParam0.z < uParam3->f_2 && vParam0.z < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(vParam0.z > uParam3->f_2 && vParam0.z > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_88()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405070.f_362[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_89()
{
	return Global_1668658.f_28;
}

int func_90(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2409942[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409942[iVar0 /*17*/].f_16))
			{
				if (func_87(*uParam0, &(Global_2409942[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409942[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409942[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_83(&vVar1, &(Global_2409942[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_90(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_83(&vVar1, &(Global_2409942[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_91(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405070.f_509 && !Global_2405070.f_510)
	{
		if (!Global_2405070.f_44.f_314)
		{
			if (!func_95(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_94(vParam0, 1008981770))
			{
				if (!func_90(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_90(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_93(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_92(&(Global_2405070.f_44[iVar0 /*12*/])) };
					if (!func_90(&vVar1, 0, 0, 0, 1))
					{
						if (!func_90(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_92(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_93(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405070.f_44[iVar0 /*12*/].f_9)
		{
			if (func_87(vParam0, &(Global_2405070.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_94(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405070.f_44[iVar0 /*12*/].f_9)
		{
			if (func_87(vParam0, &(Global_2405070.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_95(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_96(iParam0) != 0;
	}
	return func_75(iParam0, bParam1);
}

int func_96(int iParam0)
{
	if (func_1202(iParam0, 0, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_97(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405070.f_2245 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_2245)
		{
			fVar3 = SYSTEM::VDIST(Global_2405070.f_2246[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405070.f_2246[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_98(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_99(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return 1;
	}
	return 0;
}

void func_99(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_100(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.y = vParam0.y;
		vVar0.y = vParam3.y;
	}
	else
	{
		vVar3.y = vParam3.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.z = vParam0.z;
		vVar0.z = vParam3.z;
	}
	else
	{
		vVar3.z = vParam3.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar3 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_101(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_102(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2405070.f_2474.f_1 == 0 && Global_2405070.f_2474 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::_0x3C891A251567DFCE(&(Global_2405070.f_2474.f_1)))
			{
				case 0:
					func_163(uParam1, uParam2);
					if (!Global_2405070.f_2474.f_2)
					{
						if (uParam2->f_7 && Global_2405070.f_549.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
							}
							if (uParam1->f_5 && func_52(Global_2405070.f_483))
							{
								if (!Global_2405070.f_2474.f_5)
								{
									Global_2405070.f_2474.f_5 = 1;
								}
								else
								{
									func_53(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_53(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_163(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_163(uParam1, uParam2);
					Global_2405070.f_2474.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_163(uParam1, uParam2);
				if (!Global_2405070.f_2474.f_2)
				{
					Global_2405070.f_2474.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_160(Global_2405070.f_549, &(Global_2405070.f_2474.f_57), &(Global_2405070.f_2474.f_90));
	}
	if (uParam2->f_7 && !Global_2405070.f_2474.f_4)
	{
		Global_2405070.f_2474.f_4 = 1;
		func_110(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405070.f_2474.f_1 > 0 || Global_2405070.f_2474 > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405070.f_2474.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405070.f_2474.f_3)
					{
						iVar4 = Global_2405070.f_2474.f_3 + 1;
					}
					if (iVar4 > (Global_2405070.f_2474.f_1 - 1))
					{
						iVar4 = (Global_2405070.f_2474.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, &vVar0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = NETWORK::_0x6C34F1208B8923FD(iVar4);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar4, &iVar5);
					}
					func_110(vVar0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405070.f_2474.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2405070.f_2474.f_1;
		}
		if (Global_2405070.f_2474.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405070.f_2871)
			{
				func_104(&(Global_2405070.f_2474.f_6[0 /*10*/]), &(Global_2405070.f_2474.f_6[1 /*10*/]), &(Global_2405070.f_2474.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_52(Global_2405070.f_483))
			{
				if (Global_2405070.f_2474.f_2)
				{
					func_51(uParam0, &(Global_2405070.f_2474.f_6));
					func_103(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
					func_53(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_103(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405070.f_2474.f_2)
			{
				func_51(uParam0, &(Global_2405070.f_2474.f_6));
				func_103(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2405070.f_2474.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_59(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_103(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
					func_53(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_103(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
				func_53(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_103(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
		if (uParam1->f_5 && func_52(Global_2405070.f_483))
		{
			if (!Global_2405070.f_2474.f_5)
			{
				Global_2405070.f_2474.f_5 = 1;
			}
			else
			{
				func_53(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_53(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_103(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_103(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405070.f_2608[(3 - iVar0) /*3*/] = { Global_2405070.f_2608[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405070.f_2608[0 /*3*/] = { vParam0 };
}

void func_104(var uParam0, var uParam1, var uParam2)
{
	if (func_52(Global_2405070.f_483) && func_109() < 4096)
	{
		func_108(uParam0, 0f);
		func_108(uParam1, uParam0->f_2);
		func_108(uParam2, uParam1->f_2);
	}
	else
	{
		func_107(uParam0);
		func_106(uParam2, uParam0->f_4);
		func_105(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_105(var uParam0, vector3 vParam1, vector3 vParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2407969[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_2407969[iVar0 /*10*/].f_4, vParam4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407969[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_106(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2407969[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2407969[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_107(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			if (Global_2407969[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2407969[iVar0 /*10*/].f_1;
				Var2 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_108(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			if (Global_2407969[iVar0 /*10*/].f_2 < fVar1 && Global_2407969[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2407969[iVar0 /*10*/].f_2;
				Var2 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_109()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2407969[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_110(vector3 vParam0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar20;
	var uVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2405070.f_483 == 1)
		{
			if (GAMEPLAY::ABSF((Global_2405070.f_506.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_156(PLAYER::PLAYER_ID()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_155(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!PED::_0x68772DB2B2526F9F(PLAYER::PLAYER_PED_ID(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::_0x68772DB2B2526F9F(PLAYER::PLAYER_PED_ID(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_41(vParam0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam5->f_13[iVar11 /*3*/]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(uParam5->f_23) > 0f && SYSTEM::VMAG(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, 1))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_149(vParam0, fParam3, uParam4->f_15, func_154(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405070.f_3;
		}
	}
	else if (!func_146(vParam0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_32(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_32(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405070.f_690)
		{
			vVar12 = { Global_2405070.f_506 };
			if (Global_2405070.f_483 == 26)
			{
				vVar12 = { Global_2405070.f_549.f_18 };
			}
			if (!func_80(vParam0, 0.5f))
			{
				if (func_91(vVar12))
				{
					if (!func_90(&vParam0, 0, 0, 0, 1) && !func_145(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_145(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_144(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_143(PLAYER::PLAYER_ID()) && func_141(PLAYER::PLAYER_ID())))
		{
			if (!func_140(&vParam0, &(Global_2405070.f_2474.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_141(PLAYER::PLAYER_ID()))
		{
			if (!func_139(vParam0, &(Global_2405070.f_2474.f_57), &(Global_2405070.f_2474.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_138(vParam0))
	{
		if (uParam4->f_5)
		{
			if (func_52(Global_2405070.f_483))
			{
				if (func_94(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_137(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405070.f_44.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405070.f_690)
		{
			if (!func_81(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_59(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_93(vParam0, 1008981770);
		if (iVar16 > -1)
		{
			func_136(vParam0, &vVar17, &vVar20, &uVar23);
			if (!func_131(&(Global_2405070.f_44[iVar16 /*12*/]), vVar17, vVar20, uVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_65(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_130(vParam0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405070.f_2871 && uParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_122(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_122(vParam0, Global_2405070.f_2449, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_52(Global_2405070.f_483) && iVar8 < 4096)
			{
				Var25.f_2 = func_120(vParam0);
			}
			uVar7 = func_115(vParam0, 1, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = fParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_114(Var25);
			Global_2405070.f_2474.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405070.f_2474.f_6[iVar24 /*10*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_122(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_122(vParam0, Global_2405070.f_2449, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_52(Global_2405070.f_483) && iVar8 == Global_2405070.f_2474.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_120(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405070.f_2474.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = fParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_113(Var25, iVar24);
							Global_2405070.f_2474.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405070.f_2474.f_6[iVar24 /*10*/] || (iVar8 == Global_2405070.f_2474.f_6[iVar24 /*10*/] && fVar0 > Global_2405070.f_2474.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_113(Var25, iVar24);
						Global_2405070.f_2474.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_112(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_115(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_111(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_111(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405070.f_2474.f_6[iVar24 /*10*/] || (iVar8 == Global_2405070.f_2474.f_6[iVar24 /*10*/] && fVar3 > Global_2405070.f_2474.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_113(Var25, iVar24);
						Global_2405070.f_2474.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_111(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_112(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_1202(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1202(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_33(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam7 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

void func_113(struct<10> Param0, int iParam10)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405070.f_2474.f_6[iParam10 /*10*/] };
	Global_2405070.f_2474.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_113(Var0, iParam10 + 1);
	}
}

void func_114(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;
	
	Var1.f_2 = 1176256410;
	iVar11 = func_109();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] < iVar11)
		{
			Global_2407969[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] == 0)
		{
			Global_2407969[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			if (Global_2407969[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2407969[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2407969[iVar13 /*10*/] = { Param0 };
	}
}

float func_115(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_1202(iVar11, 1, 1))
		{
			if (!iVar11 == PLAYER::PLAYER_ID() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_116(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar11) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar11) == -1 || !func_95(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar11) || !bParam6)
					{
						if (func_33(iVar11))
						{
							vVar5 = { func_38(iVar11) };
							if (!iVar11 == PLAYER::PLAYER_ID())
							{
								vVar8 = { unk_0x125E6D638B8605D4(PLAYER::GET_PLAYER_PED(iVar11)) };
							}
							else
							{
								vVar8 = { vVar5 };
							}
							if (!bParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.z = vParam0.z;
								}
							}
							fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, 1);
							fVar2 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_116(int iParam0)
{
	if (func_1202(iParam0, 0, 1))
	{
		if (!func_118(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_75(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_117(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_75(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_42(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_117(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 0);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 1);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_118(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_119())
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

bool func_119()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

float func_120(vector3 vParam0)
{
	var uVar0;
	
	return func_121(vParam0, &(Global_2405070.f_44), &uVar0);
}

float func_121(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405070.f_2717) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_122(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_111(SYSTEM::VDIST(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_115(vParam0, 1, 0, 0, 1);
	fVar0 = func_111(fVar4, 0f, func_129(), func_127(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_125(vParam0);
	fVar0 = func_111(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_95(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_124(vParam0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_111(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_123(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_111(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_111(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_111(SYSTEM::VDIST(Global_2405070.f_506, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_123(vector3 vParam0, var uParam3, var uParam4)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar5, &uVar4, 1, 1077936128, 0);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar3))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(uVar3, &vVar0);
		*uParam3 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam4 = GAMEPLAY::ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_124(vector3 vParam0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_1202(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_1202(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam3) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam3) == -1))
					{
						if (Global_2417554.f_261[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417554.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_125(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar2], 0))
			{
				if (func_126(uVar6[iVar2]))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar6[iVar2], 1) };
					fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_126(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0xCC6E3B6BB69501F1(Global_1574948[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1574948[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xCC6E3B6BB69501F1(Global_1574658[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1574658[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_127()
{
	if (func_128())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405070.f_44.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405070.f_44.f_67)) || Global_2405070.f_44.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_128()
{
	if (Global_2405070.f_44.f_65 && !Global_2405070.f_44.f_301)
	{
		if (!func_118(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_129()
{
	if (func_128())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405070.f_44.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405070.f_44.f_67)) || Global_2405070.f_44.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_130(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam7)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_131(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_135(*uParam0, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_134(*uParam0, uParam0->f_3, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_132(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_132(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, vector3 vParam10, var uParam13)
{
	vector3 vVar0[8];
	int iVar25;
	
	func_133(vParam0, vParam3, fParam6, &vVar0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar25 /*3*/], vParam7, vParam10, uParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_133(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	
	if (vParam0.z == vParam3.z)
	{
		vParam3.z = (vParam3.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam3 };
	vVar3 = { func_62(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar3 = { vVar3 / FtoV(SYSTEM::VMAG(vVar3)) };
	vVar3 = { vVar3 * FtoV((fParam6 * 0.5f)) };
	if (vParam0.z > vParam3.z)
	{
		uVar6 = vParam3.z;
		uVar7 = vParam0.z;
	}
	else
	{
		uVar6 = vParam0.z;
		uVar7 = vParam3.z;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, vParam3.y, vParam3.x) + vVar3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, vParam3.y, vParam3.x) + vVar3 };
}

int func_134(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, var uParam12)
{
	vector3 vVar0[8];
	int iVar25;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam3.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam3.y, vParam3.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam3.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam3.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam3.x, vParam0.y, vParam3.z };
	vVar0[6 /*3*/] = { vParam3.x, vParam3.y, vParam3.z };
	vVar0[7 /*3*/] = { vParam3.x, vParam3.y, vParam0.z };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar25 /*3*/], vParam6, vParam9, uParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_135(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10)
{
	vector3 vVar0[4];
	int iVar13;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam3, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam3), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam3) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar13 /*3*/], vParam4, vParam7, uParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_136(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	vVar1 = { vParam0 };
	iVar4 = func_64(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411257[iVar4])
	{
		if (func_63(vVar1, &(Global_2410113[iVar4 /*127*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410113[iVar4 /*127*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410113[iVar4 /*127*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410113[iVar4 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411257[8])
	{
		if (func_63(vVar1, &(Global_2410113[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410113[8 /*127*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410113[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410113[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_137(vector3 vParam0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2405070.f_44.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2405070.f_44.f_56))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				uVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(uVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(uVar0);
					if (!iVar1 == Global_2405070.f_44.f_57)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_138(vector3 vParam0)
{
	switch (Global_2405070.f_2470)
	{
		case 0:
			return func_168(vParam0, Global_2405070.f_2449, Global_2405070.f_2452, 0, 0);
			break;
		
		case 1:
			return func_98(vParam0, Global_2405070.f_2463, Global_2405070.f_2466, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_2405070.f_2463, Global_2405070.f_2466, Global_2405070.f_2469, 0, 1);
			break;
	}
	return 0;
}

int func_139(vector3 vParam0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(uParam3[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = { *(uParam4[iVar1 /*10*/]) };
		vVar5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_140(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_79(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_141(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_142(iParam0))
			{
				if (Global_1589747[iParam0 /*790*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_142(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196 != 0;
}

int func_143(int iParam0)
{
	if (func_75(iParam0, 1))
	{
		if (Global_1589747[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_144(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2405070.f_2608[iVar0 /*3*/], vParam0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_145(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;
	
	if (func_82(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_79(&vVar1, Global_2405070.f_584, Global_2405070.f_587, 1036831949, 0, fVar4);
			if (func_86(vVar1, &uVar0) || func_82(vVar1))
			{
				vVar1 = { *uParam0 };
				func_79(&vVar1, Global_2405070.f_584, Global_2405070.f_587, 1036831949, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_146(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_148(vParam0, fParam3, iParam4, iParam5, 0) || func_147(vParam0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_147(vector3 vParam0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_66(vParam0, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_1202(iVar2, 0, 1) && func_1202(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_148(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_1202(iVar1, 0, 1) && func_1202(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1202(iVar1, 0, 1) && func_1202(iParam4, 0, 1))
				{
					if (Global_2417554.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417554.f_131[iVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_38(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417554.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417554.f_131[iVar0 /*3*/], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1202(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_38(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_149(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, int iParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405070.f_3 = 0;
	if (!func_146(vParam0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2405070.f_3++;
		if (bParam5)
		{
			if (func_31(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
				if (!func_153(vParam0, fParam12))
				{
					Global_2405070.f_3++;
					if (!func_65(vParam0, 1056964608))
					{
						Global_2405070.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_31(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
				if (!func_153(vParam0, fParam12))
				{
					Global_2405070.f_3++;
					if (!func_150(vParam0, fParam3, fParam9, iParam10, 1084227584))
					{
						Global_2405070.f_3++;
						if (!func_65(vParam0, 1056964608))
						{
							Global_2405070.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			}
		}
		else if (func_31(vParam0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			if (!func_153(vParam0, fParam12))
			{
				Global_2405070.f_3++;
				if (!func_150(vParam0, fParam3, fParam9, iParam10, fParam11))
				{
					Global_2405070.f_3++;
					if (!func_65(vParam0, 1056964608))
					{
						Global_2405070.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
		}
	}
	return 0;
}

int func_150(vector3 vParam0, float fParam3, float fParam4, var uParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_1202(iVar1, 1, 1) && func_33(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_152(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_151(func_38(iVar1), vParam0, fParam3, fParam4, uParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_151(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, var uParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	vVar0.x = SYSTEM::SIN(fParam6);
	vVar0.y = SYSTEM::COS(fParam6);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam7, fParam7, fParam7) };
	vVar3 = { vParam3 + vVar0 };
	vVar3.z = vParam3.z;
	vVar3.z = (vVar3.z + fParam9);
	vParam3.z = (vParam3.z + fParam9);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam3, vVar3, uParam8, 0, 1);
}

bool func_152(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(uParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(uParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(uParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(uParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(uParam0) == iParam2;
}

int func_153(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_1202(iVar1, 1, 1) && func_33(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_95(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_152(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_38(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_154(int iParam0)
{
	if ((Global_2405070.f_483 == 9 || Global_2405070.f_483 == 9) || (Global_2405070.f_483 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_155(vector3 vParam0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_1202(iVar1, 1, 1))
			{
				if ((!func_34(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_38(iVar1), vParam0, 1) <= (fVar2 + fParam3))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_156(int iParam0)
{
	if (((func_95(iParam0, 1) || func_159(iParam0)) || func_158(iParam0, 0)) || func_157(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_157(int iParam0)
{
	if (!func_1202(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_35;
}

int func_158(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_159(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/] != -1;
	}
	return 0;
}

void func_160(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	vector3 vVar17;
	vector3 vVar20;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_162(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5945[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5945[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_162(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5991[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_5991[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_162(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar17 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar17, vParam0) < SYSTEM::VDIST(vVar20, vParam0))
			{
				Var7 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_161(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_161(var uParam0, var uParam1, int iParam2)
{
	Global_2412262 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_161(&Global_2412262, uParam1, iParam2 + 1);
	}
}

void func_162(var uParam0, var uParam1, int iParam2)
{
	Global_2412258 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_162(&Global_2412258, uParam1, iParam2 + 1);
	}
}

void func_163(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	if (Global_2405070.f_2245 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_2245)
		{
			if (func_164(Global_2405070.f_2246[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2405070.f_2246[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405070.f_2246[iVar0 /*4*/] };
					fVar4 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_110(Global_2405070.f_2246[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2405070.f_2474++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405070.f_2871)
	{
		func_104(&(Global_2405070.f_2474.f_6[0 /*10*/]), &(Global_2405070.f_2474.f_6[1 /*10*/]), &(Global_2405070.f_2474.f_6[2 /*10*/]));
	}
}

int func_164(vector3 vParam0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_54(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_54(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_165(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_99(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0.5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*uParam8 = (fVar0 * 0.5f);
}

var func_166()
{
	return Global_1310987.f_4;
}

void func_167(var uParam0, var uParam1)
{
	func_202();
	func_195(uParam0, uParam1);
}

bool func_168(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		vParam0.z = 0f;
		vParam3.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
}

void func_169(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405070.f_1737 > 0)
	{
		iVar0 = 0;
		while (func_191(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_170(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_170(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	var uVar30;
	vector3 vVar31;
	float fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_78(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_190(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412272.f_162 = 0;
	Global_2412272.f_163 = 0;
	Global_2412272.f_164 = -99;
	Global_2412272.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412272[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412272.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_71(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &vVar1);
			bVar12 = false;
			if (Global_2412272.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412272.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::_GET_IS_SLOW_ROAD_FLAG(iVar8)) || PATHFIND::_GET_SUPPORTS_GPS_ROUTE_FLAG(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_145(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_189(vVar1))
									{
										vVar1 = { func_185(vVar1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_65(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_184(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_190(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_180(vVar1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_78(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_179(vVar1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_31(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_31(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_177(vVar1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_176(vVar1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412272.f_162)
																										{
																											Global_2412272[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412272.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412272.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412272.f_162 == 0)
																									{
																										Global_2412272[0 /*3*/] = { vVar1 };
																										Global_2412272.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412272.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412272[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_175(vVar1, fVar4, iVar16);
																													iVar16 = Global_2412272.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412272.f_162++;
																									if (Global_2412272.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412272.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412272[Global_2412272.f_162 /*3*/] = { vVar1 };
																									Global_2412272.f_121[Global_2412272.f_162] = fVar4;
																									Global_2412272.f_162++;
																									if (func_184(vVar1, uParam2))
																									{
																										Global_2412272.f_163++;
																									}
																									if (Global_2412272.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412272.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412272.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412272[0 /*3*/] };
						*uParam1 = Global_2412272.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412272.f_163 > 0 && !Global_2412272.f_163 == Global_2412272.f_162)
						{
							func_173(0, uParam2);
						}
						iVar26 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2412272.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412272[0 /*3*/] };
						uVar30 = Global_2412272.f_121[0];
						Global_2412272[0 /*3*/] = { Global_2412272[iVar26 /*3*/] };
						Global_2412272.f_121[0] = Global_2412272.f_121[iVar26];
						Global_2412272[iVar26 /*3*/] = { vVar27 };
						Global_2412272.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412272[0 /*3*/] };
						*uParam1 = Global_2412272.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_172(iVar15, *uParam0, &iVar0, &vVar1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						vVar31 = { vVar1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_78(uParam2->f_35, &vVar31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_190(&vVar31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_171(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412272.f_164 = iVar8;
	}
	return 0;
}

void func_171(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_146(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_172(int iParam0, vector3 vParam1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_185(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_189(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_173(int iParam0, var uParam1)
{
	if (!func_184(Global_2412272[iParam0 /*3*/], uParam1))
	{
		Global_2412272.f_162 = (Global_2412272.f_162 - 1);
		func_174(iParam0);
		if (Global_2412272.f_162 > Global_2412272.f_163)
		{
			func_173(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_173(iParam0 + 1, uParam1);
	}
}

void func_174(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412272[iParam0 /*3*/] = { Global_2412272[iParam0 + 1 /*3*/] };
			Global_2412272.f_121[iParam0] = Global_2412272.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_175(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;
	
	vVar0 = { Global_2412272[iParam4 /*3*/] };
	uVar3 = Global_2412272.f_121[iParam4];
	Global_2412272[iParam4 /*3*/] = { vParam0 };
	Global_2412272.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412272.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_175(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_176(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_116(iVar5))
		{
			vVar1 = { func_38(iVar5) };
			fVar7 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_177(vector3 vParam0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	vector3 vVar5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_1202(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_33(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_42(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(uVar3) && !ENTITY::IS_ENTITY_DEAD(uVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(uVar3);
										vVar5 = { ENTITY::GET_ENTITY_COORDS(uVar3, 0) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(uVar3);
										if (func_178(vParam0, fParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_66(func_38(iVar1), vParam0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_178(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	
	if (func_66(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_68(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	vVar20 = { 0f, vVar17.y, 0f };
	func_73(&vVar20, 0f, 0f, fParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_73(&vVar23, 0f, 0f, fParam3);
	vVar26 = { (GAMEPLAY::ABSF((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
	func_73(&vVar26, 0f, 0f, fParam3);
	vVar1[0 /*3*/] = { vParam0 + vVar20 + vVar26 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * GAMEPLAY::ABSF((vVar17.z - vVar14.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar20 - vVar26 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * GAMEPLAY::ABSF((vVar17.z - vVar14.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar23 + vVar26 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * GAMEPLAY::ABSF((vVar17.z - vVar14.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar23 - vVar26 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * GAMEPLAY::ABSF((vVar17.z - vVar14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_66(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_178(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_179(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	uVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(uVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(uVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar1, 0) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(uVar1);
		if (func_178(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	uVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(uVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(uVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar1, 0) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(uVar1);
		if (func_178(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_180(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_183(vParam0, fParam3, iParam4, iParam5, iParam6) || func_181(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_181(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_182(vParam0, iParam4, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_178(vParam0, fParam3, iParam4, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1202(iVar2, 0, 1) && func_1202(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_182(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_74(iParam3, 1008981770);
	fVar1 = func_74(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_183(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_1202(iVar1, 0, 1) && func_1202(iParam5, 0, 1))
			{
				if (Global_2417554.f_261[iVar0])
				{
					if (func_66(Global_2417554.f_131[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_66(func_38(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417554.f_261[iVar0])
			{
				if (func_66(Global_2417554.f_131[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1202(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_66(func_38(iVar1), vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_184(vector3 vParam0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_168(vParam0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_98(vParam0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_185(vector3 vParam0, var uParam3, int iParam4, bool bParam5, vector3 vParam6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(vParam6) > 0f)
		{
			if (!func_188(vParam0, *uParam3, vParam6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_187(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_186(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_186(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam6) > 0f)
	{
		if (!func_188(vParam0, *uParam3, vParam6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*uParam3 = (*uParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *uParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xA0F8A7517A273C05(vParam0, *uParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!iParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(SYSTEM::VMAG(vVar18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_186(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_186(iParam11, 1.5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0.5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_186(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_68(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_187(vector3 vParam0)
{
	float fVar0;
	
	if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_188(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0f, 1f, 0f };
	func_73(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_61(vVar3, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_189(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_64(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2411979[iVar1])
	{
		if (func_63(vParam0, &(Global_2411276[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411979[8])
	{
		if (func_63(vParam0, &(Global_2411276[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_190(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405070.f_26.f_17)
	{
		switch (Global_2405070.f_26.f_16)
		{
			case 0:
				if (func_168(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_15, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_98(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, Global_2405070.f_26.f_15, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_85(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, Global_2405070.f_26.f_15, Global_2405070.f_26.f_16, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_191(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	vector3 vVar15;
	var uVar18;
	
	if (Global_2405070.f_1737 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_78(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_190(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412272.f_162 = 0;
		Global_2412272.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412272[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412272.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_192(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_1737)
		{
			iVar1 = Global_2405070.f_2143[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405070.f_1738[iVar1 /*4*/] };
				fVar5 = Global_2405070.f_1738[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_180(vVar2, fVar5, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_78(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_179(vVar2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_31(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_31(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_177(vVar2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_176(vVar2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412272.f_162)
															{
																Global_2412272[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412272.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412272.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412272.f_162 == 0)
														{
															Global_2412272[0 /*3*/] = { vVar2 };
															Global_2412272.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412272.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_35) < SYSTEM::VDIST2(Global_2412272[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_175(vVar2, fVar5, iVar6);
																		iVar6 = Global_2412272.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412272.f_162++;
														if (Global_2412272.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405070.f_1737;
															}
															else if (Global_2412272.f_162 == 40)
															{
																iVar0 = Global_2405070.f_1737;
															}
														}
													}
													else
													{
														Global_2412272[Global_2412272.f_162 /*3*/] = { vVar2 };
														Global_2412272.f_121[Global_2412272.f_162] = fVar5;
														Global_2412272.f_162++;
														if (Global_2412272.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405070.f_1737;
															}
															else if (Global_2412272.f_162 == 40)
															{
																iVar0 = Global_2405070.f_1737;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar5;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2412272.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412272[0 /*3*/] };
				*uParam1 = Global_2412272.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412272.f_163 > 0 && !Global_2412272.f_163 == Global_2412272.f_162)
				{
					func_173(0, uParam2);
				}
				iVar14 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2412272.f_162);
				vVar15 = { Global_2412272[0 /*3*/] };
				uVar18 = Global_2412272.f_121[0];
				Global_2412272[0 /*3*/] = { Global_2412272[iVar14 /*3*/] };
				Global_2412272.f_121[0] = Global_2412272.f_121[iVar14];
				Global_2412272[iVar14 /*3*/] = { vVar15 };
				Global_2412272.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412272[0 /*3*/] };
				*uParam1 = Global_2412272.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_192(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405070.f_1737)
	{
		uVar1 = func_193(vParam0, fVar0, &fVar0);
		Global_2405070.f_2143[iVar2] = uVar1;
		iVar2++;
	}
}

int func_193(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405070.f_1737)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405070.f_1738[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_194(int iParam0)
{
	return iParam0 == 50;
}

void func_195(var uParam0, var uParam1)
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
	Global_2405070.f_2457 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405070.f_2455 = 1;
	Global_2405070.f_2458 = NETWORK::GET_NETWORK_TIME();
}

void func_196()
{
	func_201();
	func_200();
	func_199();
	func_198();
	func_197();
}

void func_197()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2407969[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_198()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405070.f_2474.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_199()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405070.f_2474.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_200()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405070.f_2474.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_201()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405070.f_2474 = { Var0 };
}

void func_202()
{
	if (Global_2405070.f_2455)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_2457)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405070.f_2455 = 0;
	}
}

int func_203(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

Vector3 func_204()
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_1077();
	vVar1 = { 0f, 0f, 0f };
	switch (iVar0)
	{
		case 0:
			vVar1 = { -1166.81f, 4928.695f, 222.1781f };
			break;
		
		case 1:
			vVar1 = { -2117.441f, 3301.337f, 31.8103f };
			break;
		
		case 2:
			vVar1 = { -1298.069f, -3398.051f, 12.9452f };
			break;
		
		case 3:
			vVar1 = { 567.0107f, -3125.8f, 17.7686f };
			break;
	}
	return vVar1;
}

int func_205()
{
	switch (Local_110.f_3)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (func_206())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_206()
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	
	uVar0 = func_214();
	iVar1 = func_213();
	if (func_1077() == 0)
	{
		iVar7 = Global_1574984;
	}
	else if (func_1077() == 3)
	{
		iVar7 = -347613984;
	}
	else
	{
		iVar7 = Global_1574987;
	}
	switch (func_1077())
	{
		case 1:
			func_212(&vVar2, &uVar6, &uVar5);
			func_211(0, uVar0, vVar2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_210((iVar8 - 1), &vVar2, &uVar6, &uVar5);
				func_208(iVar8, iVar1, vVar2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 2:
			func_212(&vVar2, &uVar6, &uVar5);
			func_211(0, uVar0, vVar2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 4)
			{
				func_210((iVar8 - 1), &vVar2, &uVar6, &uVar5);
				if (iVar8 <= 2)
				{
					iVar1 = 2072724299;
				}
				else
				{
					iVar1 = func_213();
				}
				func_208(iVar8, iVar1, vVar2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 0:
			func_212(&vVar2, &uVar6, &uVar5);
			func_211(0, uVar0, vVar2, uVar6, uVar5, iVar7);
			iVar8 = 1;
			while (iVar8 <= 3)
			{
				if (iVar8 == 1)
				{
					iVar1 = func_213();
				}
				else
				{
					iVar1 = joaat("g_m_y_lost_03");
				}
				func_210((iVar8 - 1), &vVar2, &uVar6, &uVar5);
				func_208(iVar8, iVar1, vVar2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
		
		case 3:
			func_212(&vVar2, &uVar6, &uVar5);
			iVar8 = 1;
			while (iVar8 <= 9)
			{
				func_210((iVar8 - 1), &vVar2, &uVar6, &uVar5);
				func_208(iVar8, iVar1, vVar2, uVar6, uVar5, iVar7);
				iVar8++;
			}
			break;
	}
	if (func_207())
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	switch (func_1077())
	{
		case 1:
			if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[4]))
			{
				return 1;
			}
			break;
		
		case 0:
			if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[1])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[2]))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((((((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[1]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[2])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[3])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[4])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[5])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[6])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[7])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[8])) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[9]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_208(int iParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[iParam0]))
	{
		STREAMING::REQUEST_MODEL(iParam1);
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 0, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_11, iParam0))
				{
					GAMEPLAY::CLEAR_AREA(vParam2, 2f, 1, 0, 0, 0);
					GAMEPLAY::SET_BIT(&(Local_110.f_11), iParam0);
				}
				if (func_31(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_209(&(Local_110.f_13[iParam0]), 26, iParam1, vParam2, uParam5, 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), iParam7);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1, 0);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 0);
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), joaat("weapon_carbinerifle"), 25000, 1);
						fVar0 = (30f * 1f);
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), SYSTEM::ROUND(fVar0));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 0, 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 42, 1);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 200, 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), vParam2, uParam6, 0, 0);
						if (func_1077() == 2)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						}
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

int func_209(var uParam0, int iParam1, var uParam2, vector3 vParam3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = PED::CREATE_PED(iParam1, uParam2, vParam3, uParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(uVar0, iParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

void func_210(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (func_1077())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1170.255f, 4928.144f, 223.2858f };
					*uParam2 = 252.5942f;
					*uParam3 = 1f;
					break;
				
				case 1:
					*uParam1 = { -1162.207f, 4924.064f, 221.7922f };
					*uParam2 = 47.6051f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1159.473f, 4926.255f, 221.7704f };
					*uParam2 = 107.9506f;
					*uParam3 = 5f;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -2117.605f, 3284.526f, 31.8103f };
					*uParam2 = 323.9433f;
					*uParam3 = 10f;
					break;
				
				case 1:
					*uParam1 = { -2114.597f, 3283.476f, 31.8103f };
					*uParam2 = 357.3127f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -2127.048f, 3285.237f, 37.7325f };
					*uParam2 = 219.4789f;
					*uParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -2113.078f, 3276.096f, 37.7325f };
					*uParam2 = 62.113f;
					*uParam3 = 1f;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -1300.61f, -3400.856f, 12.9452f };
					*uParam2 = 28.2234f;
					*uParam3 = 5f;
					break;
				
				case 1:
					*uParam1 = { -1300.13f, -3397.689f, 12.9452f };
					*uParam2 = 65.8332f;
					*uParam3 = 5f;
					break;
				
				case 2:
					*uParam1 = { -1301.792f, -3392.742f, 12.9452f };
					*uParam2 = 323.2079f;
					*uParam3 = 5f;
					break;
				
				case 3:
					*uParam1 = { -1307.278f, -3392.964f, 16.0027f };
					*uParam2 = 296.486f;
					*uParam3 = 1f;
					break;
			}
			break;
		
		case 3:
			*uParam3 = 1f;
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 572.3206f, -3126.495f, 17.7686f };
					*uParam2 = 183.7487f;
					break;
				
				case 1:
					*uParam1 = { 563.9862f, -3118.138f, 17.7687f };
					*uParam2 = 91.0942f;
					break;
				
				case 2:
					*uParam1 = { 580.0829f, -3117.409f, 17.7686f };
					*uParam2 = 97.2584f;
					break;
				
				case 3:
					*uParam1 = { 520.6996f, -3119.512f, 17.714f };
					*uParam2 = 119.4985f;
					break;
				
				case 4:
					*uParam1 = { 541.4325f, -3119.131f, 7.566f };
					*uParam2 = 181.8911f;
					break;
				
				case 5:
					*uParam1 = { 586.7628f, -3118.98f, 17.7149f };
					*uParam2 = 271.86f;
					break;
				
				case 6:
					*uParam1 = { 594.2654f, -3122.402f, 5.0693f };
					*uParam2 = 89.4349f;
					break;
				
				case 7:
					*uParam1 = { 550.7189f, -3131.083f, 16.3604f };
					*uParam2 = 172.4657f;
					break;
				
				case 8:
					*uParam1 = { 587.6816f, -3131.081f, 16.3706f };
					*uParam2 = 200.5195f;
					break;
			}
			break;
	}
}

int func_211(int iParam0, var uParam1, vector3 vParam2, var uParam5, var uParam6, int iParam7)
{
	float fVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[iParam0]))
	{
		STREAMING::REQUEST_MODEL(uParam1);
		if (STREAMING::HAS_MODEL_LOADED(uParam1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_110.f_11, iParam0))
				{
					GAMEPLAY::CLEAR_AREA(vParam2, 2f, 1, 0, 0, 0);
					GAMEPLAY::SET_BIT(&(Local_110.f_11), iParam0);
				}
				if (func_31(vParam2, 1f, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
				{
					if (func_209(&(Local_110.f_13[iParam0]), 26, uParam1, vParam2, uParam5, 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), iParam7);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1, 0);
						if (func_1077() == 1)
						{
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 3, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 8, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 10, 0, 0, 0);
							PED::SET_PED_PROP_INDEX(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 0, 1, 0, 0);
						}
						else
						{
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 0);
						}
						WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), joaat("weapon_advancedrifle"), 25000, 1);
						fVar0 = (30f * 1f);
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), SYSTEM::ROUND(fVar0));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 0, 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 42, 1);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 200, 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), 1);
						PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_110.f_13[iParam0]), vParam2, uParam6, 0, 0);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[iParam0]))
	{
		return 1;
	}
	return 0;
}

void func_212(var uParam0, var uParam1, var uParam2)
{
	switch (func_1077())
	{
		case 0:
			*uParam0 = { -1166.844f, 4925.441f, 221.9988f };
			*uParam1 = 346.3493f;
			*uParam2 = 5f;
			break;
		
		case 1:
			*uParam0 = { -2113.965f, 3287.681f, 31.8103f };
			*uParam1 = 155.4586f;
			*uParam2 = 5f;
			break;
		
		case 2:
			*uParam0 = { -1301.891f, -3396.512f, 12.9452f };
			*uParam1 = 235.3724f;
			*uParam2 = 5f;
			break;
		
		case 3:
			*uParam0 = { 547.5576f, -3198.299f, 5.0693f };
			*uParam1 = 22.5507f;
			*uParam2 = 1f;
			break;
	}
}

int func_213()
{
	int iVar0;
	
	switch (func_1077())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_01");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_01");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armgoon_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_01");
			break;
	}
	return iVar0;
}

int func_214()
{
	int iVar0;
	
	switch (func_1077())
	{
		case 0:
			iVar0 = joaat("a_m_o_acult_02");
			break;
		
		case 1:
			iVar0 = joaat("s_m_m_marine_02");
			break;
		
		case 2:
			iVar0 = joaat("g_m_m_armboss_01");
			break;
		
		case 3:
			iVar0 = joaat("s_m_y_blackops_02");
			break;
	}
	return iVar0;
}

int func_215(var uParam0)
{
	if (uParam0->f_1)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_216(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_217()
{
	if (GAMEPLAY::IS_BIT_SET(uLocal_368, 29))
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_368, 28))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 25))
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_369, 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 1))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 26))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						GAMEPLAY::SET_BIT(&uLocal_368, 26);
					}
				}
				if (GAMEPLAY::IS_BIT_SET(uLocal_368, 26))
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 27))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							GAMEPLAY::SET_BIT(&uLocal_368, 27);
						}
					}
					if (GAMEPLAY::IS_BIT_SET(uLocal_368, 27))
					{
						GAMEPLAY::SET_BIT(&uLocal_368, 25);
					}
				}
			}
		}
	}
}

void func_218(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	var uVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	var uVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_361(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_359() || iParam2 == 27)
	{
		if (func_305(uParam1, iParam2, uParam3, Global_1574168, 0, func_357(), iParam7))
		{
			func_304(1);
			if ((!func_302() && !func_300()) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1))
			{
				if (func_299())
				{
					func_296();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_295(1);
						Global_1574168 = 0;
						iVar54 = -1;
						if (Global_1574389 != 1)
						{
							func_294(uParam1, 0, 0);
							if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
							{
								GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_1202(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_34(iVar35, 0))
									{
										if ((func_293(iVar35) || Global_2423801[iVar35 /*413*/].f_236 != -1) || func_142(iVar35))
										{
											iVar44 = iVar35;
											if (func_20(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_292(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_289(PLAYER::PLAYER_ID(), 0) && func_288(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_287())
							{
								if (func_1202(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_18();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_286(iVar35) && func_281(iVar35, iParam2)) && func_1202(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								uVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
								Var38 = { func_276(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_45(iVar35) };
								iVar37 = func_270(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574168++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_287())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_265(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_264(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								uVar51 = func_257(iVar35, 0);
								if (bVar34)
								{
									if (func_19(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_256(iParam5))
								{
									func_255(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, uVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_255(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, uVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								GAMEPLAY::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_1202(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_18();
							}
							if (func_286(iVar35))
							{
								if (func_1202(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									uVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
									Var38 = { func_276(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_45(iVar35) };
									iVar37 = func_270(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574168++;
									uVar51 = func_257(iVar35, 1);
									if (bVar34)
									{
										if (func_19(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_232(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, uVar42, uVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_229(uParam3, uParam1);
						}
						func_228(&(uParam3->f_21));
						func_227();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_226(uParam3, uParam1);
							func_225(uParam1, 0, 1);
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 7);
						}
						func_226(uParam3, uParam1);
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_221(uParam3))
						{
							Global_1574389 = 1;
						}
						func_219(uParam3);
						if (Global_1574389 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574389 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
					{
						GRAPHICS::_SET_UI_LAYER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::_SET_UI_LAYER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_227();
			func_295(0);
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 10))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_219(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_228(&(uParam0->f_21));
		func_220(0);
	}
}

void func_220(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574389 != 2)
		{
			Global_1574389 = 2;
		}
	}
	else
	{
		switch (Global_1574389)
		{
			case 0:
				Global_1574389 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_221(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_18() && func_1202(iVar15, 0, 1))
	{
		Var2 = { func_45(iVar15) };
		iVar1 = func_224(uParam0, uParam0->f_37);
		if (func_223(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_222(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_222(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_222(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_222(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_222(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_222(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_222(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_223(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_224(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_225(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "COLLAPSE"))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(iParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_226(var uParam0, var uParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GAMEPLAY::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_227()
{
	if (Global_1574389 != 0)
	{
		Global_1574389 = 0;
	}
}

void func_228(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_229(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_18())
		{
			if (func_1202(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_231(uParam0->f_38[iVar0 /*2*/], 0);
					func_230(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589747[iVar0 /*790*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_230(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam1);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_231(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_232(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_254() && iParam4 < func_253())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574170)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574389 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, sVar1))
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_252("");
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam10);
			}
			func_252(sParam1);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam11);
			if (uParam3->f_108 == 6)
			{
				func_252("");
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
			}
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
			func_252("");
			if (uParam3->f_108 == 6)
			{
				func_252("");
			}
			else
			{
				func_252(&sParam5);
			}
			func_237(uParam3, iParam0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_236(uParam3))
			{
				func_235("DPAD_FRIEND");
			}
			else if (func_234(uParam3))
			{
				func_235("DPAD_FRIEND");
			}
			else if (func_233(uParam3))
			{
				func_235("DPAD_CREW");
			}
			else
			{
				func_235("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_233(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_234(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 5);
}

void func_235(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_236(var uParam0)
{
	if (func_234(uParam0) && func_233(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_237(var uParam0, int iParam1)
{
	if (func_251(iParam1))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(121);
	}
	else if (func_242(iParam1))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(122);
	}
	else if (((GAMEPLAY::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && GAMEPLAY::IS_BIT_SET(Global_2423801[iParam1 /*413*/].f_410, 0))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(123);
	}
	else
	{
		if (func_238())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_238()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_240() || func_239())
		{
			return 1;
		}
	}
	return 0;
}

var func_239()
{
	return Global_2448386.f_14;
}

int func_240()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_239();
	}
	return func_241(Global_4456448.f_130782);
}

int func_241(int iParam0)
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

int func_242(int iParam0)
{
	if ((func_1202(iParam0, 0, 1) && func_246()) && func_243(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_243(int iParam0, bool bParam1)
{
	return func_244(iParam0, bParam1, 1);
}

int func_244(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_245(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_18() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_245(int iParam0, int iParam1)
{
	if (iParam0 != func_18())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_18())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_246()
{
	if (func_159(PLAYER::PLAYER_ID()) || func_250())
	{
		if (!func_247(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_247(int iParam0, int iParam1)
{
	if (func_249(iParam0) == iParam1)
	{
		return func_248(iParam0);
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

int func_249(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/];
	}
	return -1;
}

int func_250()
{
	switch (func_288(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_251(int iParam0)
{
	if (func_238())
	{
		if (func_1202(iParam0, 0, 1))
		{
			return func_20(iParam0);
		}
	}
	if ((func_1202(iParam0, 0, 1) && func_246()) && func_245(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_252(char* sParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_253()
{
	int iVar0;
	
	if (Global_1574170)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_254()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574170)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_255(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, var uParam9, int iParam10, var uParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, var uParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_254() && iParam3 < func_253())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574170)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574389 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, sVar1))
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
				if (GAMEPLAY::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_252("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam9);
				}
				if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_235(sParam16);
				}
				else
				{
					func_252(&(uParam2->f_1));
				}
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam11);
				if (uParam2->f_108 == 6)
				{
					func_252("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
				}
				if (func_287())
				{
					func_252("");
				}
				else if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					UI::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						UI::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						UI::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_235(&(uParam2->f_104));
					}
					else
					{
						func_252("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					UI::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam10);
				}
				else
				{
					func_252("");
				}
				if (uParam2->f_108 == 6)
				{
					func_252("");
				}
				else
				{
					func_252(&sParam4);
				}
				func_237(uParam2, iParam0);
				if (iParam12 == 1 || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_252("");
					func_252("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_236(uParam2))
				{
					func_235("DPAD_FRIEND");
				}
				else if (func_234(uParam2))
				{
					func_235("DPAD_FRIEND");
				}
				else if (func_233(uParam2))
				{
					func_235("DPAD_CREW");
				}
				else
				{
					func_235("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_256(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_257(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_159(iParam0)) && !func_262(iParam0))
	{
		iVar0 = func_261();
	}
	iVar1 = func_260(iParam0);
	if (!iVar1 == -1)
	{
		return func_258(iVar1);
	}
	return iVar0;
}

int func_258(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_259(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_259(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_260(int iParam0)
{
	if (!iParam0 == func_18())
	{
		if (func_19(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_44(iParam0)];
		}
	}
	return -1;
}

int func_261()
{
	return 21;
}

bool func_262(int iParam0)
{
	return func_263(iParam0, 20);
}

bool func_263(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

char* func_264(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_265(var uParam0, float fParam1, var uParam2, int iParam3)
{
	if (func_269(iParam3))
	{
		*fParam1 = (func_266(iParam3, uParam2) / 10f);
		return 1;
	}
	if (func_256(iParam3))
	{
		*fParam1 = (func_266(iParam3, uParam2) / 1000f);
		return 1;
	}
	*uParam0 = uParam2;
	return 0;
}

float func_266(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(uParam1);
			}
			else
			{
				return func_268(SYSTEM::TO_FLOAT(uParam1));
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(uParam1);
			}
			else
			{
				return func_267(SYSTEM::TO_FLOAT(uParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(uParam1);
}

float func_267(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_268(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_270(int iParam0)
{
	int iVar0;
	
	iVar0 = func_273(iParam0);
	if (iVar0 == -1)
	{
		func_271(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_271(int iParam0, bool bParam1)
{
	if (!func_1202(iParam0, 0, 1))
	{
		return;
	}
	if (func_273(iParam0) != -1)
	{
		return;
	}
	if (Global_1380116)
	{
		if (iParam0 == Global_1380116.f_1)
		{
			return;
		}
	}
	if (func_272(iParam0))
	{
		return;
	}
	if (Global_1380154 >= 32)
	{
		return;
	}
	Global_1380121[Global_1380154] = iParam0;
	Global_1380154++;
	if (bParam1)
	{
	}
}

int func_272(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380154)
	{
		if (Global_1380121[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_273(int iParam0)
{
	int iVar0;
	
	if (!func_1202(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1380114 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380114)
	{
		if (Global_1379953[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1379953[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1379953[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_274(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_274(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1380114)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1379953[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1379953[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1379953[iParam0 /*5*/].f_2), 64);
			UI::_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1379953[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1380114)
	{
		Global_1379953[iVar32 /*5*/] = { Global_1379953[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_275(&(Global_1379953[iVar32 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_275(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_18();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_276(int iParam0)
{
	struct<4> Var0;
	
	if (func_1202(iParam0, 0, 1))
	{
		Global_2503649 = { func_45(iParam0) };
		if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (func_223(Global_2503649))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2503649))
				{
					return Var0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return Var0;
		}
		if (func_280(&Global_2503649))
		{
			Global_2503579 = { func_278(iParam0) };
			func_277(&Global_2503579, &Var0);
		}
	}
	return Var0;
}

void func_277(var uParam0, var uParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

struct<35> func_278(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_279(iParam0))
	{
		return Global_1312889[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_45(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_279(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_280(var uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_285(iParam0) || func_284(iParam0)) || func_283(iParam0))
		{
			return 0;
		}
	}
	if (!func_282(iParam0))
	{
		return 0;
	}
	if ((!func_293(iParam0) && Global_2423801[iParam0 /*413*/].f_236 == -1) && !func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_282(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_142, 22);
}

int func_283(int iParam0)
{
	if (func_285(iParam0))
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 8);
}

int func_284(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

bool func_285(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 2);
}

int func_286(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_34(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1589747[iVar0 /*790*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_287()
{
	switch (func_288(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_249(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_262(PLAYER::PLAYER_ID()))
	{
		switch (func_288(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_247(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_288(int iParam0)
{
	if (func_158(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_289(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 && func_290(Global_1625435[iParam0 /*560*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1)
	{
		if (func_290(Global_1625435[iParam0 /*560*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_291(iParam0, 0);
	return 0;
}

int func_291(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_292(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1202(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((func_293(iVar1) || Global_2423801[iVar1 /*413*/].f_236 != -1) || func_142(iVar1))
				{
					if (func_16(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_293(int iParam0)
{
	if (func_1202(iParam0, 0, 1))
	{
		if (func_1202(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_288(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_294(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_295(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1368242.f_2 == 0)
		{
			Global_1368242.f_2 = 1;
		}
	}
	else if (Global_1368242.f_2 == 1)
	{
		Global_1368242.f_2 = 0;
	}
}

void func_296()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1))
	{
		if (func_298())
		{
			func_297();
		}
	}
}

void func_297()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437022.f_2704[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
			GAMEPLAY::SET_BIT(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 0);
		}
		iVar0++;
	}
}

bool func_298()
{
	return Global_2437022.f_2704[0 /*80*/].f_1 != 0;
}

int func_299()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 0) && func_298())
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1) && func_298())
	{
		return 1;
	}
	return 0;
}

int func_300()
{
	if (func_298())
	{
		if (func_301(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_301(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_302()
{
	if (func_298())
	{
		if (func_303(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
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
			return 1;
		
		default:
	}
	return 0;
}

void func_304(int iParam0)
{
	if (Global_1368242.f_1 != Global_1368242)
	{
		Global_1368242.f_1 = Global_1368242;
	}
	if (Global_1368242 != iParam0)
	{
		Global_1368242 = iParam0;
	}
}

int func_305(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	char* sVar8;
	int iVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_356(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	uVar7 = func_355();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_354())
		{
			if (func_353() > 0 && Global_1574170)
			{
				UI::_0x25F87B30C382FCA7();
				UI::_CLEAR_NOTIFICATIONS_POS(uVar7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					UI::HIDE_HELP_TEXT_THIS_FRAME();
				}
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_339())
		{
			func_338(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 26))
	{
		func_338(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_353() == 1)
		{
			func_337(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_338(uParam0, uParam2, 0);
			GAMEPLAY::SET_BIT(&(Global_2524719.f_4578), 5);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::HIDE_HELP_TEXT_THIS_FRAME();
		}
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_353() == 0 && !bParam5))
		{
			func_338(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_336();
				if (iParam1 == 26 || iParam1 == 27)
				{
					UI::_0x25F87B30C382FCA7();
				}
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_336();
					if (iParam1 == 26 || iParam1 == 27)
					{
						UI::_0x25F87B30C382FCA7();
					}
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				UI::_CLEAR_NOTIFICATIONS_POS(uVar7);
				if (func_337(bVar6, uParam0, 0))
				{
					func_294(uParam0, 0, 0);
					uVar4 = func_334(iParam1, &(Global_4456448.f_130789), bParam4);
					Var0 = { func_332(iParam1) };
					if (bParam4)
					{
						func_329(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_322(uParam0, func_326(uParam2), func_323(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar8 = func_315(uParam2);
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam6))
						{
							sVar8 = uParam6;
						}
						func_313(uParam0, sVar8, func_314(), -1);
					}
					else if (func_238())
					{
						uParam2->f_34 = Global_1574169;
						func_329(uParam0, uVar4, &Var0, 1, -1, Global_1574169, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574169;
						func_329(uParam0, uVar4, "", 0, -1, Global_1574169, 1);
					}
					else
					{
						iVar9 = func_306(iParam1);
						func_329(uParam0, uVar4, &Var0, 1, iVar9, -1, 1);
					}
					GAMEPLAY::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574168 = uParam3;
				Global_1574167 = 1;
				UI::_CLEAR_NOTIFICATIONS_POS(uVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574169)
					{
						GAMEPLAY::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_306(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_312())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_311(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_310(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_309(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_307())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_307()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_40();
	}
	return func_308(Global_4456448.f_130782);
}

int func_308(int iParam0)
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

bool func_309(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 4;
}

bool func_310(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

bool func_311(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_312()
{
	return Global_4456448.f_1 == 0;
}

void func_313(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_235(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_235("");
		if (iParam3 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_314()
{
	switch (func_288(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_315(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_288(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_318())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_317(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_317(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_316(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_317(bool bParam0)
{
	return func_243(PLAYER::PLAYER_ID(), bParam0);
}

bool func_318()
{
	return (func_321() && func_319(func_320()));
}

bool func_319(int iParam0)
{
	return func_245(iParam0, 1);
}

int func_320()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_35;
}

bool func_321()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148;
}

void func_322(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_235(uParam1);
		}
		else if (func_249(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_235("");
		if (iParam3 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_323(var uParam0)
{
	int iVar0;
	
	iVar0 = func_249(PLAYER::PLAYER_ID());
	if (func_325())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_324())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_324()
{
	if (func_249(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2524719.f_4804;
	}
	return -1;
}

bool func_325()
{
	return Global_1589620;
}

char* func_326(var uParam0)
{
	int iVar0;
	
	iVar0 = func_249(PLAYER::PLAYER_ID());
	if (func_325())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_328() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_328() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_324())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_327() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_327()
{
	return Global_2524719.f_4807;
}

int func_328()
{
	if (func_249(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2524719.f_4802;
	}
	return -1;
}

void func_329(var uParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_252(uParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam1);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_235(uParam1);
		}
		if (func_354() && iParam6)
		{
			if (func_331())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_235(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (func_330(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(166);
			}
			else if (func_40())
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_330(int iParam0)
{
	if (func_311(iParam0) || func_310(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_331()
{
	return Global_1574170;
}

struct<4> func_332(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_333(PLAYER::PLAYER_ID()) || func_309(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_38, 16);
			break;
	}
	if (func_238() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_38, 16);
	}
	return Var0;
}

bool func_333(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 5;
}

var func_334(int iParam0, var uParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_238() || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1)))
	{
		uVar0 = func_335();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574407 == 0)
		{
			Global_1574407 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		if (Global_1574407 == 1)
		{
			Global_1574407 = 0;
		}
		return uParam1;
	}
	else
	{
		if (Global_1574407 == 0)
		{
			Global_1574407 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return uParam1;
}

char* func_335()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_336()
{
	Global_37027 = 1;
}

bool func_337(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}

void func_338(var uParam0, var uParam1, bool bParam2)
{
	GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574168 = 0;
	func_227();
	Global_1574167 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_228(&(uParam1->f_19));
			GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4578), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	}
	if (GAMEPLAY::IS_BIT_SET(uParam1->f_33, 0))
	{
		GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	UI::_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_339()
{
	if (func_352())
	{
		return 0;
	}
	if (func_351())
	{
		return 0;
	}
	if (!func_349())
	{
		return 0;
	}
	if (!func_347())
	{
		return 0;
	}
	if (func_346(8, -1))
	{
		return 0;
	}
	if (func_353() == 2)
	{
		return 0;
	}
	if (Global_2524719.f_4530)
	{
		return 0;
	}
	if (func_345())
	{
		return 0;
	}
	else if (!func_75(PLAYER::PLAYER_ID(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_344(1) || func_342(1)) || Global_17228.f_124) || Global_17228)
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_341() && Global_1686218 == 2)
	{
		return 0;
	}
	if (func_118(PLAYER::PLAYER_ID()) && !func_341())
	{
		return 0;
	}
	if (Global_1654543)
	{
		return 0;
	}
	if (Global_1654549)
	{
		return 0;
	}
	if (func_340(0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 4))
	{
		return 0;
	}
	if (Global_1361433)
	{
		return 0;
	}
	if ((Global_1679581.f_705.f_5 || Global_1682392.f_705.f_5) || Global_1678624.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_340(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_39, iParam0);
}

bool func_341()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_30, 12) && GAMEPLAY::IS_BIT_SET(Global_1686219, 0));
}

int func_342(bool bParam0)
{
	if (CONTROLS::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_343(PLAYER::PLAYER_PED_ID()))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17228.f_130)
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

int func_343(var uParam0)
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

bool func_344(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

bool func_345()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_196 != 0;
}

bool func_346(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1368245.f_1048, iParam0);
}

int func_347()
{
	if (func_348() == 0)
	{
		return 1;
	}
	return 0;
}

int func_348()
{
	return Global_1312466.f_18;
}

int func_349()
{
	if (func_350())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (GAMEPLAY::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_350()
{
	return Global_1312438;
}

bool func_351()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 5;
}

bool func_352()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17367.f_5873 + 100;
}

int func_353()
{
	return Global_1368245.f_68;
}

int func_354()
{
	if (Global_1574169 > 16)
	{
		return 1;
	}
	return 0;
}

float func_355()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_357()
{
	if (func_358(PLAYER::PLAYER_ID()))
	{
		return Global_1316740;
	}
	return 0;
}

int func_358(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_34(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_359()
{
	if (func_357())
	{
		return 1;
	}
	if (func_283(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_325())
	{
		return 1;
	}
	if (func_159(PLAYER::PLAYER_ID()))
	{
		switch (func_249(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_360(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_360(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_360(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_360(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 4);
}

int func_361(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_159(PLAYER::PLAYER_ID()) && !func_262(PLAYER::PLAYER_ID())) && !func_247(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_158(PLAYER::PLAYER_ID(), 0) && func_262(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_362(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_362(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_159(iParam0) && !func_285(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 8));
	bVar2 = func_262(iParam0);
	uVar3 = func_375();
	uVar4 = func_366();
	if ((bVar1 && (func_248(iParam0) || func_365(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_364(iParam0)) && !func_363(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2524719.f_4883.f_210 != iVar0)
	{
		Global_2524719.f_4883.f_210 = iVar0;
	}
	return iVar0;
}

bool func_363(int iParam0)
{
	return func_263(iParam0, 19);
}

int func_364(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_263(iParam0, 9);
	}
	return 0;
}

int func_365(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_366()
{
	if ((func_263(PLAYER::PLAYER_ID(), 21) || func_263(PLAYER::PLAYER_ID(), 22)) || func_372())
	{
		return 1;
	}
	if (func_368())
	{
		func_367(22);
		return 1;
	}
	return 0;
}

void func_367(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_4), iParam0);
}

int func_368()
{
	if (func_158(PLAYER::PLAYER_ID(), 0))
	{
		if ((func_375() && !func_371()) || func_370(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		else
		{
			func_369(27);
		}
	}
	return 0;
}

void func_369(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_4), iParam0);
}

bool func_370(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

bool func_371()
{
	return Global_1312416.f_1;
}

bool func_372()
{
	return func_373(306, -1);
}

int func_373(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_374(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_374(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
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

bool func_375()
{
	return Global_1312416;
}

bool func_376()
{
	return GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 5);
}

void func_377()
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
				func_378(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_378(int iParam0)
{
	struct<4> Var0;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		if (func_1077() == 1)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 11))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 15))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 16))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 15))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 10))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Var0))
									{
										if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
										{
											iVar15 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0);
											if (iVar15 == NETWORK::NET_TO_VEH(Local_110.f_29[0]))
											{
												if (Var0.f_3)
												{
													if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
													{
														if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
														{
															uVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
															if (PED::IS_PED_A_PLAYER(uVar11))
															{
																iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar11);
																if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar13))
																{
																	if (iVar13 == PLAYER::PLAYER_ID())
																	{
																		GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 11);
																		if (!func_263(PLAYER::PLAYER_ID(), 20))
																		{
																			if (func_376())
																			{
																				func_381(0);
																				func_379();
																			}
																		}
																	}
																}
																else
																{
																	GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 16);
																}
															}
															else
															{
																GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 15);
															}
														}
													}
												}
												else if (!func_263(PLAYER::PLAYER_ID(), 20))
												{
													if (func_376())
													{
														if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
														{
															if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
															{
																uVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																if (PED::IS_PED_A_PLAYER(uVar11))
																{
																	iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar11);
																	if (iVar13 == PLAYER::PLAYER_ID())
																	{
																		func_381(0);
																		func_379();
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
					}
				}
			}
		}
		if (func_1077() == 2)
		{
			iVar16 = 0;
			while (iVar16 < 15)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[iVar16]))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2, iVar16))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
								if (iVar12 == NETWORK::NET_TO_PED(Local_110.f_13[iVar16]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
									{
										if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
										{
											uVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
											if (PED::IS_PED_A_PLAYER(uVar11))
											{
												iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar11);
												if (iVar13 == PLAYER::PLAYER_ID())
												{
													GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2), iVar16);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				iVar16++;
			}
		}
		if (func_376())
		{
			if (!func_263(PLAYER::PLAYER_ID(), 20))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0))
				{
					if (ENTITY::IS_ENTITY_A_PED(Var0))
					{
						iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
						if (PED::IS_PED_A_PLAYER(iVar12))
						{
							iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
							if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
							{
								if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
								{
									uVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
									if (PED::IS_PED_A_PLAYER(uVar11))
									{
										iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar11);
										if (iVar13 == PLAYER::PLAYER_ID())
										{
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar14))
											{
												iVar17 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar14);
												if (iVar17 == Local_110.f_5)
												{
													func_381(0);
													func_379();
												}
												else if (iVar17 == Local_110.f_7)
												{
													func_381(0);
													func_379();
												}
												else if (func_19(iVar14, 1))
												{
													if (Local_110.f_8 > -1)
													{
														iVar18 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_8));
														if (func_16(iVar14, iVar18, 1))
														{
															func_381(0);
															func_379();
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
		}
	}
}

void func_379()
{
	if (!func_380(PLAYER::PLAYER_ID()))
	{
		func_367(25);
	}
}

bool func_380(int iParam0)
{
	return func_263(iParam0, 25);
}

void func_381(int iParam0)
{
	if (!func_262(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_362(PLAYER::PLAYER_ID()) != 0)
		{
			func_367(20);
			if (func_159(PLAYER::PLAYER_ID()))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 8))
				{
					GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 8);
				}
			}
		}
	}
}

void func_382()
{
	struct<8> Var0;
	
	switch (Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5)
	{
		case 0:
			if (func_1093())
			{
				Var0 = { func_1056() };
				func_1055(86, "BIGM_ASLTN", &Var0, 1, -1, 2, 1);
				func_1030(-1, 0, 0, -1, 0, 0);
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 1;
			}
			else
			{
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 2;
			}
			break;
		
		case 1:
			func_1024();
			func_1021();
			func_1020();
			func_1011();
			func_1007();
			func_1004();
			func_1003();
			func_1002();
			func_700();
			if (Local_110.f_51 == 2)
			{
				if (UI::DOES_BLIP_EXIST(uLocal_501))
				{
					UI::REMOVE_BLIP(&uLocal_501);
				}
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 2;
			}
			else if (Local_110.f_51 == 3)
			{
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 3;
			}
			else if (Local_110.f_51 == 4)
			{
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 4;
			}
			break;
		
		case 2:
			func_699();
			func_1024();
			func_683();
			func_1021();
			func_1020();
			func_660();
			func_577();
			func_1011();
			func_528();
			func_527();
			func_1004();
			func_525();
			func_1003();
			func_434();
			func_1002();
			func_700();
			if (GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1))
			{
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 3;
			}
			else if (Local_110.f_51 == 3)
			{
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 3;
			}
			else if (Local_110.f_51 == 4)
			{
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 4;
			}
			else if (func_425())
			{
				GAMEPLAY::SET_BIT(&uLocal_368, 24);
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 4;
			}
			break;
		
		case 3:
			if (Local_110.f_51 == 4)
			{
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 = 4;
			}
			break;
		
		case 4:
			func_1112();
			break;
	}
	if (Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 < 3)
	{
		func_383();
	}
}

void func_383()
{
	vector3 vVar0;
	
	if (!func_1093() && !func_376())
	{
		return;
	}
	if (func_1077() == 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_29[0]), 0) };
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_12), 0) };
	}
	if (!func_424(vVar0, 0f, 0f, 0f, 0))
	{
		func_384(159, vVar0, &uLocal_518, 1140457472, 1144750080, 0);
	}
}

void func_384(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if ((((func_159(PLAYER::PLAYER_ID()) && !func_285(PLAYER::PLAYER_ID())) && !GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 8)) && (func_248(PLAYER::PLAYER_ID()) || func_365(PLAYER::PLAYER_ID()))) || func_39(vParam1))
	{
		return;
	}
	Global_1666797 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vParam1);
	func_422(iParam0, fVar0);
	if (UI::IS_PAUSE_MENU_ACTIVE() && UI::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_364(PLAYER::PLAYER_ID()) || func_421(PLAYER::PLAYER_ID()))
		{
			if (!UI::_0x84698AB38D0C6636(1344549371))
			{
				UI::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (UI::_0x84698AB38D0C6636(1344549371))
		{
			UI::OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_370(PLAYER::PLAYER_ID(), 21))
		{
			func_420(vParam1, 1, 0);
		}
		if (!*uParam4 && func_1202(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_419(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_418(iParam0));
				if (func_417(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
					}
					GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 0);
				}
			}
			if (func_416(iParam0))
			{
				fVar1 = func_415(iParam0);
				if (fVar1 != 1f)
				{
					func_412(fVar1);
					GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_411(iParam0) && func_364(PLAYER::PLAYER_ID()))
				{
					func_409(1);
					func_408(2);
				}
			}
			func_367(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_263(PLAYER::PLAYER_ID(), 19))
			{
				func_369(19);
			}
		}
		if (*uParam4 && func_1202(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_419(iParam0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 0);
				}
			}
			if (func_416(iParam0))
			{
				func_407();
				GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 1);
			}
			if (iParam7 && !func_159(PLAYER::PLAYER_ID()))
			{
				if (func_288(PLAYER::PLAYER_ID()) != 152)
				{
					func_386();
				}
			}
			if (func_340(2))
			{
				func_409(0);
				func_385(2);
			}
		}
	}
}

void func_385(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_39), iParam0);
}

void func_386()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_24), &Global_2409288, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_26), &Global_2409290, 18);
	func_405();
	func_389(1, 1, 0);
	func_387();
}

void func_387()
{
	func_388(0, 0);
}

void func_388(int iParam0, int iParam1)
{
	Global_2405070.f_22 = iParam0;
	Global_2405070.f_23 = iParam1;
}

void func_389(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_44), &Global_2409308, 318);
	}
	else
	{
		Global_2405070.f_44 = { Global_2409308 };
		Global_2405070.f_44.f_49 = { Global_2409308.f_49 };
		Global_2405070.f_44.f_52 = Global_2409308.f_52;
		Global_2405070.f_44.f_53 = Global_2409308.f_53;
	}
	if (bParam0)
	{
		func_404();
	}
	if (!bParam2)
	{
		func_392(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_391(0);
	func_390();
}

void func_390()
{
	struct<6> Var0;
	
	if (Global_2405070.f_484.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405070.f_484 = { Var0 };
	}
}

void func_391(bool bParam0)
{
	if (bParam0)
	{
		Global_2405070.f_702 = 0;
	}
	else
	{
		Global_2405070.f_702 = 1;
	}
}

void func_392(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_403())
		{
			func_402();
		}
		Global_2405070.f_703.f_515 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405070.f_703.f_504 = iParam1;
		Global_2405070.f_703.f_505 = iParam2;
		Global_2405070.f_703.f_506 = iParam10;
		func_400();
		func_396(8, 0, 0, 0, 0);
		Global_2405070.f_703.f_507 = iParam11;
		Global_2405070.f_703.f_510 = iParam3;
		Global_2405070.f_703.f_511 = iParam4;
		Global_2405070.f_703.f_508 = iParam5;
		Global_2405070.f_703.f_509 = iParam6;
		Global_2405070.f_703.f_512 = iParam7;
		Global_2405070.f_703.f_513 = iParam8;
		Global_2405070.f_703.f_514 = iParam9;
		Global_2405070.f_1736 = 1;
	}
	else
	{
		func_393();
	}
}

void func_393()
{
	if (func_403() && !func_395())
	{
		func_402();
	}
	if (func_395())
	{
		func_394();
	}
	else
	{
		func_400();
		func_396(0, 0, 0, 0, 0);
		Global_2405070.f_1736 = 0;
		Global_2405070.f_1735 = 0;
	}
}

void func_394()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_703), &(Global_2405070.f_1219), 516);
	Global_2405070.f_484 = { Global_2405070.f_490 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515)
	{
		Global_2405070.f_1735 = 0;
	}
}

int func_395()
{
	if ((Global_2405070.f_1735 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_1219.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_1219.f_515))
	{
		return 1;
	}
	return 0;
}

void func_396(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437022.f_1889.f_690.f_16 != func_18())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2423801[Global_2437022.f_1889.f_690.f_16 /*413*/].f_401, 0) && func_397())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412440 = 0;
	}
	Global_2405070.f_484 = iParam0;
	Global_2405070.f_484.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405070.f_484.f_2 = iParam1;
	Global_2405070.f_484.f_3 = iParam2;
	Global_2405070.f_484.f_4 = iParam3;
	Global_2405070.f_484.f_5 = iParam4;
}

int func_397()
{
	if (((func_288(PLAYER::PLAYER_ID()) == 229 || func_288(PLAYER::PLAYER_ID()) == 191) || func_399()) || func_398())
	{
		return 0;
	}
	return 1;
}

var func_398()
{
	return Global_1574388;
}

int func_399()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_400()
{
	if (func_403() && !func_395())
	{
		func_402();
	}
	func_401();
	Global_2405070.f_703 = 0;
}

void func_401()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405070.f_703.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_402()
{
	if (func_395())
	{
		if (Global_2405070.f_703.f_515 == Global_2405070.f_1219.f_515)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_1219), &(Global_2405070.f_703), 516);
		Global_2405070.f_490 = { Global_2405070.f_484 };
		Global_2405070.f_1735 = 1;
	}
}

int func_403()
{
	if ((Global_2405070.f_1736 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_703.f_515))
	{
		return 1;
	}
	return 0;
}

void func_404()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_362), &Global_2409626, 121);
}

void func_405()
{
	func_406();
	Global_2405070.f_2245 = 0;
}

void func_406()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405070.f_2246[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

void func_407()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2524719.f_4879))
	{
		if (!Global_2524719.f_4879 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2524719.f_4878 < 1f)
		{
			return;
		}
	}
	Global_2524719.f_4879 = -1;
	Global_2524719.f_4878 = 1f;
}

void func_408(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_2524719.f_4883.f_39), iParam0);
}

void func_409(int iParam0)
{
	if (func_410() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_410()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_412(float fParam0)
{
	float fVar0;
	
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_413())
	{
		return;
	}
	fVar0 = (Global_2524719.f_4878 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2524719.f_4879))
	{
		if (!Global_2524719.f_4879 == SCRIPT::GET_ID_OF_THIS_THREAD() && GAMEPLAY::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2524719.f_4878 = fParam0;
	Global_2524719.f_4879 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_413()
{
	switch (func_414())
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

int func_414()
{
	return Global_25459;
}

float func_415(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_416(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_417(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_418(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_419(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_420(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405070.f_44.f_49 = { vParam0 };
	Global_2405070.f_44.f_52 = iParam3;
	Global_2405070.f_44.f_53 = iParam4;
}

int func_421(int iParam0)
{
	if (func_20(iParam0))
	{
		if (func_364(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_422(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_423(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_379();
	}
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12409;
		
		case 142:
			return Global_262145.f_12397;
		
		case 157:
			return Global_262145.f_12364;
		
		case 159:
			return Global_262145.f_12347;
		
		case 162:
			return Global_262145.f_12458;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

bool func_424(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_425()
{
	bool bVar0;
	
	if (func_428())
	{
		bVar0 = true;
	}
	else if (func_427())
	{
		bVar0 = true;
	}
	else if (func_426(PLAYER::PLAYER_ID()) > 0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_12), PLAYER::PLAYER_PED_ID()))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
				}
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_12), 1, 1);
				OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_110.f_12));
				ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_110.f_12), 1, 0);
				unk_0x867458251D47CCB2(NETWORK::NET_TO_OBJ(Local_110.f_12), 0);
			}
		}
	}
	return bVar0;
}

int func_426(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196;
}

bool func_427()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 20);
}

int func_428()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_382.f_5, 0))
	{
		return 1;
	}
	if (func_430() && Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_98 != 3)
	{
		return 1;
	}
	if (func_429() && Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_98 != 3)
	{
		return 1;
	}
	if (Global_2394768)
	{
		return 1;
	}
	if (Global_1574631.f_20)
	{
		return 1;
	}
	return 0;
}

var func_429()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 5);
}

int func_430()
{
	if (((func_433() || func_427()) || func_432()) || func_431())
	{
		return 1;
	}
	return 0;
}

var func_431()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 1);
}

var func_432()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 2);
}

bool func_433()
{
	return Global_2448386.f_587;
}

void func_434()
{
	if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 6))
	{
		if (func_1093())
		{
			if (func_362(PLAYER::PLAYER_ID()) >= 1)
			{
				if (func_436(82, func_524(), 0, 0))
				{
					GAMEPLAY::SET_BIT(&uLocal_368, 6);
				}
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(&uLocal_368, 6);
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 15))
	{
		if (func_1077() == 0 || func_1077() == 3)
		{
			if (func_1093())
			{
				if (func_362(PLAYER::PLAYER_ID()) >= 1)
				{
					if (Local_110.f_5 != -1 || Local_110.f_7 != -1)
					{
						if (func_436(82, func_435(), 0, 0))
						{
							GAMEPLAY::SET_BIT(&uLocal_368, 15);
						}
					}
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&uLocal_368, 15);
			}
		}
	}
}

char* func_435()
{
	switch (func_1077())
	{
		case 0:
			return "GB_ASLT_MALT2";
		
		case 3:
			return "GB_ASLT_MMER2";
		
		default:
	}
	return "";
}

bool func_436(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_437(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_437(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_438(&uVar0, iParam0, func_523(), sParam1, iVar165, 3, uParam8, iParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_438(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, var uParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam2) > 7)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_522(sParam2, sParam3);
	iVar2 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam7))
	{
		iVar2 = GAMEPLAY::GET_HASH_KEY(uParam7);
	}
	if (func_521(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_515(uParam6))
	{
		return 0;
	}
	if (func_512(iVar0, iVar1, iVar2))
	{
		if (func_511())
		{
			return 0;
		}
		func_510();
		return func_445(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, uParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_444(iParam4))
	{
		return 0;
	}
	func_439(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_439(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1361724.f_40.f_1 = iParam0;
	Global_1361724.f_40.f_2 = iParam1;
	Global_1361724.f_40.f_3 = iParam2;
	StringCopy(&(Global_1361724.f_40.f_4), sParam3, 16);
	Global_1361724.f_40.f_8 = iParam4;
	Global_1361724.f_40.f_9 = iParam5;
	Global_1361724.f_40.f_14 = uParam6;
	func_440(iParam4);
	func_510();
	Global_1361724.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_440(int iParam0)
{
	if (func_443(iParam0))
	{
		func_442();
		return;
	}
	func_441();
}

void func_441()
{
	Global_1361724.f_40.f_10 = 0;
}

void func_442()
{
	Global_1361724.f_40.f_10 = 1;
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_444(int iParam0)
{
	return iParam0 > Global_1361724.f_40.f_8;
}

int func_445(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_509();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_506(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_503(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_506(uParam0, sParam3, sParam4);
		}
		return func_487(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_486(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_476(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_475(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_446(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_446(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_474();
	bVar0 = true;
	if (func_448(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_447(120000);
		return 1;
	}
	return 0;
}

void func_447(int iParam0)
{
	Global_1361724.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1361724.f_40.f_12 = 1;
}

int func_448(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_270(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1361724.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_473(uParam5, bParam6, &iVar3);
	uVar5 = func_471(iParam7, &iVar3);
	iVar6 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_470(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_452(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(uParam4, 0))
	{
		func_451();
	}
	func_474();
	func_450();
	func_449();
	return 1;
}

void func_449()
{
	Global_1361724.f_57 = 0;
	Global_1361724.f_57.f_1 = 0;
}

void func_450()
{
	Global_1361724.f_40 = 3;
}

void func_451()
{
	GAMEPLAY::SET_BIT(&Global_2383, 8);
}

int func_452(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_453(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			GAMEPLAY::SET_BIT(&Global_4268330, 0);
		}
		return 1;
	}
	return 0;
}

int func_453(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_464();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14513 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14513 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14513 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4268315 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_463() == 0)
	{
		func_461();
		return 0;
	}
	func_460(Global_4268314);
	StringCopy(&(Global_4267065[Global_4268314 /*104*/]), sParam1, 64);
	Global_4267065[Global_4268314 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4267065[Global_4268314 /*104*/].f_24 = iParam2;
	}
	Global_4267065[Global_4268314 /*104*/].f_25 = iParam7;
	Global_4267065[Global_4268314 /*104*/].f_26 = uParam8;
	Global_4267065[Global_4268314 /*104*/].f_29 = uParam9;
	Global_4267065[Global_4268314 /*104*/].f_30 = uParam12;
	Global_4267065[Global_4268314 /*104*/].f_31 = uParam11;
	Global_4267065[Global_4268314 /*104*/].f_28 = 0;
	Global_4267065[Global_4268314 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_33), sParam4, 64);
	Global_4267065[Global_4268314 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_50), sParam5, 64);
	Global_4267065[Global_4268314 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4267065[Global_4268314 /*104*/].f_83), sParam15, 64);
	func_464();
	switch (iParam16)
	{
		case 3:
			Global_4267065[Global_4268314 /*104*/].f_99[Global_14513] = 1;
			break;
		
		case 0:
			Global_4267065[Global_4268314 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4267065[Global_4268314 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4267065[Global_4268314 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14513)
		{
			case 0:
				func_459(0);
				break;
			
			case 1:
				func_459(1);
				break;
			
			case 2:
				func_459(2);
				break;
			
			case 3:
				func_459(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4268315 = 1;
				break;
			
			case 0:
				Global_4268315 = 1;
				break;
			
			case 2:
				Global_4268315 = 1;
				break;
			
			case 1:
				Global_4268315 = 1;
				break;
			}
	}
	Global_16891[Global_4268314] = 0;
	if (bParam10)
	{
		func_464();
		if (Global_14456)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14513)
			{
				case 0:
					StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_458())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_457(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_454(1);
			func_457(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_454(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_16890 = 0;
	Global_2988 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2952[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_456(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2384, 3))
								{
									iVar2 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14685 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_235(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_455(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106070.f_14113[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106070.f_14113[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106070.f_14113[iVar3 /*104*/].f_99[Global_14513] == 1)
											{
												Global_16890++;
											}
										}
									}
									iVar3++;
								}
								func_455(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71205)
								{
									iVar4 = 0;
									iVar4 = Global_4267064;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4267065[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4267065[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4267065[iVar5 /*104*/].f_99[Global_14513] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_455(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14513)
									{
										case 0:
											uVar6 = Global_37276;
											break;
										
										case 1:
											uVar6 = Global_37277;
											break;
										
										case 2:
											uVar6 = Global_37278;
											break;
										
										default:
											break;
									}
									func_455(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(uVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_455(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_235(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2389);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2384, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_235(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2384, 3))
								{
									iVar8 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14685 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_235(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_235(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2390[iVar1 /*15*/]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_2384, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_235(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_455(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_455(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_455(var uParam0, char* sParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(uParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam7))
	{
		func_235(uParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_235(iParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_235(iParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_235(iParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_235(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_456(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_457(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_458()
{
	return Global_1312857;
}

void func_459(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106070.f_14023[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_460(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = TIME::GET_CLOCK_SECONDS();
	uVar1 = TIME::GET_CLOCK_MINUTES();
	uVar2 = TIME::GET_CLOCK_HOURS();
	uVar3 = TIME::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = TIME::GET_CLOCK_MONTH() + 1;
	uVar5 = TIME::GET_CLOCK_YEAR();
	Global_4267065[iParam0 /*104*/].f_18 = uVar0;
	Global_4267065[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4267065[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4267065[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4267065[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4267065[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_461()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4268314 = 11;
	Global_4267065[Global_4268314 /*104*/].f_18 = -1;
	Global_4267065[Global_4268314 /*104*/].f_18.f_1 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_2 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_3 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_462(Global_4267065[iVar2 /*104*/].f_18, Global_4267065[Global_4268314 /*104*/].f_18))
		{
			Global_4268314 = iVar2;
		}
		iVar2++;
	}
	Global_4267065[Global_4268314 /*104*/].f_24 = 1;
}

int func_462(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_463()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4267065[iVar2 /*104*/].f_24 == 0)
		{
			Global_4268314 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4268314 = 11;
	Global_4267065[Global_4268314 /*104*/].f_18 = -1;
	Global_4267065[Global_4268314 /*104*/].f_18.f_1 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_2 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_3 = 0;
	Global_4267065[Global_4268314 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4267065[iVar2 /*104*/].f_24 == 0 || Global_4267065[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_462(Global_4267065[iVar2 /*104*/].f_18, Global_4267065[Global_4268314 /*104*/].f_18))
			{
				Global_4268314 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4268314 == 11)
	{
		return 0;
	}
	Global_4267065[Global_4268314 /*104*/].f_99[0] = 0;
	Global_4267065[Global_4268314 /*104*/].f_99[1] = 0;
	Global_4267065[Global_4268314 /*104*/].f_99[2] = 0;
	return 1;
}

void func_464()
{
	if (func_456(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_465();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

var func_465()
{
	func_466();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_466()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_469(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_468(PLAYER::PLAYER_PED_ID());
			if (func_467(iVar0) && (!func_456(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_467(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_467(int iParam0)
{
	return iParam0 < 3;
}

int func_468(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_469(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_469(int iParam0)
{
	if (func_467(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_470(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_453(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3090 = iParam10;
			GAMEPLAY::SET_BIT(&Global_4268330, 0);
		}
		return 1;
	}
	return 0;
}

int func_471(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_472(2, iParam1);
	return iParam0;
}

void func_472(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

var func_473(var uParam0, bool bParam1, int iParam2)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return sLocal_18;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_472(1, iParam2);
	if (bParam1)
	{
		return uParam0;
	}
	return UI::_GET_LABEL_TEXT(uParam0);
}

void func_474()
{
	Global_1361724.f_40.f_9 = 4;
}

int func_475(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_474();
	bVar0 = false;
	return func_448(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_476(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_477(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_477(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_18();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_270(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1361724.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16883 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_473(uParam5, bParam6, &iVar3);
	uVar5 = func_471(iParam7, &iVar3);
	iVar6 = 0;
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (GAMEPLAY::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_485(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_479(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(uParam4, 0))
	{
		func_451();
	}
	func_478();
	func_450();
	func_449();
	return 1;
}

void func_478()
{
	Global_1361724.f_40.f_9 = 3;
}

int func_479(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	GAMEPLAY::CLEAR_BIT(&Global_2383, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_480(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			GAMEPLAY::SET_BIT(&Global_2383, 1);
			GAMEPLAY::SET_BIT(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_480(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_464();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14513 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14513 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14513 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_106070.f_14023[Global_14513 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_484() == 0)
	{
		func_482();
		return 0;
	}
	func_481(Global_16889);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/]), sParam1, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_24 = iParam2;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_25 = iParam7;
	Global_106070.f_14113[Global_16889 /*104*/].f_26 = uParam8;
	Global_106070.f_14113[Global_16889 /*104*/].f_29 = uParam9;
	Global_106070.f_14113[Global_16889 /*104*/].f_30 = uParam12;
	Global_106070.f_14113[Global_16889 /*104*/].f_31 = uParam11;
	Global_106070.f_14113[Global_16889 /*104*/].f_28 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_33), sParam4, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_50), sParam5, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_83), sParam15, 64);
	if (GAMEPLAY::IS_BIT_SET(Global_2383, 10))
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
		Global_3089 = 4;
		func_459(0);
		func_459(2);
		func_459(1);
	}
	else
	{
		func_464();
		switch (iParam16)
		{
			case 3:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[Global_14513] = 1;
				break;
			
			case 0:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14513)
			{
				case 0:
					func_459(0);
					Global_3089 = 0;
					break;
				
				case 1:
					func_459(1);
					Global_3089 = 1;
					break;
				
				case 2:
					func_459(2);
					Global_3089 = 2;
					break;
				
				case 3:
					func_459(3);
					Global_3089 = 3;
					break;
				
				default:
					Global_3089 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2383, 10))
		{
			Global_106070.f_14023[0 /*20*/].f_17 = 1;
			Global_106070.f_14023[1 /*20*/].f_17 = 1;
			Global_106070.f_14023[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106070.f_14023[Global_14513 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106070.f_14023[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106070.f_14023[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106070.f_14023[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16891[Global_16889] = 0;
	if (bParam10)
	{
		func_464();
		if (Global_14456)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14513)
			{
				case 0:
					StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_458())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_457(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_454(1);
			func_457(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_481(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = TIME::GET_CLOCK_SECONDS();
	uVar1 = TIME::GET_CLOCK_MINUTES();
	uVar2 = TIME::GET_CLOCK_HOURS();
	uVar3 = TIME::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = TIME::GET_CLOCK_MONTH() + 1;
	uVar5 = TIME::GET_CLOCK_YEAR();
	Global_106070.f_14113[iParam0 /*104*/].f_18 = uVar0;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_482()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_483(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
		{
			Global_16889 = iVar2;
		}
		iVar2++;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_24 = 1;
}

int func_483(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_484()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0)
		{
			Global_16889 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0 || Global_106070.f_14113[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_483(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
			{
				Global_16889 = iVar2;
			}
		}
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16889 == 34)
	{
		return 0;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 0;
	return 1;
}

int func_485(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	GAMEPLAY::CLEAR_BIT(&Global_2383, 10);
	iVar0 = 3;
	if (func_480(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3090 = iParam10;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			StringCopy(&Global_3071, sParam5, 64);
			GAMEPLAY::SET_BIT(&Global_2383, 1);
			GAMEPLAY::SET_BIT(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_486(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_478();
	bVar0 = true;
	if (func_477(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_447(120000);
		return 1;
	}
	return 0;
}

int func_487(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (GAMEPLAY::IS_BIT_SET(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (GAMEPLAY::IS_BIT_SET(uParam4, 4))
	{
		bVar0 = func_502(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_493(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (GAMEPLAY::IS_BIT_SET(uParam4, 3))
		{
			func_492(1);
		}
		if (GAMEPLAY::IS_BIT_SET(uParam4, 5))
		{
			func_491(1);
		}
		func_490();
		func_450();
		func_489();
		func_488();
		return 1;
	}
	return 0;
}

void func_488()
{
	Global_2533659 = 0;
}

void func_489()
{
	Global_1361724.f_57 = 1;
	Global_1361724.f_57.f_1 = 0;
}

void func_490()
{
	Global_1361724.f_40.f_9 = 1;
}

void func_491(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2385, 0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2385, 0);
	}
}

void func_492(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, 20);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 20);
	}
}

int func_493(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_501(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	Global_2621441 = 0;
	return func_494(sParam3, iParam4, bParam7);
}

int func_494(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_500();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_346(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_499();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2383, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2384, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2385, 0);
			if (bParam2)
			{
				func_464();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_498())
				{
					return 0;
				}
				if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_497())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2383, 9))
				{
					return 0;
				}
			}
			func_496();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_495();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_500();
	}
	return 0;
}

void func_495()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15822 = 1;
}

void func_496()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2384, 16);
}

int func_497()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_498()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_499()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

void func_500()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16833 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15822 = 6;
		return;
	}
}

void func_501(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = iParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

int func_502(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_501(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15870 = 1;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 0;
	Global_15876 = 0;
	Global_2621441 = 0;
	return func_494(sParam3, iParam4, bParam7);
}

int func_503(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_505(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_504();
		func_490();
		func_450();
		func_489();
		func_488();
		return 1;
	}
	return 0;
}

void func_504()
{
	Global_16840 = 0;
}

bool func_505(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_501(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15870 = 0;
	Global_15829 = 1;
	Global_15836 = 0;
	Global_15831 = 1;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_15827 = 0;
	Global_15874 = 1;
	Global_15876 = 0;
	StringCopy(&Global_15970, sParam5, 24);
	Global_2621441 = 0;
	return func_494(sParam3, iParam4, bParam8);
}

int func_506(var uParam0, char* sParam1, char* sParam2)
{
	if (func_508(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_507();
		func_450();
		func_489();
		return 1;
	}
	return 0;
}

void func_507()
{
	Global_1361724.f_40.f_9 = 2;
}

bool func_508(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_501(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_494(sParam2, iParam3, 0);
}

void func_509()
{
	Global_1361724.f_55 = Global_1361724.f_40.f_1;
	Global_1361724.f_55.f_1 = Global_1361724.f_40.f_10;
}

void func_510()
{
	Global_1361724.f_40 = 1;
}

bool func_511()
{
	return Global_1361724.f_40 == 1;
}

int func_512(int iParam0, int iParam1, int iParam2)
{
	if (!func_513(iParam0))
	{
		return 0;
	}
	if (Global_1361724.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1361724.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_513(int iParam0)
{
	if (!func_514())
	{
		return 0;
	}
	if (!Global_1361724.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_514()
{
	if (Global_1361724.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_515(var uParam0)
{
	if (func_520())
	{
		return 0;
	}
	if (func_519())
	{
		return 0;
	}
	if (func_518(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1654543 || func_517())
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0, 6))
	{
		if (func_516())
		{
			return 0;
		}
	}
	return 1;
}

bool func_516()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1378623);
}

int func_517()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_518(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 14))
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
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_519()
{
	return Global_1361724.f_40 == 3;
}

bool func_520()
{
	return func_497();
}

int func_521(int iParam0, int iParam1, int iParam2)
{
	if (!func_519())
	{
		return 0;
	}
	return func_512(iParam0, iParam1, iParam2);
}

var func_522(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return GAMEPLAY::GET_HASH_KEY(&cVar0);
}

char* func_523()
{
	return "TXTMSG";
}

char* func_524()
{
	switch (func_1077())
	{
		case 0:
			return "GB_ASLT_MALT";
		
		case 1:
			return "GB_ASLT_MZAN";
		
		case 2:
			return "GB_ASLT_MAIR";
		
		case 3:
			return "GB_ASLT_MMER";
		
		default:
	}
	return "";
}

void func_525()
{
	vector3 vVar0;
	
	if (func_1077() == 0)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 7))
		{
			if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, func_526(), 1) < 200f)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					GAMEPLAY::SET_BIT(&uLocal_369, 7);
				}
			}
		}
		else if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, func_526(), 1) < 121f)
		{
			PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
		}
	}
}

Vector3 func_526()
{
	vector3 vVar0;
	
	switch (func_1077())
	{
		case 0:
			vVar0 = { -1166.252f, 4926.183f, 222.0286f };
			break;
		
		case 1:
			vVar0 = { -2115.022f, 3295.797f, 31.8103f };
			break;
		
		case 2:
			vVar0 = { -1289.853f, -3388.459f, 12.9452f };
			break;
		
		case 3:
			vVar0 = { 542.5379f, -3196.361f, 5.0693f };
			break;
	}
	return vVar0;
}

void func_527()
{
	int iVar0;
	
	if (!func_1093() && !func_376())
	{
		return;
	}
	if (!func_263(PLAYER::PLAYER_ID(), 20))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_368, 18))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_517, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_517, 0);
				GAMEPLAY::CLEAR_BIT(&uLocal_368, 18);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&uLocal_368, 18);
			}
		}
		else if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (iLocal_517 != iVar0)
			{
				iLocal_517 = iVar0;
			}
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 18))
	{
		GAMEPLAY::SET_BIT(&uLocal_368, 18);
	}
}

void func_528()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (!func_1093() && !func_376())
	{
		return;
	}
	if (!func_539())
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 10))
	{
		if (Local_110.f_51 > 1)
		{
			if (func_537())
			{
				if (!func_536())
				{
					if (!func_535())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(func_534());
						GAMEPLAY::SET_BIT(&uLocal_368, 10);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_534(), 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
					else if (func_533())
					{
						PLAYER::SET_MAX_WANTED_LEVEL(func_534());
						GAMEPLAY::SET_BIT(&uLocal_368, 10);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_534(), 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
				}
			}
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		if (func_537())
		{
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
		}
	}
	if (Local_110.f_5 != -1)
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 11))
		{
			if (Local_110.f_5 == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				PLAYER::SET_MAX_WANTED_LEVEL(func_534());
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_534(), 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				GAMEPLAY::SET_BIT(&uLocal_368, 11);
			}
			else if (func_531())
			{
				iVar0 = func_530();
				if (iVar0 != func_18())
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 10))
					{
						PLAYER::SET_MAX_WANTED_LEVEL(func_534());
						GAMEPLAY::SET_BIT(&uLocal_368, 10);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
						{
							if (func_529(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED(iVar0), 1) <= 200f)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), func_534(), 0);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								GAMEPLAY::SET_BIT(&uLocal_368, 11);
							}
						}
					}
				}
			}
		}
		else if (!func_531())
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_368, 11);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(uLocal_368, 11))
	{
		GAMEPLAY::CLEAR_BIT(&uLocal_368, 11);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 8))
		{
			iVar1 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			if (iLocal_505 != iVar1)
			{
				iLocal_505 = iVar1;
			}
			if (iVar1 > 0)
			{
				if (func_1093())
				{
					fVar2 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_526(), 1);
					if (fVar2 < 150f)
					{
						PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
						PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
					}
				}
			}
		}
		else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (iLocal_505 > 0)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(func_534());
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_505, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			GAMEPLAY::CLEAR_BIT(&uLocal_368, 8);
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 8))
	{
		GAMEPLAY::SET_BIT(&uLocal_368, 8);
	}
}

float func_529(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 0) };
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

int func_530()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_110.f_5;
	if (iVar1 != -1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		}
	}
	return iVar0;
}

int func_531()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_530();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	iVar1 = func_532();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_532()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11;
}

bool func_533()
{
	return (((GAMEPLAY::IS_BIT_SET(Local_110.f_1, 11) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 12)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 13)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 14));
}

int func_534()
{
	switch (func_1077())
	{
		case 1:
			return Global_262145.f_12339;
		
		case 2:
			return Global_262145.f_12341;
		
		case 0:
			return Global_262145.f_12338;
		
		case 3:
			return Global_262145.f_12340;
		
		default:
	}
	return 5;
}

int func_535()
{
	switch (func_1077())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_536()
{
	switch (func_1077())
	{
		case 0:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

int func_537()
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_1077();
	switch (iVar0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_526(), 1) < 121f)
				{
					return 1;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (func_538(vVar1, 3, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (func_538(vVar1, 2, 1000, 0))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_526(), 1) < 200f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_538(vector3 vParam0, int iParam3, int iParam4, bool bParam5)
{
	vector3 vVar0[15];
	vector3 vVar46[15];
	float fVar92[15];
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	
	iVar110 = 0;
	switch (iParam3)
	{
		case 1:
			vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			vVar46[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar92[0] = 171.25f;
			vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			vVar46[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar92[1] = 132f;
			vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			vVar46[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar92[2] = 132f;
			iVar108 = 3;
			break;
		
		case 2:
			vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			vVar46[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 247f;
			vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			vVar46[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 149f;
			vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			vVar46[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 185.5f;
			vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			vVar46[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 250f;
			vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			vVar46[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 193.5f;
			vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			vVar46[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 234.5f;
			vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			vVar46[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar92[6] = 16f;
			vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			vVar46[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 80f;
			vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			vVar46[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 142f;
			vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			vVar46[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam4)) };
			fVar92[9] = 30.75f;
			vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			vVar46[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam4)) };
			fVar92[10] = 150f;
			vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			vVar46[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam4)) };
			fVar92[11] = 29.25f;
			vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			vVar46[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam4)) };
			fVar92[12] = 43f;
			iVar108 = 13;
			break;
		
		case 3:
			vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			vVar46[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam4)) };
			fVar92[0] = 255f;
			vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			vVar46[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam4)) };
			fVar92[1] = 180f;
			vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			vVar46[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam4)) };
			fVar92[2] = 205f;
			vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			vVar46[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam4)) };
			fVar92[3] = 86.25f;
			vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			vVar46[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[4] = 150.5f;
			vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			vVar46[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam4)) };
			fVar92[5] = 140.5f;
			vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			vVar46[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam4)) };
			fVar92[6] = 90f;
			vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			vVar46[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam4)) };
			fVar92[7] = 100f;
			vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			vVar46[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam4)) };
			fVar92[8] = 248.75f;
			vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			vVar46[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar92[9] = 128f;
			vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			vVar46[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar92[10] = 127.25f;
			vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			vVar46[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar92[11] = 16f;
			vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			vVar46[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar92[12] = 214.25f;
			vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			vVar46[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar92[13] = 65.75f;
			if (bParam5)
			{
				iVar111 = iParam4;
			}
			else
			{
				iVar111 = 0;
			}
			vVar46[9 /*3*/].f_2 = (vVar46[9 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[10 /*3*/].f_2 = (vVar46[10 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[11 /*3*/].f_2 = (vVar46[11 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[12 /*3*/].f_2 = (vVar46[12 /*3*/].f_2 + IntToFloat(iVar111));
			vVar46[13 /*3*/].f_2 = (vVar46[13 /*3*/].f_2 + IntToFloat(iVar111));
			iVar108 = 14;
			break;
		
		case 4:
			vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			vVar46[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam4)) };
			fVar92[0] = 114f;
			vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			vVar46[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam4)) };
			fVar92[1] = 88.5f;
			vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			vVar46[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam4)) };
			fVar92[2] = 133.25f;
			vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			vVar46[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam4)) };
			fVar92[3] = 104.5f;
			vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			vVar46[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam4)) };
			fVar92[4] = 121.75f;
			vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			vVar46[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam4)) };
			fVar92[5] = 84.5f;
			vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			vVar46[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam4)) };
			fVar92[6] = 103.75f;
			vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			vVar46[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam4)) };
			fVar92[7] = 104.25f;
			vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			vVar46[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam4)) };
			fVar92[8] = 91f;
			vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			vVar46[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam4)) };
			fVar92[9] = 51.25f;
			iVar108 = 10;
			break;
		
		case 5:
			vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			vVar46[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam4)) };
			fVar92[0] = 45.75f;
			vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			vVar46[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam4)) };
			fVar92[1] = 99f;
			vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			vVar46[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam4)) };
			fVar92[2] = 81.5f;
			iVar108 = 3;
			break;
		
		case 6:
			vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			vVar46[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam4)) };
			fVar92[0] = 120f;
			vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			vVar46[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar92[1] = 170f;
			vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			vVar46[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar92[2] = 12.5f;
			vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			vVar46[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar92[3] = 9.75f;
			iVar108 = 4;
			break;
		
		case 7:
			vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			vVar46[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam4)) };
			fVar92[0] = 162f;
			vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			vVar46[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam4)) };
			fVar92[1] = 124f;
			vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			vVar46[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam4)) };
			fVar92[2] = 55f;
			vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			vVar46[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam4)) };
			fVar92[3] = 142f;
			iVar108 = 4;
			break;
		
		case 8:
			vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			vVar46[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar92[0] = 7.75f;
			vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			vVar46[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar92[1] = 14.75f;
			vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			vVar46[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar92[2] = 31.5f;
			vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			vVar46[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar92[3] = 30.5f;
			vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			vVar46[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar92[4] = 6.75f;
			iVar108 = 5;
			break;
	}
	iVar109 = 0;
	while (iVar109 < iVar108)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0[iVar109 /*3*/], vVar46[iVar109 /*3*/], fVar92[iVar109], iVar110, 1))
		{
			return 1;
		}
		iVar109++;
	}
	return 0;
}

int func_539()
{
	if (!func_541(1, 1, 1))
	{
		return 0;
	}
	if (func_366())
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 11))
		{
			if (!func_540())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
				{
					GAMEPLAY::SET_BIT(&uLocal_369, 11);
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_12), 1, 1);
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&uLocal_369, 11);
			}
		}
		return 0;
	}
	if (func_362(PLAYER::PLAYER_ID()) < 1)
	{
		return 0;
	}
	if (func_1093())
	{
		return 1;
	}
	if (func_376())
	{
		return 1;
	}
	return 0;
}

bool func_540()
{
	int iVar0;
	
	iVar0 = func_1077();
	return iVar0 == 1;
}

int func_541(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_576(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_370(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_282(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_143(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_575())
	{
		return 0;
	}
	if (func_351())
	{
		return 0;
	}
	if (func_458())
	{
		return 0;
	}
	if (func_345())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_76(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_347())
	{
		return 0;
	}
	if (func_370(PLAYER::PLAYER_ID(), 0) || func_370(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_370(PLAYER::PLAYER_ID(), 12) || func_370(PLAYER::PLAYER_ID(), 14)) || func_370(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_571(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_546())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_545())
		{
			return 0;
		}
	}
	if (Global_1654543)
	{
		return 0;
	}
	if (func_157(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_517())
	{
		return 0;
	}
	if (func_544(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_543())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 4))
	{
		return 0;
	}
	if (func_542(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_542(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_261.f_4 != 0 || Global_2423801[iParam0 /*413*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_543()
{
	return Global_1668658.f_3359 != -1;
}

int func_544(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 14))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 11))
	{
		return 1;
	}
	return 0;
}

bool func_545()
{
	return Global_93284.f_328 > 0;
}

int func_546()
{
	int iVar0;
	
	iVar0 = func_288(PLAYER::PLAYER_ID());
	if (((func_570(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_24) || func_569(PLAYER::PLAYER_ID())) || func_568(PLAYER::PLAYER_ID())) || func_563(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_561(PLAYER::PLAYER_ID()))
	{
		if (func_560(iVar0) || func_559(iVar0))
		{
			return 1;
		}
	}
	if (func_558(PLAYER::PLAYER_ID()))
	{
		if (func_559(iVar0))
		{
			return 1;
		}
	}
	if (func_557(PLAYER::PLAYER_ID()))
	{
		if (func_556(iVar0))
		{
			return 1;
		}
	}
	if (func_555(PLAYER::PLAYER_ID()))
	{
		if (func_554(iVar0))
		{
			return 1;
		}
	}
	if (func_553(PLAYER::PLAYER_ID()))
	{
		if (func_552(iVar0))
		{
			return 1;
		}
	}
	if (func_551(PLAYER::PLAYER_ID()))
	{
		if (func_550(iVar0))
		{
			return 1;
		}
	}
	if (func_55(PLAYER::PLAYER_ID(), 0))
	{
		if (func_549(iVar0))
		{
			if (func_547(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_547(int iParam0)
{
	if (func_548(iParam0) != func_18())
	{
		return func_548(iParam0) == func_44(iParam0);
	}
	return 0;
}

int func_548(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_35;
}

int func_549(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_550(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_551(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_56(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_552(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_553(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_56(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_555(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_56(Global_2423801[iParam0 /*413*/].f_309.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_556(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_557(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_56(Global_2423801[iParam0 /*413*/].f_309.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_558(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_56(Global_2423801[iParam0 /*413*/].f_309.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_559(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_560(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_561(int iParam0)
{
	if (func_562(Global_1589747[iParam0 /*790*/].f_273.f_24, -1))
	{
		return 1;
	}
	return 0;
}

int func_562(int iParam0, int iParam1)
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

int func_563(int iParam0)
{
	if (func_564(Global_1589747[iParam0 /*790*/].f_273.f_24, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_564(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_565(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_565(PLAYER::PLAYER_ID(), 0))
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

int func_565(int iParam0, bool bParam1)
{
	if (Global_1589590 != func_18())
	{
		if (!func_567(Global_1589590))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1589590)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2423801[Global_1589590 /*413*/].f_195, 24) || func_566(Global_1589590))
				{
					return 1;
				}
			}
		}
	}
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 24);
}

int func_566(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 9);
	}
	return 0;
}

int func_567(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 2);
	}
	return 0;
}

int func_568(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_56(Global_2423801[iParam0 /*413*/].f_309.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_569(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_56(Global_2423801[iParam0 /*413*/].f_309.f_4) == 0;
			}
		}
	}
	return 0;
}

int func_570(int iParam0)
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

int func_571(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (Global_1589747[iParam0 /*790*/].f_273.f_24 > 0)
	{
		if (bParam1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_569(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_558(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_568(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_557(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_555(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_553(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_574(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_551(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_573(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_55(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_572(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_572(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_56(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_573(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_56(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_574(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_1202(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_18())
			{
				return func_56(Global_2423801[iParam0 /*413*/].f_309.f_4) == 8;
			}
		}
	}
	return 0;
}

bool func_575()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 0);
}

bool func_576(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_5, iParam1);
}

void func_577()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	char* sVar5;
	int iVar6;
	
	if (Local_110.f_3 != 1)
	{
		return;
	}
	if (!func_539())
	{
		if (iLocal_504 != -2)
		{
			if (iLocal_504 > -1)
			{
				uVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_504);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar4))
				{
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(uVar4);
					if (iVar2 != PLAYER::PLAYER_ID())
					{
						func_658(iVar2, 421, 0, 0);
						if (!func_1093())
						{
							func_657(iVar2, 1, 0, 0);
							func_656(iVar2, 0, 0, 0);
							func_655(iVar2, 0);
							func_652(iVar2, Global_262145.f_12242, 0, 0);
						}
					}
				}
			}
			else if (UI::DOES_BLIP_EXIST(uLocal_502))
			{
				UI::REMOVE_BLIP(&uLocal_502);
			}
			if (UI::DOES_BLIP_EXIST(uLocal_500))
			{
				UI::REMOVE_BLIP(&uLocal_500);
			}
			iLocal_504 = -2;
			func_651();
		}
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_21(Local_110.f_29[0]))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_29[0])))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_110.f_29[0]), -1, 0) == PLAYER::PLAYER_PED_ID())
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 8))
						{
							GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 8);
							func_379();
							func_381(0);
							if (UI::DOES_BLIP_EXIST(uLocal_502))
							{
								UI::REMOVE_BLIP(&uLocal_502);
							}
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 8))
					{
						GAMEPLAY::CLEAR_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 8);
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 8))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 8);
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 8))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 8);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 8))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 8);
		}
		if (iLocal_504 != Local_110.f_7)
		{
			if (func_21(Local_110.f_29[0]))
			{
				if (Local_110.f_7 == -1)
				{
					if (func_539())
					{
						if (func_362(PLAYER::PLAYER_ID()) >= 1)
						{
							uVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_504);
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar4))
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(uVar4);
								if (iVar2 != PLAYER::PLAYER_ID())
								{
									func_658(iVar2, 421, 0, 0);
									if (!func_1093())
									{
										func_657(iVar2, 1, 0, 0);
										func_656(iVar2, 0, 0, 0);
										func_655(iVar2, 0);
										func_652(iVar2, Global_262145.f_12242, 0, 0);
									}
								}
							}
						}
					}
					func_648();
				}
				else
				{
					uVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_7);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar4))
					{
						if (func_539())
						{
							if (func_362(PLAYER::PLAYER_ID()) >= 1)
							{
								iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(uVar4);
								if (UI::DOES_BLIP_EXIST(uLocal_502))
								{
									UI::REMOVE_BLIP(&uLocal_502);
								}
								if (iVar2 != PLAYER::PLAYER_ID())
								{
									if (!func_1093())
									{
										if (!func_646())
										{
											func_658(iVar2, 421, 1, 0);
											func_656(iVar2, 1, 1, 0);
											func_657(iVar2, 1, 1, 0);
											func_655(iVar2, 1);
											func_652(iVar2, Global_262145.f_12242, 1, 0);
										}
										else
										{
											func_658(iVar2, 421, 1, 0);
											func_652(iVar2, Global_262145.f_12242, 1, 0);
										}
									}
									else if (func_646())
									{
										func_658(iVar2, 421, 1, 0);
										func_652(iVar2, Global_262145.f_12242, 1, 0);
									}
									else
									{
										func_658(iVar2, 421, 1, 0);
										func_656(iVar2, 1, 1, 0);
										func_657(iVar2, 1, 1, 0);
										func_655(iVar2, 1);
										func_652(iVar2, Global_262145.f_12242, 1, 0);
									}
								}
								if (iVar2 != PLAYER::PLAYER_ID())
								{
									func_619("GB_AST_TCKR", iVar2, 0, 0, 0, 1, 1, 0);
								}
							}
						}
					}
				}
				iLocal_504 = Local_110.f_7;
				if (iLocal_504 == -1)
				{
				}
			}
		}
		if (func_539())
		{
			if (func_362(PLAYER::PLAYER_ID()) > 2)
			{
				if (iLocal_504 == -1)
				{
					if (func_1093())
					{
						if (!func_618("GB_AST_RETV"))
						{
							func_615("GB_AST_RETV", 0);
						}
					}
					else if (func_376())
					{
						if (!func_618("GB_AST_DESR"))
						{
							func_615("GB_AST_DESR", 0);
						}
					}
				}
				else if (iLocal_504 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (func_1093())
					{
						if (!func_618("GB_AST_DROPV"))
						{
							func_615("GB_AST_DROPV", 0);
						}
					}
				}
				else
				{
					iVar2 = func_614();
					if (iVar2 != func_18())
					{
						if (func_1074(1))
						{
							iVar3 = func_532();
							if (iVar3 != func_18() && func_16(iVar2, iVar3, 1))
							{
								if (!func_618("GB_AST_DROPBV"))
								{
									iVar0 = func_260(iVar2);
									if (iVar0 > -1)
									{
										uVar1 = func_258(iVar0);
										func_602("GB_AST_DROPBV", iVar2, "GB_AST_RNO", 1, uVar1, 0);
									}
								}
							}
							else if (!func_618("GB_AST_DESR"))
							{
								func_615("GB_AST_DESR", 0);
							}
						}
						else if (!func_618("GB_AST_DESR"))
						{
							func_615("GB_AST_DESR", 0);
						}
					}
				}
			}
		}
		if (iLocal_504 == -1)
		{
			if (UI::DOES_BLIP_EXIST(uLocal_500))
			{
				UI::REMOVE_BLIP(&uLocal_500);
			}
			func_648();
		}
		else if (iLocal_504 == NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (UI::DOES_BLIP_EXIST(uLocal_502))
			{
				UI::REMOVE_BLIP(&uLocal_502);
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 8))
			{
				if (func_362(PLAYER::PLAYER_ID()) >= 1)
				{
					if (!UI::DOES_BLIP_EXIST(uLocal_500))
					{
						uLocal_500 = UI::ADD_BLIP_FOR_COORD(func_24());
						UI::SET_BLIP_ROUTE(uLocal_500, 1);
					}
				}
				else if (UI::DOES_BLIP_EXIST(uLocal_500))
				{
					UI::REMOVE_BLIP(&uLocal_500);
				}
			}
			else if (UI::DOES_BLIP_EXIST(uLocal_500))
			{
				UI::REMOVE_BLIP(&uLocal_500);
			}
		}
		else
		{
			if (UI::DOES_BLIP_EXIST(uLocal_502))
			{
				UI::REMOVE_BLIP(&uLocal_502);
			}
			iVar2 = func_614();
			if (iVar2 != func_18())
			{
				if (func_1074(1))
				{
					iVar3 = func_532();
					if (iVar3 != func_18())
					{
						if (func_16(iVar2, iVar3, 1))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
							{
								if (func_362(PLAYER::PLAYER_ID()) >= 1)
								{
									if (!UI::DOES_BLIP_EXIST(uLocal_500))
									{
										uLocal_500 = UI::ADD_BLIP_FOR_COORD(func_24());
										UI::SET_BLIP_ROUTE(uLocal_500, 1);
									}
								}
							}
							else if (UI::DOES_BLIP_EXIST(uLocal_500))
							{
								UI::REMOVE_BLIP(&uLocal_500);
							}
						}
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 2))
		{
			if (func_376())
			{
				if (!func_601(86))
				{
					if (func_362(PLAYER::PLAYER_ID()) >= 1)
					{
						if (func_595(0, 1, 1, 1))
						{
							sVar5 = func_589(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
							iVar6 = func_588(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
							if (func_1074(1))
							{
								func_587("GB_AST_HELP3", sVar5, iVar6, -1);
							}
							else
							{
								func_587("GB_AST_HELP6", sVar5, iVar6, -1);
							}
							func_586(1);
							GAMEPLAY::SET_BIT(&uLocal_368, 2);
						}
					}
				}
			}
		}
		func_580();
	}
	func_578();
}

void func_578()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (!func_539())
	{
		return;
	}
	if (!func_1093() && !func_376())
	{
		return;
	}
	bVar6 = false;
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
	{
		if (func_21(Local_110.f_29[0]))
		{
			if (Local_110.f_7 == -1)
			{
				if (!func_376())
				{
					UI::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else
				{
					UI::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				bVar6 = true;
			}
			else
			{
				iVar5 = func_614();
				if (iVar5 != func_18())
				{
					if (!func_1074(1))
					{
						UI::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
						bVar6 = true;
					}
					else
					{
						iVar4 = func_532();
						if (iVar4 != func_18() && !func_16(iVar5, iVar4, 1))
						{
							UI::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
							bVar6 = true;
						}
					}
				}
			}
			if (bVar6)
			{
				func_579(NETWORK::NET_TO_VEH(Local_110.f_29[0]), uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_579(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0), &vVar0, &vVar3);
	fVar7 = ((vVar3.z - vVar0.z) / 2f);
	fVar8 = (vVar3.z - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(uParam0, 1) + Vector((((vVar3.z - vVar0.z) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_580()
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = func_614();
	vVar1 = { func_24() };
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_29[0]))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 9))
			{
				if (iVar0 == PLAYER::PLAYER_ID())
				{
					if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar0), vVar1, 6f, 6f, 2f, 1, 1, 0))
						{
							func_581(NETWORK::NET_TO_VEH(Local_110.f_29[0]), &uLocal_526, 0, 1);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_VEH(Local_110.f_29[0])))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(NETWORK::NET_TO_VEH(Local_110.f_29[0]), 1);
							}
							GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 9);
						}
					}
				}
			}
		}
	}
}

int func_581(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_584(uParam0, 1, 1, 0, 0, 0, 1, 0))
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_1202(iVar1, 0, 1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), uParam0, 0))
					{
						func_582(func_583(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = NETWORK::GET_NETWORK_TIME();
		}
	}
	else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0);
	}
	else
	{
		if (bParam3)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(uParam0, 1);
		}
		ENTITY::FREEZE_ENTITY_POSITION(uParam0, 0);
		if (bParam2)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_582(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = 325218053;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = GAMEPLAY::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 9, iParam0);
	}
}

int func_583(int iParam0)
{
	var uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_584(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_585(uParam0, (iVar0 - 1), bParam6, iParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (iParam2 && PED::IS_PED_A_PLAYER(iVar2))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
					{
						if (!bParam5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_585(var uParam0, int iParam1, bool bParam2, var uParam3)
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0, iParam1, uParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0, iParam1, uParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(uParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || AI::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0, 0), ENTITY::GET_ENTITY_COORDS(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_586(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_317(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_298())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_587(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}

int func_588(int iParam0)
{
	int iVar0;
	
	iVar0 = func_260(iParam0);
	if (iVar0 != -1)
	{
		return func_258(iVar0);
	}
	return 1;
}

char* func_589(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		uVar0 = func_594(&(Global_1625435[iParam0 /*560*/].f_11.f_99));
		return uVar0;
	}
	if (Global_1625435[iParam0 /*560*/].f_11.f_115 != Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_115)
	{
		uVar0 = func_592(iParam0, 0);
		return uVar0;
	}
	if (((func_263(iParam0, 28) || func_263(PLAYER::PLAYER_ID(), 28)) || func_591(iParam0)) && !func_590(iParam0))
	{
		return func_592(iParam0, 0);
	}
	iVar1 = func_44(iParam0);
	if (iVar1 != func_18())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_592(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_18())
	{
		uVar0 = func_594(&(Global_1625435[iVar1 /*560*/].f_11.f_99));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar0))
		{
			return func_592(iVar1, 0);
		}
		else
		{
			return uVar0;
		}
	}
	return "";
}

int func_590(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_45(iParam0) };
	if (GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(0))
		{
			if (NETWORK::_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_591(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_18())
	{
		Var0 = { func_45(iParam0) };
		if (GAMEPLAY::IS_ORBIS_VERSION() || GAMEPLAY::IS_PC_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				if (NETWORK::_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_592(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_243(iParam0, 1))
		{
			return func_593();
		}
	}
	return UI::_GET_LABEL_TEXT("GB_REST_ACC");
}

var func_593()
{
	return UI::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_594(var uParam0)
{
	return uParam0;
}

int func_595(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_600())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_352())
	{
		return 0;
	}
	if (func_575())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_75(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_599(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_598())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574167)
	{
		return 0;
	}
	if (func_597())
	{
		return 0;
	}
	if (func_596())
	{
		return 0;
	}
	if (func_345())
	{
		return 0;
	}
	if (Global_68494)
	{
		return 0;
	}
	if (Global_2534143)
	{
		return 0;
	}
	return 1;
}

bool func_596()
{
	return Global_2448386.f_580;
}

bool func_597()
{
	return Global_2448386.f_733;
}

bool func_598()
{
	return Global_2437022.f_3028.f_578;
}

int func_599(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_600()
{
	if (Global_15822 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_601(int iParam0)
{
	return Global_2437022.f_2704[0 /*80*/].f_1 == iParam0;
}

void func_602(char* sParam0, int iParam1, char* sParam2, int iParam3, var uParam4, bool bParam5)
{
	if (func_603(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), sParam2, bParam5, iParam3))
	{
		Global_1312576 = 15;
		Global_1312576.f_56 = iParam3;
		Global_1312576.f_57 = uParam4;
		Global_1312576.f_54 = iParam1;
	}
}

int func_603(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam1) > 63)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam2) > 63)
	{
		return 0;
	}
	if (func_613(sParam0, sParam1, sParam2) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_607();
	Global_1312576 = 10;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	StringCopy(&(Global_1312576.f_32), sParam2, 64);
	Global_1312576.f_58 = uParam4;
	Global_1312576.f_56 = uParam4;
	func_606();
	func_605(bParam3);
	func_604();
	return 1;
}

void func_604()
{
	GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 1);
}

void func_605(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312576.f_59), 0);
}

void func_606()
{
	Global_1312576.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_607()
{
	func_609();
	func_608(0);
}

void func_608(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_609()
{
	if (!func_612())
	{
	}
	if (func_611())
	{
		UI::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312576.f_12));
		func_610();
		UI::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_610()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			return;
		
		case 2:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_53);
			return;
		
		case 3:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 4:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 5:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 6:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 7:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 8:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 9:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 10:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		case 12:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 13:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 11:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 14:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 15:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 17:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			return;
		
		case 16:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 19:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 18:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_611()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_612()
{
	if (!func_611())
	{
		return 0;
	}
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312576.f_12));
	func_610();
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_613(var uParam0, var uParam1, var uParam2)
{
	if (!func_611())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_12)))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(uParam1) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_16)))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam2) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_32));
}

int func_614()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_18();
	iVar1 = Local_110.f_7;
	if (iVar1 != -1)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		}
	}
	return iVar0;
}

void func_615(char* sParam0, bool bParam1)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_616(sParam0))
	{
		return;
	}
	func_607();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_606();
	func_605(bParam1);
	func_604();
}

bool func_616(var uParam0)
{
	if (!func_611())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_617(uParam0);
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_12));
}

bool func_617(var uParam0)
{
	if (!func_611())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_16));
}

int func_618(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_611())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		if (UI::_GET_LENGTH_OF_STRING(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (UI::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	return func_616(sParam0);
}

int func_619(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4456448.f_125859[iVar1] != -1)
			{
				UI::_SET_NOTIFICATION_COLOR_NEXT(func_644(iVar1, iParam1, 0));
			}
			else
			{
				UI::_SET_NOTIFICATION_COLOR_NEXT(func_627(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			UI::_SET_NOTIFICATION_COLOR_NEXT(func_627(iParam1, -2, 1, 0, 0));
		}
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_625(&Var2));
		if (!bParam4)
		{
			iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2503649 = { func_45(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2503579, 35, &Global_2503649))
			{
				iVar18 = 0;
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2503579.f_22), "Leader") && Global_2503579.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2503579.f_21 > 0)
				{
					iVar19 = 0;
				}
				else
				{
					iVar19 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_624(&Var2) };
					}
					iVar0 = UI::_DRAW_NOTIFICATION_CLAN_INVITE(iVar19, NETWORK::_0x7543BB439F63792B(&Global_2503579, 35), &(Global_2503579.f_17), Global_2503579.f_30, iVar18, 0, Global_2503579, &Var2, Global_1314014, Global_1314015, Global_1314016);
				}
				else
				{
					iVar0 = UI::_DRAW_NOTIFICATION_APARTMENT_INVITE(iVar19, NETWORK::_0x7543BB439F63792B(&Global_2503579, 35), &(Global_2503579.f_17), Global_2503579.f_30, iVar18, 0, Global_2503579, Global_1314014, Global_1314015, Global_1314016);
				}
			}
			else
			{
				iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_620(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_620(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_623() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_34(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_621(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1663381.f_5[iVar0 /*53*/] = iParam0;
		Global_1663381.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1663381.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1663381.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1663381.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1663381.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1663381.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_621(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1663381 - 1))
	{
		if (iParam0 > Global_1663381.f_5[iVar0 /*53*/].f_1)
		{
			func_622(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1663381++;
	if (Global_1663381 > 5)
	{
		Global_1663381 = 5;
		return Global_1663381;
	}
	return (Global_1663381 - 1);
}

void func_622(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1663381.f_5[iVar0 /*53*/] = { Global_1663381.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_623()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_624(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_625(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_626(&cVar0);
}

var func_626(char[4] cParam0)
{
	return cParam0;
}

int func_627(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_118(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_125859[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_118(PLAYER::PLAYER_ID()) || (func_643() && func_642())) && !GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 31)) && !bParam4)
	{
		uVar1 = func_641();
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			if (PED::IS_PED_A_PLAYER(uVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1) != -1)
				{
					if (func_1202(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_125859[iParam1] != -1)
							{
								return func_644(iParam1, iParam0, 0);
							}
							else
							{
								return func_637(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_637(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_125859[iParam1] != -1)
				{
					return func_644(iParam1, iParam0, 0);
				}
				else
				{
					return func_628(0, -1, 0);
				}
			}
			else
			{
				return func_628(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_125859[iParam1] != -1)
		{
			return func_644(iParam1, iParam0, 0);
		}
		else
		{
			return func_637(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_637(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_628(bool bParam0, int iParam1, bool bParam2)
{
	return func_629(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_629(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_635() && Global_1378988.f_1)
	{
		if (bParam1)
		{
			return func_634(iParam2, iVar0);
		}
		else
		{
			return func_634(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_117(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_633(1);
				}
				else
				{
					return func_633(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_630(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_630(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_633(1);
	}
	return func_633(0);
}

int func_630(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_632(iParam0, iParam1, iParam3);
	if (func_631(Global_4456448.f_130782, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_631(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_152990 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8906[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_632(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_117(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_633(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_634(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_632(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_635()
{
	if (func_636() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

var func_636()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_146776, 12);
}

int func_637(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589747[iVar2 /*790*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_639(1))
			{
				iVar3 = func_260(iParam0);
				if (!iVar3 == -1)
				{
					return func_258(iVar3);
				}
			}
			if ((func_152(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_117(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_633(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_638(1);
			}
			else
			{
				return func_629(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574393 || Global_1574384) || Global_1589747[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
			{
				return func_633(1);
			}
			else
			{
				return func_629(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574388 && Global_1573886.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_260(iParam0);
	if (!iVar4 == -1)
	{
		return func_258(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_638(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_639(int iParam0)
{
	if ((func_239() || func_640()) || (func_40() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_640()
{
	return Global_2448386.f_15;
}

var func_641()
{
	return Global_2359302.f_2;
}

var func_642()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 4);
}

var func_643()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 14);
}

int func_644(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969023.f_13[iParam0];
	if (func_639(1))
	{
		iVar2 = func_260(iParam1);
		if (!iVar2 == -1)
		{
			return func_258(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_104[iParam0 /*10693*/].f_5532[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_18())
	{
		if (Global_4456448.f_125859[iParam0] != -1 && Global_4456448.f_125859[iParam0] <= 4)
		{
			if (Global_4456448.f_125859[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_125859[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_125859[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_125859[iParam0] == 4)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_125859[iParam0];
			}
		}
		else
		{
			iVar0 = func_629(iParam1, !bParam2, iParam0, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_645(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26) && !func_117(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_638(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_645(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_153033;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_153034;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_153035;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_153036;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_646()
{
	switch (func_1077())
	{
		case 1:
			return func_647();
		
		case 0:
		case 2:
		case 3:
			return func_531();
		
		default:
	}
	return 0;
}

int func_647()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_614();
	if (iVar0 == func_18())
	{
		return 0;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	iVar1 = func_532();
	if (iVar1 != func_18())
	{
		if (func_16(iVar0, iVar1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_648()
{
	if (UI::DOES_BLIP_EXIST(uLocal_502))
	{
		return;
	}
	if (!func_1093() && !func_376())
	{
		return;
	}
	if (func_362(PLAYER::PLAYER_ID()) < 1)
	{
		if (UI::DOES_BLIP_EXIST(uLocal_502))
		{
			UI::REMOVE_BLIP(&uLocal_502);
		}
		return;
	}
	uLocal_502 = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_110.f_29[0]));
	UI::_0xC4278F70131BAA6D(uLocal_502, 1);
	UI::_0x75A16C3DA34F1245(uLocal_502, 1);
	UI::SET_BLIP_PRIORITY(uLocal_502, 12);
	UI::SET_BLIP_SPRITE(uLocal_502, 421);
	UI::SET_BLIP_SCALE(uLocal_502, Global_262145.f_12242);
	UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_502, "GB_AST_RHN");
	if (func_1093())
	{
		func_649(&uLocal_502, 9);
	}
	else
	{
		func_649(&uLocal_502, 6);
	}
	if (func_1093())
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 0))
		{
			UI::SET_BLIP_FLASHES(uLocal_502, 1);
			UI::SET_BLIP_FLASH_TIMER(uLocal_502, 7000);
			UI::FLASH_MINIMAP_DISPLAY();
			GAMEPLAY::SET_BIT(&uLocal_368, 0);
		}
	}
}

void func_649(var uParam0, int iParam1)
{
	var uVar0;
	
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		uVar0 = func_650(iParam1);
		UI::SET_BLIP_COLOUR(*uParam0, uVar0);
	}
}

int func_650(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	UI::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_651()
{
	if (!func_611())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312576.f_9)
	{
		return;
	}
	func_607();
}

void func_652(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_654(iParam0))
	{
		return;
	}
	if (func_653(&(Global_2415861.f_746[iParam0]), &(Global_2415861.f_1109[iParam0]), &(Global_2415861.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_548[iParam0] = uParam1;
		}
	}
}

int func_653(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				GAMEPLAY::SET_BIT(uParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				GAMEPLAY::CLEAR_BIT(uParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_654(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 1;
	}
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_413())
	{
		return 1;
	}
	return 0;
}

void func_655(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_2415861.f_365), iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2415861.f_365), iParam0);
	}
	if (UI::DOES_BLIP_EXIST(Global_2415861[iParam0]))
	{
		if (bParam1)
		{
			UI::SET_BLIP_AS_SHORT_RANGE(Global_2415861[iParam0], 0);
		}
		else
		{
			UI::SET_BLIP_AS_SHORT_RANGE(Global_2415861[iParam0], 1);
		}
	}
}

void func_656(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_654(iParam0))
	{
		return;
	}
	if (func_653(&(Global_2415861.f_812[iParam0]), &(Global_2415861.f_1175[iParam0]), &(Global_2415861.f_364), bParam1, iParam0, bParam3, &uVar0))
	{
		func_655(iParam0, bParam2);
	}
}

void func_657(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_654(iParam0))
	{
		return;
	}
	if (func_653(&(Global_2415861.f_614[iParam0]), &(Global_2415861.f_977[iParam0]), &(Global_2415861.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_449[iParam0] = iParam1;
		}
	}
}

void func_658(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_654(iParam0))
	{
		return;
	}
	if (func_653(&(Global_2415861.f_581[iParam0]), &(Global_2415861.f_944[iParam0]), &(Global_2415861.f_385), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_416[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_659();
		}
	}
}

void func_659()
{
	Global_2415861.f_1508 = 1;
}

void func_660()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	bool bVar7;
	struct<8> Var8;
	int iVar16;
	var uVar17;
	char* sVar18;
	int iVar19;
	
	if (Local_110.f_3 == 1)
	{
		return;
	}
	if (!func_539())
	{
		if (iLocal_503 != -2)
		{
			if (iLocal_503 > -1)
			{
				uVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_503);
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar2))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(uVar2);
					if (iVar0 != PLAYER::PLAYER_ID())
					{
						func_658(iVar0, 457, 0, 0);
						if (!func_1093())
						{
							func_657(iVar0, 1, 0, 0);
							func_656(iVar0, 0, 0, 0);
							func_655(iVar0, 0);
							func_652(iVar0, Global_262145.f_12242, 0, 0);
						}
						else if (Local_110.f_9 > -1)
						{
							iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
							{
								if (!func_16(iVar0, iVar1, 1))
								{
									func_657(iVar0, 1, 0, 0);
									func_656(iVar0, 0, 0, 0);
									func_655(iVar0, 0);
									func_652(iVar0, Global_262145.f_12242, 0, 0);
								}
							}
						}
					}
				}
			}
			else if (UI::DOES_BLIP_EXIST(uLocal_499))
			{
				UI::REMOVE_BLIP(&uLocal_499);
			}
			if (UI::DOES_BLIP_EXIST(uLocal_500))
			{
				UI::REMOVE_BLIP(&uLocal_500);
			}
			iLocal_503 = -2;
			func_651();
		}
		return;
	}
	if (iLocal_503 != Local_110.f_5)
	{
		if (Local_110.f_5 == -1)
		{
			if (func_539())
			{
				if (func_362(PLAYER::PLAYER_ID()) >= 1)
				{
					uVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_503);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar2))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(uVar2);
						if (iVar0 != PLAYER::PLAYER_ID())
						{
							func_658(iVar0, 457, 0, 0);
							if (!func_1093())
							{
								func_657(iVar0, 1, 0, 0);
								func_656(iVar0, 0, 0, 0);
								func_655(iVar0, 0);
								func_652(iVar0, Global_262145.f_12242, 0, 0);
							}
							else if (Local_110.f_9 > -1)
							{
								iVar1 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9);
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
								{
									if (!func_16(iVar0, iVar1, 1))
									{
										func_657(iVar0, 1, 0, 0);
										func_656(iVar0, 0, 0, 0);
										func_655(iVar0, 0);
										func_652(iVar0, Global_262145.f_12242, 0, 0);
									}
								}
							}
						}
					}
					if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6))
					{
						func_682("GB_AST_TCKD", 1);
					}
				}
			}
		}
		else
		{
			if (iLocal_503 != -1)
			{
				if (iLocal_503 > -1)
				{
					uVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_503);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar2))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(uVar2);
						if (iVar0 != PLAYER::PLAYER_ID())
						{
							if (func_362(PLAYER::PLAYER_ID()) >= 1)
							{
								func_658(iVar0, 457, 0, 0);
								if (!func_1093())
								{
									func_657(iVar0, 1, 0, 0);
									func_656(iVar0, 0, 0, 0);
									func_655(iVar0, 0);
									func_652(iVar0, Global_262145.f_12242, 0, 0);
								}
							}
						}
					}
				}
			}
			uVar2 = PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_5);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar2))
			{
				if (func_539())
				{
					if (func_362(PLAYER::PLAYER_ID()) >= 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(uVar2);
						if (func_1202(iVar0, 1, 1))
						{
							if (UI::DOES_BLIP_EXIST(uLocal_499))
							{
								UI::REMOVE_BLIP(&uLocal_499);
							}
							if (iVar0 != PLAYER::PLAYER_ID())
							{
								if (!func_1093())
								{
									if (!func_531())
									{
										func_658(iVar0, 457, 1, 0);
										func_656(iVar0, 1, 1, 0);
										func_657(iVar0, 1, 1, 0);
										func_655(iVar0, 1);
										func_652(iVar0, Global_262145.f_12242, 1, 0);
									}
									else
									{
										func_658(iVar0, 457, 1, 0);
										func_652(iVar0, Global_262145.f_12242, 1, 0);
									}
								}
								else if (func_531())
								{
									func_658(iVar0, 457, 1, 0);
									func_652(iVar0, Global_262145.f_12242, 1, 0);
								}
								else
								{
									func_658(iVar0, 457, 1, 0);
									func_656(iVar0, 1, 1, 0);
									func_657(iVar0, 1, 1, 0);
									func_655(iVar0, 1);
									func_652(iVar0, Global_262145.f_12242, 1, 0);
								}
							}
							if (iVar0 != PLAYER::PLAYER_ID())
							{
								func_619("GB_AST_TCKC", iVar0, 0, 0, 0, 1, 1, 0);
							}
						}
					}
				}
			}
		}
		iLocal_503 = Local_110.f_5;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_12), PLAYER::PLAYER_PED_ID()))
				{
					GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
					func_681(1);
					func_379();
					if (func_376())
					{
						func_381(0);
						GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 6);
					}
					if (!func_680())
					{
						func_679(1, 0, 0);
					}
					if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_12))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_12), 1, 1);
							GAMEPLAY::SET_BIT(&uLocal_368, 12);
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(uLocal_368, 12))
					{
						GAMEPLAY::CLEAR_BIT(&uLocal_368, 12);
						GAMEPLAY::CLEAR_BIT(&uLocal_368, 13);
					}
					iLocal_507 = AUDIO::GET_SOUND_ID();
					if (func_317(1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_507, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_507, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					if (func_678(PLAYER::PLAYER_PED_ID()))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_12))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_12), 1, 1);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_110.f_12), vLocal_371, 0, 0, 1);
						}
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_12), PLAYER::PLAYER_PED_ID()))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
				if (func_680())
				{
					func_679(0, 0, 0);
				}
				if (NETWORK::PARTICIPANT_ID_TO_INT() != Local_110.f_8)
				{
					func_681(0);
				}
				if (GAMEPLAY::IS_BIT_SET(uLocal_368, 12))
				{
					GAMEPLAY::CLEAR_BIT(&uLocal_368, 12);
					GAMEPLAY::CLEAR_BIT(&uLocal_368, 13);
				}
			}
			else
			{
				if (func_678(PLAYER::PLAYER_PED_ID()))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_12))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_12), 1, 1);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_110.f_12), vLocal_371, 0, 0, 1);
					}
				}
				if (GAMEPLAY::IS_BIT_SET(uLocal_368, 12))
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 13))
					{
						if (func_595(0, 1, 1, 1))
						{
							func_677("GB_ASLT_SUB", -1);
							GAMEPLAY::SET_BIT(&uLocal_368, 13);
						}
					}
				}
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
	{
		GAMEPLAY::CLEAR_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
	}
	if (iLocal_503 == -1)
	{
		if (func_539())
		{
			if (!UI::DOES_BLIP_EXIST(uLocal_499))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
				{
					func_676();
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 5))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6))
				{
					GAMEPLAY::SET_BIT(&uLocal_368, 5);
					UI::REMOVE_BLIP(&uLocal_499);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6))
			{
				if (func_362(PLAYER::PLAYER_ID()) >= 1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[0]))
					{
						if (!func_10(Local_110.f_13[0]))
						{
							UI::GET_HUD_COLOUR(6, &uVar3, &uVar4, &uVar5, &uVar6);
							GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_110.f_13[0]), 1) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
						}
					}
				}
			}
		}
		if (UI::DOES_BLIP_EXIST(uLocal_500))
		{
			UI::REMOVE_BLIP(&uLocal_500);
		}
	}
	else if (iLocal_503 == NETWORK::PARTICIPANT_ID_TO_INT())
	{
		if (UI::DOES_BLIP_EXIST(uLocal_499))
		{
			UI::REMOVE_BLIP(&uLocal_499);
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
		{
			if (func_362(PLAYER::PLAYER_ID()) >= 1)
			{
				if (!UI::DOES_BLIP_EXIST(uLocal_500))
				{
					uLocal_500 = UI::ADD_BLIP_FOR_COORD(func_24());
					UI::SET_BLIP_ROUTE(uLocal_500, 1);
				}
			}
			else if (UI::DOES_BLIP_EXIST(uLocal_500))
			{
				UI::REMOVE_BLIP(&uLocal_500);
			}
		}
		else if (UI::DOES_BLIP_EXIST(uLocal_500))
		{
			UI::REMOVE_BLIP(&uLocal_500);
		}
	}
	else
	{
		if (UI::DOES_BLIP_EXIST(uLocal_499))
		{
			UI::REMOVE_BLIP(&uLocal_499);
		}
		iVar0 = func_530();
		if (iVar0 != func_18())
		{
			if (func_1074(1))
			{
				iVar1 = func_532();
				if (iVar1 != func_18())
				{
					if (func_16(iVar0, iVar1, 1))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
						{
							if (func_362(PLAYER::PLAYER_ID()) >= 1)
							{
								if (!UI::DOES_BLIP_EXIST(uLocal_500))
								{
									uLocal_500 = UI::ADD_BLIP_FOR_COORD(func_24());
									UI::SET_BLIP_ROUTE(uLocal_500, 1);
								}
							}
						}
						else if (UI::DOES_BLIP_EXIST(uLocal_500))
						{
							UI::REMOVE_BLIP(&uLocal_500);
						}
					}
				}
			}
		}
		bVar7 = false;
		if (func_539())
		{
			if (func_362(PLAYER::PLAYER_ID()) >= 1)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6))
				{
					if (iVar0 != func_18())
					{
						iVar1 = func_532();
						if (func_1074(1))
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
							{
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
								}
								else
								{
									UI::GET_HUD_COLOUR(6, &uVar3, &uVar4, &uVar5, &uVar6);
									bVar7 = true;
								}
							}
						}
						else
						{
							UI::GET_HUD_COLOUR(6, &uVar3, &uVar4, &uVar5, &uVar6);
							bVar7 = true;
						}
						if (bVar7)
						{
							if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar0), 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 1), 0))
								{
									func_579(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar0), 1), uVar3, uVar4, uVar5, 0);
								}
								else
								{
									GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), 1) + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar3, uVar4, uVar5, 100, 1, 1, 2, 0, 0, 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 4))
	{
		GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 4);
	}
	if (func_539())
	{
		if (func_362(PLAYER::PLAYER_ID()) > 2)
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 6))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6))
				{
					if (iLocal_503 == -1)
					{
						if (func_1093())
						{
							if (!func_618("GB_AST_RETP"))
							{
								func_615("GB_AST_RETP", 0);
							}
						}
						else if (func_376())
						{
							if (!func_618("GB_AST_RETP"))
							{
								func_615("GB_AST_RETP", 0);
							}
						}
					}
					else if (iLocal_503 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						if (!func_618("GB_AST_DROP"))
						{
							func_615("GB_AST_DROP", 0);
						}
					}
					else
					{
						iVar0 = func_530();
						if (iVar0 != func_18())
						{
							if (func_1074(1))
							{
								iVar1 = func_532();
								if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
								{
									if (!func_618("GB_AST_DROPB"))
									{
										iVar16 = func_260(iVar0);
										if (iVar16 > -1)
										{
											uVar17 = func_258(iVar16);
											func_602("GB_AST_DROPB", iVar0, "GB_AST_BRIEF", 1, uVar17, 0);
										}
									}
								}
								else if (!func_19(iVar0, 1))
								{
									if (!func_618("GB_AST_RETNG"))
									{
										func_673("GB_AST_RETNG", iVar0, 1, 0);
									}
								}
								else if (!func_618("GB_AST_RETGR"))
								{
									sVar18 = func_589(iVar0);
									func_670("GB_AST_RETGR", sVar18, 1, 0);
								}
							}
							else if (!func_19(iVar0, 1))
							{
								if (!func_618("GB_AST_RETNG"))
								{
									func_673("GB_AST_RETNG", iVar0, 1, 0);
								}
							}
							else if (!func_618("GB_AST_RETGR"))
							{
								sVar18 = func_589(iVar0);
								func_670("GB_AST_RETGR", sVar18, 1, 0);
							}
						}
					}
				}
				else
				{
					Var8 = { func_669() };
					if (!func_618(&Var8))
					{
						func_615(&Var8, 0);
					}
				}
			}
		}
		else
		{
			func_651();
		}
	}
	else
	{
		func_651();
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 2))
	{
		if (func_376())
		{
			if (!func_601(86))
			{
				if (func_362(PLAYER::PLAYER_ID()) >= 1)
				{
					if (func_595(0, 1, 1, 1))
					{
						sVar18 = func_589(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
						iVar19 = func_588(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
						if (func_1074(1))
						{
							if (Local_110.f_5 > -1)
							{
								func_587("GB_AST_HELP2", sVar18, iVar19, -1);
							}
							else
							{
								func_587("GB_AST_HELP22", sVar18, iVar19, -1);
							}
						}
						else if (Local_110.f_5 > -1)
						{
							func_587("GB_AST_HELP5", sVar18, iVar19, -1);
						}
						else
						{
							func_587("GB_AST_HELP52", sVar18, iVar19, -1);
						}
						func_586(1);
						GAMEPLAY::SET_BIT(&uLocal_368, 2);
					}
				}
			}
		}
	}
	func_663();
	func_662();
	func_661();
}

void func_661()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_539())
	{
		return;
	}
	if (func_362(PLAYER::PLAYER_ID()) >= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_12) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_110.f_12), 0))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_110.f_12)))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3) && !GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
				{
					UI::GET_HUD_COLOUR(18, &uVar0, &uVar1, &uVar2, &uVar3);
					GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_110.f_12), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
				}
			}
		}
	}
}

void func_662()
{
	int iVar0;
	vector3 vVar1;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = func_530();
	vVar1 = { func_24() };
	if (UI::DOES_BLIP_EXIST(uLocal_500))
	{
		UI::GET_HUD_COLOUR(12, &uVar4, &uVar5, &uVar6, &uVar7);
		GRAPHICS::DRAW_MARKER(1, vVar1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, uVar4, uVar5, uVar6, 100, 0, 0, 2, 0, 0, 0, 0);
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar0), vVar1, 6f, 6f, 2f, 0, 1, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 3);
				}
			}
		}
	}
}

void func_663()
{
	vector3 vVar0;
	bool bVar3;
	struct<35> Var4;
	
	switch (iLocal_508)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_110.f_12), 1) };
				if (!func_424(vLocal_510, 0f, 0f, 0f, 0))
				{
					vLocal_510 = { 0f, 0f, 0f };
				}
				if (func_664(vVar0, iLocal_509, 0))
				{
					iLocal_508++;
				}
				if (iLocal_508 == 0)
				{
					iLocal_509++;
				}
				if (iLocal_509 >= 36)
				{
					iLocal_509 = 0;
				}
			}
			break;
		
		case 1:
			if (Local_110.f_5 == -1)
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_12))
				{
					bVar3 = true;
					if (func_424(vLocal_510, 0f, 0f, 0f, 0))
					{
						vLocal_510 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_110.f_12), 1) };
					}
				}
			}
			else if (Local_110.f_5 == NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_12))
				{
					if (func_424(vLocal_510, 0f, 0f, 0f, 0))
					{
						vLocal_510 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_110.f_12), 1) };
					}
					bVar3 = true;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_110.f_12);
				}
			}
			if (bVar3)
			{
				Var4.f_5 = 1115815936;
				Var4.f_13 = 2;
				Var4.f_20 = 2;
				Var4.f_32 = -1082130432;
				Var4.f_34 = 1;
				Var4.f_3 = 0;
				Var4.f_5 = 1f;
				Var4.f_13[0 /*3*/] = { vLocal_510 };
				Var4.f_20[0] = 8f;
				Var4.f_20[0] = 100f;
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_12))
				{
					if (func_49(vLocal_510, 20f, &vLocal_513, &uLocal_516, &Var4))
					{
						vLocal_513 = { vLocal_513 + Vector(0.5f, 0f, 0f) };
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_12), PLAYER::PLAYER_PED_ID()))
						{
							OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_110.f_12));
						}
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_110.f_12), vLocal_513, 0, 0, 1);
						ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_110.f_12), 1);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_110.f_12), 1, 1);
						GAMEPLAY::SET_BIT(&uLocal_369, 3);
						iLocal_508 = 0;
					}
				}
			}
			else if (Local_110.f_5 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_110.f_12), 1) };
				if (!func_664(vVar0, iLocal_509, 0))
				{
					iLocal_508 = 0;
				}
			}
			break;
		
		case 2:
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_369, 3))
	{
		if (func_595(0, 1, 1, 1))
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_369, 3);
			func_677("GB_HLP_WRP", -1);
		}
	}
}

int func_664(vector3 vParam0, int iParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (func_668(iParam3))
	{
		func_665(iParam3, &vVar0, &vVar3, &uVar6, fParam4);
		return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar3, uVar6, 0, 1);
	}
	return 0;
}

void func_665(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	
	vVar0 = { func_667(iParam0) };
	uVar3 = func_666(iParam0);
	vVar4 = { 0f, 1f, 0f };
	func_73(&vVar4, 0f, 0f, uVar3);
	vVar4 = { vVar4 / FtoV(SYSTEM::VMAG(vVar4)) };
	*uParam1 = { vVar0 + vVar4 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { vVar0 - vVar4 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_666(int iParam0)
{
	return Global_4006552[iParam0 /*45*/].f_7;
}

Vector3 func_667(int iParam0)
{
	return Global_4006552[iParam0 /*45*/].f_4;
}

int func_668(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 36)
	{
		return 1;
	}
	return 0;
}

struct<8> func_669()
{
	struct<8> Var0;
	
	switch (func_1077())
	{
		case 0:
			StringCopy(&Var0, "GB_ASLT_CUL", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_ASLT_GEN", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_ASLT_AIR", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_ASLT_MER", 32);
			break;
	}
	return Var0;
}

void func_670(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_671(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312576 = 16;
		Global_1312576.f_56 = iParam2;
	}
}

int func_671(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_672(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_607();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = iParam3;
	Global_1312576.f_56 = iParam3;
	func_606();
	func_605(bParam2);
	func_604();
	return 1;
}

bool func_672(var uParam0, var uParam1)
{
	if (!func_611())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam1) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_16));
}

void func_673(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_674(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), bParam3, 1);
}

int func_674(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam1) > 63)
	{
		return 0;
	}
	if (func_675(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312576.f_54;
	func_607();
	Global_1312576 = 9;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = iParam3;
	Global_1312576.f_56 = iParam3;
	Global_1312576.f_54 = uVar0;
	func_606();
	func_605(bParam2);
	func_604();
	return 1;
}

bool func_675(var uParam0, var uParam1)
{
	if (!func_611())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam1) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_16));
}

void func_676()
{
	if (func_362(PLAYER::PLAYER_ID()) < 1)
	{
		if (UI::DOES_BLIP_EXIST(uLocal_499))
		{
			UI::REMOVE_BLIP(&uLocal_499);
		}
		return;
	}
	if (UI::DOES_BLIP_EXIST(uLocal_499))
	{
		return;
	}
	uLocal_499 = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_110.f_12));
	UI::SET_BLIP_PRIORITY(uLocal_499, 12);
	UI::SET_BLIP_SPRITE(uLocal_499, 457);
	UI::_0xC4278F70131BAA6D(uLocal_499, 1);
	UI::_0x75A16C3DA34F1245(uLocal_499, 1);
	UI::SET_BLIP_SCALE(uLocal_499, Global_262145.f_12242);
	UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_499, "GB_AST_BLIP");
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6))
	{
		if (func_1093())
		{
			func_649(&uLocal_499, 18);
		}
		else
		{
			func_649(&uLocal_499, 18);
		}
	}
	else
	{
		func_649(&uLocal_499, 6);
	}
	if (func_1093())
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 0))
		{
			UI::SET_BLIP_FLASHES(uLocal_499, 1);
			UI::SET_BLIP_FLASH_TIMER(uLocal_499, 7000);
			UI::FLASH_MINIMAP_DISPLAY();
			GAMEPLAY::SET_BIT(&uLocal_368, 0);
		}
	}
}

void func_677(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_678(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
	}
	return INTERIOR::GET_INTERIOR_FROM_ENTITY(uParam0) == Global_144597;
}

void func_679(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	bVar0 = true;
	if (!bParam2)
	{
		if ((!bParam0 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			if (bParam1)
			{
				if (!func_248(PLAYER::PLAYER_ID()))
				{
					bVar0 = false;
				}
			}
			else if (!func_262(PLAYER::PLAYER_ID()))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (Global_1573341 != bParam0)
		{
			Global_1573341 = bParam0;
		}
	}
}

bool func_680()
{
	return Global_1573341;
}

void func_681(bool bParam0)
{
	if (bParam0)
	{
		if (!func_263(PLAYER::PLAYER_ID(), 9))
		{
			if (func_362(PLAYER::PLAYER_ID()) != 0)
			{
				func_367(9);
			}
		}
	}
	else if (func_263(PLAYER::PLAYER_ID(), 9))
	{
		func_369(9);
	}
}

int func_682(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_620(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_683()
{
	struct<8> Var0;
	char[] cVar8[8];
	int iVar9;
	
	if (func_366())
	{
		return;
	}
	if (func_362(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 5))
	{
		if (!func_1093())
		{
			if (((Local_110.f_5 != -1 || Local_110.f_7 != -1) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 16)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 20))
			{
				GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 5);
				OBJECT::_0x78857FC65CADB909(1);
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_110.f_12))
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_12), 0, 1);
				}
				cVar8 = func_589(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
				iVar9 = func_588(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_9));
				if (func_19(PLAYER::PLAYER_ID(), 1))
				{
					Var0 = { func_698(1) };
					if (func_539())
					{
						if (func_362(PLAYER::PLAYER_ID()) > 0)
						{
							func_684(86, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_1030(-1, 0, 0, -1, 0, 0);
				}
				else
				{
					Var0 = { func_698(0) };
					if (func_539())
					{
						if (func_362(PLAYER::PLAYER_ID()) > 0)
						{
							func_684(86, "BIGM_ASLTN", &Var0, cVar8, iVar9, 0, -1, -1, -1, 2, -1);
						}
					}
					func_1030(-1, 0, 0, -1, 0, 0);
				}
				func_409(1);
			}
		}
	}
}

int func_684(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_18();
	iVar1 = func_18();
	iVar2 = func_18();
	return func_685(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_685(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_697(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	GAMEPLAY::SET_BIT(&(Var0.f_69), 2);
	return func_686(&Var0);
}

int func_686(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437022.f_3026)
		{
			return 0;
		}
	}
	func_696(uParam0, uParam0->f_17);
	func_695(uParam0);
	if (func_40())
	{
		func_695(uParam0);
	}
	if (func_694(uParam0->f_1))
	{
		func_687();
		if (Global_2437022.f_2704[0 /*80*/].f_2 == 0)
		{
			Global_2437022.f_2704[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437022.f_2704[0 /*80*/].f_1 == 13 || Global_2437022.f_2704[0 /*80*/].f_1 == 53) || Global_2437022.f_2704[0 /*80*/].f_1 == 54) || Global_2437022.f_2704[0 /*80*/].f_1 == 58)
		{
			Global_2437022.f_2704[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437022.f_2704[iVar0 + 1 /*80*/] = { Global_2437022.f_2704[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437022.f_2704[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437022.f_2704[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437022.f_2704[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_687();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 1);
				Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !GAMEPLAY::IS_BIT_SET(uParam0->f_69, 7))
			{
				if (func_301(Global_2437022.f_2704[iVar0 /*80*/].f_1))
				{
					Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
					GAMEPLAY::SET_BIT(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_687()
{
	bool bVar0;
	
	if (Global_2437022.f_3027)
	{
		return;
	}
	if (!Global_71473)
	{
		Global_71473 = 1;
		bVar0 = true;
	}
	func_688();
	if (bVar0)
	{
		Global_71473 = 0;
	}
}

void func_688()
{
	Global_2437022.f_3028 = 0;
	Global_2437022.f_3028.f_578 = 0;
	func_692(&(Global_2437022.f_3028.f_1));
	Global_2437022.f_3028.f_1.f_1 = 0;
	func_689(&(Global_2437022.f_3028.f_1));
}

void func_689(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71473)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_71474)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_691(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_690(0);
}

void func_690(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

int func_691(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71453, 0);
}

void func_692(var uParam0)
{
	func_693(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_693(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_694(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_695(var uParam0)
{
	if (func_303(uParam0->f_1))
	{
		uParam0->f_72 = func_261();
	}
}

void func_696(var uParam0, int iParam1)
{
	if (func_303(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_18() || !func_1202(iParam1, 0, 1))
	{
		return;
	}
	if (func_301(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_627(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_697(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_18();
	uParam1->f_18 = func_18();
	uParam1->f_19 = func_18();
	uParam1->f_20 = func_18();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

struct<8> func_698(bool bParam0)
{
	struct<8> Var0;
	
	if (bParam0)
	{
		switch (func_1077())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLV", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDR", 32);
				break;
		}
	}
	else
	{
		switch (func_1077())
		{
			case 0:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "BIGM_ASLVO", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "BIGM_ASLTDO", 32);
				break;
			}
	}
	return Var0;
}

void func_699()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 12))
		{
			if (func_365(PLAYER::PLAYER_ID()))
			{
				GAMEPLAY::SET_BIT(&uLocal_369, 12);
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_12), 1, 1);
			}
			else if (func_362(PLAYER::PLAYER_ID()) < 1)
			{
				GAMEPLAY::SET_BIT(&uLocal_369, 12);
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_12), 1, 1);
			}
		}
		else if (!func_365(PLAYER::PLAYER_ID()))
		{
			if (func_362(PLAYER::PLAYER_ID()) >= 1)
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_12), 0, 1);
				GAMEPLAY::CLEAR_BIT(&uLocal_369, 12);
			}
		}
	}
}

void func_700()
{
	int iVar0;
	int iVar1;
	struct<20> Var2;
	char* sVar23;
	char[] cVar27[8];
	char[] cVar31[8];
	char[] cVar35[8];
	char[] cVar39[8];
	char* sVar43;
	char* sVar47;
	int iVar48;
	
	iVar0 = func_18();
	Var2.f_2 = 1065353216;
	Var2.f_3 = 1065353216;
	Var2.f_4 = 1;
	Var2.f_9 = -1;
	Var2.f_18 = -1;
	Var2.f_19 = -1;
	if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 6))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 8))
			{
				func_1001(&sVar23, &cVar27, &cVar31, &cVar35, &cVar39, &sVar43);
				if (func_539())
				{
					iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_6);
					if (iVar0 == PLAYER::PLAYER_ID())
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							func_1055(87, "GB_WINNER", &sVar23, 1, -1, 2, 1);
						}
						if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
						{
							GAMEPLAY::SET_BIT(&uLocal_368, 17);
							func_900(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
						}
						func_719(159, 1, &Var2, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						iVar1 = func_532();
						if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
						{
							if (func_362(PLAYER::PLAYER_ID()) > 1)
							{
								sVar47 = func_718();
								iVar48 = func_588(PLAYER::PLAYER_ID());
								func_684(87, "GB_WINNER", &cVar27, sVar47, iVar48, 0, -1, -1, -1, 2, -1);
							}
							if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
							{
								GAMEPLAY::SET_BIT(&uLocal_368, 17);
								func_900(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							}
							if (func_1094() == Local_110.f_8)
							{
								func_719(159, 1, &Var2, 0);
							}
							else
							{
								func_719(159, 0, &Var2, 0);
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						}
						else
						{
							if (func_362(PLAYER::PLAYER_ID()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar47 = func_589(iVar0);
									iVar48 = func_588(iVar0);
								}
								else
								{
									sVar47 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar48 = 1;
								}
								if (func_1077() != 1)
								{
									func_684(88, "GB_WORK_OVER", &cVar31, sVar47, iVar48, 0, -1, -1, -1, 2, -1);
								}
								else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 8))
								{
									func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar47, iVar48, 0, -1, -1, -1, 2, -1);
								}
							}
							func_719(159, 0, &Var2, 0);
							if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
							{
								GAMEPLAY::SET_BIT(&uLocal_368, 17);
								func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
							func_719(159, 0, &Var2, 0);
						}
					}
					else
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							if (func_19(iVar0, 1))
							{
								sVar47 = func_589(iVar0);
								iVar48 = func_588(iVar0);
							}
							else
							{
								sVar47 = PLAYER::GET_PLAYER_NAME(iVar0);
								iVar48 = 1;
							}
							if (func_1077() != 1)
							{
								func_684(88, "GB_WORK_OVER", &cVar31, sVar47, iVar48, 0, -1, -1, -1, 2, -1);
							}
							else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 8))
							{
								func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESFG", sVar47, iVar48, 0, -1, -1, -1, 2, -1);
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
						{
							GAMEPLAY::SET_BIT(&uLocal_368, 17);
							func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						}
						func_719(159, 0, &Var2, 0);
					}
				}
				GAMEPLAY::SET_BIT(&uLocal_369, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 10))
			{
				if (Local_110.f_6 > -1)
				{
					iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_6);
				}
				if (func_539())
				{
					if (func_1093())
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
							{
								if (func_19(iVar0, 1))
								{
									sVar47 = func_589(iVar0);
									iVar48 = func_588(iVar0);
								}
								else
								{
									sVar47 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar48 = 1;
								}
								func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar47, iVar48, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1);
							}
						}
						if (func_1093() || func_376())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
							{
								GAMEPLAY::SET_BIT(&uLocal_368, 17);
								func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else if (Local_110.f_6 > -1)
					{
						if (func_19(PLAYER::PLAYER_ID(), 1))
						{
							iVar1 = func_532();
							if (iVar1 != func_18() && func_16(iVar0, iVar1, 1))
							{
								if (iVar0 == PLAYER::PLAYER_ID())
								{
									if (func_362(PLAYER::PLAYER_ID()) > 1)
									{
										func_1055(87, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2, 1);
									}
								}
								else if (func_362(PLAYER::PLAYER_ID()) > 1)
								{
									iVar48 = func_588(PLAYER::PLAYER_ID());
									sVar47 = func_718();
									func_684(87, "GB_WINNER", "BIGM_ASL_DESG", sVar47, iVar48, 0, -1, -1, -1, 2, -1);
								}
								if (func_1093() || func_376())
								{
									if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
									{
										GAMEPLAY::SET_BIT(&uLocal_368, 17);
										func_900(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
									}
								}
								if (Local_110.f_6 == PLAYER::PLAYER_ID())
								{
									func_719(159, 1, &Var2, 0);
								}
								else
								{
									func_719(159, 1, &Var2, 0);
								}
							}
							else
							{
								if (func_362(PLAYER::PLAYER_ID()) > 1)
								{
									if (func_19(iVar0, 1))
									{
										sVar47 = func_589(iVar0);
										iVar48 = func_588(iVar0);
									}
									else
									{
										sVar47 = PLAYER::GET_PLAYER_NAME(iVar0);
										iVar48 = 1;
									}
									func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar47, iVar48, 0, -1, -1, -1, 2, -1);
								}
								if (func_1093() || func_376())
								{
									if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
									{
										GAMEPLAY::SET_BIT(&uLocal_368, 17);
										func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
									}
								}
								func_719(159, 0, &Var2, 0);
							}
						}
						else if (iVar0 == PLAYER::PLAYER_ID())
						{
							if (func_362(PLAYER::PLAYER_ID()) > 1)
							{
								func_1055(87, "GB_WINNER", "BIGM_ASL_DESY", 1, -1, 2, 1);
							}
							if (func_1093() || func_376())
							{
								if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
								{
									GAMEPLAY::SET_BIT(&uLocal_368, 17);
									func_900(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
								}
							}
							func_719(159, 1, &Var2, 0);
						}
						else
						{
							if (func_362(PLAYER::PLAYER_ID()) > 1)
							{
								if (func_19(iVar0, 1))
								{
									sVar47 = func_589(iVar0);
									iVar48 = func_588(iVar0);
								}
								else
								{
									sVar47 = PLAYER::GET_PLAYER_NAME(iVar0);
									iVar48 = 1;
								}
								func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESFG2", sVar47, iVar48, 0, -1, -1, -1, 2, -1);
							}
							if (func_1093() || func_376())
							{
								if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
								{
									GAMEPLAY::SET_BIT(&uLocal_368, 17);
									func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								}
							}
							func_719(159, 0, &Var2, 0);
						}
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							sVar47 = func_718();
							iVar48 = func_588(PLAYER::PLAYER_ID());
							func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar47, iVar48, 0, -1, -1, -1, 2, -1);
						}
						if (func_1093() || func_376())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
							{
								GAMEPLAY::SET_BIT(&uLocal_368, 17);
								func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1);
						}
						if (func_1093() || func_376())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
							{
								GAMEPLAY::SET_BIT(&uLocal_368, 17);
								func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
				}
				GAMEPLAY::SET_BIT(&uLocal_369, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 15))
			{
				if (func_539())
				{
					if (func_1093())
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1);
						}
						if (func_1093() || func_376())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
							{
								GAMEPLAY::SET_BIT(&uLocal_368, 17);
								func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							sVar47 = func_718();
							iVar48 = func_588(PLAYER::PLAYER_ID());
							func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar47, iVar48, 0, -1, -1, -1, 2, -1);
						}
						if (func_1093() || func_376())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
							{
								GAMEPLAY::SET_BIT(&uLocal_368, 17);
								func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1);
						}
						if (func_1093() || func_376())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
							{
								GAMEPLAY::SET_BIT(&uLocal_368, 17);
								func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
				}
				GAMEPLAY::SET_BIT(&uLocal_369, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 18))
			{
				if (func_539())
				{
					if (func_1093())
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESFL", 1, -1, 2, 1);
						}
						if (func_1093() || func_376())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
							{
								GAMEPLAY::SET_BIT(&uLocal_368, 17);
								func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							sVar47 = func_718();
							iVar48 = func_588(PLAYER::PLAYER_ID());
							func_684(88, "GB_WORK_OVER", "BIGM_ASL_DESMG", sVar47, iVar48, 0, -1, -1, -1, 2, -1);
						}
						if (func_1093() || func_376())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
							{
								GAMEPLAY::SET_BIT(&uLocal_368, 17);
								func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
					else
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASL_DESF", 1, -1, 2, 1);
						}
						if (func_1093() || func_376())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
							{
								GAMEPLAY::SET_BIT(&uLocal_368, 17);
								func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							}
						}
						func_719(159, 0, &Var2, 0);
					}
				}
				GAMEPLAY::SET_BIT(&uLocal_369, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 3))
			{
				func_1001(&sVar23, &cVar27, &cVar31, &cVar35, &cVar39, &sVar43);
				if (func_539())
				{
					if (func_19(PLAYER::PLAYER_ID(), 1))
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", &sVar43, 1, -1, 2, 1);
						}
					}
					else if (func_362(PLAYER::PLAYER_ID()) > 1)
					{
						func_1055(88, "GB_WORK_OVER", &sVar43, 1, -1, 2, 1);
					}
				}
				if (func_1093() || func_376())
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
					{
						GAMEPLAY::SET_BIT(&uLocal_368, 17);
						func_900(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_719(159, 0, &Var2, 0);
				GAMEPLAY::SET_BIT(&uLocal_369, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 5))
			{
				if (func_539())
				{
					if (func_1093())
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
						}
					}
					else if (func_362(PLAYER::PLAYER_ID()) > 1)
					{
						func_1055(88, "GB_WORK_OVER", "BIGM_ASLTRBQ", 1, -1, 2, 1);
					}
				}
				if (func_1093() || func_376())
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
					{
						GAMEPLAY::SET_BIT(&uLocal_368, 17);
						func_900(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_719(159, 0, &Var2, 0);
				GAMEPLAY::SET_BIT(&uLocal_369, 6);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 9))
			{
				if (func_539())
				{
					if (func_1093())
					{
						if (func_362(PLAYER::PLAYER_ID()) > 1)
						{
							func_1055(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2, 1);
						}
					}
					else if (func_362(PLAYER::PLAYER_ID()) > 1)
					{
						func_1055(88, "GB_WORK_OVER", "BIGM_ASLWRK", 1, -1, 2, 1);
					}
				}
				if (func_1093() || func_376())
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
					{
						GAMEPLAY::SET_BIT(&uLocal_368, 17);
						func_900(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
					}
				}
				func_719(159, 0, &Var2, 0);
				GAMEPLAY::SET_BIT(&uLocal_369, 6);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_369, 6))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 8))
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_368, 19))
				{
					iLocal_506 = -1;
					AUDIO::STOP_SOUND(iLocal_506);
				}
				func_651();
				GAMEPLAY::SET_BIT(&uLocal_369, 8);
				if (GAMEPLAY::IS_BIT_SET(uLocal_368, 20))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_STOP");
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
					AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
				}
			}
			if (UI::DOES_BLIP_EXIST(uLocal_502))
			{
				UI::REMOVE_BLIP(&uLocal_502);
			}
			if (UI::DOES_BLIP_EXIST(uLocal_501))
			{
				UI::REMOVE_BLIP(&uLocal_501);
			}
			if (UI::DOES_BLIP_EXIST(uLocal_499))
			{
				UI::REMOVE_BLIP(&uLocal_499);
			}
			func_717();
			if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 29))
			{
				GAMEPLAY::SET_BIT(&uLocal_368, 29);
			}
			if (func_701(&uLocal_519, 1, 0))
			{
				GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 1);
			}
		}
	}
}

int func_701(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_367(29);
	if ((*uParam0 > 0 && !func_298()) && func_362(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_716())
		{
			func_715();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 2);
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&(Global_2524719.f_4574), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_714(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_708(iParam2);
				func_714(uParam0, 2);
			}
			break;
		
		case 2:
			func_708(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_702(func_703(0)))
				{
					UI::CLEAR_HELP(1);
				}
				func_714(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4574), 1);
				GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 2);
				func_714(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4574), 1);
			GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_702(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_703(int iParam0)
{
	if (((func_706(PLAYER::PLAYER_ID()) || func_705(PLAYER::PLAYER_ID())) || func_318()) || iParam0)
	{
		if (func_705(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_290(func_704()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_704()
{
	return Global_1643357;
}

bool func_705(int iParam0)
{
	return func_291(func_288(iParam0), 0);
}

bool func_706(int iParam0)
{
	return func_707(func_288(iParam0));
}

int func_707(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148 && func_245(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_708(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 0))
	{
		if (((((((((((!UI::IS_RADAR_HIDDEN() && !GAMEPLAY::IS_BIT_SET(Global_2524719.f_784, 2)) && func_1202(PLAYER::PLAYER_ID(), 1, 1)) && !Global_68494) && !Global_53362) && !CAM::IS_SCREEN_FADED_OUT()) && !func_263(PLAYER::PLAYER_ID(), 22)) && func_362(PLAYER::PLAYER_ID()) != 0) && !func_712(func_713())) && !func_706(PLAYER::PLAYER_ID())) && !func_711(func_288(PLAYER::PLAYER_ID()))) && !func_710(func_288(PLAYER::PLAYER_ID())))
		{
			GAMEPLAY::SET_BIT(&(Global_2524719.f_4574), 1);
			func_709(func_703(iParam0), -1);
			func_586(1);
			GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4574), 0);
		}
	}
}

void func_709(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_710(int iParam0)
{
	switch (iParam0)
	{
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_711(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_712(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_713()
{
	var uVar0;
	
	uVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	return 0;
}

void func_714(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_715()
{
	Global_2459730 = 1;
}

int func_716()
{
	if (((((((func_288(PLAYER::PLAYER_ID()) == 170 || func_288(PLAYER::PLAYER_ID()) == 219) || func_288(PLAYER::PLAYER_ID()) == 221) || func_288(PLAYER::PLAYER_ID()) == 220) || func_288(PLAYER::PLAYER_ID()) == 216) || func_288(PLAYER::PLAYER_ID()) == 215) || func_288(PLAYER::PLAYER_ID()) == 214) || func_288(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_558(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_717()
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 9))
	{
		GAMEPLAY::SET_BIT(&uLocal_369, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (func_540())
					{
						func_658(iVar1, 421, 0, 0);
					}
					else
					{
						func_658(iVar1, 457, 0, 0);
					}
					func_657(iVar1, 1, 0, 0);
				}
			}
			iVar0++;
		}
	}
}

char* func_718()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_44(PLAYER::PLAYER_ID());
	if (iVar0 != func_18())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_263(iVar0, 28) || func_263(PLAYER::PLAYER_ID(), 28)) || func_591(iVar0)) && !func_590(iVar0))
			{
				return func_592(iVar0, 0);
			}
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_592(iVar0, 0);
			}
		}
		uVar1 = func_594(&(Global_1625435[iVar0 /*560*/].f_11.f_99));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			return func_592(iVar0, 0);
		}
		else
		{
			return uVar1;
		}
	}
	return "";
}

void func_719(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	
	func_898(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_18151);
		}
		else
		{
			iVar1 = (iVar1 + func_897(iParam0, uParam2->f_13));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_896(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_18150);
		}
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_894(iParam0))
	{
		if (bParam1)
		{
			if (func_893(PLAYER::PLAYER_ID()) > 0)
			{
				func_892();
			}
			else
			{
				func_891();
			}
		}
		else
		{
			func_890();
		}
	}
	func_874(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_872(iParam0, uParam2, &iVar0, &iVar5);
	func_850(iParam0, uParam2, &iVar0, &iVar5);
	func_836(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_819(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2524719.f_4883.f_373 = uVar4;
	}
	else
	{
		Global_2524719.f_4883.f_373 = iVar5;
	}
	iVar8 = func_320();
	if (iVar8 != func_18() && iParam0 != 148)
	{
		if (func_19(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_16(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_810(&iVar0, 1);
			}
		}
	}
	func_806(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1666806.f_10 = iVar1;
		func_805();
		func_762(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1666806.f_9 = iVar0;
		iVar13 = func_532();
		if (iVar13 != func_18())
		{
			func_761(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_1074(1);
		if (iParam0 == 168)
		{
			if (!func_760())
			{
				unk_0xECA658CE2A4E5A72(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_759())
			{
				if (!func_760())
				{
					Var15 = { func_758() };
					unk_0x8586789730B10CAF(iVar0, GAMEPLAY::GET_HASH_KEY(func_757(Var15)), func_756(Var15), iVar5);
				}
			}
			else if (func_760())
			{
				func_745(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_4262927[iVar17 /*80*/].f_6 = uVar11;
				Global_4262927[iVar17 /*80*/].f_7 = uVar12;
				Global_4262927[iVar17 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_744())
			{
				if (!func_760())
				{
					unk_0x8586789730B10CAF(iVar0, GAMEPLAY::GET_HASH_KEY(func_757(func_743(PLAYER::PLAYER_ID()))), 5, iVar5);
				}
			}
			else if (func_760())
			{
				func_745(-856006867, iVar0, &iVar18, 0, 1, 0);
				Global_4262927[iVar18 /*80*/].f_6 = uVar11;
				Global_4262927[iVar18 /*80*/].f_7 = uVar12;
				Global_4262927[iVar18 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_744())
			{
				if (!func_760())
				{
					iVar19 = func_739(uParam2->f_16, iVar5);
					iVar20 = iVar0;
					if (iVar19 > 0)
					{
						iVar20 = (iVar20 - iVar19);
					}
					if (iVar7 > 0)
					{
						iVar20 = (iVar20 - iVar7);
					}
					unk_0x6B7E4FB50D5F3D65(iVar20, iVar5, iVar7, iVar19, uParam2->f_16);
				}
			}
			else if (func_760())
			{
				func_745(463142405, iVar0, &iVar21, 0, 1, 0);
				Global_4262927[iVar21 /*80*/].f_6 = uVar11;
				Global_4262927[iVar21 /*80*/].f_7 = uVar12;
				Global_4262927[iVar21 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xDEE612F2D71B0308(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_760())
			{
				func_745(1407278493, iVar0, &iVar22, 0, 1, 0);
				Global_4262927[iVar22 /*80*/].f_6 = uVar11;
				Global_4262927[iVar22 /*80*/].f_7 = uVar12;
				Global_4262927[iVar22 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xED26584F6BDCBBFD(iVar0);
			}
		}
		else if (iParam0 == 237)
		{
			if (func_744())
			{
				if (!func_760())
				{
					unk_0x7C5AFBDB4A63099E(iVar0, uParam2->f_20, iVar5);
				}
			}
			else if (func_760())
			{
				func_745(-856006867, iVar0, &iVar23, 0, 1, 0);
				Global_4262927[iVar23 /*80*/].f_6 = uVar11;
				Global_4262927[iVar23 /*80*/].f_7 = uVar12;
				Global_4262927[iVar23 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 250)
		{
			if (func_760())
			{
				func_745(-961034881, iVar0, &iVar24, 0, 1, 0);
				Global_4262927[iVar24 /*80*/].f_6 = uVar11;
				Global_4262927[iVar24 /*80*/].f_7 = uVar12;
				Global_4262927[iVar24 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x70275A5DEC872CA2(iVar0);
			}
		}
		else if (iParam0 == 249)
		{
			if (func_760())
			{
				func_745(1135468152, iVar0, &iVar25, 0, 1, 0);
				Global_4262927[iVar25 /*80*/].f_6 = uVar11;
				Global_4262927[iVar25 /*80*/].f_7 = uVar12;
				Global_4262927[iVar25 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF03B782EEA848691(iVar0);
			}
		}
		else if (((((iParam0 == 242 || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240)
		{
			if (func_760())
			{
				func_745(-634726636, iVar0, &iVar26, 0, 1, 0);
				Global_4262927[iVar26 /*80*/].f_6 = uVar11;
				Global_4262927[iVar26 /*80*/].f_7 = uVar12;
				Global_4262927[iVar26 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xB509D8DC0549312F(iVar0);
			}
		}
		else if (func_760())
		{
			func_745(-856006867, iVar0, &iVar27, 0, 1, 0);
			Global_4262927[iVar27 /*80*/].f_6 = uVar11;
			Global_4262927[iVar27 /*80*/].f_7 = uVar12;
			Global_4262927[iVar27 /*80*/].f_8 = bVar14;
		}
		else
		{
			unk_0x0CB1BE0633C024A8(uVar11, uVar12, iVar0, bVar14);
		}
		func_738(iParam0, iVar0);
		if (func_737(iParam0))
		{
			if (func_736(iParam0) > -1)
			{
				func_735(func_736(iParam0), iVar0);
			}
		}
		Global_2460387 = iVar0;
		func_734(&Global_2458654, 0, 0);
	}
	if (func_364(PLAYER::PLAYER_ID()) || func_262(PLAYER::PLAYER_ID()))
	{
		func_725(iParam0);
	}
	if (func_707(iParam0))
	{
		Global_1666824.f_13 = iVar0;
		Global_1666824.f_14 = iVar1;
	}
	if (func_711(iParam0))
	{
		Global_1666878.f_13 = iVar0;
		Global_1666878.f_14 = iVar1;
	}
	if (func_556(iParam0))
	{
		Global_1666941.f_12 = iVar0;
		Global_1666941.f_13 = iVar1;
	}
	if (func_554(iParam0))
	{
		Global_1666985.f_12 = iVar0;
		Global_1666985.f_13 = iVar1;
	}
	if (func_552(iParam0))
	{
		Global_1667039.f_12 = iVar0;
		Global_1667039.f_13 = iVar1;
	}
	if (func_710(iParam0))
	{
		if (func_724(iParam0))
		{
			Global_1667120.f_12 = iVar0;
			Global_1667120.f_13 = iVar1;
		}
		else if (func_720(iParam0))
		{
			Global_1667173.f_12 = iVar0;
			Global_1667173.f_13 = iVar1;
		}
	}
}

int func_720(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_721(func_722(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_721(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_722(int iParam0)
{
	if (func_288(iParam0) == 237 || func_288(iParam0) == 250)
	{
		return func_723(iParam0);
	}
	return -1;
}

int func_723(int iParam0)
{
	if (func_158(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_176;
	}
	return -1;
}

int func_724(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_725(int iParam0)
{
	if (func_733(PLAYER::PLAYER_ID()) && func_759())
	{
		if (func_560(iParam0))
		{
			func_728(8657, -1);
		}
		else if (func_727(iParam0))
		{
			func_728(8659, -1);
		}
		else if (func_291(iParam0, 1))
		{
			func_728(8660, -1);
		}
		else if (func_726(iParam0))
		{
			func_728(8661, -1);
		}
	}
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_727(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_728(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_732(iParam0, func_374(iParam1), 0);
	iVar0++;
	if (!func_731(iParam0))
	{
		func_730(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_729(iParam0, iVar0, iParam1, 1);
	}
}

void func_729(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_374(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_374(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_374(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_374(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_374(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_374(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_374(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_374(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_374(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_374(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_374(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_374(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_374(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_374(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_374(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_374(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_374(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_374(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_374(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_374(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_374(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_374(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_374(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_374(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_374(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_374(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_374(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_374(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_374(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_374(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_374(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_374(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_374(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_374(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_730(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_374(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_731(int iParam0)
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

int func_732(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_374(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_733(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_115, 14);
}

void func_734(var uParam0, bool bParam1, bool bParam2)
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

void func_735(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23348 == 0 || Global_262145.f_23348 == 1)
		{
			if (!GAMEPLAY::IS_PC_VERSION() || Global_262145.f_23348 == 1)
			{
				Global_2524719.f_272 = iParam0;
				if (iParam1 > Global_262145.f_6473)
				{
					iParam1 = Global_262145.f_6473;
				}
				Global_2524719.f_273 = iParam1;
				Global_2524719.f_274 = 0;
			}
		}
	}
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_737(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_738(int iParam0, int iParam1)
{
	if (func_733(PLAYER::PLAYER_ID()) && func_759())
	{
		if (func_560(iParam0) && iParam1 > 0)
		{
			func_730(8658, (func_732(8658, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

var func_739(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_742(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_740(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_740(int iParam0, int iParam1)
{
	return (func_741(iParam0) * iParam1);
}

int func_741(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22174;
		
		case 0:
			return Global_262145.f_22175;
		
		case 1:
			return Global_262145.f_22176;
		
		case 2:
			return Global_262145.f_22177;
		
		case 3:
			return Global_262145.f_22178;
		
		case 4:
			return Global_262145.f_22179;
		
		case 5:
			return Global_262145.f_22180;
		
		case 6:
			return Global_262145.f_22181;
		
		case 7:
			return Global_262145.f_22182;
		
		default:
	}
	return 0;
}

float func_742(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22184);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22186;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22183);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22186;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22183);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22187;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22187;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22187;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22188;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22185);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22188;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22185);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22188;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22185);
			break;
	}
	uVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(uParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(uVar2) * fVar0);
}

int func_743(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_273.f_174[5 /*12*/];
}

bool func_744()
{
	return func_20(PLAYER::PLAYER_ID());
}

void func_745(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_760())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_746(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_746(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_746(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_746(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_746(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_760())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_36()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262927[iVar2 /*80*/].f_61.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xEC103C948D1D3BEF(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar4))
		{
			*uParam0 = func_753(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262927[*uParam0 /*80*/].f_61.f_8 = 1;
					Global_4262927[*uParam0 /*80*/].f_61.f_12 = 1;
				}
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4263477 = 1;
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_752(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_747(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_747(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_748(iParam0);
	}
}

void func_748(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_760())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_751(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_4262927[iParam0 /*80*/].f_61);
		}
		func_749(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_749(var uParam0)
{
	uParam0->f_61 = 0;
	uParam0->f_61 = 2147483647;
	uParam0->f_61.f_1 = 0;
	uParam0->f_61.f_2 = 0;
	uParam0->f_61.f_3 = -1593119440;
	uParam0->f_61.f_4 = -2085313189;
	uParam0->f_61.f_5 = 0;
	uParam0->f_61.f_6 = 1227573907;
	uParam0->f_61.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_750(&(uParam0->f_13));
	func_750(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_61.f_8 = 0;
	uParam0->f_61.f_9 = 0;
	uParam0->f_61.f_10 = 0;
	uParam0->f_61.f_11 = 0;
	uParam0->f_61.f_13 = 0;
	uParam0->f_61.f_12 = 0;
	uParam0->f_61.f_14 = 0;
	uParam0->f_61.f_15 = 0;
	uParam0->f_61.f_16 = 0;
	uParam0->f_61.f_18 = 0;
}

void func_750(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_751(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_752(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_753(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_760())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262927[iVar0 /*80*/].f_61.f_2 = 1;
			Global_4262927[iVar0 /*80*/].f_61.f_1 = uParam5;
			Global_4262927[iVar0 /*80*/].f_61.f_3 = iParam1;
			Global_4262927[iVar0 /*80*/].f_61.f_4 = uParam2;
			Global_4262927[iVar0 /*80*/].f_61.f_7 = uParam3;
			Global_4262927[iVar0 /*80*/].f_61.f_5 = 0;
			Global_4262927[iVar0 /*80*/].f_61 = iParam0;
			Global_4262927[iVar0 /*80*/].f_61.f_6 = iParam4;
			Global_4262927[iVar0 /*80*/].f_61.f_11 = uParam8;
			Global_4262927[iVar0 /*80*/].f_61.f_10 = uParam7;
			Global_4262927[iVar0 /*80*/].f_61.f_13 = iParam9;
			Global_4262927[iVar0 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar0 /*80*/].f_61.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			Global_4262927[iVar0 /*80*/].f_61.f_18 = 0;
			Global_4263464 = 0;
			if (bParam6)
			{
				Global_4262927[iVar0 /*80*/].f_61.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_754(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_754(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
{
	vector3 vVar0;
	int iVar35;
	
	if (iParam80 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -313275313;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_61 };
	vVar0.f_2.f_32 = iParam80;
	iVar35 = func_583(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_755();
		unk_0xA40CC53DF8E50837(1, &vVar0, 35, iVar35);
	}
}

void func_755()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_756(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_757(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_758()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_188;
}

bool func_759()
{
	return func_319(PLAYER::PLAYER_ID());
}

int func_760()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_761(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1625435[iParam0 /*560*/].f_11.f_8[0];
	*uParam2 = Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_762(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_763(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_763(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_773(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_769(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_764(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_764(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_767(iParam0, 1) };
	if (iParam0 == func_766(PLAYER::PLAYER_PED_ID()))
	{
		func_765(1);
	}
	func_769(vVar0, iParam1, 0, sParam2, uParam3);
}

void func_765(int iParam0)
{
	Global_2437022.f_1886 = iParam0;
}

int func_766(var uParam0)
{
	return uParam0;
}

Vector3 func_767(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_768(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = vVar3.z;
		}
	}
	GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar6, 0f, 0f, fVar13) };
	return vVar0;
}

int func_768(var uParam0)
{
	return uParam0;
}

void func_769(vector3 vParam0, int iParam3, int iParam4, char* sParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437022.f_1285[iVar0 /*30*/].f_6 == 0 || Global_2437022.f_1285[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437022.f_1285[iVar1 /*30*/] = { vParam0 };
			Global_2437022.f_1285[iVar1 /*30*/].f_6 = 1;
			Global_2437022.f_1285[iVar1 /*30*/].f_4 = func_772(Global_2437022.f_1285[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437022.f_1285[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437022.f_1285[iVar1 /*30*/].f_3 = iParam3;
			Global_2437022.f_1285[iVar1 /*30*/].f_8 = iParam4;
			Global_2437022.f_1285[iVar1 /*30*/].f_9 = func_771();
			Global_2437022.f_1285[iVar1 /*30*/].f_10 = func_770();
			StringCopy(&(Global_2437022.f_1285[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437022.f_1285[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam6);
		}
	}
}

int func_770()
{
	if (Global_2437022.f_1886)
	{
		Global_2437022.f_1886 = 0;
		return 1;
	}
	Global_2437022.f_1886 = 0;
	return 0;
}

var func_771()
{
	var uVar0;
	
	uVar0 = Global_2437022.f_1888;
	Global_2437022.f_1888 = 1;
	return uVar0;
}

float func_772(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_773(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_774(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_774(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_804(PLAYER::PLAYER_ID()) || func_803(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9522 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9522;
		}
	}
	else if (func_307() || func_802(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22640 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22640;
		}
	}
	else if (Global_262145.f_6524 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6524;
	}
	if (func_801(uParam2))
	{
	}
	if (func_800())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_798(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_797(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_795(0, &iVar1);
					break;
				
				case 3:
					func_795(1, &iVar1);
					break;
				
				case 1:
					func_793(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677623)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_792(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_784((func_791(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_2 != -1)
				{
					func_792(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_779(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_775((func_777(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_775((func_777(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_775(int iParam0)
{
	if (func_800())
	{
		Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_5 = iParam0;
		func_776(joaat("mpply_globalxp"), iParam0);
	}
}

void func_776(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_777(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1202(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_778(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_778(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_778(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_779(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_45(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_782(func_783(&Var0));
			if (iVar13 == 0)
			{
				func_781(&Global_1378824, iParam0);
				func_780(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar13 == 1)
			{
				func_781(&Global_1378825, iParam0);
				func_780(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar13 == 2)
			{
				func_781(&Global_1378826, iParam0);
				func_780(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar13 == 3)
			{
				func_781(&Global_1378827, iParam0);
				func_780(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar13 == 4)
			{
				func_781(&Global_1378828, iParam0);
				func_780(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_780(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1378819 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1378821 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1378821 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1378822 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1378823 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1378824 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1378825 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1378826 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1378827 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1378828 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1378829 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1378830 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1378831 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1378832 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1378833 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1378834 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1378835 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_781(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_782(int iParam0)
{
	if (iParam0 == Global_1378819)
	{
		return 0;
	}
	else if (iParam0 == Global_1378820)
	{
		return 1;
	}
	else if (iParam0 == Global_1378821)
	{
		return 2;
	}
	else if (iParam0 == Global_1378822)
	{
		return 3;
	}
	else if (iParam0 == Global_1378823)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_783(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2458119;
		}
	}
	return Global_2458119;
}

void func_784(int iParam0, int iParam1, int iParam2)
{
	if (func_800())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9490 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1378945[func_374(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_374(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9489 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9489 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_790(PLAYER::PLAYER_ID()))
		{
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_6 = func_788(iParam0, 1);
		}
		func_729(639, iParam0, -1, 1);
		func_730(640, func_788(iParam0, 1), -1, 1, 0);
		Global_1378945[func_374(-1)] = iParam0;
		func_785(7, 0);
	}
}

void func_785(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_787(iParam0, iParam1))
	{
		iVar0 = func_786();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_786()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458086[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_787(int iParam0, var uParam1)
{
	if (Global_1312845)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312857) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_788(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_789(iParam0, 0);
}

int func_789(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_287850[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_287850[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_790(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2437022.f_1, iParam0);
	}
	return 1;
}

int func_791(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1378945[func_374(-1)];
			}
			else if (func_790(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_374(-1)];
	}
	return 0;
}

void func_792(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_732(iParam0, func_374(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_731(iParam0))
	{
		func_730(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_729(iParam0, iVar0, iParam2, 1);
	}
}

void func_793(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		uVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(uVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_117(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_46(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_794(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_794(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_794(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(uParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_795(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_1202(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_46(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_1202(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_796(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_46(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_794(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_794(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_796(var uParam0, int iParam1)
{
	return SYSTEM::VDIST(func_38(uParam0), func_38(iParam1));
	return 0f;
}

int func_797(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_794(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_798(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_791(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_791(PLAYER::PLAYER_ID());
		}
	}
	if (func_799(8000, 0, 0) > 0)
	{
		if (func_799(8000, 0, 0) < (iParam0 + func_791(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_799(8000, 0, 0) - func_791(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_799(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_287850[iParam0];
}

int func_800()
{
	return 1;
}

int func_801(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_802(int iParam0)
{
	return func_552(func_288(iParam0));
}

bool func_803(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_804(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

void func_805()
{
	Global_2459729 = 1;
}

void func_806(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_340(7))
	{
		return;
	}
	iVar0 = func_809(iParam0);
	iVar1 = func_808(iParam0);
	iVar2 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2524719.f_4883.f_259, NETWORK::GET_NETWORK_TIME()));
	if (func_807(iParam0) != -1)
	{
		if (iVar2 > func_807(iParam0))
		{
			iVar2 = func_807(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12282)
	{
		iVar2 = Global_262145.f_12282;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_807(int iParam0)
{
	if (func_291(iParam0, 0) || func_727(iParam0))
	{
		return Global_262145.f_18356;
	}
	if (func_560(iParam0))
	{
		return Global_262145.f_18355;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18352;
		
		case 191:
			return Global_262145.f_18354;
		
		case 190:
			return Global_262145.f_18353;
		
		case 227:
			return Global_262145.f_20911;
		
		case 226:
			return Global_262145.f_20899;
		
		case 225:
			return Global_262145.f_20919;
		
		case 230:
			return Global_262145.f_22171;
		
		case 229:
			return Global_262145.f_22075;
		
		case 233:
			return Global_262145.f_22645;
		
		case 237:
			return Global_262145.f_23801;
		
		case 238:
			return Global_262145.f_23912;
		
		case 249:
			return Global_262145.f_23928;
		
		default:
	}
	return -1;
}

int func_808(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12373;
		
		case 152:
			return Global_262145.f_12408;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12396;
		
		case 157:
			return Global_262145.f_12363;
		
		case 159:
			return Global_262145.f_12346;
		
		case 164:
			return Global_262145.f_12386;
		
		case 160:
			return Global_262145.f_12436;
		
		case 162:
			return Global_262145.f_12456;
		
		case 163:
			return Global_262145.f_12421;
		
		case 154:
			return Global_262145.f_12491;
		
		case 155:
			return Global_262145.f_12481;
		
		case 153:
			return Global_262145.f_12445;
		
		case 170:
			return Global_262145.f_14868;
		
		case 171:
			return Global_262145.f_14927;
		
		case 172:
			return Global_262145.f_14945;
		
		case 173:
			return Global_262145.f_14886;
		
		case 166:
			return Global_262145.f_14901;
		
		case 167:
			return Global_262145.f_14992;
		
		case 169:
			return Global_262145.f_14964;
		
		case 168:
			return Global_262145.f_14957;
		
		case 179:
			return Global_262145.f_18235;
		
		case 180:
			return Global_262145.f_18014;
		
		case 182:
			return Global_262145.f_18014;
		
		case 183:
			return Global_262145.f_18014;
		
		case 185:
			return Global_262145.f_18014;
		
		case 186:
			return Global_262145.f_18014;
		
		case 189:
			return Global_262145.f_18235;
		
		case 190:
			return Global_262145.f_17890;
		
		case 191:
			return Global_262145.f_17981;
		
		case 192:
			return Global_262145.f_17775;
		
		case 193:
			return Global_262145.f_18235;
		
		case 194:
			return Global_262145.f_18235;
		
		case 195:
			return Global_262145.f_18014;
		
		case 197:
			return Global_262145.f_18014;
		
		case 198:
			return Global_262145.f_18014;
		
		case 199:
			return Global_262145.f_18235;
		
		case 200:
			return Global_262145.f_18235;
		
		case 201:
			return Global_262145.f_18235;
		
		case 205:
			return Global_262145.f_18235;
		
		case 207:
			return Global_262145.f_18014;
		
		case 208:
			return Global_262145.f_18014;
		
		case 209:
			return Global_262145.f_18014;
		
		case 210:
			return Global_262145.f_18235;
		
		case 211:
			return Global_262145.f_18235;
		
		case 214:
			return Global_262145.f_19084;
		
		case 215:
			return Global_262145.f_19086;
		
		case 216:
			return Global_262145.f_19088;
		
		case 217:
			return Global_262145.f_19090;
		
		case 218:
			return Global_262145.f_19092;
		
		case 219:
			return Global_262145.f_19094;
		
		case 220:
			return Global_262145.f_19096;
		
		case 221:
			return Global_262145.f_19098;
		
		case 225:
			if (func_1074(0) || func_317(0))
			{
				return Global_262145.f_20921;
			}
			break;
		
		case 226:
			if (func_1074(0) || func_317(0))
			{
				return Global_262145.f_20901;
			}
			break;
		
		case 227:
			if (func_1074(0) || func_317(0))
			{
				return Global_262145.f_20913;
			}
			break;
		
		case 229:
			if (func_1074(0) || func_317(0))
			{
				return Global_262145.f_22077;
			}
			break;
		
		case 230:
			if (func_1074(0) || func_317(0))
			{
				return Global_262145.f_22173;
			}
			break;
		
		case 233:
			if (func_1074(0) || func_317(0))
			{
				return Global_262145.f_22644;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (func_1074(0) || func_317(0))
			{
				return Global_262145.f_23803;
			}
			break;
		
		case 238:
			if (func_1074(0) || func_317(0))
			{
				return Global_262145.f_23914;
			}
			break;
		
		case 249:
			if (func_1074(0) || func_317(0))
			{
				return Global_262145.f_23930;
			}
			break;
	}
	return 0;
}

int func_809(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12372;
		
		case 152:
			return Global_262145.f_12407;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12395;
		
		case 157:
			return Global_262145.f_12362;
		
		case 159:
			return Global_262145.f_12345;
		
		case 164:
			return Global_262145.f_12385;
		
		case 160:
			return Global_262145.f_12435;
		
		case 162:
			return Global_262145.f_12455;
		
		case 163:
			return Global_262145.f_12420;
		
		case 154:
			return Global_262145.f_12490;
		
		case 155:
			return Global_262145.f_12480;
		
		case 153:
			return Global_262145.f_12444;
		
		case 170:
			return Global_262145.f_14867;
		
		case 171:
			return Global_262145.f_14926;
		
		case 172:
			return Global_262145.f_14944;
		
		case 173:
			return Global_262145.f_14885;
		
		case 166:
			return Global_262145.f_14900;
		
		case 179:
			return Global_262145.f_18234;
		
		case 180:
			return Global_262145.f_18013;
		
		case 182:
			return Global_262145.f_18013;
		
		case 183:
			return Global_262145.f_18013;
		
		case 185:
			return Global_262145.f_18013;
		
		case 186:
			return Global_262145.f_18013;
		
		case 189:
			return Global_262145.f_18234;
		
		case 193:
			return Global_262145.f_18234;
		
		case 194:
			return Global_262145.f_18234;
		
		case 195:
			return Global_262145.f_18013;
		
		case 197:
			return Global_262145.f_18013;
		
		case 198:
			return Global_262145.f_18013;
		
		case 199:
			return Global_262145.f_18234;
		
		case 200:
			return Global_262145.f_18234;
		
		case 201:
			return Global_262145.f_18234;
		
		case 205:
			return Global_262145.f_18234;
		
		case 207:
			return Global_262145.f_18013;
		
		case 208:
			return Global_262145.f_18013;
		
		case 209:
			return Global_262145.f_18013;
		
		case 210:
			return Global_262145.f_18234;
		
		case 211:
			return Global_262145.f_18234;
		
		case 190:
			if (!func_744())
			{
				return Global_262145.f_17889;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_744())
			{
				return Global_262145.f_17980;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_744())
			{
				return Global_262145.f_17774;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19083;
		
		case 215:
			return Global_262145.f_19085;
		
		case 216:
			return Global_262145.f_19087;
		
		case 217:
			return Global_262145.f_19089;
		
		case 218:
			return Global_262145.f_19091;
		
		case 219:
			return Global_262145.f_19093;
		
		case 220:
			return Global_262145.f_19095;
		
		case 221:
			return Global_262145.f_19097;
		
		case 225:
			if (func_317(0))
			{
				return Global_262145.f_20920;
			}
			break;
		
		case 226:
			if (func_317(0))
			{
				return Global_262145.f_20900;
			}
			break;
		
		case 227:
			if (func_317(0))
			{
				return Global_262145.f_20912;
			}
			break;
		
		case 229:
			if (func_317(0))
			{
				return Global_262145.f_22076;
			}
			break;
		
		case 230:
			if (func_317(0))
			{
				return Global_262145.f_22172;
			}
			break;
		
		case 233:
			if (func_317(0))
			{
				return Global_262145.f_22646;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_317(0))
			{
				return Global_262145.f_23802;
			}
			break;
		
		case 238:
			if (func_317(0))
			{
				return Global_262145.f_23913;
			}
			break;
		
		case 249:
			if (func_317(0))
			{
				return Global_262145.f_23929;
			}
			break;
	}
	return 0;
}

void func_810(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_744())
		{
			if (func_1074(0))
			{
				if (!func_317(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_532()))
					{
						if (func_818() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_818());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_816(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_815("GB_BCUT_TICK1", func_532(), iVar0, 0, 0, 1, 1);
						}
						func_814(20);
						func_811(func_532(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_811(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1202(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_813(iParam0);
		func_812(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_583(iParam0));
	}
}

void func_812(var uParam0, var uParam1)
{
	*uParam0 = Global_1643357.f_9;
	*uParam1 = Global_1643357.f_10;
}

var func_813(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_491;
}

void func_814(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::SET_BIT(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

int func_815(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		UI::_SET_NOTIFICATION_COLOR_NEXT(func_627(iParam1, -2, 1, 0, 0));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_625(&Var1));
		if (!iParam3 == 0)
		{
			UI::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		func_620(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_816(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_817(1);
	}
	else
	{
		iVar1 = func_817(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_817(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12277;
}

int func_818()
{
	return Global_262145.f_12276;
}

void func_819(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_317(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_744())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_532();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1589747[iVar11 /*790*/].f_768.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				uVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				uVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = uVar1;
			if (bVar19)
			{
				iVar2 = Global_1589747[iVar11 /*790*/].f_768.f_2;
			}
			else
			{
				iVar2 = func_835(Global_1589747[iVar11 /*790*/].f_768, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_834(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_833("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1667120.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_832(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_830(*uParam3);
				}
				iVar6 = func_829(&uVar5);
				iVar7 = Global_262145.f_23832;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23831));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_814(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_828(iVar23))
								{
									func_820(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23804;
				uVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = uVar3;
				iVar4 = Global_262145.f_23805;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677631 = *iParam2;
					func_814(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_820(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_822(iParam0);
	func_821(iParam0, uVar0, iParam1, iParam2);
}

void func_821(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -1854838991;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_813(iParam0);
	func_812(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_18())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_583(iParam0));
		}
	}
}

int func_822(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_827();
	iVar0 = func_825(iParam0, iVar0);
	iVar1 = Global_1625435[func_532() /*560*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14828));
	if (iVar0 < func_824())
	{
		iVar0 = func_824();
	}
	if (iVar0 > func_823())
	{
		iVar0 = func_823();
	}
	return iVar0;
}

int func_823()
{
	return Global_262145.f_14829;
}

int func_824()
{
	return Global_262145.f_16004;
}

int func_825(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_893(iParam0) * func_826());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_826()
{
	return Global_262145.f_16003;
}

var func_827()
{
	return Global_262145.f_12268;
}

int func_828(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_16(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_263(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_829(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_34(iVar2, 0) && !func_16(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_34(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_830(int iParam0)
{
	func_831(iParam0, 7236);
}

void func_831(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_732(iParam1, -1, 0);
	func_730(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_832(int iParam0)
{
	func_831(iParam0, 7231);
}

int func_833(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_620(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

var func_834(var uParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(uParam0);
	fVar1 = (fVar0 * Global_262145.f_23833);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

var func_835(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_836(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_317(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_744())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_532();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_848(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_839(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_740(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_739(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_838(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_833("SMTICK_RONCUT", func_838(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_838(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_837(iVar2, iVar9);
				iVar6 = func_829(&uVar5);
				iVar7 = Global_262145.f_22190;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22189));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_814(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_828(iVar20))
								{
									func_820(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22123;
				uVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = uVar3;
				iVar4 = Global_262145.f_22124;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677631 = *iParam2;
					func_814(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_837(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_831(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_831(iParam1, 6117);
	}
}

int func_838(var uParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(uParam0);
	fVar1 = (fVar0 * Global_262145.f_22157);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22158))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22158);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_839(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_846())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_848(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_841(func_842(func_845(iVar0), -1, -1));
		if (func_840(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_840(int iParam0)
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_841(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_842(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_844(iParam0, iParam1);
	uVar2 = func_843(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_843(int iParam0)
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
	return iVar0;
}

int func_844(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
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
	return iVar0;
}

int func_845(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_846()
{
	return func_847() != 0;
}

int func_847()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_255;
}

int func_848(int iParam0)
{
	if (iParam0 != func_18() && func_849(iParam0))
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255.f_3;
	}
	return 0;
}

int func_849(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255 != 0;
	}
	return 0;
}

void func_850(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_317(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_744())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_532();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_743(iVar15);
			iVar0 = (func_871(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_867(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_20903));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_20902));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_864(iVar16, iVar2);
				if (func_860(iVar16) >= Global_262145.f_20451 || iVar2 >= Global_262145.f_20451)
				{
					func_851(5);
				}
				iVar6 = func_829(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_20905);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_20904));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_814(108);
					}
					else
					{
						func_814(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_828(iVar20))
								{
									func_820(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20906;
				uVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = uVar3;
				iVar4 = Global_262145.f_20907;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677631 = *iParam2;
					func_814(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_851(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20439)
			{
				if (func_853(Global_262145.f_20440))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20441)
			{
				if (func_853(Global_262145.f_20442))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20443)
			{
				if (func_853(Global_262145.f_20444))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20445)
			{
				if (func_853(Global_262145.f_20446))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20447)
			{
				if (func_853(Global_262145.f_20448))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20449)
			{
				if (func_853(Global_262145.f_20450))
				{
					func_833("CLOTHAWDSTRAP3", Global_262145.f_20451, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20452)
			{
				if (func_853(Global_262145.f_20453))
				{
					func_833("CLOTHAWDSTRAP5", Global_262145.f_20585, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20455)
			{
				if (func_853(Global_262145.f_20456))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20457)
			{
				if (func_853(Global_262145.f_20458))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20459)
			{
				if (func_853(Global_262145.f_20460))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20461)
			{
				if (func_853(Global_262145.f_20462))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20463)
			{
				if (func_853(Global_262145.f_20464))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20465)
			{
				if (func_853(Global_262145.f_20466))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20467)
			{
				if (func_853(Global_262145.f_20468))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20469)
			{
				if (func_853(Global_262145.f_20470))
				{
					func_852("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_852(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	if (!iParam2 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	if (!iParam3 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	}
	else
	{
		Global_2503649 = { func_45(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2503579, 35, &Global_2503649))
		{
			iVar1 = 0;
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2503579.f_22), "Leader") && Global_2503579.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2503579.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = UI::_DRAW_NOTIFICATION_CLAN_INVITE(iVar2, NETWORK::_0x7543BB439F63792B(&Global_2503579, 35), &(Global_2503579.f_17), Global_2503579.f_30, iVar1, 0, Global_2503579, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314014, Global_1314015, Global_1314016);
		}
		else
		{
			iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		}
	}
	func_620(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_853(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_857(15417, -1, -1))
			{
				func_856(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_857(15418, -1, -1))
			{
				func_856(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_857(15425, -1, -1))
			{
				func_856(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_857(15405, -1, -1))
			{
				func_856(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_857(15393, -1, -1))
			{
				func_856(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_857(15409, -1, -1))
			{
				func_856(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_857(15396, -1, -1))
			{
				func_856(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_857(15412, -1, -1))
			{
				func_856(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_857(15403, -1, -1))
			{
				func_856(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_857(15389, -1, -1))
			{
				func_856(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_857(15398, -1, -1))
			{
				func_856(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_857(15400, -1, -1))
			{
				func_856(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_857(15408, -1, -1))
			{
				func_856(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_857(15411, -1, -1))
			{
				func_856(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_857(15397, -1, -1))
			{
				func_856(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_857(15413, -1, -1))
			{
				func_856(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_857(15391, -1, -1))
			{
				func_856(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_857(15388, -1, -1))
			{
				func_856(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_857(15401, -1, -1))
			{
				func_856(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_857(15394, -1, -1))
			{
				func_856(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_857(15406, -1, -1))
			{
				func_856(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_857(15395, -1, -1))
			{
				func_856(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_857(15410, -1, -1))
			{
				func_856(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_857(15407, -1, -1))
			{
				func_856(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_857(15414, -1, -1))
			{
				func_856(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_857(15415, -1, -1))
			{
				func_856(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_857(15399, -1, -1))
			{
				func_856(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_857(15404, -1, -1))
			{
				func_856(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_857(15392, -1, -1))
			{
				func_856(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_857(15390, -1, -1))
			{
				func_856(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_857(15402, -1, -1))
			{
				func_856(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_857(15416, -1, -1))
			{
				func_856(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_373(209, -1))
			{
				func_854(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_857(15426, -1, -1))
			{
				func_856(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_857(15422, -1, -1))
			{
				func_856(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_857(15423, -1, -1))
			{
				func_856(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_857(15421, -1, -1))
			{
				func_856(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_857(15427, -1, -1))
			{
				func_856(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_857(15419, -1, -1))
			{
				func_856(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_857(15420, -1, -1))
			{
				func_856(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_854(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_855())
	{
		iVar0 = Global_2566070[iParam0 /*3*/][func_374(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_855()
{
	return 1;
	return 0;
}

int func_856(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_857(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = func_859(iParam0, iParam1);
	uVar2 = func_858(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_858(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_859(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_860(int iParam0)
{
	int iVar0;
	
	iVar0 = func_862(iParam0);
	return func_732(func_861(iVar0), -1, 0);
}

int func_861(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_862(int iParam0)
{
	int iVar0;
	
	if (func_863(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_863(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_864(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_862(iParam0);
	iVar1 = func_861(iVar0);
	iVar2 = (func_732(iVar1, -1, 0) + iParam1);
	func_730(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_842(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iVar0 /*12*/] != 0)
			{
				iVar1 = func_861(iVar0);
				iVar3 = (iVar3 + func_732(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_866(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_865(9357, iVar5, -1, 1);
	}
}

var func_865(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
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

int func_866(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_867(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_756(iParam1);
	if (func_863(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16834;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16839);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16833;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16838);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16843);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16832;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16837);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16842);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16830;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16835);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16840);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16831;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16836);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16841);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20928;
				if (func_868(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20930);
				}
				if (func_868(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20929);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_868(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_870(iParam0, iParam1))
	{
		iVar0 = func_869(iParam0, iParam1);
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_869(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_863(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_870(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_863(iParam1) && iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_871(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_863(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_872(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	var uVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_759())
			{
				Var0 = { func_758() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_867(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18464);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18463);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_829(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18454);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18453));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_814(86);
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (func_317(0))
			{
				Var15 = { func_873(func_532()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_867(func_532(), Var15, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18464));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18463));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18503;
				uVar24 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar23));
				*iParam2 = uVar24;
				iVar25 = Global_262145.f_18504;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_873(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_188;
}

void func_874(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_20(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_889();
			}
			func_888();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_20(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_880(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_879(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_829(&uVar2);
					iVar4 = Global_262145.f_16014;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15223));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_814(44);
					}
				}
				func_877(*iParam3);
				func_876();
				Global_2524719.f_4883.f_372 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_828(iVar9))
						{
							func_820(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_20(PLAYER::PLAYER_ID()))
		{
			func_875();
		}
	}
}

void func_875()
{
	int iVar0;
	
	iVar0 = Global_2568270[func_36()];
	iVar0++;
	func_729(3667, iVar0, -1, 1);
}

void func_876()
{
	int iVar0;
	
	iVar0 = Global_2568276[func_36()];
	iVar0++;
	func_729(3666, iVar0, -1, 1);
}

void func_877(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2568279[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_729(3668, iVar0, -1, 1);
	if (func_842(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_878(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_865(7666, iVar2, -1, 1);
	}
}

int func_878(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16147;
			break;
		
		case 2:
			return Global_262145.f_16148;
			break;
		
		case 3:
			return Global_262145.f_16149;
			break;
		
		case 4:
			return Global_262145.f_16150;
			break;
		
		case 5:
			return Global_262145.f_16151;
			break;
		
		case 6:
			return Global_262145.f_16152;
			break;
		
		case 7:
			return Global_262145.f_16153;
			break;
		
		case 8:
			return Global_262145.f_16154;
			break;
		
		case 9:
			return Global_262145.f_16155;
			break;
		
		case 10:
			return Global_262145.f_16156;
			break;
		
		case 11:
			return Global_262145.f_16157;
			break;
		
		case 12:
			return Global_262145.f_16158;
			break;
		
		case 13:
			return Global_262145.f_16159;
			break;
		
		case 14:
			return Global_262145.f_16160;
			break;
		
		case 15:
			return Global_262145.f_16161;
			break;
		
		case 16:
			return Global_262145.f_16162;
			break;
		
		case 17:
			return Global_262145.f_16163;
			break;
		
		case 18:
			return Global_262145.f_16164;
			break;
		
		case 19:
			return Global_262145.f_16165;
			break;
		
		case 20:
			return Global_262145.f_16166;
			break;
		
		case 21:
			return Global_262145.f_16167;
			break;
		
		case 22:
			return Global_262145.f_16168;
			break;
		
		case 23:
			return Global_262145.f_16169;
			break;
		
		case 24:
			return Global_262145.f_16170;
			break;
	}
	return 0;
}

var func_879(int iParam0)
{
	if (iParam0 >= Global_262145.f_15201)
	{
		return Global_262145.f_15222;
	}
	else if (iParam0 >= Global_262145.f_15200)
	{
		return Global_262145.f_15221;
	}
	else if (iParam0 >= Global_262145.f_15199)
	{
		return Global_262145.f_15220;
	}
	else if (iParam0 >= Global_262145.f_15198)
	{
		return Global_262145.f_15219;
	}
	else if (iParam0 >= Global_262145.f_15197)
	{
		return Global_262145.f_15218;
	}
	else if (iParam0 >= Global_262145.f_15196)
	{
		return Global_262145.f_15217;
	}
	else if (iParam0 >= Global_262145.f_15195)
	{
		return Global_262145.f_15216;
	}
	else if (iParam0 >= Global_262145.f_15194)
	{
		return Global_262145.f_15215;
	}
	else if (iParam0 >= Global_262145.f_15193)
	{
		return Global_262145.f_15214;
	}
	else if (iParam0 >= Global_262145.f_15192)
	{
		return Global_262145.f_15213;
	}
	else if (iParam0 >= Global_262145.f_15191)
	{
		return Global_262145.f_15212;
	}
	else if (iParam0 >= Global_262145.f_15190)
	{
		return Global_262145.f_15211;
	}
	else if (iParam0 >= Global_262145.f_15189)
	{
		return Global_262145.f_15210;
	}
	else if (iParam0 >= Global_262145.f_15188)
	{
		return Global_262145.f_15209;
	}
	else if (iParam0 >= Global_262145.f_15187)
	{
		return Global_262145.f_15208;
	}
	else if (iParam0 >= Global_262145.f_15186)
	{
		return Global_262145.f_15207;
	}
	else if (iParam0 >= Global_262145.f_15185)
	{
		return Global_262145.f_15206;
	}
	else if (iParam0 >= Global_262145.f_15184)
	{
		return Global_262145.f_15205;
	}
	else if (iParam0 >= Global_262145.f_15183)
	{
		return Global_262145.f_15204;
	}
	else if (iParam0 >= Global_262145.f_15182)
	{
		return Global_262145.f_15203;
	}
	return Global_262145.f_15202;
}

int func_880(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_887(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_886(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_885(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_881(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_881(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_885(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_881(int iParam0)
{
	int iVar0;
	
	if (func_884(iParam0))
	{
		iVar0 = func_882(func_883(iParam0));
		return func_732(iVar0, -1, 0);
	}
	return 0;
}

int func_882(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_883(int iParam0)
{
	int iVar0;
	
	if (func_884(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_98[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_884(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_885(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15401;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15399;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15403;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15397;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15395;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15405;
	}
	return 0;
}

int func_886(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_884(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1668370[iVar0] == iParam1 && Global_1668377[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_887(int iParam0)
{
	int iVar0;
	
	if (func_884(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_98[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_888()
{
	int iVar0;
	
	iVar0 = Global_2568267[func_36()];
	iVar0++;
	Global_2568267[func_36()] = iVar0;
	func_729(3665, iVar0, -1, 1);
}

void func_889()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2568264[func_36()];
	iVar1 = Global_2568273[func_36()];
	iVar0++;
	iVar1++;
	Global_2568264[func_36()] = iVar0;
	Global_2568273[func_36()] = iVar1;
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_120 = iVar1;
	func_729(3663, iVar0, -1, 1);
	func_729(3664, iVar1, -1, 1);
}

void func_890()
{
	if (func_744())
	{
		Global_2449169.f_3068.f_134 = 0;
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
	}
}

void func_891()
{
	if (func_744())
	{
		if (Global_2449169.f_3068.f_134 < 10)
		{
			Global_2449169.f_3068.f_134++;
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
		}
	}
}

void func_892()
{
	if (func_744())
	{
		if (Global_2449169.f_3068.f_134 > 0)
		{
			Global_2449169.f_3068.f_134 = (Global_2449169.f_3068.f_134 - 1);
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
		}
	}
}

int func_893(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_28;
}

int func_894(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
			if (func_1074(1) && !func_317(1))
			{
				if (func_895(func_532()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_895(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 26);
}

int func_896(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12393) * Global_262145.f_12398));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12343) * Global_262145.f_12348));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12370) * Global_262145.f_12374));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12383) * Global_262145.f_12387));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12405) * Global_262145.f_12410));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12568));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12573) * Global_262145.f_12574));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12571) * Global_262145.f_12572));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12565) * Global_262145.f_12566));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12569) * Global_262145.f_12570));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12563) * Global_262145.f_12564));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14924;
		
		case 172:
			return Global_262145.f_14940;
		
		case 173:
			return Global_262145.f_14883;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18158;
		
		case 180:
			return Global_262145.f_18034;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18042;
		
		case 185:
			return Global_262145.f_18051;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18246;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18263;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18111;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18294;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18172;
		
		case 205:
			return Global_262145.f_18281;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18139;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18276;
		
		case 211:
			return Global_262145.f_18240;
		
		case 214:
			return Global_262145.f_18833;
		
		case 215:
			return Global_262145.f_18843;
		
		case 216:
			return Global_262145.f_18853;
		
		case 217:
			return Global_262145.f_18862;
		
		case 218:
			return Global_262145.f_18871;
		
		case 219:
			return Global_262145.f_18887;
		
		case 241:
			return Global_262145.f_23949;
		
		case 242:
			return Global_262145.f_23945;
		
		case 248:
			return Global_262145.f_23948;
		
		case 244:
			return Global_262145.f_23946;
		
		case 239:
			return Global_262145.f_23950;
		
		case 240:
			return Global_262145.f_23951;
		
		default:
	}
	return 0;
}

int func_897(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12394) * Global_262145.f_12399));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12344) * Global_262145.f_12349));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12371) * Global_262145.f_12375));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12384) * Global_262145.f_12388));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12406) * Global_262145.f_12411));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12443) * Global_262145.f_12446));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12489) * Global_262145.f_12492));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12479) * Global_262145.f_12482));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12434) * Global_262145.f_12437));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12454) * Global_262145.f_12459));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12419) * Global_262145.f_12422));
		
		case 170:
			return Global_262145.f_14866;
		
		case 171:
			return Global_262145.f_14925;
		
		case 172:
			return Global_262145.f_14941;
		
		case 173:
			return Global_262145.f_14884;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16962;
		
		case 168:
			return Global_262145.f_16961;
		
		case 179:
			return Global_262145.f_18159;
		
		case 180:
			return Global_262145.f_18035;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18043;
		
		case 185:
			return Global_262145.f_18052;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18247;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18264;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18112;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18295;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18173;
		
		case 205:
			return Global_262145.f_18282;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18140;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18277;
		
		case 211:
			return Global_262145.f_18241;
		
		case 214:
			return Global_262145.f_18834;
		
		case 215:
			return Global_262145.f_18844;
		
		case 216:
			return Global_262145.f_18854;
		
		case 217:
			return Global_262145.f_18863;
		
		case 218:
			return Global_262145.f_18872;
		
		case 219:
			return Global_262145.f_18888;
		
		case 178:
			if (func_744())
			{
				return Global_262145.f_18711;
			}
			else if (bParam1)
			{
				return Global_262145.f_18712;
			}
			break;
		
		case 188:
			if (func_744())
			{
				return Global_262145.f_18795;
			}
			else if (bParam1)
			{
				return Global_262145.f_18796;
			}
			break;
		
		case 225:
			if (func_744() && !func_759())
			{
				if (func_895(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20916;
				}
				else
				{
					return Global_262145.f_20917;
				}
			}
			else if (func_759())
			{
				return Global_262145.f_20918;
			}
			break;
		
		case 226:
			if (func_744() && !func_759())
			{
				if (func_895(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20896;
				}
				else
				{
					return Global_262145.f_20897;
				}
			}
			else if (func_759())
			{
				return Global_262145.f_20898;
			}
			break;
		
		case 227:
			if (func_744() && !func_759())
			{
				if (func_895(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20908;
				}
				else
				{
					return Global_262145.f_20909;
				}
			}
			else if (func_759())
			{
				return Global_262145.f_20910;
			}
			break;
		
		case 229:
			if (func_744() && !func_759())
			{
				if (func_895(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22072;
				}
				else
				{
					return Global_262145.f_22073;
				}
			}
			else if (func_759())
			{
				return Global_262145.f_22074;
			}
			break;
		
		case 230:
			if (func_744() && !func_759())
			{
				if (func_895(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22168;
				}
				else
				{
					return Global_262145.f_22169;
				}
			}
			else if (func_759())
			{
				return Global_262145.f_22170;
			}
			break;
		
		case 233:
			if (func_744() && !func_759())
			{
				if (func_895(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22642;
				}
				else
				{
					return Global_262145.f_22643;
				}
			}
			else if (func_759())
			{
				return Global_262145.f_22641;
			}
			break;
		
		case 241:
			return Global_262145.f_23956;
		
		case 242:
			return Global_262145.f_23952;
		
		case 244:
			return Global_262145.f_23953;
		
		case 248:
			return Global_262145.f_23955;
		
		case 239:
			return Global_262145.f_23957;
		
		case 240:
			return Global_262145.f_23958;
		
		case 237:
			if (func_744() && !func_759())
			{
				if (func_895(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23798;
				}
				else
				{
					return Global_262145.f_23799;
				}
			}
			else if (func_759())
			{
				return Global_262145.f_23800;
			}
			break;
		
		case 238:
			if (func_744() && !func_759())
			{
				if (func_895(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23909;
				}
				else
				{
					return Global_262145.f_23910;
				}
			}
			else if (func_759())
			{
				return Global_262145.f_23911;
			}
			break;
		
		case 249:
			if (func_744() && !func_759())
			{
				if (func_895(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23925;
				}
				else
				{
					return Global_262145.f_23926;
				}
			}
			else if (func_759())
			{
				return Global_262145.f_23927;
			}
			break;
	}
	return 0;
}

void func_898(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_899(iParam0))
	{
		if (!func_744())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12287;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_19(PLAYER::PLAYER_ID(), 1))
	{
		if (func_707(iParam0))
		{
			*uParam1 = (Global_262145.f_18011 / 100f);
			*uParam2 = (Global_262145.f_18011 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_23959;
			*uParam2 = Global_262145.f_23959;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_23960;
			*uParam2 = Global_262145.f_23960;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_23962;
			*uParam2 = Global_262145.f_23962;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_23963;
			*uParam2 = Global_262145.f_23963;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_23964;
			*uParam2 = Global_262145.f_23964;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_23965;
			*uParam2 = Global_262145.f_23965;
		}
		else
		{
			*uParam1 = Global_262145.f_12284;
			*uParam2 = Global_262145.f_12283;
		}
	}
	else if (func_707(iParam0))
	{
		*uParam1 = (Global_262145.f_18012 / 100f);
		*uParam2 = (Global_262145.f_18012 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_23966;
		*uParam2 = Global_262145.f_23966;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_23967;
		*uParam2 = Global_262145.f_23967;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_23969;
		*uParam2 = Global_262145.f_23969;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_23970;
		*uParam2 = Global_262145.f_23970;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_23971;
		*uParam2 = Global_262145.f_23971;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_23972;
		*uParam2 = Global_262145.f_23972;
	}
	else
	{
		*uParam1 = Global_262145.f_12286;
		*uParam2 = Global_262145.f_12285;
	}
	iVar0 = func_320();
	if (iVar0 != func_18())
	{
		if (func_16(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_899(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_900(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_249(PLAYER::PLAYER_ID());
		Global_1667085.f_4 = func_1000();
		Global_1667085.f_5 = func_999();
		if (func_365(PLAYER::PLAYER_ID()) || func_248(PLAYER::PLAYER_ID()))
		{
			Global_1667085.f_6 = 1;
		}
		else
		{
			Global_1667085.f_6 = 0;
		}
		Global_1667085.f_1 = func_995(bParam9);
		Global_1667085.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1667085.f_9 = func_994(bParam0);
		Global_1667085.f_10 = iParam1;
		Global_1667085.f_17 = Global_1667085.f_2;
		Global_1667085.f_18 = Global_1667085.f_2;
		Global_1667085.f_19 = func_993();
		Global_1667085.f_21 = (Global_1667085.f_8 - Global_1667085.f_7);
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667085.f_23 = func_994(func_317(1));
		}
		Global_1667085.f_24 = func_992(PLAYER::PLAYER_ID());
		Global_1667085.f_28 = func_991(PLAYER::PLAYER_ID());
		if (Global_1667085.f_24 > 2)
		{
			Global_1667085.f_24 = 2;
		}
		func_989(iVar0);
	}
	else
	{
		iVar0 = func_288(PLAYER::PLAYER_ID());
	}
	if (func_707(iVar0))
	{
		Global_1666824.f_2 = func_1000();
		Global_1666824.f_3 = func_999();
		Global_1666824.f_50 = iParam4;
		Global_1666824.f_51 = iParam5;
		Global_1666824.f_10 = NETWORK::_GET_POSIX_TIME();
		Global_1666824.f_20 = (Global_1666824.f_10 - Global_1666824.f_9);
		Global_1666824.f_12 = iParam1;
		Global_1666824.f_19 = func_983(iVar0, bParam0, func_988(bParam3));
		if (bParam0)
		{
			Global_1666824.f_11 = 1;
		}
		else
		{
			Global_1666824.f_11 = 0;
		}
		if ((func_364(PLAYER::PLAYER_ID()) || func_363(PLAYER::PLAYER_ID())) || func_262(PLAYER::PLAYER_ID()))
		{
			Global_1666824.f_8 = 1;
		}
		else
		{
			Global_1666824.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1666824.f_43 = 0;
			Global_1666824.f_45 = func_982(func_532(), iParam2);
			Global_1666824.f_47 = iParam7;
			Global_1666824.f_46 = iParam6;
			Global_1666824.f_52 = func_981(func_532(), iParam2);
		}
		func_979(iVar0);
	}
	else if (func_711(iVar0))
	{
		Global_1666878.f_2 = func_1000();
		Global_1666878.f_3 = func_999();
		Global_1666878.f_10 = NETWORK::_GET_POSIX_TIME();
		Global_1666878.f_19 = (Global_1666878.f_10 - Global_1666878.f_9);
		Global_1666878.f_12 = iParam1;
		if (bParam0)
		{
			Global_1666878.f_11 = 1;
		}
		else
		{
			Global_1666878.f_11 = 0;
		}
		if ((func_364(PLAYER::PLAYER_ID()) || func_363(PLAYER::PLAYER_ID())) || func_262(PLAYER::PLAYER_ID()))
		{
			Global_1666878.f_8 = 1;
		}
		else
		{
			Global_1666878.f_8 = 0;
		}
		func_977(iVar0);
	}
	else if (func_556(iVar0))
	{
		Global_1666941.f_2 = func_1000();
		Global_1666941.f_3 = func_999();
		Global_1666941.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1666941.f_18 = (Global_1666941.f_9 - Global_1666941.f_8);
		Global_1666941.f_11 = iParam1;
		Global_1666941.f_7 = func_993();
		Global_1666941.f_42 = func_975(func_36(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_743(iVar1);
		Global_1666941.f_28 = iVar2;
		Global_1666941.f_29 = func_994((func_974(iVar1) || func_973(iVar1)));
		Global_1666941.f_30 = func_994(func_972(iVar1));
		Global_1666941.f_32 = func_994(func_971(iVar1));
		Global_1666941.f_33 = func_994(func_970(iVar1));
		Global_1666941.f_34 = func_994(func_969(iVar1));
		Global_1666941.f_35 = func_994(func_968(0, iVar1) == 1);
		Global_1666941.f_36 = func_994(func_967(iVar1));
		Global_1666941.f_37 = func_994(func_966(iVar1));
		Global_1666941.f_38 = func_994(func_965(iVar1));
		Global_1666941.f_39 = func_994(func_868(iVar1, iVar2, 0));
		Global_1666941.f_40 = func_994(func_868(iVar1, iVar2, 2));
		Global_1666941.f_41 = func_994(func_868(iVar1, iVar2, 1));
		if (func_964(iVar1))
		{
			Global_1666941.f_31 = 2;
		}
		else if (func_963(iVar1))
		{
			Global_1666941.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1666941.f_10 = 1;
		}
		else
		{
			Global_1666941.f_10 = 0;
		}
		if ((func_364(PLAYER::PLAYER_ID()) || func_363(PLAYER::PLAYER_ID())) || func_262(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_6 = 1;
		}
		else
		{
			Global_1666941.f_6 = 0;
		}
		Global_1666941.f_21 = -2;
		Global_1666941.f_22 = -2;
		func_961(iVar0);
	}
	else if (func_554(iVar0))
	{
		Global_1666985.f_2 = func_1000();
		Global_1666985.f_3 = func_999();
		if ((func_364(PLAYER::PLAYER_ID()) || func_363(PLAYER::PLAYER_ID())) || func_262(PLAYER::PLAYER_ID()))
		{
			Global_1666985.f_6 = 1;
		}
		else
		{
			Global_1666985.f_6 = 0;
		}
		Global_1666985.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1666985.f_10 = func_994(bParam0);
		Global_1666985.f_11 = iParam1;
		Global_1666985.f_17 = func_960(func_320());
		Global_1666985.f_18 = (Global_1666985.f_9 - Global_1666985.f_8);
		Global_1666985.f_20 = iParam8;
		Global_1666985.f_21 = -2;
		Global_1666985.f_22 = -2;
		Global_1666985.f_27 = func_959();
		Global_1666985.f_29 = func_732(6107, -1, 0);
		Global_1666985.f_30 = func_732(6103, -1, 0);
		Global_1666985.f_31 = func_732(6104, -1, 0);
		Global_1666985.f_32 = func_732(6106, -1, 0);
		Global_1666985.f_33 = func_732(6105, -1, 0);
		Global_1666985.f_34 = func_732(6108, -1, 0);
		Global_1666985.f_36 = func_994(func_317(1));
		Global_1666985.f_37 = func_957();
		func_942();
		func_940(iVar0);
	}
	else if (func_552(iVar0))
	{
		Global_1667039.f_2 = func_1000();
		Global_1667039.f_3 = func_999();
		if ((func_364(PLAYER::PLAYER_ID()) || func_363(PLAYER::PLAYER_ID())) || func_262(PLAYER::PLAYER_ID()))
		{
			Global_1667039.f_6 = 1;
		}
		else
		{
			Global_1667039.f_6 = 0;
		}
		Global_1667039.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1667039.f_10 = func_994(bParam0);
		Global_1667039.f_11 = iParam1;
		Global_1667039.f_18 = (Global_1667039.f_9 - Global_1667039.f_8);
		Global_1667039.f_20 = iParam8;
		Global_1667039.f_23 = Global_786547;
		Global_1667039.f_36 = Global_786547.f_1;
		Global_1667039.f_24 = func_732(6157, -1, 0);
		Global_1667039.f_25 = func_732(6162, -1, 0);
		Global_1667039.f_26 = func_732(6163, -1, 0);
		Global_1667039.f_27 = func_994((((func_939() || func_938()) || func_937()) || func_936(PLAYER::PLAYER_ID())));
		Global_1667039.f_28 = func_732(6164, -1, 0);
		Global_1667039.f_29 = func_994(func_935());
		Global_1667039.f_35 = -1;
		Global_1667039.f_38 = -1;
		Global_1667039.f_39 = Global_1667039.f_4;
		Global_1667039.f_40 = Global_1667039.f_5;
		Global_1667039.f_41 = func_1000();
		Global_1667039.f_42 = func_994(func_317(1));
		Global_1667039.f_44 = Global_1667039.f_18;
		func_933(iVar0);
	}
	else if (func_720(iVar0))
	{
		if (Global_1667173.f_2 == -1)
		{
			Global_1667173.f_2 = func_1000();
		}
		if (Global_1667173.f_3 == -1)
		{
			Global_1667173.f_3 = func_999();
		}
		if ((func_364(PLAYER::PLAYER_ID()) || func_363(PLAYER::PLAYER_ID())) || func_262(PLAYER::PLAYER_ID()))
		{
			Global_1667173.f_6 = 1;
		}
		else
		{
			Global_1667173.f_6 = 0;
		}
		Global_1667173.f_1 = func_995(0);
		Global_1667173.f_7 = func_993();
		Global_1667173.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1667173.f_10 = func_994(bParam0);
		Global_1667173.f_11 = iParam1;
		if (func_532() != -1)
		{
			Global_1667173.f_17 = func_932(func_532());
		}
		Global_1667173.f_18 = (Global_1667173.f_9 - Global_1667173.f_8);
		Global_1667173.f_19 = Global_2524719.f_6236;
		Global_1667173.f_28 = func_991(PLAYER::PLAYER_ID());
		Global_1667173.f_29 = func_994(func_931(PLAYER::PLAYER_ID()));
		Global_1667173.f_30 = func_994(func_930(PLAYER::PLAYER_ID()));
		Global_1667173.f_31 = func_929(PLAYER::PLAYER_ID());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667173.f_33 = func_994(func_317(1));
		}
		if (Global_1667173.f_34 > 2)
		{
			Global_1667173.f_34 = 2;
		}
		func_927(iVar0);
	}
	else if (func_724(iVar0))
	{
		Global_1667120.f_2 = func_1000();
		Global_1667120.f_3 = func_999();
		if ((func_364(PLAYER::PLAYER_ID()) || func_363(PLAYER::PLAYER_ID())) || func_262(PLAYER::PLAYER_ID()))
		{
			Global_1667120.f_6 = 1;
		}
		else
		{
			Global_1667120.f_6 = 0;
		}
		Global_1667120.f_1 = func_995(0);
		Global_1667120.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1667120.f_10 = func_994(bParam0);
		Global_1667120.f_11 = iParam1;
		Global_1667120.f_18 = (Global_1667120.f_9 - Global_1667120.f_8);
		Global_1667120.f_28 = func_991(PLAYER::PLAYER_ID());
		if (Global_1667120.f_28)
		{
			Global_1667120.f_29 = func_926(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1667120.f_29 = 0;
		}
		Global_1667120.f_30 = func_910(PLAYER::PLAYER_ID(), 4, -1);
		Global_1667120.f_31 = func_929(PLAYER::PLAYER_ID());
		Global_1667120.f_32 = func_994(func_909(PLAYER::PLAYER_ID()));
		Global_1667120.f_33 = func_994(func_908(PLAYER::PLAYER_ID()));
		Global_1667120.f_34 = func_994(func_907(PLAYER::PLAYER_ID()));
		Global_1667120.f_35 = func_994(func_906(PLAYER::PLAYER_ID()));
		Global_1667120.f_36 = func_905(PLAYER::PLAYER_ID());
		Global_1667120.f_37 = func_904(PLAYER::PLAYER_ID());
		Global_1667120.f_39 = func_903(PLAYER::PLAYER_ID());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667120.f_41 = func_994(func_317(1));
		}
		if (Global_1667120.f_42 > 2)
		{
			Global_1667120.f_42 = 2;
		}
		func_901(iVar0);
	}
	else
	{
		Global_1666806.f_6 = NETWORK::_GET_POSIX_TIME();
		if (bParam0)
		{
			Global_1666806.f_7 = 1;
		}
		else
		{
			Global_1666806.f_7 = 0;
		}
		Global_1666806.f_8 = iParam1;
		if (Global_1666806.f_4 == 0)
		{
			if ((func_364(PLAYER::PLAYER_ID()) || func_363(PLAYER::PLAYER_ID())) || func_262(PLAYER::PLAYER_ID()))
			{
				Global_1666806.f_4 = 1;
			}
		}
	}
}

void func_901(int iParam0)
{
	unk_0xD8AFB345A9C5CCBB(&Global_1667120);
	func_902();
}

void func_902()
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1667120 = { Var0 };
}

int func_903(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_325, 12);
	}
	return 0;
}

int func_904(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_325, 10);
	}
	return 0;
}

int func_905(int iParam0)
{
	if (iParam0 != func_18())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_325, 11);
	}
	return 0;
}

int func_906(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 4);
}

int func_907(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 3);
}

int func_908(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 2);
}

int func_909(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 1);
}

int func_910(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_18() || !func_925(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_920(iParam0, iParam2);
		
		case 1:
			return func_918(iParam0, iParam2);
		
		case 3:
			return func_917(iParam0);
		
		case 2:
			return func_912(iParam0, iParam2);
		
		case 4:
			return func_911(iParam0);
		
		default:
	}
	return 0;
}

int func_911(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 6);
}

int func_912(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_916(iParam0);
		
		case 11:
			return func_915(iParam0);
		
		case 12:
			return func_914(iParam0);
		
		case 13:
			return func_913(iParam0);
		
		default:
	}
	return 0;
}

int func_913(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 15);
}

int func_914(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 14);
}

int func_915(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 13);
}

int func_916(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 12);
}

int func_917(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 5);
}

int func_918(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_919(iParam0);
		
		case 6:
			return func_909(iParam0);
		
		case 7:
			return func_908(iParam0);
		
		case 8:
			return func_907(iParam0);
		
		case 9:
			return func_906(iParam0);
		
		default:
	}
	return 0;
}

int func_919(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 0);
}

int func_920(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_924(iParam0);
		
		case 1:
			return func_923(iParam0);
		
		case 2:
			return func_922(iParam0);
		
		case 3:
			return func_921(iParam0);
		
		case 4:
			return func_929(iParam0);
		
		default:
	}
	return 0;
}

int func_921(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 10);
}

int func_922(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 9);
}

int func_923(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 8);
}

int func_924(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 7);
}

bool func_925(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_926(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_910(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_910(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_910(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_910(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_927(int iParam0)
{
	unk_0x6481F441CE5CA40E(&Global_1667173);
	func_928();
}

void func_928()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1667173 = { Var0 };
}

var func_929(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 31);
}

int func_930(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_313.f_1, 0);
}

int func_931(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_313.f_1, 19);
}

var func_932(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_211.f_6;
}

void func_933(int iParam0)
{
	unk_0x0360568A8CE21561(&Global_1667039);
	func_934();
}

void func_934()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1667039 = { Var0 };
	Global_1667039.f_16 = 0;
}

bool func_935()
{
	return func_732(6156, -1, 0) != 0;
}

int func_936(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_262 != 0;
	}
	return 0;
}

bool func_937()
{
	return func_732(6164, -1, 0) == 3;
}

bool func_938()
{
	return func_732(6164, -1, 0) == 2;
}

bool func_939()
{
	return func_732(6164, -1, 0) == 1;
}

void func_940(int iParam0)
{
	unk_0x04824802BBD52BB4(&Global_1666985);
	func_941();
}

void func_941()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1666985 = { Var0 };
	Global_1666985.f_23 = 0;
	Global_1666985.f_24 = 0;
	Global_1666985.f_16 = 0;
}

void func_942()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_953(12));
		func_952(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1321304[iVar1 /*141*/].f_66 != 0 && func_944(Global_1321304[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2524719.f_885 != iVar1)
				{
					if (func_943(Global_1321304[iVar1 /*141*/].f_66))
					{
						if (Global_1321304[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1321304[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1666985.f_38 = iVar3;
								break;
							
							case 1:
								Global_1666985.f_39 = iVar3;
								break;
							
							case 2:
								Global_1666985.f_40 = iVar3;
								break;
							
							case 3:
								Global_1666985.f_41 = iVar3;
								break;
							
							case 4:
								Global_1666985.f_42 = iVar3;
								break;
							
							case 5:
								Global_1666985.f_43 = iVar3;
								break;
							
							case 6:
								Global_1666985.f_44 = iVar3;
								break;
							
							case 7:
								Global_1666985.f_45 = iVar3;
								break;
							
							case 8:
								Global_1666985.f_46 = iVar3;
								break;
							
							case 9:
								Global_1666985.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_943(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

int func_944(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_951())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < DLC1::GET_NUM_DLC_VEHICLES())
		{
			if (DLC1::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (DLC1::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_950() && !func_949()) && !func_948()) && !func_947()) && !func_951())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_PC_VERSION()) || GAMEPLAY::IS_ORBIS_VERSION())
		{
		}
		else if (!func_948())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_946(iParam0))
		{
			return 0;
		}
	}
	if (!func_945(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_945(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_760())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_946(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2503689)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6488 && !Global_262145.f_12797) && iVar1 < Global_262145.f_12798)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14091 && iVar1 < Global_262145.f_14103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14092 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14093 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14094 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14102)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16718 && iVar1 < Global_262145.f_16682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16717 && iVar1 < Global_262145.f_16681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16716 && iVar1 < Global_262145.f_16680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16879 && iVar1 < Global_262145.f_16901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16880 && iVar1 < Global_262145.f_16902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16881 && iVar1 < Global_262145.f_16903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18528 && iVar1 < Global_262145.f_18625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18529 && iVar1 < Global_262145.f_18626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18530 && iVar1 < Global_262145.f_18627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18531 && iVar1 < Global_262145.f_18628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18532 && iVar1 < Global_262145.f_18629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19608 && iVar1 < Global_262145.f_19604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19609 && iVar1 < Global_262145.f_19605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19610 && iVar1 < Global_262145.f_19606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19611 && iVar1 < Global_262145.f_19607)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20487 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20488 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20489 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20490 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20491 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20492 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21264 && iVar1 < Global_262145.f_21284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21267 && iVar1 < Global_262145.f_21287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21265 && iVar1 < Global_262145.f_21285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21266 && iVar1 < Global_262145.f_21286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21268 && iVar1 < Global_262145.f_21288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21269 && iVar1 < Global_262145.f_21289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22225 && iVar1 < Global_262145.f_22253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22226 && iVar1 < Global_262145.f_22254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22227 && iVar1 < Global_262145.f_22255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22228 && iVar1 < Global_262145.f_22256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22229 && iVar1 < Global_262145.f_22257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22230 && iVar1 < Global_262145.f_22258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23432 && iVar1 < Global_262145.f_23448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23433 && iVar1 < Global_262145.f_23449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23437 && iVar1 < Global_262145.f_23453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23431 && iVar1 < Global_262145.f_23447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23434 && iVar1 < Global_262145.f_23450)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23436 && iVar1 < Global_262145.f_23452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23435 && iVar1 < Global_262145.f_23451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23522 && iVar1 < Global_262145.f_23509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23523 && iVar1 < Global_262145.f_23510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23528 && iVar1 < Global_262145.f_23515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23527 && iVar1 < Global_262145.f_23514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23525 && iVar1 < Global_262145.f_23512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23524 && iVar1 < Global_262145.f_23511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23526 && iVar1 < Global_262145.f_23513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_25628 && iVar1 < Global_262145.f_25630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_24683 && iVar1 < Global_262145.f_24676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_24684 && iVar1 < Global_262145.f_24677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_24685 && iVar1 < Global_262145.f_24678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_24686 && iVar1 < Global_262145.f_24679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_25629 && iVar1 < Global_262145.f_25631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_24687 && iVar1 < Global_262145.f_24680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_24688 && iVar1 < Global_262145.f_24681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_24689 && iVar1 < Global_262145.f_24682)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_947()
{
	return 0;
}

int func_948()
{
	return 1;
}

int func_949()
{
	return 1;
}

int func_950()
{
	if (DLC2::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_951()
{
	var uVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				GAMEPLAY::SET_BIT(&uVar0, 2);
				GAMEPLAY::SET_BIT(&uVar0, 4);
				GAMEPLAY::SET_BIT(&uVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					uVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&uVar0, 0);
					STATS::_0xDAC073C7901F9E15(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_952(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10050)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1663734[iParam0] - 1);
		if (bParam2)
		{
			if ((GAMEPLAY::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_953(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_956(iParam0);
		return func_955(iVar0);
	}
	return (func_954(iParam0, -1) * iParam0);
}

int func_954(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_564(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_570(iParam1))
			{
				return 0;
			}
			else if (func_562(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 <= 124 && iParam1 > 0)
			{
				if (Global_1049778[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049778[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049778[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
	}
	return 0;
}

int func_955(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

int func_956(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

var func_957()
{
	var uVar0;
	
	uVar0 = func_958();
	if (!func_744())
	{
		if (func_532() != func_18())
		{
			uVar0 = func_992(func_532()) + 1;
		}
	}
	return uVar0;
}

int func_958()
{
	return func_992(PLAYER::PLAYER_ID()) + 1;
}

int func_959()
{
	return func_732(6113, -1, 0);
}

int func_960(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_410;
	}
	return -1;
}

void func_961(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0EACDF8487D5155A(&Global_1666941);
	func_962();
}

void func_962()
{
	struct<44> Var0;
	
	Global_1666941 = { Var0 };
	Global_1666941.f_23 = 0;
	Global_1666941.f_24 = 0;
	Global_1666941.f_16 = 0;
}

bool func_963(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 12);
}

bool func_964(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 13);
}

int func_965(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 12) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 13)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_966(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 0) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 1)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_967(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (((((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 3) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 4)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 5)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 0)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 1)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_968(int iParam0, int iParam1)
{
	if (iParam1 == func_18())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 0))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 3))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 6))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 9))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 12))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 15))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 18))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 21))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 1))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 4))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 7))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 10))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 13))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 16))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 19))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 22))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 2))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 5))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 8))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 11))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 14))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 17))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 20))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 23))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_969(int iParam0)
{
	if (iParam0 != func_18())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 6) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 7)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_970(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 8);
}

bool func_971(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 7);
}

int func_972(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 9);
}

int func_973(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 11);
}

int func_974(int iParam0)
{
	if (iParam0 == func_18())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 10);
}

int func_975(int iParam0, int iParam1)
{
	return func_732(func_976(iParam1), iParam0, 0);
}

int func_976(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_977(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x7D8BA05688AD64C7(&Global_1666878);
	func_978();
}

void func_978()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1666878 = { Var0 };
	Global_1666878.f_24 = 0;
	Global_1666878.f_25 = 0;
	Global_1666878.f_17 = 0;
}

void func_979(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xBF371CD2B64212FD(&Global_1666824);
	func_980();
}

void func_980()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1666824 = { Var0 };
	Global_1666824.f_29 = 0;
	Global_1666824.f_30 = 0;
	Global_1666824.f_17 = 0;
}

int func_981(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_868(iParam0, iParam1, 2);
	bVar1 = func_868(iParam0, iParam1, 1);
	bVar2 = func_868(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_982(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_863(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_983(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_560(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17569;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17568;
		}
		else
		{
			iVar0 = Global_262145.f_17550;
		}
		iVar1 = 19;
	}
	else if (func_559(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_291(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17549;
			iVar1 = 20;
		}
	}
	else if (func_707(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17569;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17568;
		}
		else
		{
			iVar0 = Global_262145.f_17550;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_987(func_532()), func_986(func_532()), func_1000(), func_999(), iVar1, iVar0);
	}
	func_985(iVar0);
	func_984(iVar0);
	return iVar0;
}

void func_984(int iParam0)
{
	int iVar0;
	
	iVar0 = func_732(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_449 = iVar0;
	func_730(3968, iVar0, -1, 1, 0);
}

void func_985(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1625435[iVar0 /*560*/].f_11.f_448 = (Global_1625435[iVar0 /*560*/].f_11.f_448 + iParam0);
	if (Global_1625435[iVar0 /*560*/].f_11.f_448 < -9999)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_448 = 9999;
	}
	else if (Global_1625435[iVar0 /*560*/].f_11.f_448 > 9999)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_448 = 9999;
	}
}

int func_986(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_987(int iParam0)
{
	if (iParam0 == func_18())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[0];
}

int func_988(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_364(PLAYER::PLAYER_ID()) || func_262(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_989(var uParam0)
{
	unk_0x320C35147D5B5DDD(&Global_1667085);
	func_990();
}

void func_990()
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1667085 = { Var0 };
}

int func_991(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_313 != 0;
	}
	return 0;
}

int func_992(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_19;
}

int func_993()
{
	int iVar0;
	
	if (func_759())
	{
		return 4;
	}
	else if (func_744())
	{
		if (func_895(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_317(1))
	{
		iVar0 = func_960(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_1074(1))
	{
		if (func_895(func_532()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_994(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_995(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_249(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_288(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_998(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_997(PLAYER::PLAYER_ID());
			if (func_721(func_722(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_997(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_996(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_996(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_996(int iParam0)
{
	if (func_288(PLAYER::PLAYER_ID()) == 238 || func_288(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_457;
	}
	return -1;
}

int func_997(int iParam0)
{
	if (func_288(PLAYER::PLAYER_ID()) == 237 || func_288(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_456;
	}
	return -1;
}

int func_998(int iParam0)
{
	if (func_249(iParam0) == 236)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_455;
	}
	return -1;
}

int func_999()
{
	if (Global_1666806.f_3 != 0)
	{
		return Global_1666806.f_3;
	}
	return -1;
}

int func_1000()
{
	if (Global_1666806.f_2 != 0)
	{
		return Global_1666806.f_2;
	}
	return -1;
}

void func_1001(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (func_1077())
	{
		case 0:
		case 2:
		case 3:
			StringCopy(sParam0, "BIGM_ASLTYD", 16);
			StringCopy(sParam1, "BIGM_ASLTWD", 16);
			StringCopy(sParam2, "BIGM_ASLTWRF", 16);
			StringCopy(sParam3, "BIGM_ASLTYD", 16);
			StringCopy(sParam4, "BIGM_ASLTWRF2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN", 16);
			break;
		
		case 1:
			StringCopy(sParam0, "BIGM_ASLTYV", 16);
			StringCopy(sParam1, "BIGM_ASLTWV", 16);
			StringCopy(sParam2, "BIGM_ASLTWFV", 16);
			StringCopy(sParam3, "BIGM_ASLTYV", 16);
			StringCopy(sParam4, "BIGM_ASLTWFV2", 16);
			StringCopy(sParam5, "BIGM_ASLTFN2", 16);
			break;
	}
}

void func_1002()
{
	if (func_263(PLAYER::PLAYER_ID(), 20) || func_364(PLAYER::PLAYER_ID()))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 20))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			GAMEPLAY::SET_BIT(&uLocal_368, 20);
		}
		if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 21))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_START"))
			{
				GAMEPLAY::SET_BIT(&uLocal_368, 21);
			}
		}
		else if (Local_110.f_5 == -1 && Local_110.f_7 == -1)
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 22))
			{
				if (Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 > 1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_COLLECT"))
					{
						GAMEPLAY::SET_BIT(&uLocal_368, 22);
						if (GAMEPLAY::IS_BIT_SET(uLocal_368, 23))
						{
							GAMEPLAY::CLEAR_BIT(&uLocal_368, 23);
						}
					}
				}
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 23))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_DELIVER"))
			{
				GAMEPLAY::SET_BIT(&uLocal_368, 23);
				if (GAMEPLAY::IS_BIT_SET(uLocal_368, 22))
				{
					GAMEPLAY::CLEAR_BIT(&uLocal_368, 22);
				}
			}
		}
	}
}

void func_1003()
{
	if (func_540())
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 10))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
			{
				if (!func_21(Local_110.f_29[0]))
				{
					GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 10);
				}
			}
		}
	}
}

void func_1004()
{
	int iVar0;
	
	if (func_1077() != 2)
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 11))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 12))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1271.592f, -3358.28f, 12.07015f, -1300.658f, -3408.515f, 20.94515f, 48.875f, 0, 1, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 12);
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 12))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 13))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (GAMEPLAY::IS_BULLET_IN_AREA(-1301.704f, -3398.337f, 13.0508f, 50f, 1))
				{
					GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 13);
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 13))
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[iVar0]))
			{
				if (!func_10(Local_110.f_13[iVar0]))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 14))
					{
						if (func_1005(NETWORK::NET_TO_PED(Local_110.f_13[iVar0])))
						{
							GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 14);
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_1005(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), uParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uParam0))
	{
		return 1;
	}
	if (func_1006())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &uVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(uVar0))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar0);
				if (ENTITY::DOES_ENTITY_EXIST(uVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uVar1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(uVar1, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_1006()
{
	return Global_1574387;
}

void func_1007()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 7))
	{
		if (!UI::DOES_BLIP_EXIST(uLocal_501))
		{
			func_1009();
		}
		if (func_539())
		{
			if (func_362(PLAYER::PLAYER_ID()) > 2)
			{
				if (!func_618("GB_ASLT_GO"))
				{
					func_671("GB_ASLT_GO", func_1008(), 0, 0);
				}
			}
			else
			{
				func_651();
			}
		}
		else
		{
			func_651();
		}
		if (func_537())
		{
			GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 7);
		}
	}
	func_434();
}

char* func_1008()
{
	switch (func_1077())
	{
		case 0:
			return "GB_ASLT_GO0";
		
		case 1:
			return "GB_ASLT_GO1";
		
		case 2:
			return "GB_ASLT_GO2";
		
		case 3:
			return "GB_ASLT_GO4";
		
		default:
	}
	return "";
}

void func_1009()
{
	vector3 vVar0;
	
	if (func_362(PLAYER::PLAYER_ID()) < 1)
	{
		if (UI::DOES_BLIP_EXIST(uLocal_501))
		{
			UI::REMOVE_BLIP(&uLocal_501);
		}
		return;
	}
	vVar0 = { func_1010() };
	if (func_1093())
	{
		if (!func_424(vVar0, 0f, 0f, 0f, 0))
		{
			uLocal_501 = UI::ADD_BLIP_FOR_COORD(vVar0);
			UI::SET_BLIP_ROUTE(uLocal_501, 1);
			if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 0))
			{
				UI::SET_BLIP_FLASHES(uLocal_501, 1);
				UI::SET_BLIP_FLASH_TIMER(uLocal_501, 7000);
				UI::FLASH_MINIMAP_DISPLAY();
				GAMEPLAY::SET_BIT(&uLocal_368, 0);
			}
		}
	}
}

Vector3 func_1010()
{
	vector3 vVar0;
	
	switch (func_1077())
	{
		case 0:
			vVar0 = { -1067.07f, 4907.115f, 211.5355f };
			break;
		
		case 1:
		case 2:
		case 3:
			vVar0 = { func_526() };
			break;
	}
	return vVar0;
}

void func_1011()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	bool bVar11;
	int iVar12;
	
	func_1019();
	vVar8 = { func_526() };
	if (!func_540())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
		{
			iVar12 = 1;
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
	{
		iVar12 = 1;
	}
	if (((iVar12 && func_539()) && GAMEPLAY::IS_BIT_SET(uLocal_368, 3)) && !func_571(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (func_1093())
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 16))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 16))
				{
					fVar6 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar8, 0);
					if (func_1077() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 < fVar7)
					{
						func_392(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
						func_1016();
						GAMEPLAY::SET_BIT(&uLocal_368, 16);
					}
				}
				else
				{
					fVar6 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vVar8, 0);
					if (func_1077() == 1)
					{
						fVar7 = 350f;
					}
					else
					{
						fVar7 = 200f;
					}
					if (fVar6 > fVar7)
					{
						GAMEPLAY::CLEAR_BIT(&uLocal_368, 16);
						func_400();
						func_392(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
					}
				}
			}
			else
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_368, 16))
				{
					GAMEPLAY::CLEAR_BIT(&uLocal_368, 16);
					func_400();
					func_392(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
				}
				bVar11 = true;
			}
		}
		else
		{
			bVar11 = true;
		}
		if (!bVar11)
		{
			return;
		}
		vVar3 = { func_1015() };
		if (func_424(vVar3, 0f, 0f, 0f, 0))
		{
			return;
		}
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		switch (func_1077())
		{
			case 1:
				if (!func_538(vVar0, 3, 1000, 0))
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(vVar3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_420(vVar3, 1, 0);
				}
				else if (func_538(vVar3, 3, 1000, 0))
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(-2125.303f, 3130.697f, 31.8101f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1, 0, 1, -1082130432);
					func_420(vVar3, 1, 0);
				}
				else
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(vVar3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_420(vVar3, 1, 0);
				}
				break;
			
			case 2:
				if (!func_538(vVar0, 2, 1000, 0))
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(vVar3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_420(vVar3, 1, 0);
				}
				else if (func_538(vVar3, 2, 1000, 0))
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(-1294.827f, -3110.422f, 12.9469f, 0f, 250f, 1, 100f, 0, 1, 65f, 1, 1, 0, 1, -1082130432);
					func_420(vVar3, 1, 0);
				}
				else
				{
					func_396(10, 0, 0, 0, 0);
					func_1014(vVar3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
					func_420(vVar3, 1, 0);
				}
				break;
			
			case 0:
			case 3:
				func_396(10, 0, 0, 0, 0);
				func_1014(vVar3, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				func_420(vVar3, 1, 0);
				break;
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_368, 16))
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_368, 16);
			func_400();
			func_392(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_368, 7))
		{
			func_390();
			func_1012();
		}
	}
}

void func_1012()
{
	if (Global_2413681.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_1013();
	}
}

void func_1013()
{
	struct<28> Var0;
	
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413681.f_6))
	{
		if (!Global_2413681.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413681 = { Var0 };
	Global_2413681.f_6 = -1;
}

void func_1014(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2413681.f_6))
	{
		if (!Global_2413681.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(vParam0) == 0f)
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2413681.f_6))
	{
		Global_2413681.f_6 = SCRIPT::GET_ID_OF_THIS_THREAD();
	}
	Var0.f_6 = Global_2413681.f_6;
	Var0 = { vParam0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = fParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = fParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_156(PLAYER::PLAYER_ID()))
	{
		if (iParam13 || iParam7)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2413681 = { Var0 };
}

Vector3 func_1015()
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	if (func_540())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
		{
			if (func_21(Local_110.f_29[0]))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_29[0]), 1) };
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_12), 1) };
	}
	return vVar0;
}

void func_1016()
{
	int iVar0;
	
	iVar0 = func_1077();
	switch (iVar0)
	{
		case 0:
			func_1017(-1018.545f, 4933.331f, 200.4811f, 131.9232f, 1065353216);
			func_1017(-998.4789f, 4962.462f, 192.9872f, 136.2f, 1065353216);
			func_1017(-1003.253f, 4975.881f, 191.8856f, 146.627f, 1065353216);
			func_1017(-1024.035f, 4964.985f, 198.0934f, 166.4202f, 1065353216);
			func_1017(-1031.564f, 4972.597f, 198.979f, 191.1345f, 1065353216);
			func_1017(-1038.26f, 4969.637f, 200.8855f, 199.1591f, 1065353216);
			func_1017(-985.6907f, 4953.929f, 203.5606f, 113.9255f, 1065353216);
			func_1017(-1013.707f, 4968.009f, 194.3295f, 162.9687f, 1065353216);
			func_1017(-1032.827f, 4939.053f, 202.438f, 167.0185f, 1065353216);
			func_1017(-1006.289f, 4951.076f, 196.4628f, 131.5821f, 1065353216);
			break;
		
		case 1:
			func_1017(-2268.493f, 3209.18f, 31.8102f, 273.8885f, 1065353216);
			func_1017(-2257.837f, 3235.47f, 31.8102f, 265.6924f, 1065353216);
			func_1017(-2249.269f, 3271.294f, 31.8102f, 249.5277f, 1065353216);
			func_1017(-2080.921f, 3261.697f, 31.8103f, 151.5588f, 1065353216);
			func_1017(-2070.796f, 3247.121f, 31.8103f, 90.5367f, 1065353216);
			func_1017(-2098.889f, 3234.007f, 31.8103f, 149.989f, 1065353216);
			func_1017(-2243.794f, 3279.584f, 31.8102f, 241.0335f, 1065353216);
			func_1017(-2293.544f, 3161.903f, 31.8269f, 290.6908f, 1065353216);
			func_1017(-2160.678f, 3141.504f, 31.8101f, 355.472f, 1065353216);
			func_1017(-2211.019f, 3163.282f, 31.8101f, 319.4941f, 1065353216);
			break;
		
		case 2:
			func_1017(-1331.171f, -3363.24f, 12.9452f, 313.574f, 1065353216);
			func_1017(-1326.501f, -3368.407f, 12.9471f, 322.2009f, 1065353216);
			func_1017(-1236.78f, -3414.983f, 12.9452f, 333.1109f, 1065353216);
			func_1017(-1231.426f, -3418.524f, 12.9452f, 334.4677f, 1065353216);
			func_1017(-1177.312f, -3375.885f, 12.945f, 83.8491f, 1065353216);
			func_1017(-1186.243f, -3377.919f, 12.945f, 74.4569f, 1065353216);
			func_1017(-1216.411f, -3378.862f, 12.945f, 70.7863f, 1065353216);
			func_1017(-1288.771f, -3328.059f, 12.945f, 232.0976f, 1065353216);
			func_1017(-1309.375f, -3295.191f, 12.9445f, 221.801f, 1065353216);
			func_1017(-1308.348f, -3285.848f, 12.9451f, 214.9276f, 1065353216);
			break;
		
		case 3:
			func_1017(445.1494f, -3025.946f, 5.0696f, 222.6693f, 1065353216);
			func_1017(448.0641f, -3001.941f, 5.0157f, 207.0258f, 1065353216);
			func_1017(465.6537f, -3021.472f, 5.0018f, 197.7798f, 1065353216);
			func_1017(481.5974f, -3008.189f, 5.0445f, 173.8646f, 1065353216);
			func_1017(514.1252f, -2991.035f, 5.0445f, 158.1715f, 1065353216);
			func_1017(529.0361f, -2988.633f, 5.0445f, 146.636f, 1065353216);
			func_1017(466.7868f, -3000.262f, 5.0445f, 191.0695f, 1065353216);
			func_1017(601.0988f, -3151.348f, 5.0693f, 12.3165f, 1065353216);
			func_1017(445.6588f, -3053.024f, 5.0696f, 277.6793f, 1065353216);
			func_1017(444.9568f, -3034.352f, 5.0696f, 241.1481f, 1065353216);
			break;
	}
}

void func_1017(vector3 vParam0, float fParam3, int iParam4)
{
	func_1018(vParam0, fParam3, iParam4);
}

void func_1018(vector3 vParam0, var uParam3, var uParam4)
{
	if (!Global_2405070.f_1736)
	{
	}
	if (Global_2405070.f_703 < 100)
	{
		if (SYSTEM::VMAG(vParam0) <= 0.01f)
		{
			return;
		}
		Global_2405070.f_703.f_1[Global_2405070.f_703 /*5*/] = { vParam0 };
		Global_2405070.f_703.f_1[Global_2405070.f_703 /*5*/].f_3 = uParam3;
		Global_2405070.f_703.f_1[Global_2405070.f_703 /*5*/].f_4 = uParam4;
		Global_2405070.f_703++;
	}
}

void func_1019()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = { 0f, 0f, 0f };
	if (!func_1093() && !func_376())
	{
		return;
	}
	if (func_540())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
		{
			if (func_21(Local_110.f_29[0]))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_110.f_29[0]), 1) };
			}
		}
	}
	else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_110.f_12), 1) };
	}
	if (!func_424(vVar0, 0f, 0f, 0f, 0))
	{
		if (func_539())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				fVar6 = SYSTEM::VDIST2(vVar0, vVar3);
				if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 3))
				{
					if (fVar6 <= 250000f)
					{
						GAMEPLAY::SET_BIT(&uLocal_368, 3);
					}
					else if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6))
					{
						if (func_538(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0))
						{
							GAMEPLAY::SET_BIT(&uLocal_368, 3);
						}
					}
				}
				else if (fVar6 > 562500f)
				{
					if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6) || (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6) && !func_538(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 3, 1000, 0)))
					{
						GAMEPLAY::CLEAR_BIT(&uLocal_368, 3);
					}
				}
			}
		}
	}
}

void func_1020()
{
	if (func_376())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 9))
			{
				if (func_375())
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_12), 1, 1);
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_110.f_12), PLAYER::PLAYER_PED_ID()))
						{
							OBJECT::DETACH_PORTABLE_PICKUP_FROM_PED(NETWORK::NET_TO_OBJ(Local_110.f_12));
						}
					}
					GAMEPLAY::SET_BIT(&uLocal_368, 9);
				}
			}
			else if (!func_366())
			{
				if (!func_375())
				{
					OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_110.f_12), 0, 1);
					GAMEPLAY::CLEAR_BIT(&uLocal_368, 9);
				}
			}
		}
	}
}

void func_1021()
{
	struct<8> Var0;
	
	if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 1))
	{
		if (func_1093())
		{
			if (func_362(PLAYER::PLAYER_ID()) >= 1)
			{
				if (!func_601(86))
				{
					if (func_595(0, 1, 1, 1))
					{
						Var0 = { func_1023() };
						func_709(&Var0, -1);
						func_586(1);
						GAMEPLAY::SET_BIT(&uLocal_368, 1);
					}
				}
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(&uLocal_368, 1);
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 2))
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_368, 1))
		{
			if (func_1093())
			{
				if (Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 > 1)
				{
					if (func_595(0, 1, 1, 1))
					{
						if (func_595(0, 1, 1, 1))
						{
							Var0 = { func_1022() };
							func_709(&Var0, -1);
							func_586(1);
							GAMEPLAY::SET_BIT(&uLocal_369, 2);
						}
					}
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 10))
	{
		if (func_1093())
		{
			if (((Local_110.f_5 != -1 || Local_110.f_7 != -1) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 16)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 20))
			{
				if (func_595(0, 1, 1, 1))
				{
					func_709("GB_SGHT_RVL", -1);
					func_586(1);
					GAMEPLAY::SET_BIT(&uLocal_369, 10);
				}
			}
		}
	}
}

struct<8> func_1022()
{
	struct<8> Var0;
	
	switch (func_1077())
	{
		case 0:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "GB_AST_RTNK", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "GB_AST_RPCK1", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "GB_AST_RPCK2", 32);
			break;
	}
	return Var0;
}

struct<8> func_1023()
{
	struct<8> Var0;
	
	if (func_744())
	{
		switch (func_1077())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1", 32);
				break;
		}
	}
	else
	{
		switch (func_1077())
		{
			case 0:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 1:
				StringCopy(&Var0, "GB_AST_HELP4G", 32);
				break;
			
			case 2:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			
			case 3:
				StringCopy(&Var0, "GB_AST_HELP1G", 32);
				break;
			}
	}
	return Var0;
}

void func_1024()
{
	int iVar0;
	
	if (!func_9(&(Local_110.f_54)))
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_369, 6))
	{
		return;
	}
	iVar0 = (func_12() - func_1029(&(Local_110.f_54), 0, 0));
	if (!func_539())
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1))
	{
		return;
	}
	if (func_362(PLAYER::PLAYER_ID()) < 3)
	{
		return;
	}
	if (iVar0 <= 10000)
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 19))
		{
			iLocal_506 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_506, "10s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
			GAMEPLAY::SET_BIT(&uLocal_368, 19);
		}
	}
	func_1028(iVar0);
	if (iVar0 > 30000)
	{
		func_1025(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else if (iVar0 >= 0)
	{
		func_1025(iVar0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
	}
	else
	{
		func_1025(0, "GB_WORK_END", 0, 0, 0, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
	}
}

void func_1025(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_1027(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_1026(7, iVar0);
		Global_1369750.f_4399[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_4399.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_4399.f_172[iVar0] = iParam2;
		Global_1369750.f_4399.f_216[iVar0] = iParam3;
		Global_1369750.f_4399.f_183[iVar0] = iParam4;
		Global_1369750.f_4399.f_194[iVar0] = iParam5;
		Global_1369750.f_4399.f_249[iVar0] = iParam6;
		Global_1369750.f_4399.f_260[iVar0] = iParam7;
		Global_1369750.f_4399.f_205[iVar0] = iParam8;
		Global_1369750.f_4399.f_314[iVar0] = iParam9;
		Global_1369750.f_4399.f_325[iVar0] = iParam10;
		Global_1369750.f_4399.f_357[iVar0] = iParam11;
		Global_1369750.f_4399.f_238[iVar0] = iParam12;
		Global_1369750.f_4399.f_271[iVar0] = iParam13;
		Global_1369750.f_4399.f_368[iVar0] = iParam14;
		Global_1369750.f_4399.f_379[iVar0] = iParam15;
		Global_1369750.f_4399.f_390[iVar0] = iParam16;
	}
}

void func_1026(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1369750.f_6130[iParam0]), iParam1);
}

int func_1027(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1369750.f_6130[iParam0], iParam1);
}

void func_1028(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(uLocal_368, 29))
	{
		func_217();
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 30))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				GAMEPLAY::SET_BIT(&uLocal_368, 30);
				GAMEPLAY::SET_BIT(&uLocal_368, 28);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_368, 28))
	{
		if (iParam0 <= 30000)
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 0))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
					GAMEPLAY::SET_BIT(&uLocal_369, 0);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 31))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
				{
					GAMEPLAY::SET_BIT(&uLocal_368, 31);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(uLocal_368, 31))
			{
				if (iParam0 <= 27000)
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 1))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						GAMEPLAY::SET_BIT(&uLocal_369, 1);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							GAMEPLAY::CLEAR_BIT(&uLocal_368, 28);
						}
					}
				}
			}
		}
	}
}

int func_1029(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0);
}

void func_1030(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_249(PLAYER::PLAYER_ID());
		Global_1667085 = iVar0;
		Global_1667085.f_1 = iParam0;
		if (func_532() != func_18())
		{
			Global_1667085.f_2 = func_987(func_532());
			Global_1667085.f_3 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_1667085.f_2), &(Global_1667085.f_3));
		}
		Global_1667085.f_7 = NETWORK::_GET_POSIX_TIME();
		Global_1667085.f_28 = func_991(PLAYER::PLAYER_ID());
		Global_1667085.f_13 = 0;
		Global_1667085.f_14 = 0;
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667085.f_23 = func_994(func_317(1));
		}
	}
	else
	{
		iVar0 = func_288(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_707(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1666824 = iVar0;
		if (func_560(iVar0))
		{
			Global_1666824.f_1 = 4;
		}
		else if (func_559(iVar0))
		{
			Global_1666824.f_1 = 5;
		}
		else if (func_291(iVar0, 0))
		{
			Global_1666824.f_1 = 2;
			if (func_726(iVar0))
			{
				Global_1666824.f_1 = 3;
			}
		}
		else
		{
			Global_1666824.f_1 = 1;
		}
		if (func_532() != func_18())
		{
			Global_1666824.f_4 = func_987(func_532());
			Global_1666824.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_1666824.f_6), &(Global_1666824.f_7));
		}
		Global_1666824.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1666824.f_27 = 1;
			Global_1666824.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1666824.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1666824.f_40 = func_756(iParam1);
			Global_1666824.f_41 = func_1054();
			Global_1666824.f_42 = func_871(PLAYER::PLAYER_ID(), iParam1);
			Global_1666824.f_44 = func_982(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_744() || iVar0 != 192)
		{
			Global_1666824.f_53 = 0;
		}
	}
	else if (func_556(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1666941 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1666941 = iParam0 + 1;
		}
		else
		{
			Global_1666941 = func_1053(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_723(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1666941.f_1 = 0;
				}
				else
				{
					Global_1666941.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1666941.f_1 = 2;
				break;
			
			case 227:
				Global_1666941.f_1 = 3;
				break;
		}
		Global_1666941.f_21 = 1;
		Global_1666941.f_22 = 1;
		if (func_532() != func_18())
		{
			Global_1666941.f_4 = func_987(func_532());
			Global_1666941.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_1666941.f_4), &(Global_1666941.f_5));
		}
		Global_1666941.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1666941.f_20 = iParam0;
		}
	}
	else if (func_711(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1666878 = iVar0;
		Global_1666824.f_1 = 1;
		if (func_532() != func_18())
		{
			Global_1666878.f_4 = func_987(func_532());
			Global_1666878.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_1666878.f_6), &(Global_1666878.f_7));
		}
		Global_1666878.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1666878.f_21 = iParam0;
		}
	}
	else if (func_554(iVar0))
	{
		Global_1666985 = iVar0;
		Global_1666985.f_1 = iParam0;
		Global_1666985.f_21 = 1;
		Global_1666985.f_22 = 1;
		if (func_532() != func_18())
		{
			Global_1666985.f_4 = func_987(func_532());
			Global_1666985.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_1666985.f_4), &(Global_1666985.f_5));
		}
		Global_1666985.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1666985.f_20 = iParam0;
		}
		Global_1666985.f_27 = func_975(func_36(), 5);
		Global_1666985.f_28 = func_994(func_849(PLAYER::PLAYER_ID()));
		Global_1666985.f_29 = func_732(6107, -1, 0);
		Global_1666985.f_30 = func_732(6103, -1, 0);
		Global_1666985.f_31 = func_732(6104, -1, 0);
		Global_1666985.f_32 = func_732(6106, -1, 0);
		Global_1666985.f_33 = func_732(6105, -1, 0);
		Global_1666985.f_34 = func_732(6108, -1, 0);
		Global_1666985.f_7 = func_993();
		Global_1666985.f_51 = func_994(bParam4);
	}
	else if (func_552(iVar0))
	{
		Global_1667039 = iVar0;
		Global_1667039.f_1 = iParam0;
		Global_1667039.f_21 = 1;
		Global_1667039.f_22 = 1;
		if (func_532() != func_18())
		{
			Global_1667039.f_4 = func_987(func_532());
			Global_1667039.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_1667039.f_4), &(Global_1667039.f_5));
		}
		Global_1667039.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1667039.f_20 = iParam0;
		}
		Global_1667039.f_24 = func_732(6157, -1, 0);
		Global_1667039.f_25 = func_732(6162, -1, 0);
		Global_1667039.f_26 = func_732(6163, -1, 0);
		Global_1667039.f_27 = func_994((((func_939() || func_938()) || func_937()) || func_936(PLAYER::PLAYER_ID())));
		Global_1667039.f_28 = func_732(6164, -1, 0);
		Global_1667039.f_29 = func_994(func_935());
		Global_1667039.f_31 = 0;
		Global_1667039.f_30 = 0;
		Global_1667039.f_32 = 0;
		Global_1667039.f_33 = 0;
		Global_1667039.f_34 = 0;
		Global_1667039.f_16 = 0;
		Global_1667039.f_7 = func_993();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_721(func_722(PLAYER::PLAYER_ID()))))
	{
		Global_1667173 = iVar0;
		Global_1667173.f_1 = iParam0;
		Global_1667173.f_21 = 1;
		Global_1667173.f_22 = 1;
		Global_1667173.f_7 = func_993();
		if (func_532() != func_18())
		{
			Global_1667173.f_4 = func_987(func_532());
			Global_1667173.f_5 = func_986(func_532());
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_1667173.f_4), &(Global_1667173.f_5));
		}
		if (func_532() != -1)
		{
			Global_1667173.f_17 = func_932(func_532());
		}
		Global_1667173.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1667173.f_28 = func_991(PLAYER::PLAYER_ID());
		Global_1667173.f_16 = 0;
		Global_1667173.f_24 = 0;
		Global_1667173.f_23 = 0;
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667173.f_33 = func_994(func_317(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1667120 = iVar0;
		Global_1667120.f_1 = iParam0;
		Global_1667120.f_21 = 1;
		Global_1667120.f_22 = 1;
		Global_1667120.f_7 = func_993();
		Global_1667120.f_24 = 0;
		Global_1667120.f_23 = 0;
		Global_1667120.f_16 = 0;
		if (func_532() != func_18())
		{
			Global_1667120.f_4 = func_987(func_532());
			Global_1667120.f_5 = func_986(func_532());
		}
		Global_1667120.f_28 = func_991(PLAYER::PLAYER_ID());
		if (Global_1667120.f_28)
		{
			Global_1667120.f_29 = func_926(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1667120.f_29 = 0;
		}
		Global_1667120.f_30 = func_910(PLAYER::PLAYER_ID(), 4, -1);
		Global_1667120.f_31 = func_929(PLAYER::PLAYER_ID());
		Global_1667120.f_32 = func_994(func_909(PLAYER::PLAYER_ID()));
		Global_1667120.f_33 = func_994(func_908(PLAYER::PLAYER_ID()));
		Global_1667120.f_34 = func_994(func_907(PLAYER::PLAYER_ID()));
		Global_1667120.f_35 = func_994(func_906(PLAYER::PLAYER_ID()));
		Global_1667120.f_36 = func_905(PLAYER::PLAYER_ID());
		Global_1667120.f_37 = func_904(PLAYER::PLAYER_ID());
		Global_1667120.f_39 = func_903(PLAYER::PLAYER_ID());
		if (func_19(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667120.f_41 = func_994(func_317(1));
		}
		if (func_320() != func_18())
		{
			func_761(func_320(), &(Global_1667120.f_4), &(Global_1667120.f_5));
		}
		Global_1667120.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1667120.f_28 = func_991(PLAYER::PLAYER_ID());
	}
	else
	{
		if (func_532() != func_18())
		{
			Global_1666806 = func_987(func_532());
			Global_1666806.f_1 = func_986(func_532());
		}
		Global_1666806.f_5 = NETWORK::_GET_POSIX_TIME();
		Global_1666806.f_13 = func_1052();
		Global_1666806.f_15 = 0;
		if (func_1074(1))
		{
			if (func_320() == func_532())
			{
				Global_1666806.f_15 = 1;
			}
		}
		if (func_1051())
		{
			Global_1666941.f_28 = 1;
		}
		if (((((func_1050() || func_1049()) || func_1048()) || func_1047()) || func_1045()) || func_1044(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_30 = 1;
		}
		if (func_1042(func_1043(joaat("trailersmall2"))))
		{
			Global_1666941.f_32 = 1;
		}
		if (func_1034(func_1041(joaat("caddy"))))
		{
			Global_1666941.f_31 = 1;
		}
		if (func_974(PLAYER::PLAYER_ID()) || func_973(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_29 = 1;
		}
		if (func_970(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_33 = 1;
			Global_1666941.f_34 = 1;
		}
		if (func_971(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_36 = 1;
		}
		if (func_968(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1666941.f_35 = 1;
		}
		if (func_1033(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1666941.f_37 = 1;
		}
		if (func_1033(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1666941.f_38 = 1;
		}
		if (func_1032(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_1031(PLAYER::PLAYER_ID(), iVar2);
				if (func_868(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1666941.f_39 = 1;
				}
				if (func_868(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1666941.f_40 = 1;
				}
				if (func_868(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1666941.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_1031(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_863(Global_1589747[iParam0 /*790*/].f_273.f_174[iParam1 /*12*/]))
	{
		uVar0 = Global_1589747[iParam0 /*790*/].f_273.f_174[iParam1 /*12*/];
	}
	return uVar0;
}

int func_1032(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1033(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_18())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_968(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1034(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_1039(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_953(11));
		func_952(iVar1, &iVar0, 1);
		iVar2 = func_1039(func_1036(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_732(func_1035(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1035(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			break;
			break;
	}
	return 1629;
}

int func_1036(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 261)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (iParam0 >= func_953(iVar0) && iParam0 < func_1037(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1037(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_956(iParam0);
		return func_1038(iVar0);
	}
	return (func_954(iParam0, -1) * iParam0 + 1);
}

int func_1038(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_1039(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_36();
	}
	if (iParam0 == 7 && !Global_262145.f_16856)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_956(iParam0);
		if (iVar1 == 0 && func_732(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_1040(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_991(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1378951[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2568229[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 21)
		{
			return 0;
		}
		return Global_2568104[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_1040(int iParam0)
{
	if (!Global_262145.f_23522)
	{
		return 0;
	}
	return func_732(7207, iParam0, 0) != 0;
}

int func_1041(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_1042(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_952(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_732(func_1035(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1043(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_1044(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1589747[iParam0 /*790*/].f_273.f_330 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1045()
{
	return func_732(func_1046(3), -1, 0) != 0;
}

int func_1046(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6538;
			break;
		
		case 1:
			return 6540;
			break;
		
		case 2:
			return 6541;
			break;
		
		case 3:
			return 6542;
			break;
		
		case 4:
			return 6543;
			break;
		
		case 5:
			return 6544;
			break;
	}
	return 9954;
}

bool func_1047()
{
	return func_732(6163, -1, 0) != 0;
}

bool func_1048()
{
	return func_732(5380, -1, 0) != 0;
}

bool func_1049()
{
	return func_732(3828, -1, 0) != 0;
}

bool func_1050()
{
	return func_732(3223, -1, 0) != 0;
}

bool func_1051()
{
	return func_732(5379, -1, 0) != 0;
}

int func_1052()
{
	int iVar0;
	
	iVar0 = func_532();
	if (iVar0 != func_18())
	{
		return Global_1625435[iVar0 /*560*/].f_11.f_93;
	}
	return 0;
}

int func_1053(int iParam0)
{
	if (func_288(iParam0) == 225 || func_288(iParam0) == 226)
	{
		return func_723(iParam0);
	}
	return -1;
}

var func_1054()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_870(PLAYER::PLAYER_ID(), iVar0))
		{
			GAMEPLAY::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_1055(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_697(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_686(&Var0);
}

struct<8> func_1056()
{
	struct<8> Var0;
	
	switch (func_1077())
	{
		case 0:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "BIGM_ASLDV", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "BIGM_ASLTD", 32);
			break;
	}
	return Var0;
}

void func_1057()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		switch (Local_110.f_35[iVar0])
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_13[iVar0]))
				{
					if (func_1062(Local_110.f_13[iVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_13[iVar0]))
						{
							if (!func_10(Local_110.f_13[iVar0]))
							{
								if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_13[iVar0]), -1442466670) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_13[iVar0]), -1442466670) != 0)
								{
									if (func_1077() == 2)
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_13[iVar0]), 0);
									}
									AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_13[iVar0]), 299f, 0);
								}
							}
						}
					}
				}
				break;
		}
		if (iVar0 > 0)
		{
			func_1058(Local_110.f_13[iVar0], &(Local_374[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		}
		iVar0++;
	}
}

void func_1058(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (func_1061())
		{
			Global_2437022 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_1060(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_2437022, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_1060(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_2437022, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (UI::DOES_BLIP_EXIST(*uParam1))
	{
		func_1059(uParam1);
	}
}

void func_1059(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		UI::REMOVE_BLIP(uParam0);
		bVar0 = true;
	}
	if (UI::DOES_BLIP_EXIST(uParam0->f_1))
	{
		UI::REMOVE_BLIP(&(uParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_7, 0))
		{
			if (UI::DOES_PED_HAVE_AI_BLIP(uParam0->f_7))
			{
				UI::_SET_PED_AI_BLIP(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_1060(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!UI::DOES_PED_HAVE_AI_BLIP(uParam0))
		{
			if (iParam8 == -1)
			{
				UI::_SET_PED_AI_BLIP(uParam0, 1);
			}
			else
			{
				unk_0xB13DCB4C6FAAD238(uParam0, 1, iParam8);
			}
			uParam1->f_7 = uParam0;
			UI::_SET_AI_BLIP_TYPE(uParam0, iParam2);
			UI::_SET_AI_BLIP_MAX_DISTANCE(uParam0, fParam6);
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				UI::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(uParam0, iParam9);
		}
		UI::_IS_AI_BLIP_ALWAYS_SHOWN(uParam0, uParam4);
		UI::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(uParam0, uParam5);
		*uParam1 = UI::_0x7CD934010E115C2C(uParam0);
		if (!iParam9 == -1)
		{
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					UI::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam7))
				{
					UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam7);
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam7);
					}
					UI::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				UI::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (UI::DOES_BLIP_EXIST(*uParam1))
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 0))
		{
			uParam1->f_1 = UI::_GET_AI_BLIP(uParam0);
			if (!GAMEPLAY::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (UI::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						UI::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam7))
					{
						UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam7);
						}
						else
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam7);
						}
						UI::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					UI::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					GAMEPLAY::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!UI::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (UI::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1061()
{
	return Global_1312834;
}

int func_1062(var uParam0)
{
	if (NETWORK::_NETWORK_CAN_NETWORK_ID_BE_SEEN(uParam0))
	{
		return 1;
	}
	if (func_1063(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1063(var uParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0))
	{
		return 0;
	}
	if (func_1064(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_1064(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

void func_1065()
{
	int iVar0;
	int iVar1;
	
	if (Local_110 != 4)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3, iVar0))
						{
							if (func_540())
							{
								func_658(iVar1, 421, 0, 0);
							}
							else
							{
								func_658(iVar1, 457, 0, 0);
							}
							GAMEPLAY::SET_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3), iVar0);
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3, iVar0))
					{
						if (func_540())
						{
							func_658(iVar1, 421, 0, 0);
						}
						else
						{
							func_658(iVar1, 457, 0, 0);
						}
						GAMEPLAY::CLEAR_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3), iVar0);
					}
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3, iVar0))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3), iVar0);
			}
			iVar0++;
		}
	}
}

void func_1066()
{
	if (func_1077() == 0)
	{
		if (func_25() == 0)
		{
			func_1067("PY8hdiWoAkudg9SpK8G2xQ");
		}
	}
}

void func_1067(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_1068(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					GAMEPLAY::SET_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_1068(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = 0;
	iVar14 = func_1070(uParam0);
	if (iVar14 == -1)
	{
		return iVar13;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_1069(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar13;
		
		default:
	}
	return iVar13;
}

struct<13> func_1069(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar13 = func_1070(uParam0);
	if (iVar13 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar13 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar13 /*13*/];
		
		default:
	}
	return Var0;
}

int func_1070(var uParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_1072(uParam0->f_1))
	{
		if (func_1071(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_1071(var uParam0)
{
	if (Global_2398103)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1072(int iParam0)
{
	return iParam0 == 9999;
}

void func_1073()
{
	if (func_1077() != 1 && func_1077() != 2)
	{
		return;
	}
	if (func_1077() != 1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
		{
			NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_110.f_29[0], 1);
		}
	}
}

bool func_1074(bool bParam0)
{
	return func_19(PLAYER::PLAYER_ID(), bParam0);
}

void func_1075()
{
	if (OBJECT::_DOES_DOOR_EXIST(1343869835))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(1343869835, 1, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(1343869835, 1f, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(207506449))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(207506449, 1, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(207506449, 1f, 0, 0);
	}
}

void func_1076()
{
	Global_1664222 = 1;
	if (!GAMEPLAY::IS_BIT_SET(Global_2533185, 0))
	{
		GAMEPLAY::SET_BIT(&Global_2533185, 0);
		GAMEPLAY::SET_BIT(&Global_1664223, 0);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2533185, 1))
	{
		GAMEPLAY::SET_BIT(&Global_2533185, 1);
		GAMEPLAY::SET_BIT(&Global_1664223, 1);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2533185, 5))
	{
		GAMEPLAY::SET_BIT(&Global_2533185, 5);
		GAMEPLAY::SET_BIT(&Global_1664223, 5);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-355737150))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-355737150, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-580979506))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-580979506, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1426452475))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(745417724))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1305304906))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1543175077))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-811770997))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-811770997, 0, 0, 0);
	}
}

int func_1077()
{
	if (Local_110.f_3 != -1)
	{
		return Local_110.f_3;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_110.f_3 == -1)
		{
			if (Local_110.f_3 == -1)
			{
				if (Global_2524719.f_5644 != -1)
				{
					Local_110.f_3 = Global_2524719.f_5644;
				}
				else
				{
					Local_110.f_3 = 1;
				}
			}
		}
	}
	return Local_110.f_3;
}

void func_1078(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 != iParam0)
	{
		func_1092(-1);
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 = iParam0;
		if (func_1091() != -1)
		{
			func_1090(-1);
		}
		if (func_1089() != -1)
		{
			func_1088(-1);
		}
		func_1087(iParam2);
		func_1085(iParam0);
		if (!func_416(iParam0))
		{
			fVar0 = func_415(iParam0);
			if (fVar0 != 1f)
			{
				func_412(fVar0);
				GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 1);
			}
		}
		if (!func_419(iParam0) || iParam3)
		{
			if (func_417(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_375())
		{
			func_367(27);
		}
		if (bParam1)
		{
			if (!func_366())
			{
				func_409(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 1) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 4)) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 0))
			{
				func_814(6);
			}
			func_1084();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 0);
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 0);
		}
		if (func_159(PLAYER::PLAYER_ID()) && func_364(PLAYER::PLAYER_ID()))
		{
			GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 8);
		}
		func_1080();
		if (func_1079(iParam0))
		{
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 0);
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 0);
			GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 6);
		}
		Global_2524719.f_6236 = 0;
	}
}

int func_1079(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_1080()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_1083();
	iVar2 = func_44(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_16(iVar1, iVar2, 1) || func_1081(iVar1, PLAYER::PLAYER_ID()))
			{
				unk_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, uVar3);
				unk_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_1081(int iParam0, int iParam1)
{
	if (func_19(iParam0, 1) && func_19(iParam1, 1))
	{
		return (func_1082(iParam0) == func_44(iParam1) || func_1082(iParam1) == func_44(iParam0));
	}
	return 0;
}

int func_1082(int iParam0)
{
	if (func_19(iParam0, 1))
	{
		return Global_1625435[func_44(iParam0) /*560*/].f_11.f_443;
	}
	return func_18();
}

int func_1083()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_532();
	if (iVar0 != func_18())
	{
		if (func_1202(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar1 /*560*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_1084()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4542), 1);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 4))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4542), 4);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 6))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4542), 6);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4542), 0);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4542), 2);
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_666 = 0;
	if (Global_2524719.f_4544 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2524719.f_4544);
	}
	Global_2524719.f_4543 = 0;
}

void func_1085(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_732(3791, -1, 0);
	iVar1 = func_1086(iParam0);
	if (iVar1 != -1)
	{
		GAMEPLAY::SET_BIT(&iVar0, iVar1);
		func_730(3791, iVar0, -1, 1, 0);
	}
}

int func_1086(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_1087(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1625435[iVar0 /*560*/].f_11.f_176 != iParam0)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_176 = iParam0;
	}
}

void func_1088(int iParam0)
{
	if (Global_2524719.f_4883.f_331 != iParam0)
	{
		Global_2524719.f_4883.f_331 = iParam0;
	}
}

int func_1089()
{
	return Global_2524719.f_4883.f_331;
}

void func_1090(int iParam0)
{
	if (Global_2524719.f_4883.f_330 != iParam0)
	{
		Global_2524719.f_4883.f_330 = iParam0;
	}
}

int func_1091()
{
	return Global_2524719.f_4883.f_330;
}

void func_1092(int iParam0)
{
	Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_32 = iParam0;
}

int func_1093()
{
	int iVar0;
	
	iVar0 = func_1094();
	if (iVar0 > -1)
	{
		if (Local_110.f_8 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1094()
{
	int iVar0;
	
	if (Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4 != -1)
	{
		return Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4;
	}
	if (func_20(PLAYER::PLAYER_ID()))
	{
		Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_110.f_8)
		{
			func_681(1);
		}
	}
	else if (func_19(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_532();
		if (iVar0 != func_18())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			}
		}
	}
	return Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4;
}

int func_1095()
{
	if (func_540())
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
		{
			return 0;
		}
	}
	else if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
	{
		return 0;
	}
	return 1;
}

int func_1096()
{
	return Local_110;
}

int func_1097(int iParam0)
{
	return Local_175[iParam0 /*6*/];
}

int func_1098(bool bParam0)
{
	if (func_1102(1))
	{
		return 1;
	}
	if (Global_2524719.f_4883.f_35)
	{
		Global_2524719.f_4883.f_35 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_320() == func_18() || !func_1202(func_320(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_547(PLAYER::PLAYER_ID()))
	{
		if (func_1101(PLAYER::PLAYER_ID()) && func_1099(func_1100(PLAYER::PLAYER_ID()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_1099(int iParam0, int iParam1)
{
	return func_56(iParam0) == iParam1;
}

int func_1100(int iParam0)
{
	if (iParam0 != func_18() && func_1202(iParam0, 1, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_309.f_13;
	}
	return -1;
}

int func_1101(int iParam0)
{
	if (iParam0 != func_18() && func_1202(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_309, 4);
	}
	return 0;
}

int func_1102(bool bParam0)
{
	bool bVar0;
	
	if (!func_1074(1))
	{
		bVar0 = false;
		if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 != func_18())
		{
			if (func_1202(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57, 0, 1))
			{
				if ((Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 4 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 8) || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_1103(func_288(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_814(31);
				if (func_707(func_288(PLAYER::PLAYER_ID())))
				{
					func_814(81);
				}
				if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 != func_18() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57))
				{
					Global_1623923 = func_627(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_319(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57))
					{
						func_814(88);
					}
				}
				else
				{
					Global_1623923 = 1;
				}
				Global_1623907 = { Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_99 };
			}
			return 1;
		}
	}
	return 0;
}

int func_1103(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_1104()
{
	var uVar0;
	
	func_1108(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_1107())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_1106())
	{
		return 1;
	}
	if (func_1105(157))
	{
		if (!func_433())
		{
			return 1;
		}
	}
	if (func_1105(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_413() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_413()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1105(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1106()
{
	return Global_2458191;
}

bool func_1107()
{
	return Global_2448386.f_582;
}

void func_1108(var uParam0)
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
					func_1109(iVar0);
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

void func_1109(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_1202(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_1110(uVar4, &bVar5))
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

int func_1110(var uParam0, var uParam1)
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

void func_1111()
{
	SYSTEM::WAIT(0);
}

void func_1112()
{
	var uVar0;
	
	if (func_540())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_29[0]))
		{
			if (GAMEPLAY::IS_BIT_SET(uLocal_369, 5))
			{
				if (!func_1074(1))
				{
					if (func_21(Local_110.f_29[0]))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_110.f_29[0])))
							{
								AI::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
						}
					}
				}
			}
		}
	}
	func_1164();
	OBJECT::_0x78857FC65CADB909(1);
	func_681(0);
	if (!GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_1093() || func_376())
			{
				GAMEPLAY::SET_BIT(&uLocal_368, 17);
				Global_1666806.f_2 = Local_110.f_63;
				Global_1666806.f_3 = Local_110.f_64;
				func_900(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_368, 17))
	{
		func_1162(func_1077(), -1, -1, -1082130432);
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_368, 4))
	{
		func_408(8);
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_368, 20))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("BG_ASSAULT_STOP");
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	}
	if (Local_110.f_3 == 1)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rhino"), 0);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	if (!func_1161())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_12))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_12))
			{
				uVar0 = NETWORK::NET_TO_ENT(Local_110.f_12);
				ENTITY::DELETE_ENTITY(&uVar0);
			}
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&uLocal_368, 29);
	}
	if (func_680())
	{
		func_679(0, 0, 0);
	}
	func_1118(1, 0);
	if (Global_2524719.f_5644 != -1)
	{
		Global_2524719.f_5644 = -1;
	}
	func_1117();
	if (func_1077() == 3)
	{
		func_1116();
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_369, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_369, 1))
		{
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
			AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
		}
	}
	func_217();
	func_1114();
	if (GAMEPLAY::IS_BIT_SET(uLocal_368, 19))
	{
		AUDIO::STOP_SOUND(iLocal_506);
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_368, 16))
	{
		func_400();
		func_392(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_1113();
}

void func_1113()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1114()
{
	struct<6> Var0;
	
	if (func_1077() == 0)
	{
		if (func_25() == 0)
		{
			StringCopy(&Var0, "PY8hdiWoAkudg9SpK8G2xQ", 24);
			func_1115(Var0);
		}
	}
}

void func_1115(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5)
{
	int iVar0;
	int iVar1;
	
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cParam0))
	{
		return;
	}
	iVar0 = GAMEPLAY::GET_HASH_KEY(&cParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_1068(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

void func_1116()
{
	if (OBJECT::_DOES_DOOR_EXIST(1343869835))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(1343869835, 0, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(1343869835, 0f, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(207506449))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(207506449, 0, 0, 0);
		OBJECT::_SET_DOOR_AJAR_ANGLE(207506449, 0f, 0, 0);
	}
}

void func_1117()
{
	if (Global_1664222)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1664223, 0))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2533185, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1664223, 1))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2533185, 1);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_1664223, 5))
		{
			GAMEPLAY::CLEAR_BIT(&Global_2533185, 5);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-355737150))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-355737150, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-580979506))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-580979506, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1426452475))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(745417724))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1305304906))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1543175077))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-811770997))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-811770997, 1, 0, 0);
		}
		Global_1664223 = 0;
	}
	Global_1664222 = 0;
}

void func_1118(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1358108.f_1.f_108 != 0)
	{
		Global_1358108.f_1.f_108 = 0;
	}
	Global_1358108.f_1.f_109 = -1;
	Global_1358108.f_1.f_110 = -1;
	if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 167 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 168)
	{
		func_1159();
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 4);
	}
	if ((func_759() && iParam1 != 0) && Global_262145.f_16853)
	{
		if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 190 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 192)
		{
			func_1141(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 164 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 208) || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 250) || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 237)
	{
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 1);
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 1);
	}
	if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 != -1)
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 = -1;
		if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 14) && !func_159(PLAYER::PLAYER_ID()))
		{
			func_409(0);
		}
	}
	else if (func_1139(PLAYER::PLAYER_ID()) != -1)
	{
		func_1092(-1);
	}
	func_1138(func_18());
	if (func_340(16))
	{
		func_385(16);
	}
	func_1135(0);
	func_1087(-1);
	func_1134();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1133(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1131(iVar1);
		iVar1++;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 0);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 5))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 5);
	}
	iVar2 = func_713();
	if ((func_290(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1130(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_560(iVar2))
	{
		func_1127(-1, 1);
	}
	else if (((((func_712(iVar2) || func_1126(iVar2)) || func_1125(iVar2)) || func_556(iVar2)) || func_554(iVar2)) || func_552(iVar2))
	{
	}
	else
	{
		func_1127(-1, 1);
	}
	func_369(19);
	func_369(20);
	func_369(21);
	func_369(22);
	func_369(27);
	func_385(3);
	func_385(4);
	func_385(7);
	func_1124();
	if (func_364(PLAYER::PLAYER_ID()))
	{
		func_681(0);
	}
	func_369(29);
	Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 = func_18();
	if (Global_2524719.f_4883.f_35 != 0)
	{
		Global_2524719.f_4883.f_35 = 0;
	}
	if (bParam0)
	{
		func_386();
	}
	if (!func_159(PLAYER::PLAYER_ID()))
	{
		func_407();
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 1);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 6))
	{
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 1);
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 1);
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 6);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 7))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 7);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 8))
	{
		func_1123("IMPEXP_SELFDES", 0);
		func_1121("IMPEXP_SELFDES");
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 8);
	}
	func_1119(iVar2, 0);
}

void func_1119(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_1120(iParam0));
			GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 9);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_1120(iParam0));
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 9);
	}
}

char* func_1120(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_1121(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!GAMEPLAY::IS_STRING_NULL(&(Global_106070.f_14113[iVar0 /*104*/])))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_14113[iVar0 /*104*/]), sParam0))
			{
				if (Global_106070.f_14113[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_464();
					Global_106070.f_14113[iVar0 /*104*/].f_99[Global_14513] = 0;
					if (func_1122(iVar0))
					{
					}
					else
					{
						Global_106070.f_14113[iVar0 /*104*/].f_24 = 0;
						Global_106070.f_14113[iVar0 /*104*/].f_28 = 0;
						Global_106070.f_14113[iVar0 /*104*/].f_29 = 0;
					}
					UI::_REMOVE_NOTIFICATION(Global_106070.f_14113[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1122(int iParam0)
{
	if ((Global_106070.f_14113[iParam0 /*104*/].f_99[0] == 1 || Global_106070.f_14113[iParam0 /*104*/].f_99[1] == 1) || Global_106070.f_14113[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1123(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!GAMEPLAY::IS_STRING_NULL(&(Global_106070.f_14113[iVar0 /*104*/])))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_14113[iVar0 /*104*/]), sParam0))
			{
				if (Global_106070.f_14113[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_106070.f_14113[iVar0 /*104*/].f_24 = 1;
				if (Global_106070.f_14113[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_106070.f_14023[0 /*20*/].f_17 = 0;
					}
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_106070.f_14023[1 /*20*/].f_17 = 0;
					}
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_106070.f_14023[2 /*20*/].f_17 = 0;
					}
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_106070.f_14023[3 /*20*/].f_17 = 0;
					}
					Global_106070.f_14113[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_106070.f_14113[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1124()
{
	if (func_380(PLAYER::PLAYER_ID()))
	{
		func_369(25);
	}
}

int func_1125(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_1126(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1127(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_713();
	}
	if (iParam0 > 0)
	{
		if (func_532() != func_18())
		{
			if (func_548(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2504301.f_93[func_1129(iParam0)] = 1;
			}
		}
		iVar0 = func_1129(159);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(157);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(148);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(164);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(142);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(152);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(166);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(170);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(173);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(179);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(200);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(201);
		if (func_1128(iVar0, Global_262145.f_12493, bParam1))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(182);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(183);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(185);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(186);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(180);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(195);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(197);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(198);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(207);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(208);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(209);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(214);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(215);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(216);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(217);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(218);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(219);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(220);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(221);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1128(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_263(PLAYER::PLAYER_ID(), 19) && !func_263(PLAYER::PLAYER_ID(), 20)) && !func_263(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2504301.f_93[iParam0] == 1 && func_9(&(Global_2504301[iParam0 /*2*/])))
	{
		if (func_1029(&(Global_2504301[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2504301.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1129(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_1130(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_713();
	}
	if (iParam0 > 0)
	{
		if (func_532() != func_18())
		{
			Global_2504301.f_93[func_1129(iParam0)] = 1;
		}
		iVar0 = func_1129(155);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(163);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(160);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(153);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(162);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(154);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(171);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(172);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(199);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(194);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(193);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(210);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(205);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(189);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1129(211);
		if (func_1128(iVar0, Global_262145.f_12494, 0))
		{
			func_228(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1131(int iParam0)
{
	if (!func_424(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_303[iParam0 /*3*/], func_1132(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_303[iParam0 /*3*/] = { func_1132() };
	}
	if (!func_424(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_290[iParam0 /*3*/], func_1132(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_290[iParam0 /*3*/] = { func_1132() };
	}
}

Vector3 func_1132()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_1133(int iParam0)
{
	if (!func_424(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_145[iParam0 /*3*/], func_1132(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_145[iParam0 /*3*/] = { func_1132() };
	}
	if (!func_424(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_120[iParam0 /*3*/], func_1132(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_120[iParam0 /*3*/] = { func_1132() };
	}
}

void func_1134()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573886 = { Var0 };
	Global_1573886.f_13 = func_18();
	if (GAMEPLAY::IS_BIT_SET(Global_1573342, 3))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1573342, 3);
	}
}

void func_1135(bool bParam0)
{
	if (bParam0)
	{
		if (!func_576(PLAYER::PLAYER_ID(), 14))
		{
			func_1137(14);
		}
	}
	else if (func_576(PLAYER::PLAYER_ID(), 14))
	{
		func_1136(14);
	}
}

void func_1136(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_5), iParam0);
}

void func_1137(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_5), iParam0);
}

void func_1138(int iParam0)
{
	if (func_20(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_443 != iParam0)
			{
				Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_443 = iParam0;
				if (iParam0 != func_18())
				{
				}
			}
		}
	}
}

int func_1139(int iParam0)
{
	if (func_1140(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_32;
	}
	return -1;
}

int func_1140(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_32 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_1141(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_870(iParam0, iParam1) && func_1158(iParam0, iParam1))
	{
		iVar0 = func_869(iParam0, iParam1);
		func_1145(iVar0, bParam2, bParam3);
		func_1142(iVar0, 1);
	}
}

void func_1142(int iParam0, int iParam1)
{
	if (!func_1144(iParam0))
	{
		return;
	}
	func_856(func_1143(iParam0), iParam1, -1, 1);
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_6 = iParam1;
}

int func_1143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_1144(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1145(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_1031(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_1157(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2503901[iParam0];
		iVar0 = func_1156(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1668516 = -1;
		}
		func_1155(iParam0, 0, bParam2);
	}
	else if (func_1153(iParam0, bParam2))
	{
		iVar0 = func_1152(iVar2, 0);
		uVar3 = func_982(PLAYER::PLAYER_ID(), iVar2);
		uVar4 = func_1151(iVar2, bParam2);
		iVar5 = func_1152(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(uVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(uVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1150(iVar2) && func_1149(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1157(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1148(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_1147(iParam0, (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2 - (func_1151(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1152(iVar2, bParam2) / func_1148(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1150(iVar2) && func_1149(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1146(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_1146(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return;
	}
	if (func_863(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1589747[iParam0 /*790*/].f_273.f_248 = iParam2;
				}
				else
				{
					Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1147(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2)
	{
		Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1148(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_863(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1149(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return 0;
	}
	if (func_863(iParam1) && func_1150(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1150(int iParam0)
{
	return func_756(iParam0) == 5;
}

int func_1151(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_756(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16824;
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16829;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16823;
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16828;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16822;
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16827;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16820;
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16825;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16821;
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16826;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20942;
				if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20943;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20926;
				if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20927;
				}
			}
			break;
	}
	return uVar0;
}

int func_1152(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_756(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16805;
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16814);
			}
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16819);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16806;
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16813);
			}
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16818);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16807;
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16812);
			}
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16817);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16808;
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16810);
			}
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16815);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16809;
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16811);
			}
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16816);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20939;
			}
			else
			{
				iVar0 = Global_262145.f_20923;
			}
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20940);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20924);
				}
			}
			if (func_868(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20941);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20925);
				}
			}
			if (func_1149(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1153(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_857(15384, -1, -1);
	}
	return func_857(func_1154(iParam0), -1, -1);
}

int func_1154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1155(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_856(15384, iParam1, -1, 1);
		return;
	}
	func_856(func_1154(iParam0), iParam1, -1, 1);
}

int func_1156(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2503901[iParam0];
	iVar1 = func_1031(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2503908;
	}
	if (func_1150(iVar1))
	{
		if (func_1149(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1157(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2503908 = iParam1;
		return;
	}
	Global_2503901[iParam0] = iParam1;
}

int func_1158(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_870(iParam0, iParam1))
	{
		iVar0 = func_869(iParam0, iParam1);
		if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_4 > 0 && Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1159()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 28);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 29);
	func_1160(24);
}

void func_1160(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

int func_1161()
{
	if (GAMEPLAY::IS_BIT_SET(uLocal_368, 24))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 3))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 4))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 5))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 8))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 9))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 10))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 15))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 18))
	{
		return 0;
	}
	return 1;
}

void func_1162(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	uVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	Var1 = Global_1666806;
	Var1.f_1 = Global_1666806.f_1;
	Var1.f_2 = Global_1666806.f_2;
	Var1.f_3 = Global_1666806.f_3;
	Var1.f_4 = Global_1666806.f_4;
	Var1.f_5 = Global_1666806.f_5;
	Var1.f_6 = Global_1666806.f_6;
	Var1.f_7 = Global_1666806.f_7;
	Var1.f_8 = Global_1666806.f_8;
	Var1.f_9 = Global_1666806.f_9;
	Var1.f_10 = Global_1666806.f_10;
	Var1.f_11 = Global_1666806.f_11;
	Var1.f_12 = Global_1666806.f_12;
	Var1.f_13 = Global_1666806.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1666806.f_15;
			Var15.f_15 = Global_1666806.f_16;
			Var15.f_16 = Global_1666806.f_17;
			unk_0x8D8ADB562F09A245(&Var15);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1666806.f_15;
			Var32.f_15 = uParam0;
			Var32.f_16 = iParam1;
			unk_0xD1A1EE3B4FA8E760(&Var32);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1666806.f_15;
			Var49.f_15 = uParam0;
			unk_0x88087EE1F28024AE(&Var49);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1666806.f_15;
			Var65.f_15 = uParam0;
			Var65.f_16 = iParam1;
			unk_0xFCC228E07217FCAC(&Var65);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1666806.f_15;
			Var82.f_15 = uParam0;
			unk_0x678F86D8FC040BDB(&Var82);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1666806.f_15;
			Var98.f_15 = uParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1666806.f_15;
			unk_0x5FF2C33B13A02A11(&Var116);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1666806.f_15;
			unk_0x282B6739644F4347(&Var134);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1666806.f_15;
			unk_0xF06A6F41CB445443(&Var153);
		}
	}
	func_1163();
}

void func_1163()
{
	struct<18> Var0;
	
	Global_1666806 = { Var0 };
}

void func_1164()
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 17))
		{
			vVar0 = { 200f, 200f, 200f };
			vVar3 = { func_24() };
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar3 - vVar0, vVar3 + vVar0, 1, 1);
			GAMEPLAY::CLEAR_BIT(&(Local_110.f_1), 17);
		}
	}
}

void func_1165(struct<21> Param0)
{
	func_1200(func_1201(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(15);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(5);
	func_1199(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_110, 65);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_175, 193);
	if (!func_1198())
	{
		func_1112();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_1197();
		func_1166(0, 0);
		if (func_340(8))
		{
			func_385(8);
		}
		Local_175[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 0;
	}
	else
	{
		func_1112();
	}
}

void func_1166(int iParam0, int iParam1)
{
	func_1196();
	if (func_547(PLAYER::PLAYER_ID()))
	{
		func_1169(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_1168(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				GAMEPLAY::SET_BIT(&Global_1666792, 0);
				break;
			}
	}
	if (!func_744() && !func_19(PLAYER::PLAYER_ID(), 1))
	{
		if (func_372())
		{
			func_408(3);
		}
	}
	func_408(4);
	if (func_1074(0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 = func_532();
	}
	if (func_707(iParam0))
	{
		func_980();
		Global_1666824.f_18 = func_960(func_320());
	}
	else if (func_711(func_1139(PLAYER::PLAYER_ID())))
	{
		func_978();
		Global_1666878.f_18 = func_960(func_320());
	}
	func_1167();
}

void func_1167()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1358108.f_534[iVar0 /*42*/].f_1 = func_18();
		Global_1358108.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1168(int iParam0, bool bParam1)
{
	return func_16(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_1169(bool bParam0)
{
	int iVar0;
	
	func_1160(33);
	func_1160(34);
	func_1160(35);
	func_1160(36);
	func_1160(37);
	func_1160(38);
	func_1160(39);
	func_1160(40);
	func_1160(43);
	func_1160(41);
	func_1160(54);
	func_1160(42);
	func_1160(47);
	func_1195(23);
	func_1195(24);
	func_1160(92);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 2);
	func_1194();
	func_1189();
	func_1184();
	func_1179();
	func_1171();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2524719.f_4883.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1170(3))
	{
		func_1195(3);
	}
	else if (func_1170(4))
	{
		func_1195(4);
	}
	else if (func_1170(5))
	{
		func_1195(5);
	}
	else if (func_1170(6))
	{
		func_1195(6);
	}
	else if (func_1170(7))
	{
		func_1195(7);
	}
	else if (((((((((((((((((func_1170(0) || func_1170(1)) || func_1170(2)) || func_1170(8)) || func_1170(9)) || func_1170(10)) || func_1170(11)) || func_1170(12)) || func_1170(13)) || func_1170(14)) || func_1170(15)) || func_1170(16)) || func_1170(17)) || func_1170(18)) || func_1170(19)) || func_1170(20)) || func_1170(21)) || func_1170(22))
	{
		func_1195(8);
		func_1195(0);
		func_1195(1);
		func_1195(2);
		func_1195(9);
		func_1195(10);
		func_1195(11);
		func_1195(12);
		func_1195(13);
		func_1195(14);
		func_1195(15);
		func_1195(16);
		func_1195(17);
		func_1195(18);
		func_1195(19);
		func_1195(20);
		func_1195(21);
		func_1195(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2524719.f_4883.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1170(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_14[iVar0], iVar1);
}

void func_1171()
{
	int iVar0;
	
	if (func_1178())
	{
		func_1177(8);
		func_1177(9);
		func_1177(10);
		func_1177(12);
		func_1177(13);
		func_1177(14);
		func_1177(19);
		func_1177(20);
		func_1177(21);
		func_1177(22);
		func_1177(23);
		func_1177(24);
		func_1177(25);
		func_1177(26);
		func_1177(15);
		func_1177(16);
		func_1177(17);
		func_1177(18);
		func_1177(35);
		func_1177(45);
		func_1177(46);
		if (func_1176(11))
		{
			func_1177(11);
			iVar0 = func_732(7226, -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, 2);
			func_730(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_1176(48))
	{
		if (func_1175(151, 3))
		{
			func_1174(151, 3);
		}
		func_1177(48);
	}
	if (func_1176(49))
	{
		if (func_1175(152, 3))
		{
			func_1174(152, 3);
		}
		func_1177(49);
	}
	if (func_1176(50))
	{
		if (func_1175(153, 3))
		{
			func_1174(153, 3);
		}
		func_1177(50);
	}
	if (func_1176(51))
	{
		if (func_1175(func_1172(), 3))
		{
			func_1174(func_1172(), 3);
		}
		func_1177(51);
	}
}

int func_1172()
{
	if (func_1173())
	{
		Global_106070.f_28022[154 /*29*/].f_24[Global_14513] = 1;
	}
	return 154;
}

int func_1173()
{
	int iVar0;
	
	iVar0 = func_44(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_18()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1174(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_1175(int iParam0, int iParam1)
{
	if (Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_1176(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_26[iVar0], iVar1);
}

void func_1177(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_26[iVar0]), iVar1);
}

int func_1178()
{
	if (((((((((((((((((((((func_1176(8) || func_1176(9)) || func_1176(10)) || func_1176(12)) || func_1176(11)) || func_1176(13)) || func_1176(14)) || func_1176(19)) || func_1176(20)) || func_1176(21)) || func_1176(22)) || func_1176(23)) || func_1176(24)) || func_1176(25)) || func_1176(26)) || func_1176(15)) || func_1176(16)) || func_1176(17)) || func_1176(18)) || func_1176(35)) || func_1176(45)) || func_1176(46))
	{
		return 1;
	}
	return 0;
}

void func_1179()
{
	if (func_1183())
	{
		func_1182(0);
		func_1182(1);
		func_1182(2);
		func_1182(3);
		func_1182(4);
		func_1182(5);
		if (func_1181(32))
		{
			if (func_1175(func_1180(), 3))
			{
				func_1174(func_1180(), 3);
			}
			func_1182(32);
		}
	}
}

int func_1180()
{
	if (func_1173())
	{
		Global_106070.f_28022[12 /*29*/].f_24[Global_14513] = 1;
	}
	return 12;
}

bool func_1181(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_23[iVar0], iVar1);
}

void func_1182(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_23[iVar0]), iVar1);
}

int func_1183()
{
	if ((((func_1181(1) || func_1181(0)) || func_1181(2)) || func_1181(4)) || func_1181(5))
	{
		return 1;
	}
	return 0;
}

void func_1184()
{
	if (func_1188())
	{
		func_1187(0);
		func_1187(1);
		func_1187(2);
		func_1187(3);
		func_1187(4);
		func_1187(5);
		func_1187(6);
		func_1187(7);
		if (func_1186(8))
		{
			func_1187(8);
		}
		if (func_1186(15))
		{
			if (func_1175(func_1185(), 3))
			{
				func_1174(func_1185(), 3);
			}
			func_1187(15);
		}
	}
}

int func_1185()
{
	if (func_1173())
	{
		Global_106070.f_28022[20 /*29*/].f_24[Global_14513] = 1;
	}
	return 20;
}

bool func_1186(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_21[iVar0], iVar1);
}

void func_1187(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_21[iVar0]), iVar1);
}

int func_1188()
{
	if ((((((((func_1186(0) || func_1186(1)) || func_1186(2)) || func_1186(3)) || func_1186(4)) || func_1186(5)) || func_1186(6)) || func_1186(7)) || func_1186(8))
	{
		return 1;
	}
	return 0;
}

void func_1189()
{
	if (func_1193())
	{
		func_1192(0);
		func_1192(1);
		func_1192(2);
		func_1192(3);
		func_1192(4);
		func_1192(5);
		func_1192(6);
		func_1192(7);
		func_1192(8);
		func_1192(9);
		func_1192(10);
		func_1192(11);
		func_1192(12);
		if (func_1191(13))
		{
			if (func_1175(func_1190(), 3))
			{
				func_1174(func_1190(), 3);
			}
			func_1192(13);
		}
	}
}

int func_1190()
{
	if (func_1173())
	{
		Global_106070.f_28022[76 /*29*/].f_24[Global_14513] = 1;
	}
	return 76;
}

bool func_1191(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_19[iVar0], iVar1);
}

void func_1192(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_19[iVar0]), iVar1);
}

int func_1193()
{
	if ((((((((((((func_1191(0) || func_1191(1)) || func_1191(2)) || func_1191(3)) || func_1191(4)) || func_1191(5)) || func_1191(6)) || func_1191(7)) || func_1191(8)) || func_1191(9)) || func_1191(10)) || func_1191(11)) || func_1191(12))
	{
		return 1;
	}
	return 0;
}

void func_1194()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2524719.f_4883.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1195(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_14[iVar0]), iVar1);
}

void func_1196()
{
	struct<14> Var0;
	
	Global_1666806 = { Var0 };
	Global_1666806.f_14 = 0;
	Global_1666806.f_15 = 0;
}

void func_1197()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574948[iVar0], -347613984);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -347613984, Global_1574948[iVar0]);
		iVar0++;
	}
}

int func_1198()
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
		if (func_1107())
		{
			return 0;
		}
		if (func_1105(155))
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

int func_1199(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1113();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1061())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_1113();
					}
					else
					{
						return 0;
					}
				}
				if (func_1107())
				{
					if (!bParam2)
					{
						func_1113();
					}
					else
					{
						return 0;
					}
				}
				if (func_1105(155))
				{
					if (!bParam2)
					{
						func_1113();
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
					func_1113();
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
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_1113();
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
			func_1113();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1200(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_1113();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_1201(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

int func_1202(int iParam0, bool bParam1, bool bParam2)
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

