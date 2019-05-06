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
	struct<872> Local_110 = { 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 5, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_982[32];
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	int iLocal_1433 = 0;
	int iLocal_1434 = 0;
	int iLocal_1435 = 0;
	int iLocal_1436 = 0;
	var uLocal_1437 = 0;
	int iLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446[4] = { 0, 0, 0, 0 };
	struct<8> Local_1451[30];
	var uLocal_1692[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
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
	iLocal_1438 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_956(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_917(ScriptParam_0);
	}
	else
	{
		func_869();
	}
	while (true)
	{
		func_868();
		if (func_860())
		{
			func_869();
		}
		Global_1666806.f_2 = Local_110.f_863;
		Global_1666806.f_3 = Local_110.f_864;
		switch (func_859(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_858() == 1)
				{
					if (func_857())
					{
						func_856();
						if (func_855())
						{
							func_840(166, 1, -1, 0);
							PLAYER::SET_MAX_WANTED_LEVEL(3);
							func_839(0f);
							uLocal_1437 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_1436);
						}
						else
						{
							func_840(166, 0, -1, 0);
						}
						func_838();
						func_837();
						func_836();
						Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 1;
					}
				}
				else if (func_858() == 4)
				{
					Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
				}
				break;
			
			case 1:
				if (func_830(1))
				{
					Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 2;
				}
				if (func_858() == 1)
				{
					func_829();
					func_809();
					func_786();
					func_297();
					func_288();
					if (func_855() || func_286())
					{
						func_141(&(Global_1358108.f_534), &Global_1358108, 27, &(Global_1358108.f_1), &(Global_1358108.f_117), -1, 0, 0);
					}
					func_76();
				}
				else if (func_858() == 4)
				{
					Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 3;
					func_73();
				}
				func_72();
				break;
			
			case 3:
				func_71(&(Local_110.f_845));
				if (func_70(&(Local_110.f_845)))
				{
					Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
				}
				break;
			
			case 2:
				Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 4;
			
			case 4:
				func_869();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_858())
			{
				case 0:
					func_68();
					func_67();
					if (func_25())
					{
						STATS::_0x6DEE77AFF8C21BD1(&(Local_110.f_863), &(Local_110.f_864));
						Local_110 = 1;
						Local_110.f_118 = NETWORK::PARTICIPANT_ID_TO_INT();
						Local_110.f_119 = PLAYER::PLAYER_ID();
						func_840(166, 1, -1, 0);
					}
					break;
				
				case 1:
					func_21();
					func_15();
					func_11();
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
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_110.f_117)
	{
		case 0:
			func_9();
			func_5();
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
			{
				Local_110.f_117 = 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 3))
			{
				Local_110.f_117 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6))
	{
		if (!func_8(&(Local_110.f_849)))
		{
			func_7(&(Local_110.f_849), 0, 0);
		}
		else if (func_6(&(Local_110.f_849), 500, 0))
		{
			GAMEPLAY::SET_BIT(&(Local_110.f_1), 6);
		}
	}
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

bool func_8(var uParam0)
{
	return uParam0->f_1;
}

void func_9()
{
	if (!func_8(&(Local_110.f_847)))
	{
		func_7(&(Local_110.f_847), 0, 0);
	}
	else if (func_6(&(Local_110.f_847), func_10(), 0))
	{
		GAMEPLAY::SET_BIT(&(Local_110.f_1), 3);
	}
}

int func_10()
{
	return Global_262145.f_14887;
}

void func_11()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			switch (Local_110.f_2[iVar0 /*26*/].f_17)
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_110.f_2[iVar0 /*26*/] == 0)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
							{
								Local_110.f_2[iVar0 /*26*/].f_17 = 1;
							}
						}
						else if (Local_110.f_2[iVar0 /*26*/] == 1)
						{
							Local_110.f_2[iVar0 /*26*/].f_17 = 5;
						}
						else
						{
							Local_110.f_2[iVar0 /*26*/].f_17 = 8;
						}
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
							{
								if (func_12(Local_110.f_2[iVar0 /*26*/].f_2))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2)))
									{
										if (GAMEPLAY::IS_BIT_SET(Local_110.f_109, iVar0))
										{
											GAMEPLAY::SET_BIT(&(Local_110.f_108), iVar0);
											Local_110.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (GAMEPLAY::IS_BIT_SET(Local_110.f_110, iVar0))
										{
											GAMEPLAY::SET_BIT(&(Local_110.f_108), iVar0);
											Local_110.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (GAMEPLAY::IS_BIT_SET(Local_110.f_111, iVar0))
										{
											GAMEPLAY::SET_BIT(&(Local_110.f_108), iVar0);
											Local_110.f_2[iVar0 /*26*/].f_17 = 2;
										}
										else if (GAMEPLAY::IS_BIT_SET(Local_110.f_112, iVar0))
										{
											Local_110.f_2[iVar0 /*26*/].f_17 = 3;
										}
									}
									else
									{
										Local_110.f_2[iVar0 /*26*/].f_17 = 4;
									}
								}
								else
								{
									Local_110.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 2:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1)))
							{
								Local_110.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_12(Local_110.f_2[iVar0 /*26*/].f_2))
								{
									Local_110.f_2[iVar0 /*26*/].f_17 = 3;
								}
								else if (GAMEPLAY::IS_BIT_SET(Local_110.f_112, iVar0))
								{
									Local_110.f_2[iVar0 /*26*/].f_17 = 3;
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 0))
							{
								Local_110.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 5:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_110.f_110, iVar0))
							{
								Local_110.f_2[iVar0 /*26*/].f_17 = 4;
							}
							else if (GAMEPLAY::IS_BIT_SET(Local_110.f_111, iVar0))
							{
								Local_110.f_2[iVar0 /*26*/].f_17 = 4;
							}
						}
					}
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_110.f_2[iVar0 /*26*/].f_24)
						{
							Local_110.f_2[iVar0 /*26*/].f_17 = 9;
						}
					}
					break;
				
				case 9:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (Local_110.f_2[iVar0 /*26*/].f_25)
						{
							Local_110.f_2[iVar0 /*26*/].f_17 = 6;
						}
					}
					break;
				
				case 4:
					break;
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				switch (Local_110.f_2[iVar0 /*26*/].f_18[iVar1])
				{
					case 0:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_110.f_2[iVar0 /*26*/] == 0)
							{
								Local_110.f_2[iVar0 /*26*/].f_18[iVar1] = 1;
							}
							else if (Local_110.f_2[iVar0 /*26*/] == 2)
							{
								Local_110.f_2[iVar0 /*26*/].f_18[iVar1] = 8;
							}
						}
						break;
					
					case 1:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_110.f_2[iVar0 /*26*/].f_17 == 2)
							{
								Local_110.f_2[iVar0 /*26*/].f_18[iVar1] = 7;
							}
							else if (Local_110.f_2[iVar0 /*26*/].f_17 == 3 || Local_110.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_110.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 8:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_110.f_2[iVar0 /*26*/].f_24)
							{
								Local_110.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
							}
						}
						break;
					
					case 7:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (Local_110.f_2[iVar0 /*26*/].f_17 == 3 || Local_110.f_2[iVar0 /*26*/].f_17 == 4)
							{
								Local_110.f_2[iVar0 /*26*/].f_18[iVar1] = 3;
							}
						}
						break;
					
					case 3:
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (!func_14(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 0))
								{
									Local_110.f_2[iVar0 /*26*/].f_18[iVar1] = 6;
								}
							}
						}
						break;
					
					case 6:
						break;
				}
				iVar1++;
			}
			iVar0++;
		}
	}
}

int func_12(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_13(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_13(var uParam0)
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

int func_14(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

void func_15()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_116, iVar0))
			{
				if (func_20(iVar0))
				{
					if (func_12(Local_110.f_2[iVar0 /*26*/].f_2))
					{
						func_16(iVar0);
						GAMEPLAY::SET_BIT(&(Local_110.f_116), iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!func_17(iVar1, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_18(-1, 0) == 8;
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

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
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

int func_19()
{
	return Global_1312736;
}

int func_20(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	if (!func_14(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (!func_14(Local_110.f_2[iParam0 /*26*/].f_3[iVar0]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_21()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = false;
	if (Local_110 != 4)
	{
		iLocal_1433 = 0;
		while (iLocal_1433 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1433)))
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_1433));
				if (!func_17(iVar3, 0))
				{
					if (func_956(iVar3, 1, 1))
					{
					}
					func_24(iLocal_1433);
					func_23(iLocal_1433);
					if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 2))
					{
						if (!bVar2)
						{
							if ((GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 3)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 5))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_982[iLocal_1433 /*14*/].f_1, 4))
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
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 5))
			{
				if (Local_110.f_118 > -1)
				{
					if (iLocal_1433 == Local_110.f_118)
					{
						GAMEPLAY::SET_BIT(&(Local_110.f_1), 5);
					}
				}
			}
			iLocal_1433++;
		}
		func_22();
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_113, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_110.f_115 != iVar0)
		{
			Local_110.f_115 = iVar0;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
		{
			if (iVar0 >= 4)
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_1), 1);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_1, 2))
		{
			if (!bVar2)
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_1), 2);
			}
		}
	}
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_113, iVar0))
			{
				if (!func_8(&(Local_110.f_853[iVar0 /*2*/])))
				{
					if (func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						func_7(&(Local_110.f_853[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_110.f_853[iVar0 /*2*/]), 10000, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_110.f_113), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_109, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_982[iParam0 /*14*/].f_5, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_109), iVar0);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_110, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_982[iParam0 /*14*/].f_2, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_110), iVar0);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_112, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_982[iParam0 /*14*/].f_3, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_112), iVar0);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_111, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_982[iParam0 /*14*/].f_4, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_111), iVar0);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_110.f_113, iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_982[iParam0 /*14*/].f_6, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_113), iVar0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_982[iParam0 /*14*/].f_7, iVar0))
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_113), iVar0);
			}
		}
		if (Local_110.f_2[iVar0 /*26*/] == 2)
		{
			if (!Local_110.f_2[iVar0 /*26*/].f_24)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_982[iParam0 /*14*/].f_12, iVar0))
				{
					Local_110.f_2[iVar0 /*26*/].f_24 = 1;
				}
			}
			if (!Local_110.f_2[iVar0 /*26*/].f_25)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_982[iParam0 /*14*/].f_13, iVar0))
				{
					Local_110.f_2[iVar0 /*26*/].f_25 = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_110.f_114, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (func_12(Local_110.f_2[iVar0 /*26*/].f_2))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2), NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), 1);
							GAMEPLAY::SET_BIT(&(Local_110.f_114), iParam0);
						}
					}
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&(Local_110.f_114), iParam0);
			}
			iVar0++;
		}
	}
}

int func_25()
{
	if (!func_44())
	{
		return 0;
	}
	if (!func_33())
	{
		return 0;
	}
	if (!func_26())
	{
		return 0;
	}
	return 1;
}

int func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			func_29(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_27(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = Local_110.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		vVar2 = { Local_110.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
		if (!func_28(vVar2, 0f, 0f, 0f, 0))
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

bool func_28(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6;
	
	iVar0 = Local_110.f_2[iParam0 /*26*/].f_22;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]))
		{
			vVar3 = { Local_110.f_123[iVar0 /*36*/].f_18[iVar1 /*3*/] };
			uVar6 = Local_110.f_123[iVar0 /*36*/].f_28[iVar1];
			if (!func_28(vVar3, 0f, 0f, 0f, 0))
			{
				iVar2 = Local_110.f_123[iVar0 /*36*/].f_32[iVar1];
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_31(iVar2))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_110.f_2[iParam0 /*26*/].f_23, iVar1))
						{
							GAMEPLAY::CLEAR_AREA(vVar3, 10f, 1, 0, 0, 1);
							GAMEPLAY::SET_BIT(&(Local_110.f_2[iParam0 /*26*/].f_23), iVar1);
						}
						if (func_30(&(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), iVar2, vVar3, uVar6, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							VEHICLE::_0x9737A37136F07E75(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), 1, iLocal_1436);
							VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), 0, 0);
							unk_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_7[iVar1]), 0);
						}
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
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

int func_31(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_32(int iParam0)
{
	int iVar0;
	
	if (Local_110.f_2[iParam0 /*26*/] != 2)
	{
		return 0;
	}
	iVar0 = Local_110.f_2[iParam0 /*26*/].f_22;
	return !func_28(Local_110.f_123[iVar0 /*36*/].f_18[0 /*3*/], 0f, 0f, 0f, 0);
}

int func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			func_35(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_34(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = Local_110.f_2[iParam0 /*26*/];
	iVar2 = Local_110.f_2[iParam0 /*26*/].f_22;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar0]))
		{
			if (iVar1 == 0)
			{
				return 0;
			}
			else if (iVar1 == 2)
			{
				vVar3 = { Local_110.f_123[iVar2 /*36*/].f_4[iVar0 /*3*/] };
				if (!func_28(vVar3, 0f, 0f, 0f, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_35(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	vector3 vVar5;
	var uVar8;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		switch (Local_110.f_2[iParam0 /*26*/])
		{
			case 0:
				if (func_42(Local_110.f_2[iParam0 /*26*/].f_2))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_2))
					{
						iVar0 = func_41();
						iVar1 = 0;
						while (iVar1 < 3)
						{
							if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]))
							{
								if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
								{
									if (func_31(iVar0))
									{
										if (func_40(&(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), Local_110.f_2[iParam0 /*26*/].f_2, 22, iVar0, iVar1, 1, 1, 1))
										{
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574993);
											ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1436);
											PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
											WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_microsmg"), 99999999, 0, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 3, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 5, 1);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 2, 1);
										}
									}
								}
							}
							iVar1++;
						}
					}
				}
				break;
			
			case 2:
				iVar0 = func_41();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]))
					{
						if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
						{
							if (func_31(iVar0))
							{
								iVar2 = Local_110.f_2[iParam0 /*26*/].f_22;
								vVar5 = { Local_110.f_123[iVar2 /*36*/].f_4[iVar1 /*3*/] };
								uVar8 = Local_110.f_123[iVar2 /*36*/].f_14[iVar1];
								if (!func_28(vVar5, 0f, 0f, 0f, 0))
								{
									if (func_39(&(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 22, iVar0, vVar5, uVar8, 1, 1, 1))
									{
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), Global_1574993);
										ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1, iLocal_1436);
										WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), joaat("weapon_carbinerifle"), 99999999, 0, 1);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 42, 1);
										PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 43, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 44, 1);
										PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 1);
										PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), vVar5, 7f, 0, 0);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 132, 1);
										uVar3 = func_38();
										ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), uVar3);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), uVar3, 0);
										uVar4 = func_37();
										PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), uVar4);
										PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), func_36());
										PED::SET_PED_SUFFERS_CRITICAL_HITS(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 0);
										PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar1]), 281, 1);
									}
								}
							}
						}
					}
					iVar1++;
				}
				break;
			}
	}
	return 0;
}

var func_36()
{
	return SYSTEM::ROUND(Global_262145.f_14895);
}

int func_37()
{
	return 200;
}

var func_38()
{
	return Global_262145.f_14894;
}

int func_39(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, uParam6, iParam8, bParam7);
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

int func_40(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
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

int func_41()
{
	return joaat("s_m_m_chemsec_01");
}

int func_42(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

bool func_43(int iParam0)
{
	return (Local_110.f_2[iParam0 /*26*/] == 0 || Local_110.f_2[iParam0 /*26*/] == 2);
}

int func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_46(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_45(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_45(int iParam0)
{
	switch (Local_110.f_2[iParam0 /*26*/])
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_2))
				{
					return 1;
				}
			}
			break;
		
		case 1:
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	switch (Local_110.f_2[iParam0 /*26*/])
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_2))
			{
				iVar0 = Local_110.f_2[iParam0 /*26*/].f_11;
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_31(iVar0))
					{
						if (func_28(Local_110.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar5, &uVar6))
							{
								Local_110.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_110.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_110.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_30(&(Local_110.f_2[iParam0 /*26*/].f_2), iVar0, Local_110.f_2[iParam0 /*26*/].f_13, Local_110.f_2[iParam0 /*26*/].f_16, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
							{
								VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::_0x9737A37136F07E75(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 1, 1, 0);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_2), 1, iLocal_1436);
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 0);
								VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 0, 0);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 1, 1);
								VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 1);
								VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 1);
								unk_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 0);
								VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 0);
							}
						}
					}
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_2))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
				{
					if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
					{
						iVar1 = Local_110.f_2[iParam0 /*26*/].f_12;
						if (func_31(iVar1))
						{
							if (func_40(&(Local_110.f_2[iParam0 /*26*/].f_1), Local_110.f_2[iParam0 /*26*/].f_2, 22, iVar1, -1, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), Global_1574993);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, iLocal_1436);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								GAMEPLAY::SET_BIT(&(Local_110.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_110.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_110.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar5, &uVar6))
							{
								Local_110.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_110.f_2[iParam0 /*26*/].f_16 = uVar5;
							}
						}
						if (!func_28(Local_110.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_110.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_110.f_2[iParam0 /*26*/].f_13, Local_110.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), Global_1574993);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, iLocal_1436);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								GAMEPLAY::SET_BIT(&(Local_110.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					iVar1 = Local_110.f_2[iParam0 /*26*/].f_12;
					if (func_31(iVar1))
					{
						if (func_28(Local_110.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_52(iParam0, &vVar2, &uVar5, &uVar6))
							{
								Local_110.f_2[iParam0 /*26*/].f_13 = { vVar2 };
								Local_110.f_2[iParam0 /*26*/].f_16 = uVar5;
								Local_110.f_2[iParam0 /*26*/].f_22 = uVar6;
								func_51(vVar2);
							}
						}
						if (!func_28(Local_110.f_2[iParam0 /*26*/].f_13, 0f, 0f, 0f, 0))
						{
							if (func_39(&(Local_110.f_2[iParam0 /*26*/].f_1), 22, iVar1, Local_110.f_2[iParam0 /*26*/].f_13, Local_110.f_2[iParam0 /*26*/].f_16, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), Global_1574993);
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, iLocal_1436);
								PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 42, 1);
								PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 11, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 44, 1);
								PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1);
								WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), joaat("weapon_pistol"), 99999999, 0, 1);
								uVar9 = func_50(iParam0);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), Local_110.f_2[iParam0 /*26*/].f_13, uVar9, 0, 0);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 132, 1);
								PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 281, 1);
								uVar7 = func_49();
								ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), uVar7);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), uVar7, 0);
								uVar8 = func_48();
								PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), uVar8);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), func_47());
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1, 1);
								GAMEPLAY::SET_BIT(&(Local_110.f_107), iParam0);
							}
						}
					}
				}
			}
			break;
	}
	return 0;
}

var func_47()
{
	return SYSTEM::ROUND(Global_262145.f_14893);
}

int func_48()
{
	return 100;
}

var func_49()
{
	return Global_262145.f_14892;
}

float func_50(int iParam0)
{
	if (func_28(Local_110.f_2[iParam0 /*26*/].f_13, -1597.604f, 3083.673f, 31.5661f, 0))
	{
		return 10f;
	}
	return 3f;
}

void func_51(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (iVar0 == -1)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_871, iVar1))
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 < 0)
	{
		return;
	}
	if (func_28(vParam0, -1596.399f, 3058.814f, 31.5661f, 0))
	{
		Local_110.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1631.312f, 3027.889f, 30.8859f, -1560.55f, 3137.933f, 33.9384f, 1, 1, 1, 1);
		GAMEPLAY::SET_BIT(&(Local_110.f_871), iVar0);
	}
	if (func_28(vParam0, 2328.066f, 2576.558f, 45.6677f, 0))
	{
		Local_110.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(2266.34f, 2486.074f, 54.976f, 2413.662f, 2679.982f, 43.5461f, 1, 1, 1, 1);
		GAMEPLAY::SET_BIT(&(Local_110.f_871), iVar0);
	}
	if (func_28(vParam0, -46.8187f, 1946.659f, 189.5608f, 0))
	{
		Local_110.f_865[iVar0] = PED::ADD_SCENARIO_BLOCKING_AREA(-65.1142f, 1905.577f, 194.9851f, -20.5564f, 2013.468f, 171.5573f, 1, 1, 1, 1);
		GAMEPLAY::SET_BIT(&(Local_110.f_871), iVar0);
	}
}

