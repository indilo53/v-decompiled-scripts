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
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	bool bLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43[4] = { 0, 0, 0, 0 };
	var uLocal_48[4] = { 0, 0, 0, 0 };
	var uLocal_53[4] = { 0, 0, 0, 0 };
	var uLocal_58[4] = { 0, 0, 0, 0 };
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	int iLocal_65 = 0;
	var uLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
#endregion

void __EntryFunction__()
{
	struct<57> Var0;
	int iVar314;
	
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
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	fLocal_39 = 0f;
	fLocal_40 = 0f;
	fLocal_86 = 0.95f;
	fLocal_87 = 0.07f;
	fLocal_88 = 0.755f;
	iLocal_97 = 9999;
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Global_106012 = GAMEPLAY::GET_GAME_TIMER();
	func_117();
	func_116();
	func_114();
	Global_14513.f_1 = 3;
	Global_14501 = 0;
	Global_14683 = 0;
	Global_16857 = 0;
	Var0.f_23 = 2;
	Var0.f_56 = 16;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_14513.f_1 > 3)
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 337, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 353, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 354, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 357, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 353, 1);
		}
		if (iLocal_95 == 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iLocal_95 = 1;
				iLocal_97 = func_111(8491, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iLocal_95 == 1)
			{
				switch (unk_0x83D607D7994DEF3A())
				{
					case -1:
						unk_0x07DBD622D9533857("gta5mkt_en");
						break;
					
					case 0:
						unk_0x07DBD622D9533857("gta5mkt_en");
						break;
					
					case 1:
						unk_0x07DBD622D9533857("gta5mkt_fr");
						break;
					
					case 2:
						unk_0x07DBD622D9533857("gta5mkt_ge");
						break;
					
					case 3:
						unk_0x07DBD622D9533857("gta5mkt_it");
						break;
					
					case 4:
						unk_0x07DBD622D9533857("gta5mkt_sp");
						break;
					
					case 5:
						unk_0x07DBD622D9533857("gta5mkt_pt");
						break;
					
					case 6:
						unk_0x07DBD622D9533857("gta5mkt_pl");
						break;
					
					case 7:
						unk_0x07DBD622D9533857("gta5mkt_ru");
						break;
					
					case 8:
						unk_0x07DBD622D9533857("gta5mkt_ko");
						break;
					
					case 9:
						unk_0x07DBD622D9533857("gta5mkt_ch");
						break;
					
					case 10:
						unk_0x07DBD622D9533857("gta5mkt_ja");
						break;
					
					case 11:
						unk_0x07DBD622D9533857("gta5mkt_me");
						break;
					
					case 12:
						unk_0x07DBD622D9533857("gta5mkt_cn");
						break;
				}
				SOCIALCLUB::_SC_INBOX_GET_EMAILS(0, 1);
				iLocal_95 = 2;
			}
			if (iLocal_95 == 2)
			{
				iLocal_96 = SOCIALCLUB::_0x16DA8172459434AA();
				switch (iLocal_96)
				{
					case 3:
						break;
					
					case 0:
						if (unk_0x7DB18CA8CAD5B098() > 0)
						{
							SOCIALCLUB::_0x4737980E8A283806(0, &Var0);
							if (Var0.f_1 != iLocal_97)
							{
								Global_4267064 = 1;
							}
							else
							{
								Global_4267064 = 0;
							}
						}
						iLocal_95 = 3;
						break;
					
					case 1:
						break;
					
					case 4:
						Global_4267064 = 0;
						iLocal_95 = 3;
						break;
					}
			}
		}
		else
		{
			Global_4267064 = 0;
			iLocal_95 = 0;
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (GAMEPLAY::IS_STUNT_JUMP_IN_PROGRESS())
			{
				if (Global_14513.f_1 == 6)
				{
					Global_14513.f_1 = 3;
				}
			}
		}
		if (func_110(146))
		{
			if (Global_71205 == 0)
			{
				iVar314 = func_78(0, 0, 119);
				if (iVar314 != 0)
				{
					func_76(iVar314);
				}
				else
				{
					func_75();
				}
				func_72(0);
			}
		}
		if (Global_2524719.f_4530 == 1)
		{
			if (Global_14513.f_1 > 3)
			{
				Global_14513.f_1 = 3;
			}
		}
		if (Global_71205 == 1)
		{
			if (Global_14513.f_1 == 3)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4268330, 15))
				{
					GAMEPLAY::SET_BIT(&Global_4268330, 14);
					SYSTEM::WAIT(0);
					while (!func_70(3, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 14);
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 15);
				}
				if (GAMEPLAY::IS_BIT_SET(Global_4268330, 16))
				{
					GAMEPLAY::SET_BIT(&Global_4268330, 14);
					SYSTEM::WAIT(0);
					while (!func_70(17, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 14);
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 16);
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 27);
				}
				if (GAMEPLAY::IS_BIT_SET(Global_4268330, 27))
				{
					GAMEPLAY::SET_BIT(&Global_4268330, 14);
					SYSTEM::WAIT(0);
					while (!func_70(23, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 14);
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 16);
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 27);
				}
			}
		}
		if (Global_71205 == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_4268330, 11))
			{
				if ((Global_14513.f_1 != 10 && Global_14513.f_1 != 9) || func_69() == 0)
				{
					GAMEPLAY::CLEAR_BIT(&Global_4268330, 11);
					GAMEPLAY::SET_BIT(&Global_2384, 11);
				}
			}
			else if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
			{
				if (func_69())
				{
					GAMEPLAY::SET_BIT(&Global_4268330, 11);
					GAMEPLAY::SET_BIT(&Global_2384, 11);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Global_4268330, 12))
			{
				GAMEPLAY::CLEAR_BIT(&Global_4268330, 12);
				GAMEPLAY::SET_BIT(&Global_2384, 11);
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_4268330, 12))
		{
			if ((Global_16885 == 0 || Global_16886 == 0) && !Global_16887)
			{
				GAMEPLAY::CLEAR_BIT(&Global_4268330, 12);
				GAMEPLAY::SET_BIT(&Global_2384, 11);
			}
		}
		else if (Global_16887 || (Global_16885 > 0 && Global_16886 == 1))
		{
			GAMEPLAY::SET_BIT(&Global_4268330, 12);
			GAMEPLAY::SET_BIT(&Global_2384, 11);
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (NETWORK::_0xC0D2AF00BCC234CA())
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 19))
				{
					GAMEPLAY::SET_BIT(&Global_4268330, 19);
					GAMEPLAY::SET_BIT(&Global_2384, 11);
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4268330, 19))
			{
				GAMEPLAY::CLEAR_BIT(&Global_4268330, 19);
				GAMEPLAY::SET_BIT(&Global_2384, 11);
			}
		}
		if (iLocal_93 == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 25))
			{
				STATS::STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_92, -1);
				iLocal_90 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_93 = 1;
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(Global_2383, 25))
		{
			STATS::STAT_GET_INT(joaat("sp_cellphone_sleep_time"), &iLocal_92, -1);
			iLocal_91 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_93 = 0;
			STATS::STAT_SET_INT(joaat("sp_cellphone_sleep_time"), (iLocal_92 + (iLocal_91 - iLocal_90)), 1);
		}
		func_68();
		func_67();
		func_66();
		func_64();
		func_53();
		func_52();
		func_51();
		if (GAMEPLAY::IS_BIT_SET(Global_2384, 21))
		{
			if (!AUDIO::_0xC8B1B2425604CDD0())
			{
				GAMEPLAY::CLEAR_BIT(&Global_2384, 21);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Global_2383, 7))
		{
			func_47();
			GAMEPLAY::CLEAR_BIT(&Global_2383, 7);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_2383, 0))
		{
			func_46();
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4268330, 0))
		{
			func_45();
		}
		if (GAMEPLAY::IS_BIT_SET(Global_2384, 11))
		{
			Global_3087 = 0;
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 25))
			{
				Global_3087++;
			}
			if (GAMEPLAY::IS_BIT_SET(Global_4268330, 11))
			{
				if (Global_71205 == 0)
				{
					Global_3087++;
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Global_4268330, 28))
			{
				if (Global_71205 == 1)
				{
					Global_3087++;
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Global_4268330, 12))
			{
				if (Global_71205 && (Global_16886 || Global_16887))
				{
					Global_3087++;
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Global_4268330, 19))
			{
				Global_3087++;
			}
			if (Global_3087 == 0)
			{
				GAMEPLAY::CLEAR_BIT(&Global_2384, 11);
				iLocal_41 = 0;
			}
			else
			{
				iLocal_41 = 1;
			}
		}
		if (!func_44())
		{
			if (!UI::IS_WARNING_MESSAGE_ACTIVE())
			{
				if (Global_14513.f_1 == 3)
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || CUTSCENE::_0x5EDEF0CF8C1DAB3C())
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (Global_71205)
								{
									func_32();
								}
								else
								{
									func_32();
								}
							}
						}
					}
				}
			}
			if (Global_14513.f_1 == 4)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2384, 21))
				{
					func_32();
				}
			}
			func_22();
		}
		else if (func_15())
		{
		}
		switch (Global_16857)
		{
			case 0:
				func_14();
				if (Global_16859 == 1)
				{
					func_13();
				}
				break;
			
			case 1:
				func_12();
				break;
			
			case 2:
				func_11();
				break;
			
			case 3:
				func_10();
				break;
			
			case 4:
				func_9();
				break;
			
			case 5:
				func_8();
				break;
			
			case 14:
				func_13();
				break;
			
			case 6:
				if (Global_16859 == 1)
				{
					func_13();
				}
				if (Global_16860 == 1)
				{
					Global_16857 = 9;
					Global_16860 = 0;
				}
				break;
			
			case 8:
				func_7();
				break;
			
			case 9:
				func_5();
				break;
			
			case 10:
				func_4();
				break;
			
			case 11:
				func_3();
				break;
			
			case 12:
				func_2();
				break;
			
			case 13:
				func_1();
				break;
		}
	}
}

void func_1()
{
	iLocal_70 = GRAPHICS::_RETURN_TWO(Global_16861);
	switch (iLocal_70)
	{
		case 0:
			Global_16857 = 4;
			break;
		
		case 1:
			break;
		
		case 2:
			GAMEPLAY::SET_BIT(&Global_2384, 15);
			func_13();
			break;
	}
}

void func_2()
{
	if (GRAPHICS::_0xEC72C258667BE5EA(Global_16861))
	{
		Global_16857 = 13;
	}
	else
	{
		func_13();
	}
}

void func_3()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_68 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_66);
	}
	else
	{
		iLocal_67 = GAMEPLAY::GET_GAME_TIMER();
		iLocal_68 = (iLocal_67 - iLocal_65);
	}
	if (iLocal_68 > 3000)
	{
		UI::_REMOVE_LOADING_PROMPT();
	}
	if (iLocal_68 > 3200)
	{
		Global_16857 = 6;
	}
}

