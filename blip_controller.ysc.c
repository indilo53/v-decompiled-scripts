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
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	char* sLocal_23 = NULL;
	vector3 vLocal_24 = { 0f, 0f, 0f };
	vector3 vLocal_27 = { 0f, 0f, 0f };
	int iLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	bool bLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
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
	sLocal_21 = "CHECKPOINT_NORMAL";
	sLocal_22 = "CHECKPOINT_MISSED";
	sLocal_23 = "CHECKPOINT_PERFECT";
	vLocal_24 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_27 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_30 = 3;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	fLocal_39 = 80f;
	fLocal_40 = 140f;
	fLocal_41 = 180f;
	bLocal_50 = true;
	iLocal_53 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_50();
	}
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		iVar1 = func_49(iVar0);
		func_46(iVar1, func_47(iVar0));
		iVar0++;
	}
	func_45(91, 1);
	func_45(92, 1);
	Global_25831 = 1;
	while (Global_25833)
	{
		if ((GAMEPLAY::GET_GAME_TIMER() % 250) == 0)
		{
		}
		SYSTEM::WAIT(0);
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iLocal_55[iVar2] = -1;
		iVar2++;
	}
	GAMEPLAY::SET_BIT(&(Global_25834[iVar2 /*23*/].f_11), 18);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 263)
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iVar2 /*23*/].f_11), 18);
		iVar2++;
	}
	iLocal_71 = Global_31885;
	bVar3 = false;
	func_44();
	func_42();
	while (true)
	{
		if (!bVar3)
		{
			func_41();
		}
		bVar3 = func_34();
		if (bVar3)
		{
			Global_25831 = 1;
		}
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
		if (Global_25831)
		{
			func_44();
			func_42();
			iVar6 = 0;
			iVar2 = 0;
			while (iVar2 < 263)
			{
				bVar7 = GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 18);
				if (!bVar7)
				{
					if (func_33(iVar2))
					{
						iVar5++;
						bVar7 = true;
					}
				}
				iVar4++;
				if (bVar7)
				{
					iVar8 = 0;
					iVar9 = 0;
					if (Global_31885)
					{
						iVar8++;
						iVar9++;
					}
					else
					{
						if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 13))
						{
							if (func_32())
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 1))
						{
							if (!bLocal_50)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 2))
						{
							if (bLocal_50)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 7))
						{
							if (!func_31(15))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 16))
						{
							if (!func_29(Global_25834[iVar2 /*23*/].f_22))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 14))
						{
							if (func_31(5))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 8))
						{
							if (Global_25834[iVar2 /*23*/].f_16 != 4 && Global_25834[iVar2 /*23*/].f_16 != 8)
							{
								if (!func_28(iVar2))
								{
									iVar8++;
								}
								iVar9++;
							}
						}
						if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 19))
						{
							switch (iLocal_64)
							{
								case 1:
								case 0:
								case 2:
									break;
								
								default:
									iVar8++;
									break;
							}
							iVar9++;
						}
						if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 27))
						{
							if (bLocal_45)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (Global_25834[iVar2 /*23*/].f_16 == 1)
						{
							func_22();
						}
					}
					if (iVar9 > 0)
					{
						if (iVar8 > 0)
						{
							GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar2 /*23*/].f_11), 0);
						}
						else if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 15))
						{
							GAMEPLAY::SET_BIT(&(Global_25834[iVar2 /*23*/].f_11), 0);
						}
					}
					else if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 15))
					{
						GAMEPLAY::SET_BIT(&(Global_25834[iVar2 /*23*/].f_11), 0);
					}
					if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 0) && GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 3))
					{
						bVar10 = false;
						if (!UI::DOES_BLIP_EXIST(Global_25834[iVar2 /*23*/].f_19))
						{
							while (!UI::GET_NUMBER_OF_ACTIVE_BLIPS() < 150)
							{
								SYSTEM::WAIT(2000);
							}
							if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_64)
								{
									case 1:
									case 0:
									case 2:
										if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 28))
										{
											Global_25834[iVar2 /*23*/].f_19 = UI::ADD_BLIP_FOR_RADIUS(Global_25834[iVar2 /*23*/][0 /*3*/], Global_25834[iVar2 /*23*/].f_10);
											UI::SET_BLIP_ALPHA(Global_25834[iVar2 /*23*/].f_19, 128);
											UI::_0x75A16C3DA34F1245(Global_25834[iVar2 /*23*/].f_19, 0);
										}
										else
										{
											Global_25834[iVar2 /*23*/].f_19 = UI::ADD_BLIP_FOR_COORD(Global_25834[iVar2 /*23*/][iLocal_64 /*3*/]);
											UI::SET_BLIP_SPRITE(Global_25834[iVar2 /*23*/].f_19, Global_25834[iVar2 /*23*/].f_12[iLocal_64]);
										}
										break;
									
									default:
										Global_25834[iVar2 /*23*/].f_19 = UI::ADD_BLIP_FOR_COORD(1f, 2f, 3f);
										break;
								}
							}
							else if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 28))
							{
								Global_25834[iVar2 /*23*/].f_19 = UI::ADD_BLIP_FOR_RADIUS(Global_25834[iVar2 /*23*/][0 /*3*/], Global_25834[iVar2 /*23*/].f_10);
								UI::SET_BLIP_ALPHA(Global_25834[iVar2 /*23*/].f_19, 128);
								UI::_0x75A16C3DA34F1245(Global_25834[iVar2 /*23*/].f_19, 0);
							}
							else
							{
								Global_25834[iVar2 /*23*/].f_19 = UI::ADD_BLIP_FOR_COORD(Global_25834[iVar2 /*23*/][0 /*3*/]);
								UI::SET_BLIP_SPRITE(Global_25834[iVar2 /*23*/].f_19, Global_25834[iVar2 /*23*/].f_12[0]);
							}
							if (Global_25834[iVar2 /*23*/].f_16 == 1)
							{
								bVar10 = true;
							}
						}
						else
						{
							if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 19))
							{
								switch (iLocal_64)
								{
									case 1:
									case 0:
									case 2:
										UI::SET_BLIP_COORDS(Global_25834[iVar2 /*23*/].f_19, Global_25834[iVar2 /*23*/][iLocal_64 /*3*/]);
										break;
									
									default:
										break;
								}
							}
							else
							{
								UI::SET_BLIP_COORDS(Global_25834[iVar2 /*23*/].f_19, Global_25834[iVar2 /*23*/][0 /*3*/]);
							}
							if (GAMEPLAY::IS_BIT_SET(Global_25834[iVar2 /*23*/].f_11, 9))
							{
								if (iLocal_47)
								{
									UI::SET_BLIP_FLASHES(Global_25834[iVar2 /*23*/].f_19, 1);
									iLocal_47 = 0;
								}
								else
								{
									UI::SET_BLIP_FLASHES_ALTERNATE(Global_25834[iVar2 /*23*/].f_19, 1);
									iLocal_47 = 1;
								}
								UI::SET_BLIP_FLASH_TIMER(Global_25834[iVar2 /*23*/].f_19, 10000);
								GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar2 /*23*/].f_11), 9);
							}
							else
							{
								UI::SET_BLIP_FLASHES(Global_25834[iVar2 /*23*/].f_19, 0);
							}
						}
						func_19(Global_25834[iVar2 /*23*/].f_19, iVar2);
						if (bVar10)
						{
							func_18(iVar2);
						}
						iVar5++;
					}
					else
					{
						if (UI::DOES_BLIP_EXIST(Global_25834[iVar2 /*23*/].f_19))
						{
							UI::REMOVE_BLIP(&(Global_25834[iVar2 /*23*/].f_19));
							iVar5++;
							if (Global_25834[iVar2 /*23*/].f_16 == 1)
							{
								func_17(iVar2);
							}
						}
						Global_25834[iVar2 /*23*/].f_19 = 0;
					}
				}
				GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar2 /*23*/].f_11), 18);
				iVar11 = 30;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar11 = 250;
				}
				if (iVar5 > iVar11)
				{
					SYSTEM::WAIT(0);
					iVar5 = 0;
				}
				if ((iVar4 / 20) > iVar6)
				{
					iVar6 = (iVar4 / 20);
					SYSTEM::WAIT(0);
				}
				iVar2++;
			}
		}
		Global_25831 = Global_25832;
		Global_25832 = 0;
		if (iVar4 == 0)
		{
			func_10();
			func_6();
			SYSTEM::WAIT(500);
			iLocal_64 = func_1();
		}
	}
}

