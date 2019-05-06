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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	struct<16> Local_53 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<16> Local_69 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_85 = 0;
	int iLocal_86 = 0;
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	float fLocal_102 = 0f;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	float fLocal_110 = 0f;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_114 = { 0f, 0f, 0f };
	float fLocal_117 = 0f;
	int iLocal_118 = 0;
	float fLocal_119 = 0f;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_45 = { 500f, 500f, 500f };
	iLocal_96 = -1;
	iLocal_97 = 2050;
	iLocal_98 = -1;
	iLocal_99 = -1;
	sLocal_101 = "CC_SUBSTR";
	fLocal_102 = 125f;
	iLocal_103 = 1;
	iLocal_105 = 263;
	fLocal_117 = 4f;
	fLocal_119 = 0f;
	vLocal_90 = { ScriptParam_0.f_1[0 /*3*/] };
	vLocal_90 = { vLocal_90 };
	iLocal_86 = iLocal_86;
	Local_69 = { Local_69 };
	bVar0 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_111(1);
	}
	uLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iLocal_95 = 0;
	func_109(&Global_104721, 0);
	func_108();
	if (func_107(uLocal_94, 1))
	{
		iLocal_100 = 10;
	}
	else
	{
		iLocal_100 = 9;
	}
	while (!Global_31887)
	{
		SYSTEM::WAIT(0);
	}
	if (!func_107(uLocal_94, 8))
	{
		if (!func_105(iLocal_100))
		{
			if (func_104(0, iLocal_99))
			{
				func_111(0);
			}
			else
			{
				func_111(1);
			}
		}
	}
	if (iLocal_99 != -1)
	{
		if (!func_104(0, iLocal_99))
		{
			func_111(1);
		}
	}
	if (func_107(uLocal_94, 8388608))
	{
		func_111(1);
	}
	if (func_107(uLocal_94, 524288) && (func_103() && !func_102()))
	{
		func_111(1);
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_107(uLocal_94, 4194304))
	{
		if (iLocal_105 != 263)
		{
			func_101(iLocal_105, 1, 0);
			iLocal_105 = 263;
		}
		func_100(10);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_86))
	{
		if (func_99() && !Global_105117)
		{
			func_98(1);
		}
		else if (Global_105117)
		{
		}
	}
	while (true)
	{
		if ((!func_97() && !func_96()) && !func_95())
		{
			func_111(1);
		}
		uLocal_85 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (func_107(uLocal_94, 1048576))
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_85, 0))
			{
				func_111(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_85) && !ENTITY::IS_ENTITY_DEAD(uLocal_85, 0))
		{
			vLocal_87 = { ENTITY::GET_ENTITY_COORDS(uLocal_85, 1) };
			fLocal_93 = SYSTEM::VDIST2(vLocal_87, ScriptParam_0.f_1[0 /*3*/]);
			fLocal_93 = fLocal_93;
			vLocal_111 = { vLocal_87 };
			vLocal_114 = { ScriptParam_0.f_1[0 /*3*/] };
			vLocal_111.z = 0f;
			vLocal_114.z = 0f;
			fLocal_110 = SYSTEM::VDIST2(vLocal_111, vLocal_114);
			switch (iLocal_95)
			{
				case 0:
					if (func_105(iLocal_100) || (func_107(uLocal_94, 16) && !func_107(uLocal_94, 524288)))
					{
						STREAMING::REQUEST_MODEL(iLocal_118);
						iLocal_98 = -1;
						func_94();
						func_100(1);
					}
					else
					{
						if (fLocal_110 > (fLocal_102 * fLocal_102))
						{
							if (iLocal_105 != 263)
							{
								func_101(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
							func_100(10);
						}
						if ((vLocal_87.z - ScriptParam_0.f_1[0 /*3*/].f_2) > 500f)
						{
						}
					}
					break;
				
				case 1:
					if (func_93() && STREAMING::HAS_MODEL_LOADED(iLocal_118))
					{
						iLocal_103 = iLocal_103;
						func_100(3);
					}
					else
					{
						func_94();
					}
					break;
				
				case 3:
					if (NETWORK::NETWORK_IS_IN_SESSION())
					{
						func_111(1);
						return;
					}
					if (!func_105(iLocal_100))
					{
						if (!func_107(uLocal_94, 8))
						{
							bVar1 = true;
							if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_93232.f_3), &Local_69))
							{
								Local_69 = { Local_53 };
								bVar1 = false;
							}
							if (bVar1)
							{
								func_111(0);
								break;
							}
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_86) && (((fLocal_93 > (10f * 10f) && !CAM::IS_SPHERE_VISIBLE(ScriptParam_0.f_1[0 /*3*/], 5f)) || fLocal_93 > (80f * 80f)) || (!ENTITY::DOES_ENTITY_EXIST(iLocal_86) && CAM::IS_SCREEN_FADED_OUT())))
					{
						GAMEPLAY::CLEAR_AREA_OF_VEHICLES(ScriptParam_0.f_1[0 /*3*/], 8f, 0, 0, 0, 0, 0, 0);
						iLocal_86 = VEHICLE::CREATE_VEHICLE(iLocal_118, ScriptParam_0.f_1[0 /*3*/], fLocal_119, 1, 1, 0);
						func_92();
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_86, 1);
						bVar2 = false;
						if (func_91() && !bVar2)
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_86, 2);
							func_89(&uLocal_94, 32);
						}
					}
					else if (func_107(uLocal_94, 32))
					{
						if (!func_91())
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_86, 0))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_86, 1);
							}
							func_109(&uLocal_94, 32);
						}
					}
					if (!func_107(uLocal_94, 4))
					{
						func_88();
						func_87(&uLocal_94, 4);
					}
					if (fLocal_110 > (fLocal_102 * fLocal_102) && !Global_93266)
					{
						if (iLocal_105 != 263)
						{
							if (func_86(6) && !func_85(iLocal_105))
							{
							}
							else
							{
								func_101(iLocal_105, 1, 0);
								iLocal_105 = 263;
							}
						}
						func_100(10);
					}
					else
					{
						Local_69 = { Local_53 };
						bVar3 = !func_107(uLocal_94, 64);
						func_109(&uLocal_94, 128);
						if (!func_84(3) && !Global_93266)
						{
							if (func_107(uLocal_94, 2097152))
							{
								if ((!func_107(uLocal_94, 1) || !ENTITY::DOES_ENTITY_EXIST(func_83())) && !Global_93266)
								{
									func_100(10);
									break;
								}
							}
						}
						if (func_107(uLocal_94, 524288) && (func_103() && !func_102()))
						{
							func_111(1);
						}
						if (func_82())
						{
							func_111(1);
						}
						if ((!func_74(6) || Global_105117) || func_73())
						{
							bVar3 = false;
						}
						if (func_107(uLocal_94, 1))
						{
							if (!func_72())
							{
								func_89(&uLocal_94, 128);
								bVar3 = false;
							}
						}
						if (func_71(1))
						{
							bVar3 = false;
						}
						if (Global_71205)
						{
							bVar3 = false;
						}
						if (func_70())
						{
							bVar3 = false;
						}
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
						{
							bVar3 = false;
						}
						if (func_69() || func_68(8, -1))
						{
							bVar3 = false;
						}
						if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (!PLAYER::IS_PLAYER_SCRIPT_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							bVar3 = false;
						}
						if (func_67(0) || func_66())
						{
							bVar3 = false;
						}
						if (bVar3)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_86, vLocal_90, fLocal_117, fLocal_117, fLocal_117, 0, 1, 0))
								{
									func_100(7);
								}
							}
							if (ENTITY::IS_ENTITY_DEAD(iLocal_86, 0))
							{
								func_89(&uLocal_94, 128);
								bVar3 = false;
							}
							else if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								func_89(&uLocal_94, 128);
								bVar3 = false;
							}
							else
							{
								iVar4 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER::PLAYER_PED_ID());
								if (bVar3)
								{
									if (iLocal_86 == iVar4)
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_85, ScriptParam_0.f_1[0 /*3*/], 4f, 4f, 2f, 0, 1, 0))
										{
											func_89(&uLocal_94, 128);
											bVar3 = false;
										}
									}
									else
									{
										func_89(&uLocal_94, 128);
										bVar3 = false;
									}
								}
							}
							if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								bVar3 = false;
							}
							if (bVar3)
							{
								CONTROLS::SET_INPUT_EXCLUSIVE(0, 51);
								if (func_65(iLocal_86))
								{
									if (iLocal_96 == -1)
									{
										func_64(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
										func_89(&uLocal_94, 2048);
									}
									else if (!func_107(uLocal_94, 2048) || !UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_63(&iLocal_96);
										func_109(&uLocal_94, 2048);
									}
									if (func_61(iLocal_96, 1))
									{
										sLocal_101 = sLocal_101;
										func_63(&iLocal_96);
										func_109(&uLocal_94, 2048);
										SCRIPT::REQUEST_SCRIPT(&Local_69);
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
										func_100(5);
									}
								}
								else
								{
									sLocal_101 = sLocal_101;
									func_63(&iLocal_96);
									func_109(&uLocal_94, 2048);
									SCRIPT::REQUEST_SCRIPT(&Local_69);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 56);
									func_100(5);
								}
							}
						}
						if (!bVar3)
						{
							if (iLocal_96 != -1)
							{
								func_63(&iLocal_96);
								func_109(&uLocal_94, 2048);
								UI::CLEAR_HELP(0);
							}
						}
					}
					func_54();
					break;
				
				case 5:
					CONTROLS::SET_INPUT_EXCLUSIVE(0, 51);
					if (SCRIPT::HAS_SCRIPT_LOADED(&Local_69))
					{
						if (iLocal_96 != -1)
						{
							func_63(&iLocal_96);
						}
						iVar5 = 2;
						bVar0 = false;
						if (func_107(uLocal_94, 1))
						{
							if (func_86(6) || func_86(7))
							{
								iVar5 = 1;
								bVar0 = true;
							}
						}
						if (iVar5 != 1)
						{
							iVar5 = func_51(&iLocal_98, 6, iLocal_100, 0, 0);
						}
						if (iVar5 == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_86, 0))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_86);
							}
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							}
							func_50();
							if (Global_37271)
							{
								func_41(PLAYER::PLAYER_PED_ID());
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 56);
							uLocal_52 = func_25();
							func_89(&uLocal_94, 2);
							func_100(6);
							func_21(&uLocal_107);
							if (iLocal_99 != -1)
							{
								func_20(iLocal_99);
								func_17(func_19(iLocal_99), 0, 0);
							}
						}
						else if (iVar5 == 2)
						{
							func_16();
						}
						else if (iVar5 == 0)
						{
							func_100(10);
						}
					}
					else
					{
						func_16();
					}
					break;
				
				case 6:
					if (!func_107(uLocal_94, 256))
					{
						if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_IN())
						{
							CONTROLS::SET_INPUT_EXCLUSIVE(0, 51);
						}
						else if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_89(&uLocal_94, 256);
						}
					}
					if (func_107(Global_104721, 262144))
					{
						func_109(&Global_104721, 262144);
						func_15();
					}
					if (func_107(uLocal_94, 2097152))
					{
						if (!func_84(3) && !SCRIPT::IS_THREAD_ACTIVE(uLocal_52))
						{
							func_100(10);
						}
					}
					if (!SCRIPT::IS_THREAD_ACTIVE(uLocal_52))
					{
						STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND((func_11(&uLocal_107) * 1000f)), iLocal_99, 0);
						func_10(&uLocal_107);
						func_109(&uLocal_94, 256);
						func_9();
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_86, 0))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_86);
								iLocal_86 = 0;
							}
						}
						if (bVar0)
						{
							func_109(&uLocal_94, 2);
						}
						else if (func_107(uLocal_94, 2))
						{
							if (func_107(Global_104721, 0))
							{
								func_8(&iLocal_98);
								iLocal_98 = -1;
								func_109(&uLocal_94, 2);
							}
							else
							{
								func_8(&iLocal_98);
								iLocal_98 = -1;
								func_109(&uLocal_94, 2);
							}
						}
						func_100(0);
						if (iLocal_99 != -1)
						{
							if (func_107(Global_104721, 0))
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_99), 0, Global_93269, 0);
								func_7(func_19(iLocal_99), 0, Global_93269, 1, 0);
							}
							else
							{
								STATS::PLAYSTATS_MISSION_CHECKPOINT(func_19(iLocal_99), 0, Global_93269, 0);
								func_7(func_19(iLocal_99), 0, Global_93269, 0, 0);
							}
						}
						func_4();
						func_109(&Global_104721, 0);
						if (func_107(uLocal_94, 16777216))
						{
							func_111(1);
						}
						if (iLocal_99 != -1)
						{
							if (Global_106070.f_9057)
							{
								if (!func_104(0, iLocal_99))
								{
									func_111(1);
								}
							}
						}
					}
					func_3();
					break;
				
				case 8:
					func_100(0);
					break;
				
				case 10:
					func_111(1);
					break;
				
				case 9:
					if (fLocal_110 > (fLocal_102 * fLocal_102))
					{
						if (iLocal_105 != 263)
						{
							func_101(iLocal_105, 1, 0);
							iLocal_105 = 263;
						}
						func_100(10);
					}
					break;
				
				case 7:
					func_2();
					if (iLocal_105 != 263)
					{
						func_101(iLocal_105, 0, 0);
					}
					if (iLocal_96 != -1)
					{
						func_63(&iLocal_96);
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sLocal_101))
					{
						if (func_1(sLocal_101))
						{
							UI::CLEAR_HELP(1);
						}
					}
					func_100(4);
					break;
				
				case 4:
					if ((iLocal_104 % 150) == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_106 == 2)
							{
								if (iLocal_106 == 2)
								{
									if (func_105(iLocal_100) && func_104(0, iLocal_99))
									{
										func_108();
										if (iLocal_105 != 263)
										{
											func_101(iLocal_105, 1, 0);
										}
										func_100(0);
									}
								}
							}
							else if (iLocal_106 == 0)
							{
								if (fLocal_110 > (fLocal_102 * fLocal_102))
								{
									if (iLocal_105 != 263)
									{
										func_101(iLocal_105, 1, 0);
										iLocal_105 = 263;
									}
									func_100(10);
								}
							}
							else if (iLocal_106 == 1)
							{
								if (fLocal_110 > ((80f + 5f) * (80f + 5f)))
								{
									func_108();
									if (iLocal_105 != 263)
									{
										func_101(iLocal_105, 1, 0);
									}
									func_100(0);
								}
							}
						}
						else
						{
							func_101(iLocal_105, 1, 0);
						}
					}
					else
					{
						iLocal_104++;
					}
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

