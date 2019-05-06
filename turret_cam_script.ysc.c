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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	struct<96> Local_64 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 3, 3, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<62> Local_160 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_131(&uScriptParam_0);
	}
	else
	{
		func_122();
	}
	while (true)
	{
		func_121();
		CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (func_111())
		{
			func_122();
		}
		if (func_110())
		{
			func_122();
		}
		func_1();
	}
}

void func_1()
{
	func_104(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	switch (Local_160.f_16)
	{
		case 0:
			func_101();
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2504152, 1))
	{
		GAMEPLAY::CLEAR_BIT(&Global_2504152, 1);
		func_95(Global_2504151);
	}
	if (Local_160.f_61 != Global_2504282)
	{
		Local_160.f_61 = { Global_2504282 };
	}
	else
	{
		Local_160.f_61.f_1 = 0;
		Local_160.f_61.f_2 = 0;
	}
	if (!UI::IS_PAUSE_MENU_ACTIVE() && !func_94())
	{
		func_50();
		func_41();
		func_37();
		func_34();
		func_33();
		func_13();
	}
	func_10(&(Local_64.f_67), GAMEPLAY::IS_BIT_SET(Local_160.f_60, 3));
	func_3(&(Local_160.f_38), &(Local_160.f_39));
	GAMEPLAY::CLEAR_BIT(&Global_2504152, 4);
	GAMEPLAY::CLEAR_BIT(&(Local_160.f_60), 1);
	GAMEPLAY::CLEAR_BIT(&(Local_160.f_60), 2);
	GAMEPLAY::CLEAR_BIT(&(Local_160.f_60), 3);
	GAMEPLAY::CLEAR_BIT(&(Local_160.f_60), 6);
	GAMEPLAY::CLEAR_BIT(&(Local_160.f_60), 7);
}

void func_3(var uParam0, var uParam1)
{
	vector3 vVar0;
	var uVar3;
	vector3 vVar4;
	
	func_9();
	vVar0 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
	if ((((UI::IS_PAUSE_MENU_ACTIVE() || func_8()) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 199)) || CONTROLS::IS_CONTROL_PRESSED(2, 199)) || CONTROLS::IS_CONTROL_JUST_RELEASED(2, 199))
	{
		UI::_SET_PLAYER_BLIP_POSITION_THIS_FRAME(vVar0.x, vVar0.y);
		unk_0xA17784FCA9548D15(vVar0.x, vVar0.y, 0);
		if (UI::IS_PAUSE_MENU_ACTIVE() || func_8())
		{
			if (UI::DOES_BLIP_EXIST(UI::GET_MAIN_PLAYER_BLIP_ID()))
			{
				UI::SET_BLIP_ALPHA(UI::GET_MAIN_PLAYER_BLIP_ID(), 255);
			}
		}
	}
	else if (UI::DOES_BLIP_EXIST(UI::GET_MAIN_PLAYER_BLIP_ID()))
	{
		UI::SET_BLIP_ALPHA(UI::GET_MAIN_PLAYER_BLIP_ID(), 0);
	}
	UI::LOCK_MINIMAP_POSITION(vVar0.x, vVar0.y);
	uVar3 = CAM::GET_RENDERING_CAM();
	if (CAM::DOES_CAM_EXIST(uVar3))
	{
		CAM::_0x661B5C8654ADD825(uVar3, 1);
	}
	vVar4 = { CAM::_GET_GAMEPLAY_CAM_ROT(0) };
	vVar4 = { func_7(vVar4) };
	if (!UI::DOES_BLIP_EXIST(*uParam0))
	{
		*uParam1 = func_5(vVar0, 0);
		UI::SET_BLIP_SPRITE(*uParam1, 425);
		UI::_0x75A16C3DA34F1245(*uParam1, 0);
		UI::SET_BLIP_DISPLAY(*uParam1, 4);
		UI::SET_BLIP_COLOUR(*uParam1, func_4(2));
		UI::SET_BLIP_SHOW_CONE(*uParam1, 1);
		UI::SET_BLIP_SCALE(*uParam1, 0.54f);
		UI::SET_BLIP_PRIORITY(*uParam1, 13 + 1);
		*uParam0 = func_5(vVar0, 0);
		UI::SET_BLIP_SPRITE(*uParam0, 425);
		UI::_0x75A16C3DA34F1245(*uParam0, 0);
		UI::SET_BLIP_DISPLAY(*uParam0, 4);
		UI::SET_BLIP_COLOUR(*uParam0, func_4(18));
		UI::SET_BLIP_SHOW_CONE(*uParam0, 1);
		UI::SET_BLIP_SCALE(*uParam0, 0.44f);
		UI::SET_BLIP_PRIORITY(*uParam0, 13 + 1);
		UI::_0x54318C915D27E4CE(*uParam0, 1);
		UI::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
		UI::_0x54318C915D27E4CE(*uParam1, 1);
		UI::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
	}
	else
	{
		UI::SET_BLIP_COORDS(*uParam0, vVar0);
		UI::SET_BLIP_ROTATION(*uParam0, SYSTEM::ROUND(GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
		UI::SET_BLIP_DISPLAY(*uParam0, 5);
		UI::SET_BLIP_COORDS(*uParam1, vVar0);
		UI::SET_BLIP_ROTATION(*uParam1, SYSTEM::ROUND(GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar4.x, vVar4.y)));
		UI::SET_BLIP_DISPLAY(*uParam1, 5);
	}
}

int func_4(int iParam0)
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