int func_1()
{
	func_2();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_2()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_5(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_4(PLAYER::PLAYER_PED_ID());
			if (func_3(iVar0) && (!func_31(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_3(Global_106070.f_2355.f_539.f_4301))
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

bool func_3(int iParam0)
{
	return iParam0 < 3;
}

int func_4(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_5(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_5(int iParam0)
{
	if (func_3(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_6()
{
	if (func_1() == 1)
	{
		if (func_9(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_9(126))
				{
					if (func_8(138))
					{
						func_7(138, 0, 0);
					}
					if (!func_8(139))
					{
						if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("chop")) == 0)
						{
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 19.3f, 528.24f, 169.63f, 1) > 50f)
							{
								func_7(139, 1, 0);
							}
						}
					}
				}
				else
				{
					if (func_8(139))
					{
						func_7(139, 0, 0);
					}
					if (!func_8(138))
					{
						if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("chop")) == 0)
						{
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -11.15f, -1425.56f, 29.67f, 1) > 50f)
							{
								func_7(138, 1, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_7(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 0))
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 18);
		if (Global_25831 == 1)
		{
			Global_25832 = 1;
		}
		Global_25831 = 1;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 0);
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 15);
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar0 /*23*/].f_11), 0);
		GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar0 /*23*/].f_11), 15);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 0))
	{
		if (UI::DOES_BLIP_EXIST(Global_25834[iVar0 /*23*/].f_19))
		{
			GAMEPLAY::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			UI::REMOVE_BLIP(&(Global_25834[iVar0 /*23*/].f_19));
			GAMEPLAY::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

int func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return UI::DOES_BLIP_EXIST(Global_25834[iVar0 /*23*/].f_19);
}

int func_9(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_99.f_58[iParam0];
}

void func_10()
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	vVar0 = { func_16(PLAYER::GET_PLAYER_INDEX()) };
	iVar3 = -1;
	fVar4 = 1000000f;
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_55[iVar5] != -1)
		{
			if (UI::DOES_BLIP_EXIST(Global_25834[iLocal_55[iVar5] /*23*/].f_19))
			{
				fVar6 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar0, UI::GET_BLIP_COORDS(Global_25834[iLocal_55[iVar5] /*23*/].f_19), 1);
				if (fVar6 < fVar4)
				{
					fVar4 = fVar6;
					iVar3 = iVar5;
				}
			}
		}
		iVar5++;
	}
	if (iLocal_53 == iVar3)
	{
		return;
	}
	iLocal_53 = iVar3;
	if (iVar3 == -1)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (iLocal_55[iVar5] != -1)
		{
			if (iVar5 == iVar3)
			{
				if (UI::DOES_BLIP_EXIST(Global_25834[iLocal_55[iVar5] /*23*/].f_19))
				{
					func_15(iLocal_55[iVar5]);
				}
			}
			else if (UI::DOES_BLIP_EXIST(Global_25834[iLocal_55[iVar5] /*23*/].f_19))
			{
				func_11(iLocal_55[iVar5]);
			}
		}
		iVar5++;
	}
}