bool func_1(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_2()
{
}

void func_3()
{
}

void func_4()
{
	var uVar0;
	var uVar1;
	
	uVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1697.183f, 3279.226f, 41.7283f, 1.5897f, 0f, 146.8519f, 50f, 1, 2);
	uVar1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1697.755f, 3280.423f, 41.7708f, -9.1434f, 0f, 168.0244f, 50f, 0, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uVar1, uVar0, 3650, 1, 1);
	CAM::SET_CINEMATIC_MODE_ACTIVE(0);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_86 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_86, 1);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_86, 1);
			AI::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_86, 1, 1);
	func_5(&uLocal_120);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_120))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_120);
	}
	while (CAM::IS_CAM_INTERPOLATING(uVar0) || CAM::IS_CAM_INTERPOLATING(uVar1))
	{
		UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
		SYSTEM::WAIT(0);
	}
	CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
	if (CAM::DOES_CAM_EXIST(uVar0))
	{
		CAM::DESTROY_CAM(uVar0, 0);
	}
	if (CAM::DOES_CAM_EXIST(uVar1))
	{
		CAM::DESTROY_CAM(uVar1, 0);
	}
}

void func_5(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!func_6(uVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(uVar0, 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uVar0, 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uVar0, 0);
		}
	}
}

int func_6(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(uParam0))
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