int func_52(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	switch (Local_110.f_2[iParam0 /*26*/])
	{
		case 1:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Local_110.f_122);
			if (!func_28(Local_110.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_110.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_110.f_123[iVar0 /*36*/] };
					*uParam2 = Local_110.f_123[iVar0 /*36*/].f_3;
					Local_110.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 2:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Local_110.f_122);
			if (!func_28(Local_110.f_123[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_110.f_123[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_110.f_123[iVar0 /*36*/] };
					*uParam2 = Local_110.f_123[iVar0 /*36*/].f_3;
					*uParam3 = iVar0;
					Local_110.f_123[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
		
		case 0:
			iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10);
			if (!func_28(Local_110.f_484[iVar0 /*36*/], 0f, 0f, 0f, 0))
			{
				if (func_53(Local_110.f_484[iVar0 /*36*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					*uParam1 = { Local_110.f_484[iVar0 /*36*/] };
					*uParam2 = Local_110.f_484[iVar0 /*36*/].f_3;
					Local_110.f_484[iVar0 /*36*/] = { 0f, 0f, 0f };
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_53(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_60(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_54(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

int func_54(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_956(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_56(PLAYER::PLAYER_ID()), vParam0, 1) <= (fVar2 + fParam3))
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
		if (func_956(iVar1, 1, 1))
		{
			if (!func_17(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_55(iVar1) || !bParam10) && !Global_2423801[iVar1 /*413*/].f_259)
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
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_56(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_56(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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

int func_55(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

Vector3 func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_59() && Global_1589747[iVar0 /*790*/].f_761) && !func_58(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_57(iParam0);
}

Vector3 func_57(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_58(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_59()
{
	return Global_2448386.f_16;
}

int func_60(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_956(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_55(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_61(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_57(iVar1), vParam0, 1) < fParam3)
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

int func_61(int iParam0)
{
	if (func_66(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2503649 = { func_65(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2503649))
	{
		return 1;
	}
	if (func_62(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_62(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0);
	if (!iVar0 == func_63())
	{
		if (iVar0 == func_64(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_63()
{
	return -1;
}

int func_64(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_63();
}

struct<13> func_65(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_66(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2503649 = { func_65(iParam0) };
		Global_2503662 = { func_65(iParam1) };
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

void func_67()
{
	Local_110.f_2[0 /*26*/] = 2;
	Local_110.f_2[0 /*26*/].f_11 = joaat("baller3");
	Local_110.f_2[0 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_110.f_2[1 /*26*/] = 2;
	Local_110.f_2[1 /*26*/].f_11 = joaat("dubsta");
	Local_110.f_2[1 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_110.f_2[2 /*26*/] = 0;
	Local_110.f_2[2 /*26*/].f_11 = joaat("cog552");
	Local_110.f_2[2 /*26*/].f_12 = joaat("a_m_y_business_03");
	Local_110.f_2[3 /*26*/] = 0;
	Local_110.f_2[3 /*26*/].f_11 = joaat("baller5");
	Local_110.f_2[3 /*26*/].f_12 = joaat("a_m_y_business_03");
}

void func_68()
{
	func_69();
	if (Local_110.f_122 == 0)
	{
		if (Local_110.f_121 == 0)
		{
			Local_110.f_122 = 10;
		}
		else
		{
			Local_110.f_122 = 9;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 4))
	{
		return;
	}
	switch (Local_110.f_121)
	{
		case 0:
			Local_110.f_123[0 /*36*/] = { -106.8009f, 331.5984f, 111.7262f };
			Local_110.f_123[0 /*36*/].f_3 = 45.1956f;
			Local_110.f_123[0 /*36*/].f_4[0 /*3*/] = { -106.2522f, 353.0331f, 111.8849f };
			Local_110.f_123[0 /*36*/].f_4[1 /*3*/] = { -104.2692f, 356.5287f, 111.8858f };
			Local_110.f_123[0 /*36*/].f_4[2 /*3*/] = { -108.1528f, 347.4515f, 111.8858f };
			Local_110.f_123[1 /*36*/] = { -1193.408f, -218.8712f, 36.9448f };
			Local_110.f_123[1 /*36*/].f_3 = 136.8281f;
			Local_110.f_123[1 /*36*/].f_4[0 /*3*/] = { -1174.724f, -238.3963f, 36.9385f };
			Local_110.f_123[1 /*36*/].f_4[1 /*3*/] = { -1201.011f, -231.2006f, 36.948f };
			Local_110.f_123[1 /*36*/].f_4[2 /*3*/] = { -1162.52f, -229.3399f, 36.9564f };
			Local_110.f_123[2 /*36*/] = { -1646.583f, -1102.801f, 12.0181f };
			Local_110.f_123[2 /*36*/].f_3 = 312.8899f;
			Local_110.f_123[2 /*36*/].f_4[0 /*3*/] = { -1643.292f, -1098.154f, 12.0207f };
			Local_110.f_123[2 /*36*/].f_4[1 /*3*/] = { -1638.825f, -1093.105f, 12.0269f };
			Local_110.f_123[3 /*36*/] = { 1171.307f, -398.4046f, 70.5896f };
			Local_110.f_123[3 /*36*/].f_3 = 252.8763f;
			Local_110.f_123[3 /*36*/].f_4[0 /*3*/] = { 1180.066f, -405.9521f, 66.7792f };
			Local_110.f_123[3 /*36*/].f_4[1 /*3*/] = { 1176.999f, -397.1275f, 66.928f };
			Local_110.f_123[4 /*36*/] = { 929.1267f, -1255.108f, 24.4835f };
			Local_110.f_123[4 /*36*/].f_3 = 27.8866f;
			Local_110.f_123[4 /*36*/].f_4[0 /*3*/] = { 943.2654f, -1244.3f, 24.6881f };
			Local_110.f_123[4 /*36*/].f_4[1 /*3*/] = { 939.8859f, -1229.958f, 24.652f };
			Local_110.f_123[4 /*36*/].f_4[2 /*3*/] = { 920.2808f, -1259.097f, 24.5269f };
			Local_110.f_123[5 /*36*/] = { 883.0366f, -2166.188f, 31.2735f };
			Local_110.f_123[5 /*36*/].f_3 = 186.7157f;
			Local_110.f_123[5 /*36*/].f_4[0 /*3*/] = { 871.2222f, -2167.22f, 31.2735f };
			Local_110.f_123[5 /*36*/].f_4[1 /*3*/] = { 872.3619f, -2199.464f, 29.5194f };
			Local_110.f_123[5 /*36*/].f_4[2 /*3*/] = { 888.3759f, -2169.164f, 35.2714f };
			Local_110.f_123[6 /*36*/] = { -110.3279f, -2705.599f, 5.0099f };
			Local_110.f_123[6 /*36*/].f_3 = 0.3174f;
			Local_110.f_123[6 /*36*/].f_4[0 /*3*/] = { -133.4379f, -2700.109f, 5.0103f };
			Local_110.f_123[6 /*36*/].f_4[1 /*3*/] = { -127.772f, -2681.304f, 5.0274f };
			Local_110.f_123[6 /*36*/].f_4[2 /*3*/] = { -112.7492f, -2673.062f, 5.006f };
			Local_110.f_123[6 /*36*/].f_14[2] = 180f;
			Local_110.f_123[7 /*36*/] = { -520.2162f, 163.9754f, 70.0812f };
			Local_110.f_123[7 /*36*/].f_3 = 358.2249f;
			Local_110.f_123[7 /*36*/].f_4[0 /*3*/] = { -508.6846f, 166.9421f, 69.9316f };
			Local_110.f_123[7 /*36*/].f_4[1 /*3*/] = { -495.0937f, 169.297f, 69.9316f };
			Local_110.f_123[7 /*36*/].f_18[0 /*3*/] = { -505.5487f, 166.7718f, 69.9316f };
			Local_110.f_123[7 /*36*/].f_28[0] = 85.9643f;
			Local_110.f_123[7 /*36*/].f_32[0] = joaat("baller5");
			Local_110.f_123[7 /*36*/].f_18[1 /*3*/] = { -498.6042f, 169.8883f, 69.9316f };
			Local_110.f_123[7 /*36*/].f_28[1] = 263.6038f;
			Local_110.f_123[7 /*36*/].f_32[1] = joaat("cog552");
			Local_110.f_123[8 /*36*/] = { -591.7915f, -1765.793f, 22.1854f };
			Local_110.f_123[9 /*36*/].f_3 = 241.2612f;
			Local_110.f_123[8 /*36*/].f_4[0 /*3*/] = { -593.1422f, -1779.995f, 21.8499f };
			Local_110.f_123[8 /*36*/].f_4[1 /*3*/] = { -584.6111f, -1774.981f, 21.62f };
			Local_110.f_123[8 /*36*/].f_4[2 /*3*/] = { -580.9441f, -1769.818f, 22.1854f };
			Local_110.f_123[8 /*36*/].f_18[0 /*3*/] = { -582.6792f, -1777.695f, 21.6132f };
			Local_110.f_123[8 /*36*/].f_28[0] = 145.1394f;
			Local_110.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_110.f_123[9 /*36*/] = { 306.2488f, -1000.808f, 28.3108f };
			Local_110.f_123[9 /*36*/].f_3 = 63.2117f;
			Local_110.f_123[9 /*36*/].f_4[0 /*3*/] = { 314.583f, -998.1405f, 28.1613f };
			Local_110.f_123[9 /*36*/].f_4[1 /*3*/] = { 300.5795f, -997.6307f, 28.1986f };
			Local_110.f_123[9 /*36*/].f_18[0 /*3*/] = { 312.527f, -1000.571f, 28.2617f };
			Local_110.f_123[9 /*36*/].f_28[0] = 148.5301f;
			Local_110.f_123[9 /*36*/].f_32[0] = joaat("baller5");
			Local_110.f_123[9 /*36*/].f_18[1 /*3*/] = { 303.729f, -1000.568f, 28.3096f };
			Local_110.f_123[9 /*36*/].f_28[1] = 44.2995f;
			Local_110.f_123[9 /*36*/].f_32[1] = joaat("cog552");
			Local_110.f_484[0 /*36*/] = { 533.1884f, -136.2944f, 58.6519f };
			Local_110.f_484[0 /*36*/].f_3 = 179.583f;
			Local_110.f_484[1 /*36*/] = { 774.9319f, -1329.652f, 25.243f };
			Local_110.f_484[1 /*36*/].f_3 = 268.6526f;
			Local_110.f_484[2 /*36*/] = { 999.0349f, -3054.079f, 4.9011f };
			Local_110.f_484[2 /*36*/].f_3 = 90.3809f;
			Local_110.f_484[3 /*36*/] = { 329.7707f, -1750.917f, 28.2917f };
			Local_110.f_484[3 /*36*/].f_3 = 229.4149f;
			Local_110.f_484[4 /*36*/] = { -1000.175f, -2098.133f, 11.3367f };
			Local_110.f_484[4 /*36*/].f_3 = 141.0009f;
			Local_110.f_484[5 /*36*/] = { -712.6369f, -880.1467f, 22.5928f };
			Local_110.f_484[5 /*36*/].f_3 = 359.1567f;
			Local_110.f_484[6 /*36*/] = { -1482.46f, -498.4642f, 31.8069f };
			Local_110.f_484[6 /*36*/].f_3 = 212.8829f;
			Local_110.f_484[7 /*36*/] = { -1357.325f, 579.7441f, 130.483f };
			Local_110.f_484[7 /*36*/].f_3 = 257.1156f;
			Local_110.f_484[8 /*36*/] = { -555.6091f, 55.0564f, 48.3253f };
			Local_110.f_484[8 /*36*/].f_3 = 174.0491f;
			Local_110.f_484[9 /*36*/] = { -84.1599f, -1024.114f, 27.2205f };
			Local_110.f_484[9 /*36*/].f_3 = 245.895f;
			break;
		
		case 1:
			Local_110.f_123[0 /*36*/] = { 1447.271f, 3750.165f, 30.9342f };
			Local_110.f_123[0 /*36*/].f_3 = 225.1522f;
			Local_110.f_123[0 /*36*/].f_4[0 /*3*/] = { 1440.142f, 3753.75f, 30.9407f };
			Local_110.f_123[0 /*36*/].f_4[1 /*3*/] = { 1455.688f, 3760.388f, 31.0543f };
			Local_110.f_123[1 /*36*/] = { -46.8187f, 1946.659f, 189.5608f };
			Local_110.f_123[9 /*36*/].f_3 = 128.6356f;
			Local_110.f_123[1 /*36*/].f_4[0 /*3*/] = { -52.1263f, 1953.13f, 189.1861f };
			Local_110.f_123[1 /*36*/].f_4[1 /*3*/] = { -63.1502f, 1951.946f, 189.1861f };
			Local_110.f_123[1 /*36*/].f_4[2 /*3*/] = { -59.1516f, 1964.074f, 189.1861f };
			Local_110.f_123[2 /*36*/] = { 2002.527f, 4978.516f, 40.5969f };
			Local_110.f_123[2 /*36*/].f_3 = 214.3712f;
			Local_110.f_123[2 /*36*/].f_4[0 /*3*/] = { 2013.281f, 4976.885f, 40.4305f };
			Local_110.f_123[2 /*36*/].f_4[1 /*3*/] = { 2025.947f, 4978.383f, 40.1376f };
			Local_110.f_123[2 /*36*/].f_4[2 /*3*/] = { 2000.83f, 4990.36f, 40.4477f };
			Local_110.f_123[3 /*36*/] = { 2939.418f, 4623.833f, 47.7256f };
			Local_110.f_123[3 /*36*/].f_3 = 151.8443f;
			Local_110.f_123[3 /*36*/].f_4[0 /*3*/] = { 2930.615f, 4620.496f, 47.7246f };
			Local_110.f_123[3 /*36*/].f_4[1 /*3*/] = { 2946.911f, 4629.479f, 47.7251f };
			Local_110.f_123[3 /*36*/].f_4[2 /*3*/] = { 2936.956f, 4609.8f, 47.7277f };
			Local_110.f_123[4 /*36*/] = { 519.5331f, 3105.464f, 39.5241f };
			Local_110.f_123[4 /*36*/].f_3 = 186.7534f;
			Local_110.f_123[4 /*36*/].f_4[0 /*3*/] = { 518.6117f, 3090.195f, 39.4652f };
			Local_110.f_123[4 /*36*/].f_4[1 /*3*/] = { 532.1984f, 3083.56f, 39.4652f };
			Local_110.f_123[5 /*36*/] = { -1597.604f, 3083.673f, 31.5661f };
			Local_110.f_123[5 /*36*/].f_3 = 101.7629f;
			Local_110.f_123[5 /*36*/].f_4[0 /*3*/] = { -1601.259f, 3078.785f, 31.5661f };
			Local_110.f_123[5 /*36*/].f_4[1 /*3*/] = { -1609.109f, 3080.765f, 31.5661f };
			Local_110.f_123[5 /*36*/].f_4[2 /*3*/] = { -1598.4f, 3070.091f, 32.6629f };
			Local_110.f_123[6 /*36*/] = { 1470.055f, 6550.666f, 13.9091f };
			Local_110.f_123[6 /*36*/].f_3 = 352.4692f;
			Local_110.f_123[6 /*36*/].f_4[0 /*3*/] = { 1459.452f, 6546.819f, 13.6304f };
			Local_110.f_123[6 /*36*/].f_4[1 /*3*/] = { 1460.641f, 6562.202f, 12.7644f };
			Local_110.f_123[6 /*36*/].f_18[0 /*3*/] = { 1459.178f, 6544.879f, 13.713f };
			Local_110.f_123[6 /*36*/].f_28[0] = 88.1481f;
			Local_110.f_123[6 /*36*/].f_32[0] = joaat("baller5");
			Local_110.f_123[6 /*36*/].f_18[1 /*3*/] = { 1460.212f, 6560.179f, 12.9444f };
			Local_110.f_123[6 /*36*/].f_28[1] = 97.3821f;
			Local_110.f_123[6 /*36*/].f_32[1] = joaat("cog552");
			Local_110.f_123[7 /*36*/] = { 2328.066f, 2576.558f, 45.6677f };
			Local_110.f_123[7 /*36*/].f_3 = 335.1092f;
			Local_110.f_123[7 /*36*/].f_4[0 /*3*/] = { 2339.745f, 2569.616f, 46.7255f };
			Local_110.f_123[7 /*36*/].f_4[1 /*3*/] = { 2356.385f, 2593.859f, 46.1125f };
			Local_110.f_123[7 /*36*/].f_4[2 /*3*/] = { 2338.935f, 2549.453f, 45.6677f };
			Local_110.f_123[8 /*36*/] = { -1600.295f, 5204.928f, 3.3151f };
			Local_110.f_123[8 /*36*/].f_3 = 296.2108f;
			Local_110.f_123[8 /*36*/].f_4[0 /*3*/] = { -1587.408f, 5193.21f, 3.3151f };
			Local_110.f_123[8 /*36*/].f_4[1 /*3*/] = { -1576.558f, 5176.321f, 18.7159f };
			Local_110.f_123[8 /*36*/].f_4[2 /*3*/] = { -1595.553f, 5206.593f, 3.3151f };
			Local_110.f_123[8 /*36*/].f_18[0 /*3*/] = { -1575.924f, 5170.995f, 18.5541f };
			Local_110.f_123[8 /*36*/].f_28[0] = 312.3839f;
			Local_110.f_123[8 /*36*/].f_32[0] = joaat("baller5");
			Local_110.f_484[0 /*36*/] = { 1514.526f, 1730.14f, 108.9447f };
			Local_110.f_484[0 /*36*/].f_3 = 87.1735f;
			Local_110.f_484[1 /*36*/] = { 2028.331f, 3444.544f, 42.9909f };
			Local_110.f_484[1 /*36*/].f_3 = 251.7144f;
			Local_110.f_484[2 /*36*/] = { 392.7668f, 3588.585f, 32.2922f };
			Local_110.f_484[2 /*36*/].f_3 = 351.6842f;
			Local_110.f_484[3 /*36*/] = { 200.9893f, 2351.4f, 72.5299f };
			Local_110.f_484[3 /*36*/].f_3 = 297.6164f;
			Local_110.f_484[4 /*36*/] = { -2337.792f, 4041.646f, 29.414f };
			Local_110.f_484[4 /*36*/].f_3 = 346.6894f;
			Local_110.f_484[5 /*36*/] = { -742.3113f, 5537.667f, 32.4857f };
			Local_110.f_484[5 /*36*/].f_3 = 30.2635f;
			Local_110.f_484[6 /*36*/] = { 1586.277f, 6445.438f, 24.1337f };
			Local_110.f_484[6 /*36*/].f_3 = 155.2497f;
			Local_110.f_484[7 /*36*/] = { 2574.845f, 5086.147f, 43.6593f };
			Local_110.f_484[7 /*36*/].f_3 = 11.7033f;
			Local_110.f_484[8 /*36*/] = { 362.3407f, 4431.755f, 61.9071f };
			Local_110.f_484[8 /*36*/].f_3 = 290.5464f;
			Local_110.f_484[9 /*36*/] = { -1906.661f, 1773.933f, 170.3475f };
			Local_110.f_484[9 /*36*/].f_3 = 113.551f;
			break;
	}
	GAMEPLAY::SET_BIT(&(Local_110.f_1), 4);
}

var func_69()
{
	if (Local_110.f_121 != -1)
	{
		return Local_110.f_121;
	}
	if (Local_110.f_121 == -1)
	{
		if (ZONE::GET_HASH_OF_MAP_AREA_AT_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) == -289320599)
		{
			Local_110.f_121 = 0;
		}
		else
		{
			Local_110.f_121 = 1;
		}
	}
	return Local_110.f_121;
}

int func_70(var uParam0)
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

void func_71(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_7(uParam0, 0, 0);
		}
	}
}

void func_72()
{
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_110.f_119 != -1)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119);
	}
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (!func_17(iVar2, 0))
			{
				if (iVar0 != func_63())
				{
					if (iVar2 == iVar0 || func_74(iVar2, iVar0, 1))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574948[iVar1], Global_1574993);
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574993, Global_1574948[iVar1]);
					}
				}
			}
		}
		iVar1++;
	}
}

int func_74(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_63())
	{
		if (!bParam2)
		{
			if (func_75(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1625435[iParam0 /*560*/].f_11 != func_63())
		{
			return iParam1 == Global_1625435[iParam0 /*560*/].f_11;
		}
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	if (iParam1 != func_63())
	{
		if (iParam0 != func_63())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 != func_63())
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

void func_76()
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	
	if (func_855())
	{
		return;
	}
	if (!func_286())
	{
		return;
	}
	iVar3 = -1;
	fVar4 = func_140(&iVar3, 0);
	if (fVar4 <= 1600f)
	{
		if (!func_139(PLAYER::PLAYER_ID()))
		{
			if (!func_133())
			{
				func_129(0);
				NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
				GAMEPLAY::SET_BIT(&uLocal_1431, 18);
			}
		}
	}
	if (Local_110.f_119 > -1)
	{
		if (iVar3 > -1)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_110.f_2[iVar3 /*26*/].f_1), 0) };
		}
	}
	if (!func_28(vVar0, 0f, 0f, 0f, 0))
	{
		func_77(166, vVar0, &uLocal_1724, 1140457472, 1144750080, 0);
	}
}

void func_77(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if ((((func_128(PLAYER::PLAYER_ID()) && !func_127(PLAYER::PLAYER_ID())) && !GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 8)) && (func_126(PLAYER::PLAYER_ID()) || func_125(PLAYER::PLAYER_ID()))) || func_58(vParam1))
	{
		return;
	}
	Global_1666797 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vParam1);
	func_121(iParam0, fVar0);
	if (UI::IS_PAUSE_MENU_ACTIVE() && UI::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_120(PLAYER::PLAYER_ID()) || func_118(PLAYER::PLAYER_ID()))
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
		if (!func_117(PLAYER::PLAYER_ID(), 21))
		{
			func_116(vParam1, 1, 0);
		}
		if (!*uParam4 && func_956(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_115(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_114(iParam0));
				if (func_113(iParam0, -1))
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
			if (func_112(iParam0))
			{
				fVar1 = func_111(iParam0);
				if (fVar1 != 1f)
				{
					func_839(fVar1);
					GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_110(iParam0) && func_120(PLAYER::PLAYER_ID()))
				{
					func_108(1);
					func_107(2);
				}
			}
			func_106(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_105(PLAYER::PLAYER_ID(), 19))
			{
				func_104(19);
			}
		}
		if (*uParam4 && func_956(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_115(iParam0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 0);
				}
			}
			if (func_112(iParam0))
			{
				func_103();
				GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 1);
			}
			if (iParam7 && !func_128(PLAYER::PLAYER_ID()))
			{
				if (func_101(PLAYER::PLAYER_ID()) != 152)
				{
					func_80();
				}
			}
			if (func_79(2))
			{
				func_108(0);
				func_78(2);
			}
		}
	}
}

void func_78(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_39), iParam0);
}

bool func_79(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_39, iParam0);
}

void func_80()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_24), &Global_2409288, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_26), &Global_2409290, 18);
	func_99();
	func_83(1, 1, 0);
	func_81();
}

void func_81()
{
	func_82(0, 0);
}

void func_82(int iParam0, int iParam1)
{
	Global_2405070.f_22 = iParam0;
	Global_2405070.f_23 = iParam1;
}

void func_83(bool bParam0, bool bParam1, bool bParam2)
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
		func_98();
	}
	if (!bParam2)
	{
		func_86(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_85(0);
	func_84();
}

void func_84()
{
	struct<6> Var0;
	
	if (Global_2405070.f_484.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405070.f_484 = { Var0 };
	}
}

void func_85(bool bParam0)
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

void func_86(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_97())
		{
			func_96();
		}
		Global_2405070.f_703.f_515 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405070.f_703.f_504 = iParam1;
		Global_2405070.f_703.f_505 = iParam2;
		Global_2405070.f_703.f_506 = iParam10;
		func_94();
		func_90(8, 0, 0, 0, 0);
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
		func_87();
	}
}

void func_87()
{
	if (func_97() && !func_89())
	{
		func_96();
	}
	if (func_89())
	{
		func_88();
	}
	else
	{
		func_94();
		func_90(0, 0, 0, 0, 0);
		Global_2405070.f_1736 = 0;
		Global_2405070.f_1735 = 0;
	}
}

void func_88()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_703), &(Global_2405070.f_1219), 516);
	Global_2405070.f_484 = { Global_2405070.f_490 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515)
	{
		Global_2405070.f_1735 = 0;
	}
}

int func_89()
{
	if ((Global_2405070.f_1735 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_1219.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_1219.f_515))
	{
		return 1;
	}
	return 0;
}

void func_90(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437022.f_1889.f_690.f_16 != func_63())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2423801[Global_2437022.f_1889.f_690.f_16 /*413*/].f_401, 0) && func_91())
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

int func_91()
{
	if (((func_101(PLAYER::PLAYER_ID()) == 229 || func_101(PLAYER::PLAYER_ID()) == 191) || func_93()) || func_92())
	{
		return 0;
	}
	return 1;
}

var func_92()
{
	return Global_1574388;
}

int func_93()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_94()
{
	if (func_97() && !func_89())
	{
		func_96();
	}
	func_95();
	Global_2405070.f_703 = 0;
}

void func_95()
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

void func_96()
{
	if (func_89())
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

int func_97()
{
	if ((Global_2405070.f_1736 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_703.f_515))
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_362), &Global_2409626, 121);
}

void func_99()
{
	func_100();
	Global_2405070.f_2245 = 0;
}

void func_100()
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

int func_101(int iParam0)
{
	if (func_102(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_102(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_103()
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

void func_104(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_4), iParam0);
}

bool func_105(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

void func_106(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_4), iParam0);
}

void func_107(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_2524719.f_4883.f_39), iParam0);
}

void func_108(int iParam0)
{
	if (func_109() && iParam0)
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

int func_109()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

int func_110(int iParam0)
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

float func_111(int iParam0)
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

int func_112(int iParam0)
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

int func_113(int iParam0, int iParam1)
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

float func_114(int iParam0)
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

int func_115(int iParam0)
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

void func_116(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405070.f_44.f_49 = { vParam0 };
	Global_2405070.f_44.f_52 = iParam3;
	Global_2405070.f_44.f_53 = iParam4;
}

bool func_117(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

int func_118(int iParam0)
{
	if (func_119(iParam0))
	{
		if (func_120(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_119(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_63())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_105(iParam0, 9);
	}
	return 0;
}

void func_121(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_124(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_122();
	}
}

void func_122()
{
	if (!func_123(PLAYER::PLAYER_ID()))
	{
		func_106(25);
	}
}

bool func_123(int iParam0)
{
	return func_105(iParam0, 25);
}

int func_124(int iParam0)
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

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_126(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

bool func_127(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 2);
}

int func_128(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/] != -1;
	}
	return 0;
}

void func_129(int iParam0)
{
	if (!func_139(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_130(PLAYER::PLAYER_ID()) != 0)
		{
			func_106(20);
			if (func_128(PLAYER::PLAYER_ID()))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 8))
				{
					GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 8);
				}
			}
		}
	}
}