var func_5(vector3 vParam0, int iParam3)
{
	var uVar0;
	
	uVar0 = UI::ADD_BLIP_FOR_COORD(vParam0);
	UI::SET_BLIP_SCALE(uVar0, func_6(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	UI::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_6(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_7(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0.x = SYSTEM::COS(vParam0.x);
	vVar0.y = SYSTEM::COS(vParam0.z);
	vVar0.z = SYSTEM::SIN(vParam0.x);
	vVar0.y = (vVar0.y * vVar0.x);
	vVar0.x = (vVar0.x * -SYSTEM::SIN(vParam0.z));
	return vVar0;
}

bool func_8()
{
	return UI::GET_PAUSE_MENU_STATE() != 0;
}

void func_9()
{
	Global_1312657 = 1;
}

void func_10(var uParam0, bool bParam1)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_12(uParam0))
		{
			UI::CLEAR_HELP(1);
		}
		return;
	}
	if (!func_12(uParam0))
	{
		UI::CLEAR_HELP(1);
		func_11(uParam0);
	}
}

void func_11(var uParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

bool func_12(var uParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(uParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2504152, 5))
	{
		GAMEPLAY::CLEAR_BIT(&Global_2504152, 5);
		Local_160.f_35 = 0;
	}
	func_14(&(Local_64.f_24), &(Local_160.f_35));
}

void func_14(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (*uParam0 > 0)
	{
		bVar0 = func_31(0, -1, 0);
		if (bVar0)
		{
			if ((!*uParam1 || CONTROLS::_0x6CD79468A1E595C6(2)) || CONTROLS::_0x6CD79468A1E595C6(0))
			{
				func_30(-1);
				iVar1 = 0;
				while (iVar1 < *uParam0)
				{
					iVar2 = uParam0->f_34[iVar1];
					if (iVar2 < 32)
					{
						func_29(iVar2, &(uParam0->f_1[iVar1 /*4*/]), -1);
					}
					else
					{
						iVar3 = (iVar2 - 32);
						func_28(iVar3, &(uParam0->f_1[iVar1 /*4*/]), -1, 0);
					}
					iVar1++;
				}
				*uParam1 = 1;
			}
			func_27(1);
			func_15(0, -1, 0, 1, 0, 0, 1, 1, 0);
		}
	}
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_23(bParam4, bParam8))
	{
		return;
	}
	if (func_21())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_18(PLAYER::PLAYER_ID(), 0))
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
	if (Global_17367.f_4767 != 0)
	{
		if (CONTROLS::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17367.f_4767)
			{
				if (Global_17367.f_5024[iVar1] != 358)
				{
					StringCopy(&(Global_17367.f_4769[iVar1 /*16*/]), CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_17367.f_5024[iVar1], 1), 64);
				}
				else if (Global_17367.f_5037[iVar1] != 32)
				{
					StringCopy(&(Global_17367.f_4769[iVar1 /*16*/]), CONTROLS::_0x80C2FD58D720C801(2, Global_17367.f_5037[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17367.f_4768 = 0;
		}
		if (!Global_17367.f_4768)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17367.f_5658[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17367.f_5658[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT((1f - (Global_17367.f_5079 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17367.f_5658[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_17367.f_4767)
			{
				if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_4962[iVar1 /*4*/])) != GAMEPLAY::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17367.f_5658[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
					func_17(&(Global_17367.f_4769[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_4962[iVar2 /*4*/])) == GAMEPLAY::GET_HASH_KEY("PREV"))
					{
						func_17(&(Global_17367.f_4769[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17367.f_5011[iVar1] == -1)
					{
						func_16(&(Global_17367.f_4962[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_17367.f_5011[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17367.f_4962[iVar1 /*4*/]));
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
						if (Global_17367.f_5024[iVar1] != 358 && GAMEPLAY::IS_BIT_SET(Global_17367.f_5050, iVar1))
						{
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_17367.f_5024[iVar1]);
						}
						else
						{
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(358);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4266986.f_16)) != GAMEPLAY::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17367.f_5658[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_17367.f_4767);
				func_17(&Global_4266986);
				if (Global_4266986.f_20 == -1)
				{
					func_16(&(Global_4266986.f_16));
				}
				else
				{
					iVar4 = Global_17367.f_5011[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4266986.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17367.f_5658[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17367.f_5658[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17367.f_5080)
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_17367.f_4768 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17367.f_4767)
		{
			if (Global_17367.f_5011[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17367.f_5658[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17367.f_4962[iVar1 /*4*/]));
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
		if (Global_4266986.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17367.f_5658[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4266986.f_16));
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
			if (!Global_17367.f_8091)
			{
				UI::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_17367.f_8091 = 1;
			}
		}
		else if (Global_17367.f_8091)
		{
			UI::RESET_HUD_COMPONENT_VALUES(15);
			Global_17367.f_8091 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_17367.f_5053)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_17367.f_5658[iVar0 /*10*/], Global_17367.f_5051, Global_17367.f_5052, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_17367.f_5658[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_16(var uParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_17(var uParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
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

int func_21()
{
	vector3 vVar0;
	
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	if (func_22())
	{
		vVar0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_14458 == 0)
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

int func_22()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_23(bool bParam0, bool bParam1)
{
	if (Global_2437022.f_1889.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_25(8, -1) && func_24() != 64)) || (UI::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::SET_STORE_ENABLED()) || Global_71465) || Global_17367.f_8090) || UI::IS_WARNING_MESSAGE_ACTIVE()) || Global_93284.f_1393)
	{
		return 0;
	}
	return 1;
}

int func_24()
{
	return Global_1312792;
}

var func_25(int iParam0, int iParam1)
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

int func_26(var uParam0, bool bParam1, int iParam2)
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
		if (Global_17367.f_5719[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17367.f_5719[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17367.f_5719[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_27(int iParam0)
{
	Global_1369750.f_1079 = iParam0;
}

void func_28(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_17367.f_4767 >= 12)
	{
		StringCopy(&Global_4266986, sVar0, 64);
		StringCopy(&(Global_4266986.f_16), sParam1, 16);
		Global_4266986.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		GAMEPLAY::SET_BIT(&(Global_17367.f_5050), Global_17367.f_4767);
	}
	StringCopy(&(Global_17367.f_4769[Global_17367.f_4767 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17367.f_4962[Global_17367.f_4767 /*4*/]), sParam1, 16);
	Global_17367.f_5011[Global_17367.f_4767] = iParam2;
	Global_17367.f_5024[Global_17367.f_4767] = iParam0;
	Global_17367.f_5037[Global_17367.f_4767] = 32;
	Global_17367.f_4767++;
}

void func_29(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = CONTROLS::_0x80C2FD58D720C801(2, iParam0, 1);
	if (Global_17367.f_4767 >= 12)
	{
		StringCopy(&Global_4266986, sVar0, 64);
		StringCopy(&(Global_4266986.f_16), sParam1, 16);
		Global_4266986.f_20 = iParam2;
		return;
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_17367.f_5050), Global_17367.f_4767);
	StringCopy(&(Global_17367.f_4769[Global_17367.f_4767 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17367.f_4962[Global_17367.f_4767 /*4*/]), sParam1, 16);
	Global_17367.f_5011[Global_17367.f_4767] = iParam2;
	Global_17367.f_5024[Global_17367.f_4767] = 358;
	Global_17367.f_5037[Global_17367.f_4767] = iParam0;
	Global_17367.f_4767++;
}

void func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17367.f_4767 = 0;
	Global_17367.f_4768 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17367.f_4962[iVar0 /*4*/]), "", 16);
		Global_17367.f_5011[iVar0] = -1;
		Global_17367.f_5024[iVar0] = 358;
		Global_17367.f_5037[iVar0] = 32;
		iVar0++;
	}
	Global_17367.f_5050 = 0;
	StringCopy(&(Global_4266986.f_16), "", 16);
	Global_4266986.f_20 = -1;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (!func_26(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17367.f_5658[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

bool func_31(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_26(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17367.f_5633[iVar0 /*4*/]), sParam0, 16);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_17367.f_5633[iVar0 /*4*/])))
	{
		UI::REQUEST_ADDITIONAL_TEXT(&(Global_17367.f_5633[iVar0 /*4*/]), 9);
		Global_17367.f_5626[iVar0] = 1;
		if (!UI::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_17367.f_5633[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_17367.f_5612[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_17367.f_5619[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17367.f_5658[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_32(&(Global_17367.f_5658[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_32(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
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

void func_33()
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_160.f_60, 7))
	{
		iVar0 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		if (Local_160.f_56 != iVar0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
			Local_160.f_56 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
		}
	}
}

void func_34()
{
	if (GAMEPLAY::IS_BIT_SET(Local_160.f_60, 6))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_160.f_60, 5))
		{
			func_36();
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_160.f_60, 5) && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
	{
		func_35(&(Local_64.f_80));
	}
}

void func_35(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_160.f_60, 5))
	{
	}
	else
	{
		CONTROLS::_0x3D42B92563939375(uParam0);
		GAMEPLAY::SET_BIT(&(Local_160.f_60), 5);
	}
}

void func_36()
{
	if (GAMEPLAY::IS_BIT_SET(Local_160.f_60, 5))
	{
		CONTROLS::_0x643ED62D5EA3BEBD();
		GAMEPLAY::CLEAR_BIT(&(Local_160.f_60), 5);
	}
}

void func_37()
{
	vector3 vVar0;
	
	if (Local_64.f_17 == 4)
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_160.f_60, 1))
	{
		return;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_160.f_36))
	{
		Local_160.f_36 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(Local_64.f_86.f_1);
		return;
	}
	vVar0 = { CAM::GET_CAM_ROT(Local_160, 2) };
	switch (Local_64.f_17)
	{
		case 1:
		case 2:
		case 3:
			if (!Local_160.f_37)
			{
				Local_160.f_37 = 1;
				func_40(Local_160.f_36, Local_64.f_20);
				func_39(Local_160.f_36, Local_64.f_20.f_1, Local_64.f_20.f_2, Local_64.f_20.f_3);
			}
		
		case 0:
			func_38(Local_160.f_36, 0f, CAM::GET_CAM_FOV(Local_160), Local_64.f_4, Local_64.f_5, vVar0.z);
			break;
	}
	GRAPHICS::_SET_UI_LAYER(0);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Local_160.f_36, 255, 255, 255, 0, 0);
}

void func_38(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5)
{
	fParam2 = ((fParam2 - fParam3) / (fParam4 - fParam3));
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ALT_FOV_HEADING");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam2);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(uParam5);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_39(var uParam0, var uParam1, var uParam2, var uParam3)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_WEAPON_VALUES");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam2);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam3);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_40(var uParam0, var uParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_ZOOM_VISIBLE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(uParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_41()
{
	struct<4> Var0;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	
	if (Local_64.f_94 != 0)
	{
		Local_160.f_4 = { ENTITY::GET_ENTITY_COORDS(Local_64.f_95, 1) };
		Local_160.f_4.f_3 = { ENTITY::GET_ENTITY_ROTATION(Local_64.f_95, 2) };
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_160.f_60, 2))
	{
		Var0 = { func_46(Local_160, &(Local_160.f_1), Local_64, Local_64.f_6.f_1, Local_64.f_6) };
	}
	vVar4 = { Local_64.f_91 + Local_160.f_1 };
	vVar7 = { func_45(Local_64.f_71, vVar4.z) };
	vVar10 = { Local_64.f_88 + vVar7 };
	switch (Local_64.f_94)
	{
		case 0:
			func_44(Local_160, vVar10, vVar4);
			break;
		
		case 1:
			func_43(Local_160, vVar10, vVar4, Local_64.f_95);
			break;
	}
	func_42(Local_160.f_40, Local_160.f_40.f_2, Local_160.f_40.f_8, Local_160.f_40.f_3, Local_160.f_40.f_9, Local_160.f_40.f_4, Local_160.f_40.f_10, Local_160.f_40.f_5, Local_160.f_40.f_11, Local_160.f_40.f_6, Local_160.f_40.f_12, Local_160.f_40.f_7, Var0, Var0.f_1, Local_160.f_61.f_1, Local_160.f_61.f_2 > 0);
	Local_160.f_4.f_6 = { CAM::GET_CAM_COORD(Local_160) };
	Local_160.f_4.f_9 = { CAM::GET_CAM_ROT(Local_160, 2) };
}

void func_42(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, var uParam7, int iParam8, var uParam9, int iParam10, var uParam11, float fParam12, vector3 vParam13, int iParam16, bool bParam17)
{
	float fVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	float fVar4;
	
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0) || AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam0, 0, -1))
	{
		if (fParam12 != 0f)
		{
			if (iParam4 != -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam4))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam4, uParam5, uParam1, 1);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Ctrl", fParam12);
				if (fParam12 < 0f)
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", -1f);
				}
				else
				{
					AUDIO::SET_VARIABLE_ON_SOUND(iParam4, "Dir", 1f);
				}
			}
		}
		else if (iParam4 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam4))
			{
				AUDIO::STOP_SOUND(iParam4);
			}
		}
		fVar0 = SYSTEM::VMAG(vParam13);
		if (fVar0 > 0f)
		{
			if (iParam2 != -1)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam2, uParam3, uParam1, 1);
				}
				AUDIO::SET_VARIABLE_ON_SOUND(iParam2, "Ctrl", fVar0);
			}
		}
		else if (iParam2 != -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iParam2))
			{
				AUDIO::STOP_SOUND(iParam2);
			}
		}
		if (iParam6 != -1)
		{
			if (AUDIO::HAS_SOUND_FINISHED(iParam6))
			{
				AUDIO::PLAY_SOUND_FRONTEND(iParam6, uParam7, uParam1, 1);
			}
		}
		uVar1 = PLAYER::PLAYER_PED_ID();
		if (PED::IS_PED_IN_ANY_VEHICLE(uVar1, 0))
		{
			uVar2 = PED::GET_VEHICLE_PED_IS_IN(uVar1, 0);
		}
		else
		{
			uVar2 = uVar1;
		}
		if (iParam8 != -1)
		{
			bVar3 = bParam17;
			if (!bVar3)
			{
				fVar4 = SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(uVar2));
				bVar3 = (IntToFloat(iParam16) / fVar4) > 0.1f;
			}
			if (bVar3)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam8))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam8, uParam9, uParam9, 1);
				}
			}
		}
		if (iParam10 != -1)
		{
			if ((IntToFloat(ENTITY::GET_ENTITY_HEALTH(uVar1)) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(uVar1))) < 0.15f || (IntToFloat(ENTITY::GET_ENTITY_HEALTH(uVar2)) / SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(uVar2))) < 0.15f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(iParam10))
				{
					AUDIO::PLAY_SOUND_FRONTEND(iParam10, uParam11, uParam1, 1);
				}
			}
			else if (!AUDIO::HAS_SOUND_FINISHED(iParam10))
			{
				AUDIO::STOP_SOUND(iParam10);
			}
		}
	}
}