void func_11(int iParam0)
{
	func_14(iParam0, 0, 0);
	func_13(iParam0, 1);
	func_12(iParam0, 1);
}

void func_12(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 4))
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 4);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar0 /*23*/].f_11), 4);
	}
	if (Global_25831 == 1)
	{
		Global_25832 = 1;
	}
	Global_25831 = 1;
	GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 18);
}

void func_13(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 5))
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 5);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar0 /*23*/].f_11), 5);
	}
	if (Global_25831 == 1)
	{
		Global_25832 = 1;
	}
	Global_25831 = 1;
	GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 18);
}

void func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 6))
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 6);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar0 /*23*/].f_11), 6);
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 11);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar0 /*23*/].f_11), 11);
	}
	if (Global_25831 == 1)
	{
		Global_25832 = 1;
	}
	Global_25831 = 1;
	GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 18);
}

void func_15(int iParam0)
{
	func_14(iParam0, 1, 0);
	func_13(iParam0, 1);
	func_12(iParam0, 1);
}

Vector3 func_16(var uParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

void func_17(int iParam0)
{
	int iVar0;
	
	if (iLocal_54 < 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_55[iVar0] == iParam0)
		{
			iLocal_54 = (iLocal_54 - 1);
			iLocal_55[iVar0] = -1;
			if (iParam0 == iLocal_53)
			{
				iLocal_53 = -1;
			}
			return;
		}
		iVar0++;
	}
}

