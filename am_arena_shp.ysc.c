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
	int iLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	struct<62> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
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
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	struct<2> Local_102 = { 0, 0 } ;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 1;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	struct<33> ScriptParam_0 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	iLocal_14 = -1;
	fLocal_15 = 0.001f;
	sLocal_18 = "NULL";
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_51(ScriptParam_0);
	}
	else
	{
		func_49();
	}
	while (true)
	{
		func_48();
		if (Global_262145.f_23427)
		{
			func_49();
		}
		if (func_38())
		{
			func_49();
		}
		func_1();
	}
}

void func_1()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (Global_4263463)
	{
		if (Global_4266912[iLocal_21 /*12*/].f_11)
		{
			func_35(Local_22.f_61);
			Global_4266912[iLocal_21 /*12*/].f_11 = 0;
		}
	}
	if (Local_22.f_61.f_8)
	{
		func_17(Local_22.f_61);
	}
	if ((Local_22.f_61.f_2 == 1 && Global_4263464) && func_16(&Local_22))
	{
		bVar0 = true;
	}
	if (Global_4262927[iLocal_21 /*80*/].f_61 == 2147483647 && Local_22.f_61.f_12)
	{
		if (bVar0)
		{
			func_15(0);
		}
		func_49();
	}
	if (Local_22.f_61.f_18 > 0 && !func_14())
	{
		iVar2 = (1000 / SYSTEM::ROUND((GAMEPLAY::GET_FRAME_TIME() * 1000f)));
		if ((GAMEPLAY::GET_FRAME_COUNT() - Local_22.f_61.f_18) > iVar2 * 10)
		{
			Local_22.f_61.f_18 = -1;
		}
	}
	if (((func_13() && Local_22.f_61.f_2 == 1) && Local_22.f_61.f_13) && !Local_22.f_61.f_12)
	{
		if (GAMEPLAY::GET_FRAME_COUNT() - Local_22.f_61.f_14) >= func_12(Local_22.f_61.f_5)
		{
			iVar1 = 0;
			if (!unk_0xE46667979780116E(func_11()) || unk_0x64BE694244417BDA())
			{
				iVar1 = 1;
			}
			else if (Local_22.f_61.f_2 != 1)
			{
				iVar1 = 2;
			}
			else if (Local_22.f_61.f_5 != 1 && !unk_0xEC103C948D1D3BEF(&(Local_22.f_61), Local_22.f_61.f_6, Local_22.f_61.f_4, Local_22.f_61.f_7, Local_22.f_61.f_1, Local_22.f_61.f_10))
			{
				iVar1 = 3;
			}
			else if (!unk_0x93EA4BE98F3F425A(Local_22.f_61))
			{
				iVar1 = 4;
			}
			else
			{
				Local_22.f_61.f_12 = 1;
				Global_4262927[iLocal_21 /*80*/].f_61.f_12 = 1;
				Global_4262927[iLocal_21 /*80*/].f_61 = Local_22.f_61;
			}
			if (iVar1 != 0)
			{
				func_7(iLocal_21);
				func_49();
			}
		}
	}
	if (!iLocal_148)
	{
		if (bVar0)
		{
			func_5(&Local_102, 0);
			iLocal_148 = 1;
		}
	}
	else if (bVar0)
	{
		StringCopy(&(Local_102.f_1), "HUD_TRANSP", 64);
		func_2(&Local_102, func_4(&Local_102));
	}
	else
	{
		iLocal_148 = 0;
		func_15(0);
	}
}

