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
	struct<17> Local_20 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_37 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50))
	{
		func_22();
	}
	while (true)
	{
		if (Global_106070.f_20382.f_145 > 0 || Global_104710)
		{
			if (!Global_104710)
			{
				if ((Global_36117 != 6 && Global_36117 != 15) && !Global_89334)
				{
					func_22();
				}
				if (!Global_104709)
				{
					if (Global_106070.f_20382.f_145 > 0)
					{
						if (func_19(&(Global_106070.f_20382[iLocal_37 /*16*/])))
						{
							if (func_17(func_18()))
							{
								if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20382[iLocal_37 /*16*/].f_11, func_12()))
								{
									if (Global_106070.f_20382[iLocal_37 /*16*/].f_12 == Global_106070.f_20382.f_146[func_12()])
									{
										if (GAMEPLAY::GET_GAME_TIMER() > Global_104712)
										{
											if (GAMEPLAY::GET_GAME_TIMER() > Global_106070.f_20382[iLocal_37 /*16*/].f_8)
											{
												if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_20382[iLocal_37 /*16*/].f_4), ""))
												{
													UI::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													func_11(&(Global_106070.f_20382[iLocal_37 /*16*/]));
												}
												else
												{
													UI::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(1);
													func_10(&(Global_106070.f_20382[iLocal_37 /*16*/]), &(Global_106070.f_20382[iLocal_37 /*16*/].f_4));
												}
												if (Global_106070.f_20382[iLocal_37 /*16*/].f_13 != 0)
												{
													func_9(Global_106070.f_20382[iLocal_37 /*16*/].f_13, 0);
												}
												Local_20 = { Global_106070.f_20382[iLocal_37 /*16*/] };
												Local_20.f_4 = { Global_106070.f_20382[iLocal_37 /*16*/].f_4 };
												Local_20.f_8 = Global_106070.f_20382[iLocal_37 /*16*/].f_8;
												Local_20.f_10 = Global_106070.f_20382[iLocal_37 /*16*/].f_10;
												Local_20.f_9 = Global_106070.f_20382[iLocal_37 /*16*/].f_9;
												Local_20.f_11 = Global_106070.f_20382[iLocal_37 /*16*/].f_11;
												Local_20.f_12 = Global_106070.f_20382[iLocal_37 /*16*/].f_12;
												Local_20.f_13 = Global_106070.f_20382[iLocal_37 /*16*/].f_13;
												Local_20.f_14 = Global_106070.f_20382[iLocal_37 /*16*/].f_14;
												Local_20.f_15 = Global_106070.f_20382[iLocal_37 /*16*/].f_15;
												Local_20.f_16 = 0;
												Global_104713 = { Global_106070.f_20382[iLocal_37 /*16*/] };
												Global_104711 = GAMEPLAY::GET_GAME_TIMER();
												iVar0 = iLocal_37;
												while (iVar0 <= (Global_106070.f_20382.f_145 - 2))
												{
													func_8(iVar0, iVar0 + 1);
													iVar0++;
												}
												func_7((Global_106070.f_20382.f_145 - 1));
												Global_106070.f_20382.f_145 = (Global_106070.f_20382.f_145 - 1);
												func_6();
												Global_104710 = 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else if (!func_4())
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
				{
					if (func_3(&Local_20))
					{
						UI::CLEAR_HELP(0);
					}
				}
				else if (func_2(&Local_20, &(Local_20.f_4)))
				{
					UI::CLEAR_HELP(0);
				}
				if ((GAMEPLAY::GET_GAME_TIMER() - Global_104711) > 4000 || Local_20.f_16)
				{
					if (Local_20.f_14 != 0)
					{
						func_9(Local_20.f_14, 0);
					}
					Global_104712 = GAMEPLAY::GET_GAME_TIMER() + 250;
				}
				else
				{
					if (Local_20.f_10 != -1)
					{
						iVar1 = 20000;
					}
					else
					{
						iVar1 = -1;
					}
					func_1(&Local_20, &(Local_20.f_4), Local_20.f_12, 1000, iVar1, Local_20.f_9, Local_20.f_11, Local_20.f_13, Local_20.f_14, Local_20.f_15);
				}
				StringCopy(&Local_20, "", 16);
				StringCopy(&(Local_20.f_4), "", 16);
				Local_20.f_8 = 0;
				Local_20.f_9 = 0;
				Local_20.f_10 = -1;
				Local_20.f_11 = 0;
				Local_20.f_12 = 0;
				Local_20.f_13 = 0;
				Local_20.f_14 = 0;
				Local_20.f_15 = 0;
				Local_20.f_16 = 0;
				Global_104711 = 0;
				Global_104710 = 0;
			}
			if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_20382[iLocal_37 /*16*/]), &Local_20) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_20382[iLocal_37 /*16*/]), ""))
			{
				if (Global_106070.f_20382[iLocal_37 /*16*/].f_10 != -1)
				{
					if (GAMEPLAY::GET_GAME_TIMER() > Global_106070.f_20382[iLocal_37 /*16*/].f_10)
					{
						iVar2 = iLocal_37;
						while (iVar2 <= (Global_106070.f_20382.f_145 - 2))
						{
							func_8(iVar2, iVar2 + 1);
							iVar2++;
						}
						func_7((Global_106070.f_20382.f_145 - 1));
						Global_106070.f_20382.f_145 = (Global_106070.f_20382.f_145 - 1);
						func_6();
					}
				}
			}
			iLocal_37++;
			if (iLocal_37 >= Global_106070.f_20382.f_145)
			{
				iLocal_37 = 0;
			}
		}
		else if ((Global_36117 != 6 && Global_36117 != 15) && !Global_89334)
		{
			func_22();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_20382[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_106070.f_20382.f_145 < 9)
	{
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_4), sParam1, 16);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_8 = (GAMEPLAY::GET_GAME_TIMER() + iParam3);
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_9 = iParam5;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_11 = iParam6;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_12 = uParam2;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_13 = iParam7;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_14 = iParam8;
		Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = ((GAMEPLAY::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_106070.f_20382[Global_106070.f_20382.f_145 /*16*/].f_10 = -1;
		}
		Global_106070.f_20382.f_145++;
		func_6();
	}
}