void func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iLocal_54 == 7)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_54)
	{
		if (iLocal_55[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_55[iVar0] == -1)
		{
			iVar1 = iVar0;
			iVar0 = 7;
		}
		iVar0++;
	}
	iLocal_55[iVar1] = iParam0;
	iLocal_54++;
}

void func_19(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = func_1();
	UI::_0xC4278F70131BAA6D(uParam0, 1);
	UI::SET_BLIP_PRIORITY(uParam0, 2);
	UI::SET_BLIP_COLOUR(uParam0, func_21(iParam1));
	if (Global_25834[iParam1 /*23*/].f_16 == 4 || Global_25834[iParam1 /*23*/].f_16 == 8)
	{
		switch (iVar0)
		{
			case 0:
				UI::SET_BLIP_COLOUR(uParam0, 42);
				break;
			
			case 1:
				UI::SET_BLIP_COLOUR(uParam0, 43);
				break;
			
			case 2:
				UI::SET_BLIP_COLOUR(uParam0, 44);
				break;
			}
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 28))
	{
		UI::SET_BLIP_SCALE(uParam0, 1f);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_25834[iParam1 /*23*/].f_20)))
	{
		if (UI::DOES_TEXT_LABEL_EXIST(&(Global_25834[iParam1 /*23*/].f_20)))
		{
			UI::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0, &(Global_25834[iParam1 /*23*/].f_20));
		}
	}
	bVar1 = GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 4);
	bVar2 = GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 5);
	uVar3 = GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 6);
	bVar4 = false;
	if (func_20(0))
	{
		bVar4 = GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 11);
	}
	if (uVar3 && !bVar4)
	{
		UI::SET_BLIP_AS_SHORT_RANGE(uParam0, 0);
	}
	else
	{
		UI::SET_BLIP_AS_SHORT_RANGE(uParam0, 1);
	}
	if (bVar2 && bVar1)
	{
		UI::SET_BLIP_DISPLAY(uParam0, 4);
	}
	else
	{
		if (bVar2)
		{
			UI::SET_BLIP_DISPLAY(uParam0, 5);
		}
		if (bVar1)
		{
			UI::SET_BLIP_DISPLAY(uParam0, 3);
		}
	}
	switch (Global_25834[iParam1 /*23*/].f_16)
	{
		case 7:
			UI::SET_BLIP_PRIORITY(uParam0, 2);
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 6:
		case 5:
			UI::SET_BLIP_PRIORITY(uParam0, 2);
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 1:
			UI::SET_BLIP_PRIORITY(uParam0, 3);
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			break;
		
		case 9:
			UI::SET_BLIP_PRIORITY(uParam0, 1);
			UI::SET_BLIP_CATEGORY(uParam0, 10);
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 4:
		case 8:
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			if (Global_25834[iParam1 /*23*/].f_16 == 4)
			{
				UI::SET_BLIP_PRIORITY(uParam0, 7);
			}
			else
			{
				UI::SET_BLIP_PRIORITY(uParam0, 5);
			}
			if (GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 8))
			{
				if (!func_28(iParam1))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 28))
					{
						UI::SET_BLIP_ALPHA(uParam0, 0);
					}
					else
					{
						if (Global_25834[iParam1 /*23*/].f_17 == 0)
						{
							UI::SET_BLIP_COLOUR(uParam0, 42);
						}
						if (Global_25834[iParam1 /*23*/].f_17 == 1)
						{
							UI::SET_BLIP_COLOUR(uParam0, 43);
						}
						if (Global_25834[iParam1 /*23*/].f_17 == 2)
						{
							UI::SET_BLIP_COLOUR(uParam0, 44);
						}
						if (Global_25834[iParam1 /*23*/].f_16 == 8)
						{
							UI::SET_BLIP_AS_SHORT_RANGE(uParam0, GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 5));
							UI::SET_BLIP_PRIORITY(uParam0, 3);
							UI::SET_BLIP_AS_SHORT_RANGE(uParam0, 1);
							UI::_0x54318C915D27E4CE(uParam0, 1);
							UI::SET_BLIP_SCALE(uParam0, 0.77f);
						}
						else
						{
							UI::SET_BLIP_SCALE(uParam0, 0.72f);
						}
					}
				}
				else
				{
					if (GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 28))
					{
						UI::SET_BLIP_ALPHA(uParam0, 128);
					}
					if (Global_25834[iParam1 /*23*/].f_16 == 8)
					{
						UI::_0x54318C915D27E4CE(uParam0, 0);
					}
				}
			}
			break;
		
		default:
			UI::SET_BLIP_PRIORITY(uParam0, 5);
			break;
	}
	switch (iParam1)
	{
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
			UI::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			break;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 19))
	{
		switch (iVar0)
		{
			case 1:
			case 0:
			case 2:
				UI::SET_BLIP_COORDS(Global_25834[iParam1 /*23*/].f_19, Global_25834[iParam1 /*23*/][iVar0 /*3*/]);
				break;
			}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 17))
	{
		UI::SET_BLIP_AS_MISSION_CREATOR_BLIP(uParam0, 1);
	}
	else
	{
		UI::SET_BLIP_AS_MISSION_CREATOR_BLIP(uParam0, 0);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 20))
	{
		UI::SHOW_TICK_ON_BLIP(uParam0, 1);
	}
	else
	{
		UI::SHOW_TICK_ON_BLIP(uParam0, 0);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_25834[iParam1 /*23*/].f_11, 29))
	{
		UI::SET_BLIP_COLOUR(uParam0, 39);
	}
}