void func_43(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7)
{
	CAM::ATTACH_CAM_TO_ENTITY(uParam0, uParam7, vParam1, 1);
	CAM::SET_CAM_ROT(uParam0, vParam4 + ENTITY::GET_ENTITY_ROTATION(uParam7, 2), 2);
}

void func_44(var uParam0, vector3 vParam1, vector3 vParam4)
{
	CAM::SET_CAM_COORD(uParam0, vParam1);
	CAM::SET_CAM_ROT(uParam0, vParam4, 2);
}

Vector3 func_45(vector3 vParam0, var uParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(uParam3);
	fVar4 = SYSTEM::COS(uParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<4> func_46(var uParam0, var uParam1, struct<6> Param2, float fParam8, float fParam9)
{
	float fVar0;
	struct<4> Var1;
	float fVar5;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	vector3 vVar12;
	vector3 vVar15;
	float fVar18;
	vector3 vVar19;
	bool bVar22;
	
	fVar0 = CAM::GET_CAM_FOV(uParam0);
	Var1 = -fVar0;
	Var1.f_1 = { -*uParam1 };
	fVar5 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(0, 39);
	vVar6 = { -Vector(CONTROLS::_0x4F8A26A890FD62FB(0, 290), 0f, CONTROLS::_0x4F8A26A890FD62FB(0, 291)) };
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		fParam8 = (fParam8 * 8f);
	}
	else
	{
		if (GAMEPLAY::ABSF(fVar5) < 0.06f)
		{
			fVar5 = 0f;
		}
		if (SYSTEM::VMAG(vVar6) < 0.06f)
		{
			vVar6 = { 0f, 0f, 0f };
		}
	}
	fVar9 = GAMEPLAY::GET_FRAME_TIME();
	fVar10 = func_49((fVar0 + ((fVar5 * fParam9) * fVar9)), Param2.f_4, Param2.f_5);
	CAM::SET_CAM_FOV(uParam0, fVar10);
	CAM::SET_CAM_NEAR_CLIP(uParam0, 0.01f);
	fVar11 = ((fVar10 - 5f) / 42f);
	CAM::CUSTOM_MENU_COORDINATES(1f);
	GRAPHICS::_0xE2892E7E55D7073A(fVar11);
	vVar12.x = Param2.f_2;
	vVar12.y = 0f;
	vVar12.z = Param2;
	vVar15.x = Param2.f_3;
	vVar15.y = 0f;
	vVar15.z = Param2.f_1;
	fVar18 = (((fVar9 * fVar10) * fParam8) * (1f + ((fVar10 - Param2.f_4) / (Param2.f_5 - Param2.f_4))));
	vVar19 = { vVar6 };
	vVar19.z = (vVar19.z * fVar18);
	vVar19.x = (vVar19.x * fVar18);
	*uParam1 = { *uParam1 + vVar19 };
	bVar22 = vVar12.z > vVar15.z;
	if (bVar22)
	{
		*uParam1 = func_49(*uParam1, vVar12.x, vVar15.x);
		uParam1->f_1 = func_49(uParam1->f_1, vVar12.y, vVar15.y);
		uParam1->f_2 = func_48(uParam1->f_2);
	}
	else
	{
		*uParam1 = { func_47(*uParam1, vVar12, vVar15) };
	}
	Var1 = (Var1 + fVar10);
	Var1.f_1 = { Var1.f_1 + *uParam1 };
	return Var1;
}

Vector3 func_47(vector3 vParam0, vector3 vParam3, vector3 vParam6)
{
	vParam0.x = func_49(vParam0.x, vParam3.x, vParam6.x);
	vParam0.y = func_49(vParam0.y, vParam3.y, vParam6.y);
	vParam0.z = func_49(vParam0.z, vParam3.z, vParam6.z);
	return vParam0;
}

float func_48(float fParam0)
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

float func_49(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_50()
{
	switch (Local_64.f_8.f_1)
	{
		case 1:
			func_85();
			break;
		
		case 2:
			func_70();
			break;
		
		case 3:
			func_51();
			break;
	}
}

void func_51()
{
	var uVar0;
	var uVar3;
	vector3 vVar6;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(588062221) < 1)
	{
		if (!Local_160.f_29.f_5)
		{
			Local_160.f_29.f_5 = 1;
		}
		if (!func_65(3, 0f, 0f, 0f, Local_160.f_4.f_6, 0f, 0f, 0f))
		{
			if (func_64())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
			return;
		}
	}
	if (Local_160.f_29)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (Local_160.f_29.f_1)
			{
				if (func_62(PLAYER::PLAYER_ID()))
				{
					CAM::DO_SCREEN_FADE_IN(250);
					AUDIO::PLAY_SOUND_FROM_COORD(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, Local_160.f_29.f_2, Local_160.f_40.f_13, 1, 500, 0);
					Local_160.f_29.f_1 = 0;
					Local_160.f_29 = 0;
				}
			}
			else
			{
				Local_160.f_29.f_1 = 1;
				func_61(&(Local_160.f_17), 0, 0);
				GAMEPLAY::SET_BIT(&Global_2504152, 0);
				func_58(3f, 100f, &(Local_160.f_29.f_2), &uVar0, &uVar3, &vVar6);
				func_57(1);
				func_55(Local_160.f_29.f_2, vVar6);
			}
		}
	}
	if (func_54() || Local_160.f_29)
	{
		GAMEPLAY::SET_BIT(&(Local_160.f_60), 1);
		GAMEPLAY::SET_BIT(&(Local_160.f_60), 2);
		GAMEPLAY::SET_BIT(&(Local_160.f_60), 3);
		if (!Local_160.f_29)
		{
			GAMEPLAY::SET_BIT(&(Local_160.f_60), 6);
			GAMEPLAY::SET_BIT(&(Local_160.f_60), 7);
		}
		return;
	}
	if (func_64())
	{
		if (func_52(&(Local_160.f_17), Local_64.f_8.f_2, 0))
		{
			Local_160.f_29 = 1;
			CAM::DO_SCREEN_FADE_OUT(250);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		}
	}
}

