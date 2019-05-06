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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<11> Local_112 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<4> Local_123[32];
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_681(ScriptParam_0))
		{
			func_625();
		}
	}
	while (true)
	{
		func_624();
		if (func_616())
		{
			func_625();
		}
		switch (func_615(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_614() == 1)
				{
					if (func_613())
					{
						func_612(NETWORK::PARTICIPANT_ID_TO_INT(), 1);
					}
				}
				break;
			
			case 1:
				if (func_614() == 1)
				{
					if (!func_610())
					{
						func_92();
					}
					if (func_52(1))
					{
						func_612(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
					}
				}
				else if (func_614() == 3)
				{
					func_612(NETWORK::PARTICIPANT_ID_TO_INT(), 3);
				}
				break;
			
			case 3:
				func_625();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (func_51())
			{
				func_50(3);
			}
			switch (func_614())
			{
				case 0:
					if (func_42())
					{
						func_50(1);
					}
					break;
				
				case 1:
					if (func_41() == 3)
					{
						func_50(3);
					}
					else
					{
						func_1();
					}
					break;
				
				case 3:
					func_625();
					break;
				}
		}
	}
}

void func_1()
{
	switch (Local_112.f_8)
	{
		case 0:
			if (func_40())
			{
				func_39(1);
			}
			func_37();
			break;
		
		case 1:
			func_37();
			func_2();
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Local_112.f_1, 5))
			{
				func_39(3);
			}
			func_37();
			break;
		
		case 3:
			break;
	}
}

void func_2()
{
	if (!func_13(func_36()))
	{
		func_12(1);
		func_39(2);
		GAMEPLAY::SET_BIT(&(Local_112.f_1), 2);
	}
	if (func_11() == func_10() || !func_9(func_11(), 0, 1))
	{
		func_12(3);
		func_39(2);
		GAMEPLAY::SET_BIT(&(Local_112.f_1), 3);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_112.f_1, 0))
	{
		if (func_3(&(Local_112.f_4), func_5(), 0))
		{
			GAMEPLAY::SET_BIT(&(Local_112.f_1), 4);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_112.f_1, 4))
	{
		func_12(2);
		func_39(2);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_112.f_1, 1) || GAMEPLAY::IS_BIT_SET(Local_112.f_1, 7))
	{
		func_12(0);
		func_39(2);
	}
}

int func_3(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_4(uParam0, bParam2, 0);
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

void func_4(var uParam0, bool bParam1, bool bParam2)
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

int func_5()
{
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		return 120000;
	}
	return 300000;
}

bool func_6(int iParam0, bool bParam1)
{
	return func_7(iParam0, bParam1, 1);
}

int func_7(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_8(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_10() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_8(int iParam0, int iParam1)
{
	if (iParam0 != func_10())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_10())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
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

int func_10()
{
	return -1;
}

int func_11()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11;
}

void func_12(int iParam0)
{
	Local_112.f_9 = iParam0;
}

int func_13(int iParam0)
{
	if (func_33(iParam0) && ((func_31(iParam0) == 142 || func_31(iParam0) == 164) || func_31(iParam0) == 148))
	{
		return 0;
	}
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	if (func_30(iParam0, 1, 0))
	{
		return 0;
	}
	if (func_29(iParam0))
	{
		return 0;
	}
	if (func_27(iParam0, 1) && func_26(iParam0) == func_11())
	{
		return 0;
	}
	if (func_22(iParam0))
	{
		return 0;
	}
	if (func_21(iParam0, 7))
	{
		return 0;
	}
	if (func_16(iParam0))
	{
		return 0;
	}
	if (func_14(iParam0, 6))
	{
		return 0;
	}
	return 1;
}

int func_14(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_15(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1589747[iVar0 /*790*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_15(int iParam0)
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

int func_16(int iParam0)
{
	if (func_18(iParam0, 0))
	{
		return 1;
	}
	if (func_17())
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

bool func_17()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_18(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_19(-1, 0) == 8;
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

int func_19(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_20();
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

int func_20()
{
	return Global_1312736;
}

bool func_21(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

bool func_22(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_25();
	}
	return GAMEPLAY::IS_BIT_SET(Global_1368245.f_241.f_136[func_24(10) /*33*/][iParam0], func_23(10));
}

int func_23(int iParam0)
{
	return (iParam0 % 32);
}

int func_24(int iParam0)
{
	return (iParam0 / 32);
}

bool func_25()
{
	return Global_1312416;
}

int func_26(int iParam0)
{
	if (iParam0 != func_10())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_10();
}

bool func_27(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_28(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_10();
}

int func_28(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_10())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_29(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196 != 0;
}

int func_30(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_10())
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

int func_31(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_32(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (func_28(iParam0))
	{
		if (func_34(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_35(iParam0, 9);
	}
	return 0;
}

bool func_35(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

int func_36()
{
	return Local_112.f_2;
}

void func_37()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST();
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (func_41() < 2)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_123[iVar2 /*4*/].f_1, 1))
			{
				func_38(PLAYER::INT_TO_PLAYERINDEX(iVar2));
				GAMEPLAY::SET_BIT(&(Local_112.f_1), 1);
			}
			if (GAMEPLAY::IS_BIT_SET(Local_123[iVar2 /*4*/].f_1, 4))
			{
				func_38(func_11());
				GAMEPLAY::SET_BIT(&(Local_112.f_1), 7);
			}
			if (GAMEPLAY::IS_BIT_SET(Local_123[iVar2 /*4*/].f_1, 0))
			{
				GAMEPLAY::SET_BIT(&(Local_112.f_1), 0);
			}
			if (GAMEPLAY::IS_BIT_SET(Local_123[iVar2 /*4*/].f_1, 2))
			{
				GAMEPLAY::SET_BIT(&(Local_112.f_1), 4);
			}
		}
		else if (func_41() == 2)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_123[iVar2 /*4*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	if (func_41() == 2)
	{
		if (iVar0 == NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
		{
			GAMEPLAY::SET_BIT(&(Local_112.f_1), 5);
		}
		else if (func_3(&(Local_112.f_6), 10000, 0))
		{
			GAMEPLAY::SET_BIT(&(Local_112.f_1), 5);
		}
	}
}

void func_38(int iParam0)
{
	Local_112.f_3 = iParam0;
}

void func_39(int iParam0)
{
	Local_112.f_8 = iParam0;
}

int func_40()
{
	return 1;
}

int func_41()
{
	return Local_112.f_8;
}

int func_42()
{
	if (func_43())
	{
		return 1;
	}
	return 0;
}

int func_43()
{
	if (GAMEPLAY::IS_BIT_SET(Local_112.f_1, 6))
	{
		return 1;
	}
	func_49(func_10());
	if (Global_2524719.f_4883.f_4 != func_10())
	{
	}
	else
	{
		func_50(3);
	}
	if (func_9(Global_2524719.f_4883.f_4, 0, 1))
	{
		if (!func_47(Global_2524719.f_4883.f_4, PLAYER::PLAYER_ID(), 1))
		{
			func_49(Global_2524719.f_4883.f_4);
		}
	}
	if (func_36() != func_10())
	{
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			if (func_46(func_36(), 13))
			{
				Local_112.f_10 = 1;
			}
		}
		func_44(func_45(func_36()), 1);
		Global_2524719.f_4883.f_4 = func_10();
		GAMEPLAY::SET_BIT(&(Local_112.f_1), 6);
		return 1;
	}
	else if (func_36() == func_10())
	{
	}
	return 0;
}

void func_44(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = -930828499;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &vVar0, 3, iParam0);
	}
}

int func_45(int iParam0)
{
	var uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

bool func_46(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_5, iParam1);
}

int func_47(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_10())
	{
		if (!bParam2)
		{
			if (func_48(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1625435[iParam0 /*560*/].f_11 != func_10())
		{
			return iParam1 == Global_1625435[iParam0 /*560*/].f_11;
		}
	}
	return 0;
}