int func_20(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_29(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_21(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	uVar1 = GAMEPLAY::GET_BITS_IN_RANGE(Global_25834[iVar0 /*23*/].f_11, 21, 26);
	return uVar1;
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_23(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_88365[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[iParam0], 0))
	{
		if (Global_88365[iParam0 /*10*/].f_9 != func_27())
		{
			bVar0 = true;
		}
		else if (!func_25(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_24(6))
		{
			bVar0 = false;
		}
	}
	if (func_20(14))
	{
		bVar0 = false;
	}
	func_7(Global_88365[iParam0 /*10*/].f_7, bVar0, 0);
}

bool func_24(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[iParam0], 0);
}

int func_25(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (Global_93284.f_325 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_25(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_26(iParam0, &sVar1);
		iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_88365[iParam0 /*10*/].f_3, &sVar1);
		if (iVar9 != 0 && Global_93284.f_325 == iVar9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_26(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !GAMEPLAY::ARE_STRINGS_EQUAL(sParam1, "");
}

int func_27()
{
	func_2();
	return Global_106070.f_2355.f_539.f_4301;
}

int func_28(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 8))
	{
		return 0;
	}
	if (Global_25834[iVar0 /*23*/].f_17 == func_1())
	{
		return 1;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 10))
	{
		return 0;
	}
	if (Global_25834[iVar0 /*23*/].f_18 == func_1())
	{
		return 1;
	}
	return 0;
}

bool func_29(int iParam0)
{
	return func_30(iParam0, Global_36117);
}

int func_30(int iParam0, int iParam1)
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

bool func_31(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_32()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != 0)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)
{
	if (iLocal_68 && GAMEPLAY::IS_BIT_SET(Global_25834[iParam0 /*23*/].f_11, 13))
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_69 && ((GAMEPLAY::IS_BIT_SET(Global_25834[iParam0 /*23*/].f_11, 7) || GAMEPLAY::IS_BIT_SET(Global_25834[iParam0 /*23*/].f_11, 11)) || GAMEPLAY::IS_BIT_SET(Global_25834[iParam0 /*23*/].f_11, 16)))
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_70 && GAMEPLAY::IS_BIT_SET(Global_25834[iParam0 /*23*/].f_11, 14))
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_65 && ((GAMEPLAY::IS_BIT_SET(Global_25834[iParam0 /*23*/].f_11, 10) || GAMEPLAY::IS_BIT_SET(Global_25834[iParam0 /*23*/].f_11, 8)) || GAMEPLAY::IS_BIT_SET(Global_25834[iParam0 /*23*/].f_11, 19)))
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (bLocal_66)
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if (iLocal_72 && GAMEPLAY::IS_BIT_SET(Global_25834[iParam0 /*23*/].f_11, 27))
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	if ((iLocal_73 && (GAMEPLAY::IS_BIT_SET(Global_25834[iParam0 /*23*/].f_11, 1) || GAMEPLAY::IS_BIT_SET(Global_25834[iParam0 /*23*/].f_11, 2))) || Global_25834[iParam0 /*23*/].f_16 == 1)
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iParam0 /*23*/].f_11), 18);
		return 1;
	}
	return 0;
}

