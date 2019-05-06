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
	float fLocal_47 = 0f;
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
	var uLocal_61 = 0;
	var uLocal_62 = 10;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 2;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 8;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 8;
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
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	struct<2> Local_104 = { 0, 0 } ;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	struct<2> Local_108 = { 0, 0 } ;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<2> Local_112 = { 0, 0 } ;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	struct<2> Local_116 = { 0, 0 } ;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	struct<2> Local_120 = { 0, 0 } ;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	struct<2> Local_124 = { 0, 0 } ;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
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
	fLocal_47 = ((0.05f + 0.275f) - 0.01f);
	StringCopy(&Local_104, "CELL_206", 16);
	StringCopy(&Local_108, "CELL_214", 16);
	StringCopy(&Local_112, "CELL_243", 16);
	StringCopy(&Local_116, "CELL_244", 16);
	StringCopy(&Local_120, "CELL_265", 16);
	StringCopy(&Local_124, "CELL_300", 16);
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_96(&uLocal_131);
	iLocal_128 = 0;
	func_94();
	func_93(Global_14494, "SET_THEME", SYSTEM::TO_FLOAT(5), -1082130432, -1082130432, -1082130432, -1082130432);
	func_83(0);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_82();
		func_81();
		if (!Global_14513.f_1 == 9 && Global_14513.f_1 > 3)
		{
			switch (iLocal_103)
			{
				case 0:
					func_46();
					break;
				
				case 1:
					func_30();
					break;
				
				case 3:
					func_5();
					break;
				
				case 2:
					func_4();
					break;
				
				default:
					break;
			}
			if (Global_14513.f_1 != 8)
			{
				if (func_3())
				{
					func_2();
				}
			}
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()
{
	if (((Global_14513.f_1 == 1 || Global_14513.f_1 == 3) || Global_14513.f_1 == 0) || Global_14457 == 1)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

void func_2()
{
	Global_1624079.f_6 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3()
{
	if (Global_2989 == 1 || Global_14513.f_1 < 7)
	{
		Global_14500 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;
	
	Global_1624079.f_6 = 1;
	if (iLocal_130)
	{
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, Global_14482))
		{
			iLocal_130 = 0;
		}
		return;
	}
	if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
	{
		iLocal_103 = 1;
		iVar0 = func_28(iLocal_128, 0);
		func_6(iVar0);
		return;
	}
	if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202))
	{
		iLocal_103 = 1;
		return;
	}
	UI::SET_WARNING_MESSAGE_WITH_HEADER("HUD_INPUT23", "BA_APP_PASS_W", 36, 0, 0, -1, 0, 0, 1, 0);
}

void func_6(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_1624079.f_7[iParam0 /*8*/].f_2;
	if (Global_1624079.f_7[iParam0 /*8*/].f_1 == 1 && iLocal_129 == iVar0)
	{
		func_25(iVar0, Global_1624079.f_7[iParam0 /*8*/].f_6);
		func_12(iParam0);
	}
	Global_1624079.f_6 = 0;
	func_7(0);
}

void func_7(int iParam0)
{
	if (func_11())
	{
		return;
	}
	if (Global_14681)
	{
		func_9(0, 0);
	}
	if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2384, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15822 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 30);
	}
	if (!func_8())
	{
		Global_14513.f_1 = 3;
	}
}

int func_8()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_9(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_10(0))
		{
			Global_14681 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14450);
			}
			Global_14441 = { Global_14459[Global_14458 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14441);
		}
	}
	else if (Global_14681 == 1)
	{
		Global_14681 = 0;
		Global_14441 = { Global_14466[Global_14458 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14450);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14441);
		}
	}
}

int func_10(int iParam0)
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

bool func_11()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

void func_12(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		if (Global_1624079.f_7[iParam0 /*8*/].f_1 == 1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1624079.f_7[iParam0 /*8*/].f_5, 0))
			{
				func_24();
				if (Global_1624079.f_7[iParam0 /*8*/].f_7 == 0)
				{
					func_24();
				}
				else
				{
					Global_1624079.f_4 = (Global_1624079.f_4 - 1);
					if (Global_1624079.f_4 < 0)
					{
						Global_1624079.f_4 = 0;
					}
					func_17();
				}
			}
			GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_22), Global_1624079.f_7[iParam0 /*8*/].f_2);
			UI::_REMOVE_NOTIFICATION(Global_1624079.f_7[iParam0 /*8*/].f_4);
			func_16();
			func_14(0);
		}
		iVar0 = iParam0;
		while (iVar0 <= 8)
		{
			Global_1624079.f_7[iVar0 /*8*/] = { Global_1624079.f_7[iVar0 + 1 /*8*/] };
			iVar0++;
		}
		Global_1624079.f_7[9 /*8*/].f_1 = 0;
		Global_1624079.f_7[9 /*8*/].f_2 = func_13();
	}
}