bool func_2(var uParam0, var uParam1)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_3(var uParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_4()
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (Local_20.f_9 != -1 && (GAMEPLAY::GET_GAME_TIMER() - Global_104711) > Local_20.f_9)
	{
		return 0;
	}
	if (Global_104709)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
	{
		if (!func_3(&Local_20))
		{
			Local_20.f_16 = 1;
			return 0;
		}
	}
	else if (!func_2(&Local_20, &(Local_20.f_4)))
	{
		Local_20.f_16 = 1;
		return 0;
	}
	return 1;
}

int func_5()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106070.f_20382.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106070.f_20382.f_145)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20382[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[0])
			{
				Global_106070.f_20382.f_146[0] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20382[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[1])
			{
				Global_106070.f_20382.f_146[1] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_106070.f_20382[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106070.f_20382[iVar0 /*16*/].f_12 > Global_106070.f_20382.f_146[2])
			{
				Global_106070.f_20382.f_146[2] = Global_106070.f_20382[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_106070.f_20382[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_106070.f_20382[iParam0 /*16*/].f_4), "", 16);
	Global_106070.f_20382[iParam0 /*16*/].f_8 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_9 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_11 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_10 = -1;
	Global_106070.f_20382[iParam0 /*16*/].f_12 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_13 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_14 = 0;
	Global_106070.f_20382[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_106070.f_20382[iParam0 /*16*/] = { Global_106070.f_20382[iParam1 /*16*/] };
	Global_106070.f_20382[iParam0 /*16*/].f_4 = { Global_106070.f_20382[iParam1 /*16*/].f_4 };
	Global_106070.f_20382[iParam0 /*16*/].f_8 = Global_106070.f_20382[iParam1 /*16*/].f_8;
	Global_106070.f_20382[iParam0 /*16*/].f_10 = Global_106070.f_20382[iParam1 /*16*/].f_10;
	Global_106070.f_20382[iParam0 /*16*/].f_9 = Global_106070.f_20382[iParam1 /*16*/].f_9;
	Global_106070.f_20382[iParam0 /*16*/].f_11 = Global_106070.f_20382[iParam1 /*16*/].f_11;
	Global_106070.f_20382[iParam0 /*16*/].f_12 = Global_106070.f_20382[iParam1 /*16*/].f_12;
	Global_106070.f_20382[iParam0 /*16*/].f_13 = Global_106070.f_20382[iParam1 /*16*/].f_13;
	Global_106070.f_20382[iParam0 /*16*/].f_14 = Global_106070.f_20382[iParam1 /*16*/].f_14;
	Global_106070.f_20382[iParam0 /*16*/].f_15 = Global_106070.f_20382[iParam1 /*16*/].f_15;
}

void func_9(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_106070.f_8585[iParam0] = 1;
	Global_106070.f_8585.f_236[iParam0] = (GAMEPLAY::GET_GAME_TIMER() + iParam1);
}

void func_10(var uParam0, var uParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam1);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_11(var uParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_12()
{
	func_13();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_13()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_16(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_15(PLAYER::PLAYER_PED_ID());
			if (func_17(iVar0) && (!func_14(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_17(Global_106070.f_2355.f_539.f_4301))
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

bool func_14(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)
{
	if (func_17(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18()
{
	func_13();
	return Global_106070.f_2355.f_539.f_4301;
}

int func_19(var uParam0)
{
	if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (UI::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (func_21())
	{
		return 0;
	}
	if (func_5())
	{
		return 0;
	}
	if (uParam0->f_12 < 3)
	{
		if (func_20())
		{
			return 0;
		}
		if (Global_71203)
		{
			return 0;
		}
		if (Global_90247)
		{
			return 0;
		}
		if (!GAMEPLAY::IS_BIT_SET(uParam0->f_15, 1))
		{
			if (Global_90255)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_20()
{
	if (Global_71465)
	{
		return 1;
	}
	else if (Global_56175 && !Global_56181)
	{
		return 1;
	}
	return 0;
}

int func_21()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

void func_22()
{
	if (Global_104710)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Local_20.f_4), ""))
		{
			if (func_3(&Local_20))
			{
				UI::CLEAR_HELP(1);
			}
		}
		else if (func_2(&Local_20, &(Local_20.f_4)))
		{
			UI::CLEAR_HELP(1);
		}
	}
	Global_104711 = 0;
	Global_104710 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