int func_130(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_128(iParam0) && !func_127(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 8));
	bVar2 = func_139(iParam0);
	uVar3 = func_132();
	uVar4 = func_133();
	if ((bVar1 && (func_126(iParam0) || func_125(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_120(iParam0)) && !func_131(iParam0)))
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

bool func_131(int iParam0)
{
	return func_105(iParam0, 19);
}

bool func_132()
{
	return Global_1312416;
}

int func_133()
{
	if ((func_105(PLAYER::PLAYER_ID(), 21) || func_105(PLAYER::PLAYER_ID(), 22)) || func_136())
	{
		return 1;
	}
	if (func_134())
	{
		func_106(22);
		return 1;
	}
	return 0;
}

int func_134()
{
	if (func_102(PLAYER::PLAYER_ID(), 0))
	{
		if ((func_132() && !func_135()) || func_117(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		else
		{
			func_104(27);
		}
	}
	return 0;
}

bool func_135()
{
	return Global_1312416.f_1;
}

bool func_136()
{
	return func_137(306, -1);
}

int func_137(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_138(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_138(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
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

bool func_139(int iParam0)
{
	return func_105(iParam0, 20);
}

float func_140(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;
	
	fVar0 = 1E+10f;
	fVar1 = 0f;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar2 /*26*/].f_1))
		{
			if (Local_110.f_2[iVar2 /*26*/] == 2 || !bParam1)
			{
				if (!func_14(Local_110.f_2[iVar2 /*26*/].f_1))
				{
					vVar6 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_110.f_2[iVar2 /*26*/].f_1), 1) };
					fVar1 = SYSTEM::VDIST2(vVar3, vVar6);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
						*iParam0 = iVar2;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

void func_141(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
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
	
	if (func_285(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_283() || iParam2 == 27)
	{
		if (func_225(uParam1, iParam2, uParam3, Global_1574168, 0, func_281(), iParam7))
		{
			func_224(1);
			if ((!func_222() && !func_220()) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1))
			{
				if (func_219())
				{
					func_216();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_215(1);
						Global_1574168 = 0;
						iVar54 = -1;
						if (Global_1574389 != 1)
						{
							func_214(uParam1, 0, 0);
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
								if (func_956(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_17(iVar35, 0))
									{
										if ((func_213(iVar35) || Global_2423801[iVar35 /*413*/].f_236 != -1) || func_212(iVar35))
										{
											iVar44 = iVar35;
											if (func_119(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_211(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_208(PLAYER::PLAYER_ID(), 0) && func_101(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_207())
							{
								if (func_956(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_63();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_206(iVar35) && func_202(iVar35, iParam2)) && func_956(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								uVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
								Var38 = { func_197(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_65(iVar35) };
								iVar37 = func_191(iVar35);
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
									if (!func_207())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_186(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_185(iParam5, 1, 0, 0), 16);
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
								uVar51 = func_180(iVar35, 0);
								if (bVar34)
								{
									if (func_179(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_178(iParam5))
								{
									func_177(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, uVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_177(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, uVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
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
							if (func_956(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_63();
							}
							if (func_206(iVar35))
							{
								if (func_956(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									uVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
									Var38 = { func_197(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_65(iVar35) };
									iVar37 = func_191(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574168++;
									uVar51 = func_180(iVar35, 1);
									if (bVar34)
									{
										if (func_179(iVar35, 1))
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
									func_155(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, uVar42, uVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_152(uParam3, uParam1);
						}
						func_151(&(uParam3->f_21));
						func_150();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_149(uParam3, uParam1);
							func_148(uParam1, 0, 1);
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 7);
						}
						func_149(uParam3, uParam1);
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_144(uParam3))
						{
							Global_1574389 = 1;
						}
						func_142(uParam3);
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
			func_150();
			func_215(0);
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

void func_142(var uParam0)
{
	if (!func_8(&(uParam0->f_21)))
	{
		func_7(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_151(&(uParam0->f_21));
		func_143(0);
	}
}

void func_143(bool bParam0)
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

int func_144(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_63() && func_956(iVar15, 0, 1))
	{
		Var2 = { func_65(iVar15) };
		iVar1 = func_147(uParam0, uParam0->f_37);
		if (func_146(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_145(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_145(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_145(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_145(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_145(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_145(uParam0, iVar0, 0);
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

void func_145(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_146(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_147(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_148(var uParam0, int iParam1, int iParam2)
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

void func_149(var uParam0, var uParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GAMEPLAY::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_150()
{
	if (Global_1574389 != 0)
	{
		Global_1574389 = 0;
	}
}

void func_151(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_152(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_63())
		{
			if (func_956(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_154(uParam0->f_38[iVar0 /*2*/], 0);
					func_153(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589747[iVar0 /*790*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_153(var uParam0, var uParam1, int iParam2, var uParam3)
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

int func_154(int iParam0, bool bParam1)
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

void func_155(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_176() && iParam4 < func_175())
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
				func_174("");
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam10);
			}
			func_174(sParam1);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam11);
			if (uParam3->f_108 == 6)
			{
				func_174("");
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
			}
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
			func_174("");
			if (uParam3->f_108 == 6)
			{
				func_174("");
			}
			else
			{
				func_174(&sParam5);
			}
			func_160(uParam3, iParam0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_159(uParam3))
			{
				func_158("DPAD_FRIEND");
			}
			else if (func_157(uParam3))
			{
				func_158("DPAD_FRIEND");
			}
			else if (func_156(uParam3))
			{
				func_158("DPAD_CREW");
			}
			else
			{
				func_158("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_156(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_157(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 5);
}

void func_158(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_159(var uParam0)
{
	if (func_157(uParam0) && func_156(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_160(var uParam0, int iParam1)
{
	if (func_173(iParam1))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(121);
	}
	else if (func_165(iParam1))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(122);
	}
	else if (((GAMEPLAY::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && GAMEPLAY::IS_BIT_SET(Global_2423801[iParam1 /*413*/].f_410, 0))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(123);
	}
	else
	{
		if (func_161())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_161()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_163() || func_162())
		{
			return 1;
		}
	}
	return 0;
}

var func_162()
{
	return Global_2448386.f_14;
}

int func_163()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_162();
	}
	return func_164(Global_4456448.f_130782);
}

int func_164(int iParam0)
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

int func_165(int iParam0)
{
	if ((func_956(iParam0, 0, 1) && func_169()) && func_166(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_166(int iParam0, bool bParam1)
{
	return func_167(iParam0, bParam1, 1);
}

int func_167(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_168(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_63() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0, int iParam1)
{
	if (iParam0 != func_63())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_63())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_169()
{
	if (func_128(PLAYER::PLAYER_ID()) || func_172())
	{
		if (!func_170(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_170(int iParam0, int iParam1)
{
	if (func_171(iParam0) == iParam1)
	{
		return func_126(iParam0);
	}
	return 0;
}

int func_171(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/];
	}
	return -1;
}

int func_172()
{
	switch (func_101(PLAYER::PLAYER_ID()))
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

int func_173(int iParam0)
{
	if (func_161())
	{
		if (func_956(iParam0, 0, 1))
		{
			return func_119(iParam0);
		}
	}
	if ((func_956(iParam0, 0, 1) && func_169()) && func_168(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_174(char* sParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_175()
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

int func_176()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574170)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_177(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, var uParam9, int iParam10, var uParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, var uParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_176() && iParam3 < func_175())
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
					func_174("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam9);
				}
				if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_158(sParam16);
				}
				else
				{
					func_174(&(uParam2->f_1));
				}
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam11);
				if (uParam2->f_108 == 6)
				{
					func_174("");
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
				if (func_207())
				{
					func_174("");
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
						func_158(&(uParam2->f_104));
					}
					else
					{
						func_174("");
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
					func_174("");
				}
				if (uParam2->f_108 == 6)
				{
					func_174("");
				}
				else
				{
					func_174(&sParam4);
				}
				func_160(uParam2, iParam0);
				if (iParam12 == 1 || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_174("");
					func_174("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_159(uParam2))
				{
					func_158("DPAD_FRIEND");
				}
				else if (func_157(uParam2))
				{
					func_158("DPAD_FRIEND");
				}
				else if (func_156(uParam2))
				{
					func_158("DPAD_CREW");
				}
				else
				{
					func_158("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_178(int iParam0)
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

bool func_179(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_119(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_63();
}

int func_180(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_128(iParam0)) && !func_139(iParam0))
	{
		iVar0 = func_184();
	}
	iVar1 = func_183(iParam0);
	if (!iVar1 == -1)
	{
		return func_181(iVar1);
	}
	return iVar0;
}

int func_181(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_182(iParam0);
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

var func_182(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_183(int iParam0)
{
	if (!iParam0 == func_63())
	{
		if (func_179(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_64(iParam0)];
		}
	}
	return -1;
}

int func_184()
{
	return 21;
}

char* func_185(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_186(var uParam0, float fParam1, var uParam2, int iParam3)
{
	if (func_190(iParam3))
	{
		*fParam1 = (func_187(iParam3, uParam2) / 10f);
		return 1;
	}
	if (func_178(iParam3))
	{
		*fParam1 = (func_187(iParam3, uParam2) / 1000f);
		return 1;
	}
	*uParam0 = uParam2;
	return 0;
}

float func_187(int iParam0, var uParam1)
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
				return func_189(SYSTEM::TO_FLOAT(uParam1));
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(uParam1);
			}
			else
			{
				return func_188(SYSTEM::TO_FLOAT(uParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(uParam1);
}

float func_188(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_189(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_190(int iParam0)
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

int func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = func_194(iParam0);
	if (iVar0 == -1)
	{
		func_192(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_192(int iParam0, bool bParam1)
{
	if (!func_956(iParam0, 0, 1))
	{
		return;
	}
	if (func_194(iParam0) != -1)
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
	if (func_193(iParam0))
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

int func_193(int iParam0)
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

int func_194(int iParam0)
{
	int iVar0;
	
	if (!func_956(iParam0, 0, 1))
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
			func_195(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_195(int iParam0)
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
	func_196(&(Global_1379953[iVar32 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_196(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_63();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_197(int iParam0)
{
	struct<4> Var0;
	
	if (func_956(iParam0, 0, 1))
	{
		Global_2503649 = { func_65(iParam0) };
		if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (func_146(Global_2503649))
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
		if (func_201(&Global_2503649))
		{
			Global_2503579 = { func_199(iParam0) };
			func_198(&Global_2503579, &Var0);
		}
	}
	return Var0;
}

void func_198(var uParam0, var uParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

struct<35> func_199(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_200(iParam0))
	{
		return Global_1312889[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_65(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_200(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_201(var uParam0)
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

int func_202(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_127(iParam0) || func_205(iParam0)) || func_204(iParam0))
		{
			return 0;
		}
	}
	if (!func_203(iParam0))
	{
		return 0;
	}
	if ((!func_213(iParam0) && Global_2423801[iParam0 /*413*/].f_236 == -1) && !func_212(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_203(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_142, 22);
}

int func_204(int iParam0)
{
	if (func_127(iParam0))
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 8);
}

int func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

int func_206(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_17(iParam0, 0))
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

int func_207()
{
	switch (func_101(PLAYER::PLAYER_ID()))
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
	switch (func_171(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_139(PLAYER::PLAYER_ID()))
	{
		switch (func_101(PLAYER::PLAYER_ID()))
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
	if (func_170(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 && func_209(Global_1625435[iParam0 /*560*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1)
	{
		if (func_209(Global_1625435[iParam0 /*560*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_209(int iParam0)
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
	return func_210(iParam0, 0);
	return 0;
}

int func_210(int iParam0, int iParam1)
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

void func_211(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_956(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_17(iVar1, 0))
			{
				if ((func_213(iVar1) || Global_2423801[iVar1 /*413*/].f_236 != -1) || func_212(iVar1))
				{
					if (func_74(iVar1, iParam1, 0))
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

bool func_212(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196 != 0;
}

int func_213(int iParam0)
{
	if (func_956(iParam0, 0, 1))
	{
		if (func_956(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_101(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_214(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_215(bool bParam0)
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

void func_216()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1))
	{
		if (func_218())
		{
			func_217();
		}
	}
}

void func_217()
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

bool func_218()
{
	return Global_2437022.f_2704[0 /*80*/].f_1 != 0;
}

int func_219()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 0) && func_218())
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1) && func_218())
	{
		return 1;
	}
	return 0;
}

int func_220()
{
	if (func_218())
	{
		if (func_221(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_221(int iParam0)
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

int func_222()
{
	if (func_218())
	{
		if (func_223(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_223(int iParam0)
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

void func_224(int iParam0)
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

int func_225(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6)
{
	struct<4> Var0;
	var uVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	char* sVar8;
	int iVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_280(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	uVar7 = func_279();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_278())
		{
			if (func_277() > 0 && Global_1574170)
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
		if (!func_259())
		{
			func_258(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 26))
	{
		func_258(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_8(&(uParam2->f_19)))
	{
		if (func_277() == 1)
		{
			func_257(bVar6, uParam0, 0);
			func_7(&(uParam2->f_19), 0, 0);
			func_258(uParam0, uParam2, 0);
			GAMEPLAY::SET_BIT(&(Global_2524719.f_4578), 5);
		}
	}
	if (func_8(&(uParam2->f_19)) || bParam5)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::HIDE_HELP_TEXT_THIS_FRAME();
		}
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_277() == 0 && !bParam5))
		{
			func_258(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_256();
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
					func_256();
					if (iParam1 == 26 || iParam1 == 27)
					{
						UI::_0x25F87B30C382FCA7();
					}
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				UI::_CLEAR_NOTIFICATIONS_POS(uVar7);
				if (func_257(bVar6, uParam0, 0))
				{
					func_214(uParam0, 0, 0);
					uVar4 = func_254(iParam1, &(Global_4456448.f_130789), bParam4);
					Var0 = { func_252(iParam1) };
					if (bParam4)
					{
						func_249(uParam0, uVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_242(uParam0, func_246(uParam2), func_243(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar8 = func_235(uParam2);
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam6))
						{
							sVar8 = uParam6;
						}
						func_233(uParam0, sVar8, func_234(), -1);
					}
					else if (func_161())
					{
						uParam2->f_34 = Global_1574169;
						func_249(uParam0, uVar4, &Var0, 1, -1, Global_1574169, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574169;
						func_249(uParam0, uVar4, "", 0, -1, Global_1574169, 1);
					}
					else
					{
						iVar9 = func_226(iParam1);
						func_249(uParam0, uVar4, &Var0, 1, iVar9, -1, 1);
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

int func_226(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_232())
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
			if (func_231(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_230(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_229(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_227())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_227()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_59();
	}
	return func_228(Global_4456448.f_130782);
}

int func_228(int iParam0)
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

bool func_229(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 4;
}

bool func_230(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

bool func_231(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_232()
{
	return Global_4456448.f_1 == 0;
}

void func_233(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_158(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_158("");
		if (iParam3 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_234()
{
	switch (func_101(PLAYER::PLAYER_ID()))
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

char* func_235(var uParam0)
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
	switch (func_101(PLAYER::PLAYER_ID()))
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
			if (func_238())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_237(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_237(1))
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
			if (func_236(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_236(int iParam0)
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

bool func_237(bool bParam0)
{
	return func_166(PLAYER::PLAYER_ID(), bParam0);
}

bool func_238()
{
	return (func_241() && func_239(func_240()));
}

bool func_239(int iParam0)
{
	return func_168(iParam0, 1);
}

int func_240()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_35;
}

bool func_241()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148;
}

void func_242(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_158(uParam1);
		}
		else if (func_171(PLAYER::PLAYER_ID()) == 133)
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
		func_158("");
		if (iParam3 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_243(var uParam0)
{
	int iVar0;
	
	iVar0 = func_171(PLAYER::PLAYER_ID());
	if (func_245())
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
			switch (func_244())
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

int func_244()
{
	if (func_171(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2524719.f_4804;
	}
	return -1;
}

bool func_245()
{
	return Global_1589620;
}

char* func_246(var uParam0)
{
	int iVar0;
	
	iVar0 = func_171(PLAYER::PLAYER_ID());
	if (func_245())
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
			if (func_248() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_248() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_244())
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
			if (func_247() == 1)
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

int func_247()
{
	return Global_2524719.f_4807;
}

int func_248()
{
	if (func_171(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2524719.f_4802;
	}
	return -1;
}

void func_249(var uParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_174(uParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam1);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_158(uParam1);
		}
		if (func_278() && iParam6)
		{
			if (func_251())
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
			func_158(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (func_250(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(166);
			}
			else if (func_59())
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_250(int iParam0)
{
	if (func_231(iParam0) || func_230(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_251()
{
	return Global_1574170;
}

struct<4> func_252(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_253(PLAYER::PLAYER_ID()) || func_229(PLAYER::PLAYER_ID()))
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
	if (func_161() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_38, 16);
	}
	return Var0;
}

bool func_253(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 5;
}

var func_254(int iParam0, var uParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_161() || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1)))
	{
		uVar0 = func_255();
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

char* func_255()
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

void func_256()
{
	Global_37027 = 1;
}

bool func_257(bool bParam0, var uParam1, bool bParam2)
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

void func_258(var uParam0, var uParam1, bool bParam2)
{
	GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574168 = 0;
	func_150();
	Global_1574167 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_8(&(uParam1->f_19)))
		{
			func_151(&(uParam1->f_19));
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

int func_259()
{
	if (func_276())
	{
		return 0;
	}
	if (func_275())
	{
		return 0;
	}
	if (!func_273())
	{
		return 0;
	}
	if (!func_271())
	{
		return 0;
	}
	if (func_270(8, -1))
	{
		return 0;
	}
	if (func_277() == 2)
	{
		return 0;
	}
	if (Global_2524719.f_4530)
	{
		return 0;
	}
	if (func_269())
	{
		return 0;
	}
	else if (!func_266(PLAYER::PLAYER_ID(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_265(1) || func_263(1)) || Global_17228.f_124) || Global_17228)
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_262() && Global_1686218 == 2)
	{
		return 0;
	}
	if (func_260(PLAYER::PLAYER_ID()) && !func_262())
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
	if (func_79(0))
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

int func_260(int iParam0)
{
	if (func_17(iParam0, 0))
	{
		return 1;
	}
	if (func_261())
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

bool func_261()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

bool func_262()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_30, 12) && GAMEPLAY::IS_BIT_SET(Global_1686219, 0));
}

int func_263(bool bParam0)
{
	if (CONTROLS::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_264(PLAYER::PLAYER_PED_ID()))
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

int func_264(var uParam0)
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

bool func_265(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

int func_266(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_267(iParam0))
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

bool func_267(int iParam0)
{
	return func_268(iParam0);
}

var func_268(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

bool func_269()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_196 != 0;
}

bool func_270(int iParam0, int iParam1)
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

int func_271()
{
	if (func_272() == 0)
	{
		return 1;
	}
	return 0;
}

int func_272()
{
	return Global_1312466.f_18;
}

int func_273()
{
	if (func_274())
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

bool func_274()
{
	return Global_1312438;
}

bool func_275()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 5;
}

bool func_276()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17367.f_5873 + 100;
}

int func_277()
{
	return Global_1368245.f_68;
}

int func_278()
{
	if (Global_1574169 > 16)
	{
		return 1;
	}
	return 0;
}

float func_279()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_280(int iParam0)
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

int func_281()
{
	if (func_282(PLAYER::PLAYER_ID()))
	{
		return Global_1316740;
	}
	return 0;
}

int func_282(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_17(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_283()
{
	if (func_281())
	{
		return 1;
	}
	if (func_204(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_245())
	{
		return 1;
	}
	if (func_128(PLAYER::PLAYER_ID()))
	{
		switch (func_171(PLAYER::PLAYER_ID()))
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
				if (!func_284(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_284(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_284(PLAYER::PLAYER_ID()))
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

bool func_284(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 4);
}

int func_285(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_128(PLAYER::PLAYER_ID()) && !func_139(PLAYER::PLAYER_ID())) && !func_170(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_102(PLAYER::PLAYER_ID(), 0) && func_139(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_130(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_286()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar0 = func_287();
	}
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Local_982[iVar0 /*14*/].f_1, 1);
	}
	return 0;
}

int func_287()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = -1;
	uVar1 = Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_655;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uVar1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(uVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

void func_288()
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
				func_289(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_289(int iParam0)
{
	struct<4> Var0;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	struct<14> Var16;
	int iVar30;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		iVar30 = 0;
		while (iVar30 < 4)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_113, iVar30))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6, iVar30))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_110.f_109, iVar30))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5, iVar30))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar30 /*26*/].f_2))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_110.f_2[iVar30 /*26*/].f_2)))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_110.f_2[iVar30 /*26*/].f_2))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
														{
															if (func_856() == Local_110.f_118)
															{
																GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_5), iVar30);
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
						else if (ENTITY::IS_ENTITY_A_PED(Var0))
						{
							iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
							if (iVar12 == NETWORK::NET_TO_PED(Local_110.f_2[iVar30 /*26*/].f_1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
								{
									if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
									{
										uVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
										if (PED::IS_PED_A_PLAYER(uVar11))
										{
											iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar11);
											if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar14))
											{
												if (Var0.f_3)
												{
													if (iVar14 == PLAYER::PLAYER_ID())
													{
														Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11++;
														GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_6), iVar30);
														Var16.f_2 = 702987651;
														Var16.f_10 = PLAYER::PLAYER_ID();
														func_295(Var16, func_296(0));
														func_290("HUNT_TCKP", 1);
													}
												}
											}
											else if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar30))
											{
												if (Var0.f_3)
												{
													iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar11);
													GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar30);
												}
											}
										}
										else if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar30))
										{
											if (Var0.f_3)
											{
												GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar30);
											}
										}
									}
									else if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar30))
									{
										if (Var0.f_3)
										{
											GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar30);
										}
									}
								}
								else if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7, iVar30))
								{
									if (Var0.f_3)
									{
										GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_7), iVar30);
									}
								}
							}
						}
					}
				}
			}
			iVar30++;
		}
	}
	if (func_286())
	{
		if (!func_105(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0))
				{
					iVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
					if (PED::IS_PED_A_PLAYER(iVar12))
					{
						iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar12);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								uVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(uVar11))
								{
									iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar11);
									if (iVar14 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar13))
										{
											if (func_179(iVar13, 1))
											{
												if (Local_110.f_118 > -1)
												{
													iVar15 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_118));
													if (func_74(iVar13, iVar15, 1))
													{
														if (!func_133())
														{
															func_129(0);
															func_122();
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

int func_290(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_291(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_291(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_294() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_292(iParam2);
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

int func_292(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1663381 - 1))
	{
		if (iParam0 > Global_1663381.f_5[iVar0 /*53*/].f_1)
		{
			func_293(iVar0);
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

void func_293(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1663381.f_5[iVar0 /*53*/] = { Global_1663381.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_294()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

void func_295(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 713068249;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Param0, 14, iParam14);
	}
}

int func_296(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_956(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					GAMEPLAY::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_297()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_1431, 14))
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_1431, 14);
		}
		return;
	}
	uVar0 = Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_655;
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 14))
	{
		if (Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 != 0)
		{
			Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1 = 0;
		}
		GAMEPLAY::SET_BIT(&uLocal_1431, 14);
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 15))
	{
		GAMEPLAY::SET_BIT(&uLocal_1431, 15);
		func_785();
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uVar0))
		{
			uVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(uVar0);
			iVar2 = uVar1;
			iVar3 = Local_982[iVar2 /*14*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_741();
					func_723();
					func_708();
					break;
				
				case 2:
					func_298();
					break;
				
				case 3:
					func_869();
					break;
				}
			}
	}
}

void func_298()
{
	struct<20> Var0;
	int iVar21;
	int iVar22;
	char* sVar23;
	int iVar24;
	int iVar25;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar21 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar22 = PLAYER::PLAYER_ID();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar21 = func_287();
		iVar22 = Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_655;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_982[iVar21 /*14*/].f_1, 4))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 9))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1))
			{
				if (iVar21 == Local_110.f_118 || func_856() == Local_110.f_118)
				{
					if (func_130(iVar22) >= 2)
					{
						sVar23 = func_707(iVar22);
						iVar24 = func_706(iVar22);
						func_704(87, "GB_WINNER", "BIGM_HUNTD", sVar23, iVar24, 0, -1, -1, -1, 2, -1);
					}
					if (iVar22 == PLAYER::PLAYER_ID())
					{
						if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 6))
						{
							func_603(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							GAMEPLAY::SET_BIT(&uLocal_1431, 6);
						}
						Var0 = func_602();
						Var0.f_1 = func_601();
						func_415(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(iVar22);
						uLocal_1725 = PLAYER::GET_MAX_WANTED_LEVEL();
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						GAMEPLAY::SET_BIT(&uLocal_1431, 17);
						func_7(&uLocal_1726, 0, 0);
					}
				}
				else if (func_286())
				{
					if (func_179(iVar22, 1))
					{
						if (func_130(iVar22) >= 2)
						{
							sVar23 = func_707(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119));
							iVar24 = func_706(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119));
							func_704(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar23, iVar24, 0, -1, -1, -1, 2, -1);
						}
						if (iVar22 == PLAYER::PLAYER_ID())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 6))
							{
								func_603(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								GAMEPLAY::SET_BIT(&uLocal_1431, 6);
							}
							if (func_123(iVar22))
							{
								Var0 = func_414();
								Var0.f_1 = func_413();
							}
							func_415(166, 0, &Var0, 0);
						}
					}
					else
					{
						if (func_130(iVar22) >= 2)
						{
							sVar23 = func_707(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119));
							iVar24 = func_706(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119));
							func_704(88, "GB_WORK_OVER", "BIGM_HUNTD", sVar23, iVar24, 0, -1, -1, -1, 2, -1);
						}
						if (iVar22 == PLAYER::PLAYER_ID())
						{
							if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 6))
							{
								func_603(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								GAMEPLAY::SET_BIT(&uLocal_1431, 6);
							}
							if (func_123(iVar22))
							{
								Var0 = func_414();
								Var0.f_1 = func_413();
							}
							func_415(166, 0, &Var0, 0);
						}
					}
				}
				GAMEPLAY::SET_BIT(&uLocal_1431, 9);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 3))
			{
				iVar25 = (4 - Local_110.f_115);
				if (iVar21 == Local_110.f_118 || func_856() == Local_110.f_118)
				{
					if (func_130(iVar22) >= 2)
					{
						sVar23 = func_407();
						iVar24 = func_706(iVar22);
						func_704(88, "GB_WORK_OVER", "BIGM_HUNFD", sVar23, iVar24, 0, -1, -1, -1, 2, -1);
					}
					if (iVar22 == PLAYER::PLAYER_ID())
					{
						if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 6))
						{
							func_603(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							GAMEPLAY::SET_BIT(&uLocal_1431, 6);
						}
						Var0 = func_602();
						Var0.f_1 = func_601();
						func_415(166, 0, &Var0, 0);
					}
				}
				else
				{
					if (func_130(iVar22) >= 2)
					{
						sVar23 = func_707(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119));
						iVar24 = func_706(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119));
						if (iVar25 == 1)
						{
							func_704(87, "GB_WINNER", "BIGM_HUN1S", sVar23, iVar24, 0, iVar25, -1, -1, 2, -1);
						}
						else if (iVar25 > 1)
						{
							func_704(87, "GB_WINNER", "BIGM_HUNRS", sVar23, iVar24, 0, iVar25, -1, -1, 2, -1);
						}
					}
					if (iVar22 == PLAYER::PLAYER_ID())
					{
						if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 6))
						{
							func_603(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							GAMEPLAY::SET_BIT(&uLocal_1431, 6);
						}
						if (func_123(iVar22))
						{
							Var0 = func_414();
							Var0.f_1 = func_413();
						}
						func_415(166, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				GAMEPLAY::SET_BIT(&uLocal_1431, 9);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 5))
			{
				if (func_366())
				{
					if (func_855())
					{
						if (func_130(iVar22) >= 2)
						{
						}
					}
					else if (func_130(iVar22) >= 2)
					{
						func_332(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1);
					}
				}
				if (iVar22 == PLAYER::PLAYER_ID())
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 6))
					{
						func_603(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
						GAMEPLAY::SET_BIT(&uLocal_1431, 6);
					}
					func_415(166, 0, &Var0, 0);
				}
				GAMEPLAY::SET_BIT(&uLocal_1431, 9);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_1431, 9))
		{
			func_785();
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1432, 8))
			{
				func_318();
				func_73();
				GAMEPLAY::SET_BIT(&uLocal_1432, 8);
			}
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 10))
			{
			}
			if (func_299(&uLocal_1439, 0, 0))
			{
				if (iVar21 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 4);
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(uLocal_1431, 17))
			{
				if (func_6(&uLocal_1726, 10000, 0))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(uLocal_1725);
					GAMEPLAY::CLEAR_BIT(&uLocal_1431, 17);
				}
			}
		}
	}
}

int func_299(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_106(29);
	if ((*uParam0 > 0 && !func_218()) && func_130(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_315())
		{
			func_314();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_8(&(uParam0->f_3)))
			{
				func_7(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 2);
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&(Global_2524719.f_4574), 0);
					func_7(&(uParam0->f_5), 0, 0);
				}
				func_7(&(uParam0->f_1), 0, 0);
				func_313(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_8(&(uParam0->f_5)))
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
				func_306(iParam2);
				func_313(uParam0, 2);
			}
			break;
		
		case 2:
			func_306(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_300(func_301(0)))
				{
					UI::CLEAR_HELP(1);
				}
				func_313(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4574), 1);
				GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 2);
				func_313(uParam0, 4);
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

bool func_300(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_301(int iParam0)
{
	if (((func_304(PLAYER::PLAYER_ID()) || func_303(PLAYER::PLAYER_ID())) || func_238()) || iParam0)
	{
		if (func_303(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_209(func_302()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_302()
{
	return Global_1643357;
}

bool func_303(int iParam0)
{
	return func_210(func_101(iParam0), 0);
}

bool func_304(int iParam0)
{
	return func_305(func_101(iParam0));
}

int func_305(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148 && func_168(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_35, 1))
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

void func_306(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 0))
	{
		if (((((((((((!UI::IS_RADAR_HIDDEN() && !GAMEPLAY::IS_BIT_SET(Global_2524719.f_784, 2)) && func_956(PLAYER::PLAYER_ID(), 1, 1)) && !Global_68494) && !Global_53362) && !CAM::IS_SCREEN_FADED_OUT()) && !func_105(PLAYER::PLAYER_ID(), 22)) && func_130(PLAYER::PLAYER_ID()) != 0) && !func_311(func_312())) && !func_304(PLAYER::PLAYER_ID())) && !func_310(func_101(PLAYER::PLAYER_ID()))) && !func_309(func_101(PLAYER::PLAYER_ID())))
		{
			GAMEPLAY::SET_BIT(&(Global_2524719.f_4574), 1);
			func_308(func_301(iParam0), -1);
			func_307(1);
			GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4574), 0);
		}
	}
}

void func_307(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_237(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_218())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_308(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_309(int iParam0)
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

int func_310(int iParam0)
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

int func_311(int iParam0)
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

int func_312()
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

void func_313(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_314()
{
	Global_2459730 = 1;
}

int func_315()
{
	if (((((((func_101(PLAYER::PLAYER_ID()) == 170 || func_101(PLAYER::PLAYER_ID()) == 219) || func_101(PLAYER::PLAYER_ID()) == 221) || func_101(PLAYER::PLAYER_ID()) == 220) || func_101(PLAYER::PLAYER_ID()) == 216) || func_101(PLAYER::PLAYER_ID()) == 215) || func_101(PLAYER::PLAYER_ID()) == 214) || func_101(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_316(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_316(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_317(Global_2423801[iParam0 /*413*/].f_309.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_317(int iParam0)
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

void func_318()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (UI::DOES_BLIP_EXIST(uLocal_1446[iVar0]))
		{
			UI::REMOVE_BLIP(&(uLocal_1446[iVar0]));
		}
		iVar0++;
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1431, 18))
	{
		func_331(1);
		GAMEPLAY::CLEAR_BIT(&uLocal_1431, 18);
	}
	func_328();
	func_319();
}

void func_319()
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 7))
	{
		GAMEPLAY::SET_BIT(&uLocal_1431, 7);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iVar0))
					{
						func_326(iVar1, 432, 0, 0);
						func_320(iVar1, func_325(iLocal_1723), 0, 0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_320(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_322(iParam0))
	{
		return;
	}
	if (func_321(&(Global_2415861.f_614[iParam0]), &(Global_2415861.f_977[iParam0]), &(Global_2415861.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_449[iParam0] = uParam1;
		}
	}
}

int func_321(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
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

int func_322(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 1;
	}
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_323())
	{
		return 1;
	}
	return 0;
}

int func_323()
{
	switch (func_324())
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

int func_324()
{
	return Global_25459;
}

int func_325(int iParam0)
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

void func_326(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_322(iParam0))
	{
		return;
	}
	if (func_321(&(Global_2415861.f_581[iParam0]), &(Global_2415861.f_944[iParam0]), &(Global_2415861.f_385), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_416[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_327();
		}
	}
}

void func_327()
{
	Global_2415861.f_1508 = 1;
}

void func_328()
{
	if (GAMEPLAY::IS_BIT_SET(uLocal_1431, 16))
	{
		func_84();
		func_329();
		GAMEPLAY::CLEAR_BIT(&uLocal_1431, 16);
	}
}

void func_329()
{
	if (Global_2413681.f_6 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		func_330();
	}
}

void func_330()
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

void func_331(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_132())
		{
			if (func_956(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 0);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 0);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::_0x1B857666604B1A74(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_956(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::_0x1B857666604B1A74(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
		}
	}
}

int func_332(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	func_365(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_333(&Var0);
}

int func_333(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437022.f_3026)
		{
			return 0;
		}
	}
	func_343(uParam0, uParam0->f_17);
	func_342(uParam0);
	if (func_59())
	{
		func_342(uParam0);
	}
	if (func_341(uParam0->f_1))
	{
		func_334();
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
				func_334();
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
				if (func_221(Global_2437022.f_2704[iVar0 /*80*/].f_1))
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

void func_334()
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
	func_335();
	if (bVar0)
	{
		Global_71473 = 0;
	}
}

void func_335()
{
	Global_2437022.f_3028 = 0;
	Global_2437022.f_3028.f_578 = 0;
	func_339(&(Global_2437022.f_3028.f_1));
	Global_2437022.f_3028.f_1.f_1 = 0;
	func_336(&(Global_2437022.f_3028.f_1));
}

void func_336(var uParam0)
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
				if (CAM::IS_SCREEN_FADED_OUT() && !func_338(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_337(0);
}

void func_337(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

int func_338(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71453, 0);
}

void func_339(var uParam0)
{
	func_340(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_340(var uParam0)
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

int func_341(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_342(var uParam0)
{
	if (func_223(uParam0->f_1))
	{
		uParam0->f_72 = func_184();
	}
}

void func_343(var uParam0, int iParam1)
{
	if (func_223(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_63() || !func_956(iParam1, 0, 1))
	{
		return;
	}
	if (func_221(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_344(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_344(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_260(iParam0) && !bParam4)
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
	if (((func_260(PLAYER::PLAYER_ID()) || (func_364() && func_363())) && !GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 31)) && !bParam4)
	{
		uVar1 = func_362();
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			if (PED::IS_PED_A_PLAYER(uVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1) != -1)
				{
					if (func_956(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_125859[iParam1] != -1)
							{
								return func_360(iParam1, iParam0, 0);
							}
							else
							{
								return func_355(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_355(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_125859[iParam1] != -1)
				{
					return func_360(iParam1, iParam0, 0);
				}
				else
				{
					return func_345(0, -1, 0);
				}
			}
			else
			{
				return func_345(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_125859[iParam1] != -1)
		{
			return func_360(iParam1, iParam0, 0);
		}
		else
		{
			return func_355(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_355(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_345(bool bParam0, int iParam1, bool bParam2)
{
	return func_346(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_346(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_353() && Global_1378988.f_1)
	{
		if (bParam1)
		{
			return func_352(iParam2, iVar0);
		}
		else
		{
			return func_352(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_351(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_350(1);
				}
				else
				{
					return func_350(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_347(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_347(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_350(1);
	}
	return func_350(0);
}

int func_347(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_349(iParam0, iParam1, iParam3);
	if (func_348(Global_4456448.f_130782, 1))
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

int func_348(int iParam0, bool bParam1)
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

int func_349(int iParam0, int iParam1, int iParam2)
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
			if (!func_351(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_350(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_351(int iParam0, int iParam1, int iParam2)
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

int func_352(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_349(iParam1, iParam0, 4);
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

int func_353()
{
	if (func_354() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

var func_354()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_146776, 12);
}

int func_355(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_358(1))
			{
				iVar3 = func_183(iParam0);
				if (!iVar3 == -1)
				{
					return func_181(iVar3);
				}
			}
			if ((func_357(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_351(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_350(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_356(1);
			}
			else
			{
				return func_346(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574393 || Global_1574384) || Global_1589747[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
			{
				return func_350(1);
			}
			else
			{
				return func_346(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574388 && Global_1573886.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_183(iParam0);
	if (!iVar4 == -1)
	{
		return func_181(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_356(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_357(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_358(int iParam0)
{
	if ((func_162() || func_359()) || (func_59() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_359()
{
	return Global_2448386.f_15;
}

int func_360(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969023.f_13[iParam0];
	if (func_358(1))
	{
		iVar2 = func_183(iParam1);
		if (!iVar2 == -1)
		{
			return func_181(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_104[iParam0 /*10693*/].f_5532[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_63())
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
			iVar0 = func_346(iParam1, !bParam2, iParam0, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_361(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26) && !func_351(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_356(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_361(int iParam0)
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

var func_362()
{
	return Global_2359302.f_2;
}

var func_363()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 4);
}

var func_364()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 14);
}

void func_365(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_63();
	uParam1->f_18 = func_63();
	uParam1->f_19 = func_63();
	uParam1->f_20 = func_63();
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

int func_366()
{
	int iVar0;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_367(1, 1, 1))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (func_133())
		{
			if (GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
			}
			return 0;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 6))
		{
			GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 6);
		}
	}
	else
	{
		iVar0 = func_287();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_982[iVar0 /*14*/].f_1, 6))
		{
			return 0;
		}
	}
	return 1;
}

int func_367(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_406(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_117(PLAYER::PLAYER_ID(), 21))
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
	if (!func_203(PLAYER::PLAYER_ID()))
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
	if (func_405(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_404())
	{
		return 0;
	}
	if (func_275())
	{
		return 0;
	}
	if (func_403())
	{
		return 0;
	}
	if (func_269())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_267(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_271())
	{
		return 0;
	}
	if (func_117(PLAYER::PLAYER_ID(), 0) || func_117(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_117(PLAYER::PLAYER_ID(), 12) || func_117(PLAYER::PLAYER_ID(), 14)) || func_117(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_399(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_374())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_373())
		{
			return 0;
		}
	}
	if (Global_1654543)
	{
		return 0;
	}
	if (func_372(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_371())
	{
		return 0;
	}
	if (func_370(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_369())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 4))
	{
		return 0;
	}
	if (func_368(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_368(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_261.f_4 != 0 || Global_2423801[iParam0 /*413*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_369()
{
	return Global_1668658.f_3359 != -1;
}

int func_370(int iParam0)
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

int func_371()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_372(int iParam0)
{
	if (!func_956(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_35;
}

bool func_373()
{
	return Global_93284.f_328 > 0;
}

int func_374()
{
	int iVar0;
	
	iVar0 = func_101(PLAYER::PLAYER_ID());
	if (((func_398(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_24) || func_397(PLAYER::PLAYER_ID())) || func_396(PLAYER::PLAYER_ID())) || func_391(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_389(PLAYER::PLAYER_ID()))
	{
		if (func_388(iVar0) || func_387(iVar0))
		{
			return 1;
		}
	}
	if (func_316(PLAYER::PLAYER_ID()))
	{
		if (func_387(iVar0))
		{
			return 1;
		}
	}
	if (func_386(PLAYER::PLAYER_ID()))
	{
		if (func_385(iVar0))
		{
			return 1;
		}
	}
	if (func_384(PLAYER::PLAYER_ID()))
	{
		if (func_383(iVar0))
		{
			return 1;
		}
	}
	if (func_382(PLAYER::PLAYER_ID()))
	{
		if (func_381(iVar0))
		{
			return 1;
		}
	}
	if (func_380(PLAYER::PLAYER_ID()))
	{
		if (func_379(iVar0))
		{
			return 1;
		}
	}
	if (func_378(PLAYER::PLAYER_ID(), 0))
	{
		if (func_377(iVar0))
		{
			if (func_375(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_375(int iParam0)
{
	if (func_376(iParam0) != func_63())
	{
		return func_376(iParam0) == func_64(iParam0);
	}
	return 0;
}

int func_376(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_35;
}

int func_377(int iParam0)
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

int func_378(int iParam0, bool bParam1)
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
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_63())
			{
				return func_317(Global_2423801[iParam0 /*413*/].f_309.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_379(int iParam0)
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

int func_380(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_317(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_381(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_382(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_317(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_383(int iParam0)
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

int func_384(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_317(Global_2423801[iParam0 /*413*/].f_309.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_385(int iParam0)
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

int func_386(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_317(Global_2423801[iParam0 /*413*/].f_309.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_387(int iParam0)
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

int func_388(int iParam0)
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

int func_389(int iParam0)
{
	if (func_390(Global_1589747[iParam0 /*790*/].f_273.f_24, -1))
	{
		return 1;
	}
	return 0;
}

int func_390(int iParam0, int iParam1)
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

int func_391(int iParam0)
{
	if (func_392(Global_1589747[iParam0 /*790*/].f_273.f_24, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_393(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_393(PLAYER::PLAYER_ID(), 0))
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

int func_393(int iParam0, bool bParam1)
{
	if (Global_1589590 != func_63())
	{
		if (!func_395(Global_1589590))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1589590)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2423801[Global_1589590 /*413*/].f_195, 24) || func_394(Global_1589590))
				{
					return 1;
				}
			}
		}
	}
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 24);
}

int func_394(int iParam0)
{
	if (iParam0 != func_63())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 9);
	}
	return 0;
}

int func_395(int iParam0)
{
	if (iParam0 != func_63())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 2);
	}
	return 0;
}

int func_396(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_317(Global_2423801[iParam0 /*413*/].f_309.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_397(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_317(Global_2423801[iParam0 /*413*/].f_309.f_4) == 0;
			}
		}
	}
	return 0;
}

int func_398(int iParam0)
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

int func_399(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
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
		if (func_397(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_316(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_396(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_386(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_384(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_382(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_402(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_380(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_401(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_378(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_400(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_400(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_317(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_401(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_317(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_402(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (func_956(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_63())
			{
				return func_317(Global_2423801[iParam0 /*413*/].f_309.f_4) == 8;
			}
		}
	}
	return 0;
}

bool func_403()
{
	return Global_1312857;
}

bool func_404()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 0);
}

int func_405(int iParam0)
{
	if (func_266(iParam0, 1))
	{
		if (Global_1589747[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_406(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_5, iParam1);
}

char* func_407()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_64(PLAYER::PLAYER_ID());
	if (iVar0 != func_63())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_105(iVar0, 28) || func_105(PLAYER::PLAYER_ID(), 28)) || func_412(iVar0)) && !func_411(iVar0))
			{
				return func_409(iVar0, 0);
			}
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_409(iVar0, 0);
			}
		}
		uVar1 = func_408(&(Global_1625435[iVar0 /*560*/].f_11.f_99));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			return func_409(iVar0, 0);
		}
		else
		{
			return uVar1;
		}
	}
	return "";
}

var func_408(var uParam0)
{
	return uParam0;
}

var func_409(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_166(iParam0, 1))
		{
			return func_410();
		}
	}
	return UI::_GET_LABEL_TEXT("GB_REST_ACC");
}

var func_410()
{
	return UI::_GET_LABEL_TEXT("GB_REST_ACCM");
}

int func_411(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_65(iParam0) };
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

int func_412(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_63())
	{
		Var0 = { func_65(iParam0) };
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

int func_413()
{
	return ((4 - Local_110.f_115) * Global_262145.f_15391);
}

int func_414()
{
	return ((4 - Local_110.f_115) * Global_262145.f_15390);
}

void func_415(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	
	func_599(iParam0, &fVar2, &fVar3);
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
			iVar1 = (iVar1 + func_598(iParam0, uParam2->f_13));
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
			iVar0 = (iVar0 + func_597(iParam0));
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
	if (func_595(iParam0))
	{
		if (bParam1)
		{
			if (func_594(PLAYER::PLAYER_ID()) > 0)
			{
				func_593();
			}
			else
			{
				func_592();
			}
		}
		else
		{
			func_591();
		}
	}
	func_575(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_573(iParam0, uParam2, &iVar0, &iVar5);
	func_551(iParam0, uParam2, &iVar0, &iVar5);
	func_537(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_520(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2524719.f_4883.f_373 = uVar4;
	}
	else
	{
		Global_2524719.f_4883.f_373 = iVar5;
	}
	iVar8 = func_240();
	if (iVar8 != func_63() && iParam0 != 148)
	{
		if (func_179(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_74(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_509(&iVar0, 1);
			}
		}
	}
	func_505(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1666806.f_10 = iVar1;
		func_504();
		func_461(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1666806.f_9 = iVar0;
		iVar13 = func_460();
		if (iVar13 != func_63())
		{
			func_459(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_458(1);
		if (iParam0 == 168)
		{
			if (!func_457())
			{
				unk_0xECA658CE2A4E5A72(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_456())
			{
				if (!func_457())
				{
					Var15 = { func_455() };
					unk_0x8586789730B10CAF(iVar0, GAMEPLAY::GET_HASH_KEY(func_454(Var15)), func_453(Var15), iVar5);
				}
			}
			else if (func_457())
			{
				func_441(-856006867, iVar0, &iVar17, 0, 1, 0);
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
			if (func_440())
			{
				if (!func_457())
				{
					unk_0x8586789730B10CAF(iVar0, GAMEPLAY::GET_HASH_KEY(func_454(func_439(PLAYER::PLAYER_ID()))), 5, iVar5);
				}
			}
			else if (func_457())
			{
				func_441(-856006867, iVar0, &iVar18, 0, 1, 0);
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
			if (func_440())
			{
				if (!func_457())
				{
					iVar19 = func_435(uParam2->f_16, iVar5);
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
			else if (func_457())
			{
				func_441(463142405, iVar0, &iVar21, 0, 1, 0);
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
			if (func_457())
			{
				func_441(1407278493, iVar0, &iVar22, 0, 1, 0);
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
			if (func_440())
			{
				if (!func_457())
				{
					unk_0x7C5AFBDB4A63099E(iVar0, uParam2->f_20, iVar5);
				}
			}
			else if (func_457())
			{
				func_441(-856006867, iVar0, &iVar23, 0, 1, 0);
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
			if (func_457())
			{
				func_441(-961034881, iVar0, &iVar24, 0, 1, 0);
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
			if (func_457())
			{
				func_441(1135468152, iVar0, &iVar25, 0, 1, 0);
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
			if (func_457())
			{
				func_441(-634726636, iVar0, &iVar26, 0, 1, 0);
				Global_4262927[iVar26 /*80*/].f_6 = uVar11;
				Global_4262927[iVar26 /*80*/].f_7 = uVar12;
				Global_4262927[iVar26 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xB509D8DC0549312F(iVar0);
			}
		}
		else if (func_457())
		{
			func_441(-856006867, iVar0, &iVar27, 0, 1, 0);
			Global_4262927[iVar27 /*80*/].f_6 = uVar11;
			Global_4262927[iVar27 /*80*/].f_7 = uVar12;
			Global_4262927[iVar27 /*80*/].f_8 = bVar14;
		}
		else
		{
			unk_0x0CB1BE0633C024A8(uVar11, uVar12, iVar0, bVar14);
		}
		func_434(iParam0, iVar0);
		if (func_433(iParam0))
		{
			if (func_432(iParam0) > -1)
			{
				func_431(func_432(iParam0), iVar0);
			}
		}
		Global_2460387 = iVar0;
		func_430(&Global_2458654, 0, 0);
	}
	if (func_120(PLAYER::PLAYER_ID()) || func_139(PLAYER::PLAYER_ID()))
	{
		func_421(iParam0);
	}
	if (func_305(iParam0))
	{
		Global_1666824.f_13 = iVar0;
		Global_1666824.f_14 = iVar1;
	}
	if (func_310(iParam0))
	{
		Global_1666878.f_13 = iVar0;
		Global_1666878.f_14 = iVar1;
	}
	if (func_385(iParam0))
	{
		Global_1666941.f_12 = iVar0;
		Global_1666941.f_13 = iVar1;
	}
	if (func_383(iParam0))
	{
		Global_1666985.f_12 = iVar0;
		Global_1666985.f_13 = iVar1;
	}
	if (func_381(iParam0))
	{
		Global_1667039.f_12 = iVar0;
		Global_1667039.f_13 = iVar1;
	}
	if (func_309(iParam0))
	{
		if (func_420(iParam0))
		{
			Global_1667120.f_12 = iVar0;
			Global_1667120.f_13 = iVar1;
		}
		else if (func_416(iParam0))
		{
			Global_1667173.f_12 = iVar0;
			Global_1667173.f_13 = iVar1;
		}
	}
}

int func_416(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_417(func_418(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_417(int iParam0)
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

int func_418(int iParam0)
{
	if (func_101(iParam0) == 237 || func_101(iParam0) == 250)
	{
		return func_419(iParam0);
	}
	return -1;
}

int func_419(int iParam0)
{
	if (func_102(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_176;
	}
	return -1;
}

int func_420(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_421(int iParam0)
{
	if (func_429(PLAYER::PLAYER_ID()) && func_456())
	{
		if (func_388(iParam0))
		{
			func_424(8657, -1);
		}
		else if (func_423(iParam0))
		{
			func_424(8659, -1);
		}
		else if (func_210(iParam0, 1))
		{
			func_424(8660, -1);
		}
		else if (func_422(iParam0))
		{
			func_424(8661, -1);
		}
	}
}

int func_422(int iParam0)
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

int func_423(int iParam0)
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

void func_424(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_428(iParam0, func_138(iParam1), 0);
	iVar0++;
	if (!func_427(iParam0))
	{
		func_426(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_425(iParam0, iVar0, iParam1, 1);
	}
}

void func_425(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_138(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_138(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_138(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_138(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_138(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_138(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_138(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_138(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_138(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_138(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_138(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_138(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_138(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_138(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_138(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_138(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_138(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_138(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_138(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_138(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_138(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_138(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_138(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_138(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_138(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_138(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_138(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_138(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_138(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_138(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_138(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_138(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_138(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_426(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_138(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_427(int iParam0)
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

int func_428(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_138(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_429(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_115, 14);
}

void func_430(var uParam0, bool bParam1, bool bParam2)
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

void func_431(int iParam0, int iParam1)
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

int func_432(int iParam0)
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

int func_433(int iParam0)
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

void func_434(int iParam0, int iParam1)
{
	if (func_429(PLAYER::PLAYER_ID()) && func_456())
	{
		if (func_388(iParam0) && iParam1 > 0)
		{
			func_426(8658, (func_428(8658, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

var func_435(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_438(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_436(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_436(int iParam0, int iParam1)
{
	return (func_437(iParam0) * iParam1);
}

int func_437(int iParam0)
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

float func_438(int iParam0, var uParam1)
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

int func_439(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_273.f_174[5 /*12*/];
}

bool func_440()
{
	return func_119(PLAYER::PLAYER_ID());
}

void func_441(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_457())
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
				func_442(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_442(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_442(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_442(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_442(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_457())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_19()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_449(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_448(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_443(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_443(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_444(iParam0);
	}
}

void func_444(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_457())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_447(iParam0))
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
		func_445(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_445(var uParam0)
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
	func_446(&(uParam0->f_13));
	func_446(&(uParam0->f_13.f_13));
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

void func_446(var uParam0)
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

int func_447(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_448(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_449(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_457())
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
				func_450(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_450(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
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
	iVar35 = func_452(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_451();
		unk_0xA40CC53DF8E50837(1, &vVar0, 35, iVar35);
	}
}

void func_451()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_452(int iParam0)
{
	var uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_453(int iParam0)
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

char* func_454(int iParam0)
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

struct<2> func_455()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_188;
}

bool func_456()
{
	return func_239(PLAYER::PLAYER_ID());
}

int func_457()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

bool func_458(bool bParam0)
{
	return func_179(PLAYER::PLAYER_ID(), bParam0);
}

void func_459(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1625435[iParam0 /*560*/].f_11.f_8[0];
	*uParam2 = Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_460()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11;
}

int func_461(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_462(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_462(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_472(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_468(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_463(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_463(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_466(iParam0, 1) };
	if (iParam0 == func_465(PLAYER::PLAYER_PED_ID()))
	{
		func_464(1);
	}
	func_468(vVar0, iParam1, 0, sParam2, uParam3);
}

void func_464(int iParam0)
{
	Global_2437022.f_1886 = iParam0;
}

int func_465(var uParam0)
{
	return uParam0;
}

Vector3 func_466(int iParam0, bool bParam1)
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
	if (iParam0 == func_467(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_467(var uParam0)
{
	return uParam0;
}

void func_468(vector3 vParam0, int iParam3, int iParam4, char* sParam5, var uParam6)
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
			Global_2437022.f_1285[iVar1 /*30*/].f_4 = func_471(Global_2437022.f_1285[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437022.f_1285[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437022.f_1285[iVar1 /*30*/].f_3 = iParam3;
			Global_2437022.f_1285[iVar1 /*30*/].f_8 = iParam4;
			Global_2437022.f_1285[iVar1 /*30*/].f_9 = func_470();
			Global_2437022.f_1285[iVar1 /*30*/].f_10 = func_469();
			StringCopy(&(Global_2437022.f_1285[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437022.f_1285[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam6);
		}
	}
}

int func_469()
{
	if (Global_2437022.f_1886)
	{
		Global_2437022.f_1886 = 0;
		return 1;
	}
	Global_2437022.f_1886 = 0;
	return 0;
}

var func_470()
{
	var uVar0;
	
	uVar0 = Global_2437022.f_1888;
	Global_2437022.f_1888 = 1;
	return uVar0;
}

float func_471(vector3 vParam0, var uParam3, var uParam4)
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

var func_472(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_473(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_473(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_503(PLAYER::PLAYER_ID()) || func_502(PLAYER::PLAYER_ID()))
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
	else if (func_227() || func_501(PLAYER::PLAYER_ID()))
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
	if (func_500(uParam2))
	{
	}
	if (func_499())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_497(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_496(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_494(0, &iVar1);
					break;
				
				case 3:
					func_494(1, &iVar1);
					break;
				
				case 1:
					func_492(&iVar1);
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
			func_491(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_483((func_490(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_2 != -1)
				{
					func_491(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_478(iVar1);
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
				func_474((func_476(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_474((func_476(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_474(int iParam0)
{
	if (func_499())
	{
		Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_5 = iParam0;
		func_475(joaat("mpply_globalxp"), iParam0);
	}
}

void func_475(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_476(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_956(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_477(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_477(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_477(int iParam0)
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

void func_478(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_65(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_481(func_482(&Var0));
			if (iVar13 == 0)
			{
				func_480(&Global_1378824, iParam0);
				func_479(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar13 == 1)
			{
				func_480(&Global_1378825, iParam0);
				func_479(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar13 == 2)
			{
				func_480(&Global_1378826, iParam0);
				func_479(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar13 == 3)
			{
				func_480(&Global_1378827, iParam0);
				func_479(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar13 == 4)
			{
				func_480(&Global_1378828, iParam0);
				func_479(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_479(int iParam0, var uParam1)
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

void func_480(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_481(int iParam0)
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

int func_482(var uParam0)
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

void func_483(int iParam0, int iParam1, int iParam2)
{
	if (func_499())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9490 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1378945[func_138(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_138(-1)])
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
		if (func_489(PLAYER::PLAYER_ID()))
		{
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_6 = func_487(iParam0, 1);
		}
		func_425(639, iParam0, -1, 1);
		func_426(640, func_487(iParam0, 1), -1, 1, 0);
		Global_1378945[func_138(-1)] = iParam0;
		func_484(7, 0);
	}
}

void func_484(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_486(iParam0, iParam1))
	{
		iVar0 = func_485();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_485()
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

int func_486(int iParam0, var uParam1)
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

int func_487(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_488(iParam0, 0);
}

int func_488(int iParam0, int iParam1)
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

int func_489(int iParam0)
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

int func_490(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1378945[func_138(-1)];
			}
			else if (func_489(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_138(-1)];
	}
	return 0;
}

void func_491(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_428(iParam0, func_138(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_427(iParam0))
	{
		func_426(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_425(iParam0, iVar0, iParam2, 1);
	}
}

void func_492(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_351(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_66(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_493(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_493(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_493(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(uParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_494(bool bParam0, int iParam1)
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
				if (func_956(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_66(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_956(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_495(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_66(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_493(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_493(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_495(var uParam0, int iParam1)
{
	return SYSTEM::VDIST(func_57(uParam0), func_57(iParam1));
	return 0f;
}

int func_496(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_493(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_497(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_490(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_490(PLAYER::PLAYER_ID());
		}
	}
	if (func_498(8000, 0, 0) > 0)
	{
		if (func_498(8000, 0, 0) < (iParam0 + func_490(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_498(8000, 0, 0) - func_490(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_498(int iParam0, bool bParam1, int iParam2)
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

int func_499()
{
	return 1;
}

int func_500(var uParam0)
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

int func_501(int iParam0)
{
	return func_381(func_101(iParam0));
}

bool func_502(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_503(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

void func_504()
{
	Global_2459729 = 1;
}

void func_505(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_79(7))
	{
		return;
	}
	iVar0 = func_508(iParam0);
	iVar1 = func_507(iParam0);
	iVar2 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2524719.f_4883.f_259, NETWORK::GET_NETWORK_TIME()));
	if (func_506(iParam0) != -1)
	{
		if (iVar2 > func_506(iParam0))
		{
			iVar2 = func_506(iParam0);
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

int func_506(int iParam0)
{
	if (func_210(iParam0, 0) || func_423(iParam0))
	{
		return Global_262145.f_18356;
	}
	if (func_388(iParam0))
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

int func_507(int iParam0)
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
			if (func_458(0) || func_237(0))
			{
				return Global_262145.f_20921;
			}
			break;
		
		case 226:
			if (func_458(0) || func_237(0))
			{
				return Global_262145.f_20901;
			}
			break;
		
		case 227:
			if (func_458(0) || func_237(0))
			{
				return Global_262145.f_20913;
			}
			break;
		
		case 229:
			if (func_458(0) || func_237(0))
			{
				return Global_262145.f_22077;
			}
			break;
		
		case 230:
			if (func_458(0) || func_237(0))
			{
				return Global_262145.f_22173;
			}
			break;
		
		case 233:
			if (func_458(0) || func_237(0))
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
			if (func_458(0) || func_237(0))
			{
				return Global_262145.f_23803;
			}
			break;
		
		case 238:
			if (func_458(0) || func_237(0))
			{
				return Global_262145.f_23914;
			}
			break;
		
		case 249:
			if (func_458(0) || func_237(0))
			{
				return Global_262145.f_23930;
			}
			break;
	}
	return 0;
}

int func_508(int iParam0)
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
			if (!func_440())
			{
				return Global_262145.f_17889;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_440())
			{
				return Global_262145.f_17980;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_440())
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
			if (func_237(0))
			{
				return Global_262145.f_20920;
			}
			break;
		
		case 226:
			if (func_237(0))
			{
				return Global_262145.f_20900;
			}
			break;
		
		case 227:
			if (func_237(0))
			{
				return Global_262145.f_20912;
			}
			break;
		
		case 229:
			if (func_237(0))
			{
				return Global_262145.f_22076;
			}
			break;
		
		case 230:
			if (func_237(0))
			{
				return Global_262145.f_22172;
			}
			break;
		
		case 233:
			if (func_237(0))
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
			if (func_237(0))
			{
				return Global_262145.f_23802;
			}
			break;
		
		case 238:
			if (func_237(0))
			{
				return Global_262145.f_23913;
			}
			break;
		
		case 249:
			if (func_237(0))
			{
				return Global_262145.f_23929;
			}
			break;
	}
	return 0;
}

void func_509(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_440())
		{
			if (func_458(0))
			{
				if (!func_237(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_460()))
					{
						if (func_519() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_519());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_517(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_514("GB_BCUT_TICK1", func_460(), iVar0, 0, 0, 1, 1);
						}
						func_513(20);
						func_510(func_460(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_510(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_956(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_512(iParam0);
		func_511(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_452(iParam0));
	}
}

void func_511(var uParam0, var uParam1)
{
	*uParam0 = Global_1643357.f_9;
	*uParam1 = Global_1643357.f_10;
}

var func_512(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_491;
}

void func_513(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::SET_BIT(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

int func_514(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		UI::_SET_NOTIFICATION_COLOR_NEXT(func_344(iParam1, -2, 1, 0, 0));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_515(&Var1));
		if (!iParam3 == 0)
		{
			UI::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		func_291(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

var func_515(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_516(&cVar0);
}

var func_516(char[4] cParam0)
{
	return cParam0;
}

void func_517(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_518(1);
	}
	else
	{
		iVar1 = func_518(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_518(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12277;
}

int func_519()
{
	return Global_262145.f_12276;
}

void func_520(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar18 = func_237(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_440())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_460();
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
				iVar2 = func_536(Global_1589747[iVar11 /*790*/].f_768, *uParam3);
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
			iVar10 = func_535(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_534("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1667120.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_533(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_531(*uParam3);
				}
				iVar6 = func_530(&uVar5);
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
						func_513(140);
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
								if (func_529(iVar23))
								{
									func_521(iVar23, 1, 198210293);
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
					func_513(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_521(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_523(iParam0);
	func_522(iParam0, uVar0, iParam1, iParam2);
}

void func_522(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -1854838991;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_512(iParam0);
	func_511(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_63())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_452(iParam0));
		}
	}
}

int func_523(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_528();
	iVar0 = func_526(iParam0, iVar0);
	iVar1 = Global_1625435[func_460() /*560*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14828));
	if (iVar0 < func_525())
	{
		iVar0 = func_525();
	}
	if (iVar0 > func_524())
	{
		iVar0 = func_524();
	}
	return iVar0;
}

int func_524()
{
	return Global_262145.f_14829;
}

int func_525()
{
	return Global_262145.f_16004;
}

int func_526(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_594(iParam0) * func_527());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_527()
{
	return Global_262145.f_16003;
}

var func_528()
{
	return Global_262145.f_12268;
}

int func_529(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_74(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_105(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_530(var uParam0)
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
			if (!func_17(iVar2, 0) && !func_74(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_17(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_531(int iParam0)
{
	func_532(iParam0, 7236);
}

void func_532(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_428(iParam1, -1, 0);
	func_426(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_533(int iParam0)
{
	func_532(iParam0, 7231);
}

int func_534(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_291(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

var func_535(var uParam0)
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

var func_536(struct<5> Param0, int iParam5)
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

void func_537(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_237(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_440())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_460();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_549(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_540(uParam1->f_16) + uParam1->f_8);
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
			iVar2 = func_436(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_435(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_539(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_534("SMTICK_RONCUT", func_539(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_539(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_538(iVar2, iVar9);
				iVar6 = func_530(&uVar5);
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
						func_513(44);
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
								if (func_529(iVar20))
								{
									func_521(iVar20, 1, 1160415507);
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
					func_513(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_538(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_532(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_532(iParam1, 6117);
	}
}

int func_539(var uParam0)
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

int func_540(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_547())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_549(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_542(func_543(func_546(iVar0), -1, -1));
		if (func_541(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_541(int iParam0)
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

int func_542(int iParam0)
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

int func_543(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar0 = 0;
	iVar1 = func_545(iParam0, iParam1);
	uVar2 = func_544(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_544(int iParam0)
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

int func_545(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_546(int iParam0)
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

bool func_547()
{
	return func_548() != 0;
}

int func_548()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_255;
}

int func_549(int iParam0)
{
	if (iParam0 != func_63() && func_550(iParam0))
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255.f_3;
	}
	return 0;
}

int func_550(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255 != 0;
	}
	return 0;
}

void func_551(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_237(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_440())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_460();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_439(iVar15);
			iVar0 = (func_572(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_568(iVar15, iVar16, iVar1);
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
				func_565(iVar16, iVar2);
				if (func_561(iVar16) >= Global_262145.f_20451 || iVar2 >= Global_262145.f_20451)
				{
					func_552(5);
				}
				iVar6 = func_530(&uVar5);
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
						func_513(108);
					}
					else
					{
						func_513(110);
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
								if (func_529(iVar20))
								{
									func_521(iVar20, 1, -1905128202);
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
					func_513(112);
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

void func_552(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20439)
			{
				if (func_554(Global_262145.f_20440))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20441)
			{
				if (func_554(Global_262145.f_20442))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20443)
			{
				if (func_554(Global_262145.f_20444))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20445)
			{
				if (func_554(Global_262145.f_20446))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20447)
			{
				if (func_554(Global_262145.f_20448))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20449)
			{
				if (func_554(Global_262145.f_20450))
				{
					func_534("CLOTHAWDSTRAP3", Global_262145.f_20451, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20452)
			{
				if (func_554(Global_262145.f_20453))
				{
					func_534("CLOTHAWDSTRAP5", Global_262145.f_20585, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20455)
			{
				if (func_554(Global_262145.f_20456))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20457)
			{
				if (func_554(Global_262145.f_20458))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20459)
			{
				if (func_554(Global_262145.f_20460))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20461)
			{
				if (func_554(Global_262145.f_20462))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20463)
			{
				if (func_554(Global_262145.f_20464))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20465)
			{
				if (func_554(Global_262145.f_20466))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20467)
			{
				if (func_554(Global_262145.f_20468))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20469)
			{
				if (func_554(Global_262145.f_20470))
				{
					func_553("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_553(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		Global_2503649 = { func_65(PLAYER::PLAYER_ID()) };
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
	func_291(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_558(15417, -1, -1))
			{
				func_557(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_558(15418, -1, -1))
			{
				func_557(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_558(15425, -1, -1))
			{
				func_557(15425, 1, -1, 1);
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
			if (!func_558(15405, -1, -1))
			{
				func_557(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_558(15393, -1, -1))
			{
				func_557(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_558(15409, -1, -1))
			{
				func_557(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_558(15396, -1, -1))
			{
				func_557(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_558(15412, -1, -1))
			{
				func_557(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_558(15403, -1, -1))
			{
				func_557(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_558(15389, -1, -1))
			{
				func_557(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_558(15398, -1, -1))
			{
				func_557(15398, 1, -1, 1);
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
			if (!func_558(15400, -1, -1))
			{
				func_557(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_558(15408, -1, -1))
			{
				func_557(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_558(15411, -1, -1))
			{
				func_557(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_558(15397, -1, -1))
			{
				func_557(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_558(15413, -1, -1))
			{
				func_557(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_558(15391, -1, -1))
			{
				func_557(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_558(15388, -1, -1))
			{
				func_557(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_558(15401, -1, -1))
			{
				func_557(15401, 1, -1, 1);
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
			if (!func_558(15394, -1, -1))
			{
				func_557(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_558(15406, -1, -1))
			{
				func_557(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_558(15395, -1, -1))
			{
				func_557(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_558(15410, -1, -1))
			{
				func_557(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_558(15407, -1, -1))
			{
				func_557(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_558(15414, -1, -1))
			{
				func_557(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_558(15415, -1, -1))
			{
				func_557(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_558(15399, -1, -1))
			{
				func_557(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_558(15404, -1, -1))
			{
				func_557(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_558(15392, -1, -1))
			{
				func_557(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_558(15390, -1, -1))
			{
				func_557(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_558(15402, -1, -1))
			{
				func_557(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_558(15416, -1, -1))
			{
				func_557(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_137(209, -1))
			{
				func_555(209, 1, -1, 1);
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
			if (!func_558(15426, -1, -1))
			{
				func_557(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_558(15422, -1, -1))
			{
				func_557(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_558(15423, -1, -1))
			{
				func_557(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_558(15421, -1, -1))
			{
				func_557(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_558(15427, -1, -1))
			{
				func_557(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_558(15419, -1, -1))
			{
				func_557(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_558(15420, -1, -1))
			{
				func_557(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_555(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_556())
	{
		iVar0 = Global_2566070[iParam0 /*3*/][func_138(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_556()
{
	return 1;
	return 0;
}

int func_557(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_19();
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

int func_558(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_19();
	}
	iVar1 = func_560(iParam0, iParam1);
	uVar2 = func_559(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_559(int iParam0)
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

int func_560(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_19();
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

int func_561(int iParam0)
{
	int iVar0;
	
	iVar0 = func_563(iParam0);
	return func_428(func_562(iVar0), -1, 0);
}

int func_562(int iParam0)
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

int func_563(int iParam0)
{
	int iVar0;
	
	if (func_564(iParam0))
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

int func_564(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_565(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_563(iParam0);
	iVar1 = func_562(iVar0);
	iVar2 = (func_428(iVar1, -1, 0) + iParam1);
	func_426(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_543(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iVar0 /*12*/] != 0)
			{
				iVar1 = func_562(iVar0);
				iVar3 = (iVar3 + func_428(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_567(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_566(9357, iVar5, -1, 1);
	}
}

var func_566(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_19();
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

int func_567(int iParam0)
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

int func_568(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_453(iParam1);
	if (func_564(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16834;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16839);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16833;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16838);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16843);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16832;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16837);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16842);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16830;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16835);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16840);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16831;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16836);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16841);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20928;
				if (func_569(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20930);
				}
				if (func_569(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20929);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_569(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_571(iParam0, iParam1))
	{
		iVar0 = func_570(iParam0, iParam1);
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_570(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_564(iParam1) && iParam0 != func_63())
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

int func_571(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_564(iParam1) && iParam0 != func_63())
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

int func_572(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_564(iParam1))
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

void func_573(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_456())
			{
				Var0 = { func_455() };
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
				iVar7 = func_568(PLAYER::PLAYER_ID(), Var0, *uParam3);
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
				iVar11 = func_530(&uVar10);
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
					func_513(86);
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (func_237(0))
			{
				Var15 = { func_574(func_460()) };
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
				iVar22 = func_568(func_460(), Var15, *uParam3);
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

struct<2> func_574(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_188;
}

void func_575(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_119(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_590();
			}
			func_589();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_119(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_581(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_580(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_530(&uVar2);
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
						func_513(44);
					}
				}
				func_578(*iParam3);
				func_577();
				Global_2524719.f_4883.f_372 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_529(iVar9))
						{
							func_521(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_119(PLAYER::PLAYER_ID()))
		{
			func_576();
		}
	}
}

void func_576()
{
	int iVar0;
	
	iVar0 = Global_2568270[func_19()];
	iVar0++;
	func_425(3667, iVar0, -1, 1);
}

void func_577()
{
	int iVar0;
	
	iVar0 = Global_2568276[func_19()];
	iVar0++;
	func_425(3666, iVar0, -1, 1);
}

void func_578(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2568279[func_19()];
	iVar0 = (iVar0 + iParam0);
	func_425(3668, iVar0, -1, 1);
	if (func_543(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_579(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_566(7666, iVar2, -1, 1);
	}
}

int func_579(int iParam0)
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

var func_580(int iParam0)
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

int func_581(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_588(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_587(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_586(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_582(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_582(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_586(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_582(int iParam0)
{
	int iVar0;
	
	if (func_585(iParam0))
	{
		iVar0 = func_583(func_584(iParam0));
		return func_428(iVar0, -1, 0);
	}
	return 0;
}

int func_583(int iParam0)
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

int func_584(int iParam0)
{
	int iVar0;
	
	if (func_585(iParam0))
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

int func_585(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_586(int iParam0)
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

int func_587(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_585(iParam0))
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

int func_588(int iParam0)
{
	int iVar0;
	
	if (func_585(iParam0))
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

void func_589()
{
	int iVar0;
	
	iVar0 = Global_2568267[func_19()];
	iVar0++;
	Global_2568267[func_19()] = iVar0;
	func_425(3665, iVar0, -1, 1);
}

void func_590()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2568264[func_19()];
	iVar1 = Global_2568273[func_19()];
	iVar0++;
	iVar1++;
	Global_2568264[func_19()] = iVar0;
	Global_2568273[func_19()] = iVar1;
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_120 = iVar1;
	func_425(3663, iVar0, -1, 1);
	func_425(3664, iVar1, -1, 1);
}

void func_591()
{
	if (func_440())
	{
		Global_2449169.f_3068.f_134 = 0;
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
	}
}

void func_592()
{
	if (func_440())
	{
		if (Global_2449169.f_3068.f_134 < 10)
		{
			Global_2449169.f_3068.f_134++;
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
		}
	}
}

void func_593()
{
	if (func_440())
	{
		if (Global_2449169.f_3068.f_134 > 0)
		{
			Global_2449169.f_3068.f_134 = (Global_2449169.f_3068.f_134 - 1);
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
		}
	}
}

int func_594(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_28;
}

int func_595(int iParam0)
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
			if (func_458(1) && !func_237(1))
			{
				if (func_596(func_460()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_596(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 26);
}

int func_597(int iParam0)
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

int func_598(int iParam0, bool bParam1)
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
			if (func_440())
			{
				return Global_262145.f_18711;
			}
			else if (bParam1)
			{
				return Global_262145.f_18712;
			}
			break;
		
		case 188:
			if (func_440())
			{
				return Global_262145.f_18795;
			}
			else if (bParam1)
			{
				return Global_262145.f_18796;
			}
			break;
		
		case 225:
			if (func_440() && !func_456())
			{
				if (func_596(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20916;
				}
				else
				{
					return Global_262145.f_20917;
				}
			}
			else if (func_456())
			{
				return Global_262145.f_20918;
			}
			break;
		
		case 226:
			if (func_440() && !func_456())
			{
				if (func_596(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20896;
				}
				else
				{
					return Global_262145.f_20897;
				}
			}
			else if (func_456())
			{
				return Global_262145.f_20898;
			}
			break;
		
		case 227:
			if (func_440() && !func_456())
			{
				if (func_596(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20908;
				}
				else
				{
					return Global_262145.f_20909;
				}
			}
			else if (func_456())
			{
				return Global_262145.f_20910;
			}
			break;
		
		case 229:
			if (func_440() && !func_456())
			{
				if (func_596(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22072;
				}
				else
				{
					return Global_262145.f_22073;
				}
			}
			else if (func_456())
			{
				return Global_262145.f_22074;
			}
			break;
		
		case 230:
			if (func_440() && !func_456())
			{
				if (func_596(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22168;
				}
				else
				{
					return Global_262145.f_22169;
				}
			}
			else if (func_456())
			{
				return Global_262145.f_22170;
			}
			break;
		
		case 233:
			if (func_440() && !func_456())
			{
				if (func_596(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22642;
				}
				else
				{
					return Global_262145.f_22643;
				}
			}
			else if (func_456())
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
			if (func_440() && !func_456())
			{
				if (func_596(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23798;
				}
				else
				{
					return Global_262145.f_23799;
				}
			}
			else if (func_456())
			{
				return Global_262145.f_23800;
			}
			break;
		
		case 238:
			if (func_440() && !func_456())
			{
				if (func_596(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23909;
				}
				else
				{
					return Global_262145.f_23910;
				}
			}
			else if (func_456())
			{
				return Global_262145.f_23911;
			}
			break;
		
		case 249:
			if (func_440() && !func_456())
			{
				if (func_596(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23925;
				}
				else
				{
					return Global_262145.f_23926;
				}
			}
			else if (func_456())
			{
				return Global_262145.f_23927;
			}
			break;
	}
	return 0;
}

void func_599(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_600(iParam0))
	{
		if (!func_440())
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
	if (func_179(PLAYER::PLAYER_ID(), 1))
	{
		if (func_305(iParam0))
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
	else if (func_305(iParam0))
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
	iVar0 = func_240();
	if (iVar0 != func_63())
	{
		if (func_74(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_600(int iParam0)
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

int func_601()
{
	return (Local_110.f_115 * Global_262145.f_14899);
}

int func_602()
{
	return (Local_110.f_115 * Global_262145.f_14898);
}

void func_603(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
		iVar0 = func_171(PLAYER::PLAYER_ID());
		Global_1667085.f_4 = func_703();
		Global_1667085.f_5 = func_702();
		if (func_125(PLAYER::PLAYER_ID()) || func_126(PLAYER::PLAYER_ID()))
		{
			Global_1667085.f_6 = 1;
		}
		else
		{
			Global_1667085.f_6 = 0;
		}
		Global_1667085.f_1 = func_698(bParam9);
		Global_1667085.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1667085.f_9 = func_697(bParam0);
		Global_1667085.f_10 = iParam1;
		Global_1667085.f_17 = Global_1667085.f_2;
		Global_1667085.f_18 = Global_1667085.f_2;
		Global_1667085.f_19 = func_696();
		Global_1667085.f_21 = (Global_1667085.f_8 - Global_1667085.f_7);
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667085.f_23 = func_697(func_237(1));
		}
		Global_1667085.f_24 = func_695(PLAYER::PLAYER_ID());
		Global_1667085.f_28 = func_694(PLAYER::PLAYER_ID());
		if (Global_1667085.f_24 > 2)
		{
			Global_1667085.f_24 = 2;
		}
		func_692(iVar0);
	}
	else
	{
		iVar0 = func_101(PLAYER::PLAYER_ID());
	}
	if (func_305(iVar0))
	{
		Global_1666824.f_2 = func_703();
		Global_1666824.f_3 = func_702();
		Global_1666824.f_50 = iParam4;
		Global_1666824.f_51 = iParam5;
		Global_1666824.f_10 = NETWORK::_GET_POSIX_TIME();
		Global_1666824.f_20 = (Global_1666824.f_10 - Global_1666824.f_9);
		Global_1666824.f_12 = iParam1;
		Global_1666824.f_19 = func_686(iVar0, bParam0, func_691(bParam3));
		if (bParam0)
		{
			Global_1666824.f_11 = 1;
		}
		else
		{
			Global_1666824.f_11 = 0;
		}
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
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
			Global_1666824.f_45 = func_685(func_460(), iParam2);
			Global_1666824.f_47 = iParam7;
			Global_1666824.f_46 = iParam6;
			Global_1666824.f_52 = func_684(func_460(), iParam2);
		}
		func_682(iVar0);
	}
	else if (func_310(iVar0))
	{
		Global_1666878.f_2 = func_703();
		Global_1666878.f_3 = func_702();
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
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1666878.f_8 = 1;
		}
		else
		{
			Global_1666878.f_8 = 0;
		}
		func_680(iVar0);
	}
	else if (func_385(iVar0))
	{
		Global_1666941.f_2 = func_703();
		Global_1666941.f_3 = func_702();
		Global_1666941.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1666941.f_18 = (Global_1666941.f_9 - Global_1666941.f_8);
		Global_1666941.f_11 = iParam1;
		Global_1666941.f_7 = func_696();
		Global_1666941.f_42 = func_678(func_19(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_439(iVar1);
		Global_1666941.f_28 = iVar2;
		Global_1666941.f_29 = func_697((func_677(iVar1) || func_676(iVar1)));
		Global_1666941.f_30 = func_697(func_675(iVar1));
		Global_1666941.f_32 = func_697(func_674(iVar1));
		Global_1666941.f_33 = func_697(func_673(iVar1));
		Global_1666941.f_34 = func_697(func_672(iVar1));
		Global_1666941.f_35 = func_697(func_671(0, iVar1) == 1);
		Global_1666941.f_36 = func_697(func_670(iVar1));
		Global_1666941.f_37 = func_697(func_669(iVar1));
		Global_1666941.f_38 = func_697(func_668(iVar1));
		Global_1666941.f_39 = func_697(func_569(iVar1, iVar2, 0));
		Global_1666941.f_40 = func_697(func_569(iVar1, iVar2, 2));
		Global_1666941.f_41 = func_697(func_569(iVar1, iVar2, 1));
		if (func_667(iVar1))
		{
			Global_1666941.f_31 = 2;
		}
		else if (func_666(iVar1))
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
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_6 = 1;
		}
		else
		{
			Global_1666941.f_6 = 0;
		}
		Global_1666941.f_21 = -2;
		Global_1666941.f_22 = -2;
		func_664(iVar0);
	}
	else if (func_383(iVar0))
	{
		Global_1666985.f_2 = func_703();
		Global_1666985.f_3 = func_702();
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1666985.f_6 = 1;
		}
		else
		{
			Global_1666985.f_6 = 0;
		}
		Global_1666985.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1666985.f_10 = func_697(bParam0);
		Global_1666985.f_11 = iParam1;
		Global_1666985.f_17 = func_663(func_240());
		Global_1666985.f_18 = (Global_1666985.f_9 - Global_1666985.f_8);
		Global_1666985.f_20 = iParam8;
		Global_1666985.f_21 = -2;
		Global_1666985.f_22 = -2;
		Global_1666985.f_27 = func_662();
		Global_1666985.f_29 = func_428(6107, -1, 0);
		Global_1666985.f_30 = func_428(6103, -1, 0);
		Global_1666985.f_31 = func_428(6104, -1, 0);
		Global_1666985.f_32 = func_428(6106, -1, 0);
		Global_1666985.f_33 = func_428(6105, -1, 0);
		Global_1666985.f_34 = func_428(6108, -1, 0);
		Global_1666985.f_36 = func_697(func_237(1));
		Global_1666985.f_37 = func_660();
		func_645();
		func_643(iVar0);
	}
	else if (func_381(iVar0))
	{
		Global_1667039.f_2 = func_703();
		Global_1667039.f_3 = func_702();
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1667039.f_6 = 1;
		}
		else
		{
			Global_1667039.f_6 = 0;
		}
		Global_1667039.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1667039.f_10 = func_697(bParam0);
		Global_1667039.f_11 = iParam1;
		Global_1667039.f_18 = (Global_1667039.f_9 - Global_1667039.f_8);
		Global_1667039.f_20 = iParam8;
		Global_1667039.f_23 = Global_786547;
		Global_1667039.f_36 = Global_786547.f_1;
		Global_1667039.f_24 = func_428(6157, -1, 0);
		Global_1667039.f_25 = func_428(6162, -1, 0);
		Global_1667039.f_26 = func_428(6163, -1, 0);
		Global_1667039.f_27 = func_697((((func_642() || func_641()) || func_640()) || func_639(PLAYER::PLAYER_ID())));
		Global_1667039.f_28 = func_428(6164, -1, 0);
		Global_1667039.f_29 = func_697(func_638());
		Global_1667039.f_35 = -1;
		Global_1667039.f_38 = -1;
		Global_1667039.f_39 = Global_1667039.f_4;
		Global_1667039.f_40 = Global_1667039.f_5;
		Global_1667039.f_41 = func_703();
		Global_1667039.f_42 = func_697(func_237(1));
		Global_1667039.f_44 = Global_1667039.f_18;
		func_636(iVar0);
	}
	else if (func_416(iVar0))
	{
		if (Global_1667173.f_2 == -1)
		{
			Global_1667173.f_2 = func_703();
		}
		if (Global_1667173.f_3 == -1)
		{
			Global_1667173.f_3 = func_702();
		}
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1667173.f_6 = 1;
		}
		else
		{
			Global_1667173.f_6 = 0;
		}
		Global_1667173.f_1 = func_698(0);
		Global_1667173.f_7 = func_696();
		Global_1667173.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1667173.f_10 = func_697(bParam0);
		Global_1667173.f_11 = iParam1;
		if (func_460() != -1)
		{
			Global_1667173.f_17 = func_635(func_460());
		}
		Global_1667173.f_18 = (Global_1667173.f_9 - Global_1667173.f_8);
		Global_1667173.f_19 = Global_2524719.f_6236;
		Global_1667173.f_28 = func_694(PLAYER::PLAYER_ID());
		Global_1667173.f_29 = func_697(func_634(PLAYER::PLAYER_ID()));
		Global_1667173.f_30 = func_697(func_633(PLAYER::PLAYER_ID()));
		Global_1667173.f_31 = func_632(PLAYER::PLAYER_ID());
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667173.f_33 = func_697(func_237(1));
		}
		if (Global_1667173.f_34 > 2)
		{
			Global_1667173.f_34 = 2;
		}
		func_630(iVar0);
	}
	else if (func_420(iVar0))
	{
		Global_1667120.f_2 = func_703();
		Global_1667120.f_3 = func_702();
		if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
		{
			Global_1667120.f_6 = 1;
		}
		else
		{
			Global_1667120.f_6 = 0;
		}
		Global_1667120.f_1 = func_698(0);
		Global_1667120.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1667120.f_10 = func_697(bParam0);
		Global_1667120.f_11 = iParam1;
		Global_1667120.f_18 = (Global_1667120.f_9 - Global_1667120.f_8);
		Global_1667120.f_28 = func_694(PLAYER::PLAYER_ID());
		if (Global_1667120.f_28)
		{
			Global_1667120.f_29 = func_629(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1667120.f_29 = 0;
		}
		Global_1667120.f_30 = func_613(PLAYER::PLAYER_ID(), 4, -1);
		Global_1667120.f_31 = func_632(PLAYER::PLAYER_ID());
		Global_1667120.f_32 = func_697(func_612(PLAYER::PLAYER_ID()));
		Global_1667120.f_33 = func_697(func_611(PLAYER::PLAYER_ID()));
		Global_1667120.f_34 = func_697(func_610(PLAYER::PLAYER_ID()));
		Global_1667120.f_35 = func_697(func_609(PLAYER::PLAYER_ID()));
		Global_1667120.f_36 = func_608(PLAYER::PLAYER_ID());
		Global_1667120.f_37 = func_607(PLAYER::PLAYER_ID());
		Global_1667120.f_39 = func_606(PLAYER::PLAYER_ID());
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667120.f_41 = func_697(func_237(1));
		}
		if (Global_1667120.f_42 > 2)
		{
			Global_1667120.f_42 = 2;
		}
		func_604(iVar0);
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
			if ((func_120(PLAYER::PLAYER_ID()) || func_131(PLAYER::PLAYER_ID())) || func_139(PLAYER::PLAYER_ID()))
			{
				Global_1666806.f_4 = 1;
			}
		}
	}
}

void func_604(int iParam0)
{
	unk_0xD8AFB345A9C5CCBB(&Global_1667120);
	func_605();
}

void func_605()
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

int func_606(int iParam0)
{
	if (iParam0 != func_63())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_325, 12);
	}
	return 0;
}

int func_607(int iParam0)
{
	if (iParam0 != func_63())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_325, 10);
	}
	return 0;
}

int func_608(int iParam0)
{
	if (iParam0 != func_63())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_325, 11);
	}
	return 0;
}

int func_609(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 4);
}

int func_610(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 3);
}

int func_611(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 2);
}

int func_612(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 1);
}

int func_613(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_63() || !func_628(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_623(iParam0, iParam2);
		
		case 1:
			return func_621(iParam0, iParam2);
		
		case 3:
			return func_620(iParam0);
		
		case 2:
			return func_615(iParam0, iParam2);
		
		case 4:
			return func_614(iParam0);
		
		default:
	}
	return 0;
}

int func_614(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 6);
}

int func_615(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_619(iParam0);
		
		case 11:
			return func_618(iParam0);
		
		case 12:
			return func_617(iParam0);
		
		case 13:
			return func_616(iParam0);
		
		default:
	}
	return 0;
}

int func_616(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 15);
}

int func_617(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 14);
}

int func_618(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 13);
}

int func_619(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 12);
}

int func_620(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 5);
}

int func_621(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_622(iParam0);
		
		case 6:
			return func_612(iParam0);
		
		case 7:
			return func_611(iParam0);
		
		case 8:
			return func_610(iParam0);
		
		case 9:
			return func_609(iParam0);
		
		default:
	}
	return 0;
}

int func_622(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 0);
}

int func_623(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_627(iParam0);
		
		case 1:
			return func_626(iParam0);
		
		case 2:
			return func_625(iParam0);
		
		case 3:
			return func_624(iParam0);
		
		case 4:
			return func_632(iParam0);
		
		default:
	}
	return 0;
}

int func_624(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 10);
}

int func_625(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 9);
}

int func_626(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 8);
}

int func_627(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 7);
}

bool func_628(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_629(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_613(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_613(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_613(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_613(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_630(int iParam0)
{
	unk_0x6481F441CE5CA40E(&Global_1667173);
	func_631();
}

void func_631()
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

var func_632(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 31);
}

int func_633(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_313.f_1, 0);
}

int func_634(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_313.f_1, 19);
}

var func_635(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_211.f_6;
}

void func_636(int iParam0)
{
	unk_0x0360568A8CE21561(&Global_1667039);
	func_637();
}

void func_637()
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

bool func_638()
{
	return func_428(6156, -1, 0) != 0;
}

int func_639(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_262 != 0;
	}
	return 0;
}

bool func_640()
{
	return func_428(6164, -1, 0) == 3;
}

bool func_641()
{
	return func_428(6164, -1, 0) == 2;
}

bool func_642()
{
	return func_428(6164, -1, 0) == 1;
}

void func_643(int iParam0)
{
	unk_0x04824802BBD52BB4(&Global_1666985);
	func_644();
}

void func_644()
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

void func_645()
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
		iVar2 = (iVar0 + func_656(12));
		func_655(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1321304[iVar1 /*141*/].f_66 != 0 && func_647(Global_1321304[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2524719.f_885 != iVar1)
				{
					if (func_646(Global_1321304[iVar1 /*141*/].f_66))
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

int func_646(int iParam0)
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

int func_647(int iParam0, bool bParam1)
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
		if (!func_654())
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
		if ((((!func_653() && !func_652()) && !func_651()) && !func_650()) && !func_654())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_PC_VERSION()) || GAMEPLAY::IS_ORBIS_VERSION())
		{
		}
		else if (!func_651())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_649(iParam0))
		{
			return 0;
		}
	}
	if (!func_648(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_648(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_457())
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

int func_649(int iParam0)
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

int func_650()
{
	return 0;
}

int func_651()
{
	return 1;
}

int func_652()
{
	return 1;
}

int func_653()
{
	if (DLC2::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_654()
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

void func_655(int iParam0, int iParam1, bool bParam2)
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

int func_656(int iParam0)
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
		iVar0 = func_659(iParam0);
		return func_658(iVar0);
	}
	return (func_657(iParam0, -1) * iParam0);
}

int func_657(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_392(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_398(iParam1))
			{
				return 0;
			}
			else if (func_390(iParam1, -1))
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

int func_658(int iParam0)
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

int func_659(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

var func_660()
{
	var uVar0;
	
	uVar0 = func_661();
	if (!func_440())
	{
		if (func_460() != func_63())
		{
			uVar0 = func_695(func_460()) + 1;
		}
	}
	return uVar0;
}

int func_661()
{
	return func_695(PLAYER::PLAYER_ID()) + 1;
}

int func_662()
{
	return func_428(6113, -1, 0);
}

int func_663(int iParam0)
{
	if (func_179(iParam0, 1))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_410;
	}
	return -1;
}

void func_664(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0EACDF8487D5155A(&Global_1666941);
	func_665();
}

void func_665()
{
	struct<44> Var0;
	
	Global_1666941 = { Var0 };
	Global_1666941.f_23 = 0;
	Global_1666941.f_24 = 0;
	Global_1666941.f_16 = 0;
}

bool func_666(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 12);
}

bool func_667(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 13);
}

int func_668(int iParam0)
{
	if (iParam0 != func_63())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 12) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 13)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_669(int iParam0)
{
	if (iParam0 != func_63())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 0) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 1)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_670(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (((((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 3) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 4)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 5)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 0)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 1)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_671(int iParam0, int iParam1)
{
	if (iParam1 == func_63())
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

int func_672(int iParam0)
{
	if (iParam0 != func_63())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 6) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 7)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_673(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 8);
}

bool func_674(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 7);
}

int func_675(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 9);
}

int func_676(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 11);
}

int func_677(int iParam0)
{
	if (iParam0 == func_63())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 10);
}

int func_678(int iParam0, int iParam1)
{
	return func_428(func_679(iParam1), iParam0, 0);
}

int func_679(int iParam0)
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

void func_680(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x7D8BA05688AD64C7(&Global_1666878);
	func_681();
}

void func_681()
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

void func_682(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xBF371CD2B64212FD(&Global_1666824);
	func_683();
}

void func_683()
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

int func_684(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_569(iParam0, iParam1, 2);
	bVar1 = func_569(iParam0, iParam1, 1);
	bVar2 = func_569(iParam0, iParam1, 0);
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

int func_685(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_564(iParam1))
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

int func_686(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_388(iParam0))
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
	else if (func_387(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_210(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17549;
			iVar1 = 20;
		}
	}
	else if (func_305(iParam0))
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
		unk_0x501478855A6074CE(func_690(func_460()), func_689(func_460()), func_703(), func_702(), iVar1, iVar0);
	}
	func_688(iVar0);
	func_687(iVar0);
	return iVar0;
}

void func_687(int iParam0)
{
	int iVar0;
	
	iVar0 = func_428(3968, -1, 0);
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
	func_426(3968, iVar0, -1, 1, 0);
}

void func_688(int iParam0)
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

int func_689(int iParam0)
{
	if (iParam0 == func_63())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_690(int iParam0)
{
	if (iParam0 == func_63())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[0];
}

int func_691(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_120(PLAYER::PLAYER_ID()) || func_139(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_692(var uParam0)
{
	unk_0x320C35147D5B5DDD(&Global_1667085);
	func_693();
}

void func_693()
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

int func_694(int iParam0)
{
	if (iParam0 != func_63())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_313 != 0;
	}
	return 0;
}

int func_695(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_19;
}

int func_696()
{
	int iVar0;
	
	if (func_456())
	{
		return 4;
	}
	else if (func_440())
	{
		if (func_596(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_237(1))
	{
		iVar0 = func_663(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_458(1))
	{
		if (func_596(func_460()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_697(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_698(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_171(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_101(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_701(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_700(PLAYER::PLAYER_ID());
			if (func_417(func_418(PLAYER::PLAYER_ID())))
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
			iVar2 = func_700(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_699(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_699(PLAYER::PLAYER_ID());
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

int func_699(int iParam0)
{
	if (func_101(PLAYER::PLAYER_ID()) == 238 || func_101(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_457;
	}
	return -1;
}

int func_700(int iParam0)
{
	if (func_101(PLAYER::PLAYER_ID()) == 237 || func_101(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_456;
	}
	return -1;
}

int func_701(int iParam0)
{
	if (func_171(iParam0) == 236)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_455;
	}
	return -1;
}

int func_702()
{
	if (Global_1666806.f_3 != 0)
	{
		return Global_1666806.f_3;
	}
	return -1;
}

int func_703()
{
	if (Global_1666806.f_2 != 0)
	{
		return Global_1666806.f_2;
	}
	return -1;
}

int func_704(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_63();
	iVar1 = func_63();
	iVar2 = func_63();
	return func_705(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_705(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
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
	func_365(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	return func_333(&Var0);
}

int func_706(int iParam0)
{
	int iVar0;
	
	iVar0 = func_183(iParam0);
	if (iVar0 != -1)
	{
		return func_181(iVar0);
	}
	return 1;
}

char* func_707(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		uVar0 = func_408(&(Global_1625435[iParam0 /*560*/].f_11.f_99));
		return uVar0;
	}
	if (Global_1625435[iParam0 /*560*/].f_11.f_115 != Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_115)
	{
		uVar0 = func_409(iParam0, 0);
		return uVar0;
	}
	if (((func_105(iParam0, 28) || func_105(PLAYER::PLAYER_ID(), 28)) || func_412(iParam0)) && !func_411(iParam0))
	{
		return func_409(iParam0, 0);
	}
	iVar1 = func_64(iParam0);
	if (iVar1 != func_63())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_409(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_63())
	{
		uVar0 = func_408(&(Global_1625435[iVar1 /*560*/].f_11.f_99));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar0))
		{
			return func_409(iVar1, 0);
		}
		else
		{
			return uVar0;
		}
	}
	return "";
}

void func_708()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_855() && !func_286())
	{
		return;
	}
	if (!func_366())
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_655;
	}
	iVar1 = func_130(iVar0);
	if (iVar1 < 3)
	{
		return;
	}
	if (func_8(&(Local_110.f_847)))
	{
		iVar2 = (func_10() - func_722(&(Local_110.f_847), 0, 0));
		iVar3 = (func_721() - Local_110.f_115);
		func_719(iVar2);
		if (iVar2 > 30000)
		{
			func_709(iVar3, "HUNT_HUD", iVar2, 1, "GB_WORK_END");
		}
		else if (iVar2 > 0)
		{
			func_709(iVar3, "HUNT_HUD", iVar2, 6, "GB_WORK_END");
		}
		else
		{
			func_709(iVar3, "HUNT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_709(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_717(0) == 0)
	{
		return;
	}
	func_716();
	func_713(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_500(sParam4))
	{
		sVar0 = sParam4;
	}
	func_710(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_710(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_712(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_711(7, iVar0);
		Global_1369750.f_4399[iVar0] = uParam0;
		StringCopy(&(Global_1369750.f_4399.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_4399.f_172[iVar0] = iParam2;
		Global_1369750.f_4399.f_216[iVar0] = iParam3;
		Global_1369750.f_4399.f_183[iVar0] = iParam4;
		Global_1369750.f_4399.f_194[iVar0] = iParam5;
		Global_1369750.f_4399.f_249[iVar0] = iParam6;
		Global_1369750.f_4399.f_260[iVar0] = iParam7;
		Global_1369750.f_4399.f_205[iVar0] = uParam8;
		Global_1369750.f_4399.f_314[iVar0] = iParam9;
		Global_1369750.f_4399.f_325[iVar0] = iParam10;
		Global_1369750.f_4399.f_357[iVar0] = iParam11;
		Global_1369750.f_4399.f_238[iVar0] = uParam12;
		Global_1369750.f_4399.f_271[iVar0] = iParam13;
		Global_1369750.f_4399.f_368[iVar0] = iParam14;
		Global_1369750.f_4399.f_379[iVar0] = iParam15;
		Global_1369750.f_4399.f_390[iVar0] = iParam16;
	}
}

void func_711(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1369750.f_6130[iParam0]), iParam1);
}

int func_712(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1369750.f_6130[iParam0], iParam1);
}

void func_713(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_712(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_711(6, iVar0);
		Global_1369750.f_3781[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_3781.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_3781.f_183[iVar0] = iParam3;
		Global_1369750.f_3781.f_172[iVar0] = iParam2;
		Global_1369750.f_3781.f_260[iVar0] = iParam4;
		Global_1369750.f_3781.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1369750.f_3781.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1369750.f_3781.f_443[iVar0] = iParam7;
		Global_1369750.f_3781.f_454[iVar0] = iParam8;
		Global_1369750.f_3781.f_497[iVar0] = iParam9;
		Global_1369750.f_3781.f_508[iVar0] = iParam10;
		Global_1369750.f_3781.f_205[iVar0] = iParam11;
		Global_1369750.f_3781.f_216[iVar0] = iParam12;
		Global_1369750.f_3781.f_227[iVar0] = iParam13;
		Global_1369750.f_3781.f_238[iVar0] = iParam14;
		Global_1369750.f_3781.f_249[iVar0] = iParam15;
		Global_1369750.f_3781.f_519[iVar0] = iParam16;
		Global_1369750.f_3781.f_530[iVar0] = iParam17;
		Global_1369750.f_3781.f_541[iVar0] = iParam18;
		Global_1369750.f_3781.f_552[iVar0] = iParam19;
		Global_1369750.f_3781.f_563[iVar0] = iParam20;
		Global_1369750.f_3781.f_574[iVar0] = iParam21;
		Global_1369750.f_3781.f_585[iVar0] = iParam22;
		Global_1369750.f_3781.f_596[iVar0] = iParam23;
		Global_1369750.f_3781.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_715())
		{
			Global_1369750.f_1088 = 1;
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1369750.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1369750.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1369750.f_1088 = 1;
			}
			if (func_714())
			{
				Global_1369750.f_1092 = 1;
			}
		}
	}
}

int func_714()
{
	int iVar0;
	var uVar1;
	
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_715()
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

void func_716()
{
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2459733 = 1;
}

int func_717(bool bParam0)
{
	if (func_718())
	{
		return 0;
	}
	if (func_269())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_956(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_718()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 12);
}

void func_719(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(uLocal_1432, 8))
	{
		func_720();
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1432, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				GAMEPLAY::SET_BIT(&uLocal_1432, 15);
				GAMEPLAY::SET_BIT(&uLocal_1432, 9);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1432, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1432, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					GAMEPLAY::SET_BIT(&uLocal_1432, 11);
				}
			}
			else
			{
				GAMEPLAY::IS_BIT_SET(uLocal_1432, 11);
				if (!GAMEPLAY::IS_BIT_SET(uLocal_1432, 14))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
					{
						GAMEPLAY::SET_BIT(&uLocal_1432, 14);
					}
				}
			}
			if (GAMEPLAY::IS_BIT_SET(uLocal_1432, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_1432, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						GAMEPLAY::SET_BIT(&uLocal_1432, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							GAMEPLAY::CLEAR_BIT(&uLocal_1432, 9);
						}
					}
				}
			}
		}
	}
}

void func_720()
{
	if (GAMEPLAY::IS_BIT_SET(uLocal_1432, 8))
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_1432, 9))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_1432, 10))
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_1432, 11))
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_1432, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(uLocal_1432, 16))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						GAMEPLAY::SET_BIT(&uLocal_1432, 16);
					}
				}
				if (GAMEPLAY::IS_BIT_SET(uLocal_1432, 16))
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_1432, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							GAMEPLAY::SET_BIT(&uLocal_1432, 13);
						}
					}
					if (GAMEPLAY::IS_BIT_SET(uLocal_1432, 13))
					{
						GAMEPLAY::SET_BIT(&uLocal_1432, 10);
					}
				}
			}
		}
	}
}

int func_721()
{
	return 4;
}

int func_722(var uParam0, bool bParam1, bool bParam2)
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

void func_723()
{
	int iVar0;
	struct<8> Var1;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	
	iVar17 = PLAYER::PLAYER_ID();
	iVar18 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar18 = func_287();
		iVar17 = Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_655;
	}
	iVar19 = func_130(iVar17);
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_366())
		{
			if (func_740("HUNT_OBJ"))
			{
				func_785();
			}
			if (func_740("HUNT_OBJ1L"))
			{
				func_785();
			}
			if (func_740("HUNT_TOBJ"))
			{
				func_785();
			}
			if (func_740("HUNT_DOBJ"))
			{
				func_785();
			}
			if (func_740("HUNT_DOBJ1L"))
			{
				func_785();
			}
			return;
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_982[iVar18 /*14*/].f_1, 6))
	{
		func_785();
		return;
	}
	if (iVar19 < 3)
	{
		if (func_740("HUNT_OBJ"))
		{
			func_785();
		}
		if (func_740("HUNT_OBJ1L"))
		{
			func_785();
		}
		if (func_740("HUNT_TOBJ"))
		{
			func_785();
		}
		if (func_740("HUNT_DOBJ"))
		{
			func_785();
		}
		if (func_740("HUNT_DOBJ1L"))
		{
			func_785();
		}
		return;
	}
	bVar20 = func_739() == true;
	if (iVar18 == Local_110.f_118)
	{
		if (!bVar20)
		{
			if (!func_740("HUNT_OBJ"))
			{
				func_736("HUNT_OBJ", 0);
			}
		}
		else if (!func_740("HUNT_OBJ1L"))
		{
			func_736("HUNT_OBJ1L", 0);
		}
	}
	else if (func_856() == Local_110.f_118)
	{
		if (!bVar20)
		{
			if (!func_740("HUNT_OBJ"))
			{
				func_736("HUNT_OBJ", 0);
			}
		}
		else if (!func_740("HUNT_OBJ1L"))
		{
			func_736("HUNT_OBJ1L", 0);
		}
	}
	else if (func_286())
	{
		if (Local_110.f_119 > -1)
		{
			if (!bVar20)
			{
				if (!func_740("HUNT_DOBJ"))
				{
					StringCopy(&Var1, func_707(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119)), 64);
					iVar0 = func_706(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119));
					func_724("HUNT_DOBJ", &Var1, iVar0, 0);
				}
			}
			else if (!func_740("HUNT_DOBJ1L"))
			{
				StringCopy(&Var1, func_707(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119)), 64);
				iVar0 = func_706(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119));
				func_724("HUNT_DOBJ1L", &Var1, iVar0, 0);
			}
		}
	}
}

void func_724(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_725(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312576 = 16;
		Global_1312576.f_56 = iParam2;
	}
}

int func_725(char* sParam0, char* sParam1, bool bParam2, var uParam3)
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
	if (func_735(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_729();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = uParam3;
	Global_1312576.f_56 = uParam3;
	func_728();
	func_727(bParam2);
	func_726();
	return 1;
}

void func_726()
{
	GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 1);
}

void func_727(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312576.f_59), 0);
}

void func_728()
{
	Global_1312576.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_729()
{
	func_731();
	func_730(0);
}

void func_730(bool bParam0)
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

void func_731()
{
	if (!func_734())
	{
	}
	if (func_733())
	{
		UI::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312576.f_12));
		func_732();
		UI::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_732()
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

int func_733()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_734()
{
	if (!func_733())
	{
		return 0;
	}
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312576.f_12));
	func_732();
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_735(var uParam0, var uParam1)
{
	if (!func_733())
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

void func_736(char* sParam0, bool bParam1)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_737(sParam0))
	{
		return;
	}
	func_729();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_728();
	func_727(bParam1);
	func_726();
}

bool func_737(var uParam0)
{
	if (!func_733())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_738(uParam0);
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_12));
}

bool func_738(var uParam0)
{
	if (!func_733())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_16));
}

int func_739()
{
	return (4 - Local_110.f_115);
}

int func_740(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_733())
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
	return func_737(sParam0);
}

void func_741()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_855() && !func_286())
	{
		return;
	}
	if (!func_366())
	{
		return;
	}
	iVar1 = func_63();
	iVar2 = -1;
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar2 = func_287();
		iVar1 = Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_655;
	}
	if (iVar2 == -1)
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 1))
	{
		iVar0 = func_130(iVar1);
		if (iVar0 >= 2)
		{
			if (iVar2 == Local_110.f_118 || func_856() == Local_110.f_118)
			{
				if (func_768(82, "HUNT_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_332(86, "BIGM_HUNTN", "BIGM_HUNTBD", 1, -1, 2, 1);
					if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
					{
						func_767(1);
						func_742(-1, 0, 0, -1, 0, 0);
					}
				}
			}
			else
			{
				if (iVar2 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					func_742(-1, 0, 0, -1, 0, 0);
				}
				func_332(86, "BIGM_HUNTN", "BIGM_HUNTPR", 1, -1, 2, 1);
			}
		}
		GAMEPLAY::SET_BIT(&uLocal_1431, 1);
	}
}

void func_742(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_171(PLAYER::PLAYER_ID());
		Global_1667085 = iVar0;
		Global_1667085.f_1 = iParam0;
		if (func_460() != func_63())
		{
			Global_1667085.f_2 = func_690(func_460());
			Global_1667085.f_3 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_1667085.f_2), &(Global_1667085.f_3));
		}
		Global_1667085.f_7 = NETWORK::_GET_POSIX_TIME();
		Global_1667085.f_28 = func_694(PLAYER::PLAYER_ID());
		Global_1667085.f_13 = 0;
		Global_1667085.f_14 = 0;
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667085.f_23 = func_697(func_237(1));
		}
	}
	else
	{
		iVar0 = func_101(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_305(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1666824 = iVar0;
		if (func_388(iVar0))
		{
			Global_1666824.f_1 = 4;
		}
		else if (func_387(iVar0))
		{
			Global_1666824.f_1 = 5;
		}
		else if (func_210(iVar0, 0))
		{
			Global_1666824.f_1 = 2;
			if (func_422(iVar0))
			{
				Global_1666824.f_1 = 3;
			}
		}
		else
		{
			Global_1666824.f_1 = 1;
		}
		if (func_460() != func_63())
		{
			Global_1666824.f_4 = func_690(func_460());
			Global_1666824.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_1666824.f_6), &(Global_1666824.f_7));
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
			Global_1666824.f_40 = func_453(iParam1);
			Global_1666824.f_41 = func_766();
			Global_1666824.f_42 = func_572(PLAYER::PLAYER_ID(), iParam1);
			Global_1666824.f_44 = func_685(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_440() || iVar0 != 192)
		{
			Global_1666824.f_53 = 0;
		}
	}
	else if (func_385(iVar0))
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
			Global_1666941 = func_765(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_419(PLAYER::PLAYER_ID()) == 0)
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
		if (func_460() != func_63())
		{
			Global_1666941.f_4 = func_690(func_460());
			Global_1666941.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_1666941.f_4), &(Global_1666941.f_5));
		}
		Global_1666941.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1666941.f_20 = iParam0;
		}
	}
	else if (func_310(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1666878 = iVar0;
		Global_1666824.f_1 = 1;
		if (func_460() != func_63())
		{
			Global_1666878.f_4 = func_690(func_460());
			Global_1666878.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_1666878.f_6), &(Global_1666878.f_7));
		}
		Global_1666878.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1666878.f_21 = iParam0;
		}
	}
	else if (func_383(iVar0))
	{
		Global_1666985 = iVar0;
		Global_1666985.f_1 = iParam0;
		Global_1666985.f_21 = 1;
		Global_1666985.f_22 = 1;
		if (func_460() != func_63())
		{
			Global_1666985.f_4 = func_690(func_460());
			Global_1666985.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_1666985.f_4), &(Global_1666985.f_5));
		}
		Global_1666985.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1666985.f_20 = iParam0;
		}
		Global_1666985.f_27 = func_678(func_19(), 5);
		Global_1666985.f_28 = func_697(func_550(PLAYER::PLAYER_ID()));
		Global_1666985.f_29 = func_428(6107, -1, 0);
		Global_1666985.f_30 = func_428(6103, -1, 0);
		Global_1666985.f_31 = func_428(6104, -1, 0);
		Global_1666985.f_32 = func_428(6106, -1, 0);
		Global_1666985.f_33 = func_428(6105, -1, 0);
		Global_1666985.f_34 = func_428(6108, -1, 0);
		Global_1666985.f_7 = func_696();
		Global_1666985.f_51 = func_697(bParam4);
	}
	else if (func_381(iVar0))
	{
		Global_1667039 = iVar0;
		Global_1667039.f_1 = iParam0;
		Global_1667039.f_21 = 1;
		Global_1667039.f_22 = 1;
		if (func_460() != func_63())
		{
			Global_1667039.f_4 = func_690(func_460());
			Global_1667039.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_1667039.f_4), &(Global_1667039.f_5));
		}
		Global_1667039.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1667039.f_20 = iParam0;
		}
		Global_1667039.f_24 = func_428(6157, -1, 0);
		Global_1667039.f_25 = func_428(6162, -1, 0);
		Global_1667039.f_26 = func_428(6163, -1, 0);
		Global_1667039.f_27 = func_697((((func_642() || func_641()) || func_640()) || func_639(PLAYER::PLAYER_ID())));
		Global_1667039.f_28 = func_428(6164, -1, 0);
		Global_1667039.f_29 = func_697(func_638());
		Global_1667039.f_31 = 0;
		Global_1667039.f_30 = 0;
		Global_1667039.f_32 = 0;
		Global_1667039.f_33 = 0;
		Global_1667039.f_34 = 0;
		Global_1667039.f_16 = 0;
		Global_1667039.f_7 = func_696();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_417(func_418(PLAYER::PLAYER_ID()))))
	{
		Global_1667173 = iVar0;
		Global_1667173.f_1 = iParam0;
		Global_1667173.f_21 = 1;
		Global_1667173.f_22 = 1;
		Global_1667173.f_7 = func_696();
		if (func_460() != func_63())
		{
			Global_1667173.f_4 = func_690(func_460());
			Global_1667173.f_5 = func_689(func_460());
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_1667173.f_4), &(Global_1667173.f_5));
		}
		if (func_460() != -1)
		{
			Global_1667173.f_17 = func_635(func_460());
		}
		Global_1667173.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1667173.f_28 = func_694(PLAYER::PLAYER_ID());
		Global_1667173.f_16 = 0;
		Global_1667173.f_24 = 0;
		Global_1667173.f_23 = 0;
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667173.f_33 = func_697(func_237(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1667120 = iVar0;
		Global_1667120.f_1 = iParam0;
		Global_1667120.f_21 = 1;
		Global_1667120.f_22 = 1;
		Global_1667120.f_7 = func_696();
		Global_1667120.f_24 = 0;
		Global_1667120.f_23 = 0;
		Global_1667120.f_16 = 0;
		if (func_460() != func_63())
		{
			Global_1667120.f_4 = func_690(func_460());
			Global_1667120.f_5 = func_689(func_460());
		}
		Global_1667120.f_28 = func_694(PLAYER::PLAYER_ID());
		if (Global_1667120.f_28)
		{
			Global_1667120.f_29 = func_629(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1667120.f_29 = 0;
		}
		Global_1667120.f_30 = func_613(PLAYER::PLAYER_ID(), 4, -1);
		Global_1667120.f_31 = func_632(PLAYER::PLAYER_ID());
		Global_1667120.f_32 = func_697(func_612(PLAYER::PLAYER_ID()));
		Global_1667120.f_33 = func_697(func_611(PLAYER::PLAYER_ID()));
		Global_1667120.f_34 = func_697(func_610(PLAYER::PLAYER_ID()));
		Global_1667120.f_35 = func_697(func_609(PLAYER::PLAYER_ID()));
		Global_1667120.f_36 = func_608(PLAYER::PLAYER_ID());
		Global_1667120.f_37 = func_607(PLAYER::PLAYER_ID());
		Global_1667120.f_39 = func_606(PLAYER::PLAYER_ID());
		if (func_179(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667120.f_41 = func_697(func_237(1));
		}
		if (func_240() != func_63())
		{
			func_459(func_240(), &(Global_1667120.f_4), &(Global_1667120.f_5));
		}
		Global_1667120.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1667120.f_28 = func_694(PLAYER::PLAYER_ID());
	}
	else
	{
		if (func_460() != func_63())
		{
			Global_1666806 = func_690(func_460());
			Global_1666806.f_1 = func_689(func_460());
		}
		Global_1666806.f_5 = NETWORK::_GET_POSIX_TIME();
		Global_1666806.f_13 = func_764();
		Global_1666806.f_15 = 0;
		if (func_458(1))
		{
			if (func_240() == func_460())
			{
				Global_1666806.f_15 = 1;
			}
		}
		if (func_763())
		{
			Global_1666941.f_28 = 1;
		}
		if (((((func_762() || func_761()) || func_760()) || func_759()) || func_757()) || func_756(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_30 = 1;
		}
		if (func_754(func_755(joaat("trailersmall2"))))
		{
			Global_1666941.f_32 = 1;
		}
		if (func_746(func_753(joaat("caddy"))))
		{
			Global_1666941.f_31 = 1;
		}
		if (func_677(PLAYER::PLAYER_ID()) || func_676(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_29 = 1;
		}
		if (func_673(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_33 = 1;
			Global_1666941.f_34 = 1;
		}
		if (func_674(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_36 = 1;
		}
		if (func_671(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1666941.f_35 = 1;
		}
		if (func_745(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1666941.f_37 = 1;
		}
		if (func_745(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1666941.f_38 = 1;
		}
		if (func_744(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_743(PLAYER::PLAYER_ID(), iVar2);
				if (func_569(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1666941.f_39 = 1;
				}
				if (func_569(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1666941.f_40 = 1;
				}
				if (func_569(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1666941.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_743(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_564(Global_1589747[iParam0 /*790*/].f_273.f_174[iParam1 /*12*/]))
	{
		uVar0 = Global_1589747[iParam0 /*790*/].f_273.f_174[iParam1 /*12*/];
	}
	return uVar0;
}

int func_744(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_63())
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

int func_745(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_63())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_671(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_746(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_751(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_656(11));
		func_655(iVar1, &iVar0, 1);
		iVar2 = func_751(func_748(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_428(func_747(4, iVar0), -1, 0);
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

int func_747(int iParam0, int iParam1)
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

int func_748(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 261)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (iParam0 >= func_656(iVar0) && iParam0 < func_749(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_749(int iParam0)
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
		iVar0 = func_659(iParam0);
		return func_750(iVar0);
	}
	return (func_657(iParam0, -1) * iParam0 + 1);
}

int func_750(int iParam0)
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

int func_751(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_19();
	}
	if (iParam0 == 7 && !Global_262145.f_16856)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_659(iParam0);
		if (iVar1 == 0 && func_428(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_752(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_694(PLAYER::PLAYER_ID()) && iVar1 == 1)
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

bool func_752(int iParam0)
{
	if (!Global_262145.f_23522)
	{
		return 0;
	}
	return func_428(7207, iParam0, 0) != 0;
}

int func_753(int iParam0)
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

int func_754(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_655(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_428(func_747(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_756(int iParam0)
{
	if (iParam0 != func_63())
	{
		if (Global_1589747[iParam0 /*790*/].f_273.f_330 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_757()
{
	return func_428(func_758(3), -1, 0) != 0;
}

int func_758(int iParam0)
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

bool func_759()
{
	return func_428(6163, -1, 0) != 0;
}

bool func_760()
{
	return func_428(5380, -1, 0) != 0;
}

bool func_761()
{
	return func_428(3828, -1, 0) != 0;
}

bool func_762()
{
	return func_428(3223, -1, 0) != 0;
}

bool func_763()
{
	return func_428(5379, -1, 0) != 0;
}

int func_764()
{
	int iVar0;
	
	iVar0 = func_460();
	if (iVar0 != func_63())
	{
		return Global_1625435[iVar0 /*560*/].f_11.f_93;
	}
	return 0;
}

int func_765(int iParam0)
{
	if (func_101(iParam0) == 225 || func_101(iParam0) == 226)
	{
		return func_419(iParam0);
	}
	return -1;
}

var func_766()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_571(PLAYER::PLAYER_ID(), iVar0))
		{
			GAMEPLAY::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_767(bool bParam0)
{
	if (bParam0)
	{
		if (!func_105(PLAYER::PLAYER_ID(), 9))
		{
			if (func_130(PLAYER::PLAYER_ID()) != 0)
			{
				func_106(9);
			}
		}
	}
	else if (func_105(PLAYER::PLAYER_ID(), 9))
	{
		func_104(9);
	}
}

int func_768(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_769(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_769(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_779();
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
	if (func_778() == 0)
	{
		func_776();
		return 0;
	}
	func_775(Global_16889);
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
		func_774(0);
		func_774(2);
		func_774(1);
	}
	else
	{
		func_779();
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
					func_774(0);
					Global_3089 = 0;
					break;
				
				case 1:
					func_774(1);
					Global_3089 = 1;
					break;
				
				case 2:
					func_774(2);
					Global_3089 = 2;
					break;
				
				case 3:
					func_774(3);
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
		func_779();
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
			if (!func_403())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_773(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_770(1);
			func_773(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_770(int iParam0)
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
		if (func_772(14))
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
								func_158(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_771(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_771(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_771(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_771(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(uVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_771(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_158(&(Global_2390[iVar1 /*15*/]));
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
								func_158(&(Global_2390[iVar1 /*15*/]));
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
								func_158(&(Global_2390[iVar1 /*15*/]));
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
								func_158(&(Global_2390[iVar1 /*15*/]));
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
								func_158(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_771(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_771(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_771(var uParam0, char* sParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_158(uParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_158(iParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_158(iParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_158(iParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_158(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_772(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_773(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_774(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106070.f_14023[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_775(int iParam0)
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

void func_776()
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
		if (!func_777(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
		{
			Global_16889 = iVar2;
		}
		iVar2++;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_24 = 1;
}

int func_777(struct<6> Param0, struct<6> Param6)
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

int func_778()
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
			if (!func_777(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
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

void func_779()
{
	if (func_772(14))
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
		Global_14513 = func_780();
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

var func_780()
{
	func_781();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_781()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_784(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_783(PLAYER::PLAYER_PED_ID());
			if (func_782(iVar0) && (!func_772(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_782(Global_106070.f_2355.f_539.f_4301))
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

bool func_782(int iParam0)
{
	return iParam0 < 3;
}

int func_783(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_784(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_784(int iParam0)
{
	if (func_782(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_785()
{
	if (!func_733())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312576.f_9)
	{
		return;
	}
	func_729();
}

void func_786()
{
	if (func_17(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9)
	{
		case 0:
			func_788();
			func_298();
			if (Local_110.f_117 == 2)
			{
				Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 2;
			}
			else if (Local_110.f_117 == 3)
			{
				Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_298();
			if (func_787())
			{
				func_720();
			}
			if (Local_110.f_117 == 3)
			{
				Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_869();
			break;
	}
}

bool func_787()
{
	return ((GAMEPLAY::IS_BIT_SET(Local_110.f_1, 1) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 3)) || GAMEPLAY::IS_BIT_SET(Local_110.f_1, 5));
}

void func_788()
{
	func_808();
	func_807();
	func_741();
	func_723();
	func_797();
	func_796();
	func_791();
	func_790();
	func_708();
	func_789();
}

void func_789()
{
}

void func_790()
{
	if (func_787())
	{
		return;
	}
	if (!func_855())
	{
		return;
	}
	if (!Global_262145.f_14891)
	{
		return;
	}
	if (Local_110.f_115 == 0)
	{
		return;
	}
}

void func_791()
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	if (func_855())
	{
		return;
	}
	if (func_787())
	{
		return;
	}
	fVar4 = func_140(&iVar0, 1);
	if (fVar4 < 62500f)
	{
		if (iVar0 > -1)
		{
			if (iLocal_1438 != iVar0)
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 0) };
				func_90(10, 0, 0, 0, 0);
				func_792(vVar1, 0f, 250f, 1, 75f, 0, 1, 65f, 1, 0, 0, 1, -1082130432);
				iLocal_1438 = iVar0;
				GAMEPLAY::SET_BIT(&uLocal_1431, 16);
			}
		}
	}
	else if (fVar4 > 250000f)
	{
		func_328();
	}
}

void func_792(vector3 vParam0, float fParam3, float fParam4, int iParam5, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
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
	if (func_793(PLAYER::PLAYER_ID()))
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

int func_793(int iParam0)
{
	if (((func_794(iParam0, 1) || func_128(iParam0)) || func_102(iParam0, 0)) || func_372(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_794(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_795(iParam0) != 0;
	}
	return func_266(iParam0, bParam1);
}

int func_795(int iParam0)
{
	if (func_956(iParam0, 0, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_1;
	}
	return 0;
}

void func_796()
{
	int iVar0;
	
	if (iLocal_1435 != Local_110.f_115)
	{
		if (func_855())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
					{
						iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
						switch (Local_110.f_115)
						{
							case 1:
								if (iVar0 < Global_262145.f_14888)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_14888, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
							
							case 2:
								if (iVar0 < Global_262145.f_14889)
								{
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_14889, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
							
							case 3:
								if (iVar0 < Global_262145.f_14890)
								{
									PLAYER::SET_MAX_WANTED_LEVEL(Global_262145.f_14890);
									PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), Global_262145.f_14890, 0);
									PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								}
								break;
						}
						iLocal_1435 = Local_110.f_115;
					}
				}
			}
		}
		else
		{
			iLocal_1435 = Local_110.f_115;
		}
	}
}

void func_797()
{
	int iVar0;
	
	if (!func_366())
	{
		if (func_806("HUNT_HELPA", "HUNT_TARBLP"))
		{
			UI::CLEAR_HELP(1);
		}
		return;
	}
	iVar0 = func_130(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (func_806("HUNT_HELPA", "HUNT_TARBLP"))
		{
			UI::CLEAR_HELP(1);
		}
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 2))
	{
		if (!func_805(86))
		{
			if (func_799(0, 1, 1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_110.f_118)
				{
					func_798("HUNT_HELPA", "HUNT_TARBLP", 6, -1);
					func_307(1);
					GAMEPLAY::SET_BIT(&uLocal_1431, 2);
				}
				else if (func_856() == Local_110.f_118)
				{
					func_798("HUNT_HELPAG", "HUNT_TARBLP", 6, -1);
					func_307(1);
					GAMEPLAY::SET_BIT(&uLocal_1431, 2);
				}
				else if (func_286())
				{
					func_798("HUNT_HELPD", "HUNT_TARRVL", 9, -1);
					func_307(1);
					GAMEPLAY::SET_BIT(&uLocal_1431, 2);
				}
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1431, 2))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 3))
		{
			if (func_799(0, 1, 1, 1))
			{
				if (!func_806("HUNT_HELPA", "HUNT_TARBLP"))
				{
					if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_110.f_118 || func_856() == Local_110.f_118)
					{
						func_308("HUNT_HELPB", -1);
						func_307(1);
						GAMEPLAY::SET_BIT(&uLocal_1431, 3);
					}
				}
			}
		}
	}
}

void func_798(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam3);
}

int func_799(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_804())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_276())
	{
		return 0;
	}
	if (func_404())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_266(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_803(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_802())
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
	if (func_801())
	{
		return 0;
	}
	if (func_800())
	{
		return 0;
	}
	if (func_269())
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

bool func_800()
{
	return Global_2448386.f_580;
}

bool func_801()
{
	return Global_2448386.f_733;
}

bool func_802()
{
	return Global_2437022.f_3028.f_578;
}

int func_803(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_804()
{
	if (Global_15822 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_805(int iParam0)
{
	return Global_2437022.f_2704[0 /*80*/].f_1 == iParam0;
}

bool func_806(char* sParam0, char* sParam1)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_807()
{
	var uVar0;
	float fVar1;
	
	fVar1 = func_140(&uVar0, 0);
	if (fVar1 < 10000f)
	{
		if (!func_123(PLAYER::PLAYER_ID()))
		{
			func_122();
		}
	}
}

void func_808()
{
	if (func_133())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
		{
			func_108(0);
			GAMEPLAY::CLEAR_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
		}
		return;
	}
	if (func_130(PLAYER::PLAYER_ID()) == 0)
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1, 1))
	{
		if (!func_855())
		{
			if (!func_132())
			{
				if (GAMEPLAY::IS_BIT_SET(Local_110.f_1, 6))
				{
					func_108(1);
					GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_1), 1);
				}
			}
		}
	}
}

void func_809()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar4 = func_63();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2, iVar0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_110, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_856() == Local_110.f_118)
							{
								if (func_827(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1)))
								{
									GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_2), iVar0);
								}
							}
						}
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3, iVar0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_112, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
				{
					if (func_826(iVar0))
					{
						GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_3), iVar0);
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4, iVar0))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_110.f_111, iVar0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (GAMEPLAY::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 1), 10f, 1))
						{
							GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_4), iVar0);
						}
					}
				}
			}
		}
		func_825(iVar0);
		if (func_366())
		{
			if (!UI::DOES_BLIP_EXIST(uLocal_1446[iVar0]))
			{
				if (!func_787())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							uLocal_1446[iVar0] = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1));
							if (func_856() == Local_110.f_118)
							{
								UI::SET_BLIP_PRIORITY(uLocal_1446[iVar0], 12);
								UI::SET_BLIP_SPRITE(uLocal_1446[iVar0], 432);
								func_824(&(uLocal_1446[iVar0]), 6);
							}
							else
							{
								UI::SET_BLIP_SPRITE(uLocal_1446[iVar0], 480);
								func_824(&(uLocal_1446[iVar0]), 9);
							}
							UI::SET_BLIP_FLASHES(uLocal_1446[iVar0], 1);
							UI::SET_BLIP_FLASH_TIMER(uLocal_1446[iVar0], 7000);
							UI::SET_BLIP_SCALE(uLocal_1446[iVar0], 1.1f);
							UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_1446[iVar0], "HUNT_BLIP");
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
			{
				if (func_14(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					UI::REMOVE_BLIP(&(uLocal_1446[iVar0]));
				}
				else if (func_787())
				{
					UI::REMOVE_BLIP(&(uLocal_1446[iVar0]));
				}
			}
		}
		else if (UI::DOES_BLIP_EXIST(uLocal_1446[iVar0]))
		{
			UI::REMOVE_BLIP(&(uLocal_1446[iVar0]));
		}
		func_823(iVar0);
		func_822(iVar0);
		func_820(iVar0);
		switch (Local_110.f_2[iVar0 /*26*/].f_17)
		{
			case 1:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
					{
						if (func_12(Local_110.f_2[iVar0 /*26*/].f_2))
						{
							if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2)))
								{
									if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), -258271821) != 0)
									{
										AI::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2), 20f, 786603);
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							if (func_12(Local_110.f_2[iVar0 /*26*/].f_2))
							{
								if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2)))
									{
										if ((AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), -258271821) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), -258271821) != 0) || GAMEPLAY::IS_BIT_SET(Local_110.f_108, iVar0))
										{
											AI::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), NETWORK::NET_TO_VEH(Local_110.f_2[iVar0 /*26*/].f_2), 30f, 786469);
											if (GAMEPLAY::IS_BIT_SET(Local_110.f_108, iVar0))
											{
												GAMEPLAY::CLEAR_BIT(&(Local_110.f_108), iVar0);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), -828834893) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), -828834893) != 0)
						{
							if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									AI::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
				break;
			
			case 5:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), -1146898486) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), -1146898486) != 0)
							{
								if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
									{
										AI::TASK_WANDER_STANDARD(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 1193033728, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 1805844857) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 1805844857) != 0)
							{
								if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
									{
										uVar2 = func_816(iVar0);
										if (!PED::IS_PED_INJURED(uVar2))
										{
											AI::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), uVar2, 500f, -1, 0, 1);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), -1442466670);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 0);
									AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 9:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
						{
							PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 187, 1);
						}
						iVar3 = AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 1910705116);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									PED::SET_PED_TO_LOAD_COVER(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 1);
									fVar5 = 0f;
									iVar4 = func_815(iVar0, &fVar5);
									if (iVar4 != func_63())
									{
										AI::TASK_SEEK_COVER_FROM_PED(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), PLAYER::GET_PLAYER_PED(iVar4), -1, 0);
									}
								}
							}
						}
					}
				}
				break;
			
			case 8:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
				{
					if (!func_14(Local_110.f_2[iVar0 /*26*/].f_1))
					{
						iVar3 = AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), 993674639);
						if (iVar3 != 1 && iVar3 != 0)
						{
							if (func_818(Local_110.f_2[iVar0 /*26*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
								{
									AI::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), "WORLD_HUMAN_SMOKING", 0, 0);
								}
							}
						}
					}
				}
				break;
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			switch (Local_110.f_2[iVar0 /*26*/].f_18[iVar1])
			{
				case 0:
					break;
				
				case 1:
					break;
				
				case 8:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 993674639);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_818(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										AI::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), "WORLD_HUMAN_GUARD_STAND", 0, 0);
									}
								}
							}
						}
					}
					break;
				
				case 7:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_818(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 6:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							iVar3 = AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), -1442466670);
							if (iVar3 != 1 && iVar3 != 0)
							{
								if (func_818(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 0);
										AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 299f, 0);
									}
								}
							}
						}
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
					{
						if (!func_14(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1])))
							{
								iVar3 = AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), -828834893);
								if (iVar3 != 1 && iVar3 != 0)
								{
									if (func_818(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 1);
											AI::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 299, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), 3, 1);
										}
									}
								}
							}
						}
					}
					break;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (func_855())
	{
		func_810();
	}
}

void func_810()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		func_811(uLocal_1692[iVar0], &(Local_1451[iVar0 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
		iVar0++;
	}
}

void func_811(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (func_814())
		{
			Global_2437022 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_813(NETWORK::NET_TO_PED(uParam0), uParam1, 1, Global_2437022, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_813(NETWORK::NET_TO_PED(uParam0), uParam1, -1, Global_2437022, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (UI::DOES_BLIP_EXIST(*uParam1))
	{
		func_812(uParam1);
	}
}

void func_812(var uParam0)
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

int func_813(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, bool bParam10)
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

bool func_814()
{
	return Global_1312834;
}

int func_815(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	var uVar8;
	
	iVar0 = func_63();
	fVar1 = 1E+08f;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1) };
	iVar6 = 0;
	while (iVar6 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar6)))
		{
			iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar6));
			if (!func_17(iVar7, 0))
			{
				uVar8 = PLAYER::GET_PLAYER_PED(iVar7);
				if (iVar6 == Local_110.f_118 || Local_982[iVar6 /*14*/].f_10 == Local_110.f_118)
				{
					if (!PED::IS_PED_INJURED(uVar8))
					{
						fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar8, 1), vVar3);
						if (fVar2 < fVar1)
						{
							fVar1 = fVar2;
							iVar0 = iVar7;
						}
					}
				}
			}
		}
		iVar6++;
	}
	if (iVar0 != func_63())
	{
		*fParam1 = fVar1;
	}
	return iVar0;
}

var func_816(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_817(iParam0);
	if (iVar1 != func_63())
	{
		uVar0 = PLAYER::GET_PLAYER_PED(iVar1);
	}
	return uVar0;
}

int func_817(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	var uVar8;
	
	iVar0 = func_63();
	fVar1 = 1E+10f;
	fVar2 = 0f;
	vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 0) };
	iVar3 = 0;
	while (iVar3 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
		{
			iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
			uVar8 = PLAYER::GET_PLAYER_PED(iVar7);
			if (func_179(iVar7, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_982[iVar3 /*14*/].f_1, 1))
				{
					if (func_64(iVar7) == NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_118)))
					{
						if (!PED::IS_PED_INJURED(uVar8))
						{
							fVar2 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar8, 1), vVar4);
							if (fVar2 < fVar1)
							{
								fVar1 = fVar2;
								iVar0 = iVar7;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_818(var uParam0)
{
	if (NETWORK::_NETWORK_CAN_NETWORK_ID_BE_SEEN(uParam0))
	{
		return 1;
	}
	if (func_819(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_819(var uParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0))
	{
		return 0;
	}
	if (func_42(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_820(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	vector3 vVar4;
	var uVar7;
	
	if (!func_366())
	{
		return;
	}
	if (func_130(PLAYER::PLAYER_ID()) < 1)
	{
		return;
	}
	if (!func_855() && !func_286())
	{
		return;
	}
	if (func_787())
	{
		return;
	}
	if (func_855())
	{
		UI::GET_HUD_COLOUR(6, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		UI::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		if (!func_14(Local_110.f_2[iParam0 /*26*/].f_1))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1)))
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1) };
				GRAPHICS::DRAW_MARKER(2, vVar4 + Vector(2f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
			else
			{
				uVar7 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 0);
				func_821(uVar7, uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_821(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4)
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

void func_822(int iParam0)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	
	if (Local_110.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_110.f_2[iParam0 /*26*/].f_25)
	{
		return;
	}
	if (func_856() != Local_110.f_118)
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(uVar0, 0) };
	if (SYSTEM::VDIST2(vVar1, vVar4) < 5625f)
	{
		GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	bVar8 = false;
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar7]))
		{
			if (!func_14(Local_110.f_2[iParam0 /*26*/].f_3[iVar7]))
			{
				bVar8 = true;
			}
		}
		iVar7++;
	}
	if (!bVar8)
	{
		GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_13), iParam0);
	}
}

void func_823(int iParam0)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	var uVar7;
	int iVar8;
	
	if (Local_110.f_2[iParam0 /*26*/] != 2)
	{
		return;
	}
	if (Local_110.f_2[iParam0 /*26*/].f_24)
	{
		return;
	}
	if (func_856() != Local_110.f_118)
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12, iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		return;
	}
	if (func_14(Local_110.f_2[iParam0 /*26*/].f_1))
	{
		GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	uVar0 = NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(uVar0, 0) };
	if (SYSTEM::VDIST2(vVar1, vVar4) < 62500f)
	{
		GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_3[iVar8]))
		{
			if (func_14(Local_110.f_2[iParam0 /*26*/].f_3[iVar8]))
			{
				GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
			}
			else
			{
				uVar7 = NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_3[iVar8]);
				if (func_856() == Local_110.f_118)
				{
					if (SYSTEM::VDIST2(vVar1, vVar4) < 40000f)
					{
						GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
						return;
					}
					if (func_827(uVar7))
					{
						GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_12), iParam0);
						return;
					}
				}
			}
		}
		iVar8++;
	}
}

void func_824(var uParam0, int iParam1)
{
	var uVar0;
	
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		uVar0 = func_325(iParam1);
		UI::SET_BLIP_COLOUR(*uParam0, uVar0);
	}
}

void func_825(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	
	if (Local_110.f_2[iParam0 /*26*/] == 0)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_1))
			{
				if (!func_14(Local_110.f_2[iParam0 /*26*/].f_1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 0))
					{
						fVar0 = ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1));
						if (fVar0 < 0.1f)
						{
							vVar2 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 1) };
							vVar5 = { vVar2 };
							vVar5.z = (vVar5.z + 500f);
							if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(vVar5, &fVar1, 0, 0))
							{
								if (GAMEPLAY::ABSF((vVar2.z - fVar1)) > 30f)
								{
									ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_110.f_2[iParam0 /*26*/].f_1), 0, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_826(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iParam0 /*26*/].f_2))
	{
		if (func_12(Local_110.f_2[iParam0 /*26*/].f_2))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_110.f_2[iParam0 /*26*/].f_2), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_827(var uParam0)
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
	if (func_828())
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

bool func_828()
{
	return Global_1574387;
}

void func_829()
{
	int iVar0;
	int iVar1;
	
	if (Local_110 != 4)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iLocal_1434);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
			{
				if (!func_787())
				{
					if (!func_855())
					{
						if (func_286())
						{
							if (func_179(iVar1, 1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_118));
								if (func_74(iVar1, iVar0, 1))
								{
									if (!GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_1434))
									{
										func_326(iVar1, 432, 1, 0);
										func_320(iVar1, func_325(iLocal_1723), 1, 0);
										GAMEPLAY::SET_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_1434);
									}
								}
							}
						}
					}
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8, iLocal_1434))
			{
				func_326(iVar1, 432, 0, 0);
				func_320(iVar1, func_325(iLocal_1723), 0, 0);
				GAMEPLAY::CLEAR_BIT(&(Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_8), iLocal_1434);
			}
		}
	}
	iLocal_1434++;
	if (iLocal_1434 >= 32)
	{
		iLocal_1434 = 0;
	}
}

int func_830(bool bParam0)
{
	if (func_834(1))
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
		if (func_240() == func_63() || !func_956(func_240(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_375(PLAYER::PLAYER_ID()))
	{
		if (func_833(PLAYER::PLAYER_ID()) && func_831(func_832(PLAYER::PLAYER_ID()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_831(int iParam0, int iParam1)
{
	return func_317(iParam0) == iParam1;
}

int func_832(int iParam0)
{
	if (iParam0 != func_63() && func_956(iParam0, 1, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_309.f_13;
	}
	return -1;
}

int func_833(int iParam0)
{
	if (iParam0 != func_63() && func_956(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_309, 4);
	}
	return 0;
}

int func_834(bool bParam0)
{
	bool bVar0;
	
	if (!func_458(1))
	{
		bVar0 = false;
		if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 != func_63())
		{
			if (func_956(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57, 0, 1))
			{
				if ((Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 4 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 8) || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_835(func_101(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_513(31);
				if (func_305(func_101(PLAYER::PLAYER_ID())))
				{
					func_513(81);
				}
				if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 != func_63() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57))
				{
					Global_1623923 = func_344(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_239(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57))
					{
						func_513(88);
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

int func_835(int iParam0)
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

void func_836()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar1 /*26*/].f_1))
		{
			if (Local_110.f_2[iVar1 /*26*/] == 2)
			{
				if (func_43(iVar1))
				{
					iVar2 = 0;
					iVar2 = 0;
					while (iVar2 < 3)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar1 /*26*/].f_3[iVar2]))
						{
							uLocal_1692[iVar0] = Local_110.f_2[iVar1 /*26*/].f_3[iVar2];
							iVar0++;
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_837()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = (NETWORK::PARTICIPANT_ID_TO_INT() == Local_110.f_118 || func_856() == Local_110.f_118);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!bVar2)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
			{
				PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_1), PLAYER::PLAYER_ID(), 0);
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]))
				{
					PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_110.f_2[iVar0 /*26*/].f_3[iVar1]), PLAYER::PLAYER_ID(), 0);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_838()
{
	if (Local_110.f_118 > -1)
	{
		iLocal_1723 = func_706(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_110.f_118)));
	}
}

void func_839(float fParam0)
{
	float fVar0;
	
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_323())
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

void func_840(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 != iParam0)
	{
		func_854(-1);
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 = iParam0;
		if (func_853() != -1)
		{
			func_852(-1);
		}
		if (func_851() != -1)
		{
			func_850(-1);
		}
		func_849(iParam2);
		func_847(iParam0);
		if (!func_112(iParam0))
		{
			fVar0 = func_111(iParam0);
			if (fVar0 != 1f)
			{
				func_839(fVar0);
				GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 1);
			}
		}
		if (!func_115(iParam0) || iParam3)
		{
			if (func_113(iParam0, iParam2) && iParam3 == 1)
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
		if (func_132())
		{
			func_106(27);
		}
		if (bParam1)
		{
			if (!func_133())
			{
				func_108(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 1) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 4)) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 0))
			{
				func_513(6);
			}
			func_846();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 0);
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 0);
		}
		if (func_128(PLAYER::PLAYER_ID()) && func_120(PLAYER::PLAYER_ID()))
		{
			GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 8);
		}
		func_842();
		if (func_841(iParam0))
		{
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 0);
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 0);
			GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 6);
		}
		Global_2524719.f_6236 = 0;
	}
}

int func_841(int iParam0)
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

void func_842()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_845();
	iVar2 = func_64(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_74(iVar1, iVar2, 1) || func_843(iVar1, PLAYER::PLAYER_ID()))
			{
				unk_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, uVar3);
				unk_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_843(int iParam0, int iParam1)
{
	if (func_179(iParam0, 1) && func_179(iParam1, 1))
	{
		return (func_844(iParam0) == func_64(iParam1) || func_844(iParam1) == func_64(iParam0));
	}
	return 0;
}

int func_844(int iParam0)
{
	if (func_179(iParam0, 1))
	{
		return Global_1625435[func_64(iParam0) /*560*/].f_11.f_443;
	}
	return func_63();
}

int func_845()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_460();
	if (iVar0 != func_63())
	{
		if (func_956(iVar0, 0, 1))
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

void func_846()
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

void func_847(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_428(3791, -1, 0);
	iVar1 = func_848(iParam0);
	if (iVar1 != -1)
	{
		GAMEPLAY::SET_BIT(&iVar0, iVar1);
		func_426(3791, iVar0, -1, 1, 0);
	}
}

int func_848(int iParam0)
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

void func_849(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1625435[iVar0 /*560*/].f_11.f_176 != iParam0)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_176 = iParam0;
	}
}

void func_850(int iParam0)
{
	if (Global_2524719.f_4883.f_331 != iParam0)
	{
		Global_2524719.f_4883.f_331 = iParam0;
	}
}

int func_851()
{
	return Global_2524719.f_4883.f_331;
}

void func_852(int iParam0)
{
	if (Global_2524719.f_4883.f_330 != iParam0)
	{
		Global_2524719.f_4883.f_330 = iParam0;
	}
}

int func_853()
{
	return Global_2524719.f_4883.f_330;
}

void func_854(int iParam0)
{
	Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_32 = iParam0;
}

int func_855()
{
	int iVar0;
	
	iVar0 = func_856();
	if (iVar0 > -1)
	{
		if (Local_110.f_118 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_856()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = func_63();
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		iVar1 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar0 = func_287();
		iVar1 = Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_655;
	}
	if (iVar0 == -1)
	{
		return -1;
	}
	if (Local_982[iVar0 /*14*/].f_10 != -1)
	{
		return Local_982[iVar0 /*14*/].f_10;
	}
	if (func_119(iVar1))
	{
		Local_982[iVar0 /*14*/].f_10 = iVar0;
		if (iVar0 == Local_110.f_118)
		{
			func_767(1);
		}
	}
	else if (func_179(iVar1, 1))
	{
		iVar2 = func_64(iVar1);
		if (iVar2 != func_63())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
			{
				Local_982[iVar0 /*14*/].f_10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
			}
		}
	}
	return Local_982[iVar0 /*14*/].f_10;
}

int func_857()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_110.f_2[iVar0 /*26*/].f_1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_43(iVar0))
		{
			if (!func_34(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_32(iVar0))
		{
			if (!func_27(iVar0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_858()
{
	return Local_110;
}

int func_859(int iParam0)
{
	return Local_982[iParam0 /*14*/];
}

int func_860()
{
	var uVar0;
	
	func_865(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_864())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_863())
	{
		return 1;
	}
	if (func_862(157))
	{
		if (!func_861())
		{
			return 1;
		}
	}
	if (func_862(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_323() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_323()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_861()
{
	return Global_2448386.f_587;
}

int func_862(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_863()
{
	return Global_2458191;
}

bool func_864()
{
	return Global_2448386.f_582;
}

void func_865(var uParam0)
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
					func_866(iVar0);
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

void func_866(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_956(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_867(uVar4, &bVar5))
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

int func_867(var uParam0, var uParam1)
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

void func_868()
{
	SYSTEM::WAIT(0);
}

void func_869()
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_17(PLAYER::PLAYER_ID(), 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_1431, 6))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_855() || func_286())
				{
					func_603(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
					GAMEPLAY::SET_BIT(&uLocal_1431, 6);
				}
			}
		}
		uVar0 = Local_110.f_115;
		uVar1 = Local_110.f_121;
		iVar2 = -1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar2 = Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/].f_11;
		}
		func_915(uVar0, uVar1, iVar2, -1082130432);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_1436)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), uLocal_1437);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1431, 18))
	{
		func_331(1);
		GAMEPLAY::CLEAR_BIT(&uLocal_1431, 18);
	}
	func_914();
	if (Local_110.f_119 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_1431, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_110.f_119)))
			{
			}
		}
	}
	if (func_79(0))
	{
		func_78(0);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar3 = 0;
			while (iVar3 < 5)
			{
				if (GAMEPLAY::IS_BIT_SET(Local_110.f_871, iVar3))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_110.f_865[iVar3], 1);
				}
				iVar3++;
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_1431, 17))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(uLocal_1725);
		GAMEPLAY::CLEAR_BIT(&uLocal_1431, 17);
	}
	func_328();
	GAMEPLAY::SET_BIT(&uLocal_1432, 8);
	func_720();
	OBJECT::_0x78857FC65CADB909(1);
	func_767(0);
	func_871(1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_319();
	func_870();
}

void func_870()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_871(bool bParam0, int iParam1)
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
		func_912();
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 4);
	}
	if ((func_456() && iParam1 != 0) && Global_262145.f_16853)
	{
		if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 190 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 192)
		{
			func_894(PLAYER::PLAYER_ID(), iParam1, 1, 0);
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
		if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 14) && !func_128(PLAYER::PLAYER_ID()))
		{
			func_108(0);
		}
	}
	else if (func_892(PLAYER::PLAYER_ID()) != -1)
	{
		func_854(-1);
	}
	func_891(func_63());
	if (func_79(16))
	{
		func_78(16);
	}
	func_888(0);
	func_849(-1);
	func_887();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_886(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_884(iVar1);
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
	iVar2 = func_312();
	if ((func_209(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_883(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_388(iVar2))
	{
		func_880(-1, 1);
	}
	else if (((((func_311(iVar2) || func_879(iVar2)) || func_878(iVar2)) || func_385(iVar2)) || func_383(iVar2)) || func_381(iVar2))
	{
	}
	else
	{
		func_880(-1, 1);
	}
	func_104(19);
	func_104(20);
	func_104(21);
	func_104(22);
	func_104(27);
	func_78(3);
	func_78(4);
	func_78(7);
	func_877();
	if (func_120(PLAYER::PLAYER_ID()))
	{
		func_767(0);
	}
	func_104(29);
	Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 = func_63();
	if (Global_2524719.f_4883.f_35 != 0)
	{
		Global_2524719.f_4883.f_35 = 0;
	}
	if (bParam0)
	{
		func_80();
	}
	if (!func_128(PLAYER::PLAYER_ID()))
	{
		func_103();
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
		func_876("IMPEXP_SELFDES", 0);
		func_874("IMPEXP_SELFDES");
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 8);
	}
	func_872(iVar2, 0);
}

void func_872(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_873(iParam0));
			GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 9);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_873(iParam0));
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 9);
	}
}

char* func_873(int iParam0)
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

void func_874(char* sParam0)
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
					func_779();
					Global_106070.f_14113[iVar0 /*104*/].f_99[Global_14513] = 0;
					if (func_875(iVar0))
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

int func_875(int iParam0)
{
	if ((Global_106070.f_14113[iParam0 /*104*/].f_99[0] == 1 || Global_106070.f_14113[iParam0 /*104*/].f_99[1] == 1) || Global_106070.f_14113[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_876(char* sParam0, int iParam1)
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

void func_877()
{
	if (func_123(PLAYER::PLAYER_ID()))
	{
		func_104(25);
	}
}

int func_878(int iParam0)
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

int func_879(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_880(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_312();
	}
	if (iParam0 > 0)
	{
		if (func_460() != func_63())
		{
			if (func_376(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2504301.f_93[func_882(iParam0)] = 1;
			}
		}
		iVar0 = func_882(159);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(157);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(148);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(164);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(142);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(152);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(166);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(170);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(173);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(179);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(200);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(201);
		if (func_881(iVar0, Global_262145.f_12493, bParam1))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(182);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(183);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(185);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(186);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(180);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(195);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(197);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(198);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(207);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(208);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(209);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(214);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(215);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(216);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(217);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(218);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(219);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(220);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(221);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_881(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_105(PLAYER::PLAYER_ID(), 19) && !func_105(PLAYER::PLAYER_ID(), 20)) && !func_105(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2504301.f_93[iParam0] == 1 && func_8(&(Global_2504301[iParam0 /*2*/])))
	{
		if (func_722(&(Global_2504301[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2504301.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_882(int iParam0)
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

void func_883(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_312();
	}
	if (iParam0 > 0)
	{
		if (func_460() != func_63())
		{
			Global_2504301.f_93[func_882(iParam0)] = 1;
		}
		iVar0 = func_882(155);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(163);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(160);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(153);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(162);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(154);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(171);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(172);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(199);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(194);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(193);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(210);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(205);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(189);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_882(211);
		if (func_881(iVar0, Global_262145.f_12494, 0))
		{
			func_151(&(Global_2504301[iVar0 /*2*/]));
			func_7(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_884(int iParam0)
{
	if (!func_28(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_303[iParam0 /*3*/], func_885(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_303[iParam0 /*3*/] = { func_885() };
	}
	if (!func_28(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_290[iParam0 /*3*/], func_885(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_290[iParam0 /*3*/] = { func_885() };
	}
}

Vector3 func_885()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_886(int iParam0)
{
	if (!func_28(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_145[iParam0 /*3*/], func_885(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_145[iParam0 /*3*/] = { func_885() };
	}
	if (!func_28(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_120[iParam0 /*3*/], func_885(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_120[iParam0 /*3*/] = { func_885() };
	}
}

void func_887()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573886 = { Var0 };
	Global_1573886.f_13 = func_63();
	if (GAMEPLAY::IS_BIT_SET(Global_1573342, 3))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1573342, 3);
	}
}

void func_888(bool bParam0)
{
	if (bParam0)
	{
		if (!func_406(PLAYER::PLAYER_ID(), 14))
		{
			func_890(14);
		}
	}
	else if (func_406(PLAYER::PLAYER_ID(), 14))
	{
		func_889(14);
	}
}

void func_889(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_5), iParam0);
}

void func_890(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_5), iParam0);
}

void func_891(int iParam0)
{
	if (func_119(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_443 != iParam0)
			{
				Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_443 = iParam0;
				if (iParam0 != func_63())
				{
				}
			}
		}
	}
}

int func_892(int iParam0)
{
	if (func_893(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_32;
	}
	return -1;
}

int func_893(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_32 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_894(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_571(iParam0, iParam1) && func_911(iParam0, iParam1))
	{
		iVar0 = func_570(iParam0, iParam1);
		func_898(iVar0, bParam2, bParam3);
		func_895(iVar0, 1);
	}
}

void func_895(int iParam0, int iParam1)
{
	if (!func_897(iParam0))
	{
		return;
	}
	func_557(func_896(iParam0), iParam1, -1, 1);
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_6 = iParam1;
}

int func_896(int iParam0)
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

bool func_897(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_898(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_743(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_910(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2503901[iParam0];
		iVar0 = func_909(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1668516 = -1;
		}
		func_908(iParam0, 0, bParam2);
	}
	else if (func_906(iParam0, bParam2))
	{
		iVar0 = func_905(iVar2, 0);
		uVar3 = func_685(PLAYER::PLAYER_ID(), iVar2);
		uVar4 = func_904(iVar2, bParam2);
		iVar5 = func_905(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(uVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(uVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_903(iVar2) && func_902(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_910(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_901(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_900(iParam0, (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2 - (func_904(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_905(iVar2, bParam2) / func_901(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_903(iVar2) && func_902(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_899(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_899(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return;
	}
	if (func_564(iParam1))
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

void func_900(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2)
	{
		Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_901(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_564(iParam1))
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

int func_902(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_63())
	{
		return 0;
	}
	if (func_564(iParam1) && func_903(iParam1))
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

bool func_903(int iParam0)
{
	return func_453(iParam0) == 5;
}

int func_904(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_453(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16824;
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16829;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16823;
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16828;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16822;
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16827;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16820;
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16825;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16821;
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16826;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20942;
				if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20943;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20926;
				if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20927;
				}
			}
			break;
	}
	return uVar0;
}

int func_905(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_453(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16805;
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16814);
			}
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16819);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16806;
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16813);
			}
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16818);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16807;
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16812);
			}
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16817);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16808;
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16810);
			}
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16815);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16809;
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16811);
			}
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 1))
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
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 0))
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
			if (func_569(PLAYER::PLAYER_ID(), iParam0, 1))
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
			if (func_902(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_906(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_558(15384, -1, -1);
	}
	return func_558(func_907(iParam0), -1, -1);
}

int func_907(int iParam0)
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

void func_908(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_557(15384, iParam1, -1, 1);
		return;
	}
	func_557(func_907(iParam0), iParam1, -1, 1);
}

int func_909(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2503901[iParam0];
	iVar1 = func_743(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2503908;
	}
	if (func_903(iVar1))
	{
		if (func_902(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_910(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2503908 = iParam1;
		return;
	}
	Global_2503901[iParam0] = iParam1;
}

int func_911(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_571(iParam0, iParam1))
	{
		iVar0 = func_570(iParam0, iParam1);
		if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_4 > 0 && Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_912()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 28);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 29);
	func_913(24);
}

void func_913(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

void func_914()
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1436);
}

void func_915(var uParam0, var uParam1, int iParam2, int iParam3)
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
			Var32.f_16 = uParam1;
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
			Var65.f_16 = uParam1;
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
			Var98.f_16 = uParam1;
			Var98.f_17 = iParam2;
			unk_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = uParam0;
			Var116.f_15 = uParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1666806.f_15;
			unk_0x5FF2C33B13A02A11(&Var116);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = uParam0;
			Var134.f_16 = uParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1666806.f_15;
			unk_0x282B6739644F4347(&Var134);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = uParam0;
			Var153.f_15 = uParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1666806.f_15;
			unk_0xF06A6F41CB445443(&Var153);
		}
	}
	func_916();
}

void func_916()
{
	struct<18> Var0;
	
	Global_1666806 = { Var0 };
}

void func_917(struct<21> Param0)
{
	func_954(func_955(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(16);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(8);
	func_953(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_110, 872);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_982, 449);
	if (!func_952())
	{
		func_869();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_949();
		func_918(0, 0);
		Local_982[NETWORK::PARTICIPANT_ID_TO_INT() /*14*/] = 0;
	}
	else
	{
		func_869();
	}
}

void func_918(int iParam0, int iParam1)
{
	func_948();
	if (func_375(PLAYER::PLAYER_ID()))
	{
		func_921(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_920(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				GAMEPLAY::SET_BIT(&Global_1666792, 0);
				break;
			}
	}
	if (!func_440() && !func_179(PLAYER::PLAYER_ID(), 1))
	{
		if (func_136())
		{
			func_107(3);
		}
	}
	func_107(4);
	if (func_458(0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 = func_460();
	}
	if (func_305(iParam0))
	{
		func_683();
		Global_1666824.f_18 = func_663(func_240());
	}
	else if (func_310(func_892(PLAYER::PLAYER_ID())))
	{
		func_681();
		Global_1666878.f_18 = func_663(func_240());
	}
	func_919();
}

void func_919()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1358108.f_534[iVar0 /*42*/].f_1 = func_63();
		Global_1358108.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_920(int iParam0, bool bParam1)
{
	return func_74(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_921(bool bParam0)
{
	int iVar0;
	
	func_913(33);
	func_913(34);
	func_913(35);
	func_913(36);
	func_913(37);
	func_913(38);
	func_913(39);
	func_913(40);
	func_913(43);
	func_913(41);
	func_913(54);
	func_913(42);
	func_913(47);
	func_947(23);
	func_947(24);
	func_913(92);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 2);
	func_946();
	func_941();
	func_936();
	func_931();
	func_923();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2524719.f_4883.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_922(3))
	{
		func_947(3);
	}
	else if (func_922(4))
	{
		func_947(4);
	}
	else if (func_922(5))
	{
		func_947(5);
	}
	else if (func_922(6))
	{
		func_947(6);
	}
	else if (func_922(7))
	{
		func_947(7);
	}
	else if (((((((((((((((((func_922(0) || func_922(1)) || func_922(2)) || func_922(8)) || func_922(9)) || func_922(10)) || func_922(11)) || func_922(12)) || func_922(13)) || func_922(14)) || func_922(15)) || func_922(16)) || func_922(17)) || func_922(18)) || func_922(19)) || func_922(20)) || func_922(21)) || func_922(22))
	{
		func_947(8);
		func_947(0);
		func_947(1);
		func_947(2);
		func_947(9);
		func_947(10);
		func_947(11);
		func_947(12);
		func_947(13);
		func_947(14);
		func_947(15);
		func_947(16);
		func_947(17);
		func_947(18);
		func_947(19);
		func_947(20);
		func_947(21);
		func_947(22);
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

bool func_922(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_14[iVar0], iVar1);
}

void func_923()
{
	int iVar0;
	
	if (func_930())
	{
		func_929(8);
		func_929(9);
		func_929(10);
		func_929(12);
		func_929(13);
		func_929(14);
		func_929(19);
		func_929(20);
		func_929(21);
		func_929(22);
		func_929(23);
		func_929(24);
		func_929(25);
		func_929(26);
		func_929(15);
		func_929(16);
		func_929(17);
		func_929(18);
		func_929(35);
		func_929(45);
		func_929(46);
		if (func_928(11))
		{
			func_929(11);
			iVar0 = func_428(7226, -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, 2);
			func_426(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_928(48))
	{
		if (func_927(151, 3))
		{
			func_926(151, 3);
		}
		func_929(48);
	}
	if (func_928(49))
	{
		if (func_927(152, 3))
		{
			func_926(152, 3);
		}
		func_929(49);
	}
	if (func_928(50))
	{
		if (func_927(153, 3))
		{
			func_926(153, 3);
		}
		func_929(50);
	}
	if (func_928(51))
	{
		if (func_927(func_924(), 3))
		{
			func_926(func_924(), 3);
		}
		func_929(51);
	}
}

int func_924()
{
	if (func_925())
	{
		Global_106070.f_28022[154 /*29*/].f_24[Global_14513] = 1;
	}
	return 154;
}

int func_925()
{
	int iVar0;
	
	iVar0 = func_64(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_63()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_926(int iParam0, int iParam1)
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

int func_927(int iParam0, int iParam1)
{
	if (Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_928(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_26[iVar0], iVar1);
}

void func_929(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_26[iVar0]), iVar1);
}

int func_930()
{
	if (((((((((((((((((((((func_928(8) || func_928(9)) || func_928(10)) || func_928(12)) || func_928(11)) || func_928(13)) || func_928(14)) || func_928(19)) || func_928(20)) || func_928(21)) || func_928(22)) || func_928(23)) || func_928(24)) || func_928(25)) || func_928(26)) || func_928(15)) || func_928(16)) || func_928(17)) || func_928(18)) || func_928(35)) || func_928(45)) || func_928(46))
	{
		return 1;
	}
	return 0;
}

void func_931()
{
	if (func_935())
	{
		func_934(0);
		func_934(1);
		func_934(2);
		func_934(3);
		func_934(4);
		func_934(5);
		if (func_933(32))
		{
			if (func_927(func_932(), 3))
			{
				func_926(func_932(), 3);
			}
			func_934(32);
		}
	}
}

int func_932()
{
	if (func_925())
	{
		Global_106070.f_28022[12 /*29*/].f_24[Global_14513] = 1;
	}
	return 12;
}

bool func_933(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_23[iVar0], iVar1);
}

void func_934(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_23[iVar0]), iVar1);
}

int func_935()
{
	if ((((func_933(1) || func_933(0)) || func_933(2)) || func_933(4)) || func_933(5))
	{
		return 1;
	}
	return 0;
}

void func_936()
{
	if (func_940())
	{
		func_939(0);
		func_939(1);
		func_939(2);
		func_939(3);
		func_939(4);
		func_939(5);
		func_939(6);
		func_939(7);
		if (func_938(8))
		{
			func_939(8);
		}
		if (func_938(15))
		{
			if (func_927(func_937(), 3))
			{
				func_926(func_937(), 3);
			}
			func_939(15);
		}
	}
}

int func_937()
{
	if (func_925())
	{
		Global_106070.f_28022[20 /*29*/].f_24[Global_14513] = 1;
	}
	return 20;
}

bool func_938(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_21[iVar0], iVar1);
}

void func_939(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_21[iVar0]), iVar1);
}

int func_940()
{
	if ((((((((func_938(0) || func_938(1)) || func_938(2)) || func_938(3)) || func_938(4)) || func_938(5)) || func_938(6)) || func_938(7)) || func_938(8))
	{
		return 1;
	}
	return 0;
}

void func_941()
{
	if (func_945())
	{
		func_944(0);
		func_944(1);
		func_944(2);
		func_944(3);
		func_944(4);
		func_944(5);
		func_944(6);
		func_944(7);
		func_944(8);
		func_944(9);
		func_944(10);
		func_944(11);
		func_944(12);
		if (func_943(13))
		{
			if (func_927(func_942(), 3))
			{
				func_926(func_942(), 3);
			}
			func_944(13);
		}
	}
}

int func_942()
{
	if (func_925())
	{
		Global_106070.f_28022[76 /*29*/].f_24[Global_14513] = 1;
	}
	return 76;
}

bool func_943(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_19[iVar0], iVar1);
}

void func_944(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_19[iVar0]), iVar1);
}

int func_945()
{
	if ((((((((((((func_943(0) || func_943(1)) || func_943(2)) || func_943(3)) || func_943(4)) || func_943(5)) || func_943(6)) || func_943(7)) || func_943(8)) || func_943(9)) || func_943(10)) || func_943(11)) || func_943(12))
	{
		return 1;
	}
	return 0;
}

void func_946()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2524719.f_4883.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_947(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_14[iVar0]), iVar1);
}

void func_948()
{
	struct<14> Var0;
	
	Global_1666806 = { Var0 };
	Global_1666806.f_14 = 0;
	Global_1666806.f_15 = 0;
}

void func_949()
{
	var uVar0;
	int iVar1;
	
	PED::ADD_RELATIONSHIP_GROUP("relHeadHunterPlayer", &iLocal_1436);
	uVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()), -1533126372);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574948[iVar1], iLocal_1436);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1436, Global_1574948[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574948[iVar1], Global_1574993);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574993, Global_1574948[iVar1]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, iLocal_1436, -1533126372);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, -1533126372, iLocal_1436);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1436, Global_1574996[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574996[5], iLocal_1436);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1436, Global_1574981);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574981, iLocal_1436);
		iVar1++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1436, Global_1574993);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, Global_1574993, iLocal_1436);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, Global_1574993);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_1436);
	func_951(1, &Global_1574993);
	func_950(&Global_1574993);
	func_950(&iLocal_1436);
}

void func_950(int iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_951(int iParam0, var uParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -1533126372, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -472287501, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *uParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *uParam1, -183807561);
}

int func_952()
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
		if (func_864())
		{
			return 0;
		}
		if (func_862(155))
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

int func_953(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_870();
			}
			else
			{
				return 0;
			}
		}
		if (!func_814())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_870();
					}
					else
					{
						return 0;
					}
				}
				if (func_864())
				{
					if (!bParam2)
					{
						func_870();
					}
					else
					{
						return 0;
					}
				}
				if (func_862(155))
				{
					if (!bParam2)
					{
						func_870();
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
					func_870();
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
				func_870();
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
			func_870();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_954(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_870();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_955(int iParam0)
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

int func_956(int iParam0, bool bParam1, bool bParam2)
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