int func_52(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_53(uParam0, bParam2, 0);
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

void func_53(var uParam0, bool bParam1, bool bParam2)
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

var func_54()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 5);
}

void func_55(vector3 vParam0, vector3 vParam3)
{
	if (!func_56(Global_1678593.f_11, vParam0, 0))
	{
		Global_1678593.f_11 = { vParam0 };
		vParam3 = { vParam3 + Vector(0f, -180f, 180f) };
		Global_1678593.f_14 = { vParam3 };
	}
}

bool func_56(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1678593.f_2, 4))
		{
			Global_1678593.f_2 = 0;
			GAMEPLAY::SET_BIT(&(Global_1678593.f_2), 4);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1678593.f_2, 4))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1678593.f_2), 4);
	}
}

void func_58(float fParam0, float fParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	float fVar13;
	int iVar14;
	float fVar15;
	
	if (Local_64.f_74 == 0)
	{
		*uParam5 = { CAM::GET_CAM_ROT(Local_160, 2) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { Local_160.f_4.f_6 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { func_60(*uParam2, fParam1) };
	}
	else
	{
		vVar0 = { func_7(CAM::GET_CAM_ROT(Local_160, 2)) };
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_64.f_95, Local_64.f_88) };
		vVar6 = { unk_0x46F8696933A63C9B(Local_64.f_95, Local_64.f_74.f_1[0]) };
		vVar9 = { vVar6 - vVar3 };
		*uParam2 = { vVar6 };
		iVar12 = 0;
		fVar13 = func_59(vVar9, vVar0);
		iVar14 = 1;
		while (iVar14 <= (Local_64.f_74 - 1))
		{
			vVar6 = { unk_0x46F8696933A63C9B(Local_64.f_95, Local_64.f_74.f_1[iVar14]) };
			vVar9 = { vVar6 - vVar3 };
			fVar15 = func_59(vVar9, vVar0);
			if (fVar15 > fVar13)
			{
				fVar13 = fVar15;
				iVar12 = iVar14;
				*uParam2 = { vVar6 };
			}
			iVar14++;
		}
		*uParam5 = { unk_0xCE6294A232D03786(Local_64.f_95, Local_64.f_74.f_1[iVar12]) };
		*uParam4 = { func_7(*uParam5) };
		*uParam2 = { *uParam2 + Vector(fParam0, fParam0, fParam0) * *uParam4 };
		*uParam3 = { *uParam2 + Vector(fParam1, fParam1, fParam1) * *uParam4 };
	}
}

float func_59(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_60(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
	vVar3 = { func_7(vVar0) };
	return vParam0 + Vector(fParam3, fParam3, fParam3) * vVar3;
}

void func_61(var uParam0, bool bParam1, bool bParam2)
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

int func_62(int iParam0)
{
	if (iParam0 != func_63())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_325, 26);
	}
	return 0;
}

int func_63()
{
	return -1;
}

bool func_64()
{
	return (GAMEPLAY::IS_BIT_SET(Global_2504152, 4) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, 229));
}

int func_65(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	struct<9> Var0;
	
	if (func_69())
	{
		if (!func_68(&uLocal_48))
		{
			func_53(&uLocal_48, 0, 0);
		}
		else if (func_52(&uLocal_48, 8000, 0))
		{
			func_67(&uLocal_48);
			func_66(0);
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_50) && !SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(588062221))
	{
		SCRIPT::REQUEST_SCRIPT("AM_MP_DRONE");
	}
	if ((SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(588062221) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_50)) && !func_69())
	{
		Var0.f_1 = -1;
		Var0 = PLAYER::PLAYER_ID();
		Var0.f_2 = { vParam1 };
		Var0.f_5 = { vParam4 };
		Var0.f_8 = { vParam7 };
		Var0.f_1 = iParam0;
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(588062221) < 1)
		{
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_DRONE", Var0, 1, 0))
			{
				uLocal_50 = SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(588062221, &Var0, 11, 1424);
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(588062221);
				func_67(&uLocal_48);
			}
			else
			{
				return 1;
			}
		}
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(uLocal_50) && !func_69())
	{
		return 1;
	}
	return 0;
}

void func_66(bool bParam0)
{
	if (bParam0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(GAMEPLAY::GET_HASH_KEY("AM_MP_DRONE")) > 0)
		{
			if (!func_69())
			{
				GAMEPLAY::SET_BIT(&Global_1678593, 0);
			}
		}
	}
	else if (func_69())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1678593, 0);
	}
}

void func_67(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_68(var uParam0)
{
	return uParam0->f_1;
}

bool func_69()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 0);
}

void func_70()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	vector3 vVar4;
	vector3 vVar7;
	
	func_77();
	if (Local_160.f_22 != -1)
	{
		bVar0 = func_52(&(Local_160.f_22.f_2), 2000, 0);
		if (bVar0)
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_160.f_22.f_4))
			{
				uVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_160.f_22.f_4);
				unk_0x880001F3CD093B94(uVar2, 2);
			}
			func_76(&(Local_160.f_22.f_5));
			func_75(&(Local_160.f_22.f_6), "Bleep", "DLC_IE_Steal_EITS_Sounds", 1);
			iVar1 = 6;
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(Local_160.f_22.f_4))
			{
				uVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Local_160.f_22.f_4);
				unk_0x880001F3CD093B94(uVar3, 1);
			}
			func_75(&(Local_160.f_22.f_5), "VULKAN_LOCK_ON_AMBER", 0, 1);
			iVar1 = 9;
		}
		func_72(Local_160.f_22.f_4, !bVar0, iVar1);
		if (func_64())
		{
			if (Local_64.f_16 != 0 && !STREAMING::HAS_MODEL_LOADED(Local_64.f_16))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				return;
			}
			if (bVar0 && func_52(&(Local_160.f_17), Local_64.f_8.f_2, 0))
			{
				func_61(&(Local_160.f_17), 0, 0);
				func_71(1f, &vVar4, &vVar7);
				GAMEPLAY::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar4, vVar7, Local_64.f_8.f_3, 1, Local_64.f_8, PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, Local_64.f_95, 0, 0, Local_160.f_22, 1, 0, Local_64.f_94 != 0);
				AUDIO::PLAY_SOUND_FROM_COORD(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, vVar4, Local_160.f_40.f_13, 1, 500, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			}
		}
	}
}

void func_71(float fParam0, var uParam1, var uParam2)
{
	var uVar0;
	
	func_58(0f, fParam0, uParam1, uParam2, &uVar0, &uVar0);
}