void func_4()
{
	iLocal_70 = GRAPHICS::_0x0C0C4E81E1AC60A0();
	switch (iLocal_70)
	{
		case 0:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				uLocal_66 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iLocal_65 = GAMEPLAY::GET_GAME_TIMER();
			}
			Global_16857 = 11;
			SYSTEM::SETTIMERB(0);
			break;
		
		case 1:
			break;
		
		case 2:
			func_13();
			break;
	}
}

void func_5()
{
	Global_16862 = -1;
	if (Global_71205)
	{
		if (func_6())
		{
			unk_0xF3F776ADA161E47D(Global_4456448.f_146778, Global_4456448.f_146778.f_1);
		}
	}
	if (GRAPHICS::_0x3DEC726C25A11BAC(Global_16862))
	{
		Global_16857 = 10;
		UI::_BEGIN_TEXT_COMMAND_BUSY_STRING("CELL_278");
		UI::_END_TEXT_COMMAND_BUSY_STRING(1);
	}
	else
	{
		func_13();
	}
}

bool func_6()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_146776, 12);
}

void func_7()
{
	iLocal_70 = GRAPHICS::_0xF5BED327CEA362B1(1);
	switch (iLocal_70)
	{
		case 0:
			Global_16857 = 9;
			break;
		
		case 1:
			break;
		
		case 2:
			func_13();
			break;
	}
}

void func_8()
{
	iLocal_70 = GRAPHICS::_0xCB82A0BF0E3E3265(iLocal_71);
	switch (iLocal_70)
	{
		case 0:
			GRAPHICS::_0x1072F115DAB0717E(1, 1);
			Global_16857 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			if (iLocal_71 == 3)
			{
				GAMEPLAY::SET_BIT(&Global_2384, 14);
				GRAPHICS::_0x1072F115DAB0717E(0, 0);
				GRAPHICS::_0xD801CC02177FA3F1();
				GRAPHICS::_0x6A12D88881435DCA();
				Global_16857 = 6;
			}
			if (Global_16857 == 5)
			{
				if (iLocal_71 == 0)
				{
					Global_16857 = 4;
					iLocal_71 = 1;
					GRAPHICS::_0x6A12D88881435DCA();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_16857 == 5)
			{
				if (iLocal_71 == 1)
				{
					Global_16857 = 4;
					iLocal_71 = 2;
					GRAPHICS::_0x6A12D88881435DCA();
					SYSTEM::WAIT(0);
				}
			}
			if (Global_16857 == 5)
			{
				if (iLocal_71 == 2)
				{
					Global_16857 = 4;
					iLocal_71 = 3;
					GRAPHICS::_0x6A12D88881435DCA();
					SYSTEM::WAIT(0);
				}
			}
			break;
	}
}

void func_9()
{
	if (GRAPHICS::_0x759650634F07B6B4(iLocal_71))
	{
		Global_16857 = 5;
	}
	else
	{
		GAMEPLAY::SET_BIT(&Global_2384, 15);
		func_13();
	}
}

void func_10()
{
	iLocal_70 = GRAPHICS::_0x0D6CA79EEEBD8CA3();
	switch (iLocal_70)
	{
		case 0:
			Global_16857 = 4;
			iLocal_71 = 2;
			break;
		
		case 1:
			break;
		
		case 2:
			Global_14513.f_1 = 3;
			func_13();
			break;
	}
}

void func_11()
{
	if (GRAPHICS::_0xA67C35C56EB1BD9D())
	{
		Global_16857 = 3;
	}
}

void func_12()
{
	if (SYSTEM::TIMERB() > 0)
	{
		Global_16857 = 2;
	}
}

void func_13()
{
	GRAPHICS::_0x1072F115DAB0717E(0, 0);
	GRAPHICS::_0xD801CC02177FA3F1();
	GRAPHICS::_0x6A12D88881435DCA();
	UI::_REMOVE_LOADING_PROMPT();
	Global_16858 = 0;
	Global_16859 = 0;
	Global_16860 = 0;
	Global_16857 = 0;
}

void func_14()
{
	if (Global_16858)
	{
		Global_16857 = 1;
		GAMEPLAY::CLEAR_BIT(&Global_2384, 14);
		SYSTEM::SETTIMERB(0);
	}
}

int func_15()
{
	var uVar0;
	
	if ((func_21(2, Global_14480, 0) && !UI::IS_HUD_COMPONENT_ACTIVE(19)) && !GAMEPLAY::IS_STUNT_JUMP_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched"))
			{
				uVar0 = UI::_GET_LABEL_TEXT("CELL_ANTIH_A");
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_ANTIH");
				UI::_SET_NOTIFICATION_MESSAGE_2("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", 0, 0, uVar0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_20(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_AIMING_FROM_COVER(PLAYER::PLAYER_PED_ID()))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
		Global_16881 = 0;
		Global_16882 = 0;
		if (UI::_GET_CURRENT_NOTIFICATION() == Global_16879 && UI::_GET_CURRENT_NOTIFICATION() != -1)
		{
			Global_16881 = Global_16880;
			iLocal_74 = GAMEPLAY::GET_GAME_TIMER();
			iLocal_76 = 0;
			iLocal_77 = 0;
			while (((func_19(2, Global_14480) && iLocal_76 < 250) && Global_14689 == 0) && !UI::IS_HUD_COMPONENT_ACTIVE(19))
			{
				if (Global_3087 > 0)
				{
					func_16();
				}
				SYSTEM::WAIT(0);
				iLocal_75 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_76 = (iLocal_75 - iLocal_74);
				if (Global_3087 > 0)
				{
					func_16();
				}
			}
			if ((func_19(2, Global_14480) && Global_14689 == 0) && !UI::IS_HUD_COMPONENT_ACTIVE(19))
			{
				iLocal_77 = 1;
			}
			if (Global_14689 == 0)
			{
				if (iLocal_77 == 1)
				{
					Global_16882 = 1;
					Global_16881 = Global_16880;
					if (Global_16881 == 1)
					{
					}
					if (Global_16881 == 2)
					{
					}
					if (Global_16881 == 3)
					{
					}
					if (Global_16881 == 0)
					{
					}
					if (Global_16881 == 4)
					{
					}
				}
				else
				{
					Global_16881 = 0;
				}
			}
			else
			{
				Global_16881 = 0;
			}
		}
		else
		{
			Global_16881 = 0;
		}
		if (!UI::IS_HUD_COMPONENT_ACTIVE(19))
		{
			return 1;
		}
		else
		{
			Global_16881 = 0;
			Global_16882 = 0;
			return 0;
		}
	}
	return 0;
}

void func_16()
{
	int iVar0;
	
	iVar0 = 255;
	if (Global_16887)
	{
		fLocal_87 = -0.055f;
		fLocal_88 = 0.745f;
		fLocal_83 = GRAPHICS::GET_SAFE_ZONE_SIZE();
		fLocal_89 = ((100f * fLocal_86) - (100f * fLocal_83));
		fLocal_84 = (fLocal_87 + (fLocal_89 * 0.005f));
		fLocal_85 = (fLocal_88 - (fLocal_89 * 0.005f));
		if (!func_18())
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			GRAPHICS::_SET_UI_LAYER(7);
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::_0xEFABC7722293DA7C();
			}
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
			GRAPHICS::_SET_UI_LAYER(4);
		}
	}
	else
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (Global_2415861.f_1485)
			{
				bLocal_38 = false;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2383, 13))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4268330, 19))
				{
					bLocal_38 = false;
				}
				else
				{
					bLocal_38 = true;
				}
			}
			else
			{
				bLocal_38 = false;
			}
		}
		else if (Global_2415861.f_1485 || GAMEPLAY::IS_BIT_SET(Global_2383, 13))
		{
			bLocal_38 = true;
		}
		else
		{
			bLocal_38 = false;
		}
		if (func_44())
		{
			bLocal_38 = true;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4268330, 28))
		{
			iVar0 = 125;
			if (bLocal_38 == 1)
			{
				bLocal_38 = false;
			}
		}
		if (UI::_IS_RADAR_ENABLED())
		{
			if (!UI::IS_RADAR_HIDDEN())
			{
				if (!bLocal_38)
				{
					if (!func_17())
					{
						if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						{
							if (!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
							{
								GRAPHICS::_SET_UI_LAYER(4);
								if (GAMEPLAY::IS_PC_VERSION() && Global_2415861.f_1485)
								{
									fLocal_87 = 0.165f;
									fLocal_88 = 0.755f;
								}
								else
								{
									fLocal_87 = 0.07f;
									fLocal_88 = 0.755f;
								}
								fLocal_83 = GRAPHICS::GET_SAFE_ZONE_SIZE();
								fLocal_89 = ((100f * fLocal_86) - (100f * fLocal_83));
								fLocal_84 = (fLocal_87 + (fLocal_89 * 0.005f));
								fLocal_85 = (fLocal_88 - (fLocal_89 * 0.005f));
								if (!func_18())
								{
									if (GAMEPLAY::IS_PC_VERSION())
									{
										GRAPHICS::_0xEFABC7722293DA7C();
									}
									if (Global_2415861.f_1485)
									{
										fLocal_39 = 0.09f;
										fLocal_40 = -0.25f;
										if (GAMEPLAY::IS_PC_VERSION())
										{
											if (GAMEPLAY::IS_BIT_SET(Global_4268330, 28))
											{
											}
											else
											{
												GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
											}
										}
										else
										{
											GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_37, (fLocal_84 + fLocal_39), (fLocal_85 + fLocal_40), 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
										}
									}
									else
									{
										GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, iVar0, 0);
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

int func_17()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_18()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2385, 3))
	{
		return 1;
	}
	return 0;
}

int func_19(int iParam0, var uParam1)
{
	if (CONTROLS::IS_CONTROL_PRESSED(iParam0, uParam1))
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0)
			{
				return 0;
			}
		}
		if (UI::IS_PAUSE_MENU_ACTIVE() || UI::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_20(var uParam0)
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

int func_21(int iParam0, var uParam1, int iParam2)
{
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, uParam1)))
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (GAMEPLAY::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && CONTROLS::_IS_INPUT_DISABLED(2)))
			{
				return 0;
			}
		}
		if (UI::IS_PAUSE_MENU_ACTIVE() || UI::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_22()
{
	switch (Global_14513.f_1)
	{
		case 4:
			if (GAMEPLAY::IS_BIT_SET(Global_2384, 21))
			{
			}
			else
			{
				if (SCRIPT::IS_THREAD_ACTIVE(Global_14510))
				{
				}
				else
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_14510))
					{
						if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_3087 > 0)
								{
									func_16();
								}
							}
							if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_14510 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					func_31(0);
				}
				if (Global_15832 || Global_15833)
				{
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_14510))
					{
						if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
						{
							SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
							while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand"))
							{
								SYSTEM::WAIT(0);
								if (Global_3087 > 0)
								{
									func_16();
								}
							}
							if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
							{
								Global_14510 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
							}
							SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
						}
					}
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14494) && Global_14496 == 0)
					{
						SYSTEM::WAIT(0);
						if (Global_3087 > 0)
						{
							func_16();
						}
					}
					if (Global_14496 == 0)
					{
						Global_14513.f_1 = 9;
						func_23();
					}
				}
				else
				{
					bLocal_82 = false;
					if (Global_71205 && (Global_16884 || Global_1624079.f_5))
					{
						bLocal_82 = true;
					}
					if (((Global_106070.f_14023[Global_14513 /*20*/].f_18 == 1 || Global_106070.f_14023[Global_14513 /*20*/].f_17 == 1) || bLocal_82 == 1) || Global_16881 != 0)
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14494) && Global_14496 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_3087 > 0)
							{
								func_16();
							}
						}
						if (Global_14496 == 0)
						{
							if (Global_14513.f_1 > 3)
							{
								Global_14513.f_1 = 6;
								if (Global_16881 == 0)
								{
									if (bLocal_82)
									{
									}
									else if (Global_71205 == 0)
									{
										if (Global_106070.f_14023[Global_14513 /*20*/].f_17 == 1)
										{
											func_70(1, 0, 1, 0);
										}
									}
								}
								else
								{
									if (Global_16881 == 3)
									{
									}
									if (Global_16881 == 1)
									{
									}
									if (Global_16881 == 2)
									{
									}
									if (Global_16881 == 4)
									{
									}
								}
							}
						}
					}
					else
					{
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14494) && Global_14496 == 0)
						{
							SYSTEM::WAIT(0);
							if (Global_3087 > 0)
							{
								func_16();
							}
						}
						if (Global_14496 == 0)
						{
							if (Global_14513.f_1 > 3)
							{
								if (Global_15832 || Global_15833)
								{
									Global_14513.f_1 = 9;
								}
								else
								{
									Global_14513.f_1 = 6;
								}
							}
						}
					}
				}
			}
			break;
	}
}