void func_2(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_3(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_3(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_4(var uParam0)
{
	return uParam0->f_35;
}

void func_5(var uParam0, bool bParam1)
{
	func_6(uParam0);
	if (bParam1)
	{
		func_15(0);
	}
	uParam0->f_35 = 1;
}

void func_6(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_7(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_10(iParam0))
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
		func_8(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_8(var uParam0)
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
	func_9(&(uParam0->f_13));
	func_9(&(uParam0->f_13.f_13));
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

void func_9(var uParam0)
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

int func_10(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

var func_11()
{
	return Global_1312736;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_4263466;
			break;
		
		case 1:
			return Global_4263465;
			break;
	}
	return 0;
}

int func_13()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

bool func_14()
{
	return Global_93284.f_328 > 0;
}

void func_15(bool bParam0)
{
	UI::_REMOVE_LOADING_PROMPT();
	if (bParam0)
	{
		UI::_0xC65AB383CD91DF98();
	}
}

int func_16(var uParam0)
{
	if (uParam0->f_61.f_4 == 2043854386)
	{
		return 0;
	}
	return 1;
}

void func_17(var uParam0)
{
	struct<7> Var0;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<62> Var10;
	bool bVar90;
	var uVar91;
	int iVar96;
	int iVar97;
	int iVar98;
	
	iVar7 = 0;
	bVar8 = false;
	if (!func_13())
	{
		iVar7 = 1;
		Var0 = uParam0;
		Var0.f_2 = 0;
	}
	if (iVar7 || SCRIPT::GET_EVENT_DATA(1, uParam0, &Var0, 7))
	{
		Var10.f_61 = 2147483647;
		iVar9 = func_34(Var0, &Var10);
		if (iVar9 != -1)
		{
			Global_4262927[iVar9 /*80*/].f_61.f_8 = 0;
			if (Global_4262927[iVar9 /*80*/].f_61.f_18 == 0)
			{
				Global_4262927[iVar9 /*80*/].f_61.f_18 = GAMEPLAY::GET_FRAME_COUNT();
			}
		}
		bVar90 = true;
		if (iVar9 != -1)
		{
			Global_4262927[iVar9 /*80*/].f_61.f_17 = Var0.f_2;
		}
		else
		{
			Global_4263451.f_4 = Var0.f_2;
			Global_4263451.f_6 = Var0.f_3;
			Global_4263451.f_7 = Var0.f_4;
			Global_4263451.f_8 = Var0.f_5;
			Global_4263451.f_9 = Var0.f_6;
			if (Global_4263451.f_10 == 0)
			{
				Global_4263451.f_10 = GAMEPLAY::GET_FRAME_COUNT();
			}
		}
		switch (Var0.f_2)
		{
			case 0:
				if (iVar9 != -1)
				{
					Global_4266912[iVar9 /*12*/] = Global_4262927[iVar9 /*80*/].f_61.f_3;
					Global_4266912[iVar9 /*12*/].f_1 = Global_4262927[iVar9 /*80*/].f_61.f_7;
					Global_4266912[iVar9 /*12*/].f_2 = Global_4262927[iVar9 /*80*/].f_61.f_4;
					Global_4266912[iVar9 /*12*/].f_3 = Global_4262927[iVar9 /*80*/].f_61.f_1;
					Global_4266912[iVar9 /*12*/].f_5 = Var0.f_1;
					Global_4266912[iVar9 /*12*/].f_6 = Var0.f_3;
					Global_4266912[iVar9 /*12*/].f_7 = Var0.f_4;
					Global_4266912[iVar9 /*12*/].f_8 = Var0.f_5;
					Global_4266912[iVar9 /*12*/].f_9 = Var0.f_6;
					Global_4266912[iVar9 /*12*/].f_11 = 1;
					Global_4262927[iVar9 /*80*/].f_61.f_2 = 2;
					if (Global_4262927[iVar9 /*80*/].f_61.f_11 & 4 != 0)
					{
						func_32(iVar9, bVar90);
					}
					else if (func_13())
					{
						if (bVar90)
						{
							unk_0x4EE06054B6A386C8(Global_4262927[iVar9 /*80*/].f_61, &uVar91);
						}
					}
				}
				break;
			
			default:
				if (iVar9 != -1)
				{
					Global_4262927[iVar9 /*80*/].f_61.f_2 = 3;
					if ((Global_4262927[iVar9 /*80*/].f_61.f_11 & 1 != 0 && Global_4262927[iVar9 /*80*/].f_61.f_9 < 2) && func_31(Var0.f_2))
					{
						if (func_10(iVar9))
						{
							if (func_24())
							{
								Global_4262927[iVar9 /*80*/].f_61.f_2 = 1;
								Global_4262927[iVar9 /*80*/].f_61.f_9++;
							}
							else if (Global_4262927[iVar9 /*80*/].f_61.f_11 & 2 != 0)
							{
								Global_4263480 = Global_4262927[iVar9 /*80*/].f_61.f_4;
								Global_4263482 = Global_4262927[iVar9 /*80*/].f_61.f_6;
								Global_4263483 = Var0.f_2;
								Global_4263481 = Global_4262927[iVar9 /*80*/].f_61.f_1;
								if (func_23(Global_4263480) && func_13())
								{
									if (!func_22(Global_4262927[iVar9 /*80*/].f_61))
									{
										iVar96 = func_21();
										Global_4263408[iVar96 /*7*/] = Global_4262927[iVar9 /*80*/].f_61;
										Global_4263408[iVar96 /*7*/].f_2 = Global_4263480;
										Global_4263408[iVar96 /*7*/].f_3 = Global_4263482;
										Global_4263408[iVar96 /*7*/].f_1 = Global_4263481;
										Global_4263408[iVar96 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
									}
								}
								else
								{
									Global_4263477 = 1;
								}
							}
						}
						else if (func_20(&iVar9))
						{
							Global_4262927[iVar9 /*80*/].f_61.f_2 = 1;
							Global_4262927[iVar9 /*80*/].f_61.f_9++;
						}
						else if (Global_4262927[iVar9 /*80*/].f_61.f_11 & 2 != 0)
						{
							Global_4263480 = Global_4262927[iVar9 /*80*/].f_61.f_4;
							Global_4263482 = Global_4262927[iVar9 /*80*/].f_61.f_6;
							Global_4263483 = Var0.f_2;
							Global_4263481 = Global_4262927[iVar9 /*80*/].f_61.f_1;
							if (func_23(Global_4263480) && func_13())
							{
								if (!func_22(Global_4262927[iVar9 /*80*/].f_61))
								{
									iVar97 = func_21();
									Global_4263408[iVar97 /*7*/] = Global_4262927[iVar9 /*80*/].f_61;
									Global_4263408[iVar97 /*7*/].f_2 = Global_4263480;
									Global_4263408[iVar97 /*7*/].f_3 = Global_4263482;
									Global_4263408[iVar97 /*7*/].f_1 = Global_4263481;
									Global_4263408[iVar97 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
								}
							}
							else
							{
								Global_4263477 = 1;
							}
						}
					}
					else if (Global_4262927[iVar9 /*80*/].f_61.f_11 & 2 != 0)
					{
						Global_4263480 = Global_4262927[iVar9 /*80*/].f_61.f_4;
						Global_4263482 = Global_4262927[iVar9 /*80*/].f_61.f_6;
						Global_4263483 = Var0.f_2;
						Global_4263481 = Global_4262927[iVar9 /*80*/].f_61.f_1;
						if ((func_23(Global_4263480) && func_13()) && func_31(Var0.f_2))
						{
							if (!func_22(Global_4262927[iVar9 /*80*/].f_61))
							{
								iVar98 = func_21();
								Global_4263408[iVar98 /*7*/] = Global_4262927[iVar9 /*80*/].f_61;
								Global_4263408[iVar98 /*7*/].f_2 = Global_4263480;
								Global_4263408[iVar98 /*7*/].f_3 = Global_4263482;
								Global_4263408[iVar98 /*7*/].f_1 = Global_4263481;
								Global_4263408[iVar98 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
							}
						}
						else
						{
							Global_4263477 = 1;
						}
					}
					if (Global_4262927[iVar9 /*80*/].f_61.f_2 == 3)
					{
						if (bVar8)
						{
							func_19(1, Global_4262927[iVar9 /*80*/].f_61.f_4);
							Global_4263477 = 0;
						}
						if (Global_4262927[iVar9 /*80*/].f_61.f_11 & 4 != 0)
						{
							func_18(iVar9, Global_4262927[iVar9 /*80*/].f_61.f_4, Global_4262927[iVar9 /*80*/].f_61.f_10, Global_4262927[iVar9 /*80*/].f_61.f_1, Var0.f_2);
						}
					}
				}
				break;
			}
	}
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_7(iParam0);
	}
}

void func_19(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_20(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (*iParam0 == -1 || func_10(*iParam0))
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_11()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (Global_4262927[*iParam0 /*80*/].f_61.f_6 == 1067618600 || Global_4262927[*iParam0 /*80*/].f_61.f_6 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(Global_4262927[*iParam0 /*80*/].f_61))
	{
		if (iVar1 && !bVar0)
		{
		}
		Global_4262927[*iParam0 /*80*/].f_61.f_13 = 1;
		Global_4262927[*iParam0 /*80*/].f_61.f_12 = 0;
		Global_4262927[*iParam0 /*80*/].f_61.f_14 = GAMEPLAY::GET_FRAME_COUNT();
		if (bVar0)
		{
			if (*iParam0 != -1)
			{
				Global_4262927[*iParam0 /*80*/].f_61.f_8 = 1;
				Global_4262927[*iParam0 /*80*/].f_61.f_12 = 1;
			}
		}
		Global_4262927[*iParam0 /*80*/].f_61.f_18 = 0;
		return 1;
	}
	return 0;
}

int func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = Global_4263408;
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (Global_4263408[iVar0 /*7*/] != 0 && Global_4263408[iVar0 /*7*/] != 2147483647)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= iVar2)
	{
		return 0;
	}
	return iVar1;
}

int func_22(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = Global_4263408;
	if (iParam0 == 2147483647 || iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (Global_4263408[iVar0 /*7*/] == iParam0)
		{
			return 1;
		}
		if (Global_4263408[iVar0 /*7*/].f_6 == iParam0)
		{
			Global_4263408[iVar0 /*7*/].f_4 = NETWORK::GET_NETWORK_TIME();
			Global_4263408[iVar0 /*7*/].f_6 = 2147483647;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538) || iParam0 == -293060240) || iParam0 == -47546905) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == -101307780) || iParam0 == 1052472386) || iParam0 == -2130199671) || iParam0 == -1227654538) || iParam0 == -876012764) || iParam0 == -722894325) || iParam0 == 1407278493) || iParam0 == -1579394494) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == -308826175) || iParam0 == 603298940) || iParam0 == -12619854) || iParam0 == -311112675) || iParam0 == 870439158) || iParam0 == -974288740) || iParam0 == -4138654) || iParam0 == -1180954122) || iParam0 == -1918051016) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == -1172900789) || iParam0 == -2015399333) || iParam0 == -1574795641) || iParam0 == -961034881) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == -634726636) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == -883876414) || iParam0 == -1064150715) || iParam0 == -1387253055) || iParam0 == -716963152) || iParam0 == 1138089938) || iParam0 == -561012053) || iParam0 == 1240683675) || iParam0 == 1241904665)
	{
		return 1;
	}
	return 0;
}