void func_72(var uParam0, bool bParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		return;
	}
	GRAPHICS::_SET_UI_LAYER(1);
	vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	GRAPHICS::SET_DRAW_ORIGIN(vVar2, 0);
	fVar0 = func_74(uParam0, Local_160, 0.5f);
	fVar0 = func_49(fVar0, 0.015f, fVar0);
	fVar1 = (fVar0 * GRAPHICS::_GET_ASPECT_RATIO(0));
	UI::GET_HUD_COLOUR(iParam2, &uVar5, &uVar6, &uVar7, &uVar8);
	uVar9 = func_73((bParam1 && (GAMEPLAY::GET_GAME_TIMER() % 300) < 150), SYSTEM::CEIL((SYSTEM::TO_FLOAT(uVar8) / 4f)), uVar8);
	GRAPHICS::DRAW_SPRITE("helicopterhud", "hud_outline", 0f, 0f, fVar0, fVar1, 0f, uVar5, uVar6, uVar7, uVar9, 0);
	GRAPHICS::CLEAR_DRAW_ORIGIN();
}

var func_73(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

float func_74(var uParam0, var uParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	vVar0 = { CAM::GET_CAM_COORD(uParam1) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	fVar6 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, 1);
	fVar7 = CAM::GET_CAM_FOV(uParam1);
	fVar8 = 1f;
	fVar9 = (fVar8 / GAMEPLAY::TAN((fVar7 / 2f)));
	fVar10 = ((fVar9 * fParam2) / fVar6);
	return fVar10;
}

void func_75(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(*uParam0, sParam1, sParam2, iParam3);
	}
}

void func_76(var uParam0)
{
	if (*uParam0 != -1)
	{
		AUDIO::STOP_SOUND(*uParam0);
		AUDIO::RELEASE_SOUND_ID(*uParam0);
		*uParam0 = -1;
	}
}

void func_77()
{
	bool bVar0;
	var uVar1;
	
	if (func_84(&(Local_160.f_22.f_1), Local_160.f_22.f_4, &bVar0))
	{
		if (bVar0)
		{
			if (Local_160.f_22 != Local_160.f_22.f_4)
			{
				func_61(&(Local_160.f_22.f_2), 0, 0);
				func_76(&(Local_160.f_22.f_5));
				func_76(&(Local_160.f_22.f_6));
			}
			Local_160.f_22 = Local_160.f_22.f_4;
		}
		else
		{
			func_83();
			uVar1 = func_81(Local_64.f_8.f_4);
			Local_160.f_22.f_4 = uVar1;
		}
		if (Local_160.f_22.f_4 != -1)
		{
			func_79(Local_160.f_22.f_4);
		}
	}
	if (Local_160.f_22 != -1)
	{
		if (((Local_160.f_22.f_4 != Local_160.f_22 || ENTITY::IS_ENTITY_DEAD(Local_160.f_22, 0)) || func_78(Local_160.f_22) > 0.04f) || SYSTEM::VMAG(ENTITY::GET_ENTITY_COORDS(Local_160.f_22, 1) - Local_160.f_4.f_6) > Local_64.f_8.f_4)
		{
			func_83();
		}
	}
}

float func_78(var uParam0)
{
	vector3 vVar0;
	
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &vVar0, &(vVar0.f_1)))
	{
		return 1f;
	}
	vVar0 = { vVar0 - Vector(0f, 0.5f, 0.5f) };
	vVar0.z = 0f;
	return SYSTEM::VMAG2(vVar0);
}

void func_79(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { CAM::GET_CAM_COORD(Local_160) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	vVar3 = { vVar3 + Vector(2f, 2f, 2f) * func_80(vVar3 - vVar0) };
	Local_160.f_22.f_1 = WORLDPROBE::START_SHAPE_TEST_LOS_PROBE(vVar0, vVar3, 511, 0, 4);
	if (Local_160.f_22.f_1 == 0)
	{
	}
}

Vector3 func_80(vector3 vParam0)
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

int func_81(float fParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	float fVar9;
	var uVar10;
	var uVar11;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	bVar1 = iVar0 != -1;
	fVar3 = 0.005f;
	bVar4 = false;
	fVar5 = (fParam0 * fParam0);
	iVar6 = 0;
	while (iVar6 < 32)
	{
		iVar7 = iVar6;
		uVar8 = PLAYER::GET_PLAYER_PED(iVar7);
		if (((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7) || !func_82(iVar7, 1, 1)) || (bVar1 && PLAYER::GET_PLAYER_TEAM(iVar7) == iVar0)) || SYSTEM::VMAG2(Local_160.f_4.f_6 - ENTITY::GET_ENTITY_COORDS(uVar8, 1)) > fVar5)
		{
		}
		else
		{
			fVar9 = func_78(uVar8);
			if (fVar9 < fVar3)
			{
				iVar2 = iVar7;
				fVar3 = fVar9;
				bVar4 = true;
			}
		}
		iVar6++;
	}
	if (bVar4)
	{
		uVar10 = PLAYER::GET_PLAYER_PED(iVar2);
		if (PED::IS_PED_IN_ANY_VEHICLE(uVar10, 0))
		{
			uVar11 = PED::GET_VEHICLE_PED_IS_IN(uVar10, 0);
			if (!ENTITY::IS_ENTITY_DEAD(uVar11, 0))
			{
				return uVar11;
			}
		}
	}
	return -1;
}

int func_82(int iParam0, bool bParam1, bool bParam2)
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

void func_83()
{
	Local_160.f_22 = -1;
	Local_160.f_22.f_4 = -1;
	func_76(&(Local_160.f_22.f_5));
	func_76(&(Local_160.f_22.f_6));
}

int func_84(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	var uVar4;
	int iVar7;
	int iVar8;
	var uVar9;
	
	*uParam2 = 0;
	if (*uParam0 == 0 || iParam1 == -1)
	{
		return 1;
	}
	iVar8 = WORLDPROBE::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &uVar4, &uVar1, &iVar7);
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar7))
		{
			uVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7);
			if (PED::IS_PED_IN_ANY_VEHICLE(uVar9, 0))
			{
				iVar7 = PED::GET_VEHICLE_PED_IS_IN(uVar9, 0);
			}
		}
	}
	if (iVar8 == 2)
	{
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				*uParam2 = (iParam1 == iVar7 && !ENTITY::IS_ENTITY_DEAD(iVar7, 0));
			}
		}
		return 1;
	}
	else if (iVar8 == 0)
	{
		return 1;
	}
	return 0;
}

void func_85()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	var uVar12;
	vector3 vVar15;
	vector3 vVar18;
	
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 452, 1);
	bVar0 = Local_64.f_13.f_1 > 0;
	bVar1 = (bVar0 && !func_52(&(Local_160.f_19), Local_64.f_13.f_2, 0));
	if (bVar0)
	{
		if (bVar1)
		{
			iVar2 = 6;
			sVar3 = "TC_RELOAD";
			iVar5 = Local_64.f_13.f_2;
			iVar4 = func_93(&(Local_160.f_19), 0, 0);
		}
		else
		{
			iVar2 = 1;
			sVar3 = "TC_AMMO";
			iVar5 = Local_64.f_13.f_1;
			iVar4 = (iVar5 - Local_160.f_19.f_2);
		}
		func_90(iVar4, iVar5, sVar3, iVar2, -1, 11, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0);
	}
	if (bVar0 && !bVar1)
	{
		if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, 225))
		{
			func_61(&(Local_160.f_19), 0, 0);
			Local_160.f_19.f_2 = 0;
		}
	}
	if (!bVar1 && func_89())
	{
		Local_160.f_19.f_2 = (Local_160.f_19.f_2 + SYSTEM::ROUND((GAMEPLAY::GET_FRAME_TIME() * 1000f)));
		if (func_52(&(Local_160.f_17), Local_64.f_8.f_2, 0))
		{
			func_61(&(Local_160.f_17), 0, 0);
			if (Local_64.f_13.f_1 > 0 && Local_160.f_19.f_2 >= Local_64.f_13.f_1)
			{
				func_61(&(Local_160.f_19), 0, 0);
				Local_160.f_19.f_2 = 0;
			}
			func_58(0f, Local_64.f_8.f_4, &vVar6, &vVar9, &uVar12, &vVar15);
			vVar18 = { Vector(Local_64.f_13, Local_64.f_13, Local_64.f_13) * func_86(0f, 0f, 0f, 1f) };
			vVar18.y = 0f;
			vVar15 = { vVar15 + vVar18 };
			vVar9 = { vVar6 + FtoV(SYSTEM::VMAG(vVar9 - vVar6)) * func_7(vVar15) };
			vVar6.z = (vVar6.z - 1f);
			GAMEPLAY::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar6, vVar9, Local_64.f_8.f_3, 0, Local_64.f_8, PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432, Local_64.f_95, 0, 0, 0, 1, 0, Local_64.f_94 != 0);
			if (Local_160.f_40.f_13.f_2 != -1 && AUDIO::HAS_SOUND_FINISHED(Local_160.f_40.f_13.f_2))
			{
				AUDIO::PLAY_SOUND_FROM_COORD(Local_160.f_40.f_13.f_2, Local_160.f_40.f_13.f_1, vVar6, Local_160.f_40.f_13, 1, 500, 0);
			}
		}
	}
	else if (Local_160.f_40.f_13.f_2 != -1 && !AUDIO::HAS_SOUND_FINISHED(Local_160.f_40.f_13.f_2))
	{
		AUDIO::STOP_SOUND(Local_160.f_40.f_13.f_2);
	}
}