void func_23()
{
	vector3 vVar0;
	
	if (Global_14496 == 1)
	{
		return;
	}
	if (Global_14513.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14494))
	{
		SYSTEM::WAIT(0);
	}
	switch (Global_14513.f_1)
	{
		case 6:
			func_30(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_28(Global_2988);
			if (Global_2988 == 1)
			{
				func_30(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14517), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14517;
			}
			else
			{
				func_30(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14518), -1082130432, -1082130432, -1082130432);
				Global_14493 = Global_14518;
			}
			if (Global_14501)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14683 == 0)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
			}
			else if (Global_71205)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
			}
			else
			{
				if (Global_14682 == 1)
				{
					if (Global_14501)
					{
						func_27(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_27(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14501)
				{
					func_27(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_27(Global_14494, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::SET_BIT(&Global_2383, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_30(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_27(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_27(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 20))
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14512 == 1)
			{
				func_26();
				func_30(Global_14494, "SET_THEME", SYSTEM::TO_FLOAT(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15835)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15837);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_25("CELL_300");
					func_25("CELL_217");
					func_25("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
				{
					func_27(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_27(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), "CELL_217", &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
				}
				func_30(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15822 == 4 || Global_15822 == 3)
			{
				func_30(Global_14494, "SET_THEME", SYSTEM::TO_FLOAT(Global_106070.f_14023[Global_14513 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_26();
				if (Global_15835)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15837);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_25("CELL_300");
					func_25("CELL_219");
					func_25("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_16080)
					{
						StringCopy(&vVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&vVar0, "CELL_211", 24);
					}
					if (Global_106070.f_28022[Global_1698 /*29*/].f_24[Global_14513] == 0)
					{
						func_30(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_27(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1698 /*10*/].f_4), "CELL_300", &vVar0, "CELL_195", 0);
					}
					else
					{
						func_30(Global_14494, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_27(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), &(Global_106070.f_28022[Global_1698 /*29*/].f_7), &vVar0, &(Global_106070.f_28022[Global_1698 /*29*/].f_3), 0);
					}
				}
				func_30(Global_14494, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_24();
			break;
		
		default:
			break;
	}
}

void func_24()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14494))
	{
		if (Global_14512 == 1)
		{
			if (Global_14501)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15869)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2383, 20))
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_27(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
		}
		else
		{
			func_27(Global_14494, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_27(Global_14494, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2383, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 20))
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14501)
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14456)
				{
					func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_27(Global_14494, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_25(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_26()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14513 == 0)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 1)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 2)
		{
			switch (Global_106070.f_14023[Global_14513 /*20*/].f_6)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				default:
					break;
				}
		}
		if (Global_14513 == 3)
		{
			switch (Global_4268542)
			{
				case 1:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 0);
					break;
				
				case 2:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 1);
					break;
				
				case 3:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 2);
					break;
				
				case 4:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 3);
					break;
				
				case 5:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 4);
					break;
				
				case 6:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 5);
					break;
				
				case 7:
					PLAYER::SET_PLAYER_RESET_FLAG_PREFER_REAR_SEATS(PLAYER::PLAYER_ID(), 6);
					break;
				
				default:
					break;
				}
			}
	}
}

void func_27(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_25(sParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_25(iParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_25(iParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_25(iParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_25(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_28(int iParam0)
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
		if (func_29(14))
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
								func_25(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_27(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_27(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_27(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_27(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(uVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_27(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_25(&(Global_2390[iVar1 /*15*/]));
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
								func_25(&(Global_2390[iVar1 /*15*/]));
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
								func_25(&(Global_2390[iVar1 /*15*/]));
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
								func_25(&(Global_2390[iVar1 /*15*/]));
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
								func_25(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_27(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_27(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
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

bool func_29(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_30(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_31(bool bParam0)
{
	if (bParam0)
	{
		if (Global_14513.f_1 == 9)
		{
			Global_14681 = 1;
		}
	}
	else
	{
		Global_14681 = 0;
	}
}

void func_32()
{
	if (func_15() || GAMEPLAY::IS_BIT_SET(Global_2383, 8))
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 8);
		func_38();
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				if (func_37())
				{
				}
				else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_2384, 21))
					{
						GAMEPLAY::CLEAR_BIT(&Global_2384, 21);
					}
					if (Global_14689 == 1)
					{
						Global_14689 = 0;
					}
					switch (Global_14513.f_1)
					{
						case 3:
							Global_14513.f_1 = 4;
							if (iLocal_94 == 0)
							{
								func_33();
								iLocal_94 = 1;
							}
							break;
						
						default:
							break;
					}
					Global_14679 = 1;
				}
			}
		}
	}
}

void func_33()
{
	if (Global_4267064 == 1)
	{
		if (!func_36())
		{
			return;
		}
		if (func_34(PLAYER::PLAYER_ID()))
		{
			if (GAMEPLAY::GET_PROFILE_SETTING(803) == 1)
			{
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_EMAIL_EVENT");
				UI::_DRAW_NOTIFICATION(1, 1);
			}
			else if (GAMEPLAY::GET_PROFILE_SETTING(803) != 1)
			{
			}
		}
	}
}

int func_34(int iParam0)
{
	int iVar0;
	struct<13> Var1;
	
	if (NETWORK::_0x606E4D3E3CCCF3EB() == 0)
	{
		return 0;
	}
	iVar0 = -1;
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	if (GAMEPLAY::IS_PS3_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			if (NETWORK::_0x83F28CE49FBBFFBA(0, -3, 1) || NETWORK::_0xAEEF48CDF5B6CE7C(1, -1))
			{
				return 1;
			}
		}
		else
		{
			Var1 = { func_35(iParam0) };
			if (NETWORK::_0xAEEF48CDF5B6CE7C(0, -1) || (NETWORK::_0xAEEF48CDF5B6CE7C(1, -1) && NETWORK::NETWORK_IS_FRIEND(&Var1)))
			{
				return 1;
			}
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (NETWORK::_0xAEEF48CDF5B6CE7C(0, iVar0))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_35(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_36()
{
	if (GAMEPLAY::IS_PS3_VERSION() && NETWORK::_0x9614B71F8ADB982B() == 3)
	{
		return 1;
	}
	if (GAMEPLAY::IS_XBOX360_VERSION() && NETWORK::_0x9614B71F8ADB982B() == 3)
	{
		return 1;
	}
	if (GAMEPLAY::IS_ORBIS_VERSION() && NETWORK::_NETWORK_HAS_RESTRICTED_PROFILE() == 0)
	{
		return 1;
	}
	if (GAMEPLAY::IS_DURANGO_VERSION() && NETWORK::_NETWORK_HAS_RESTRICTED_PROFILE() == 0)
	{
		return 1;
	}
	if (GAMEPLAY::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

int func_37()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if ((((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
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

void func_38()
{
	if (func_29(14))
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
		Global_14513 = func_39();
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

var func_39()
{
	func_40();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_40()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_43(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_42(PLAYER::PLAYER_PED_ID());
			if (func_41(iVar0) && (!func_29(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_41(Global_106070.f_2355.f_539.f_4301))
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

bool func_41(int iParam0)
{
	return iParam0 < 3;
}

int func_42(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_43(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_43(int iParam0)
{
	if (func_41(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_44()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_45()
{
	char cVar0[64];
	int iVar16;
	char cVar17[64];
	char cVar33[64];
	char cVar49[64];
	char cVar65[64];
	
	GAMEPLAY::CLEAR_BIT(&Global_4268330, 0);
	if (Global_16883 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_16883))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_16883))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_16883), 64);
				Global_16891[Global_16889] = Global_16883;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16891[Global_4268314] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16891[Global_4268314] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, UI::_GET_LABEL_TEXT(&(Global_106070.f_28022[Global_4267065[Global_4268314 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16891[Global_4268314] = 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_4267065[Global_4268314 /*104*/].f_32 == 4 || Global_4267065[Global_4268314 /*104*/].f_32 == 5) || Global_4267065[Global_4268314 /*104*/].f_32 == 6) || Global_4267065[Global_4268314 /*104*/].f_32 == 7) || Global_4267065[Global_4268314 /*104*/].f_32 == 8) || Global_4267065[Global_4268314 /*104*/].f_32 == 9) || Global_4267065[Global_4268314 /*104*/].f_32 == 10) || Global_4267065[Global_4268314 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_4267065[Global_4268314 /*104*/].f_49)
		{
			case 1:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL01");
				break;
			
			case 2:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL02");
				break;
			
			case 3:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL03");
				break;
			
			case 4:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL04");
				break;
			
			case 5:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL05");
				break;
			
			case 6:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL06");
				break;
			
			case 7:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL07");
				break;
			
			case 8:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL08");
				break;
			
			case 9:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL09");
				break;
		}
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267065[Global_4268314 /*104*/]));
		while (iVar16 < Global_4267065[Global_4268314 /*104*/].f_49)
		{
			switch (Global_4267065[Global_4268314 /*104*/].f_32)
			{
				case 4:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2524719.f_1651[iVar16 /*4*/]));
					break;
				
				case 5:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654554[iVar16 /*4*/]));
					break;
				
				case 6:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654595[iVar16 /*4*/]));
					break;
				
				case 7:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654616[iVar16 /*4*/]));
					break;
				
				case 8:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654633[iVar16 /*4*/]));
					break;
				
				case 9:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654646[iVar16 /*4*/]));
					break;
				
				case 10:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654659[iVar16 /*4*/]));
					break;
				
				case 11:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654672[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, UI::_GET_LABEL_TEXT(&(Global_106070.f_28022[Global_4267065[Global_4268314 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_64 = UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar17, 0);
		GAMEPLAY::SET_BIT(&Global_4268330, 1);
		Global_16880 = 1;
		Global_16879 = uLocal_64;
		Global_16883 = 0;
	}
	else
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY(&(Global_4267065[Global_4268314 /*104*/]));
		switch (Global_4267065[Global_4268314 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267065[Global_4268314 /*104*/].f_33));
				if (Global_4267065[Global_4268314 /*104*/].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4267065[Global_4268314 /*104*/].f_67), "NULL"))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267065[Global_4268314 /*104*/].f_67));
				}
				if ((Global_4267065[Global_4268314 /*104*/].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4267065[Global_4268314 /*104*/].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4267065[Global_4268314 /*104*/].f_83), "NULL"))
				{
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_4267065[Global_4268314 /*104*/].f_67)))
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267065[Global_4268314 /*104*/].f_67));
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267065[Global_4268314 /*104*/].f_67));
					}
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_4267065[Global_4268314 /*104*/].f_83)))
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267065[Global_4268314 /*104*/].f_83));
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267065[Global_4268314 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				UI::ADD_TEXT_COMPONENT_INTEGER(Global_4267065[Global_4268314 /*104*/].f_49);
				break;
			
			case 3:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267065[Global_4268314 /*104*/].f_33));
				UI::ADD_TEXT_COMPONENT_INTEGER(Global_4267065[Global_4268314 /*104*/].f_49);
				if (Global_4267065[Global_4268314 /*104*/].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4267065[Global_4268314 /*104*/].f_67), "NULL"))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267065[Global_4268314 /*104*/].f_67));
				}
				if ((Global_4267065[Global_4268314 /*104*/].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4267065[Global_4268314 /*104*/].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_4267065[Global_4268314 /*104*/].f_83), "NULL"))
				{
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_4267065[Global_4268314 /*104*/].f_67)))
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267065[Global_4268314 /*104*/].f_67));
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267065[Global_4268314 /*104*/].f_67));
					}
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_4267065[Global_4268314 /*104*/].f_83)))
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267065[Global_4268314 /*104*/].f_83));
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267065[Global_4268314 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_4267065[Global_4268314 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_3071, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_64 = UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar33, 0);
			GAMEPLAY::SET_BIT(&Global_4268330, 1);
			Global_16880 = 1;
			Global_16879 = uLocal_64;
		}
		else
		{
			StringCopy(&cVar49, UI::_GET_LABEL_TEXT(&(Global_106070.f_28022[Global_4267065[Global_4268314 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_4267065[Global_4268314 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &cVar49, 64);
				uLocal_64 = UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar65, 0);
			}
			else
			{
				uLocal_64 = UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 2, &cVar49, 0);
			}
			GAMEPLAY::SET_BIT(&Global_4268330, 1);
			Global_16880 = 1;
			Global_16879 = uLocal_64;
			Global_16883 = 0;
		}
	}
	Global_4267065[Global_4268314 /*104*/].f_16 = uLocal_64;
}