int func_13()
{
	return -1;
}

void func_14(int iParam0)
{
	if (!func_15(iParam0))
	{
		GAMEPLAY::SET_BIT(&(Global_1624079.f_3), iParam0);
	}
}

bool func_15(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1624079.f_3, iParam0);
}

void func_16()
{
	Global_1624079 = (Global_1624079 - 1);
}

void func_17()
{
	Global_16885 = (Global_16885 - 1);
	if (Global_16885 < 0)
	{
		func_23("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_18();
}

void func_18()
{
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_93(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_19(1);
			func_93(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_19(int iParam0)
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
		if (func_22(14))
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
								func_21(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_20(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_20(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_20(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_20(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(uVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_20(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_21(&(Global_2390[iVar1 /*15*/]));
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
								func_21(&(Global_2390[iVar1 /*15*/]));
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
								func_21(&(Global_2390[iVar1 /*15*/]));
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
								func_21(&(Global_2390[iVar1 /*15*/]));
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
								func_21(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_20(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_20(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_20(var uParam0, char* sParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
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
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_21(sParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_21(sParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_21(sParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_21(sParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_21(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_21(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_22(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_23(char* sParam0)
{
	if (Global_16885 != 0)
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
		}
		Global_16885 = 0;
	}
}

void func_24()
{
	Global_1624079.f_1 = (Global_1624079.f_1 - 1);
	if (Global_1624079.f_1 < 0)
	{
		Global_1624079.f_1 = 0;
	}
}

void func_25(int iParam0, var uParam1)
{
	if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_26 == func_13())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_26 = iParam0;
			Global_2524719.f_4883.f_215 = uParam1;
			func_26(func_27(iParam0));
		}
	}
}

void func_26(int iParam0)
{
	struct<2> Var0;
	
	Var0 = -1198578769;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 2, iParam0);
	}
}

int func_27(var uParam0)
{
	var uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, uParam0);
	return uVar0;
}

int func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_29())
	{
		if (Global_1624079.f_7[iVar0 /*8*/].f_7 == iParam1)
		{
			iParam0 = (iParam0 - 1);
			if (iParam0 < 0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_29()
{
	return Global_1624079;
}

void func_30()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_28(iLocal_128, 0);
	if (iLocal_128 == -1)
	{
		func_83(1);
		return;
	}
	iVar1 = Global_1624079.f_7[iVar0 /*8*/].f_2;
	if (!func_45(iVar1, 0, 1) || iLocal_129 != iVar1)
	{
		func_83(1);
		return;
	}
	func_40(&uLocal_131);
	if (func_38(&uLocal_131))
	{
		func_83(1);
		return;
	}
	if (func_37(&uLocal_131))
	{
		func_12(iVar0);
		func_83(1);
		return;
	}
	if (func_33(&uLocal_131))
	{
		if (func_32())
		{
			iLocal_130 = 1;
			iLocal_103 = 3;
		}
		else if (Global_1624079.f_7[iVar0 /*8*/] == 0)
		{
			func_6(iVar0);
		}
		else if (Global_1624079.f_7[iVar0 /*8*/] == 1)
		{
			func_31(iVar0);
		}
		else
		{
			func_7(0);
		}
	}
}

void func_31(int iParam0)
{
	GAMEPLAY::SET_BIT(&Global_1573886, 15);
	func_12(iParam0);
	Global_1624079.f_6 = 0;
	func_7(0);
}

bool func_32()
{
	return Global_1312416;
}

int func_33(var uParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 0))
	{
		return 0;
	}
	if (Global_14491)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_14482))
	{
		return 0;
	}
	func_34();
	Global_14491 = 1;
	return 1;
}

void func_34()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14502, 1);
		func_35();
	}
}

void func_35()
{
	if (func_36())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

int func_36()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		return 0;
	}
	iVar2 = 0;
	uVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(uVar0);
	if (iVar1 == 4)
	{
		iVar2 = 1;
	}
	if (Global_4268544 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_37(var uParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 1))
	{
		return 0;
	}
	if (Global_14491)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_14485))
	{
		return 0;
	}
	func_34();
	Global_14491 = 1;
	return 1;
}

int func_38(var uParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 2))
	{
		return 0;
	}
	if (Global_14491)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (!CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_14483))
	{
		return 0;
	}
	func_39();
	Global_14491 = 1;
	return 1;
}

void func_39()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14502, 1);
	}
}