int func_48(int iParam0, int iParam1)
{
	if (iParam1 != func_10())
	{
		if (iParam0 != func_10())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 != func_10())
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

void func_49(int iParam0)
{
	Local_112.f_2 = iParam0;
	if (iParam0 == func_10())
	{
	}
}

void func_50(int iParam0)
{
	Local_112 = iParam0;
}

int func_51()
{
	if (Global_2524719.f_4883.f_34)
	{
		Global_2524719.f_4883.f_34 = 0;
		return 1;
	}
	return 0;
}

int func_52(bool bParam0)
{
	if (func_60(1))
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
		if (func_59() == func_10() || !func_9(func_59(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_57(PLAYER::PLAYER_ID()))
	{
		if (func_56(PLAYER::PLAYER_ID()) && func_53(func_55(PLAYER::PLAYER_ID()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_53(int iParam0, int iParam1)
{
	return func_54(iParam0) == iParam1;
}

int func_54(int iParam0)
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

int func_55(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_309.f_13;
	}
	return -1;
}

int func_56(int iParam0)
{
	if (iParam0 != func_10() && func_9(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_309, 4);
	}
	return 0;
}

int func_57(int iParam0)
{
	if (func_58(iParam0) != func_10())
	{
		return func_58(iParam0) == func_26(iParam0);
	}
	return 0;
}

int func_58(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_35;
}

int func_59()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_35;
}

int func_60(bool bParam0)
{
	bool bVar0;
	
	if (!func_91(1))
	{
		bVar0 = false;
		if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 != func_10())
		{
			if (func_9(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57, 0, 1))
			{
				if ((Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 4 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 8) || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_90(func_31(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_89(31);
				if (func_88(func_31(PLAYER::PLAYER_ID())))
				{
					func_89(81);
				}
				if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 != func_10() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57))
				{
					Global_1623923 = func_62(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_61(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57))
					{
						func_89(88);
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

bool func_61(int iParam0)
{
	return func_8(iParam0, 1);
}

int func_62(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_16(iParam0) && !bParam4)
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
	if (((func_16(PLAYER::PLAYER_ID()) || (func_87() && func_86())) && !GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 31)) && !bParam4)
	{
		uVar1 = func_85();
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			if (PED::IS_PED_A_PLAYER(uVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1) != -1)
				{
					if (func_9(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_125859[iParam1] != -1)
							{
								return func_83(iParam1, iParam0, 0);
							}
							else
							{
								return func_73(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_73(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_125859[iParam1] != -1)
				{
					return func_83(iParam1, iParam0, 0);
				}
				else
				{
					return func_63(0, -1, 0);
				}
			}
			else
			{
				return func_63(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_125859[iParam1] != -1)
		{
			return func_83(iParam1, iParam0, 0);
		}
		else
		{
			return func_73(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_73(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_63(bool bParam0, int iParam1, bool bParam2)
{
	return func_64(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_64(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_71() && Global_1378988.f_1)
	{
		if (bParam1)
		{
			return func_70(iParam2, iVar0);
		}
		else
		{
			return func_70(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_69(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_68(1);
				}
				else
				{
					return func_68(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_65(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_65(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_68(1);
	}
	return func_68(0);
}

int func_65(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_67(iParam0, iParam1, iParam3);
	if (func_66(Global_4456448.f_130782, 1))
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

int func_66(int iParam0, bool bParam1)
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

int func_67(int iParam0, int iParam1, int iParam2)
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
			if (!func_69(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_68(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_69(int iParam0, int iParam1, int iParam2)
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

int func_70(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_67(iParam1, iParam0, 4);
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

int func_71()
{
	if (func_72() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

var func_72()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_146776, 12);
}

int func_73(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_79(1))
			{
				iVar3 = func_78(iParam0);
				if (!iVar3 == -1)
				{
					return func_76(iVar3);
				}
			}
			if ((func_75(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_69(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_68(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_74(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574393 || Global_1574384) || Global_1589747[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
			{
				return func_68(1);
			}
			else
			{
				return func_64(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574388 && Global_1573886.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_78(iParam0);
	if (!iVar4 == -1)
	{
		return func_76(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_74(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_75(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_76(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_77(iParam0);
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

var func_77(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_78(int iParam0)
{
	if (!iParam0 == func_10())
	{
		if (func_27(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_26(iParam0)];
		}
	}
	return -1;
}

int func_79(int iParam0)
{
	if ((func_82() || func_81()) || (func_80() && iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_80()
{
	return Global_2448386.f_16;
}

var func_81()
{
	return Global_2448386.f_15;
}

var func_82()
{
	return Global_2448386.f_14;
}

int func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969023.f_13[iParam0];
	if (func_79(1))
	{
		iVar2 = func_78(iParam1);
		if (!iVar2 == -1)
		{
			return func_76(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_104[iParam0 /*10693*/].f_5532[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_10())
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
			iVar0 = func_64(iParam1, !bParam2, iParam0, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_84(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26) && !func_69(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_74(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_84(int iParam0)
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

var func_85()
{
	return Global_2359302.f_2;
}

var func_86()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 4);
}

var func_87()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 14);
}

int func_88(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148 && func_8(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_35, 1))
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

void func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::SET_BIT(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

int func_90(int iParam0)
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

bool func_91(bool bParam0)
{
	return func_27(PLAYER::PLAYER_ID(), bParam0);
}

void func_92()
{
	switch (func_609())
	{
		case 0:
			func_594(151, 1, -1, 0);
			func_593(1);
			if (func_41() > 0)
			{
				func_592(1);
			}
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(uLocal_110, 2))
			{
				func_589();
			}
			if (Global_1673157 == func_10())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_36()))
				{
					Global_1673157 = func_36();
				}
			}
			func_583();
			func_573();
			func_554();
			func_552();
			func_509();
			func_387(&(Global_1358108.f_534), &Global_1358108, 27, &(Global_1358108.f_1), &(Global_1358108.f_117), -1, 0, 0);
			if (func_41() > 1)
			{
				func_592(2);
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
			{
				func_385(0, func_10());
				func_303();
				func_93();
			}
			if (func_41() > 2)
			{
				func_592(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_93()
{
	struct<20> Var0;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	if (!GAMEPLAY::IS_BIT_SET(Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 3))
	{
		if ((GAMEPLAY::IS_BIT_SET(Local_112.f_1, 2) || GAMEPLAY::IS_BIT_SET(Local_112.f_1, 4)) || GAMEPLAY::IS_BIT_SET(Local_112.f_1, 4))
		{
			GAMEPLAY::SET_BIT(&(Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (func_302())
		{
			GAMEPLAY::SET_BIT(&(Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (func_296())
		{
			GAMEPLAY::SET_BIT(&(Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
			return;
		}
		if (GAMEPLAY::IS_BIT_SET(Local_112.f_1, 7))
		{
			func_94(151, 1, &Var0, 0);
		}
		else
		{
			func_94(151, GAMEPLAY::IS_BIT_SET(Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1, 1), &Var0, 0);
		}
		GAMEPLAY::SET_BIT(&(Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 3);
	}
}

void func_94(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_294(iParam0, &fVar2, &fVar3);
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
			iVar1 = (iVar1 + func_293(iParam0, uParam2->f_13));
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
			iVar0 = (iVar0 + func_292(iParam0));
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
	if (func_290(iParam0))
	{
		if (bParam1)
		{
			if (func_289(PLAYER::PLAYER_ID()) > 0)
			{
				func_288();
			}
			else
			{
				func_287();
			}
		}
		else
		{
			func_286();
		}
	}
	func_270(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_268(iParam0, uParam2, &iVar0, &iVar5);
	func_245(iParam0, uParam2, &iVar0, &iVar5);
	func_231(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_214(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2524719.f_4883.f_373 = uVar4;
	}
	else
	{
		Global_2524719.f_4883.f_373 = iVar5;
	}
	iVar8 = func_59();
	if (iVar8 != func_10() && iParam0 != 148)
	{
		if (func_27(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_47(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_200(&iVar0, 1);
			}
		}
	}
	func_194(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1666806.f_10 = iVar1;
		func_193();
		func_146(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1666806.f_9 = iVar0;
		iVar13 = func_11();
		if (iVar13 != func_10())
		{
			func_145(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_91(1);
		if (iParam0 == 168)
		{
			if (!func_144())
			{
				unk_0xECA658CE2A4E5A72(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_143())
			{
				if (!func_144())
				{
					Var15 = { func_142() };
					unk_0x8586789730B10CAF(iVar0, GAMEPLAY::GET_HASH_KEY(func_141(Var15)), func_140(Var15), iVar5);
				}
			}
			else if (func_144())
			{
				func_129(-856006867, iVar0, &iVar17, 0, 1, 0);
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
			if (func_128())
			{
				if (!func_144())
				{
					unk_0x8586789730B10CAF(iVar0, GAMEPLAY::GET_HASH_KEY(func_141(func_127(PLAYER::PLAYER_ID()))), 5, iVar5);
				}
			}
			else if (func_144())
			{
				func_129(-856006867, iVar0, &iVar18, 0, 1, 0);
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
			if (func_128())
			{
				if (!func_144())
				{
					iVar19 = func_123(uParam2->f_16, iVar5);
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
			else if (func_144())
			{
				func_129(463142405, iVar0, &iVar21, 0, 1, 0);
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
			if (func_144())
			{
				func_129(1407278493, iVar0, &iVar22, 0, 1, 0);
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
			if (func_128())
			{
				if (!func_144())
				{
					unk_0x7C5AFBDB4A63099E(iVar0, uParam2->f_20, iVar5);
				}
			}
			else if (func_144())
			{
				func_129(-856006867, iVar0, &iVar23, 0, 1, 0);
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
			if (func_144())
			{
				func_129(-961034881, iVar0, &iVar24, 0, 1, 0);
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
			if (func_144())
			{
				func_129(1135468152, iVar0, &iVar25, 0, 1, 0);
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
			if (func_144())
			{
				func_129(-634726636, iVar0, &iVar26, 0, 1, 0);
				Global_4262927[iVar26 /*80*/].f_6 = uVar11;
				Global_4262927[iVar26 /*80*/].f_7 = uVar12;
				Global_4262927[iVar26 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xB509D8DC0549312F(iVar0);
			}
		}
		else if (func_144())
		{
			func_129(-856006867, iVar0, &iVar27, 0, 1, 0);
			Global_4262927[iVar27 /*80*/].f_6 = uVar11;
			Global_4262927[iVar27 /*80*/].f_7 = uVar12;
			Global_4262927[iVar27 /*80*/].f_8 = bVar14;
		}
		else
		{
			unk_0x0CB1BE0633C024A8(uVar11, uVar12, iVar0, bVar14);
		}
		func_122(iParam0, iVar0);
		if (func_121(iParam0))
		{
			if (func_120(iParam0) > -1)
			{
				func_119(func_120(iParam0), iVar0);
			}
		}
		Global_2460387 = iVar0;
		func_118(&Global_2458654, 0, 0);
	}
	if (func_34(PLAYER::PLAYER_ID()) || func_117(PLAYER::PLAYER_ID()))
	{
		func_105(iParam0);
	}
	if (func_88(iParam0))
	{
		Global_1666824.f_13 = iVar0;
		Global_1666824.f_14 = iVar1;
	}
	if (func_104(iParam0))
	{
		Global_1666878.f_13 = iVar0;
		Global_1666878.f_14 = iVar1;
	}
	if (func_103(iParam0))
	{
		Global_1666941.f_12 = iVar0;
		Global_1666941.f_13 = iVar1;
	}
	if (func_102(iParam0))
	{
		Global_1666985.f_12 = iVar0;
		Global_1666985.f_13 = iVar1;
	}
	if (func_101(iParam0))
	{
		Global_1667039.f_12 = iVar0;
		Global_1667039.f_13 = iVar1;
	}
	if (func_100(iParam0))
	{
		if (func_99(iParam0))
		{
			Global_1667120.f_12 = iVar0;
			Global_1667120.f_13 = iVar1;
		}
		else if (func_95(iParam0))
		{
			Global_1667173.f_12 = iVar0;
			Global_1667173.f_13 = iVar1;
		}
	}
}

int func_95(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_96(func_97(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)
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

int func_97(int iParam0)
{
	if (func_31(iParam0) == 237 || func_31(iParam0) == 250)
	{
		return func_98(iParam0);
	}
	return -1;
}

int func_98(int iParam0)
{
	if (func_32(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_176;
	}
	return -1;
}

int func_99(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0)
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

int func_101(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_102(int iParam0)
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

int func_103(int iParam0)
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

int func_104(int iParam0)
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

void func_105(int iParam0)
{
	if (func_116(PLAYER::PLAYER_ID()) && func_143())
	{
		if (func_115(iParam0))
		{
			func_109(8657, -1);
		}
		else if (func_108(iParam0))
		{
			func_109(8659, -1);
		}
		else if (func_107(iParam0, 1))
		{
			func_109(8660, -1);
		}
		else if (func_106(iParam0))
		{
			func_109(8661, -1);
		}
	}
}

int func_106(int iParam0)
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

int func_107(int iParam0, int iParam1)
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

int func_108(int iParam0)
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

void func_109(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_113(iParam0, func_114(iParam1), 0);
	iVar0++;
	if (!func_112(iParam0))
	{
		func_111(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_110(iParam0, iVar0, iParam1, 1);
	}
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_114(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_114(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_114(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_114(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_114(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_114(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_114(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_114(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_114(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_114(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_114(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_114(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_114(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_114(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_114(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_114(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_114(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_114(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_114(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_114(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_114(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_114(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_114(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_114(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_114(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_114(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_114(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_114(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_114(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_114(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_114(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_114(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_114(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_114(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_111(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_114(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_112(int iParam0)
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

int func_113(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_114(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_20();
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

int func_115(int iParam0)
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

int func_116(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_115, 14);
}

bool func_117(int iParam0)
{
	return func_35(iParam0, 20);
}

void func_118(var uParam0, bool bParam1, bool bParam2)
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

void func_119(int iParam0, int iParam1)
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

int func_120(int iParam0)
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

int func_121(int iParam0)
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

void func_122(int iParam0, int iParam1)
{
	if (func_116(PLAYER::PLAYER_ID()) && func_143())
	{
		if (func_115(iParam0) && iParam1 > 0)
		{
			func_111(8658, (func_113(8658, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

var func_123(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_126(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_124(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_124(int iParam0, int iParam1)
{
	return (func_125(iParam0) * iParam1);
}

int func_125(int iParam0)
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

float func_126(int iParam0, var uParam1)
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

int func_127(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_273.f_174[5 /*12*/];
}

bool func_128()
{
	return func_28(PLAYER::PLAYER_ID());
}

void func_129(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_144())
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
				func_130(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_130(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_130(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_130(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_130(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_144())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_20()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_137(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_136(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_131(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_131(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_132(iParam0);
	}
}

void func_132(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_144())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_135(iParam0))
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
		func_133(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_133(var uParam0)
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
	func_134(&(uParam0->f_13));
	func_134(&(uParam0->f_13.f_13));
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

void func_134(var uParam0)
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

int func_135(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_136(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_137(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_144())
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
				func_138(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_138(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
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
	iVar35 = func_45(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_139();
		unk_0xA40CC53DF8E50837(1, &vVar0, 35, iVar35);
	}
}

void func_139()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_140(int iParam0)
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

char* func_141(int iParam0)
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

struct<2> func_142()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_188;
}

bool func_143()
{
	return func_61(PLAYER::PLAYER_ID());
}

int func_144()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_145(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1625435[iParam0 /*560*/].f_11.f_8[0];
	*uParam2 = Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_146(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_147(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_147(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_157(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_153(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_148(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_148(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_151(iParam0, 1) };
	if (iParam0 == func_150(PLAYER::PLAYER_PED_ID()))
	{
		func_149(1);
	}
	func_153(vVar0, iParam1, 0, sParam2, uParam3);
}

void func_149(int iParam0)
{
	Global_2437022.f_1886 = iParam0;
}

int func_150(var uParam0)
{
	return uParam0;
}

Vector3 func_151(int iParam0, bool bParam1)
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
	if (iParam0 == func_152(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_152(var uParam0)
{
	return uParam0;
}

void func_153(vector3 vParam0, int iParam3, int iParam4, char* sParam5, var uParam6)
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
			Global_2437022.f_1285[iVar1 /*30*/].f_4 = func_156(Global_2437022.f_1285[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437022.f_1285[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437022.f_1285[iVar1 /*30*/].f_3 = iParam3;
			Global_2437022.f_1285[iVar1 /*30*/].f_8 = iParam4;
			Global_2437022.f_1285[iVar1 /*30*/].f_9 = func_155();
			Global_2437022.f_1285[iVar1 /*30*/].f_10 = func_154();
			StringCopy(&(Global_2437022.f_1285[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437022.f_1285[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam6);
		}
	}
}

int func_154()
{
	if (Global_2437022.f_1886)
	{
		Global_2437022.f_1886 = 0;
		return 1;
	}
	Global_2437022.f_1886 = 0;
	return 0;
}

var func_155()
{
	var uVar0;
	
	uVar0 = Global_2437022.f_1888;
	Global_2437022.f_1888 = 1;
	return uVar0;
}

float func_156(vector3 vParam0, var uParam3, var uParam4)
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

var func_157(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_158(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_158(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_192(PLAYER::PLAYER_ID()) || func_191(PLAYER::PLAYER_ID()))
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
	else if (func_189() || func_188(PLAYER::PLAYER_ID()))
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
	if (func_187(uParam2))
	{
	}
	if (func_186())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_184(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_183(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_180(0, &iVar1);
					break;
				
				case 3:
					func_180(1, &iVar1);
					break;
				
				case 1:
					func_177(&iVar1);
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
			func_176(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_169((func_175(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_2 != -1)
				{
					func_176(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_163(iVar1);
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
				func_159((func_161(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_159((func_161(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_159(int iParam0)
{
	if (func_186())
	{
		Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_5 = iParam0;
		func_160(joaat("mpply_globalxp"), iParam0);
	}
}

void func_160(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_161(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_9(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_162(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_162(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_162(int iParam0)
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

void func_163(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_168(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_166(func_167(&Var0));
			if (iVar13 == 0)
			{
				func_165(&Global_1378824, iParam0);
				func_164(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar13 == 1)
			{
				func_165(&Global_1378825, iParam0);
				func_164(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar13 == 2)
			{
				func_165(&Global_1378826, iParam0);
				func_164(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar13 == 3)
			{
				func_165(&Global_1378827, iParam0);
				func_164(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar13 == 4)
			{
				func_165(&Global_1378828, iParam0);
				func_164(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_164(int iParam0, var uParam1)
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

void func_165(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_166(int iParam0)
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

int func_167(var uParam0)
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

struct<13> func_168(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_169(int iParam0, int iParam1, int iParam2)
{
	if (func_186())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9490 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1378945[func_114(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_114(-1)])
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
		if (func_15(PLAYER::PLAYER_ID()))
		{
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_6 = func_173(iParam0, 1);
		}
		func_110(639, iParam0, -1, 1);
		func_111(640, func_173(iParam0, 1), -1, 1, 0);
		Global_1378945[func_114(-1)] = iParam0;
		func_170(7, 0);
	}
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_172(iParam0, iParam1))
	{
		iVar0 = func_171();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_171()
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

int func_172(int iParam0, var uParam1)
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

int func_173(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_174(iParam0, 0);
}

int func_174(int iParam0, int iParam1)
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

int func_175(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1378945[func_114(-1)];
			}
			else if (func_15(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_114(-1)];
	}
	return 0;
}

void func_176(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_113(iParam0, func_114(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_112(iParam0))
	{
		func_111(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_110(iParam0, iVar0, iParam2, 1);
	}
}

void func_177(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_69(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_179(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_178(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_178(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_178(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(uParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_179(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2503649 = { func_168(iParam0) };
		Global_2503662 = { func_168(iParam1) };
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

void func_180(bool bParam0, int iParam1)
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
				if (func_9(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_179(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_9(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_181(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_179(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_178(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_178(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_181(var uParam0, int iParam1)
{
	return SYSTEM::VDIST(func_182(uParam0), func_182(iParam1));
	return 0f;
}

Vector3 func_182(var uParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_183(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_178(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_184(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_175(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_175(PLAYER::PLAYER_ID());
		}
	}
	if (func_185(8000, 0, 0) > 0)
	{
		if (func_185(8000, 0, 0) < (iParam0 + func_175(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_185(8000, 0, 0) - func_175(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_185(int iParam0, bool bParam1, int iParam2)
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

int func_186()
{
	return 1;
}

int func_187(var uParam0)
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

int func_188(int iParam0)
{
	return func_101(func_31(iParam0));
}

bool func_189()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_80();
	}
	return func_190(Global_4456448.f_130782);
}

int func_190(int iParam0)
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

bool func_191(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_192(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

void func_193()
{
	Global_2459729 = 1;
}

void func_194(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_199(7))
	{
		return;
	}
	iVar0 = func_198(iParam0);
	iVar1 = func_196(iParam0);
	iVar2 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2524719.f_4883.f_259, NETWORK::GET_NETWORK_TIME()));
	if (func_195(iParam0) != -1)
	{
		if (iVar2 > func_195(iParam0))
		{
			iVar2 = func_195(iParam0);
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

int func_195(int iParam0)
{
	if (func_107(iParam0, 0) || func_108(iParam0))
	{
		return Global_262145.f_18356;
	}
	if (func_115(iParam0))
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

int func_196(int iParam0)
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
			if (func_91(0) || func_197(0))
			{
				return Global_262145.f_20921;
			}
			break;
		
		case 226:
			if (func_91(0) || func_197(0))
			{
				return Global_262145.f_20901;
			}
			break;
		
		case 227:
			if (func_91(0) || func_197(0))
			{
				return Global_262145.f_20913;
			}
			break;
		
		case 229:
			if (func_91(0) || func_197(0))
			{
				return Global_262145.f_22077;
			}
			break;
		
		case 230:
			if (func_91(0) || func_197(0))
			{
				return Global_262145.f_22173;
			}
			break;
		
		case 233:
			if (func_91(0) || func_197(0))
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
			if (func_91(0) || func_197(0))
			{
				return Global_262145.f_23803;
			}
			break;
		
		case 238:
			if (func_91(0) || func_197(0))
			{
				return Global_262145.f_23914;
			}
			break;
		
		case 249:
			if (func_91(0) || func_197(0))
			{
				return Global_262145.f_23930;
			}
			break;
	}
	return 0;
}

bool func_197(bool bParam0)
{
	return func_6(PLAYER::PLAYER_ID(), bParam0);
}

int func_198(int iParam0)
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
			if (!func_128())
			{
				return Global_262145.f_17889;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_128())
			{
				return Global_262145.f_17980;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_128())
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
			if (func_197(0))
			{
				return Global_262145.f_20920;
			}
			break;
		
		case 226:
			if (func_197(0))
			{
				return Global_262145.f_20900;
			}
			break;
		
		case 227:
			if (func_197(0))
			{
				return Global_262145.f_20912;
			}
			break;
		
		case 229:
			if (func_197(0))
			{
				return Global_262145.f_22076;
			}
			break;
		
		case 230:
			if (func_197(0))
			{
				return Global_262145.f_22172;
			}
			break;
		
		case 233:
			if (func_197(0))
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
			if (func_197(0))
			{
				return Global_262145.f_23802;
			}
			break;
		
		case 238:
			if (func_197(0))
			{
				return Global_262145.f_23913;
			}
			break;
		
		case 249:
			if (func_197(0))
			{
				return Global_262145.f_23929;
			}
			break;
	}
	return 0;
}

bool func_199(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_39, iParam0);
}

void func_200(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_128())
		{
			if (func_91(0))
			{
				if (!func_197(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_11()))
					{
						if (func_213() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_213());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_211(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_204("GB_BCUT_TICK1", func_11(), iVar0, 0, 0, 1, 1);
						}
						func_89(20);
						func_201(func_11(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_201(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_9(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_203(iParam0);
		func_202(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_45(iParam0));
	}
}

void func_202(var uParam0, var uParam1)
{
	*uParam0 = Global_1643357.f_9;
	*uParam1 = Global_1643357.f_10;
}

var func_203(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_491;
}

int func_204(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		UI::_SET_NOTIFICATION_COLOR_NEXT(func_62(iParam1, -2, 1, 0, 0));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_209(&Var1));
		if (!iParam3 == 0)
		{
			UI::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		func_205(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_205(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_208() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_18(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_206(iParam2);
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

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1663381 - 1))
	{
		if (iParam0 > Global_1663381.f_5[iVar0 /*53*/].f_1)
		{
			func_207(iVar0);
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

void func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1663381.f_5[iVar0 /*53*/] = { Global_1663381.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_208()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

var func_209(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_210(&cVar0);
}

var func_210(char[4] cParam0)
{
	return cParam0;
}

void func_211(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_212(1);
	}
	else
	{
		iVar1 = func_212(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_212(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12277;
}

int func_213()
{
	return Global_262145.f_12276;
}

void func_214(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar18 = func_197(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_128())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_11();
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
				iVar2 = func_230(Global_1589747[iVar11 /*790*/].f_768, *uParam3);
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
			iVar10 = func_229(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_228("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1667120.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_227(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_225(*uParam3);
				}
				iVar6 = func_224(&uVar5);
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
						func_89(140);
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
								if (func_223(iVar23))
								{
									func_215(iVar23, 1, 198210293);
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
					func_89(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_215(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_217(iParam0);
	func_216(iParam0, uVar0, iParam1, iParam2);
}

void func_216(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -1854838991;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_203(iParam0);
	func_202(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_10())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_45(iParam0));
		}
	}
}

int func_217(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_222();
	iVar0 = func_220(iParam0, iVar0);
	iVar1 = Global_1625435[func_11() /*560*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14828));
	if (iVar0 < func_219())
	{
		iVar0 = func_219();
	}
	if (iVar0 > func_218())
	{
		iVar0 = func_218();
	}
	return iVar0;
}

int func_218()
{
	return Global_262145.f_14829;
}

int func_219()
{
	return Global_262145.f_16004;
}

int func_220(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_289(iParam0) * func_221());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_221()
{
	return Global_262145.f_16003;
}

var func_222()
{
	return Global_262145.f_12268;
}

int func_223(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_47(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_35(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224(var uParam0)
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
			if (!func_18(iVar2, 0) && !func_47(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_18(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_225(int iParam0)
{
	func_226(iParam0, 7236);
}

void func_226(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_113(iParam1, -1, 0);
	func_111(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_227(int iParam0)
{
	func_226(iParam0, 7231);
}

int func_228(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_205(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

var func_229(var uParam0)
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

var func_230(struct<5> Param0, int iParam5)
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

void func_231(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_197(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_128())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_243(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_234(uParam1->f_16) + uParam1->f_8);
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
			iVar2 = func_124(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_123(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_233(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_228("SMTICK_RONCUT", func_233(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_233(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_232(iVar2, iVar9);
				iVar6 = func_224(&uVar5);
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
						func_89(44);
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
								if (func_223(iVar20))
								{
									func_215(iVar20, 1, 1160415507);
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
					func_89(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_232(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_226(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_226(iParam1, 6117);
	}
}

int func_233(var uParam0)
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

int func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_241())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_243(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_236(func_237(func_240(iVar0), -1, -1));
		if (func_235(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_235(int iParam0)
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

int func_236(int iParam0)
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

int func_237(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_20();
	}
	iVar0 = 0;
	iVar1 = func_239(iParam0, iParam1);
	uVar2 = func_238(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_238(int iParam0)
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

int func_239(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_20();
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

int func_240(int iParam0)
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

bool func_241()
{
	return func_242() != 0;
}

int func_242()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_255;
}

int func_243(int iParam0)
{
	if (iParam0 != func_10() && func_244(iParam0))
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255.f_3;
	}
	return 0;
}

int func_244(int iParam0)
{
	if (iParam0 != func_10())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255 != 0;
	}
	return 0;
}

void func_245(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_197(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_128())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_11();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_127(iVar15);
			iVar0 = (func_267(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_263(iVar15, iVar16, iVar1);
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
				func_260(iVar16, iVar2);
				if (func_256(iVar16) >= Global_262145.f_20451 || iVar2 >= Global_262145.f_20451)
				{
					func_246(5);
				}
				iVar6 = func_224(&uVar5);
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
						func_89(108);
					}
					else
					{
						func_89(110);
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
								if (func_223(iVar20))
								{
									func_215(iVar20, 1, -1905128202);
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
					func_89(112);
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

void func_246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20439)
			{
				if (func_248(Global_262145.f_20440))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20441)
			{
				if (func_248(Global_262145.f_20442))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20443)
			{
				if (func_248(Global_262145.f_20444))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20445)
			{
				if (func_248(Global_262145.f_20446))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20447)
			{
				if (func_248(Global_262145.f_20448))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20449)
			{
				if (func_248(Global_262145.f_20450))
				{
					func_228("CLOTHAWDSTRAP3", Global_262145.f_20451, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20452)
			{
				if (func_248(Global_262145.f_20453))
				{
					func_228("CLOTHAWDSTRAP5", Global_262145.f_20585, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20455)
			{
				if (func_248(Global_262145.f_20456))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20457)
			{
				if (func_248(Global_262145.f_20458))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20459)
			{
				if (func_248(Global_262145.f_20460))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20461)
			{
				if (func_248(Global_262145.f_20462))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20463)
			{
				if (func_248(Global_262145.f_20464))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20465)
			{
				if (func_248(Global_262145.f_20466))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20467)
			{
				if (func_248(Global_262145.f_20468))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20469)
			{
				if (func_248(Global_262145.f_20470))
				{
					func_247("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_247(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		Global_2503649 = { func_168(PLAYER::PLAYER_ID()) };
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
	func_205(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_248(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_253(15417, -1, -1))
			{
				func_252(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_253(15418, -1, -1))
			{
				func_252(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_253(15425, -1, -1))
			{
				func_252(15425, 1, -1, 1);
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
			if (!func_253(15405, -1, -1))
			{
				func_252(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_253(15393, -1, -1))
			{
				func_252(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_253(15409, -1, -1))
			{
				func_252(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_253(15396, -1, -1))
			{
				func_252(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_253(15412, -1, -1))
			{
				func_252(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_253(15403, -1, -1))
			{
				func_252(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_253(15389, -1, -1))
			{
				func_252(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_253(15398, -1, -1))
			{
				func_252(15398, 1, -1, 1);
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
			if (!func_253(15400, -1, -1))
			{
				func_252(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_253(15408, -1, -1))
			{
				func_252(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_253(15411, -1, -1))
			{
				func_252(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_253(15397, -1, -1))
			{
				func_252(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_253(15413, -1, -1))
			{
				func_252(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_253(15391, -1, -1))
			{
				func_252(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_253(15388, -1, -1))
			{
				func_252(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_253(15401, -1, -1))
			{
				func_252(15401, 1, -1, 1);
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
			if (!func_253(15394, -1, -1))
			{
				func_252(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_253(15406, -1, -1))
			{
				func_252(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_253(15395, -1, -1))
			{
				func_252(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_253(15410, -1, -1))
			{
				func_252(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_253(15407, -1, -1))
			{
				func_252(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_253(15414, -1, -1))
			{
				func_252(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_253(15415, -1, -1))
			{
				func_252(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_253(15399, -1, -1))
			{
				func_252(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_253(15404, -1, -1))
			{
				func_252(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_253(15392, -1, -1))
			{
				func_252(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_253(15390, -1, -1))
			{
				func_252(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_253(15402, -1, -1))
			{
				func_252(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_253(15416, -1, -1))
			{
				func_252(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_251(209, -1))
			{
				func_249(209, 1, -1, 1);
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
			if (!func_253(15426, -1, -1))
			{
				func_252(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_253(15422, -1, -1))
			{
				func_252(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_253(15423, -1, -1))
			{
				func_252(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_253(15421, -1, -1))
			{
				func_252(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_253(15427, -1, -1))
			{
				func_252(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_253(15419, -1, -1))
			{
				func_252(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_253(15420, -1, -1))
			{
				func_252(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_249(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_250())
	{
		iVar0 = Global_2566070[iParam0 /*3*/][func_114(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_250()
{
	return 1;
	return 0;
}

int func_251(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_114(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_252(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_20();
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

int func_253(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_20();
	}
	iVar1 = func_255(iParam0, iParam1);
	uVar2 = func_254(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_254(int iParam0)
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

int func_255(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_20();
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

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = func_258(iParam0);
	return func_113(func_257(iVar0), -1, 0);
}

int func_257(int iParam0)
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

int func_258(int iParam0)
{
	int iVar0;
	
	if (func_259(iParam0))
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

int func_259(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_258(iParam0);
	iVar1 = func_257(iVar0);
	iVar2 = (func_113(iVar1, -1, 0) + iParam1);
	func_111(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_237(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iVar0 /*12*/] != 0)
			{
				iVar1 = func_257(iVar0);
				iVar3 = (iVar3 + func_113(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_262(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_261(9357, iVar5, -1, 1);
	}
}

var func_261(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_20();
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

int func_262(int iParam0)
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

int func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_140(iParam1);
	if (func_259(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16834;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16839);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16833;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16838);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16843);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16832;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16837);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16842);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16830;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16835);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16840);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16831;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16836);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16841);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20928;
				if (func_264(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20930);
				}
				if (func_264(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20929);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_264(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_266(iParam0, iParam1))
	{
		iVar0 = func_265(iParam0, iParam1);
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_265(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_259(iParam1) && iParam0 != func_10())
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

int func_266(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_259(iParam1) && iParam0 != func_10())
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

int func_267(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_259(iParam1))
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

void func_268(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_143())
			{
				Var0 = { func_142() };
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
				iVar7 = func_263(PLAYER::PLAYER_ID(), Var0, *uParam3);
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
				iVar11 = func_224(&uVar10);
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
					func_89(86);
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (func_197(0))
			{
				Var15 = { func_269(func_11()) };
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
				iVar22 = func_263(func_11(), Var15, *uParam3);
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

struct<2> func_269(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_188;
}

void func_270(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_28(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_285();
			}
			func_284();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_28(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_276(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_275(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_224(&uVar2);
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
						func_89(44);
					}
				}
				func_273(*iParam3);
				func_272();
				Global_2524719.f_4883.f_372 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_223(iVar9))
						{
							func_215(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_28(PLAYER::PLAYER_ID()))
		{
			func_271();
		}
	}
}

void func_271()
{
	int iVar0;
	
	iVar0 = Global_2568270[func_20()];
	iVar0++;
	func_110(3667, iVar0, -1, 1);
}

void func_272()
{
	int iVar0;
	
	iVar0 = Global_2568276[func_20()];
	iVar0++;
	func_110(3666, iVar0, -1, 1);
}

void func_273(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2568279[func_20()];
	iVar0 = (iVar0 + iParam0);
	func_110(3668, iVar0, -1, 1);
	if (func_237(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_274(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_261(7666, iVar2, -1, 1);
	}
}

int func_274(int iParam0)
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

var func_275(int iParam0)
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

int func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_283(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_282(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_281(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_277(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_277(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_281(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_277(int iParam0)
{
	int iVar0;
	
	if (func_280(iParam0))
	{
		iVar0 = func_278(func_279(iParam0));
		return func_113(iVar0, -1, 0);
	}
	return 0;
}

int func_278(int iParam0)
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

int func_279(int iParam0)
{
	int iVar0;
	
	if (func_280(iParam0))
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

int func_280(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_281(int iParam0)
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

int func_282(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_280(iParam0))
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

int func_283(int iParam0)
{
	int iVar0;
	
	if (func_280(iParam0))
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

void func_284()
{
	int iVar0;
	
	iVar0 = Global_2568267[func_20()];
	iVar0++;
	Global_2568267[func_20()] = iVar0;
	func_110(3665, iVar0, -1, 1);
}

void func_285()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2568264[func_20()];
	iVar1 = Global_2568273[func_20()];
	iVar0++;
	iVar1++;
	Global_2568264[func_20()] = iVar0;
	Global_2568273[func_20()] = iVar1;
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_120 = iVar1;
	func_110(3663, iVar0, -1, 1);
	func_110(3664, iVar1, -1, 1);
}

void func_286()
{
	if (func_128())
	{
		Global_2449169.f_3068.f_134 = 0;
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
	}
}

void func_287()
{
	if (func_128())
	{
		if (Global_2449169.f_3068.f_134 < 10)
		{
			Global_2449169.f_3068.f_134++;
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
		}
	}
}

void func_288()
{
	if (func_128())
	{
		if (Global_2449169.f_3068.f_134 > 0)
		{
			Global_2449169.f_3068.f_134 = (Global_2449169.f_3068.f_134 - 1);
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
		}
	}
}

int func_289(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_28;
}

int func_290(int iParam0)
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
			if (func_91(1) && !func_197(1))
			{
				if (func_291(func_11()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_291(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 26);
}

int func_292(int iParam0)
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

int func_293(int iParam0, bool bParam1)
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
			if (func_128())
			{
				return Global_262145.f_18711;
			}
			else if (bParam1)
			{
				return Global_262145.f_18712;
			}
			break;
		
		case 188:
			if (func_128())
			{
				return Global_262145.f_18795;
			}
			else if (bParam1)
			{
				return Global_262145.f_18796;
			}
			break;
		
		case 225:
			if (func_128() && !func_143())
			{
				if (func_291(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20916;
				}
				else
				{
					return Global_262145.f_20917;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_20918;
			}
			break;
		
		case 226:
			if (func_128() && !func_143())
			{
				if (func_291(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20896;
				}
				else
				{
					return Global_262145.f_20897;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_20898;
			}
			break;
		
		case 227:
			if (func_128() && !func_143())
			{
				if (func_291(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20908;
				}
				else
				{
					return Global_262145.f_20909;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_20910;
			}
			break;
		
		case 229:
			if (func_128() && !func_143())
			{
				if (func_291(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22072;
				}
				else
				{
					return Global_262145.f_22073;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_22074;
			}
			break;
		
		case 230:
			if (func_128() && !func_143())
			{
				if (func_291(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22168;
				}
				else
				{
					return Global_262145.f_22169;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_22170;
			}
			break;
		
		case 233:
			if (func_128() && !func_143())
			{
				if (func_291(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22642;
				}
				else
				{
					return Global_262145.f_22643;
				}
			}
			else if (func_143())
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
			if (func_128() && !func_143())
			{
				if (func_291(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23798;
				}
				else
				{
					return Global_262145.f_23799;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_23800;
			}
			break;
		
		case 238:
			if (func_128() && !func_143())
			{
				if (func_291(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23909;
				}
				else
				{
					return Global_262145.f_23910;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_23911;
			}
			break;
		
		case 249:
			if (func_128() && !func_143())
			{
				if (func_291(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23925;
				}
				else
				{
					return Global_262145.f_23926;
				}
			}
			else if (func_143())
			{
				return Global_262145.f_23927;
			}
			break;
	}
	return 0;
}

void func_294(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_295(iParam0))
	{
		if (!func_128())
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
	if (func_27(PLAYER::PLAYER_ID(), 1))
	{
		if (func_88(iParam0))
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
	else if (func_88(iParam0))
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
	iVar0 = func_59();
	if (iVar0 != func_10())
	{
		if (func_47(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_295(int iParam0)
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

int func_296()
{
	if ((func_35(PLAYER::PLAYER_ID(), 21) || func_35(PLAYER::PLAYER_ID(), 22)) || func_301())
	{
		return 1;
	}
	if (func_298())
	{
		func_297(22);
		return 1;
	}
	return 0;
}

void func_297(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_4), iParam0);
}

int func_298()
{
	if (func_32(PLAYER::PLAYER_ID(), 0))
	{
		if ((func_25() && !func_300()) || func_21(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		else
		{
			func_299(27);
		}
	}
	return 0;
}

void func_299(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_4), iParam0);
}

bool func_300()
{
	return Global_1312416.f_1;
}

bool func_301()
{
	return func_251(306, -1);
}

int func_302()
{
	return 0;
}

void func_303()
{
	char* sVar0;
	char* sVar1;
	struct<14> Var2;
	
	if (func_342())
	{
		return;
	}
	if (func_341())
	{
		func_334();
	}
	if (func_333())
	{
		func_332();
	}
	sVar0 = "GB_WORK_OVER";
	sVar1 = "GB_WORK_OVER";
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		sVar0 = "BK_RUN_OVER";
	}
	if ((!GAMEPLAY::IS_BIT_SET(Local_112.f_1, 2) && !GAMEPLAY::IS_BIT_SET(Local_112.f_1, 4)) && !GAMEPLAY::IS_BIT_SET(Local_112.f_1, 3))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_112.f_1, 7))
		{
			sVar1 = "GBTER_B_SSH";
			if (Local_112.f_10)
			{
				sVar1 = "GBTER_B_SSH_A";
			}
			if (Local_112.f_10)
			{
				func_324(101, sVar0, sVar1, func_326(), func_325(PLAYER::PLAYER_ID()), func_36(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_323(87, func_36(), -1, sVar1, sVar0, 1, -1, 2, -1);
			}
		}
		else if (func_322() != PLAYER::PLAYER_ID())
		{
			sVar1 = "GBTER_BIG_COMS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_SSO";
				if (Local_112.f_10)
				{
					sVar1 = "GBTER_B_SSO_A";
				}
			}
			if (Local_112.f_10)
			{
				func_324(101, sVar0, sVar1, func_326(), func_325(PLAYER::PLAYER_ID()), func_322(), func_36(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_321(91, func_322(), func_36(), -1, sVar1, sVar0, 1, -1, 2, 0, 0, 0);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG_WINS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_SSW";
				if (Local_112.f_10)
				{
					sVar1 = "GBTER_B_SSW_A";
				}
			}
			if (Local_112.f_10)
			{
				func_324(101, "GB_WINNER", sVar1, func_326(), func_325(PLAYER::PLAYER_ID()), func_36(), func_10(), func_10(), 0, -1, -1, -1, 2, -1, 2);
			}
			else
			{
				func_323(87, func_36(), -1, sVar1, "GB_WINNER", 1, -1, 2, -1);
			}
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Local_112.f_1, 3))
	{
	}
	else
	{
		sVar1 = "GBTER_BIG_FLEE";
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			sVar1 = "GBTER_B_BFLEE";
		}
		func_305(88, sVar0, sVar1, 1, -1, 2, 1);
		if (GAMEPLAY::IS_BIT_SET(Local_112.f_1, 4) || func_30(func_36(), 1, 0))
		{
			if (PLAYER::PLAYER_ID() == func_59())
			{
				Var2.f_10 = func_59();
				Var2.f_2 = 1337401234;
				func_304(Var2, func_45(func_36()));
			}
		}
	}
}

void func_304(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 713068249;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Param0, 14, iParam14);
	}
}

int func_305(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	func_320(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_306(&Var0);
}

int func_306(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437022.f_3026)
		{
			return 0;
		}
	}
	func_319(uParam0, uParam0->f_17);
	func_316(uParam0);
	if (func_80())
	{
		func_316(uParam0);
	}
	if (func_315(uParam0->f_1))
	{
		func_308();
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
				func_308();
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
				if (func_307(Global_2437022.f_2704[iVar0 /*80*/].f_1))
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

int func_307(int iParam0)
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

void func_308()
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
	func_309();
	if (bVar0)
	{
		Global_71473 = 0;
	}
}

void func_309()
{
	Global_2437022.f_3028 = 0;
	Global_2437022.f_3028.f_578 = 0;
	func_313(&(Global_2437022.f_3028.f_1));
	Global_2437022.f_3028.f_1.f_1 = 0;
	func_310(&(Global_2437022.f_3028.f_1));
}

void func_310(var uParam0)
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_312(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_311(0);
}

void func_311(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

int func_312(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71453, 0);
}

void func_313(var uParam0)
{
	func_314(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_314(var uParam0)
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

int func_315(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_316(var uParam0)
{
	if (func_318(uParam0->f_1))
	{
		uParam0->f_72 = func_317();
	}
}

int func_317()
{
	return 21;
}

int func_318(int iParam0)
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

void func_319(var uParam0, int iParam1)
{
	if (func_318(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_10() || !func_9(iParam1, 0, 1))
	{
		return;
	}
	if (func_307(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_62(iParam1, -2, 0, 0, 0);
		}
	}
}

void func_320(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_10();
	uParam1->f_18 = func_10();
	uParam1->f_19 = func_10();
	uParam1->f_20 = func_10();
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

int func_321(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
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
	func_320(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_306(&Var0);
}

int func_322()
{
	return Local_112.f_3;
}

int func_323(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_320(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != -1)
	{
		GAMEPLAY::SET_BIT(&(Var0.f_69), iParam8);
	}
	return func_306(&Var0);
}

int func_324(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
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
	func_320(iParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = iParam10;
	Var0.f_5 = iParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = iParam13;
	Var0.f_72 = iParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	GAMEPLAY::SET_BIT(&(Var0.f_69), 2);
	return func_306(&Var0);
}

int func_325(int iParam0)
{
	int iVar0;
	
	iVar0 = func_78(iParam0);
	if (iVar0 != -1)
	{
		return func_76(iVar0);
	}
	return 1;
}

char* func_326()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_26(PLAYER::PLAYER_ID());
	if (iVar0 != func_10())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_35(iVar0, 28) || func_35(PLAYER::PLAYER_ID(), 28)) || func_331(iVar0)) && !func_330(iVar0))
			{
				return func_328(iVar0, 0);
			}
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_328(iVar0, 0);
			}
		}
		uVar1 = func_327(&(Global_1625435[iVar0 /*560*/].f_11.f_99));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			return func_328(iVar0, 0);
		}
		else
		{
			return uVar1;
		}
	}
	return "";
}

var func_327(var uParam0)
{
	return uParam0;
}

var func_328(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_6(iParam0, 1))
		{
			return func_329();
		}
	}
	return UI::_GET_LABEL_TEXT("GB_REST_ACC");
}

var func_329()
{
	return UI::_GET_LABEL_TEXT("GB_REST_ACCM");
}

int func_330(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_168(iParam0) };
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

int func_331(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_10())
	{
		Var0 = { func_168(iParam0) };
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

void func_332()
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

bool func_333()
{
	return Global_2437022.f_2704[0 /*80*/].f_1 != 0;
}

void func_334()
{
	if (!func_340())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312576.f_9)
	{
		return;
	}
	func_335();
}

void func_335()
{
	func_337();
	func_336(0);
}

void func_336(bool bParam0)
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

void func_337()
{
	if (!func_339())
	{
	}
	if (func_340())
	{
		UI::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312576.f_12));
		func_338();
		UI::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_338()
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

int func_339()
{
	if (!func_340())
	{
		return 0;
	}
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312576.f_12));
	func_338();
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_340()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_341()
{
	return func_340();
}

int func_342()
{
	if (!func_343(1, 1, 1) || func_610())
	{
		return 1;
	}
	return 0;
}

int func_343(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_46(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_21(PLAYER::PLAYER_ID(), 21))
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
	if (!func_384(PLAYER::PLAYER_ID()))
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
	if (func_382(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_381())
	{
		return 0;
	}
	if (func_380())
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_376(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_374())
	{
		return 0;
	}
	if (func_21(PLAYER::PLAYER_ID(), 0) || func_21(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_21(PLAYER::PLAYER_ID(), 12) || func_21(PLAYER::PLAYER_ID(), 14)) || func_21(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_370(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_350())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_349())
		{
			return 0;
		}
	}
	if (Global_1654543)
	{
		return 0;
	}
	if (func_348(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_347())
	{
		return 0;
	}
	if (func_346(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_345())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 4))
	{
		return 0;
	}
	if (func_344(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_344(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_261.f_4 != 0 || Global_2423801[iParam0 /*413*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_345()
{
	return Global_1668658.f_3359 != -1;
}

int func_346(int iParam0)
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

int func_347()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_348(int iParam0)
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_35;
}

bool func_349()
{
	return Global_93284.f_328 > 0;
}

int func_350()
{
	int iVar0;
	
	iVar0 = func_31(PLAYER::PLAYER_ID());
	if (((func_369(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_24) || func_368(PLAYER::PLAYER_ID())) || func_367(PLAYER::PLAYER_ID())) || func_362(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_360(PLAYER::PLAYER_ID()))
	{
		if (func_115(iVar0) || func_359(iVar0))
		{
			return 1;
		}
	}
	if (func_358(PLAYER::PLAYER_ID()))
	{
		if (func_359(iVar0))
		{
			return 1;
		}
	}
	if (func_357(PLAYER::PLAYER_ID()))
	{
		if (func_103(iVar0))
		{
			return 1;
		}
	}
	if (func_356(PLAYER::PLAYER_ID()))
	{
		if (func_102(iVar0))
		{
			return 1;
		}
	}
	if (func_355(PLAYER::PLAYER_ID()))
	{
		if (func_101(iVar0))
		{
			return 1;
		}
	}
	if (func_354(PLAYER::PLAYER_ID()))
	{
		if (func_353(iVar0))
		{
			return 1;
		}
	}
	if (func_352(PLAYER::PLAYER_ID(), 0))
	{
		if (func_351(iVar0))
		{
			if (func_57(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
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

int func_352(int iParam0, bool bParam1)
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
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_10())
			{
				return func_54(Global_2423801[iParam0 /*413*/].f_309.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_353(int iParam0)
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

int func_354(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_54(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_355(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_54(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_356(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_54(Global_2423801[iParam0 /*413*/].f_309.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_357(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_54(Global_2423801[iParam0 /*413*/].f_309.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_358(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_54(Global_2423801[iParam0 /*413*/].f_309.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_359(int iParam0)
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

int func_360(int iParam0)
{
	if (func_361(Global_1589747[iParam0 /*790*/].f_273.f_24, -1))
	{
		return 1;
	}
	return 0;
}

int func_361(int iParam0, int iParam1)
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

int func_362(int iParam0)
{
	if (func_363(Global_1589747[iParam0 /*790*/].f_273.f_24, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_363(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_364(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_364(PLAYER::PLAYER_ID(), 0))
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

int func_364(int iParam0, bool bParam1)
{
	if (Global_1589590 != func_10())
	{
		if (!func_366(Global_1589590))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1589590)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2423801[Global_1589590 /*413*/].f_195, 24) || func_365(Global_1589590))
				{
					return 1;
				}
			}
		}
	}
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 24);
}

int func_365(int iParam0)
{
	if (iParam0 != func_10())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 9);
	}
	return 0;
}

int func_366(int iParam0)
{
	if (iParam0 != func_10())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 2);
	}
	return 0;
}

int func_367(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_54(Global_2423801[iParam0 /*413*/].f_309.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_368(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_54(Global_2423801[iParam0 /*413*/].f_309.f_4) == 0;
			}
		}
	}
	return 0;
}

int func_369(int iParam0)
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

int func_370(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
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
		if (func_368(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_358(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_367(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_357(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_356(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_355(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_373(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_354(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_372(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_352(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_371(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_371(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_54(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_372(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_54(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_373(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_10())
			{
				return func_54(Global_2423801[iParam0 /*413*/].f_309.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_374()
{
	if (func_375() == 0)
	{
		return 1;
	}
	return 0;
}

int func_375()
{
	return Global_1312466.f_18;
}

bool func_376(int iParam0)
{
	return func_377(iParam0);
}

var func_377(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

bool func_378()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_196 != 0;
}

bool func_379()
{
	return Global_1312857;
}

bool func_380()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 5;
}

bool func_381()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 0);
}

int func_382(int iParam0)
{
	if (func_383(iParam0, 1))
	{
		if (Global_1589747[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_383(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_376(iParam0))
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

bool func_384(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_142, 22);
}

void func_385(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_10())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
		{
			if (iParam1 == PLAYER::PLAYER_ID())
			{
				iVar0 = 1;
			}
			else if (func_386(iParam1, PLAYER::PLAYER_ID()))
			{
				iVar0 = 1;
			}
		}
	}
	if (iParam0 || iVar0)
	{
		if (func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			Global_2524719.f_4883.f_374 = NETWORK::_GET_POSIX_TIME();
		}
	}
}

int func_386(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_10() && iParam1 != func_10())
	{
		iVar0 = func_26(iParam0);
		if (iVar0 != func_10())
		{
			return iVar0 == func_26(iParam1);
		}
	}
	return 0;
}

void func_387(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
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
	
	if (func_505(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_503() || iParam2 == 27)
	{
		if (func_459(uParam1, iParam2, uParam3, Global_1574168, 0, func_501(), iParam7))
		{
			func_458(1);
			if ((!func_457() && !func_456()) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1))
			{
				if (func_455())
				{
					func_454();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_453(1);
						Global_1574168 = 0;
						iVar54 = -1;
						if (Global_1574389 != 1)
						{
							func_452(uParam1, 0, 0);
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
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_18(iVar35, 0))
									{
										if ((func_451(iVar35) || Global_2423801[iVar35 /*413*/].f_236 != -1) || func_29(iVar35))
										{
											iVar44 = iVar35;
											if (func_28(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_450(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_448(PLAYER::PLAYER_ID(), 0) && func_31(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_447())
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_10();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_446(iVar35) && func_442(iVar35, iParam2)) && func_9(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								uVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
								Var38 = { func_437(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_168(iVar35) };
								iVar37 = func_431(iVar35);
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
									if (!func_447())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_426(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_425(iParam5, 1, 0, 0), 16);
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
								uVar51 = func_424(iVar35, 0);
								if (bVar34)
								{
									if (func_27(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_423(iParam5))
								{
									func_422(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, uVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_422(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, uVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
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
							if (func_9(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_10();
							}
							if (func_446(iVar35))
							{
								if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									uVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
									Var38 = { func_437(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_168(iVar35) };
									iVar37 = func_431(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574168++;
									uVar51 = func_424(iVar35, 1);
									if (bVar34)
									{
										if (func_27(iVar35, 1))
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
									func_402(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, uVar42, uVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_399(uParam3, uParam1);
						}
						func_398(&(uParam3->f_21));
						func_397();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_396(uParam3, uParam1);
							func_395(uParam1, 0, 1);
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 7);
						}
						func_396(uParam3, uParam1);
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_391(uParam3))
						{
							Global_1574389 = 1;
						}
						func_388(uParam3);
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
			func_397();
			func_453(0);
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

void func_388(var uParam0)
{
	if (!func_390(&(uParam0->f_21)))
	{
		func_4(&(uParam0->f_21), 0, 0);
	}
	else if (func_3(&(uParam0->f_21), 250, 0))
	{
		func_398(&(uParam0->f_21));
		func_389(0);
	}
}

void func_389(bool bParam0)
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

bool func_390(var uParam0)
{
	return uParam0->f_1;
}

int func_391(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_10() && func_9(iVar15, 0, 1))
	{
		Var2 = { func_168(iVar15) };
		iVar1 = func_394(uParam0, uParam0->f_37);
		if (func_393(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_392(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_392(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_392(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_392(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_392(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_392(uParam0, iVar0, 0);
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

void func_392(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_393(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_394(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_395(var uParam0, int iParam1, int iParam2)
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

void func_396(var uParam0, var uParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GAMEPLAY::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_397()
{
	if (Global_1574389 != 0)
	{
		Global_1574389 = 0;
	}
}

void func_398(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_399(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_10())
		{
			if (func_9(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_401(uParam0->f_38[iVar0 /*2*/], 0);
					func_400(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589747[iVar0 /*790*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_400(var uParam0, var uParam1, int iParam2, var uParam3)
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

int func_401(int iParam0, bool bParam1)
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

void func_402(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_421() && iParam4 < func_420())
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
				func_419("");
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam10);
			}
			func_419(sParam1);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam11);
			if (uParam3->f_108 == 6)
			{
				func_419("");
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
			}
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
			func_419("");
			if (uParam3->f_108 == 6)
			{
				func_419("");
			}
			else
			{
				func_419(&sParam5);
			}
			func_407(uParam3, iParam0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_406(uParam3))
			{
				func_405("DPAD_FRIEND");
			}
			else if (func_404(uParam3))
			{
				func_405("DPAD_FRIEND");
			}
			else if (func_403(uParam3))
			{
				func_405("DPAD_CREW");
			}
			else
			{
				func_405("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_403(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_404(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 5);
}

void func_405(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_406(var uParam0)
{
	if (func_404(uParam0) && func_403(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_407(var uParam0, int iParam1)
{
	if (func_418(iParam1))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(121);
	}
	else if (func_411(iParam1))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(122);
	}
	else if (((GAMEPLAY::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && GAMEPLAY::IS_BIT_SET(Global_2423801[iParam1 /*413*/].f_410, 0))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(123);
	}
	else
	{
		if (func_408())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_408()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_409() || func_82())
		{
			return 1;
		}
	}
	return 0;
}

int func_409()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_82();
	}
	return func_410(Global_4456448.f_130782);
}

int func_410(int iParam0)
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

int func_411(int iParam0)
{
	if ((func_9(iParam0, 0, 1) && func_412()) && func_6(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_412()
{
	if (func_417(PLAYER::PLAYER_ID()) || func_416())
	{
		if (!func_413(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_413(int iParam0, int iParam1)
{
	if (func_415(iParam0) == iParam1)
	{
		return func_414(iParam0);
	}
	return 0;
}

int func_414(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

int func_415(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/];
	}
	return -1;
}

int func_416()
{
	switch (func_31(PLAYER::PLAYER_ID()))
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

int func_417(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/] != -1;
	}
	return 0;
}

int func_418(int iParam0)
{
	if (func_408())
	{
		if (func_9(iParam0, 0, 1))
		{
			return func_28(iParam0);
		}
	}
	if ((func_9(iParam0, 0, 1) && func_412()) && func_8(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_419(char* sParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_420()
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

int func_421()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574170)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_422(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, var uParam9, int iParam10, var uParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, var uParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_421() && iParam3 < func_420())
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
					func_419("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam9);
				}
				if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_405(sParam16);
				}
				else
				{
					func_419(&(uParam2->f_1));
				}
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam11);
				if (uParam2->f_108 == 6)
				{
					func_419("");
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
				if (func_447())
				{
					func_419("");
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
						func_405(&(uParam2->f_104));
					}
					else
					{
						func_419("");
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
					func_419("");
				}
				if (uParam2->f_108 == 6)
				{
					func_419("");
				}
				else
				{
					func_419(&sParam4);
				}
				func_407(uParam2, iParam0);
				if (iParam12 == 1 || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_419("");
					func_419("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_406(uParam2))
				{
					func_405("DPAD_FRIEND");
				}
				else if (func_404(uParam2))
				{
					func_405("DPAD_FRIEND");
				}
				else if (func_403(uParam2))
				{
					func_405("DPAD_CREW");
				}
				else
				{
					func_405("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_423(int iParam0)
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

int func_424(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_417(iParam0)) && !func_117(iParam0))
	{
		iVar0 = func_317();
	}
	iVar1 = func_78(iParam0);
	if (!iVar1 == -1)
	{
		return func_76(iVar1);
	}
	return iVar0;
}

char* func_425(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_426(var uParam0, float fParam1, var uParam2, int iParam3)
{
	if (func_430(iParam3))
	{
		*fParam1 = (func_427(iParam3, uParam2) / 10f);
		return 1;
	}
	if (func_423(iParam3))
	{
		*fParam1 = (func_427(iParam3, uParam2) / 1000f);
		return 1;
	}
	*uParam0 = uParam2;
	return 0;
}

float func_427(int iParam0, var uParam1)
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
				return func_429(SYSTEM::TO_FLOAT(uParam1));
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(uParam1);
			}
			else
			{
				return func_428(SYSTEM::TO_FLOAT(uParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(uParam1);
}

float func_428(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_429(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_430(int iParam0)
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

int func_431(int iParam0)
{
	int iVar0;
	
	iVar0 = func_434(iParam0);
	if (iVar0 == -1)
	{
		func_432(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_432(int iParam0, bool bParam1)
{
	if (!func_9(iParam0, 0, 1))
	{
		return;
	}
	if (func_434(iParam0) != -1)
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
	if (func_433(iParam0))
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

int func_433(int iParam0)
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

int func_434(int iParam0)
{
	int iVar0;
	
	if (!func_9(iParam0, 0, 1))
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
			func_435(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_435(int iParam0)
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
	func_436(&(Global_1379953[iVar32 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_436(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_10();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_437(int iParam0)
{
	struct<4> Var0;
	
	if (func_9(iParam0, 0, 1))
	{
		Global_2503649 = { func_168(iParam0) };
		if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (func_393(Global_2503649))
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
		if (func_441(&Global_2503649))
		{
			Global_2503579 = { func_439(iParam0) };
			func_438(&Global_2503579, &Var0);
		}
	}
	return Var0;
}

void func_438(var uParam0, var uParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

struct<35> func_439(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_440(iParam0))
	{
		return Global_1312889[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_168(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_440(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_441(var uParam0)
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

int func_442(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_445(iParam0) || func_444(iParam0)) || func_443(iParam0))
		{
			return 0;
		}
	}
	if (!func_384(iParam0))
	{
		return 0;
	}
	if ((!func_451(iParam0) && Global_2423801[iParam0 /*413*/].f_236 == -1) && !func_29(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_443(int iParam0)
{
	if (func_445(iParam0))
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 8);
}

int func_444(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

bool func_445(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 2);
}

int func_446(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_18(iParam0, 0))
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

int func_447()
{
	switch (func_31(PLAYER::PLAYER_ID()))
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
	switch (func_415(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_117(PLAYER::PLAYER_ID()))
	{
		switch (func_31(PLAYER::PLAYER_ID()))
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
	if (func_413(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_448(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 && func_449(Global_1625435[iParam0 /*560*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1)
	{
		if (func_449(Global_1625435[iParam0 /*560*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_449(int iParam0)
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
	return func_107(iParam0, 0);
	return 0;
}

void func_450(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_18(iVar1, 0))
			{
				if ((func_451(iVar1) || Global_2423801[iVar1 /*413*/].f_236 != -1) || func_29(iVar1))
				{
					if (func_47(iVar1, iParam1, 0))
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

int func_451(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		if (func_9(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_31(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_452(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_453(bool bParam0)
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

void func_454()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1))
	{
		if (func_333())
		{
			func_332();
		}
	}
}

int func_455()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 0) && func_333())
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1) && func_333())
	{
		return 1;
	}
	return 0;
}

int func_456()
{
	if (func_333())
	{
		if (func_307(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_457()
{
	if (func_333())
	{
		if (func_318(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_458(int iParam0)
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

int func_459(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	char* sVar8;
	int iVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_500(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	uVar7 = func_499();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_498())
		{
			if (func_497() > 0 && Global_1574170)
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
		if (!func_488())
		{
			func_487(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 26))
	{
		func_487(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_390(&(uParam2->f_19)))
	{
		if (func_497() == 1)
		{
			func_486(bVar6, uParam0, 0);
			func_4(&(uParam2->f_19), 0, 0);
			func_487(uParam0, uParam2, 0);
			GAMEPLAY::SET_BIT(&(Global_2524719.f_4578), 5);
		}
	}
	if (func_390(&(uParam2->f_19)) || bParam5)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::HIDE_HELP_TEXT_THIS_FRAME();
		}
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_3(&(uParam2->f_19), 10000, 0) || (func_497() == 0 && !bParam5))
		{
			func_487(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_485();
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
					func_485();
					if (iParam1 == 26 || iParam1 == 27)
					{
						UI::_0x25F87B30C382FCA7();
					}
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				UI::_CLEAR_NOTIFICATIONS_POS(uVar7);
				if (func_486(bVar6, uParam0, 0))
				{
					func_452(uParam0, 0, 0);
					uVar4 = func_483(iParam1, &(Global_4456448.f_130789), bParam4);
					Var0 = { func_481(iParam1) };
					if (bParam4)
					{
						func_478(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_471(uParam0, func_475(uParam2), func_472(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar8 = func_467(uParam2);
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam6))
						{
							sVar8 = uParam6;
						}
						func_465(uParam0, sVar8, func_466(), -1);
					}
					else if (func_408())
					{
						uParam2->f_34 = Global_1574169;
						func_478(uParam0, uVar4, &Var0, 1, -1, Global_1574169, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574169;
						func_478(uParam0, uVar4, "", 0, -1, Global_1574169, 1);
					}
					else
					{
						iVar9 = func_460(iParam1);
						func_478(uParam0, uVar4, &Var0, 1, iVar9, -1, 1);
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

int func_460(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_464())
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
			if (func_463(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_462(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_461(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_189())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_461(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 4;
}

bool func_462(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

bool func_463(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_464()
{
	return Global_4456448.f_1 == 0;
}

void func_465(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_405(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_405("");
		if (iParam3 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_466()
{
	switch (func_31(PLAYER::PLAYER_ID()))
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

char* func_467(var uParam0)
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
	switch (func_31(PLAYER::PLAYER_ID()))
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
			if (func_469())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_197(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_197(1))
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
			if (func_468(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_468(int iParam0)
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

bool func_469()
{
	return (func_470() && func_61(func_59()));
}

bool func_470()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148;
}

void func_471(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_405(uParam1);
		}
		else if (func_415(PLAYER::PLAYER_ID()) == 133)
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
		func_405("");
		if (iParam3 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_472(var uParam0)
{
	int iVar0;
	
	iVar0 = func_415(PLAYER::PLAYER_ID());
	if (func_474())
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
			switch (func_473())
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

int func_473()
{
	if (func_415(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2524719.f_4804;
	}
	return -1;
}

bool func_474()
{
	return Global_1589620;
}

char* func_475(var uParam0)
{
	int iVar0;
	
	iVar0 = func_415(PLAYER::PLAYER_ID());
	if (func_474())
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
			if (func_477() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_477() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_473())
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
			if (func_476() == 1)
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

int func_476()
{
	return Global_2524719.f_4807;
}

int func_477()
{
	if (func_415(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2524719.f_4802;
	}
	return -1;
}

void func_478(var uParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_419(uParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam1);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_405(uParam1);
		}
		if (func_498() && iParam6)
		{
			if (func_480())
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
			func_405(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (func_479(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(166);
			}
			else if (func_80())
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_479(int iParam0)
{
	if (func_463(iParam0) || func_462(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_480()
{
	return Global_1574170;
}

struct<4> func_481(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_482(PLAYER::PLAYER_ID()) || func_461(PLAYER::PLAYER_ID()))
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
	if (func_408() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_38, 16);
	}
	return Var0;
}

bool func_482(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 5;
}

var func_483(int iParam0, var uParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_408() || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1)))
	{
		uVar0 = func_484();
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

char* func_484()
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

void func_485()
{
	Global_37027 = 1;
}

bool func_486(bool bParam0, var uParam1, bool bParam2)
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

void func_487(var uParam0, var uParam1, bool bParam2)
{
	GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574168 = 0;
	func_397();
	Global_1574167 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_390(&(uParam1->f_19)))
		{
			func_398(&(uParam1->f_19));
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

int func_488()
{
	if (func_496())
	{
		return 0;
	}
	if (func_380())
	{
		return 0;
	}
	if (!func_494())
	{
		return 0;
	}
	if (!func_374())
	{
		return 0;
	}
	if (func_493(8, -1))
	{
		return 0;
	}
	if (func_497() == 2)
	{
		return 0;
	}
	if (Global_2524719.f_4530)
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	else if (!func_383(PLAYER::PLAYER_ID(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_492(1) || func_490(1)) || Global_17228.f_124) || Global_17228)
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_489() && Global_1686218 == 2)
	{
		return 0;
	}
	if (func_16(PLAYER::PLAYER_ID()) && !func_489())
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
	if (func_199(0))
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

bool func_489()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_30, 12) && GAMEPLAY::IS_BIT_SET(Global_1686219, 0));
}

int func_490(bool bParam0)
{
	if (CONTROLS::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_491(PLAYER::PLAYER_PED_ID()))
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

int func_491(var uParam0)
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

bool func_492(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

bool func_493(int iParam0, int iParam1)
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

int func_494()
{
	if (func_495())
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

bool func_495()
{
	return Global_1312438;
}

bool func_496()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17367.f_5873 + 100;
}

int func_497()
{
	return Global_1368245.f_68;
}

int func_498()
{
	if (Global_1574169 > 16)
	{
		return 1;
	}
	return 0;
}

float func_499()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_500(int iParam0)
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

int func_501()
{
	if (func_502(PLAYER::PLAYER_ID()))
	{
		return Global_1316740;
	}
	return 0;
}

int func_502(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_18(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_503()
{
	if (func_501())
	{
		return 1;
	}
	if (func_443(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_474())
	{
		return 1;
	}
	if (func_417(PLAYER::PLAYER_ID()))
	{
		switch (func_415(PLAYER::PLAYER_ID()))
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
				if (!func_504(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_504(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_504(PLAYER::PLAYER_ID()))
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

bool func_504(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 4);
}

int func_505(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_417(PLAYER::PLAYER_ID()) && !func_117(PLAYER::PLAYER_ID())) && !func_413(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_32(PLAYER::PLAYER_ID(), 0) && func_117(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_506(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_506(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_417(iParam0) && !func_445(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 8));
	bVar2 = func_117(iParam0);
	uVar3 = func_25();
	uVar4 = func_296();
	if ((bVar1 && (func_414(iParam0) || func_508(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_34(iParam0)) && !func_507(iParam0)))
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

bool func_507(int iParam0)
{
	return func_35(iParam0, 19);
}

int func_508(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

void func_509()
{
	if (func_9(func_36(), 1, 1) && !ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(func_36()), 0))
	{
		func_510(151, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(func_36()), 1), &uLocal_111, 1140457472, 1144750080, 0);
	}
}

void func_510(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if ((((func_417(PLAYER::PLAYER_ID()) && !func_445(PLAYER::PLAYER_ID())) && !GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 8)) && (func_414(PLAYER::PLAYER_ID()) || func_508(PLAYER::PLAYER_ID()))) || func_551(vParam1))
	{
		return;
	}
	Global_1666797 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vParam1);
	func_547(iParam0, fVar0);
	if (UI::IS_PAUSE_MENU_ACTIVE() && UI::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_34(PLAYER::PLAYER_ID()) || func_33(PLAYER::PLAYER_ID()))
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
		if (!func_21(PLAYER::PLAYER_ID(), 21))
		{
			func_546(vParam1, 1, 0);
		}
		if (!*uParam4 && func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_545(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_544(iParam0));
				if (func_543(iParam0, -1))
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
			if (func_542(iParam0))
			{
				fVar1 = func_541(iParam0);
				if (fVar1 != 1f)
				{
					func_538(fVar1);
					GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_537(iParam0) && func_34(PLAYER::PLAYER_ID()))
				{
					func_535(1);
					func_534(2);
				}
			}
			func_297(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_35(PLAYER::PLAYER_ID(), 19))
			{
				func_299(19);
			}
		}
		if (*uParam4 && func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_545(iParam0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 0);
				}
			}
			if (func_542(iParam0))
			{
				func_533();
				GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 1);
			}
			if (iParam7 && !func_417(PLAYER::PLAYER_ID()))
			{
				if (func_31(PLAYER::PLAYER_ID()) != 152)
				{
					func_512();
				}
			}
			if (func_199(2))
			{
				func_535(0);
				func_511(2);
			}
		}
	}
}

void func_511(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_39), iParam0);
}

void func_512()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_24), &Global_2409288, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_26), &Global_2409290, 18);
	func_531();
	func_515(1, 1, 0);
	func_513();
}

void func_513()
{
	func_514(0, 0);
}

void func_514(int iParam0, int iParam1)
{
	Global_2405070.f_22 = iParam0;
	Global_2405070.f_23 = iParam1;
}

void func_515(bool bParam0, bool bParam1, bool bParam2)
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
		func_530();
	}
	if (!bParam2)
	{
		func_518(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_517(0);
	func_516();
}

void func_516()
{
	struct<6> Var0;
	
	if (Global_2405070.f_484.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405070.f_484 = { Var0 };
	}
}

void func_517(bool bParam0)
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

void func_518(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_529())
		{
			func_528();
		}
		Global_2405070.f_703.f_515 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405070.f_703.f_504 = iParam1;
		Global_2405070.f_703.f_505 = iParam2;
		Global_2405070.f_703.f_506 = iParam10;
		func_526();
		func_522(8, 0, 0, 0, 0);
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
		func_519();
	}
}

void func_519()
{
	if (func_529() && !func_521())
	{
		func_528();
	}
	if (func_521())
	{
		func_520();
	}
	else
	{
		func_526();
		func_522(0, 0, 0, 0, 0);
		Global_2405070.f_1736 = 0;
		Global_2405070.f_1735 = 0;
	}
}

void func_520()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_703), &(Global_2405070.f_1219), 516);
	Global_2405070.f_484 = { Global_2405070.f_490 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515)
	{
		Global_2405070.f_1735 = 0;
	}
}

int func_521()
{
	if ((Global_2405070.f_1735 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_1219.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_1219.f_515))
	{
		return 1;
	}
	return 0;
}

void func_522(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437022.f_1889.f_690.f_16 != func_10())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2423801[Global_2437022.f_1889.f_690.f_16 /*413*/].f_401, 0) && func_523())
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

int func_523()
{
	if (((func_31(PLAYER::PLAYER_ID()) == 229 || func_31(PLAYER::PLAYER_ID()) == 191) || func_525()) || func_524())
	{
		return 0;
	}
	return 1;
}

var func_524()
{
	return Global_1574388;
}

int func_525()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_526()
{
	if (func_529() && !func_521())
	{
		func_528();
	}
	func_527();
	Global_2405070.f_703 = 0;
}

void func_527()
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

void func_528()
{
	if (func_521())
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

int func_529()
{
	if ((Global_2405070.f_1736 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_703.f_515))
	{
		return 1;
	}
	return 0;
}

void func_530()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_362), &Global_2409626, 121);
}

void func_531()
{
	func_532();
	Global_2405070.f_2245 = 0;
}

void func_532()
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

void func_533()
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

void func_534(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_2524719.f_4883.f_39), iParam0);
}

void func_535(int iParam0)
{
	if (func_536() && iParam0)
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

int func_536()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

int func_537(int iParam0)
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

void func_538(float fParam0)
{
	float fVar0;
	
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_539())
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

int func_539()
{
	switch (func_540())
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

int func_540()
{
	return Global_25459;
}

float func_541(int iParam0)
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

int func_542(int iParam0)
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

int func_543(int iParam0, int iParam1)
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

float func_544(int iParam0)
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

int func_545(int iParam0)
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

void func_546(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405070.f_44.f_49 = { vParam0 };
	Global_2405070.f_44.f_52 = iParam3;
	Global_2405070.f_44.f_53 = iParam4;
}

void func_547(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_550(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_548();
	}
}

void func_548()
{
	if (!func_549(PLAYER::PLAYER_ID()))
	{
		func_297(25);
	}
}

bool func_549(int iParam0)
{
	return func_35(iParam0, 25);
}

int func_550(int iParam0)
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

int func_551(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_552()
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
				func_553(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_553(int iParam0)
{
	struct<4> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Var0) && ENTITY::IS_ENTITY_A_PED(Var0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == PLAYER::GET_PLAYER_PED(func_36()))
		{
			if (Var0.f_3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1) && ENTITY::IS_ENTITY_A_PED(Var0.f_1))
				{
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
					{
						GAMEPLAY::SET_BIT(&(Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 1);
					}
				}
			}
		}
	}
}

void func_554()
{
	if (!GAMEPLAY::IS_BIT_SET(uLocal_110, 3))
	{
		if (func_9(func_36(), 1, 1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_36()))
		{
			func_571(func_36(), func_572(6), 1, 0);
			func_569(func_36(), 432, 1, 0);
			func_567(func_36(), 1, 1, 0);
			func_566(func_36(), Global_262145.f_12242, 1, 0);
			func_563(func_36(), 1, 0);
			if (func_41() <= 1)
			{
				func_555(func_36(), 1, 7000);
			}
			GAMEPLAY::SET_BIT(&uLocal_110, 3);
		}
	}
}

void func_555(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (iParam2 > 200000)
	{
		iParam2 = 200000;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (iParam0 == Global_2437022)
		{
		}
		else if (UI::DOES_BLIP_EXIST(Global_2415861[iVar0]))
		{
			GAMEPLAY::SET_BIT(&(Global_2415861.f_367), iVar0);
			GAMEPLAY::CLEAR_BIT(&(Global_2415861.f_372), iVar0);
			UI::SET_BLIP_FLASHES(Global_2415861[iVar0], 1);
			UI::SET_BLIP_FLASH_INTERVAL(Global_2415861[iVar0], 250);
			func_556(iParam0);
			if (iParam2 < 0)
			{
				GAMEPLAY::SET_BIT(&(Global_2415861.f_372), iVar0);
			}
			else
			{
				Global_2415861.f_198[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(&(Global_2415861.f_367), iVar0);
			GAMEPLAY::CLEAR_BIT(&(Global_2415861.f_372), iVar0);
			if (iParam2 < 0)
			{
				GAMEPLAY::SET_BIT(&(Global_2415861.f_372), iVar0);
			}
			else
			{
				Global_2415861.f_198[iVar0] = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam2);
			}
		}
	}
	if (!bParam1)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2415861.f_367), iVar0);
		GAMEPLAY::CLEAR_BIT(&(Global_2415861.f_372), iVar0);
		if (UI::DOES_BLIP_EXIST(Global_2415861[iVar0]))
		{
			func_556(iParam0);
			UI::SET_BLIP_FLASHES(Global_2415861[iVar0], 0);
		}
	}
}

void func_556(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (UI::DOES_BLIP_EXIST(Global_2415861[iVar0]))
		{
			Global_2415861.f_1397[iVar0] = func_557(iParam0);
			UI::SET_BLIP_PRIORITY(Global_2415861[iVar0], Global_2415861.f_1397[iVar0]);
		}
	}
}

int func_557(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (func_9(iParam0, 0, 1))
	{
		if (UI::DOES_BLIP_EXIST(Global_2415861[iVar0]))
		{
			iVar1 = UI::GET_BLIP_SPRITE(Global_2415861[iVar0]);
			if (GAMEPLAY::IS_BIT_SET(Global_2415861.f_383, iVar0) || GAMEPLAY::IS_BIT_SET(Global_2415861.f_382, iVar0))
			{
				return 1;
			}
			else if ((GAMEPLAY::IS_BIT_SET(Global_2415861.f_368, iVar0) || GAMEPLAY::IS_BIT_SET(Global_2415861.f_367, iVar0)) || GAMEPLAY::IS_BIT_SET(Global_2415861.f_385, iVar0))
			{
				return func_560(10);
			}
			else
			{
				switch (iVar1)
				{
					case 253:
					case 252:
					case 255:
						return func_560(7);
						break;
					
					case 257:
					case 258:
					case 259:
					case 260:
					case 261:
						return func_560(11);
						break;
					
					case 254:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2437022))
						{
							return func_560(6);
						}
						else
						{
							return func_560(5);
						}
						break;
					
					case 271:
						if (PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(Global_2437022))
						{
							return func_560(6);
						}
						else
						{
							return func_560(5);
						}
						break;
					
					case 163:
					case 164:
						if (func_75(Global_2437022, iParam0, -2, 0))
						{
							return func_560(6);
						}
						else
						{
							return func_560(5);
						}
						break;
					
					case 303:
					case 418:
						return func_560(10);
						break;
					
					case 364:
						if (func_558(Global_2437022, iParam0, 1))
						{
							return func_560(10);
						}
						else
						{
							return func_560(5);
						}
						break;
					
					case 478:
					case 501:
					case 523:
					case 556:
						return func_560(10);
						break;
					
					case 417:
						if (func_558(Global_2437022, iParam0, 1))
						{
							return func_560(6);
						}
						else
						{
							return func_560(5);
						}
						break;
					
					case 256:
					case 268:
					default:
						if (func_558(Global_2437022, iParam0, 1))
						{
							return func_560(6);
						}
						else
						{
							return func_560(5);
						}
						break;
					}
				}
			}
	}
	return 1;
}

int func_558(int iParam0, int iParam1, bool bParam2)
{
	if (func_62(iParam0, -2, 0, 0, 0) == func_62(iParam1, -2, 0, 0, 0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (func_559(func_62(iParam0, -2, 0, 0, 0)) && func_559(func_62(iParam1, -2, 0, 0, 0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_559(int iParam0)
{
	if (iParam0 == func_68(1) || iParam0 == func_68(0))
	{
		return 1;
	}
	return 0;
}

int func_560(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			if (func_562())
			{
				if (iParam0 == 5)
				{
					iParam0 = 6;
				}
				else
				{
					iParam0 = 5;
				}
			}
			break;
	}
	return func_561(iParam0);
}

int func_561(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 9;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 7;
			break;
		
		case 8:
			return 6;
			break;
		
		case 7:
			return 4;
			break;
		
		case 4:
		case 11:
			return 2;
			break;
		
		case 0:
		case 2:
		case 3:
		case 9:
		case 1:
			return 1;
			break;
	}
	return 1;
}

int func_562()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(Global_2437022);
	if (iVar0 > -1 && iVar0 < 4)
	{
		return GAMEPLAY::IS_BIT_SET(Global_4456448.f_104[iVar0 /*10693*/].f_5605, 4);
	}
	return 0;
}

void func_563(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (func_565(iParam0))
	{
		return;
	}
	func_564(&(Global_2415861.f_713[iParam0]), &(Global_2415861.f_1076[iParam0]), &(Global_2415861.f_390), bParam1, iParam0, bParam2, &uVar0);
}

int func_564(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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

int func_565(int iParam0)
{
	if (iParam0 == func_10())
	{
		return 1;
	}
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_539())
	{
		return 1;
	}
	return 0;
}

void func_566(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_565(iParam0))
	{
		return;
	}
	if (func_564(&(Global_2415861.f_746[iParam0]), &(Global_2415861.f_1109[iParam0]), &(Global_2415861.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_548[iParam0] = fParam1;
		}
	}
}

void func_567(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_565(iParam0))
	{
		return;
	}
	if (func_564(&(Global_2415861.f_812[iParam0]), &(Global_2415861.f_1175[iParam0]), &(Global_2415861.f_364), bParam1, iParam0, bParam3, &uVar0))
	{
		func_568(iParam0, bParam2);
	}
}

void func_568(int iParam0, bool bParam1)
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

void func_569(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_565(iParam0))
	{
		return;
	}
	if (func_564(&(Global_2415861.f_581[iParam0]), &(Global_2415861.f_944[iParam0]), &(Global_2415861.f_385), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_416[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_570();
		}
	}
}

void func_570()
{
	Global_2415861.f_1508 = 1;
}

void func_571(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_565(iParam0))
	{
		return;
	}
	if (func_564(&(Global_2415861.f_614[iParam0]), &(Global_2415861.f_977[iParam0]), &(Global_2415861.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_449[iParam0] = uParam1;
		}
	}
}

int func_572(int iParam0)
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

void func_573()
{
	char* sVar0;
	
	if (func_342())
	{
		if (func_341())
		{
			func_334();
		}
		return;
	}
	sVar0 = "GBTER_KILL";
	if (func_6(PLAYER::PLAYER_ID(), 1))
	{
		sVar0 = "GBTER_B_KILL";
		if (Local_112.f_10)
		{
			sVar0 = "GBTER_AB_KILL";
		}
	}
	if (!func_580(sVar0))
	{
		func_574(sVar0, func_36(), 1, 0);
	}
}

void func_574(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	func_575(sParam0, PLAYER::GET_PLAYER_NAME(iParam1), bParam3, 1);
}

int func_575(char* sParam0, char* sParam1, bool bParam2, int iParam3)
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
	if (func_579(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	uVar0 = Global_1312576.f_54;
	func_335();
	Global_1312576 = 9;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = iParam3;
	Global_1312576.f_56 = iParam3;
	Global_1312576.f_54 = uVar0;
	func_578();
	func_577(bParam2);
	func_576();
	return 1;
}

void func_576()
{
	GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 1);
}

void func_577(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312576.f_59), 0);
}

void func_578()
{
	Global_1312576.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_579(var uParam0, var uParam1)
{
	if (!func_340())
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

int func_580(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_340())
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
	return func_581(sParam0);
}

bool func_581(var uParam0)
{
	if (!func_340())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_582(uParam0);
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_12));
}

bool func_582(var uParam0)
{
	if (!func_340())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_16));
}

void func_583()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	if (func_342())
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_112.f_1, 0))
	{
		if (func_390(&(Local_112.f_4)))
		{
			iVar1 = (func_5() - func_588(&(Local_112.f_4), 0, 0));
			if (iVar1 > 30000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 6;
			}
			iVar1 = func_587(iVar1, 0);
			sVar2 = "GB_WORK_END";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar2 = "BK_TIME";
			}
			if (iVar1 > 0)
			{
				func_584(iVar1, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_584(0, sVar2, 0, 0, -1, 0, 3, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_584(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_586(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_585(7, iVar0);
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

void func_585(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1369750.f_6130[iParam0]), iParam1);
}

int func_586(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1369750.f_6130[iParam0], iParam1);
}

int func_587(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_588(var uParam0, bool bParam1, bool bParam2)
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

void func_589()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	
	if (func_342())
	{
		return;
	}
	if (PLAYER::PLAYER_ID() != func_59())
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_110, 0))
		{
			if (!func_333())
			{
				sVar0 = "GBTER_START";
				if (func_6(PLAYER::PLAYER_ID(), 1))
				{
					sVar0 = "GBTER_BSTART";
					if (Local_112.f_10)
					{
						sVar0 = "GBTER_AB_START";
					}
				}
				func_591(sVar0, PLAYER::GET_PLAYER_NAME(func_36()), 0, -1);
				func_590(1);
				GAMEPLAY::SET_BIT(&uLocal_110, 2);
			}
		}
		else
		{
			sVar1 = "GBTER_BIG";
			sVar2 = "GBTER_BIG_GS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = "GBTER_B_BIG";
				sVar2 = "GBTER_B_SS";
				if (Local_112.f_10)
				{
					sVar1 = "GBTER_B_BIG";
					sVar2 = "GBTER_AB_SS";
				}
			}
			func_332();
			func_323(86, func_36(), -1, sVar2, sVar1, 1, -1, 2, -1);
			GAMEPLAY::SET_BIT(&(Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(uLocal_110, 0))
	{
		if (!func_333())
		{
			sVar3 = "GBTER_BOSS";
			if (func_6(PLAYER::PLAYER_ID(), 1))
			{
				sVar3 = "GBTER_BBOSS";
				if (Local_112.f_10)
				{
					sVar3 = "GBTER_AB_BOSS";
				}
			}
			func_591(sVar3, PLAYER::GET_PLAYER_NAME(func_36()), 0, -1);
			GAMEPLAY::SET_BIT(&uLocal_110, 2);
			func_590(1);
		}
	}
	else
	{
		sVar4 = "GBTER_BIG";
		sVar5 = "GBTER_BIG_GS";
		if (func_6(PLAYER::PLAYER_ID(), 1))
		{
			sVar4 = "GBTER_B_BIG";
			sVar5 = "GBTER_B_BSS";
			if (Local_112.f_10)
			{
				sVar4 = "GBTER_B_BIG";
				sVar5 = "GBTER_AB_SS";
			}
		}
		func_332();
		func_323(86, func_36(), -1, sVar5, sVar4, 1, -1, 2, -1);
		GAMEPLAY::SET_BIT(&(Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1), 0);
	}
	GAMEPLAY::SET_BIT(&uLocal_110, 0);
}

void func_590(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_197(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_333())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_591(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}

void func_592(int iParam0)
{
	Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2 = iParam0;
}

void func_593(bool bParam0)
{
	if (bParam0)
	{
		if (!func_35(PLAYER::PLAYER_ID(), 9))
		{
			if (func_506(PLAYER::PLAYER_ID()) != 0)
			{
				func_297(9);
			}
		}
	}
	else if (func_35(PLAYER::PLAYER_ID(), 9))
	{
		func_299(9);
	}
}

void func_594(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 != iParam0)
	{
		func_608(-1);
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 = iParam0;
		if (func_607() != -1)
		{
			func_606(-1);
		}
		if (func_605() != -1)
		{
			func_604(-1);
		}
		func_603(iParam2);
		func_601(iParam0);
		if (!func_542(iParam0))
		{
			fVar0 = func_541(iParam0);
			if (fVar0 != 1f)
			{
				func_538(fVar0);
				GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 1);
			}
		}
		if (!func_545(iParam0) || iParam3)
		{
			if (func_543(iParam0, iParam2) && iParam3 == 1)
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
		if (func_25())
		{
			func_297(27);
		}
		if (bParam1)
		{
			if (!func_296())
			{
				func_535(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 1) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 4)) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 0))
			{
				func_89(6);
			}
			func_600();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 0);
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 0);
		}
		if (func_417(PLAYER::PLAYER_ID()) && func_34(PLAYER::PLAYER_ID()))
		{
			GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 8);
		}
		func_596();
		if (func_595(iParam0))
		{
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 0);
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 0);
			GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 6);
		}
		Global_2524719.f_6236 = 0;
	}
}

int func_595(int iParam0)
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

void func_596()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_599();
	iVar2 = func_26(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_47(iVar1, iVar2, 1) || func_597(iVar1, PLAYER::PLAYER_ID()))
			{
				unk_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, uVar3);
				unk_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_597(int iParam0, int iParam1)
{
	if (func_27(iParam0, 1) && func_27(iParam1, 1))
	{
		return (func_598(iParam0) == func_26(iParam1) || func_598(iParam1) == func_26(iParam0));
	}
	return 0;
}

int func_598(int iParam0)
{
	if (func_27(iParam0, 1))
	{
		return Global_1625435[func_26(iParam0) /*560*/].f_11.f_443;
	}
	return func_10();
}

int func_599()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11();
	if (iVar0 != func_10())
	{
		if (func_9(iVar0, 0, 1))
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

void func_600()
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

void func_601(int iParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_113(3791, -1, 0);
	iVar1 = func_602(iParam0);
	if (iVar1 != -1)
	{
		GAMEPLAY::SET_BIT(&uVar0, iVar1);
		func_111(3791, uVar0, -1, 1, 0);
	}
}

int func_602(int iParam0)
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

void func_603(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1625435[iVar0 /*560*/].f_11.f_176 != iParam0)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_176 = iParam0;
	}
}

void func_604(int iParam0)
{
	if (Global_2524719.f_4883.f_331 != iParam0)
	{
		Global_2524719.f_4883.f_331 = iParam0;
	}
}

int func_605()
{
	return Global_2524719.f_4883.f_331;
}

void func_606(int iParam0)
{
	if (Global_2524719.f_4883.f_330 != iParam0)
	{
		Global_2524719.f_4883.f_330 = iParam0;
	}
}

int func_607()
{
	return Global_2524719.f_4883.f_330;
}

void func_608(int iParam0)
{
	Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_32 = iParam0;
}

int func_609()
{
	return Local_123[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2;
}

int func_610()
{
	if (func_611(151) || func_296())
	{
		return 1;
	}
	return 0;
}

int func_611(int iParam0)
{
	if (!func_128() && !func_27(PLAYER::PLAYER_ID(), 1))
	{
		if (!func_34(PLAYER::PLAYER_ID()))
		{
			if (func_296())
			{
				return 1;
			}
		}
	}
	switch (iParam0)
	{
		case 148:
			break;
		
		case 151:
			break;
		
		case 152:
			break;
	}
	return 0;
}

void func_612(int iParam0, int iParam1)
{
	Local_123[iParam0 /*4*/] = iParam1;
}

int func_613()
{
	return 1;
}

int func_614()
{
	return Local_112;
}

int func_615(int iParam0)
{
	return Local_123[iParam0 /*4*/];
}

int func_616()
{
	var uVar0;
	
	func_621(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_620())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_619())
	{
		return 1;
	}
	if (func_618(157))
	{
		if (!func_617())
		{
			return 1;
		}
	}
	if (func_618(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_539() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_539()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_617()
{
	return Global_2448386.f_587;
}

int func_618(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_619()
{
	return Global_2458191;
}

bool func_620()
{
	return Global_2448386.f_582;
}

void func_621(var uParam0)
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
					func_622(iVar0);
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

void func_622(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_9(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_623(uVar4, &bVar5))
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

int func_623(var uParam0, var uParam1)
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

void func_624()
{
	SYSTEM::WAIT(0);
}

void func_625()
{
	func_334();
	if (func_9(func_36(), 0, 1))
	{
		func_566(func_36(), 1f, 1, 0);
		func_44(func_45(func_36()), 0);
	}
	Global_1673157 = func_10();
	func_626(1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_626(bool bParam0, int iParam1)
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
		func_679();
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 4);
	}
	if ((func_143() && iParam1 != 0) && Global_262145.f_16853)
	{
		if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 190 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 192)
		{
			func_659(PLAYER::PLAYER_ID(), iParam1, 1, 0);
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
		if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 14) && !func_417(PLAYER::PLAYER_ID()))
		{
			func_535(0);
		}
	}
	else if (func_657(PLAYER::PLAYER_ID()) != -1)
	{
		func_608(-1);
	}
	func_656(func_10());
	if (func_199(16))
	{
		func_511(16);
	}
	func_653(0);
	func_603(-1);
	func_652();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_651(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_648(iVar1);
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
	iVar2 = func_647();
	if ((func_449(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_646(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_115(iVar2))
	{
		func_643(-1, 1);
	}
	else if (((((func_642(iVar2) || func_641(iVar2)) || func_640(iVar2)) || func_103(iVar2)) || func_102(iVar2)) || func_101(iVar2))
	{
	}
	else
	{
		func_643(-1, 1);
	}
	func_299(19);
	func_299(20);
	func_299(21);
	func_299(22);
	func_299(27);
	func_511(3);
	func_511(4);
	func_511(7);
	func_639();
	if (func_34(PLAYER::PLAYER_ID()))
	{
		func_593(0);
	}
	func_299(29);
	Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 = func_10();
	if (Global_2524719.f_4883.f_35 != 0)
	{
		Global_2524719.f_4883.f_35 = 0;
	}
	if (bParam0)
	{
		func_512();
	}
	if (!func_417(PLAYER::PLAYER_ID()))
	{
		func_533();
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
		func_638("IMPEXP_SELFDES", 0);
		func_629("IMPEXP_SELFDES");
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 8);
	}
	func_627(iVar2, 0);
}

void func_627(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_628(iParam0));
			GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 9);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_628(iParam0));
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 9);
	}
}

char* func_628(int iParam0)
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

void func_629(char* sParam0)
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
					func_631();
					Global_106070.f_14113[iVar0 /*104*/].f_99[Global_14513] = 0;
					if (func_630(iVar0))
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

int func_630(int iParam0)
{
	if ((Global_106070.f_14113[iParam0 /*104*/].f_99[0] == 1 || Global_106070.f_14113[iParam0 /*104*/].f_99[1] == 1) || Global_106070.f_14113[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_631()
{
	if (func_637(14))
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
		Global_14513 = func_632();
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

var func_632()
{
	func_633();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_633()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_636(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_635(PLAYER::PLAYER_PED_ID());
			if (func_634(iVar0) && (!func_637(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_634(Global_106070.f_2355.f_539.f_4301))
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

bool func_634(int iParam0)
{
	return iParam0 < 3;
}

int func_635(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_636(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_636(int iParam0)
{
	if (func_634(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_637(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_638(char* sParam0, int iParam1)
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

void func_639()
{
	if (func_549(PLAYER::PLAYER_ID()))
	{
		func_299(25);
	}
}

int func_640(int iParam0)
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

int func_641(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

int func_642(int iParam0)
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

void func_643(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_647();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			if (func_58(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2504301.f_93[func_645(iParam0)] = 1;
			}
		}
		iVar0 = func_645(159);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(157);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(148);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(164);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(142);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(152);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(166);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(170);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(173);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(179);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(200);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(201);
		if (func_644(iVar0, Global_262145.f_12493, bParam1))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(182);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(183);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(185);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(186);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(180);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(195);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(197);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(198);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(207);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(208);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(209);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(214);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(215);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(216);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(217);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(218);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(219);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(220);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(221);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_644(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_35(PLAYER::PLAYER_ID(), 19) && !func_35(PLAYER::PLAYER_ID(), 20)) && !func_35(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2504301.f_93[iParam0] == 1 && func_390(&(Global_2504301[iParam0 /*2*/])))
	{
		if (func_588(&(Global_2504301[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2504301.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_645(int iParam0)
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

void func_646(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_647();
	}
	if (iParam0 > 0)
	{
		if (func_11() != func_10())
		{
			Global_2504301.f_93[func_645(iParam0)] = 1;
		}
		iVar0 = func_645(155);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(163);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(160);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(153);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(162);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(154);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(171);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(172);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(199);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(194);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(193);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(210);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(205);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(189);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_645(211);
		if (func_644(iVar0, Global_262145.f_12494, 0))
		{
			func_398(&(Global_2504301[iVar0 /*2*/]));
			func_4(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_647()
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

void func_648(int iParam0)
{
	if (!func_649(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_303[iParam0 /*3*/], func_650(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_303[iParam0 /*3*/] = { func_650() };
	}
	if (!func_649(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_290[iParam0 /*3*/], func_650(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_290[iParam0 /*3*/] = { func_650() };
	}
}

bool func_649(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_650()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_651(int iParam0)
{
	if (!func_649(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_145[iParam0 /*3*/], func_650(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_145[iParam0 /*3*/] = { func_650() };
	}
	if (!func_649(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_120[iParam0 /*3*/], func_650(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_120[iParam0 /*3*/] = { func_650() };
	}
}

void func_652()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573886 = { Var0 };
	Global_1573886.f_13 = func_10();
	if (GAMEPLAY::IS_BIT_SET(Global_1573342, 3))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1573342, 3);
	}
}

void func_653(bool bParam0)
{
	if (bParam0)
	{
		if (!func_46(PLAYER::PLAYER_ID(), 14))
		{
			func_655(14);
		}
	}
	else if (func_46(PLAYER::PLAYER_ID(), 14))
	{
		func_654(14);
	}
}

void func_654(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_5), iParam0);
}

void func_655(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_5), iParam0);
}

void func_656(int iParam0)
{
	if (func_28(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_443 != iParam0)
			{
				Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_443 = iParam0;
				if (iParam0 != func_10())
				{
				}
			}
		}
	}
}

int func_657(int iParam0)
{
	if (func_658(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_32;
	}
	return -1;
}

int func_658(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_32 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_659(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_266(iParam0, iParam1) && func_678(iParam0, iParam1))
	{
		iVar0 = func_265(iParam0, iParam1);
		func_663(iVar0, bParam2, bParam3);
		func_660(iVar0, 1);
	}
}

void func_660(int iParam0, int iParam1)
{
	if (!func_662(iParam0))
	{
		return;
	}
	func_252(func_661(iParam0), iParam1, -1, 1);
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_6 = iParam1;
}

int func_661(int iParam0)
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

bool func_662(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_663(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_677(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_676(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2503901[iParam0];
		iVar0 = func_675(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1668516 = -1;
		}
		func_674(iParam0, 0, bParam2);
	}
	else if (func_672(iParam0, bParam2))
	{
		iVar0 = func_671(iVar2, 0);
		uVar3 = func_670(PLAYER::PLAYER_ID(), iVar2);
		uVar4 = func_669(iVar2, bParam2);
		iVar5 = func_671(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(uVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(uVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_668(iVar2) && func_667(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_676(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_666(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_665(iParam0, (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2 - (func_669(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_671(iVar2, bParam2) / func_666(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_668(iVar2) && func_667(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_664(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_664(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return;
	}
	if (func_259(iParam1))
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

void func_665(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2)
	{
		Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_666(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_259(iParam1))
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

int func_667(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_259(iParam1) && func_668(iParam1))
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

bool func_668(int iParam0)
{
	return func_140(iParam0) == 5;
}

int func_669(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_140(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16824;
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16829;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16823;
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16828;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16822;
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16827;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16820;
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16825;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16821;
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16826;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20942;
				if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20943;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20926;
				if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20927;
				}
			}
			break;
	}
	return uVar0;
}

int func_670(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (func_259(iParam1))
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

int func_671(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_140(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16805;
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16814);
			}
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16819);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16806;
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16813);
			}
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16818);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16807;
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16812);
			}
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16817);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16808;
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16810);
			}
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16815);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16809;
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16811);
			}
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 1))
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
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 0))
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
			if (func_264(PLAYER::PLAYER_ID(), iParam0, 1))
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
			if (func_667(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_672(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_253(15384, -1, -1);
	}
	return func_253(func_673(iParam0), -1, -1);
}

int func_673(int iParam0)
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

void func_674(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_252(15384, iParam1, -1, 1);
		return;
	}
	func_252(func_673(iParam0), iParam1, -1, 1);
}

int func_675(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2503901[iParam0];
	iVar1 = func_677(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2503908;
	}
	if (func_668(iVar1))
	{
		if (func_667(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_676(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2503908 = iParam1;
		return;
	}
	Global_2503901[iParam0] = iParam1;
}

int func_677(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_10())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_259(Global_1589747[iParam0 /*790*/].f_273.f_174[iParam1 /*12*/]))
	{
		uVar0 = Global_1589747[iParam0 /*790*/].f_273.f_174[iParam1 /*12*/];
	}
	return uVar0;
}

int func_678(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_266(iParam0, iParam1))
	{
		iVar0 = func_265(iParam0, iParam1);
		if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_4 > 0 && Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_679()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 28);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 29);
	func_680(24);
}

void func_680(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

int func_681(struct<21> Param0)
{
	func_719(func_720(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	func_716(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_112, 11);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_123, 129);
	GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	func_682(0, 0);
	return 1;
}

void func_682(int iParam0, int iParam1)
{
	func_715();
	if (func_57(PLAYER::PLAYER_ID()))
	{
		func_688(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_687(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				GAMEPLAY::SET_BIT(&Global_1666792, 0);
				break;
			}
	}
	if (!func_128() && !func_27(PLAYER::PLAYER_ID(), 1))
	{
		if (func_301())
		{
			func_534(3);
		}
	}
	func_534(4);
	if (func_91(0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 = func_11();
	}
	if (func_88(iParam0))
	{
		func_686();
		Global_1666824.f_18 = func_685(func_59());
	}
	else if (func_104(func_657(PLAYER::PLAYER_ID())))
	{
		func_684();
		Global_1666878.f_18 = func_685(func_59());
	}
	func_683();
}

void func_683()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1358108.f_534[iVar0 /*42*/].f_1 = func_10();
		Global_1358108.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

void func_684()
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

int func_685(int iParam0)
{
	if (func_27(iParam0, 1))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_410;
	}
	return -1;
}

void func_686()
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

int func_687(int iParam0, bool bParam1)
{
	return func_47(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_688(bool bParam0)
{
	int iVar0;
	
	func_680(33);
	func_680(34);
	func_680(35);
	func_680(36);
	func_680(37);
	func_680(38);
	func_680(39);
	func_680(40);
	func_680(43);
	func_680(41);
	func_680(54);
	func_680(42);
	func_680(47);
	func_714(23);
	func_714(24);
	func_680(92);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 2);
	func_713();
	func_708();
	func_703();
	func_698();
	func_690();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2524719.f_4883.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_689(3))
	{
		func_714(3);
	}
	else if (func_689(4))
	{
		func_714(4);
	}
	else if (func_689(5))
	{
		func_714(5);
	}
	else if (func_689(6))
	{
		func_714(6);
	}
	else if (func_689(7))
	{
		func_714(7);
	}
	else if (((((((((((((((((func_689(0) || func_689(1)) || func_689(2)) || func_689(8)) || func_689(9)) || func_689(10)) || func_689(11)) || func_689(12)) || func_689(13)) || func_689(14)) || func_689(15)) || func_689(16)) || func_689(17)) || func_689(18)) || func_689(19)) || func_689(20)) || func_689(21)) || func_689(22))
	{
		func_714(8);
		func_714(0);
		func_714(1);
		func_714(2);
		func_714(9);
		func_714(10);
		func_714(11);
		func_714(12);
		func_714(13);
		func_714(14);
		func_714(15);
		func_714(16);
		func_714(17);
		func_714(18);
		func_714(19);
		func_714(20);
		func_714(21);
		func_714(22);
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

bool func_689(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_14[iVar0], iVar1);
}

void func_690()
{
	var uVar0;
	
	if (func_697())
	{
		func_696(8);
		func_696(9);
		func_696(10);
		func_696(12);
		func_696(13);
		func_696(14);
		func_696(19);
		func_696(20);
		func_696(21);
		func_696(22);
		func_696(23);
		func_696(24);
		func_696(25);
		func_696(26);
		func_696(15);
		func_696(16);
		func_696(17);
		func_696(18);
		func_696(35);
		func_696(45);
		func_696(46);
		if (func_695(11))
		{
			func_696(11);
			uVar0 = func_113(7226, -1, 0);
			GAMEPLAY::SET_BIT(&uVar0, 2);
			func_111(7226, uVar0, -1, 1, 0);
		}
	}
	if (func_695(48))
	{
		if (func_694(151, 3))
		{
			func_693(151, 3);
		}
		func_696(48);
	}
	if (func_695(49))
	{
		if (func_694(152, 3))
		{
			func_693(152, 3);
		}
		func_696(49);
	}
	if (func_695(50))
	{
		if (func_694(153, 3))
		{
			func_693(153, 3);
		}
		func_696(50);
	}
	if (func_695(51))
	{
		if (func_694(func_691(), 3))
		{
			func_693(func_691(), 3);
		}
		func_696(51);
	}
}

int func_691()
{
	if (func_692())
	{
		Global_106070.f_28022[154 /*29*/].f_24[Global_14513] = 1;
	}
	return 154;
}

int func_692()
{
	int iVar0;
	
	iVar0 = func_26(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_10()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_693(int iParam0, int iParam1)
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

int func_694(int iParam0, int iParam1)
{
	if (Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_695(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_26[iVar0], iVar1);
}

void func_696(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_26[iVar0]), iVar1);
}

int func_697()
{
	if (((((((((((((((((((((func_695(8) || func_695(9)) || func_695(10)) || func_695(12)) || func_695(11)) || func_695(13)) || func_695(14)) || func_695(19)) || func_695(20)) || func_695(21)) || func_695(22)) || func_695(23)) || func_695(24)) || func_695(25)) || func_695(26)) || func_695(15)) || func_695(16)) || func_695(17)) || func_695(18)) || func_695(35)) || func_695(45)) || func_695(46))
	{
		return 1;
	}
	return 0;
}

void func_698()
{
	if (func_702())
	{
		func_701(0);
		func_701(1);
		func_701(2);
		func_701(3);
		func_701(4);
		func_701(5);
		if (func_700(32))
		{
			if (func_694(func_699(), 3))
			{
				func_693(func_699(), 3);
			}
			func_701(32);
		}
	}
}

int func_699()
{
	if (func_692())
	{
		Global_106070.f_28022[12 /*29*/].f_24[Global_14513] = 1;
	}
	return 12;
}

bool func_700(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_23[iVar0], iVar1);
}

void func_701(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_23[iVar0]), iVar1);
}

int func_702()
{
	if ((((func_700(1) || func_700(0)) || func_700(2)) || func_700(4)) || func_700(5))
	{
		return 1;
	}
	return 0;
}

void func_703()
{
	if (func_707())
	{
		func_706(0);
		func_706(1);
		func_706(2);
		func_706(3);
		func_706(4);
		func_706(5);
		func_706(6);
		func_706(7);
		if (func_705(8))
		{
			func_706(8);
		}
		if (func_705(15))
		{
			if (func_694(func_704(), 3))
			{
				func_693(func_704(), 3);
			}
			func_706(15);
		}
	}
}

int func_704()
{
	if (func_692())
	{
		Global_106070.f_28022[20 /*29*/].f_24[Global_14513] = 1;
	}
	return 20;
}

bool func_705(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_21[iVar0], iVar1);
}

void func_706(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_21[iVar0]), iVar1);
}

int func_707()
{
	if ((((((((func_705(0) || func_705(1)) || func_705(2)) || func_705(3)) || func_705(4)) || func_705(5)) || func_705(6)) || func_705(7)) || func_705(8))
	{
		return 1;
	}
	return 0;
}

void func_708()
{
	if (func_712())
	{
		func_711(0);
		func_711(1);
		func_711(2);
		func_711(3);
		func_711(4);
		func_711(5);
		func_711(6);
		func_711(7);
		func_711(8);
		func_711(9);
		func_711(10);
		func_711(11);
		func_711(12);
		if (func_710(13))
		{
			if (func_694(func_709(), 3))
			{
				func_693(func_709(), 3);
			}
			func_711(13);
		}
	}
}

int func_709()
{
	if (func_692())
	{
		Global_106070.f_28022[76 /*29*/].f_24[Global_14513] = 1;
	}
	return 76;
}

bool func_710(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_19[iVar0], iVar1);
}

void func_711(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_19[iVar0]), iVar1);
}

int func_712()
{
	if ((((((((((((func_710(0) || func_710(1)) || func_710(2)) || func_710(3)) || func_710(4)) || func_710(5)) || func_710(6)) || func_710(7)) || func_710(8)) || func_710(9)) || func_710(10)) || func_710(11)) || func_710(12))
	{
		return 1;
	}
	return 0;
}

void func_713()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2524719.f_4883.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_714(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_14[iVar0]), iVar1);
}

void func_715()
{
	struct<14> Var0;
	
	Global_1666806 = { Var0 };
	Global_1666806.f_14 = 0;
	Global_1666806.f_15 = 0;
}

int func_716(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_718();
			}
			else
			{
				return 0;
			}
		}
		if (!func_717())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_718();
					}
					else
					{
						return 0;
					}
				}
				if (func_620())
				{
					if (!bParam2)
					{
						func_718();
					}
					else
					{
						return 0;
					}
				}
				if (func_618(155))
				{
					if (!bParam2)
					{
						func_718();
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
					func_718();
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
				func_718();
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
			func_718();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_717()
{
	return Global_1312834;
}

void func_718()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_719(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_718();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_720(int iParam0)
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