void func_46()
{
	char cVar0[64];
	char cVar16[64];
	var uVar32;
	
	StringCopy(&cVar0, UI::_GET_LABEL_TEXT(&(Global_106070.f_28022[Global_3069 /*29*/].f_7)), 64);
	if (Global_3088 == 0)
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY("");
		StringCopy(&cVar16, UI::_GET_LABEL_TEXT(&(Global_2993[1 /*6*/])), 64);
		uVar32 = UI::_GET_LABEL_TEXT("CELL_253");
		UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, uVar32, &cVar16);
	}
	else
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_255");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2993[1 /*6*/]));
		UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, "", 0);
	}
	GAMEPLAY::CLEAR_BIT(&Global_2383, 0);
}

void func_47()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2383, 1))
	{
		func_50();
		func_48();
		Global_106070.f_14023[Global_14513 /*20*/].f_18 = 1;
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			uLocal_53[Global_14513] = NETWORK::GET_NETWORK_TIME();
			iLocal_43[Global_14513] = 1;
		}
		else if (!GAMEPLAY::IS_BIT_SET(Global_2383, 10))
		{
			uLocal_48[Global_14513] = GAMEPLAY::GET_GAME_TIMER();
			iLocal_43[Global_14513] = 1;
		}
		else
		{
			uLocal_48[0] = GAMEPLAY::GET_GAME_TIMER();
			uLocal_48[2] = GAMEPLAY::GET_GAME_TIMER();
			uLocal_48[1] = GAMEPLAY::GET_GAME_TIMER();
			iLocal_43[0] = 1;
			iLocal_43[2] = 1;
			iLocal_43[1] = 1;
		}
		GAMEPLAY::CLEAR_BIT(&Global_2383, 1);
	}
}

void func_48()
{
	func_38();
	if (Global_71205)
	{
		Global_106070.f_14023[3 /*20*/].f_10 = func_111(1197, -1, 0);
	}
	if (Global_106070.f_14023[Global_14513 /*20*/].f_10 == 1)
	{
		if (!func_49(0))
		{
			CONTROLS::SET_PAD_SHAKE(0, 2000, 100);
		}
	}
}

int func_49(int iParam0)
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

void func_50()
{
	char cVar0[64];
	int iVar16;
	char cVar17[64];
	char cVar33[64];
	char cVar49[64];
	char cVar65[64];
	
	if (Global_16883 != 0)
	{
		if (PED::IS_PEDHEADSHOT_VALID(Global_16883))
		{
			if (PED::IS_PEDHEADSHOT_READY(Global_16883))
			{
				StringCopy(&cVar0, PED::GET_PEDHEADSHOT_TXD_STRING(Global_16883), 64);
				Global_16891[Global_16889] = Global_16883;
			}
			else
			{
				StringCopy(&cVar0, "CHAR_DEFAULT", 64);
				Global_16891[Global_16889] = 0;
			}
		}
		else
		{
			StringCopy(&cVar0, "CHAR_DEFAULT", 64);
			Global_16891[Global_16889] = 0;
		}
	}
	else
	{
		StringCopy(&cVar0, UI::_GET_LABEL_TEXT(&(Global_106070.f_28022[Global_106070.f_14113[Global_16889 /*104*/].f_17 /*29*/].f_7)), 64);
		Global_16891[Global_16889] = 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(&cVar0, "NULL"))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
	}
	if (((((((Global_106070.f_14113[Global_16889 /*104*/].f_32 == 4 || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 5) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 6) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 7) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 8) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 9) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 10) || Global_106070.f_14113[Global_16889 /*104*/].f_32 == 11)
	{
		iVar16 = 0;
		switch (Global_106070.f_14113[Global_16889 /*104*/].f_49)
		{
			case 1:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL01");
				break;
			
			case 2:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL02");
				break;
			
			case 3:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL03");
				break;
			
			case 4:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL04");
				break;
			
			case 5:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL05");
				break;
			
			case 6:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL06");
				break;
			
			case 7:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL07");
				break;
			
			case 8:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL08");
				break;
			
			case 9:
				UI::_SET_NOTIFICATION_TEXT_ENTRY("CELL_CL09");
				break;
		}
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106070.f_14113[Global_16889 /*104*/]));
		while (iVar16 < Global_106070.f_14113[Global_16889 /*104*/].f_49)
		{
			switch (Global_106070.f_14113[Global_16889 /*104*/].f_32)
			{
				case 4:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2524719.f_1651[iVar16 /*4*/]));
					break;
				
				case 5:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654554[iVar16 /*4*/]));
					break;
				
				case 6:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654595[iVar16 /*4*/]));
					break;
				
				case 7:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654616[iVar16 /*4*/]));
					break;
				
				case 8:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654633[iVar16 /*4*/]));
					break;
				
				case 9:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654646[iVar16 /*4*/]));
					break;
				
				case 10:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654659[iVar16 /*4*/]));
					break;
				
				case 11:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1654672[iVar16 /*4*/]));
					break;
			}
			iVar16++;
		}
		StringCopy(&cVar17, UI::_GET_LABEL_TEXT(&(Global_106070.f_28022[Global_106070.f_14113[Global_16889 /*104*/].f_17 /*29*/].f_3)), 64);
		uLocal_64 = UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar17, 0);
		Global_16880 = 3;
		Global_16879 = uLocal_64;
		Global_16883 = 0;
	}
	else
	{
		UI::_SET_NOTIFICATION_TEXT_ENTRY(&(Global_106070.f_14113[Global_16889 /*104*/]));
		switch (Global_106070.f_14113[Global_16889 /*104*/].f_32)
		{
			case 0:
				break;
			
			case 1:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106070.f_14113[Global_16889 /*104*/].f_33));
				if (Global_106070.f_14113[Global_16889 /*104*/].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), "NULL"))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
				}
				if ((Global_106070.f_14113[Global_16889 /*104*/].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_14113[Global_16889 /*104*/].f_83), "NULL"))
				{
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_106070.f_14113[Global_16889 /*104*/].f_67)))
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
					}
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_106070.f_14113[Global_16889 /*104*/].f_83)))
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106070.f_14113[Global_16889 /*104*/].f_83));
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106070.f_14113[Global_16889 /*104*/].f_83));
					}
				}
				break;
			
			case 2:
				UI::ADD_TEXT_COMPONENT_INTEGER(Global_106070.f_14113[Global_16889 /*104*/].f_49);
				break;
			
			case 3:
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106070.f_14113[Global_16889 /*104*/].f_33));
				UI::ADD_TEXT_COMPONENT_INTEGER(Global_106070.f_14113[Global_16889 /*104*/].f_49);
				if (Global_106070.f_14113[Global_16889 /*104*/].f_66 == 1 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), "NULL"))
				{
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
				}
				if ((Global_106070.f_14113[Global_16889 /*104*/].f_66 == 2 && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), "NULL")) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_14113[Global_16889 /*104*/].f_83), "NULL"))
				{
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_106070.f_14113[Global_16889 /*104*/].f_67)))
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106070.f_14113[Global_16889 /*104*/].f_67));
					}
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_106070.f_14113[Global_16889 /*104*/].f_83)))
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_106070.f_14113[Global_16889 /*104*/].f_83));
					}
					else
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_106070.f_14113[Global_16889 /*104*/].f_83));
					}
				}
				break;
		}
		if (Global_106070.f_14113[Global_16889 /*104*/].f_17 == 145)
		{
			StringCopy(&cVar33, "<C>", 64);
			StringConCat(&cVar33, &Global_3071, 64);
			StringConCat(&cVar33, "</C>", 64);
			uLocal_64 = UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar33, 0);
			Global_16880 = 3;
			Global_16879 = uLocal_64;
		}
		else
		{
			StringCopy(&cVar49, UI::_GET_LABEL_TEXT(&(Global_106070.f_28022[Global_106070.f_14113[Global_16889 /*104*/].f_17 /*29*/].f_3)), 64);
			if (Global_106070.f_14113[Global_16889 /*104*/].f_17 == 98)
			{
				StringCopy(&cVar65, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
				StringConCat(&cVar65, &cVar49, 64);
				uLocal_64 = UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar65, 0);
			}
			else
			{
				uLocal_64 = UI::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 1, &cVar49, 0);
			}
			Global_16880 = 3;
			Global_16879 = uLocal_64;
			Global_16883 = 0;
		}
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_16 = uLocal_64;
}