Vector3 func_86(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	
	fVar3 = (fParam3 * fParam3);
	iVar4 = 0;
	while (iVar4 < 20)
	{
		vVar0 = { GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3) };
		if (SYSTEM::VDIST2(vVar0, 0f, 0f, 0f) <= fVar3)
		{
			return vParam0 + vVar0;
		}
		iVar4++;
	}
	return func_87(vParam0, fParam3);
}

Vector3 func_87(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	
	vVar0 = { GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return vParam0 + func_88(vVar0, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3));
}

Vector3 func_88(vector3 vParam0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

var func_89()
{
	return (GAMEPLAY::IS_BIT_SET(Global_2504152, 4) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 229));
}

void func_90(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_92(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_91(0, iVar0);
		Global_1369750.f_1093[iVar0] = iParam0;
		Global_1369750.f_1093.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1369750.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1369750.f_1093.f_194[iVar0] = iParam3;
		Global_1369750.f_1093.f_183[iVar0] = iParam4;
		Global_1369750.f_1093.f_216[iVar0] = iParam5;
		Global_1369750.f_1093.f_227[iVar0 /*3*/] = iParam6;
		Global_1369750.f_1093.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1369750.f_1093.f_258[iVar0] = iParam8;
		Global_1369750.f_1093.f_269[iVar0] = iParam9;
		Global_1369750.f_1093.f_312[iVar0] = iParam10;
		Global_1369750.f_1093.f_323[iVar0] = iParam11;
		Global_1369750.f_1093.f_334[iVar0] = iParam12;
		Global_1369750.f_1093.f_345[iVar0] = iParam13;
		Global_1369750.f_1088 = 1;
		Global_1369750.f_1093.f_356[iVar0] = iParam14;
		Global_1369750.f_1093.f_367[iVar0] = iParam15;
		Global_1369750.f_1093.f_378[iVar0] = iParam16;
		Global_1369750.f_1093.f_389[iVar0] = iParam17;
		Global_1369750.f_1093.f_400[iVar0] = iParam18;
		Global_1369750.f_1093.f_411[iVar0] = iParam19;
		Global_1369750.f_1093.f_422[iVar0] = iParam20;
		Global_1369750.f_1093.f_433[iVar0] = iParam21;
		Global_1369750.f_1093.f_444[iVar0] = iParam22;
		Global_1369750.f_1093.f_455[iVar0] = iParam23;
		Global_1369750.f_1093.f_466[iVar0] = iParam24;
	}
}

void func_91(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1369750.f_6130[iParam0]), iParam1);
}

int func_92(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1369750.f_6130[iParam0], iParam1);
}

var func_93(var uParam0, bool bParam1, bool bParam2)
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

bool func_94()
{
	return Global_68494;
}

void func_95(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	func_98(iParam0);
	if (func_97(&uVar0, 2))
	{
		func_61(&(Local_160.f_17), 0, 0);
		Local_64.f_8 = { Global_2504064.f_8 };
	}
	if (func_97(&uVar0, 6))
	{
		Local_64.f_19 = Global_2504064.f_19;
	}
	if (func_97(&uVar0, 10))
	{
		Local_64.f_74 = { Global_2504064.f_74 };
	}
	if (func_97(&uVar0, 8))
	{
		Local_64.f_67 = { Global_2504064.f_67 };
	}
	if (func_97(&uVar0, 12))
	{
		Local_64.f_20 = { Global_2504064.f_20 };
	}
	func_96(iParam0);
}

void func_96(int iParam0)
{
	var uVar0;
	
	uVar0 = iParam0;
	if (func_97(&uVar0, 0))
	{
	}
	if (func_97(&uVar0, 1))
	{
	}
	if (func_97(&uVar0, 2))
	{
		Local_64.f_8 = { Global_2504064.f_8 };
		switch (Local_64.f_8.f_1)
		{
			case 1:
				GRAPHICS::_0x27E32866E9A5C416(1.5f);
				func_61(&(Local_160.f_19), 0, 0);
				Local_160.f_19.f_2 = 0;
				break;
			
			case 2:
				Local_64.f_86 = "helicopterhud";
				Local_64.f_16 = Global_2504064.f_16;
				if (Local_64.f_16 != 0)
				{
					STREAMING::REQUEST_MODEL(Local_64.f_16);
				}
				break;
			
			default:
				break;
		}
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_64.f_86))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(Local_64.f_86, 0);
		}
	}
	if (func_97(&uVar0, 4))
	{
		switch (Local_64.f_17)
		{
			case 4:
				Local_64.f_86.f_1 = "";
				break;
			
			case 0:
				Local_64.f_86.f_1 = "turret_cam";
				break;
			
			case 1:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_APOCALYPSE";
				break;
			
			case 2:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_SCIFI";
				break;
			
			case 3:
				Local_64.f_86.f_1 = "ARENA_GUN_CAM_CONSUMER";
				break;
			
			default:
				Local_64.f_86.f_1 = "UNDEFINED";
				break;
		}
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_64.f_86.f_1))
		{
			Local_160.f_36 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(Local_64.f_86.f_1);
		}
	}
	if (func_97(&uVar0, 6))
	{
		Local_160.f_40.f_13.f_2 = -1;
		switch (Local_64.f_19)
		{
			case 0:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_160.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 1:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Fire_MG_Loop";
				Local_160.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 2:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Fire_Rockets_Oneshot";
				Local_160.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			case 3:
				Local_160.f_40.f_13 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_13.f_1 = "Launch_Piloted_Missile";
				Local_160.f_40.f_13.f_2 = AUDIO::GET_SOUND_ID();
				break;
			
			default:
				Local_160.f_40.f_13 = 0;
				Local_160.f_40.f_13.f_1 = 0;
				Local_160.f_40.f_13.f_2 = -1;
				break;
			}
	}
	if (func_97(&uVar0, 5))
	{
		Local_160.f_40.f_10 = -1;
		Local_160.f_40.f_8 = -1;
		Local_160.f_40.f_9 = -1;
		Local_160.f_40.f_11 = -1;
		Local_160.f_40.f_12 = -1;
		switch (Local_64.f_18)
		{
			case 0:
				Local_160.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_160.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_160.f_40.f_2 = "dlc_aw_Arena_Spectator_Turret_turret_Sounds";
				Local_160.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_160.f_40.f_10 = AUDIO::GET_SOUND_ID();
				Local_160.f_40.f_3 = "Pan";
				Local_160.f_40.f_8 = AUDIO::GET_SOUND_ID();
				Local_160.f_40.f_4 = "Zoom";
				Local_160.f_40.f_9 = AUDIO::GET_SOUND_ID();
				break;
			
			case 1:
				Local_160.f_40 = "SCRIPT\POLICE_CHOPPER_CAM";
				Local_160.f_40.f_1 = "dlc_aw_arena_turret_scene";
				Local_160.f_40.f_2 = "dlc_aw_Arena_Gun_Turret_Sounds";
				Local_160.f_40.f_5 = "Turret_Camera_Hum_Loop";
				Local_160.f_40.f_10 = AUDIO::GET_SOUND_ID();
				Local_160.f_40.f_3 = "Pan";
				Local_160.f_40.f_8 = AUDIO::GET_SOUND_ID();
				Local_160.f_40.f_4 = "Zoom";
				Local_160.f_40.f_9 = AUDIO::GET_SOUND_ID();
				Local_160.f_40.f_6 = "Take_Damage";
				Local_160.f_40.f_11 = AUDIO::GET_SOUND_ID();
				Local_160.f_40.f_7 = "Low_Health_Warning";
				Local_160.f_40.f_12 = AUDIO::GET_SOUND_ID();
				break;
			
			default:
				Local_160.f_40 = 0;
				Local_160.f_40.f_2 = 0;
				Local_160.f_40.f_5 = 0;
				Local_160.f_40.f_10 = -1;
				Local_160.f_40.f_3 = 0;
				Local_160.f_40.f_8 = -1;
				Local_160.f_40.f_4 = 0;
				Local_160.f_40.f_9 = -1;
				break;
		}
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_160.f_40))
		{
			AUDIO::HINT_SCRIPT_AUDIO_BANK(Local_160.f_40, 0, -1);
		}
	}
	if (func_97(&uVar0, 3))
	{
	}
	if (func_97(&uVar0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_31(0, -1, 0);
		}
	}
	if (func_97(&uVar0, 8))
	{
	}
	if (func_97(&uVar0, 9))
	{
	}
	if (func_97(&uVar0, 10))
	{
	}
	if (func_97(&uVar0, 11))
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
		{
			func_35(&(Local_64.f_80));
		}
	}
	if (func_97(&uVar0, 12))
	{
	}
}