void func_7(char* sParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Global_90397))
	{
		return;
	}
	if (GAMEPLAY::COMPARE_STRINGS(sParam0, &Global_90397, 0, -1) != 0)
	{
		return;
	}
	STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, uParam2, iParam3, iParam4, Global_87504);
	StringCopy(&Global_90397, "", 64);
}

void func_8(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_36079)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_36078 = 0;
	Global_36080 = 0;
	Global_36117 = 15;
	Global_56178 = 0;
	Global_56179 = 0;
}

void func_9()
{
	vector3 vVar0[24];
	
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (GAMEPLAY::IS_PS3_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::_NETWORK_SET_RICH_PRESENCE_2(0, &cVar0);
	}
}

void func_10(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_11(var uParam0)
{
	if (func_14(uParam0))
	{
		if (func_13(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_12(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_12(bool bParam0)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(GAMEPLAY::GET_GAME_TIMER()) / 1000f);
}

bool func_13(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_14(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

int func_15()
{
	return 1;
}

void func_16()
{
}

void func_17(char* sParam0, int iParam1, int iParam2)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Global_90397))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_90397, 0, 0, 0, 1, 0);
		StringCopy(&Global_90397, "", 64);
	}
	StringCopy(&Global_90397, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, iParam1, iParam2, func_18(0));
}

int func_18(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71453, 0);
}