void func_51()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2383, 19))
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 19);
		func_38();
		Global_106070.f_14023[3 /*20*/].f_18 = 0;
		Global_106070.f_14023[3 /*20*/].f_17 = 0;
	}
}

void func_52()
{
	if (iLocal_43[Global_14513] == 1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iLocal_63 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_53[Global_14513]);
		}
		else
		{
			uLocal_58[Global_14513] = GAMEPLAY::GET_GAME_TIMER();
			iLocal_63 = (uLocal_58[Global_14513] - uLocal_48[Global_14513]);
		}
		if (iLocal_63 > 300000)
		{
			Global_106070.f_14023[Global_14513 /*20*/].f_18 = 0;
			Global_106070.f_14023[Global_14513 /*20*/].f_17 = 0;
			iLocal_43[Global_14513] = 0;
		}
	}
}

void func_53()
{
	int iVar0;
	
	func_38();
	if (Global_71205 == 0)
	{
		if (!func_44())
		{
			if (iLocal_69 == 0)
			{
				if ((Global_106070.f_14113[21 /*104*/].f_24 != 0 || Global_106070.f_14113[22 /*104*/].f_24 != 0) || Global_106070.f_14113[23 /*104*/].f_24 != 0)
				{
					switch (Global_14513)
					{
						case 0:
							if (Global_106070.f_14113[21 /*104*/].f_24 != 0)
							{
								iLocal_42 = 21;
								iLocal_69 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						case 1:
							if (Global_106070.f_14113[22 /*104*/].f_24 != 0)
							{
								iLocal_42 = 22;
								iLocal_69 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						case 2:
							if (Global_106070.f_14113[23 /*104*/].f_24 != 0)
							{
								iLocal_42 = 23;
								iLocal_69 = 1;
								SYSTEM::SETTIMERA(0);
							}
							break;
						
						default:
							break;
						}
				}
			}
			else if (SYSTEM::TIMERA() > 15000)
			{
				iLocal_69 = 0;
				iVar0 = 0;
				func_38();
				if (iLocal_42 == 21 && Global_14513 != 0)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 22 && Global_14513 != 1)
				{
					iVar0 = 1;
				}
				if (iLocal_42 == 23 && Global_14513 != 2)
				{
					iVar0 = 1;
				}
				if (Global_106070.f_14113[iLocal_42 /*104*/].f_24 != 0 && iVar0 == 0)
				{
					if (!func_29(14))
					{
						if (func_56(Global_106070.f_14113[iLocal_42 /*104*/].f_17, &(Global_106070.f_14113[iLocal_42 /*104*/]), Global_106070.f_14113[iLocal_42 /*104*/].f_24, Global_106070.f_14113[iLocal_42 /*104*/].f_25, Global_106070.f_14113[iLocal_42 /*104*/].f_26, Global_106070.f_14113[iLocal_42 /*104*/].f_29, 0, 1, Global_106070.f_14113[iLocal_42 /*104*/].f_31, Global_106070.f_14113[iLocal_42 /*104*/].f_30))
						{
							Global_106070.f_14113[iLocal_42 /*104*/].f_24 = 0;
						}
					}
				}
			}
			if (iLocal_80 == 0)
			{
				if (Global_3059[Global_14513])
				{
					iLocal_80 = 1;
					iLocal_81 = Global_14513;
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					{
						uLocal_78 = NETWORK::GET_NETWORK_TIME();
					}
					else
					{
						iLocal_72 = GAMEPLAY::GET_GAME_TIMER();
					}
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					iLocal_79 = NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_78);
				}
				else
				{
					iLocal_73 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_79 = (iLocal_73 - iLocal_72);
				}
				if (iLocal_79 > 7000)
				{
					if (func_54(0))
					{
						Global_2993[1 /*6*/] = { Global_3042[Global_14513 /*4*/] };
						Global_3069 = Global_3064[Global_14513];
						Global_3059[Global_14513] = 0;
						iLocal_80 = 0;
					}
				}
				if (iLocal_81 != Global_14513)
				{
					iLocal_80 = 0;
				}
			}
		}
	}
}

bool func_54(int iParam0)
{
	return func_55(iParam0, Global_36117);
}

int func_55(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_56(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, bool bParam7, var uParam8, var uParam9)
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
	if (func_57(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, uParam4, uParam5, bParam7, uParam8, uParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_57(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_38();
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
	if (func_63() == 0)
	{
		func_61();
		return 0;
	}
	func_60(Global_16889);
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
		func_59(0);
		func_59(2);
		func_59(1);
	}
	else
	{
		func_38();
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
					func_59(0);
					Global_3089 = 0;
					break;
				
				case 1:
					func_59(1);
					Global_3089 = 1;
					break;
				
				case 2:
					func_59(2);
					Global_3089 = 2;
					break;
				
				case 3:
					func_59(3);
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
		func_38();
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
			if (!func_58())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_30(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_28(1);
			func_30(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_58()
{
	return Global_1312857;
}

void func_59(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106070.f_14023[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_60(int iParam0)
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

void func_61()
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
		if (!func_62(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
		{
			Global_16889 = iVar2;
		}
		iVar2++;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_24 = 1;
}

int func_62(struct<6> Param0, struct<6> Param6)
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

int func_63()
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
			if (!func_62(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
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

void func_64()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2383, 6))
	{
		if (Global_3087 > 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2384, 11))
			{
				if (iLocal_41)
				{
					func_65(uLocal_37, "CLEAR_ALL");
					if (GAMEPLAY::IS_BIT_SET(Global_2383, 25))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_37, "CREATE_ALERT");
						GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(26);
						GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					if (GAMEPLAY::IS_BIT_SET(Global_4268330, 11))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_37, "CREATE_ALERT");
						GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(53);
						GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					if (Global_71205 == 1)
					{
						if (GAMEPLAY::IS_BIT_SET(Global_4268330, 12))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_37, "CREATE_ALERT");
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(52);
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						if (GAMEPLAY::IS_BIT_SET(Global_4268330, 28))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_37, "CREATE_ALERT");
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(60);
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(148f);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (GAMEPLAY::IS_BIT_SET(Global_4268330, 19))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_37, "CREATE_ALERT");
						GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(55);
						GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						if ((GAMEPLAY::IS_BIT_SET(Global_4268330, 12) || GAMEPLAY::IS_BIT_SET(Global_4268330, 11)) || GAMEPLAY::IS_BIT_SET(Global_2383, 25))
						{
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(192f);
						}
						else
						{
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(222f);
						}
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					}
					GAMEPLAY::CLEAR_BIT(&Global_2384, 11);
					iLocal_41 = 0;
				}
			}
		}
		if (Global_3087 < 1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_37);
			GAMEPLAY::CLEAR_BIT(&Global_2383, 6);
		}
		else
		{
			func_16();
		}
	}
	else if (Global_3087 > 0)
	{
		uLocal_37 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_alert_popup");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_37))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::_SET_UI_LAYER(4);
		GAMEPLAY::SET_BIT(&Global_2383, 6);
	}
}

void func_65(var uParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_66()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2384, 7))
	{
		GAMEPLAY::SET_BIT(&Global_2384, 6);
		GAMEPLAY::CLEAR_BIT(&Global_2384, 7);
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2384, 7))
	{
		GAMEPLAY::CLEAR_BIT(&Global_2384, 6);
		return;
	}
}

void func_67()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2384, 4))
	{
		GAMEPLAY::SET_BIT(&Global_2384, 3);
		GAMEPLAY::CLEAR_BIT(&Global_2384, 4);
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2384, 4))
	{
		GAMEPLAY::CLEAR_BIT(&Global_2384, 3);
		return;
	}
}

void func_68()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2384, 2))
	{
		if (!Global_14513.f_1 == 1)
		{
			Global_14513.f_1 = 0;
		}
		GAMEPLAY::CLEAR_BIT(&Global_2384, 2);
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2384, 2))
	{
		if (!Global_14513.f_1 == 1)
		{
			if (Global_14513.f_1 < 4)
			{
				Global_14513.f_1 = 3;
			}
		}
		return;
	}
}

int func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			if (Global_14456 == 0)
			{
				if (Global_1698 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15822 != 2)
						{
						}
					}
				}
			}
		}
		if (func_29(14))
		{
			return 0;
		}
		if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!CAM::_IS_IN_VEHICLE_CAM_DISABLED())
			{
				if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					return 0;
				}
			}
		}
		if (((PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		if (Global_105118)
		{
			return 0;
		}
	}
	if (Global_71205)
	{
		return 0;
	}
	iVar2 = 0;
	iVar0 = CAM::_0x19CAFA3C87F7C2FF();
	iVar1 = CAM::_0xEE778F8C7E1142E2(iVar0);
	if (iVar1 == 4 && (iVar0 == 0 || CAM::_IS_IN_VEHICLE_CAM_DISABLED()))
	{
		iVar2 = 1;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if ((((((((VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uVar3)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(uVar3))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(uVar3))) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("seashark")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("seashark2")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("rhino")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("submersible2")) || ENTITY::GET_ENTITY_MODEL(uVar3) == joaat("toro"))
				{
					iVar2 = 0;
				}
			}
		}
	}
	if (Global_4268544 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_106070.f_14023.f_89)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
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
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	func_38();
	if (Global_71205 == 0)
	{
		if (func_29(14))
		{
			if (Global_16881 == 2 || Global_16881 == 4)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (Global_14513.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_49(0) == 1)
		{
			return 0;
		}
	}
	if (Global_14479 == 1)
	{
		return 0;
	}
	if (Global_14513.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_14510))
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_14513.f_1 < 4)
			{
				func_71("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_14510 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_14495)
	{
		SYSTEM::WAIT(0);
	}
	func_116();
	func_114();
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2390[iParam0 /*15*/].f_9) == 0)
	{
		Global_2989 = 0;
		Global_14513.f_1 = 7;
		func_71(&(Global_2390[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2390[iParam0 /*15*/].f_9) == 0)
			{
				Global_14511 = SYSTEM::START_NEW_SCRIPT(&(Global_2390[iParam0 /*15*/].f_5), 4000);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_2390[iParam0 /*15*/].f_9) == 0)
		{
			Global_14511 = SYSTEM::START_NEW_SCRIPT(&(Global_2390[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_2390[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_71(char* sParam0)
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_72(int iParam0)
{
	if (func_74())
	{
		return;
	}
	if (Global_14681)
	{
		func_73(0, 0);
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
	if (!func_44())
	{
		Global_14513.f_1 = 3;
	}
}

void func_73(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_49(0))
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

bool func_74()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

void func_75()
{
	float fVar0;
	
	GAMEPLAY::SET_GAME_PAUSED(1);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 201);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 202);
	fVar0 = 0f;
	while ((!CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) && !CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202)) || fVar0 < 1f)
	{
		UI::SET_WARNING_MESSAGE_WITH_HEADER("VEUI_HDR_ALERT", "VE_DIR_MODE_SURE", 18, 0, 0, -1, 0, 0, 1, 0);
		SYSTEM::WAIT(0);
		fVar0 = (fVar0 + GAMEPLAY::GET_FRAME_TIME());
	}
	GAMEPLAY::SET_GAME_PAUSED(0);
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201))
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		Global_105015 = 1;
	}
}

void func_76(int iParam0)
{
	float fVar0;
	var uVar1;
	
	GAMEPLAY::SET_GAME_PAUSED(1);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 201);
	fVar0 = 0f;
	while (!CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || fVar0 < 1f)
	{
		uVar1 = func_77(iParam0, 119);
		UI::SET_WARNING_MESSAGE("FBR_GENERIC", 16384, 0, 0, -1, "FBR_DIR_MODE", uVar1, 1, 0);
		SYSTEM::WAIT(0);
		fVar0 = (fVar0 + GAMEPLAY::GET_FRAME_TIME());
	}
	GAMEPLAY::SET_GAME_PAUSED(0);
}