int func_34()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_40())
	{
		if (!iLocal_67)
		{
			iLocal_67 = 1;
			iVar0 = 1;
		}
	}
	if (func_39())
	{
		if (!iLocal_68)
		{
			iLocal_68 = 1;
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		if (!iLocal_69)
		{
			iLocal_69 = 1;
			iVar0 = 1;
		}
	}
	if (func_37())
	{
		if (!iLocal_70)
		{
			iLocal_70 = 1;
			iVar0 = 1;
		}
	}
	bLocal_66 = false;
	if (Global_31885 != iLocal_71)
	{
		iLocal_71 = Global_31885;
		if (!bLocal_66)
		{
			bLocal_66 = true;
			iVar0 = 1;
		}
	}
	if (func_35())
	{
		if (!iLocal_73)
		{
			iLocal_73 = 1;
			iVar0 = 1;
		}
	}
	iLocal_64 = func_1();
	if (iLocal_64 != iLocal_63)
	{
		iLocal_63 = iLocal_64;
		iLocal_65 = 1;
		iVar0 = 1;
	}
	iLocal_46 = bLocal_45;
	if (func_9(130))
	{
		bLocal_45 = true;
	}
	if (func_9(131))
	{
		bLocal_45 = false;
	}
	if (bLocal_45 != iLocal_46)
	{
		if (!iLocal_72)
		{
			iVar0 = 1;
		}
		iLocal_72 = 1;
	}
	return iVar0;
}