int func_24()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_13())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_30();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_11()) || unk_0x64BE694244417BDA())
		{
			if (func_29(Global_4262927[iVar2 /*80*/].f_61.f_6, Global_4262927[iVar2 /*80*/].f_61.f_4, Global_4262927[iVar2 /*80*/].f_61.f_1) == 1)
			{
				Global_4263478 = 1;
			}
			return 0;
		}
		if (Global_2459349)
		{
			if (Global_4262927[iVar2 /*80*/].f_61.f_6 == 1067618600 || Global_4262927[iVar2 /*80*/].f_61.f_6 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_28(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar3))
		{
			Global_4262927[iVar2 /*80*/].f_61.f_13 = 1;
			Global_4262927[iVar2 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar2 /*80*/].f_61.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4262927[iVar2 /*80*/].f_61.f_8 = 1;
				Global_4262927[iVar2 /*80*/].f_61.f_12 = 1;
			}
			Global_4262927[iVar2 /*80*/].f_61.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_25(Global_4262927[iVar2 /*80*/], iVar2);
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	return 0;
}

void func_25(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
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
	iVar35 = func_27(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_26();
		unk_0xA40CC53DF8E50837(1, &vVar0, 35, iVar35);
	}
}

void func_26()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_27(var uParam0)
{
	var uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, uParam0);
	return uVar0;
}