int func_97(var uParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(*uParam0, iParam1))
	{
		GAMEPLAY::CLEAR_BIT(uParam0, iParam1);
		return 1;
	}
	return 0;
}

void func_98(int iParam0)
{
	if (func_97(&iParam0, 0))
	{
	}
	if (func_97(&iParam0, 1))
	{
	}
	if (func_97(&iParam0, 2))
	{
		Local_160.f_37 = 0;
		switch (Local_64.f_8.f_1)
		{
			case 1:
				GRAPHICS::_0x27E32866E9A5C416(1f);
				func_67(&(Local_160.f_19));
				break;
			
			case 3:
				if (Local_160.f_29)
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				Local_160.f_29.f_1 = 0;
				Local_160.f_29 = 0;
				if (Local_160.f_29.f_5)
				{
					Local_160.f_29.f_5 = 0;
					func_66(1);
				}
				break;
			
			case 2:
				func_83();
				if (Local_64.f_16 != 0)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_64.f_16);
					Local_64.f_16 = 0;
				}
				break;
		}
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_64.f_86))
		{
			GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(Local_64.f_86);
			Local_64.f_86 = "";
		}
	}
	if (func_97(&iParam0, 3))
	{
	}
	if (func_97(&iParam0, 4))
	{
		Local_160.f_37 = 0;
		Local_64.f_86.f_1 = "";
		if (Local_160.f_36 != -1)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_160.f_36));
			Local_160.f_36 = -1;
		}
	}
	if (func_97(&iParam0, 6))
	{
		func_76(&(Local_160.f_40.f_13.f_2));
	}
	if (func_97(&iParam0, 5))
	{
		AUDIO::STOP_AUDIO_SCENES();
		AUDIO::_0x9AC92EED5E4793AB();
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_160.f_40))
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(Local_160.f_40);
		}
		func_76(&(Local_160.f_40.f_8));
		func_76(&(Local_160.f_40.f_9));
		func_76(&(Local_160.f_40.f_10));
		func_76(&(Local_160.f_40.f_11));
		func_76(&(Local_160.f_40.f_12));
	}
	if (func_97(&iParam0, 7))
	{
		if (Local_64.f_24 > 0)
		{
			func_99(1, -1);
		}
	}
	if (func_97(&iParam0, 8))
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_67)) && func_12(&(Local_64.f_67)))
		{
			UI::CLEAR_HELP(1);
		}
	}
	if (func_97(&iParam0, 9))
	{
	}
	if (func_97(&iParam0, 10))
	{
	}
	if (func_97(&iParam0, 11))
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Local_64.f_80)))
		{
			func_36();
			StringCopy(&(Local_64.f_80), "", 16);
		}
	}
	if (func_97(&iParam0, 12))
	{
		Local_160.f_37 = 0;
	}
}

void func_99(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_26(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17367.f_8091)
	{
		UI::RESET_HUD_COMPONENT_VALUES(15);
		Global_17367.f_8091 = 0;
	}
	UI::_CLEAR_NOTIFICATIONS_POS(0f);
	if (Global_17367.f_5626[iVar0])
	{
		UI::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_17367.f_5626[iVar0] = 0;
	}
	if (Global_17367.f_5612[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_17367.f_5612[iVar0] = 0;
	}
	if (Global_17367.f_5619[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_17367.f_5619[iVar0] = 0;
	}
	if (bParam0)
	{
		func_100(&(Global_17367.f_5658[iVar0 /*10*/]));
		Global_17367.f_5719[iVar0] = 0;
	}
	else
	{
		Global_17367.f_5719[iVar0] = 0;
	}
}

void func_100(var uParam0)
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

void func_101()
{
	if ((!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT()) && GAMEPLAY::IS_BIT_SET(Local_64.f_84.f_1, 1))
	{
		CAM::DO_SCREEN_FADE_OUT(Local_64.f_84);
	}
	if (func_52(&(Local_160.f_58), Local_64.f_84, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_64.f_84.f_1, 0) || func_103(Local_64.f_88, 0))
		{
			if (!CAM::DOES_CAM_EXIST(Local_160))
			{
				Local_160 = CAM::CREATE_CAMERA(26379945, 1);
				GAMEPLAY::SET_BIT(&(Local_160.f_60), 2);
				func_41();
				GAMEPLAY::CLEAR_BIT(&(Local_160.f_60), 2);
				unk_0x70A382ADEC069DD3(Local_160.f_4.f_6);
			}
			else
			{
				if (GAMEPLAY::IS_BIT_SET(Local_64.f_84.f_1, 0))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 0, 1, 1, 0);
				func_3(&(Local_160.f_38), &(Local_160.f_39));
				func_37();
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(Local_160.f_40.f_1))
				{
					AUDIO::START_AUDIO_SCENE(Local_160.f_40.f_1);
				}
				func_61(&(Local_160.f_17), 0, 0);
				GAMEPLAY::SET_BIT(&Global_2504152, 3);
				func_102(1);
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() >= 0)
				{
					Local_160.f_57 = 1;
					GRAPHICS::PUSH_TIMECYCLE_MODIFIER();
				}
				GRAPHICS::SET_TIMECYCLE_MODIFIER("eyeinthesky");
				Local_160.f_56 = GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX();
				if (GAMEPLAY::IS_BIT_SET(Local_64.f_84.f_1, 2))
				{
					if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
				}
			}
		}
	}
}

void func_102(int iParam0)
{
	Local_160.f_16 = iParam0;
}

int func_103(vector3 vParam0, int iParam3)
{
	if (GAMEPLAY::IS_BIT_SET(Local_160.f_60, 0))
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			return 1;
		}
	}
	else if (STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 100f, iParam3))
	{
		GAMEPLAY::SET_BIT(&(Local_160.f_60), 0);
	}
	return 0;
}

void func_104(int iParam0)
{
	if (func_109())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_108(0))
		{
			func_105(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_2384, 2);
	}
}

void func_105(int iParam0)
{
	if (func_109())
	{
		return;
	}
	if (Global_14681)
	{
		func_107(0, 0);
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
	if (!func_106())
	{
		Global_14513.f_1 = 3;
	}
}

int func_106()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_107(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_108(0))
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

int func_108(int iParam0)
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

bool func_109()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

int func_110()
{
	if (Local_64.f_94 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_64.f_95) || ENTITY::IS_ENTITY_DEAD(Local_64.f_95, 0))
		{
			return 1;
		}
	}
	if (!func_82(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Global_2504062)
	{
		return 1;
	}
	return 0;
}