int func_35()
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0))
	{
		return 0;
	}
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	if (iLocal_51 != iVar0)
	{
		iLocal_51 = iVar0;
		if (iVar0 == 0 || func_36(iVar0))
		{
			bLocal_50 = true;
		}
		else
		{
			bLocal_50 = false;
		}
		return 1;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (Global_30[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_37()
{
	if (iLocal_52 != func_20(0))
	{
		iLocal_52 = func_20(0);
		return 1;
	}
	return 0;
}

bool func_38()
{
	bool bVar0;
	
	bVar0 = Global_31886;
	Global_31886 = 0;
	if (bVar0)
	{
	}
	return bVar0;
}

int func_39()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != iLocal_49)
	{
		iLocal_49 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		return 1;
	}
	return 0;
}

int func_40()
{
	if (Global_36117 != 15)
	{
		return 0;
	}
	if (TIME::GET_CLOCK_HOURS() != iLocal_48)
	{
		iLocal_48 = TIME::GET_CLOCK_HOURS();
		return 1;
	}
	return 0;
}

void func_41()
{
	iLocal_65 = 0;
	bLocal_66 = false;
	iLocal_67 = 0;
	iLocal_68 = 0;
	iLocal_69 = 0;
	iLocal_70 = 0;
	iLocal_71 = 0;
	iLocal_72 = 0;
	iLocal_73 = 0;
}

void func_42()
{
	if (func_43(0) == 1 && !func_31(6))
	{
		func_7(112, 1, 0);
		func_7(113, 1, 0);
		func_7(114, 1, 0);
	}
}

int func_43(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_330[iParam0 /*6*/];
}

void func_44()
{
	if (func_43(0) == 1 && !func_31(6))
	{
		func_7(156, 1, 0);
		func_7(157, 1, 0);
		func_7(161, 1, 0);
		func_7(160, 1, 0);
		func_7(158, 1, 0);
		func_11(158);
		func_7(159, 1, 0);
		func_11(159);
	}
}

void func_45(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 2))
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 2);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar0 /*23*/].f_11), 2);
	}
	if (Global_25831 == 1)
	{
		Global_25832 = 1;
	}
	Global_25831 = 1;
	GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 18);
}

void func_46(int iParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	StringCopy(&(Global_25834[iVar0 /*23*/].f_20), sParam1, 8);
	if (UI::DOES_BLIP_EXIST(Global_25834[iVar0 /*23*/].f_19))
	{
		UI::SET_BLIP_NAME_FROM_TEXT_FILE(Global_25834[iVar0 /*23*/].f_19, sParam1);
	}
}

char* func_47(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_48(iParam0, 0);
			break;
		
		case 8:
			return func_48(iParam0, 0);
			break;
		
		case 9:
			return func_48(iParam0, 0);
			break;
		
		case 10:
			return func_48(iParam0, 0);
			break;
		
		case 11:
			return func_48(iParam0, 0);
			break;
		
		case 12:
			return func_48(iParam0, 0);
			break;
		
		case 13:
			return func_48(iParam0, 0);
			break;
		
		case 14:
			return func_48(iParam0, 0);
			break;
		
		case 15:
			return func_48(iParam0, 0);
			break;
		
		case 16:
			return func_48(iParam0, 0);
			break;
		
		case 17:
			return func_48(iParam0, 0);
			break;
		
		case 18:
			return func_48(iParam0, 0);
			break;
		
		case 19:
			return func_48(iParam0, 0);
			break;
		
		case 20:
			return func_48(iParam0, 0);
			break;
		
		case 21:
			return func_48(iParam0, 0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_48(iParam0, 0);
			break;
		
		case 40:
			return func_48(iParam0, 0);
			break;
		
		case 41:
			return func_48(iParam0, 0);
			break;
		
		case 42:
			return func_48(iParam0, 0);
			break;
		
		case 43:
			return func_48(iParam0, 0);
			break;
		
		case 44:
			return func_48(iParam0, 0);
			break;
		
		case 45:
			return func_48(iParam0, 0);
			break;
		
		case 46:
			return "SB_AMU";
			break;
		
		case 47:
			return "SB_AMU";
			break;
		
		case 48:
			return "SB_AMU";
			break;
		
		case 49:
			return "SB_AMU";
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
				
				case 12:
					return "S_MO_HA";
				
				case 13:
					return "S_MO_AOC";
				
				case 14:
					return "S_MO_AOC";
					break;
				
				case 15:
					return "S_MO_AOC";
					break;
				
				case 16:
					return "S_MO_AOC";
					break;
				
				case 17:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		case 49:
			return 48;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_50()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