char* func_77(int iParam0, int iParam1)
{
	iParam1 = iParam1;
	switch (iParam0)
	{
		case 1:
			return "FBR_BLK_CLEAN";
			break;
		
		case 2:
			return "FBR_BLK_RNNNG";
			break;
		
		case 13:
			return "FBR_BLK_DEAD";
			break;
		
		case 3:
			return "FBR_BLK_MISS";
			break;
		
		case 5:
			return "FBR_BLK_SHOP";
			break;
		
		case 4:
			return "FBR_BLK_CUTS";
			break;
		
		case 6:
			return "FBR_BLK_WANT";
			break;
		
		case 7:
			return "FBR_BLK_ONLI";
			break;
		
		case 8:
			return "FBR_BLK_ACT";
			break;
		
		case 9:
			return "FBR_BLK_LOC";
			break;
		
		case 10:
			return "FBR_BLK_VEH";
			break;
		
		case 11:
			return "FBR_BLK_PARA";
			break;
		
		case 12:
			return "FBR_BLK_FALL";
			break;
		
		default:
			return "ERROR";
			break;
	}
	return "ERROR";
}

int func_78(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 13;
	}
	if (bParam1)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1)
		{
			return 2;
		}
	}
	if (func_109() && !func_29(14))
	{
		return 3;
	}
	if (func_108())
	{
		return 3;
	}
	if (func_107())
	{
		return 8;
	}
	if (bParam1)
	{
		if (func_106())
		{
			return 8;
		}
	}
	if (Global_90247)
	{
		return 3;
	}
	if (Global_25713)
	{
		return 8;
	}
	if (Global_25607)
	{
		return 8;
	}
	if (Global_2621550)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(-1516147206) > 0)
		{
			return 3;
		}
	}
	else if (Global_2621549)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(2006115718) > 0)
		{
			return 3;
		}
	}
	else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("creator")) > 0)
	{
		return 3;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("respawn_controller")) > 0)
	{
		return 13;
	}
	if (func_105(bParam1))
	{
		return 3;
	}
	if (PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 12;
	}
	if (func_104(Global_105095, 256))
	{
		return 3;
	}
	if (((func_103() || func_102()) || func_97()) || func_96())
	{
		return 5;
	}
	if (func_96())
	{
		return 5;
	}
	if (func_95())
	{
		return 5;
	}
	if (func_94())
	{
		return 5;
	}
	if (func_102())
	{
		return 5;
	}
	if (func_93() && !Global_105020)
	{
		return 8;
	}
	if (func_97())
	{
		return 5;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_92())
	{
		return 4;
	}
	if (func_58())
	{
		return 4;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_82(60);
			if (iVar0 != 0)
			{
				return iVar0;
			}
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
			{
				return 11;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || Global_105117)
			{
				return 10;
			}
		}
	}
	if (Global_25711)
	{
		return 8;
	}
	if (Global_71203)
	{
		return 4;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
		{
			return 6;
		}
		if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		if (AI::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()))
		{
			return 8;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 7;
	}
	if (func_81())
	{
		return 8;
	}
	if (Global_25461)
	{
		return 3;
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		return 4;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, 0, 1, 0))
	{
		return 9;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	if (bParam1)
	{
		if (!func_79(0))
		{
			return 8;
		}
	}
	if (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return 9;
	}
	return 0;
}

int func_79(bool bParam0)
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if ((((((((((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || AI::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	if ((((((func_58() || Global_17228.f_4) || func_80()) || GAMEPLAY::IS_MEMORY_CARD_IN_USE()) || GAMEPLAY::IS_AUTO_SAVE_IN_PROGRESS()) || func_92()) || func_108())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (GAMEPLAY::GET_MISSION_FLAG())
		{
			return 0;
		}
	}
	return 1;
}

int func_80()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

bool func_81()
{
	return Global_53362;
}

int func_82(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		return 5;
	}
	vVar0 = { func_91(PLAYER::PLAYER_ID()) };
	if (Global_105157[10 /*10*/].f_1)
	{
		if (SYSTEM::VDIST2(vVar0, 241.9889f, 360.4732f, 105.6166f) < 2f)
		{
			return 3;
		}
	}
	if (func_90(2) && !func_90(17))
	{
		if (SYSTEM::VDIST2(vVar0, -59.96629f, -1099.005f, 25.52088f) < 8f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, -61.26628f, -1096.505f, 25.52088f, -58.43333f, -1101.147f, 29.24937f, 1.25f, 0, 1))
			{
				return 9;
			}
		}
	}
	if (SYSTEM::VDIST2(vVar0, -740.9346f, 5599.426f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, -746.1299f, 5599.226f, 40.47561f, -737.632f, 5599.364f, 44.1693f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, -740.9346f, 5590.426f, 40.71515f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, -746.1299f, 5590.667f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 446.3265f, 5566.35f, 780.2151f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, 451.1661f, 5566.451f, 780.1703f, 442.5211f, 5566.374f, 783.9819f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 446.3265f, 5577.35f, 780.2151f) < 11f)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, 451.1661f, 5577.867f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, 0, 1))
		{
			return 9;
		}
	}
	if (SYSTEM::VDIST2(vVar0, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(vVar0, 95.07f, -1284.98f, 29.3f) < 2f)
	{
		return 9;
	}
	if (SYSTEM::VDIST2(vVar0, 1081.951f, -1976.762f, 30.47218f) < 6f && func_89(26))
	{
		return 9;
	}
	if (!iLocal_27)
	{
		func_83(iParam0);
	}
	iVar3 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	if (iVar3 == 0)
	{
		return 0;
	}
	else if ((iVar3 == Global_105033 || iVar3 == Global_105034) || iVar3 == Global_105035)
	{
		return 9;
	}
	else if (iVar3 == Global_105024)
	{
		return 9;
	}
	else if (iVar3 == Global_105025)
	{
		return 9;
	}
	else if (iVar3 == Global_105028)
	{
		return 9;
	}
	else if (iVar3 == Global_105027)
	{
		return 9;
	}
	else if (iVar3 == Global_105029)
	{
		return 9;
	}
	else if (iVar3 == Global_105030)
	{
		return 9;
	}
	else if (iVar3 == Global_105031)
	{
		return 9;
	}
	else if (iVar3 == Global_105032)
	{
		return 9;
	}
	else if (iVar3 == Global_105036)
	{
		return 9;
	}
	else if (iVar3 == Global_105037)
	{
		return 9;
	}
	else if (iVar3 == Global_105038)
	{
		return 9;
	}
	else if (iVar3 == Global_105039)
	{
		return 9;
	}
	else if (iVar3 == Global_105040)
	{
		return 9;
	}
	else if ((iVar3 == Global_105041 || iVar3 == Global_105042) && func_90(67))
	{
		return 9;
	}
	iVar4 = 0;
	while (iVar4 <= (19 - 1))
	{
		if (iVar3 == Global_105043[iVar4])
		{
			return 9;
		}
		iVar4++;
	}
	return 0;
}

void func_83(var uParam0)
{
	int iVar0;
	
	uParam0 = uParam0;
	func_86(24, &Global_105024);
	func_86(47, &Global_105025);
	func_86(10, &Global_105033);
	func_86(9, &Global_105034);
	func_86(8, &Global_105035);
	func_86(21, &Global_105036);
	func_86(11, &Global_105037);
	func_86(18, &Global_105041);
	func_86(19, &Global_105042);
	Global_105028 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.191f, 32.2412f, "V_factory1");
	Global_105027 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.022f, 31.924f, "V_factory2");
	Global_105029 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.749f, 32.4102f, "V_factory3");
	Global_105030 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.978f, 31.3353f, "V_factory4");
	Global_105031 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.259f, 28.797f, "v_gun");
	Global_105032 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.13f, 28.2847f, "v_strip3");
	Global_105038 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.145f, 126.0262f, "cs6_08_mine_int");
	Global_105039 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.598f, 2571.935f, 45.6802f, "ch3_01_trlr_int");
	Global_105040 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
	iVar0 = 0;
	while (iVar0 <= (19 - 1))
	{
		Global_105043[iVar0] = INTERIOR::GET_INTERIOR_AT_COORDS(func_84(iVar0));
		iVar0++;
	}
	iLocal_27 = 1;
}