int func_28(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61;
	}
	return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_28(iVar0) != 2147483647)
		{
			if (func_10(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_31(int iParam0)
{
	if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;
	
	if (iParam0 == -1)
	{
		return;
	}
	unk_0x7D3EC9370CE8AE07(func_28(iParam0));
	if (Global_4262927[iParam0 /*80*/].f_61.f_10 == 1)
	{
	}
	else if (Global_4262927[iParam0 /*80*/].f_61.f_10 == 4)
	{
		iVar0 = 1;
	}
	else if (Global_4262927[iParam0 /*80*/].f_61.f_10 == 2)
	{
		iVar1 = 1;
	}
	switch (Global_4262927[iParam0 /*80*/].f_61.f_4)
	{
		case 631654431:
			unk_0xE7DF4E0545DFB56E(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case -180141073:
			NETWORKCASH::NETWORK_SPENT_BUY_WANTEDLEVEL(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13), iVar1, iVar0);
			break;
		
		case 68030260:
			NETWORKCASH::NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], &(Global_4262927[iParam0 /*80*/].f_13), iVar1, iVar0);
			break;
		
		case -982394051:
			NETWORKCASH::NETWORK_SPENT_CINEMA(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_1, iVar1, iVar0);
			break;
		
		case 454359403:
			NETWORKCASH::NETWORK_SPENT_IN_STRIPCLUB(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, Global_4262927[iParam0 /*80*/].f_2, iVar0);
			break;
		
		case -1586170317:
			NETWORKCASH::_NETWORK_EARN_FROM_JOB_BONUS(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), &(Global_4262927[iParam0 /*80*/].f_13.f_34));
			break;
		
		case 650665123:
			NETWORKCASH::NETWORK_SPENT_TELESCOPE(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case 1654961868:
			NETWORKCASH::NETWORK_SPENT_CALL_PLAYER(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13), iVar1, iVar0);
			break;
		
		case 1182673174:
			NETWORKCASH::NETWORK_SPENT_CARWASH(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, iVar1, iVar0);
			break;
		
		case 563463121:
			unk_0x02F1AD29433D65F3(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1940862352:
			NETWORKCASH::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), iVar1, iVar0);
			break;
		
		case -1389227906:
			NETWORKCASH::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), iVar1, iVar0);
			break;
		
		case -516219046:
			NETWORKCASH::NETWORK_BUY_HEALTHCARE(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case -1398318418:
			NETWORKCASH::NETWORK_EARN_FROM_BETTING(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_34));
			break;
		
		case 2043854386:
			NETWORKCASH::NETWORK_SPENT_CASH_DROP(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case 277665518:
			NETWORKCASH::NETWORK_SPENT_ARREST_BAIL(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case -1077156170:
			NETWORKCASH::_NETWORK_EARN_FROM_DAILY_OBJECTIVE(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_34), -1);
			break;
		
		case -96593501:
			NETWORKCASH::NETWORK_SPENT_BOUNTY(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case 742499889:
			unk_0xD99DB210089617FE(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 2050093329:
			unk_0xDBC966A01C02BCA7(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1752488069:
			unk_0x08A1B82B91900682(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 634375935:
			unk_0xFC4EE00A7B3BFB76(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case -1027218631:
			NETWORKCASH::NETWORK_EARN_FROM_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26));
			break;
		
		case -47546905:
			unk_0xC8407624CEF2354B(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26));
			break;
		
		case 291576838:
			NETWORKCASH::NETWORK_BUY_ITEM(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 14, 1, iVar1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 0, 0, 0, iVar0);
			break;
		
		case 1612072658:
			NETWORKCASH::NETWORK_SPENT_BUY_PASSIVE_MODE(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case -990286235:
			NETWORKCASH::NETWORK_EARN_FROM_BOUNTY(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13), &(Global_4262927[iParam0 /*80*/].f_13.f_13), 1);
			break;
		
		case 1349151477:
			NETWORKCASH::_NETWORK_EARN_FROM_ARMOUR_TRUCK(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -31156877:
		case -327918414:
		case 550898518:
		case 835976347:
			NETWORKCASH::NETWORK_EARN_FROM_PICKUP(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1186079845:
			NETWORKCASH::NETWORK_EARN_FROM_CRATE_DROP(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1734805203:
			NETWORKCASH::NETWORK_EARN_FROM_HOLDUPS(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1645229221:
			NETWORKCASH::NETWORK_PAY_EMPLOYEE_WAGE(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case -585718395:
			NETWORKCASH::NETWORK_PAY_UTILITY_BILL(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case 763367758:
			unk_0x5182A339A3474510(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case 1850983186:
			NETWORKCASH::NETWORK_PAY_EMPLOYEE_WAGE(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case -2129781826:
			unk_0xB49ECA122467D05F(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], iVar1, iVar0);
			break;
		
		case 1941570214:
			unk_0x0FE8E1FCD2B86B33(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], iVar1, iVar0);
			break;
		
		case 1869490922:
			unk_0xD7CCCBA28C4ECAF0(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, iVar1, iVar0);
			break;
		
		case -336803850:
			unk_0xD7CCCBA28C4ECAF0(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, iVar1, iVar0);
			break;
		
		case -1412692765:
			unk_0xD7CCCBA28C4ECAF0(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, iVar1, iVar0);
			break;
		
		case 618167454:
			unk_0xD7CCCBA28C4ECAF0(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, iVar1, iVar0);
			break;
		
		case 980623936:
			unk_0xD7CCCBA28C4ECAF0(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, iVar1, iVar0);
			break;
		
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
		case -664597565:
		case -1100963799:
			NETWORKCASH::NETWORK_REFUND_CASH(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_40), &(Global_4262927[iParam0 /*80*/].f_13.f_44), iVar1);
			break;
		
		case 312105838:
			NETWORKCASH::NETWORK_EARN_FROM_ROCKSTAR(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1922554349:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_DESTROY_VEH", &uVar2);
			break;
		
		case -2043695058:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_DISTRACT_COPS", &uVar2);
			break;
		
		case 1780666425:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
			break;
		
		case 1643659499:
			NETWORKCASH::NETWORK_BUY_FAIRGROUND_RIDE(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_1, iVar1, iVar0);
			break;
		
		case 1839532116:
			NETWORKCASH::NETWORK_SPENT_ROBBED_BY_MUGGER(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 0);
			break;
		
		case 941287179:
			NETWORKCASH::NETWORK_EARN_FROM_IMPORT_EXPORT(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_3);
			break;
		
		case -352356931:
			NETWORKCASH::NETWORK_EARN_FROM_AI_TARGET_KILL(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/]);
			break;
		
		case 1948102096:
			NETWORKCASH::NETWORK_SPENT_REQUEST_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case -1834046564:
			NETWORKCASH::NETWORK_SPENT_TAXI(Global_4262927[iParam0 /*80*/].f_61.f_1, iVar1, iVar0);
			break;
		
		case 393059668:
			NETWORKCASH::_NETWORK_EARN_FROM_BEND_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26));
			break;
		
		case -57868256:
			NETWORKCASH::NETWORK_EARN_FROM_CHALLENGE_WIN(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_34), Global_4262927[iParam0 /*80*/].f_4);
			break;
		
		case -1127021384:
			NETWORKCASH::NETWORK_EARN_FROM_NOT_BADSPORT(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1564537328:
			NETWORKCASH::NETWORK_PAY_MATCH_ENTRY_FEE(Global_4262927[iParam0 /*80*/].f_61.f_1, "RaceToPoint", 0, 0);
			break;
		
		case -1359375127:
			NETWORKCASH::NETWORK_SPENT_PROSTITUTES(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 0);
			break;
		
		case 283351220:
			NETWORKCASH::NETWORK_BUY_ITEM(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_5, 1, iVar1, &(Global_4262927[iParam0 /*80*/].f_13.f_40), 0, 0, 0, iVar0);
			break;
		
		case -2085313189:
			switch (Global_4262927[iParam0 /*80*/].f_61.f_6)
			{
				case 1067618600:
					NETWORKCASH::NETWORK_BUY_ITEM(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_5, 1, iVar1, &(Global_4262927[iParam0 /*80*/].f_13.f_40), 0, 0, 0, iVar0);
					break;
			}
			break;
		
		case 1704445500:
			NETWORKCASH::NETWORK_SPENT_BETTING(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, &(Global_4262927[iParam0 /*80*/].f_13.f_34), 0, 0);
			break;
		
		case 1620609399:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
			break;
		
		case 1961641934:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_HOT_TARGET_KILL", &uVar2);
			break;
		
		case 210955503:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_KILL_LIST", &uVar2);
			break;
		
		case -59668082:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_CP_COLLECTION", &uVar2);
			break;
		
		case 1736933716:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_TIME_TRIAL", &uVar2);
			break;
		
		case -1468524125:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_CHALLENGES", &uVar2);
			break;
		
		case 111573502:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_HOT_TARGET_HELI", &uVar2);
			break;
		
		case 1525644423:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_DEAD_DROP", &uVar2);
			break;
		
		case 968073639:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_PENNED_IN", &uVar2);
			break;
		
		case 1577781788:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_PASS_THE_PARCEL", &uVar2);
			break;
		
		case -934465332:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
			break;
		
		case -1194253122:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_HOT_PROPERTY", &uVar2);
			break;
		
		case -212607085:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_KING_OF_THE_HILL", &uVar2);
			break;
		
		case -815546555:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "AM_HUNT_THE_BEAST", &uVar2);
			break;
		
		case 1048226110:
			unk_0x08B0CA7A6AB3AC32(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 569170531:
			unk_0xCDA1C62BE2777802(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -856006867:
			unk_0x0CB1BE0633C024A8(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_8);
			break;
		
		case 208223429:
			unk_0xECA658CE2A4E5A72(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_9);
			break;
		
		case 848090538:
			unk_0x84C0116D012E8FC2(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 665109499:
			unk_0xE8B0B270B6E7C76E(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 0, 1);
			break;
		
		case -1330755006:
			unk_0x05F04155A226FBBF(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 0, 1);
			break;
		
		case 1976384368:
			unk_0x5BCDE0F640C773D2(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 0, 0);
			break;
		
		case 268924934:
			unk_0x0035BB914316F1E3(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_1, Global_4262927[iParam0 /*80*/].f_9);
			break;
		
		case -293060240:
			unk_0xEDEAD9A91EC768B3(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7);
			break;
		
		case 437291904:
			unk_0xA75CCF58A60A5FD1(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1, Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_10, Global_4262927[iParam0 /*80*/].f_11, Global_4262927[iParam0 /*80*/].f_12);
			break;
		
		case -135813048:
			unk_0xC1952F3773BA18FE(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case 463142405:
			unk_0xDEE612F2D71B0308(Global_4262927[iParam0 /*80*/].f_6, Global_4262927[iParam0 /*80*/].f_7, Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_8);
			break;
		
		case 1550217370:
			unk_0x005ACA7100BD101D(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -101307780:
			unk_0x35F8DA0E8A31EF1B(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 599804707:
			NETWORKCASH::_NETWORK_EARN_FROM_AMBIENT_JOB(Global_4262927[iParam0 /*80*/].f_61.f_1, "GB_SALVAGE", &uVar2);
			break;
		
		case 1347433368:
			NETWORKCASH::_NETWORK_EARN_FROM_GANG_PICKUP(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1052472386:
			unk_0xFA009A62990671D4(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), &(Global_4262927[iParam0 /*80*/].f_13.f_34));
			break;
		
		case -2130199671:
			unk_0x9D4FDBB035229669(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), &(Global_4262927[iParam0 /*80*/].f_13.f_34));
			break;
		
		case -1227654538:
			unk_0x11B0A20C493F7E36(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), &(Global_4262927[iParam0 /*80*/].f_13.f_34));
			break;
		
		case -930104477:
			unk_0x5BBBD92186E1F1C5(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1, Global_4262927[iParam0 /*80*/]);
			break;
		
		case 1864522104:
			unk_0x5B669CF2299A271F(Global_4262927[iParam0 /*80*/].f_61.f_1, 0);
			break;
		
		case 215608230:
			unk_0x5B669CF2299A271F(Global_4262927[iParam0 /*80*/].f_61.f_1, 1);
			break;
		
		case -876012764:
			unk_0x2DCB19ABAB0380A8(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/]);
			break;
		
		case -722894325:
			unk_0x15BB2A5C757EB91F(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/]);
			break;
		
		case 1407278493:
			unk_0xED26584F6BDCBBFD(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1579394494:
		case -27443911:
			unk_0xA9160796D47A2CF8(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26));
			break;
		
		case 1179783540:
			unk_0x1C121FC9545E0D52(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26));
			break;
		
		case 923419301:
			unk_0xA9A31475F530DFDA(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 0);
			break;
		
		case -308826175:
			unk_0xA9A31475F530DFDA(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 1);
			break;
		
		case 603298940:
			unk_0xA9A31475F530DFDA(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 2);
			break;
		
		case -12619854:
			unk_0xA9A31475F530DFDA(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 3);
			break;
		
		case -311112675:
			unk_0xA9A31475F530DFDA(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 4);
			break;
		
		case 870439158:
			unk_0xA9A31475F530DFDA(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 5);
			break;
		
		case -974288740:
			unk_0xA9A31475F530DFDA(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 6);
			break;
		
		case -4138654:
			unk_0xA9A31475F530DFDA(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 7);
			break;
		
		case -1180954122:
			unk_0xA9A31475F530DFDA(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 8);
			break;
		
		case -1918051016:
			unk_0xA9A31475F530DFDA(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 9);
			break;
		
		case 844330594:
			unk_0xA9A31475F530DFDA(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 10);
			break;
		
		case 1934825517:
			unk_0x2597A0D4A4FC2C77(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 0);
			break;
		
		case 1852024236:
			unk_0x2597A0D4A4FC2C77(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 1);
			break;
		
		case 2099238988:
			unk_0x2597A0D4A4FC2C77(Global_4262927[iParam0 /*80*/].f_61.f_1, &(Global_4262927[iParam0 /*80*/].f_13.f_26), 2);
			break;
		
		case 1952643559:
			break;
		
		case 2039302543:
			break;
		
		case -1172900789:
			unk_0x128A747F4A230952(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_9);
			break;
		
		case -1733398043:
			unk_0xDA947AE8880D5C18(Global_4262927[iParam0 /*80*/].f_9, Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case -1892760262:
			unk_0xA19EC0786E326E06(Global_4262927[iParam0 /*80*/].f_9, Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case -2015399333:
			unk_0x9484047AAC079157(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 402505853:
			if (func_33(PLAYER::INT_TO_PLAYERINDEX(Global_4262927[iParam0 /*80*/]), 0, 0))
			{
				unk_0xFC71E8A3A3428520(PLAYER::INT_TO_PLAYERINDEX(Global_4262927[iParam0 /*80*/]), Global_4262927[iParam0 /*80*/].f_1, Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			}
			break;
		
		case 1678112166:
			unk_0xF56B64662927DE25(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 0, 1);
			break;
		
		case -1143510182:
			unk_0x9C9B8748B3D0520C(Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case -1574795641:
			unk_0x4B8F4A73B92C2BDC(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -961034881:
			unk_0x70275A5DEC872CA2(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1135468152:
			unk_0xF03B782EEA848691(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1265272476:
			unk_0x7C5AFBDB4A63099E(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_1, Global_4262927[iParam0 /*80*/].f_9);
			break;
		
		case -634726636:
			unk_0xB509D8DC0549312F(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 696556762:
			unk_0x7FCF7023D5DDA443(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 837955913:
			unk_0x14EAEA58F93B55AF(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_61.f_15, 0, 1);
			break;
		
		case 403506509:
			unk_0xFDD8D2440DAF1590(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -883876414:
			unk_0xE08256F972C7BB2C(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_61.f_15);
			break;
		
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
			unk_0x0F99F70C61F14619(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/].f_61.f_15);
			break;
		
		case -1532467144:
			unk_0x7049BF858601DC0F(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], 0, 1);
			break;
		
		case 1815541181:
			unk_0xE5F5A060439C2F5D(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 0);
			break;
		
		case -561012053:
			unk_0x676C48776CACBB5A(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case -1342064661:
			unk_0x9A5BD1D0000B339C(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case 1240683675:
			unk_0x5E7AE8AABE8B7C0D(Global_4262927[iParam0 /*80*/].f_61.f_1);
			break;
		
		case 1241904665:
			unk_0x631F1CB8FB4130AA(Global_4262927[iParam0 /*80*/].f_61.f_1, Global_4262927[iParam0 /*80*/], Global_4262927[iParam0 /*80*/].f_61.f_16, Global_4262927[iParam0 /*80*/].f_1);
			break;
		
		case -597978445:
			unk_0x619496D837EFD920(Global_4262927[iParam0 /*80*/].f_61.f_1, 0, 1);
			break;
		
		case 1982688246:
			break;
	}
	if (func_13())
	{
		if (bParam1)
		{
			unk_0x4EE06054B6A386C8(Global_4262927[iParam0 /*80*/].f_61, &uVar6);
		}
	}
	func_7(iParam0);
}

int func_33(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(uParam0))
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

int func_34(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61 == iParam0)
		{
			*uParam1 = { Global_4262927[iVar0 /*80*/] };
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_35(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Global_4266912[iParam0 /*12*/].f_1 == Global_4266912[iParam0 /*12*/].f_6)
	{
		if (Global_4266912[iParam0 /*12*/].f_1 != 1445302971 && Global_4266912[iParam0 /*12*/].f_1 != -1316591359)
		{
			return;
		}
	}
	iVar0 = 0;
	sVar2 = "Wardrobe";
	iVar0 = GAMEPLAY::GET_HASH_KEY(sVar2);
	iVar0 = (iVar0 || func_37());
	iVar0 = (iVar0 + Global_4264880);
	func_36(&uVar1);
	iVar0 = (iVar0 || uVar1);
	GAMEPLAY::CLEAR_BIT(&iVar0, 28);
	GAMEPLAY::CLEAR_BIT(&iVar0, 29);
	GAMEPLAY::CLEAR_BIT(&iVar0, 26);
	iVar3 = (Global_4266912[iParam0 /*12*/].f_9 && iVar0);
	iVar4 = (Global_4266912[iParam0 /*12*/].f_8 && iVar0);
	iVar5 = Global_4266912[iParam0 /*12*/].f_7;
	if (iVar5 == 0)
	{
		iVar5 = -2085313189;
	}
	if (((Global_4266912[iParam0 /*12*/] != Global_4266912[iParam0 /*12*/].f_5 || Global_4266912[iParam0 /*12*/].f_1 != Global_4266912[iParam0 /*12*/].f_6) || Global_4266912[iParam0 /*12*/].f_2 != iVar5) || Global_4266912[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
	{
		Global_102772 = 1;
	}
}

int func_36(var uParam0)
{
	*uParam0 = SYSTEM::SHIFT_LEFT(1, 2);
	return 5410420;
}

var func_37()
{
	return SYSTEM::SHIFT_LEFT(1, 25);
}

int func_38()
{
	var uVar0;
	
	func_45(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_44())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_43())
	{
		return 1;
	}
	if (func_42(157))
	{
		if (!func_41())
		{
			return 1;
		}
	}
	if (func_42(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_39() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_39()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_39()
{
	switch (func_40())
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

int func_40()
{
	return Global_25459;
}

bool func_41()
{
	return Global_2448386.f_587;
}

int func_42(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_43()
{
	return Global_2458191;
}

bool func_44()
{
	return Global_2448386.f_582;
}

void func_45(var uParam0)
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
					func_46(iVar0);
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

void func_46(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_33(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_47(uVar4, &bVar5))
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

int func_47(var uParam0, var uParam1)
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

void func_48()
{
	SYSTEM::WAIT(0);
}

void func_49()
{
	func_50();
}

void func_50()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_51(struct<33> Param0)
{
	if (Global_262145.f_23427)
	{
		func_49();
	}
	Local_22.f_61 = { Param0 };
	Local_22 = { Param0.f_19 };
	Local_22.f_13 = { Global_4262927[Param0.f_32 /*80*/].f_13 };
	iLocal_21 = Param0.f_32;
	if (Param0.f_32 < 0)
	{
		func_49();
	}
	if (!func_52(Param0, Param0.f_32))
	{
		func_7(Param0.f_32);
		func_49();
	}
}

int func_52(struct<18> Param0, var uParam18, int iParam19)
{
	if (Global_4262927[iParam19 /*80*/].f_61.f_1 != Param0.f_1)
	{
		return 0;
	}
	if (Global_4262927[iParam19 /*80*/].f_61.f_3 != Param0.f_3)
	{
		return 0;
	}
	if (Global_4262927[iParam19 /*80*/].f_61.f_4 != Param0.f_4)
	{
		return 0;
	}
	if (Global_4262927[iParam19 /*80*/].f_61.f_5 != Param0.f_5)
	{
		return 0;
	}
	if (Global_4262927[iParam19 /*80*/].f_61.f_6 != Param0.f_6)
	{
		return 0;
	}
	if (Global_4262927[iParam19 /*80*/].f_61.f_7 != Param0.f_7)
	{
		return 0;
	}
	if (Global_4262927[iParam19 /*80*/].f_61.f_14 != Param0.f_14)
	{
		return 0;
	}
	if (Global_4262927[iParam19 /*80*/].f_61.f_17 != Param0.f_17)
	{
		return 0;
	}
	return 1;
}