char* func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OJBJ";
			break;
		
		case 1:
			return "MGDT";
			break;
		
		case 2:
			return "MGGF";
			break;
		
		case 3:
			return "OJHU";
			break;
		
		case 4:
			return "MGOR";
			break;
		
		case 5:
			return "MGPS";
			break;
		
		case 6:
			return "MGRP";
			break;
		
		case 7:
			return "MGSEA";
			break;
		
		case 8:
			return "MGSTR";
			break;
		
		case 9:
			return "MGSC";
			break;
		
		case 10:
			return "MGSP";
			break;
		
		case 11:
			return "MGSRm";
			break;
		
		case 12:
			return "OJTX";
			break;
		
		case 13:
			return "MGTN";
			break;
		
		case 14:
			return "OJTW";
			break;
		
		case 15:
			return "OJDA";
			break;
		
		case 16:
			return "OJDG";
			break;
		
		case 17:
			return "MGTR";
			break;
		
		case 18:
			return "MGYG";
			break;
		
		case 19:
			return "MGCR";
			break;
	}
	return "INVALID!";
}

void func_20(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (GAMEPLAY::IS_PS3_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::_NETWORK_SET_RICH_PRESENCE_2(8, &cVar1);
	}
}

void func_21(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_24(uParam0);
	}
	else
	{
		func_22(uParam0);
	}
}