Vector3 func_84(int iParam0)
{
	if (!func_85(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return -711.8212f, -915.9057f, 18.2377f;
		
		case 1:
			return -52.7185f, -1756.175f, 28.4432f;
		
		case 2:
			return 1159.441f, -325.6666f, 68.2272f;
		
		case 3:
			return 1699.429f, 4928.642f, 41.0858f;
		
		case 4:
			return -1822.926f, 788.9531f, 137.212f;
		
		case 5:
			return 1166.427f, 2703.528f, 37.1574f;
		
		case 6:
			return -2973.414f, 390.6885f, 14.0433f;
		
		case 7:
			return -1225.86f, -903.5782f, 11.3263f;
		
		case 8:
			return 1140.659f, -981.0806f, 45.4158f;
		
		case 9:
			return -1490.275f, -382.8514f, 39.1634f;
		
		case 10:
			return -3240.719f, 1004.508f, 11.8468f;
		
		case 11:
			return -3039.249f, 589.3831f, 6.9251f;
		
		case 12:
			return 544.4275f, 2672.061f, 41.1726f;
		
		case 13:
			return 2558.754f, 385.599f, 107.6391f;
		
		case 14:
			return 2681.511f, 3282.763f, 54.2573f;
		
		case 15:
			return 1731.153f, 6411.633f, 34.0373f;
		
		case 16:
			return 1964.931f, 3741.207f, 31.3599f;
		
		case 17:
			return 29.0707f, -1348.773f, 28.5101f;
		
		case 18:
			return 376.8503f, 323.9777f, 102.5825f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_85(int iParam0)
{
	if (iParam0 >= 19)
	{
		return 0;
	}
	else if (iParam0 <= -1)
	{
		return 0;
	}
	return 1;
}

var func_86(int iParam0, var uParam1)
{
	struct<5> Var0;
	
	Var0 = { func_87(iParam0) };
	*uParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var0, Var0.f_3);
	return Var0.f_4;
}

struct<5> func_87(int iParam0)
{
	struct<5> Var0;
	vector3 vVar5;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -447.4833f, 280.3197f, 77.5215f };
			Var0.f_3 = "v_comedy";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 1:
			Var0 = { -1906.786f, -573.7576f, 19.0773f };
			Var0.f_3 = "v_psycheoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 2:
			Var0 = { 1399.973f, 1148.756f, 113.3336f };
			Var0.f_3 = "v_ranch";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 3:
			Var0 = { -598.6379f, -1608.399f, 26.0108f };
			Var0.f_3 = "v_recycle";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 4:
			Var0 = { -556.5089f, 286.3181f, 81.1763f };
			Var0.f_3 = "v_rockclub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 5:
			Var0 = { -111.7116f, -11.912f, 69.5196f };
			Var0.f_3 = "v_janitor";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 6:
			Var0 = { 1274.934f, -1714.726f, 53.7715f };
			Var0.f_3 = "v_lesters";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 7:
			Var0 = { 147.433f, -2201.37f, 3.688f };
			Var0.f_3 = "v_torture";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 8:
			Var0 = { 320.9934f, 265.2515f, 82.1221f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Vinewood)";
			break;
		
		case 9:
			Var0 = { -1425.564f, -244.3f, 15.8053f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Morningwood)";
			break;
		
		case 10:
			Var0 = { 377.153f, -717.567f, 10.0536f };
			Var0.f_3 = "v_cinema";
			Var0.f_4 = "v_cinema (Downtown)";
			break;
		
		case 11:
			Var0 = { 245.1564f, 370.211f, 104.7382f };
			Var0.f_3 = "v_epsilonism";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 12:
			Var0 = { 173.1176f, -1003.279f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 13:
			Var0 = { 199.9715f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 14:
			Var0 = { 228.6058f, -992.0537f, -99.9999f };
			Var0.f_3 = "v_garagel";
			Var0.f_3 = "hei_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 15:
			Var0 = { 1854.254f, 3686.739f, 33.2671f };
			Var0.f_3 = "v_sheriff";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 16:
			Var0 = { -444.8907f, 6013.587f, 30.7164f };
			Var0.f_3 = "v_sheriff2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 17:
			Var0 = { 3522.845f, 3707.965f, 19.9918f };
			Var0.f_3 = "v_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 18:
			Var0 = { 717.2994f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 19:
			Var0 = { 717.299f, -974.4271f, 23.9142f };
			Var0.f_3 = "v_sweatempty";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 20:
			Var0 = { 2449.785f, 4983.825f, 45.8106f };
			Var0.f_3 = "v_farmhouse";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1087.195f, -1988.445f, 28.649f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 23:
			Var0 = { 982.233f, -2160.382f, 28.4761f };
			Var0.f_3 = "v_abattoir";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 21:
			Var0 = { 479.0568f, -1316.825f, 28.2038f };
			Var0.f_3 = "v_chopshop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 24:
			Var0 = { -1005.663f, -478.3461f, 49.0265f };
			Var0.f_3 = "v_58_sol_office";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 25:
			vVar5 = { func_88(1, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (1)";
			break;
		
		case 26:
			vVar5 = { func_88(2, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (2)";
			break;
		
		case 27:
			vVar5 = { func_88(3, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (3)";
			break;
		
		case 28:
			vVar5 = { func_88(4, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (4)";
			break;
		
		case 29:
			vVar5 = { func_88(5, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (5)";
			break;
		
		case 30:
			vVar5 = { func_88(6, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (6)";
			break;
		
		case 31:
			vVar5 = { func_88(7, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (7)";
			break;
		
		case 32:
			Var0 = { Global_1049778[34 /*1951*/].f_146.f_1517 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (8)";
			break;
		
		case 33:
			vVar5 = { func_88(35, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (9)";
			break;
		
		case 34:
			vVar5 = { func_88(36, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (10)";
			break;
		
		case 35:
			vVar5 = { func_88(37, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (11)";
			break;
		
		case 36:
			vVar5 = { func_88(38, 0) };
			Var0 = { -20.1f, -580.8f, 91.3f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (12)";
			break;
		
		case 37:
			vVar5 = { func_88(39, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (13)";
			break;
		
		case 38:
			vVar5 = { func_88(40, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (14)";
			break;
		
		case 39:
			vVar5 = { func_88(41, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (15)";
			break;
		
		case 40:
			vVar5 = { func_88(42, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (16)";
			break;
		
		case 41:
			vVar5 = { func_88(43, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (17)";
			break;
		
		case 42:
			Var0 = { -470.3754f, -698.5207f, 51.5276f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (18)";
			break;
		
		case 43:
			Var0 = { -460.6133f, -691.5562f, 69.9067f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (19)";
			break;
		
		case 44:
			Var0 = { 300.633f, -997.4288f, -99.9727f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = "hei_dlc_apart_high_new (20)";
			break;
		
		case 49:
			Var0 = { -171.3969f, 494.2671f, 134.4935f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (1)";
			break;
		
		case 50:
			Var0 = { 339.4982f, 434.0887f, 146.2206f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (2)";
			break;
		
		case 51:
			Var0 = { -761.3884f, 615.7333f, 140.9805f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (3)";
			break;
		
		case 52:
			Var0 = { -678.1752f, 591.0076f, 142.2196f };
			Var0.f_3 = "apa_v_mp_stilts_b";
			Var0.f_4 = "apa_v_mp_stilts_b (4)";
			break;
		
		case 53:
			Var0 = { 120.0541f, 553.793f, 181.0943f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (5)";
			break;
		
		case 54:
			Var0 = { -571.4039f, 655.2008f, 142.6293f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (7)";
			break;
		
		case 55:
			Var0 = { -742.2565f, 587.6547f, 143.0577f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (8)";
			break;
		
		case 56:
			Var0 = { -857.2222f, 685.051f, 149.6502f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (10)";
			break;
		
		case 57:
			Var0 = { -1287.65f, 443.2707f, 94.6919f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (12)";
			break;
		
		case 58:
			Var0 = { 374.2012f, 416.9688f, 142.5991f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = "apa_v_mp_stilts_a (13)";
			break;
		
		case 45:
			Var0 = { -16.29585f, -684.0385f, 33.50832f };
			Var0.f_3 = "dt1_03_carpark";
			Var0.f_4 = "dt1_03_carpark";
			break;
		
		case 46:
			Var0 = { 341.1f, -1000f, -99.2f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = "v_apart_midspaz";
			break;
		
		case 47:
			Var0 = { 199.9716f, -1018.954f, -100f };
			Var0.f_3 = "v_garagem_sp";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 48:
			Var0 = { -1388.001f, -618.4197f, 30.8196f };
			Var0.f_3 = "v_bahama";
			Var0.f_4 = Var0.f_3;
			break;
	}
	switch (iParam0)
	{
		case 59:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 60:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 61:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 62:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 63:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 64:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 65:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 66:
			Var0 = { -787.7805f, 334.9232f, 215.8384f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 67:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 68:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 69:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 70:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 71:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 72:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 73:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 74:
			Var0 = { -773.2258f, 322.8252f, 194.8862f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 75:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 76:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 77:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 78:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_04";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 79:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_05";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 80:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_06";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 81:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_07";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 82:
			Var0 = { -787.7805f, 334.9232f, 186.1134f };
			Var0.f_3 = "apa_v_mp_h_08";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 83:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 84:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 85:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 86:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 87:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 88:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 89:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 90:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 91:
			vVar5 = { func_88(87, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 92:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 93:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 94:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 95:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 96:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 97:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 98:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 99:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 100:
			vVar5 = { func_88(88, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 101:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 102:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 103:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 104:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 105:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 106:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 107:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 108:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 109:
			vVar5 = { func_88(89, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 110:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 111:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 112:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_01c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 113:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 114:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 115:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_02c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 116:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03a_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 117:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03b_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 118:
			vVar5 = { func_88(90, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "ex_int_office_03c_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 119:
			vVar5 = { func_88(91, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 120:
			vVar5 = { func_88(97, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "bkr_biker_dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 121:
			vVar5 = { func_88(103, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 122:
			vVar5 = { func_88(104, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 123:
			vVar5 = { func_88(105, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 124:
			vVar5 = { func_88(106, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 125:
			vVar5 = { func_88(107, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 126:
			vVar5 = { func_88(108, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 127:
			vVar5 = { func_88(109, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 128:
			vVar5 = { func_88(110, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 129:
			vVar5 = { func_88(111, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 130:
			vVar5 = { func_88(112, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 131:
			vVar5 = { func_88(113, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 132:
			vVar5 = { func_88(114, 0) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_impexp_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 133:
			vVar5 = { func_88(103, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 134:
			vVar5 = { func_88(106, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 135:
			vVar5 = { func_88(109, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 136:
			vVar5 = { func_88(112, 1) };
			Var0 = { vVar5 + Vector(1f, 0f, 0f) };
			Var0.f_3 = "imp_imptexp_mod_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 137:
			Var0 = { 938.3077f, -3196.112f, -100f };
			Var0.f_3 = "gr_grdlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 138:
			Var0 = { 512.5f, 4852f, -62.6f };
			Var0.f_3 = "xm_x17dlc_int_sub";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 139:
			Var0 = { 2047f, 2942f, -61.9f };
			Var0.f_3 = "xm_x17dlc_int_facility";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 140:
			Var0 = { -1047.6f, -232.3503f, 38.0135f };
			Var0.f_3 = "v_faceoffice";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 22:
			Var0 = { 1100f, -2004f, 37f };
			Var0.f_3 = "v_foundry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 141:
			Var0 = { 361f, 6306f, -159f };
			Var0.f_3 = "xm_x17dlc_int_silo_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 142:
			Var0 = { 305f, 6298f, -160f };
			Var0.f_3 = "xm_x17dlc_int_silo_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 143:
			Var0 = { 244f, 6163f, -159f };
			Var0.f_3 = "xm_x17dlc_int_lab";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 144:
			Var0 = { 2168f, 2920f, -84f };
			Var0.f_3 = "xm_x17dlc_int_facility2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 145:
			Var0 = { 446f, 5922f, -158f };
			Var0.f_3 = "xm_x17dlc_int_bse_tun";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 146:
			Var0 = { 252f, 5972f, -156f };
			Var0.f_3 = "xm_x17dlc_int_base_loop";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 147:
			Var0 = { 682f, 5959f, -152f };
			Var0.f_3 = "xm_x17dlc_int_base_ent";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 148:
			Var0 = { 551f, 5939f, -158f };
			Var0.f_3 = "xm_x17dlc_int_base";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 149:
			Var0 = { 520.0001f, 4750f, -70f };
			Var0.f_3 = "xm_x17dlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 150:
			Var0 = { -1266.802f, -3014.849f, -49.4903f };
			Var0.f_3 = "sm_smugdlc_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 151:
			Var0 = { 974.9203f, -3000.065f, -40.647f };
			Var0.f_3 = "imp_impexp_intwaremed";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 152:
			Var0 = { 969.5376f, -3000.411f, -48.647f };
			Var0.f_3 = "imp_impexp_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 153:
			Var0 = { 1094.997f, -3100.012f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_s_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 154:
			Var0 = { 1059.995f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_m_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 155:
			Var0 = { 1010.008f, -3100f, -39.9999f };
			Var0.f_3 = "ex_int_warehouse_l_dlc";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 156:
			Var0 = { 372.6707f, 405.5235f, 144.5326f };
			Var0.f_3 = "apa_v_mp_stilts_a";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 157:
			Var0 = { -282.0588f, -955.17f, 85.3036f };
			Var0.f_3 = "hei_dlc_apart_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 158:
			Var0 = { 342.7946f, -997.4225f, -99.7444f };
			Var0.f_3 = "v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 159:
			Var0 = { 260.3268f, -997.4298f, -100.0086f };
			Var0.f_3 = "v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 160:
			Var0 = { 108.2369f, -753.5364f, 233.1523f };
			Var0.f_3 = "v_fib01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 161:
			Var0 = { 135.3226f, -746.3677f, 253.1523f };
			Var0.f_3 = "v_fib03";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 162:
			Var0 = { 108.2572f, -753.5342f, 44.7548f };
			Var0.f_3 = "v_office_lobby";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 163:
			Var0 = { 228.6161f, -992.053f, -99.9999f };
			Var0.f_3 = "heist_dlc_garage_high_new";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 164:
			Var0 = { 199.9716f, -999.6678f, -100f };
			Var0.f_3 = "v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 165:
			Var0 = { 173.1165f, -1003.28f, -99.9999f };
			Var0.f_3 = "v_garages";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 166:
			Var0 = { 575f, 4750f, -60f };
			Var0.f_3 = "xm_v_apart_midspaz";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 167:
			Var0 = { 600f, 4750f, -60f };
			Var0.f_3 = "xm_v_studio_lo";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 168:
			Var0 = { 630f, 4750f, -60f };
			Var0.f_3 = "xm_v_garagem";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 169:
			Var0 = { 1257f, 4796.7f, -39.1f };
			Var0.f_3 = "xm_x17dlc_int_tun_entry";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 170:
			Var0 = { 694.4f, 5898.9f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 171:
			Var0 = { 1121.8f, 5516.3f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 172:
			Var0 = { 1279.6f, 5233.2f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_straight";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 173:
			Var0 = { 1158.6f, 5467.1f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 174:
			Var0 = { 705.9f, 5838.5f, -152.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 175:
			Var0 = { 1316.5f, 5184f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_slope_flat";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 176:
			Var0 = { 1248f, 5276.1f, -80.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 177:
			Var0 = { 1090.2f, 5559.2f, -101.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 178:
			Var0 = { 1261f, 4808.6f, -39.3f };
			Var0.f_3 = "xm_x17dlc_int_tun_flat_slope";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 179:
			Var0 = { 721.8f, 5781.4f, -146.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 180:
			Var0 = { 780.8f, 5703.4f, -136.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 181:
			Var0 = { 868.1f, 5659.2f, -126.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 182:
			Var0 = { 1218.2f, 5321.2f, -85.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 183:
			Var0 = { 1278.5f, 4859.7f, -44.7f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_r";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 184:
			Var0 = { 1187.2f, 5419.8f, -96.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 185:
			Var0 = { 1344.7f, 5136.4f, -75.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 186:
			Var0 = { 1363.4f, 5039.5f, -65.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 187:
			Var0 = { 1049.3f, 5602.1f, -107.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 188:
			Var0 = { 1337.8f, 4944.3f, -55.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 189:
			Var0 = { 961.5f, 5646.9f, -117.4f };
			Var0.f_3 = "xm_x17dlc_int_tun_30d_l";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 190:
			Var0 = { 345.0041f, 4842.001f, -59.9997f };
			Var0.f_3 = "xm_x17dlc_int_02";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 191:
			Var0 = { 279.9322f, -1337.49f, 23.7419f };
			Var0.f_3 = "v_coroner";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 192:
			Var0 = { -1604.664f, -3012.583f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_01_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 193:
			Var0 = { -1505.783f, -3012.587f, -79.9999f };
			Var0.f_3 = "ba_dlc_int_02_ba";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 194:
			Var0 = { -630.4205f, -236.7843f, 37.057f };
			Var0.f_3 = "V_JEWEL2";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 195:
			Var0 = { 2800f, -3800f, 100f };
			Var0.f_3 = "xs_x18_int_01";
			Var0.f_4 = Var0.f_3;
			break;
		
		case 196:
			Var0 = { 2800f, -3942f, 182.5f };
			Var0.f_3 = "xs_arena_vip";
			Var0.f_4 = Var0.f_3;
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<6> func_88(int iParam0, bool bParam1)
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

int func_89(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_87312[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_84079)
	{
		if (Global_84079[iVar0 /*5*/] != -1)
		{
			if (Global_71474.f_109[Global_84079[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_90(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_330[iParam0 /*6*/];
}

Vector3 func_91(var uParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_92()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_93()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17367.f_5873 + 100;
}

bool func_94()
{
	return GAMEPLAY::IS_BIT_SET(Global_71453, 9);
}

bool func_95()
{
	return GAMEPLAY::IS_BIT_SET(Global_71453, 8);
}

int func_96()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (((((((((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_d", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_intro", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_base", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_enterchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_exitchair", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_d", 3))
		{
			return 1;
		}
	}
	return 0;
}

int func_97()
{
	int iVar0;
	
	if (func_103())
	{
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (func_98(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_98(int iParam0)
{
	return func_99(iParam0, 20, 1);
}

int func_99(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_93284.f_1336[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_101() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_111(func_100(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

int func_101()
{
	return Global_25459;
}

bool func_102()
{
	return Global_93284.f_328 > 0;
}

bool func_103()
{
	return Global_93284.f_327 > 0;
}

bool func_104(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_105(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71453, 0);
}

bool func_106()
{
	return Global_93271.f_1;
}

bool func_107()
{
	return Global_71472;
}

int func_108()
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

int func_109()
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	return 1;
}

int func_110(int iParam0)
{
	if ((Global_16936 || Global_16935) || Global_16937)
	{
		if (iParam0 == 130)
		{
		}
		else
		{
			return 0;
		}
	}
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		if (Global_14513.f_1 == 10)
		{
			if (Global_1698 == iParam0)
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
	return 0;
}

int func_111(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_112(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_112(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_113();
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

var func_113()
{
	return Global_1312736;
}

void func_114()
{
	if (Global_71205 == 0)
	{
		Global_2390[14 /*15*/].f_4 = -99;
		Global_2390[4 /*15*/].f_4 = -99;
		if (Global_2458186)
		{
			if (func_29(14))
			{
				func_115(2, "CELL_2", 2, "appInternet", 6, 1, 1, 0, 0);
				func_115(14, "CELL_29", 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
			else
			{
				func_115(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
			}
		}
		else
		{
			func_115(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_115(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	StringCopy(&(Global_2390[iParam0 /*15*/]), sParam1, 16);
	Global_2390[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_2390[iParam0 /*15*/].f_5), sParam3, 16);
	Global_2390[iParam0 /*15*/].f_9 = GAMEPLAY::GET_HASH_KEY(sParam3);
	Global_2390[iParam0 /*15*/].f_10 = iParam4;
	Global_2390[iParam0 /*15*/].f_11 = iParam5;
	Global_2390[iParam0 /*15*/].f_12 = iParam6;
	Global_2390[iParam0 /*15*/].f_13 = iParam7;
	Global_2390[iParam0 /*15*/].f_14 = iParam8;
	if (Global_2390[iParam0 /*15*/].f_12 == 0)
	{
		Global_2390[iParam0 /*15*/].f_12 = 0;
	}
	if (Global_2390[iParam0 /*15*/].f_13 == 0)
	{
		Global_2390[iParam0 /*15*/].f_13 = 0;
	}
	if (Global_2390[iParam0 /*15*/].f_14 == 0)
	{
		Global_2390[iParam0 /*15*/].f_14 = 0;
	}
}

void func_116()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_2390[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_71205 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 157)
		{
			if (Global_106070.f_28022[iVar2 /*29*/].f_19[Global_14513] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_115(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_115(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_115(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_36117 == 15 && func_105(0) == 0) && Global_2388 == 0)
		{
			func_115(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14684 = 0;
			Global_2389 = 255;
		}
		else
		{
			func_115(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_14684 = 1;
			Global_2389 = 42;
		}
		if (iVar1 == 1)
		{
			func_115(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_115(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_115(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_115(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_115(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_106070.f_14023.f_89 == 1)
		{
			func_115(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_106070.f_14023.f_88 == 1)
		{
			func_115(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_115(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_115(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_115(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_115(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_115(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_115(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_115(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_115(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_115(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_115(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_115(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_115(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_115(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (GAMEPLAY::IS_BIT_SET(Global_4268330, 4) == 1)
		{
			func_115(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_115(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_115(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_115(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_115(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_115(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_115(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_115(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_115(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_115(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_115(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_115(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_115(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_115(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_115(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_115(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_115(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 4) == 1)
		{
			if (Global_1573910)
			{
				func_115(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4268330, 20) == 1)
			{
				func_115(23, "CELL_SIGHTS", 8, "AppSettings", 59, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4268330, 22) == 1)
			{
				func_115(23, "CELL_EXTRACT", 8, "AppExtraction", 58, 1, 1, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4268330, 26) == 1)
			{
				func_115(23, "CELL_SECHACK", 8, "AppSecuroHack", 57, 1, 1, 0, 0);
			}
		}
		if ((((GAMEPLAY::IS_BIT_SET(Global_4268330, 4) == 0 && Global_1573910 == 0) && GAMEPLAY::IS_BIT_SET(Global_4268330, 20) == 0) && GAMEPLAY::IS_BIT_SET(Global_4268330, 22) == 0) && GAMEPLAY::IS_BIT_SET(Global_4268330, 26) == 0)
		{
			func_115(23, "CELL_BOSSAGE", 8, "appMPBossAgency", 57, 1, 1, 0, 0);
		}
	}
}

void func_117()
{
}