void func_40(var uParam0)
{
	if (GAMEPLAY::GET_GAME_TIMER() < uParam0->f_1)
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_14489) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 181))
	{
		func_43();
		uParam0->f_1 = GAMEPLAY::GET_GAME_TIMER() + 50;
	}
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_14490) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 180))
	{
		func_41();
		uParam0->f_1 = GAMEPLAY::GET_GAME_TIMER() + 50;
	}
}

void func_41()
{
	func_93(Global_14494, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(3), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14502, 1);
	func_42();
}

void func_42()
{
	if (func_36())
	{
		if (Global_14686 == 0)
		{
			MOBILE::_MOVE_FINGER(2);
		}
		else
		{
			MOBILE::_MOVE_FINGER(1);
		}
	}
}

void func_43()
{
	func_93(Global_14494, "SET_INPUT_EVENT", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14502, 1);
	func_44();
}

void func_44()
{
	if (func_36())
	{
		if (Global_14686 == 0)
		{
			MOBILE::_MOVE_FINGER(1);
		}
		else
		{
			MOBILE::_MOVE_FINGER(2);
		}
	}
}

int func_45(var uParam0, bool bParam1, bool bParam2)
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

void func_46()
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_29() > 1)
	{
		func_40(&uLocal_131);
	}
	if (func_33(&uLocal_131))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "GET_CURRENT_SELECTION");
		uVar0 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
		while (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uVar0))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_128 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uVar0);
		iVar1 = func_28(iLocal_128, 0);
		switch (Global_1624079.f_7[iVar1 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_48();
				break;
			
			default:
				return;
		}
		Global_14513.f_1 = 8;
		return;
	}
	if (func_37(&uLocal_131))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "GET_CURRENT_SELECTION");
		uVar2 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
		while (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uVar2))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_128 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uVar2);
		iVar3 = func_28(iLocal_128, 0);
		switch (Global_1624079.f_7[iVar3 /*8*/].f_1)
		{
			case 0:
				return;
			
			case 1:
				func_12(iVar3);
				func_83(0);
				return;
			
			default:
		}
		return;
		return;
	}
	if (func_15(0))
	{
		func_47(0);
		func_83(0);
	}
}

void func_47(int iParam0)
{
	if (func_15(iParam0))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1624079.f_3), iParam0);
	}
}