void func_22(var uParam0)
{
	func_23(uParam0, 0f);
}

void func_23(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_12(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_24(var uParam0)
{
	if (!func_14(uParam0))
	{
		func_22(uParam0);
	}
}

var func_25()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (func_1(sLocal_101))
	{
		UI::CLEAR_HELP(1);
	}
	if (STREAMING::IS_IPL_ACTIVE("airfield"))
	{
		STREAMING::REMOVE_IPL("airfield");
	}
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (((((ENTITY::DOES_ENTITY_EXIST(iVar0) && iVar0 != iLocal_86) && !ENTITY::IS_ENTITY_DEAD(iVar0, 0)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("stunt")) && VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, 0)) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("cargobob"))
	{
		uVar1 = VEHICLE::GET_CLOSEST_VEHICLE(1694.736f, 3276.483f, 41.2979f, 5f, joaat("stunt"), 16384);
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar1, 1, 0);
		}
		func_27(1689.662f, 3274.546f, 40.00918f, 1696.669f, 3271.265f, 42.80674f, 7.25f, 1673.428f, 3267.02f, 40.0898f, 108.5236f, 1, 1, 1, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar1);
		}
		if (func_26(&uLocal_120))
		{
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
	}
	uVar2 = SYSTEM::START_NEW_SCRIPT(&Local_53, iLocal_97);
	SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_53);
	return uVar2;
}

int func_26(var uParam0)
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!func_6(uVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(uVar0, PLAYER::PLAYER_PED_ID(), vLocal_45, 0, 1, 0))
			{
				VEHICLE::SET_LAST_DRIVEN_VEHICLE(uVar0);
				ENTITY::SET_ENTITY_COLLISION(uVar0, 0, 0);
				ENTITY::SET_ENTITY_VISIBLE(uVar0, 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(uVar0, 1);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 1);
				*uParam0 = uVar0;
				return 1;
			}
		}
	}
	return 0;
}

void func_27(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	func_28(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}

void func_28(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, var uParam10, vector3 vParam11, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	var uVar14;
	int iVar15;
	
	if (bParam15)
	{
		bParam15 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 0);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (bParam18)
			{
				func_40(uVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar0, vParam0, vParam3, fParam6, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				vVar10 = { ENTITY::GET_ENTITY_COORDS(uVar0, 1) };
				if ((vVar10.z > vParam0.z && vVar10.z < vParam3.z) || (vVar10.z > vParam3.z && vVar10.z < vParam0.z))
				{
					if (func_37(uVar0, vParam0, vParam3, fParam6))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(uVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) != 0)
					{
						if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vParam0 + vParam3 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(uVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16)
			{
				if (func_30(uVar0, func_32(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_29(vParam11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
					{
						iVar13 = ENTITY::GET_ENTITY_MODEL(uVar0);
						VEHICLE::_0xDF7E3EEB29642C38(uVar0, &vVar4, &vVar7);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar13))
						{
							vParam11.x = (vParam11.x + 3f);
							vParam11.y = (vParam11.y + 3f);
						}
						if (((iVar13 == joaat("zentorno") || iVar13 == joaat("btype")) || iVar13 == joaat("dubsta3")) || iVar13 == joaat("monster"))
						{
							vParam11 = { vParam11 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo"))
						{
							vParam11 = { vParam11 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((vVar7.x - vVar4.x) > vParam11.x)
						{
							bVar2 = false;
						}
						else if ((vVar7.y - vVar4.y) > vParam11.y)
						{
							bVar2 = false;
						}
						else if ((vVar7.z - vVar4.z) > vParam11.z)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
				{
					if (bVar2)
					{
						GAMEPLAY::CLEAR_AREA_OF_VEHICLES(vParam7, 5f, 0, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(uVar0, uParam10);
						ENTITY::SET_ENTITY_COORDS(uVar0, vParam7, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uVar0, 1084227584);
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(uVar0, 0, 1, 0);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(uVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uVar0, 1), 1, 0, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&uVar0);
					}
				}
			}
			if (bParam14)
			{
				GAMEPLAY::CLEAR_ANGLED_AREA_OF_VEHICLES(vParam0, vParam3, fParam6, 0, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 0);
			}
			uVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uVar14) && !PED::IS_PED_INJURED(uVar14))
			{
				ENTITY::SET_ENTITY_COORDS(uVar14, ENTITY::GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(uVar0));
			if (iVar15 <= 2)
			{
				uVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uVar14) && !PED::IS_PED_INJURED(uVar14))
				{
					ENTITY::SET_ENTITY_COORDS(uVar14, ENTITY::GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4)
			{
				uVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uVar14) && !PED::IS_PED_INJURED(uVar14))
				{
					ENTITY::SET_ENTITY_COORDS(uVar14, ENTITY::GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
				}
				uVar14 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 2, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uVar14) && !PED::IS_PED_INJURED(uVar14))
				{
					ENTITY::SET_ENTITY_COORDS(uVar14, ENTITY::GET_ENTITY_COORDS(uVar14, 1), 1, 0, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&uVar0);
		}
	}
}

int func_29(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_30(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_31(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, uParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_31(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_32()
{
	func_33();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_33()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_36(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_35(PLAYER::PLAYER_PED_ID());
			if (func_34(iVar0) && (!func_86(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_34(Global_106070.f_2355.f_539.f_4301))
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

bool func_34(int iParam0)
{
	return iParam0 < 3;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)
{
	if (func_34(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_37(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18[4];
	struct<2> Var31;
	struct<2> Var34;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		vParam1.z = vParam4.z;
		vVar0 = { func_39(vParam1 - vParam4) };
		vVar3 = { vVar0 };
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = { vParam1 - vVar0 * FtoV((fParam7 / 2f)) };
		vVar9 = { vParam1 + vVar0 * FtoV((fParam7 / 2f)) };
		vVar12 = { vParam4 - vVar0 * FtoV((fParam7 / 2f)) };
		vVar15 = { vParam4 + vVar0 * FtoV((fParam7 / 2f)) };
		GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(uParam0), &Var31, &Var34);
		vVar18[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var31, Var31.f_1, 0f) };
		vVar18[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var31, Var34.f_1, 0f) };
		vVar18[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var34, Var31.f_1, 0f) };
		vVar18[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0, Var34, Var34.f_1, 0f) };
		if (((((((((((((((func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) || func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15)) || func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15)) || func_38(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12)) || func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9)) || func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15)) || func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15)) || func_38(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12)) || func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9)) || func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15)) || func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15)) || func_38(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12)) || func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9)) || func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15)) || func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15)) || func_38(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12))
		{
			return 1;
		}
	}
	return 0;
}