int func_111()
{
	var uVar0;
	
	func_118(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_117())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_116())
	{
		return 1;
	}
	if (func_115(157))
	{
		if (!func_114())
		{
			return 1;
		}
	}
	if (func_115(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_112() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_112()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_112()
{
	switch (func_113())
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

int func_113()
{
	return Global_25459;
}

bool func_114()
{
	return Global_2448386.f_587;
}

int func_115(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_116()
{
	return Global_2458191;
}

bool func_117()
{
	return Global_2448386.f_582;
}

void func_118(var uParam0)
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
					func_119(iVar0);
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

void func_119(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_82(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_120(uVar4, &bVar5))
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

int func_120(var uParam0, var uParam1)
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

void func_121()
{
	SYSTEM::WAIT(0);
}

void func_122()
{
	var uVar0;
	var uVar1;
	
	if (Local_160.f_16 == 0 && GAMEPLAY::IS_BIT_SET(Local_64.f_84.f_1, 1))
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	func_98(-1);
	if (func_130())
	{
		func_129(0);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	UI::UNLOCK_MINIMAP_ANGLE();
	UI::UNLOCK_MINIMAP_POSITION();
	uVar0 = PLAYER::PLAYER_PED_ID();
	if (func_128(uVar0) && PED::IS_PED_IN_ANY_VEHICLE(uVar0, 1))
	{
		uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar1))
		{
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uVar1, 1);
			func_126(1);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_160.f_60, 4))
	{
		func_125();
	}
	unk_0x7148E0F43D11F0D9();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	if (Local_160.f_57)
	{
		GRAPHICS::POP_TIMECYCLE_MODIFIER();
	}
	func_124(Local_160.f_38);
	func_124(Local_160.f_39);
	Global_2504051 = 0;
	Global_2504152 = 0;
	func_123();
}

void func_123()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_124(var uParam0)
{
	if (UI::DOES_BLIP_EXIST(uParam0))
	{
		UI::REMOVE_BLIP(&uParam0);
	}
}

void func_125()
{
	Global_2437022.f_1151.f_10 = 0;
}

void func_126(int iParam0)
{
	var uVar0;
	
	if (Global_2405070.f_2672 == 1)
	{
		Global_2405070.f_2672 = 0;
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!Global_2405070.f_2674.f_1)
		{
			if (!Global_2405070.f_2670 == -1)
			{
				if (((Global_2405070.f_2670 < 255 && !func_127()) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_153027, 0)) && !(AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && (Global_2405070.f_2671 == 0 && iParam0 == 0)))
				{
					AUDIO::SET_RADIO_TO_STATION_INDEX(Global_2405070.f_2670);
				}
				else if (Global_2405070.f_2670 >= 255)
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
					uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(uVar0))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar0))
						{
							AUDIO::SET_VEH_RADIO_STATION(uVar0, "OFF");
						}
					}
				}
			}
			Global_2405070.f_2670 = -1;
			Global_2405070.f_2674.f_1 = 1;
		}
	}
}

bool func_127()
{
	return Global_1623713;
}

int func_128(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_129(int iParam0)
{
	Global_2460461 = iParam0;
}

bool func_130()
{
	return Global_2460461;
}

void func_131(var uParam0)
{
	GAMEPLAY::SET_BIT(&Global_2504152, 2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, 0, -1);
		func_149(0, -1, 0);
	}
	else
	{
		func_122();
	}
	func_132(uParam0);
}

void func_132(var uParam0)
{
	var uVar0;
	var uVar1;
	
	Local_64.f_88 = { *uParam0 };
	Local_64.f_91 = { uParam0->f_3 };
	Local_64.f_94 = uParam0->f_6;
	Local_64.f_95 = uParam0->f_7;
	Local_160.f_22.f_4 = -1;
	uVar0 = PLAYER::PLAYER_PED_ID();
	if (func_128(uVar0) && PED::IS_PED_IN_ANY_VEHICLE(uVar0, 1))
	{
		uVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar1))
		{
			func_148(1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(uVar1, 0);
		}
	}
	if (!func_147())
	{
		GAMEPLAY::SET_BIT(&(Local_160.f_60), 4);
		func_146();
	}
	func_133();
}

void func_133()
{
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 0))
	{
		func_145(-1028390912, 1119092736, -1036779520, 1110704128, 1106247680, 1114636288);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 1))
	{
		func_144(1058642330, 1101004800);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 2))
	{
		func_143();
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 3))
	{
		func_141(1, 1, 0, 500);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 4))
	{
		func_140(0);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 5))
	{
		func_139(0);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 6))
	{
		func_138(0);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 7))
	{
		GAMEPLAY::SET_BIT(&Global_2504150, 7);
		Global_2504064.f_24 = 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 8))
	{
		func_137(0);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 9))
	{
		func_136(0f, 0f, 0f);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 10))
	{
		GAMEPLAY::SET_BIT(&Global_2504150, 10);
		Global_2504064.f_74 = 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 11))
	{
		func_135(0);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_2504150, 12))
	{
		func_134(1, 3, 3, 3);
	}
	Local_64 = { Global_2504064 };
	func_96(Global_2504150);
	func_102(0);
}

void func_134(int iParam0, int iParam1, int iParam2, int iParam3)
{
	GAMEPLAY::SET_BIT(&Global_2504150, 12);
	Global_2504064.f_20 = iParam0;
	Global_2504064.f_20.f_1 = iParam1;
	Global_2504064.f_20.f_2 = iParam2;
	Global_2504064.f_20.f_3 = iParam3;
}

void func_135(char* sParam0)
{
	GAMEPLAY::SET_BIT(&Global_2504150, 11);
	StringCopy(&(Global_2504064.f_80), sParam0, 16);
}

void func_136(vector3 vParam0)
{
	GAMEPLAY::SET_BIT(&Global_2504150, 9);
	Global_2504064.f_71 = { vParam0 };
}

void func_137(char* sParam0)
{
	GAMEPLAY::SET_BIT(&Global_2504150, 8);
	StringCopy(&(Global_2504064.f_67), sParam0, 16);
}

void func_138(int iParam0)
{
	GAMEPLAY::SET_BIT(&Global_2504150, 6);
	Global_2504064.f_19 = iParam0;
}

void func_139(int iParam0)
{
	GAMEPLAY::SET_BIT(&Global_2504150, 5);
	Global_2504064.f_18 = iParam0;
}

void func_140(int iParam0)
{
	GAMEPLAY::SET_BIT(&Global_2504150, 4);
	Global_2504064.f_17 = iParam0;
}

void func_141(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	GAMEPLAY::SET_BIT(&Global_2504150, 3);
	Global_2504064.f_84 = iParam3;
	func_142(&(Global_2504064.f_84.f_1), 1, bParam0);
	func_142(&(Global_2504064.f_84.f_1), 2, bParam1);
	func_142(&(Global_2504064.f_84.f_1), 0, bParam2);
}

void func_142(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(uParam0, iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(uParam0, iParam1);
	}
}

void func_143()
{
	GAMEPLAY::SET_BIT(&Global_2504150, 2);
	Global_2504064.f_8.f_1 = 0;
}

void func_144(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&Global_2504150, 1);
	Global_2504064.f_6.f_1 = iParam0;
	Global_2504064.f_6 = iParam1;
}

void func_145(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	GAMEPLAY::SET_BIT(&Global_2504150, 0);
	Global_2504064 = iParam0;
	Global_2504064.f_1 = iParam1;
	Global_2504064.f_2 = iParam2;
	Global_2504064.f_3 = iParam3;
	Global_2504064.f_4 = iParam4;
	Global_2504064.f_5 = iParam5;
}

void func_146()
{
	Global_2437022.f_1151.f_10 = 1;
}

bool func_147()
{
	return Global_2437022.f_1151.f_10;
}

void func_148(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2405070.f_2673;
	if ((AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING() && Global_2405070.f_2671 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405070.f_2670)
	{
		if (!AUDIO::IS_RADIO_RETUNING())
		{
			Global_2405070.f_2670 = iVar0;
		}
	}
}

int func_149(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_123();
			}
			else
			{
				return 0;
			}
		}
		if (!func_150())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_123();
					}
					else
					{
						return 0;
					}
				}
				if (func_117())
				{
					if (!bParam2)
					{
						func_123();
					}
					else
					{
						return 0;
					}
				}
				if (func_115(155))
				{
					if (!bParam2)
					{
						func_123();
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
					func_123();
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
				func_123();
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
			func_123();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_150()
{
	return Global_1312834;
}