void func_48()
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<16> Var5;
	var uVar21[3];
	bool bVar25;
	int iVar26;
	int iVar27;
	char cVar28[16];
	struct<16> Var32;
	char cVar48[16];
	
	if (Global_14513.f_1 != 8)
	{
		Global_14513.f_1 = 8;
	}
	func_93(Global_14494, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	bVar0 = false;
	iVar3 = func_28(iLocal_128, 0);
	iLocal_129 = Global_1624079.f_7[iVar3 /*8*/].f_2;
	iVar4 = Global_1624079.f_7[iVar3 /*8*/].f_2;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(26);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
	if (func_45(iVar4, 0, 1))
	{
		Var5 = { func_80(iVar4) };
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
		UI::_SET_NOTIFICATION_COLOR_NEXT(func_74(iVar4));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var5);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		bVar0 = true;
	}
	else
	{
		func_21("");
	}
	if (Global_1624079.f_7[iVar3 /*8*/] == 0)
	{
		if (Global_262145.f_14833)
		{
			bVar25 = func_73(iVar4);
			iVar26 = 0;
			while (iVar26 < 3)
			{
				if (iVar27 < 3)
				{
					if (Global_1625435[iVar4 /*560*/].f_11.f_11[iVar26] != func_13())
					{
						if (func_45(Global_1625435[iVar4 /*560*/].f_11.f_11[iVar26], 0, 1))
						{
							uVar21[iVar27] = Global_1625435[iVar4 /*560*/].f_11.f_11[iVar26];
							iVar27++;
						}
					}
				}
				iVar26++;
			}
			if (iVar27 == 0)
			{
				if (bVar25)
				{
					func_21("BA_APP_BODYCTA");
				}
				else
				{
					func_21("BA_APP_BODY_TA");
				}
			}
			else
			{
				StringCopy(&cVar28, "BA_APP_BODY_T4", 16);
				if (bVar25)
				{
					StringCopy(&cVar28, "BA_APP_BODYCT4", 16);
				}
				if (iVar27 == 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT5", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T5", 16);
					}
				}
				else if (iVar27 > 2)
				{
					if (bVar25)
					{
						StringCopy(&cVar28, "BA_APP_BODYCT6", 16);
					}
					else
					{
						StringCopy(&cVar28, "BA_APP_BODY_T6", 16);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar28);
				iVar26 = 0;
				while (iVar26 < iVar27)
				{
					Var32 = { func_80(uVar21[iVar26]) };
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var32);
					iVar26++;
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
		}
		else
		{
			if (Global_1624079.f_88[iVar3 /*5*/].f_1)
			{
				if (Global_1624079.f_88[iVar3 /*5*/].f_2)
				{
					StringCopy(&cVar48, "BA_APP_BODY_T9", 16);
				}
				else
				{
					StringCopy(&cVar48, "BA_APP_BODY_T8", 16);
				}
			}
			else if (Global_1624079.f_88[iVar3 /*5*/].f_2)
			{
				StringCopy(&cVar48, "BA_APP_BODY_T7", 16);
			}
			else
			{
				StringCopy(&cVar48, "BA_APP_BODY_T10", 16);
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cVar48);
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1624079.f_88[iVar3 /*5*/]);
			UI::ADD_TEXT_COMPONENT_INTEGER(func_72(iVar4));
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1624079.f_88[iVar3 /*5*/].f_3);
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1624079.f_88[iVar3 /*5*/].f_4);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
	}
	else if (Global_1624079.f_7[iVar3 /*8*/] == 1)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM2");
		UI::_SET_NOTIFICATION_COLOR_NEXT(func_74(Global_1624079.f_7[iVar3 /*8*/].f_2));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_60(Global_1624079.f_7[iVar3 /*8*/].f_2));
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	if (bVar0)
	{
		iVar2 = func_54(Global_1624079.f_7[iVar3 /*8*/].f_2);
		if (iVar2 == 0)
		{
			bVar0 = false;
		}
		else
		{
			uVar1 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar2);
		}
	}
	if (bVar0)
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(uVar1);
	}
	else
	{
		func_21(&Local_124);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_93(Global_14494, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_52(&Local_120);
	func_49(13, &Local_112, 12, &Local_116, 4, &Local_104, &uLocal_131);
	iLocal_103 = 1;
}

void func_49(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, var uParam6)
{
	func_50(2, iParam0, sParam1, 0, uParam6, -1);
	func_50(1, iParam2, sParam3, 1, uParam6, 17);
	func_50(3, iParam4, sParam5, 2, uParam6, -1);
}

void func_50(int iParam0, int iParam1, char* sParam2, int iParam3, var uParam4, int iParam5)
{
	if (iParam1 == 1)
	{
		func_20(Global_14494, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 0f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
		GAMEPLAY::CLEAR_BIT(uParam4, iParam3);
		func_51(iParam5, 0);
		return;
	}
	if (Global_14501)
	{
		func_20(Global_14494, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, sParam2, 0, 0, 0, 0);
		GAMEPLAY::SET_BIT(uParam4, iParam3);
		func_51(iParam5, 1);
		return;
	}
	func_20(Global_14494, "SET_SOFT_KEYS", SYSTEM::TO_FLOAT(iParam0), 1f, SYSTEM::TO_FLOAT(iParam1), -1f, -1f, 0, 0, 0, 0, 0);
	GAMEPLAY::SET_BIT(uParam4, iParam3);
	func_51(iParam5, 1);
}

void func_51(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, iParam0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&Global_2383, iParam0);
}

void func_52(char* sParam0)
{
	func_53(Global_14494, "SET_HEADER", sParam0, 0, 0, 0, 0);
}

void func_53(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	func_21(sParam2);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		func_21(sParam3);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_21(sParam4);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		func_21(sParam5);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		func_21(sParam6);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = func_57(iParam0);
	if (iVar0 == -1)
	{
		func_55(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_55(int iParam0, bool bParam1)
{
	if (!func_45(iParam0, 0, 1))
	{
		return;
	}
	if (func_57(iParam0) != -1)
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
	if (func_56(iParam0))
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

int func_56(int iParam0)
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

int func_57(int iParam0)
{
	int iVar0;
	
	if (!func_45(iParam0, 0, 1))
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
			func_58(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_58(int iParam0)
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
	func_59(&(Global_1379953[iVar32 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_59(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

char* func_60(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		uVar0 = func_71(&(Global_1625435[iParam0 /*560*/].f_11.f_99));
		return uVar0;
	}
	if (Global_1625435[iParam0 /*560*/].f_11.f_115 != Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_115)
	{
		uVar0 = func_66(iParam0, 0);
		return uVar0;
	}
	if (((func_65(iParam0, 28) || func_65(PLAYER::PLAYER_ID(), 28)) || func_64(iParam0)) && !func_62(iParam0))
	{
		return func_66(iParam0, 0);
	}
	iVar1 = func_61(iParam0);
	if (iVar1 != func_13())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_66(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_13())
	{
		uVar0 = func_71(&(Global_1625435[iVar1 /*560*/].f_11.f_99));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar0))
		{
			return func_66(iVar1, 0);
		}
		else
		{
			return uVar0;
		}
	}
	return "";
}

int func_61(int iParam0)
{
	if (iParam0 != func_13())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_13();
}

int func_62(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_63(iParam0) };
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

struct<13> func_63(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_64(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_13())
	{
		Var0 = { func_63(iParam0) };
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

var func_65(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

var func_66(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_68(iParam0, 1))
		{
			return func_67();
		}
	}
	return UI::_GET_LABEL_TEXT("GB_REST_ACC");
}

var func_67()
{
	return UI::_GET_LABEL_TEXT("GB_REST_ACCM");
}

bool func_68(int iParam0, bool bParam1)
{
	return func_69(iParam0, bParam1, 1);
}

int func_69(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_70(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_13() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0, int iParam1)
{
	if (iParam0 != func_13())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_13())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_71(var uParam0)
{
	return uParam0;
}

var func_72(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_19;
}

int func_73(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 26);
}

int func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = func_77(iParam0);
	if (iVar0 != -1)
	{
		return func_75(iVar0);
	}
	return 1;
}

int func_75(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_76(iParam0);
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

var func_76(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_77(int iParam0)
{
	if (!iParam0 == func_13())
	{
		if (func_78(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_61(iParam0)];
		}
	}
	return -1;
}

bool func_78(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_79(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_13();
}

int func_79(int iParam0)
{
	if (iParam0 != func_13())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_13())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

struct<16> func_80(var uParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, PLAYER::GET_PLAYER_NAME(uParam0), 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_81()
{
	if (Global_1624079.f_6)
	{
		if (iLocal_103 != 3)
		{
			if (!UI::IS_WARNING_MESSAGE_ACTIVE())
			{
				Global_1624079.f_6 = 0;
			}
		}
	}
}

void func_82()
{
	CONTROLS::SET_INPUT_EXCLUSIVE(0, 176);
	CONTROLS::SET_INPUT_EXCLUSIVE(0, 177);
}

void func_83(bool bParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iLocal_129 = func_13();
	if (!Global_14513.f_1 == 7)
	{
		Global_14513.f_1 = 7;
	}
	iVar0 = 0;
	if (bParam0)
	{
		iVar0 = iLocal_128;
	}
	if (iVar0 >= Global_1378619)
	{
		iVar0 = 0;
	}
	if (Global_16882)
	{
		func_48();
		Global_16882 = 0;
		return;
	}
	iVar1 = func_29();
	iVar1 = (iVar1 - func_92());
	if ((func_78(PLAYER::PLAYER_ID(), 0) && !func_91(1)) && iVar1 <= 0)
	{
		func_89();
		return;
	}
	func_84();
	func_93(Global_14494, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(25), SYSTEM::TO_FLOAT(iVar0), -1082130432, -1082130432, -1082130432);
	func_52("CELL_BOSSAGE");
	bVar2 = false;
	if (iVar1 > 0)
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_49(13, &Local_108, 12, &Local_116, 4, &Local_104, &uLocal_131);
	}
	else
	{
		func_49(1, "", 1, "", 4, &Local_104, &uLocal_131);
	}
	iLocal_103 = 0;
}

void func_84()
{
	int iVar0;
	int iVar1;
	
	func_93(Global_14494, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(25), -1082130432, -1082130432, -1082130432, -1082130432);
	iVar0 = 0;
	while (iVar0 < func_29())
	{
		if (Global_1624079.f_7[iVar0 /*8*/].f_1 == 1 && Global_1624079.f_7[iVar0 /*8*/].f_7 == 0)
		{
			switch (Global_1624079.f_7[iVar0 /*8*/])
			{
				case 0:
					if (func_88(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				
				case 1:
					if (func_86(iVar0, iVar1))
					{
						iVar1++;
					}
					break;
				}
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return;
	}
	func_85();
}

void func_85()
{
	var uVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(25);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
	if (func_79(PLAYER::PLAYER_ID()))
	{
		func_21("BA_APP_NONEB");
	}
	else
	{
		func_21("BA_APP_NONE");
	}
	func_21("");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
	uVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(uVar0);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_86(int iParam0, int iParam1)
{
	struct<16> Var0;
	int iVar16;
	int iVar17;
	
	if (Global_1624079.f_7[iParam0 /*8*/].f_2 == func_13() || !func_45(Global_1624079.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(25);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
	Var0 = { func_80(Global_1624079.f_7[iParam0 /*8*/].f_2) };
	func_87(&Var0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_DM1");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
	iVar16 = 1;
	iVar17 = func_77(Global_1624079.f_7[iParam0 /*8*/].f_2);
	if (iVar17 != -1)
	{
		iVar16 = func_75(iVar17);
	}
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar16);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

void func_87(var uParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

int func_88(int iParam0, var uParam1)
{
	struct<16> Var0;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (Global_1624079.f_7[iParam0 /*8*/].f_2 == func_13() || !func_45(Global_1624079.f_7[iParam0 /*8*/].f_2, 0, 1))
	{
		return 0;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(25);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam1);
	Var0 = { func_80(Global_1624079.f_7[iParam0 /*8*/].f_2) };
	func_87(&Var0);
	bVar16 = func_73(Global_1624079.f_7[iParam0 /*8*/].f_2);
	iVar17 = func_72(Global_1624079.f_7[iParam0 /*8*/].f_2);
	if (iVar17 == 0)
	{
		if (bVar16)
		{
			func_21("BA_APP_BODYCT");
		}
		else
		{
			func_21("BA_APP_BODY_T");
		}
	}
	else if (iVar17 == 1)
	{
		if (bVar16)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT3");
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T3");
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iVar17);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		if (bVar16)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODYCT2");
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("BA_APP_BODY_T2");
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iVar17);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
	iVar18 = 1;
	iVar19 = func_77(Global_1624079.f_7[iParam0 /*8*/].f_2);
	if (iVar19 != -1)
	{
		iVar18 = func_75(iVar19);
	}
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar18);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return 1;
}

void func_89()
{
	func_93(Global_14494, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(26);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::_SET_NOTIFICATION_COLOR_NEXT(func_74(PLAYER::PLAYER_ID()));
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_90());
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_21("BA_APP_NONEG");
	func_21("CELL_AGBOSSPIC");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_93(Global_14494, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(26), -1082130432, -1082130432, -1082130432, -1082130432);
	func_52("CELL_BOSSAGE");
	func_49(1, "", 1, "", 4, &Local_104, &uLocal_131);
	iLocal_103 = 2;
}

char* func_90()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_61(PLAYER::PLAYER_ID());
	if (iVar0 != func_13())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_65(iVar0, 28) || func_65(PLAYER::PLAYER_ID(), 28)) || func_64(iVar0)) && !func_62(iVar0))
			{
				return func_66(iVar0, 0);
			}
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_66(iVar0, 0);
			}
		}
		uVar1 = func_71(&(Global_1625435[iVar0 /*560*/].f_11.f_99));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			return func_66(iVar0, 0);
		}
		else
		{
			return uVar1;
		}
	}
	return "";
}

bool func_91(bool bParam0)
{
	return func_68(PLAYER::PLAYER_ID(), bParam0);
}

int func_92()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_29())
	{
		if (Global_1624079.f_7[iVar0 /*8*/].f_7 == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_93(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_94()
{
	Global_1624079.f_1 = 0;
	func_95();
}

void func_95()
{
	Global_1624079.f_5 = 0;
}

void func_96(var uParam0)
{
	*uParam0 = 0;
}