int func_38(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_39(vector3 vParam0)
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

void func_40(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(uParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(uParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0, 500f);
			}
		}
	}
}

void func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_49(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_37058[iVar0 /*5*/];
		func_44(1, iVar1, 1);
		return;
	}
	iVar2 = func_43(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_42(iVar2);
}

void func_42(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37032[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37032[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_37269 = 0;
		}
	}
	Global_37032[iParam0 /*5*/] = 13;
	Global_37032[iParam0 /*5*/].f_1 = 0;
	Global_37032[iParam0 /*5*/].f_2 = 0;
	Global_37032[iParam0 /*5*/].f_3 = 0;
	Global_37032[iParam0 /*5*/].f_4 = 0;
	Global_37031 = (Global_37031 - 1);
	if (Global_37031 < 0)
	{
		Global_37031 = 0;
	}
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_37032[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_44(int iParam0, int iParam1, int iParam2)
{
	func_45(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_45(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_47(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_46();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37139[iVar0 /*6*/] = iParam0;
	Global_37139[iVar0 /*6*/].f_1 = iParam1;
	Global_37139[iVar0 /*6*/].f_2 = iParam2;
	Global_37139[iVar0 /*6*/].f_3 = iParam3;
	Global_37139[iVar0 /*6*/].f_4 = iParam4;
	Global_37139[iVar0 /*6*/].f_5 = iParam5;
}

int func_46()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37139[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_47(int iParam0, int iParam1, int iParam2)
{
	if (func_48(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_48(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37139[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37139[iVar0 /*6*/])
			{
				if (iParam1 == Global_37139[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_37058[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_37058[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_50()
{
	if (Global_3188[0 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[0 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3188[1 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[1 /*2811*/][0 /*281*/].f_259 = 0;
	}
	if (Global_3188[2 /*2811*/][0 /*281*/].f_259 == 2)
	{
		Global_3188[2 /*2811*/][0 /*281*/].f_259 = 0;
	}
	GAMEPLAY::CLEAR_BIT(&Global_2383, 25);
	GAMEPLAY::SET_BIT(&Global_2384, 11);
}

int func_51(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_90805.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_53(0))
		{
			return 0;
		}
		Global_36081++;
		*iParam0 = Global_36081;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17228.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_36117 = iParam2;
		Global_36079 = *iParam0;
		Global_36080 = iParam4;
		Global_36078 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_36078 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_36078)
			{
				if (Global_36084[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_36079 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_105(iParam2))
		{
			return 0;
		}
		if (Global_36078 == 8)
		{
			return 0;
		}
		Global_36081++;
		*iParam0 = Global_36081;
		Global_36084[Global_36078 /*4*/] = Global_36081;
		Global_36084[Global_36078 /*4*/].f_1 = iParam1;
		Global_36084[Global_36078 /*4*/].f_2 = iParam2;
		Global_36084[Global_36078 /*4*/].f_3 = 0;
		Global_36078++;
		if (iParam4 != 0)
		{
			func_52(iParam0, iParam4);
		}
	}
	return 2;
}

void func_52(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_36078 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_36078)
	{
		if (Global_36084[iVar0 /*4*/] == *uParam0)
		{
			Global_36084[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

int func_53(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_105(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_54()
{
	if (((!ENTITY::DOES_ENTITY_EXIST(iLocal_86) || ENTITY::IS_ENTITY_DEAD(iLocal_86, 0)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 1)) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_86) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_86, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_86, 2);
		}
		func_98(0);
		if (func_1(sLocal_101))
		{
			UI::CLEAR_HELP(1);
		}
		return;
	}
	if (fLocal_93 < (fLocal_117 * fLocal_117))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_86, 1);
		func_60(sLocal_101);
		func_55(0);
	}
	else if (func_1(sLocal_101))
	{
		UI::CLEAR_HELP(1);
	}
}

void func_55(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_67(0))
		{
			func_56(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_2384, 2);
	}
}

void func_56(int iParam0)
{
	if (func_59())
	{
		return;
	}
	if (Global_14681)
	{
		func_58(0, 0);
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
	if (!func_57())
	{
		Global_14513.f_1 = 3;
	}
}

int func_57()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_58(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_67(0))
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

bool func_59()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

void func_60(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

int func_61(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_62(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_67(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/] == 1 && Global_36827[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_36827[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_36827[iVar0 /*32*/].f_5 = 1;
			Global_36827[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_36827[iVar0 /*32*/] == 0)
			{
			}
			if (Global_36827[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

int func_62(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_63(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_62(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

void func_64(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_63(iParam0);
		}
		return;
	}
	if (!*iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/] = 1;
			Global_36827[iVar0 /*32*/].f_1 = Global_37028;
			Global_37028++;
			Global_36827[iVar0 /*32*/].f_4 = 0;
			Global_36827[iVar0 /*32*/].f_29 = 0;
			Global_36827[iVar0 /*32*/].f_5 = 0;
			Global_36827[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_36827[iVar0 /*32*/].f_8), sParam2, 16);
			Global_36827[iVar0 /*32*/].f_6 = iParam3;
			Global_36827[iVar0 /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_36827[iVar0 /*32*/].f_7 = 0;
			Global_36827[iVar0 /*32*/].f_3 = iParam5;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_36827[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_36827[iVar0 /*32*/].f_13), sParam4, 64);
				Global_36827[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_36827[iVar0 /*32*/].f_12 = 0;
				Global_36827[iVar0 /*32*/].f_30 = 0;
			}
			*iParam0 = Global_36827[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_65(int iParam0)
{
	return 0;
	return 1;
}

var func_66()
{
	return Global_68494;
}

int func_67(int iParam0)
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

var func_68(int iParam0, int iParam1)
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

bool func_69()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17367.f_5873 + 100;
}

int func_70()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_71(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

int func_72()
{
	return 1;
}

bool func_73()
{
	int iVar0;
	bool bVar1;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
	if (((iVar0 == 0 || iVar0 == joaat("weapon_unarmed")) || iVar0 == joaat("weapon_electric_fence")) || iVar0 == joaat("gadget_parachute"))
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return ((((bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 69)) || (bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 70))) || (bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 68))) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
	}
	return (((((bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 24)) || (bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 25))) || (bVar1 && CONTROLS::IS_CONTROL_PRESSED(0, 47))) || PED::_0xDCCA191DF9980FD7(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()));
}

int func_74(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_32();
				if (!func_34(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_81()) || Global_105117) || Global_25461) || func_80()) || func_68(8, -1)) || func_79()) || func_78()) || func_77()) || func_70()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_81()) || Global_25461) || func_80()) || func_68(8, -1)) || func_77()) || func_79()) || func_78()) || func_70()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_81()) || Global_105117) || Global_25461) || func_80()) || func_68(8, -1)) || func_77()) || func_79()) || func_78()) || func_70()) || Global_106070.f_7660.f_919[iVar0] == 5) || Global_36664 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_81()) || Global_105117) || Global_25461) || func_80()) || func_68(8, -1)) || func_79()) || func_78()) || func_70()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_81() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_68(8, -1)) || func_70()) || func_76()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_68(8, -1) || func_79()) || func_78()) || func_76()) || func_75())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_81()) || Global_25461) || func_80()) || func_68(8, -1)) || func_78()) || func_77()) || func_70()) || Global_106070.f_7660.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_81()) || func_78()) || Global_105117) || Global_25461) || func_80()) || Global_37271) || func_68(8, -1)) || func_77()) || func_76()) || func_70()) || Global_106070.f_7660.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_81()) || Global_105117) || Global_25461) || func_80()) || func_68(8, -1)) || func_77()) || func_76()) || func_79()) || func_78()) || func_70())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_75()
{
	return Global_93271.f_1;
}

int func_76()
{
	if (Global_90249 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_84115[Global_90249 /*34*/].f_15, 13);
	}
	return 0;
}

int func_77()
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

bool func_78()
{
	return Global_93284.f_328 > 0;
}

bool func_79()
{
	return Global_93284.f_327 > 0;
}

var func_80()
{
	return Global_1312857;
}

int func_81()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_90805.f_44 == 1;
	}
	return 0;
}

int func_82()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("stripperhome")) > 0)
	{
		return 1;
	}
	return 0;
}

var func_83()
{
	return Global_89159;
}

int func_84(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_86(6) || func_86(7))
			{
				return 1;
			}
			else
			{
				return func_84(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_105(5))
			{
				if (func_74(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_85(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return UI::DOES_BLIP_EXIST(Global_25834[iVar0 /*23*/].f_19);
}

bool func_86(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_87(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_88()
{
}

void func_89(var uParam0, int iParam1)
{
	func_90(uParam0, iParam1);
}

void func_90(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_91()
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	return 1;
}

void func_92()
{
	iLocal_48++;
}

int func_93()
{
	return 1;
}

void func_94()
{
}

int func_95()
{
	return 0;
}

int func_96()
{
	return 1;
}

int func_97()
{
	return 1;
}

void func_98(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else if (iParam0 == 0)
	{
	}
	iLocal_106 = iParam0;
	iLocal_104 = 0;
	iLocal_95 = 7;
}

int func_99()
{
	vector3 vVar0;
	float fVar3;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = SYSTEM::VDIST2(vVar0, vLocal_90);
	if (fVar3 < (10f * 10f))
	{
		return 1;
	}
	else if (fVar3 < (80f * 80f))
	{
		if (CAM::IS_SPHERE_VISIBLE(vLocal_90, 5f))
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

void func_100(int iParam0)
{
	iLocal_95 = iParam0;
}

void func_101(int iParam0, bool bParam1, bool bParam2)
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

int func_102()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (GAMEPLAY::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_103()
{
	if (Global_90249 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_84115[Global_90249 /*34*/].f_15, 20);
	}
	return 0;
}

int func_104(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	uVar0 = GAMEPLAY::IS_BIT_SET(Global_106070.f_9057.f_99.f_219[iParam0], iParam1);
	return uVar0;
}

bool func_105(int iParam0)
{
	return func_106(iParam0, Global_36117);
}

int func_106(int iParam0, int iParam1)
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

bool func_107(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_108()
{
	StringCopy(&Local_53, "stunt_plane_races", 64);
	iLocal_118 = joaat("stunt");
	fLocal_119 = 154.8464f;
	fLocal_102 = 209f;
	iLocal_105 = 95;
	GAMEPLAY::CLEAR_AREA_OF_VEHICLES(vLocal_114, 10f, 0, 0, 0, 0, 0, 0);
	iLocal_99 = 10;
	sLocal_101 = "PLAY_STUNT";
	fLocal_117 = 6f;
	iLocal_97 = 25000;
}

void func_109(var uParam0, int iParam1)
{
	func_110(uParam0, iParam1);
}

void func_110(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_111(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_105 != 263)
		{
			func_101(iLocal_105, 0, 0);
		}
	}
	func_63(&iLocal_96);
	if (func_107(uLocal_94, 2))
	{
		func_4();
		func_109(&uLocal_94, 2);
		func_8(&iLocal_98);
	}
	iLocal_98 = -1;
	func_112();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_112()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_86, 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_86, 1, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_86);
			VEHICLE::DELETE_VEHICLE(&iLocal_86);
		}
	}
	func_109(&uLocal_94, 4);
	func_113();
	if (SCRIPT::IS_THREAD_ACTIVE(uLocal_52))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(uLocal_52, 3);
	}
	if (!GAMEPLAY::IS_STRING_NULL(&Local_69))
	{
		if (UI::GET_LENGTH_OF_LITERAL_STRING(&Local_69) != 0)
		{
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_69);
		}
	}
}

void func_113()
{
}

