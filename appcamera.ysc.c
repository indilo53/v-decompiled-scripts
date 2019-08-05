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
	char* sLocal_19[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_33[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_47 = 0;
	char* sLocal_48[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	bool bLocal_62 = 0;
	bool bLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_70 = { 0f, 0f, 0f };
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	float fLocal_77 = 0f;
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	float fLocal_114 = 0f;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	char cLocal_145[16] = "";
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	iLocal_59 = 1;
	bLocal_62 = true;
	bLocal_63 = true;
	fLocal_73 = 0f;
	fLocal_74 = 172f;
	fLocal_77 = 0.7f;
	iLocal_137 = 1200;
	iLocal_138 = 1200;
	iLocal_139 = 166;
	fLocal_157 = 0.5f;
	fLocal_158 = 0.85f;
	fLocal_159 = 0.5f;
	fLocal_160 = -0.25f;
	fLocal_161 = 0.25f;
	fLocal_162 = 0.3f;
	fLocal_163 = 0.3f;
	fLocal_164 = 0.075f;
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (UNK::_GET_CURRENT_LANGUAGE_ID() == 0)
	{
		fLocal_77 = 1f;
	}
	else
	{
		fLocal_77 = 0.7f;
	}
	if (!func_150())
	{
		Global_4268032 = 99;
		Global_4268033 = 99;
		iLocal_57 = 99;
	}
	else
	{
		Global_4268032 = 0;
		Global_4268033 = 0;
	}
	sLocal_19[0] = "No_Filter";
	sLocal_19[1] = "phone_cam1";
	sLocal_19[2] = "phone_cam2";
	sLocal_19[3] = "phone_cam3";
	sLocal_19[4] = "phone_cam4";
	sLocal_19[5] = "phone_cam5";
	sLocal_19[6] = "phone_cam6";
	sLocal_19[7] = "phone_cam7";
	sLocal_19[8] = "phone_cam8";
	sLocal_19[9] = "phone_cam9";
	sLocal_19[10] = "phone_cam10";
	sLocal_19[11] = "phone_cam11";
	sLocal_19[12] = "phone_cam12";
	sLocal_33[0] = "No_Border";
	sLocal_33[1] = "frame1";
	sLocal_33[2] = "frame2";
	sLocal_33[3] = "frame3";
	sLocal_33[4] = "frame4";
	sLocal_33[5] = "frame5";
	sLocal_33[6] = "frame6";
	sLocal_33[7] = "frame7";
	sLocal_33[8] = "frame8";
	sLocal_33[9] = "frame9";
	sLocal_33[10] = "frame10";
	sLocal_33[11] = "frame11";
	sLocal_33[12] = "frame12";
	sLocal_48[0] = "No_Expression";
	sLocal_48[1] = "mood_Aiming_1";
	sLocal_48[2] = "mood_Happy_1";
	sLocal_48[3] = "mood_smug_1";
	sLocal_48[4] = "mood_Injured_1";
	sLocal_48[5] = "mood_sulk_1";
	sLocal_48[6] = "mood_Angry_1";
	func_149();
	if (func_148(1, 1, !iLocal_64, 1))
	{
		iLocal_64 = 1;
	}
	func_147();
	uLocal_112 = AUDIO::GET_SOUND_ID();
	if (Global_14498 == 0)
	{
		fLocal_96 = 0.207f;
		fLocal_97 = 0.158f;
		fLocal_98 = 0.207f;
		fLocal_99 = 0.335f;
	}
	else
	{
		fLocal_96 = 0.24f;
		fLocal_97 = 0.258f;
		fLocal_98 = 0.24f;
		fLocal_99 = 0.435f;
	}
	Global_16899 = 0;
	Global_16900 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			Global_16899 = 1;
		}
		if (GRAPHICS::_IS_NIGHTVISION_ACTIVE())
		{
			Global_16899 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER::PLAYER_PED_ID()), 0))
		{
			Global_16899 = 1;
		}
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			Global_16899 = 1;
		}
		if (PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()))
		{
			Global_16899 = 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (iLocal_131 == 1)
			{
				Global_16899 = 1;
			}
			uLocal_149 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if ((((ENTITY::GET_ENTITY_MODEL(uLocal_149) == joaat("rhino") || ENTITY::GET_ENTITY_MODEL(uLocal_149) == joaat("cutter")) || ENTITY::GET_ENTITY_MODEL(uLocal_149) == joaat("submersible")) || ENTITY::GET_ENTITY_MODEL(uLocal_149) == joaat("khanjali")) || (ENTITY::GET_ENTITY_MODEL(uLocal_149) == joaat("barrage") && VEHICLE::_0xE33FFA906CE74880(uLocal_149, func_146(PLAYER::PLAYER_PED_ID(), 1))))
			{
				Global_16899 = 1;
			}
			else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uLocal_149, -1, 0) == PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(uLocal_149) > 0f)
				{
					if (!Global_71590)
					{
						if (!func_145())
						{
							AI::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), uLocal_149, 6, 4000);
						}
					}
				}
			}
		}
	}
	if (Global_71590)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 0);
		}
	}
	GAMEPLAY::CLEAR_BIT(&Global_2423, 21);
	func_144(0);
	GAMEPLAY::SET_BIT(&Global_2423, 17);
	if (Global_14495 == 0)
	{
		func_143();
	}
	else
	{
		uLocal_140 = unk_0x67D02A194A2FC2BD("camera_gallery");
		uLocal_141 = unk_0x67D02A194A2FC2BD("instructional_buttons");
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_141))
		{
			SYSTEM::WAIT(0);
			UNK1::_0xEB2D525B57F42B40();
			CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
		}
		if (Global_71590)
		{
			iLocal_144 = 2;
		}
		else
		{
			switch (func_142())
			{
				case 0:
					iLocal_144 = 2;
					break;
				
				case 2:
					iLocal_144 = 2;
					break;
				
				case 3:
					iLocal_144 = 2;
					break;
				}
		}
		func_141(uLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
		func_140(uLocal_140, "CLOSE_SHUTTER");
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "DISPLAY_VIEW");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(16);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	vLocal_78 = { Global_14513 };
	vLocal_81 = { Global_14506[Global_14498 /*3*/] };
	Global_16900 = 1;
	iLocal_118 = 1;
	iLocal_119 = 1;
	iLocal_120 = 1;
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	if (Global_14553.f_1 > 3)
	{
		Global_14553.f_1 = 8;
	}
	if (iLocal_131 == 0)
	{
		GAMEPLAY::CLEAR_BIT(&Global_2425, 3);
	}
	func_138();
	GRAPHICS::_SET_UI_LAYER(4);
	if (NETWORK::_0x76BF03FADBF154F5())
	{
	}
	if (Global_4456448.f_155714)
	{
	}
	if (Global_4456448.f_155716 == 1)
	{
		iLocal_156 = 1;
	}
	if (iLocal_156 == 1)
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14522);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, 186);
		UNK1::_0xEB2D525B57F42B40();
		CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
		if (func_137())
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
			{
				GAMEPLAY::SET_BIT(&Global_4269308, 2);
				func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (!Global_106565.f_14045.f_81)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 13))
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_2424, 28))
					{
						if ((iLocal_128 && iLocal_131 == 0) && !func_137())
						{
							GAMEPLAY::SET_BIT(&Global_4269308, 13);
							Global_106565.f_14045.f_81 = 1;
							func_136("CELL_FOC_HLP", -1);
						}
					}
				}
			}
		}
		if (!UI::IS_PAUSE_MENU_ACTIVE())
		{
			if (Global_4456448.f_155713 == 0 && Global_4456448.f_155714 == 0)
			{
				UI::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
			}
			UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			func_135();
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			CONTROLS::DISABLE_CONTROL_ACTION(0, 44, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 91, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 92, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
			if (iLocal_150 == 0)
			{
				CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14526);
			}
			CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14523);
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && !func_137())
			{
				iLocal_130 = 1;
				Global_14553.f_1 = 3;
				GAMEPLAY::SET_GAME_PAUSED(0);
			}
			if (GAMEPLAY::IS_STUNT_JUMP_IN_PROGRESS())
			{
				Global_14553.f_1 = 3;
				GAMEPLAY::SET_GAME_PAUSED(0);
			}
			if (GAMEPLAY::IS_BIT_SET(Global_2424, 3))
			{
				Global_14553.f_1 = 3;
				GAMEPLAY::SET_GAME_PAUSED(0);
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_123())
				{
					Global_14553.f_1 = 3;
					GAMEPLAY::SET_GAME_PAUSED(0);
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
				{
					Global_14553.f_1 = 3;
					GAMEPLAY::SET_GAME_PAUSED(0);
				}
				if ((PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					if (func_122())
					{
					}
					else
					{
						Global_14553.f_1 = 3;
						GAMEPLAY::SET_GAME_PAUSED(0);
					}
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					if (Global_71590 == 1)
					{
						Global_14553.f_1 = 3;
					}
				}
				if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PLAYER::PLAYER_PED_ID()) > 0.3f)
					{
						Global_14553.f_1 = 3;
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_121();
					uLocal_149 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(uLocal_149) < 0f)
					{
						func_118(0);
					}
					if (iLocal_115 == 1)
					{
						if (iLocal_116 == 1)
						{
							if (!CAM::_0x1F2300CB7FA7B7F6())
							{
								func_118(0);
							}
						}
						else if (!CAM::_0x1F2300CB7FA7B7F6())
						{
							iLocal_116 = 1;
							SYSTEM::WAIT(0);
							UNK1::_0xEB2D525B57F42B40();
						}
					}
				}
				else if (Global_71590 == 0)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_2423, 18))
					{
						func_117();
						if ((Global_14553 == 0 || Global_14553 == 1) || Global_14553 == 2)
						{
							if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
								{
								}
								else
								{
									Global_14553.f_1 = 3;
									GAMEPLAY::SET_GAME_PAUSED(0);
								}
							}
						}
					}
				}
			}
			if (iLocal_142)
			{
				func_116();
			}
			if (Global_14553.f_1 < 4)
			{
			}
			if (iLocal_153 == 0)
			{
				if (iLocal_103 == 0)
				{
					if (iLocal_104 == 0)
					{
						if (iLocal_111 == 0)
						{
							if (Global_14553.f_1 > 3)
							{
								if (iLocal_150)
								{
									func_114();
									if (Global_16904 == 0 && Global_16901 == 6)
									{
										UI::CLEAR_FLOATING_HELP(0, 1);
										UI::_REMOVE_LOADING_PROMPT();
										iLocal_150 = 0;
										func_113();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
										{
											vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
										}
										func_112();
										iLocal_109++;
										if (func_150())
										{
											func_141(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										else
										{
											func_141(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
										}
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_107();
									}
									if (Global_16901 == 0)
									{
										iLocal_150 = 0;
										UI::_REMOVE_LOADING_PROMPT();
										if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
										{
											vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
										}
										func_106();
										iLocal_132 = 0;
										iLocal_133 = 0;
										iLocal_134 = 0;
										iLocal_127 = 0;
										func_107();
										if (func_150())
										{
											if (Global_4268033 == 0)
											{
												if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
												{
													func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
										else if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
										{
											func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
										}
										func_105();
										func_104(1);
									}
								}
								else if (Global_14553.f_1 != 9)
								{
									if (Global_16900 == 1)
									{
										if (Global_16899 == 0)
										{
											func_103();
										}
									}
									else if ((Global_3031 - Global_3030) > Global_3032)
									{
										if (CAM::IS_SCREEN_FADED_OUT() && func_102())
										{
											if (func_101() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												GAMEPLAY::SET_GAME_PAUSED(0);
												AUDIO::STOP_SOUND(uLocal_112);
												iLocal_143 = 0;
												if (Global_16899 == 0)
												{
													func_112();
													Global_16899 = 1;
													UI::CLEAR_FLOATING_HELP(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_100(0, 0);
													func_104(0);
													iLocal_115 = 0;
													func_99();
													iLocal_142 = 0;
													func_97(0, 1);
													func_141(Global_14534, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
													func_95(1);
												}
											}
										}
										if (func_94(2, Global_14521, 0))
										{
											if (func_137())
											{
												if (Global_1657075 || Global_1312791)
												{
												}
												else if (func_101() && iLocal_127)
												{
												}
												else if (!func_102())
												{
													if (iLocal_127 == 0)
													{
														CAM::DO_SCREEN_FADE_OUT(500);
														func_93(1);
													}
												}
											}
											else if (func_101() && iLocal_127)
											{
											}
											else if (iLocal_127 == 0)
											{
												GAMEPLAY::SET_GAME_PAUSED(0);
												AUDIO::STOP_SOUND(uLocal_112);
												iLocal_143 = 0;
												if (Global_16899 == 0)
												{
													func_112();
													Global_16899 = 1;
													UI::CLEAR_FLOATING_HELP(0, 1);
													iLocal_128 = 0;
													iLocal_118 = 1;
													iLocal_119 = 1;
													iLocal_120 = 1;
													iLocal_121 = 1;
													iLocal_122 = 1;
													iLocal_123 = 1;
													func_100(0, 0);
													func_104(0);
													iLocal_115 = 0;
													func_99();
													iLocal_142 = 0;
													func_97(0, 1);
													func_141(Global_14534, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
											}
										}
									}
									if (iLocal_101 == 0)
									{
										if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_92();
											iLocal_101 = 1;
										}
									}
									else if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_92();
										iLocal_101 = 0;
									}
									if (iLocal_102 == 0)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_2423, 28))
										{
											func_92();
											iLocal_102 = 1;
										}
									}
									else if (!GAMEPLAY::IS_BIT_SET(Global_2423, 28))
									{
										func_92();
										iLocal_102 = 0;
									}
									if (Global_16899 == 1)
									{
										func_85();
									}
									else if (Global_14553.f_1 > 4)
									{
										if (iLocal_124 == 1 && iLocal_125 == 0)
										{
											func_81();
										}
										if (iLocal_124 == 0 && iLocal_125 == 1)
										{
											func_106();
											if (iLocal_136 == 1 || iLocal_136 == 0)
											{
												if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
													{
														func_140(uLocal_140, "CLOSE_SHUTTER");
														iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
														while (GAMEPLAY::GET_GAME_TIMER() < (iLocal_135 + iLocal_137) && Global_14553.f_1 > 3)
														{
															func_135();
															func_116();
															func_80();
															UNK1::_0xEB2D525B57F42B40();
															SYSTEM::WAIT(0);
														}
													}
												}
												if (func_150())
												{
													if (Global_4268033 == 0)
													{
														if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
														{
															func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
														}
													}
												}
												else if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
												{
													func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
												}
												func_116();
												func_135();
												iLocal_132 = 0;
												iLocal_133 = 0;
												iLocal_134 = 0;
												iLocal_127 = 0;
												func_107();
												iLocal_136 = 0;
												func_140(uLocal_140, "OPEN_SHUTTER");
											}
											func_105();
											func_104(1);
											func_79();
										}
									}
									if (iLocal_143 == 1)
									{
										func_76();
									}
									if (iLocal_129)
									{
										if (SYSTEM::TIMERB() > 500)
										{
											iLocal_128 = 1;
											iLocal_129 = 0;
											GAMEPLAY::SET_BIT(&Global_2423, 18);
											if (Global_16899 == 0)
											{
												func_97(1, 1);
											}
										}
									}
									if (iLocal_127 == 0)
									{
										if (iLocal_128 && Global_16899 == 0)
										{
											if ((iLocal_130 == 0 && iLocal_125 == 0) && Global_16902 == 0)
											{
												func_10();
											}
										}
										else
										{
											func_80();
										}
									}
									else if (iLocal_124 == 0)
									{
										func_5();
									}
								}
							}
						}
					}
				}
				else
				{
					if (Global_14553.f_1 > 3)
					{
						if (Global_16900 == 1)
						{
							if (Global_16899 == 0)
							{
								func_103();
							}
						}
					}
					func_4();
				}
			}
			else
			{
				if (iLocal_155 == 1)
				{
					UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_FW_1", iLocal_152, "CELL_CAM_FW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_155 == 2)
				{
					UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_NO_SC_CAMERAPHONE", iLocal_152, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_155 == 6)
				{
					UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "SC_ERROR_BANNED", iLocal_152, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_155 == 3)
				{
					UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "ERROR_UPDATE_SC_CAMERAPHONE", iLocal_152, "", 0, -1, "", "", 1, 0);
				}
				if (iLocal_155 == 7)
				{
					if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION())
					{
						UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3X", iLocal_152, "", 0, -1, "", "", 1, 0);
					}
					if (GAMEPLAY::IS_PS3_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
					{
						UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_3P", iLocal_152, "", 0, -1, "", "", 1, 0);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_TEMP_30", iLocal_152, "", 0, -1, "", "", 1, 0);
					}
				}
				if (iLocal_155 == 4)
				{
					UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "CELL_CAM_CCW_1", iLocal_152, "CELL_CAM_CCW_2", 0, -1, "", "", 1, 0);
				}
				if (iLocal_155 == 5)
				{
					iVar0 = NETWORK::_0x9614B71F8ADB982B();
					switch (iVar0)
					{
						case -1:
							UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_I", iLocal_152, "", 0, -1, "", "", 1, 0);
							break;
						
						case 0:
							UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", 0, -1, "", "", 1, 0);
							break;
						
						case 1:
							UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_C", iLocal_152, "", 0, -1, "", "", 1, 0);
							break;
						
						case 2:
							UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_T", iLocal_152, "", 0, -1, "", "", 1, 0);
							break;
						
						default:
							UI::SET_WARNING_MESSAGE_WITH_HEADER("CELL_CAM_ALERT", "HUD_AGE_P", iLocal_152, "", 0, -1, "", "", 1, 0);
							break;
						}
				}
				if (iLocal_155 == 0)
				{
				}
				if (iLocal_155 == 2 || iLocal_155 == 3)
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_97(0, 1);
					}
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						iLocal_154 = 1;
					}
					if (iLocal_154 == 1)
					{
						if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_97(0, 1);
							iLocal_154 = 0;
							UI::_0x9E778248D6685FE0("Gallery");
							UI::_0x75D3691713C3B05A();
						}
					}
				}
				else if (iLocal_155 == 7)
				{
					if (GAMEPLAY::IS_ORBIS_VERSION())
					{
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_97(0, 1);
							iLocal_111 = 0;
						}
					}
					else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						iLocal_153 = 0;
						iLocal_155 = 0;
						func_97(0, 1);
						iLocal_111 = 0;
					}
					if (!GAMEPLAY::IS_ORBIS_VERSION())
					{
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, Global_14525))
						{
							iLocal_153 = 0;
							iLocal_155 = 0;
							func_97(0, 1);
							if (GAMEPLAY::IS_BIT_SET(Global_2424, 28))
							{
								iLocal_111 = 0;
							}
							else
							{
								iLocal_111 = 2;
							}
							iLocal_107 = GAMEPLAY::GET_GAME_TIMER();
							PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(1);
						}
					}
				}
				else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201))
				{
					iLocal_153 = 0;
					iLocal_155 = 0;
					func_97(0, 1);
				}
			}
		}
		iLocal_108 = GAMEPLAY::GET_GAME_TIMER();
		if (func_137())
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
			{
				GAMEPLAY::SET_BIT(&Global_4269308, 2);
				func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		if (func_3() || iLocal_130)
		{
			func_1(0);
			func_100(0, 0);
			func_104(0);
			iLocal_115 = 0;
			func_99();
			Global_16899 = 0;
			Global_16900 = 0;
			Global_16902 = 0;
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_140);
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_141);
			GAMEPLAY::SET_GAME_PAUSED(0);
			if (Global_14727 == 1)
			{
				GAMEPLAY::SET_BIT(&Global_2423, 17);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&Global_2423, 17);
			}
			UI::CLEAR_FLOATING_HELP(0, 1);
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
			GAMEPLAY::CLEAR_BIT(&Global_2425, 3);
			GAMEPLAY::CLEAR_BIT(&Global_4269308, 3);
			UI::RESET_HUD_COMPONENT_VALUES(15);
			Global_16903 = 1;
			AUDIO::STOP_SOUND(uLocal_112);
			AUDIO::RELEASE_SOUND_ID(uLocal_112);
			UI::_REMOVE_LOADING_PROMPT();
			func_99();
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			unk_0x375A706A5C2FD084(0);
			MOBILE::_0x1B0B4AEED5B9B41C(1f);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
			}
			if (Global_4268033 > 0 && Global_4268033 < 13)
			{
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_33[Global_4268033]);
			}
			GAMEPLAY::CLEAR_BIT(&Global_2423, 18);
			func_97(0, 1);
			if (func_148(0, 1, iLocal_64, 1))
			{
				iLocal_64 = 0;
			}
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
}

void func_1(int iParam0)
{
	if (func_2())
	{
		if (iParam0 == 1)
		{
			MOBILE::_SET_PHONE_LEAN(1);
		}
		else if (Global_14553.f_1 > 3)
		{
			MOBILE::_SET_PHONE_LEAN(0);
		}
	}
}

int func_2()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71590)
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
	if (Global_4269586 || iVar2)
	{
		return 1;
	}
	return 1;
}

int func_3()
{
	if (((Global_14553.f_1 == 1 || Global_14553.f_1 == 3) || Global_14553.f_1 == 0) || Global_14497 == 1)
	{
		Global_14540 = 1;
		return 1;
	}
	return 0;
}

void func_4()
{
	iLocal_106 = GRAPHICS::_0xF5BED327CEA362B1(0);
	switch (iLocal_106)
	{
		case 0:
			iLocal_103 = 0;
			iLocal_109 = GRAPHICS::_GET_NUMBER_OF_PHOTOS();
			iLocal_110 = GRAPHICS::_GET_MAXIMUM_NUMBER_OF_PHOTOS_2();
			if (iLocal_104 == 1)
			{
				if (iLocal_127 == 0)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140))
					{
						if (func_150())
						{
							if (Global_4268033 == 0)
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
								{
									func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
								}
							}
							func_141(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
						else
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
							{
								func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
							func_141(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140))
				{
					func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
					func_141(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
				}
				iLocal_104 = 0;
			}
			UI::_REMOVE_LOADING_PROMPT();
			break;
		
		case 1:
			if (!UI::_IS_LOADING_PROMPT_BEING_DISPLAYED())
			{
				UI::_BEGIN_TEXT_COMMAND_BUSY_STRING("CELL_SPINNER2");
				UI::_END_TEXT_COMMAND_BUSY_STRING(1);
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Global_2424, 28))
			{
				iLocal_103 = 0;
				iLocal_109 = 0;
				iLocal_110 = 0;
			}
			else
			{
				Global_14553.f_1 = 3;
				Global_16903 = 1;
			}
			UI::_REMOVE_LOADING_PROMPT();
			break;
	}
}

void func_5()
{
	if (func_94(2, Global_14522, 0))
	{
		func_1(0);
		if (GAMEPLAY::IS_BIT_SET(Global_2424, 28))
		{
			GAMEPLAY::SET_GAME_PAUSED(0);
			SYSTEM::SETTIMERB(0);
			func_113();
			iLocal_127 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_112();
			iLocal_136 = 1;
		}
		else if (func_9())
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2424, 14))
			{
				func_136("CELL_299", -1);
			}
			else
			{
				func_112();
				func_8();
			}
		}
		else
		{
			iLocal_153 = 1;
			func_97(1, 1);
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2423, 22))
	{
		func_1(0);
		while (SYSTEM::TIMERA() < 2000)
		{
			SYSTEM::WAIT(0);
			func_135();
			UNK1::_0xEB2D525B57F42B40();
			func_80();
			func_121();
			func_116();
		}
		GAMEPLAY::SET_GAME_PAUSED(0);
		func_113();
		SYSTEM::SETTIMERB(0);
		iLocal_127 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		func_107();
		func_112();
	}
	if (func_94(2, Global_14526, 0))
	{
		func_1(0);
		if (func_101() || GAMEPLAY::IS_BIT_SET(Global_2424, 28))
		{
		}
		else
		{
			GAMEPLAY::SET_GAME_PAUSED(0);
			SYSTEM::SETTIMERB(0);
			iLocal_136 = 1;
			func_113();
			iLocal_127 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_112();
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2423, 28))
	{
		if (func_94(2, Global_14525, 0))
		{
			func_1(0);
			GAMEPLAY::SET_GAME_PAUSED(0);
			GRAPHICS::_0x1072F115DAB0717E(0, 0);
			SYSTEM::WAIT(0);
			UNK1::_0xEB2D525B57F42B40();
			func_135();
			SYSTEM::WAIT(0);
			UNK1::_0xEB2D525B57F42B40();
			func_135();
			GRAPHICS::_0xD801CC02177FA3F1();
			GRAPHICS::_0x6A12D88881435DCA();
			Global_16903 = 1;
			iLocal_143 = 0;
			iLocal_126 = 0;
			func_97(0, 1);
			Global_16899 = 1;
			UI::CLEAR_FLOATING_HELP(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_100(0, 0);
			func_104(0);
			iLocal_115 = 0;
			func_99();
			if (!Global_2528542.f_6218)
			{
				GAMEPLAY::SET_BIT(&Global_2423, 9);
			}
			iLocal_142 = 0;
			func_141(Global_14534, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_6()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Accept", &Global_14542, 1);
		func_7();
	}
}

void func_7()
{
	if (func_2())
	{
		MOBILE::_MOVE_FINGER(5);
	}
}

void func_8()
{
	iLocal_150 = 1;
	Global_16904 = 1;
	UI::CLEAR_FLOATING_HELP(0, 1);
}

int func_9()
{
	if (iLocal_107 == iLocal_108)
	{
		if (iLocal_105)
		{
			iLocal_105 = 1;
		}
	}
	if (Global_14553.f_1 < 4)
	{
		return 0;
	}
	if (iLocal_109 == iLocal_110 || iLocal_109 > iLocal_110)
	{
		iLocal_155 = 1;
		iLocal_152 = 2;
		return 0;
	}
	return 1;
}

void func_10()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar0 = 179;
		iVar1 = 21;
	}
	else
	{
		iVar0 = 228;
		iVar1 = 229;
	}
	if (iLocal_131)
	{
		func_71();
		func_67();
		func_66();
		fLocal_73 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		fLocal_74 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		if (iLocal_133 == 0)
		{
			if (CONTROLS::IS_CONTROL_PRESSED(2, iVar0) && !CONTROLS::IS_CONTROL_PRESSED(2, iVar1))
			{
				iLocal_133 = 1;
				func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (GAMEPLAY::IS_BIT_SET(Global_2423, 28))
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
					func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), func_63());
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				else
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
					func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_CAM_SELFIE_2");
				}
				func_62();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_77);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!CONTROLS::IS_CONTROL_PRESSED(2, iVar0) || CONTROLS::IS_CONTROL_PRESSED(2, iVar1))
		{
			iLocal_133 = 0;
			func_107();
		}
		if (iLocal_134 == 0)
		{
			if (CONTROLS::IS_CONTROL_PRESSED(2, iVar1) && !CONTROLS::IS_CONTROL_PRESSED(2, iVar0))
			{
				iLocal_134 = 1;
				func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				if (GAMEPLAY::IS_BIT_SET(Global_2423, 28))
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
					func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), func_63());
				}
				else if (!func_137())
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
					func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
				}
				else
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
					func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
				}
				func_61();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_77);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
		}
		else if (!CONTROLS::IS_CONTROL_PRESSED(2, iVar1) || CONTROLS::IS_CONTROL_PRESSED(2, iVar0))
		{
			iLocal_134 = 0;
			func_107();
		}
	}
	else
	{
		CONTROLS::ENABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (CONTROLS::_0x6CD79468A1E595C6(2))
	{
		func_107();
	}
	func_121();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
	}
	if (func_137())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
		{
			GAMEPLAY::SET_BIT(&Global_4269308, 2);
			func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
	if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 183) && iLocal_156 == 0) && !func_137())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
				{
					GAMEPLAY::CLEAR_BIT(&Global_4269308, 2);
					if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
					{
						func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					GAMEPLAY::SET_BIT(&Global_4269308, 2);
					func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
		}
	}
	if (iLocal_131)
	{
		if (iLocal_132 == 1)
		{
			iLocal_132 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_FOCUS_LOCK");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
			func_60("CELL_FOCUS");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		if (!func_59(14))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_4269308, 10))
			{
				if ((Global_71590 == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_58())
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_FOCUS_LOCK");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(UI::_GET_LABEL_TEXT(&Global_4270293));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GAMEPLAY::CLEAR_BIT(&Global_4269308, 10);
				}
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(Global_4269308, 10))
		{
			GAMEPLAY::CLEAR_BIT(&Global_4269308, 10);
		}
		iLocal_66 = GAMEPLAY::GET_GAME_TIMER();
		if ((iLocal_66 - iLocal_65) > 1500)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_70 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vLocal_70, vLocal_67, 1) > 5f)
				{
					Global_14553.f_1 = 3;
					GAMEPLAY::SET_GAME_PAUSED(0);
				}
				iLocal_65 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
	}
	else if (iLocal_132)
	{
		if (!CONTROLS::IS_CONTROL_PRESSED(0, 182) && !func_137())
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
			iLocal_132 = 0;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_FOCUS_LOCK");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
			func_60("CELL_FOCUS");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	else if (CONTROLS::IS_CONTROL_PRESSED(0, 182) && !func_137())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
		iLocal_132 = 1;
		if (!func_59(14))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_FOCUS_LOCK");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
			func_60("CELL_FOCUS");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
	if (func_150())
	{
		if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 186) && iLocal_156 == 0) && !func_137())
		{
			if (iLocal_131)
			{
				iLocal_57++;
				if (iLocal_57 > 0 && iLocal_57 < 7)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						if (Global_14553 == 0)
						{
							iVar4 = 0;
							iVar2 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0);
							if (iVar2 == 20 || iVar2 == 14)
							{
								iVar4 = 1;
							}
							iVar3 = PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 1);
							if (iVar3 != -1)
							{
								iVar4 = 1;
							}
							if (iVar4 == 1)
							{
								if ((((iLocal_57 == 2 || iLocal_57 == 3) || iLocal_57 == 4) || iLocal_57 == 8) || iLocal_57 == 9)
								{
									if (iVar2 == -1 && iVar3 > -1)
									{
										if (iLocal_57 == 3)
										{
											PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
										}
									}
								}
								else
								{
									PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
								}
							}
							else
							{
								PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
							}
						}
						else
						{
							PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), sLocal_48[iLocal_57], 0);
						}
					}
				}
				if (iLocal_57 == 7 || iLocal_57 > 7)
				{
					iLocal_57 = 0;
				}
				if (iLocal_57 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
						PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
					}
				}
			}
		}
		if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 185) && iLocal_156 == 0) && !func_137())
		{
			if (iLocal_131)
			{
				if (bLocal_62 == 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
					if (iLocal_61 == 0)
					{
						iLocal_61 = 1;
						iLocal_60 = 1;
						if (GAMEPLAY::ARE_STRINGS_EQUAL(sLocal_19[Global_4268032], "phone_cam12DUMMY"))
						{
						}
						else
						{
							MOBILE::_0xA2CCBE62CD4C91A4(1);
							unk_0x375A706A5C2FD084(1);
						}
					}
					else
					{
						iLocal_61 = 0;
						iLocal_60 = 0;
						MOBILE::_0xA2CCBE62CD4C91A4(0);
						unk_0x375A706A5C2FD084(0);
					}
				}
			}
			else if (bLocal_63 == 1)
			{
				if (iLocal_60 == 0)
				{
					iLocal_60 = 1;
					iLocal_61 = 1;
					MOBILE::_0xA2CCBE62CD4C91A4(1);
					unk_0x375A706A5C2FD084(1);
				}
				else
				{
					iLocal_60 = 0;
					iLocal_61 = 0;
					MOBILE::_0xA2CCBE62CD4C91A4(0);
					unk_0x375A706A5C2FD084(0);
				}
			}
		}
	}
	if (iLocal_59 == 1 && !func_137())
	{
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 172) && iLocal_156 == 0)
		{
			if (func_150())
			{
				Global_4268033++;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
			}
			if (Global_4268033 == 13)
			{
				func_104(0);
				MOBILE::_0x1B0B4AEED5B9B41C(1f);
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_33[(Global_4268033 - 1)]);
				Global_4268033 = 0;
				func_57();
				if (iLocal_47 == 1)
				{
					GAMEPLAY::CLEAR_BIT(&Global_4269308, 2);
					iLocal_47 = 0;
					func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
			}
			if (Global_4268033 > 0 && Global_4268033 < 13)
			{
				iLocal_59 = 0;
				iLocal_58 = 0;
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sLocal_33[Global_4268033], 0);
			}
		}
	}
	if (Global_4268033 > 0)
	{
		if (iLocal_59 == 0)
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sLocal_33[Global_4268033]))
			{
				iLocal_58 = 1;
				iLocal_59 = 1;
				if (!GRAPHICS::_0xBCEDB009461DA156())
				{
					func_104(1);
				}
				if (iLocal_47 == 0)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
					{
						iLocal_47 = 1;
					}
				}
				GAMEPLAY::SET_BIT(&Global_4269308, 2);
				func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				GRAPHICS::_0x27FEB5254759CDE3(sLocal_33[Global_4268033], 0);
			}
		}
		if (iLocal_58 == 1)
		{
			if (Global_4268033 == 1 || Global_4268033 == 3)
			{
			}
			if (Global_4268033 == 2 || Global_4268033 == 4)
			{
			}
		}
	}
	if ((CONTROLS::IS_CONTROL_JUST_PRESSED(0, 173) && iLocal_156 == 0) && !func_137())
	{
		if (func_150())
		{
			func_99();
			Global_4268032++;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
		}
		if (Global_4268032 == 13)
		{
			Global_4268032 = 0;
		}
		if (Global_4268032 == 0)
		{
			if (func_150())
			{
				func_99();
			}
		}
		else
		{
			func_105();
		}
		func_56();
	}
	if ((CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, 184) && iLocal_156 == 0) && !func_137())
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Navigate", &Global_14542, 1);
				func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_140(uLocal_140, "CLOSE_SHUTTER");
				iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
				while (GAMEPLAY::GET_GAME_TIMER() < (iLocal_135 + iLocal_139) && Global_14553.f_1 > 3)
				{
					func_135();
					func_116();
					func_80();
					UNK1::_0xEB2D525B57F42B40();
					SYSTEM::WAIT(0);
				}
				if (iLocal_131 == 0)
				{
					AUDIO::STOP_SOUND(uLocal_112);
					iLocal_131 = 1;
					func_55(1);
					func_54();
					GAMEPLAY::SET_BIT(&Global_2425, 3);
					iLocal_65 = GAMEPLAY::GET_GAME_TIMER();
				}
				else
				{
					iLocal_133 = 0;
					iLocal_134 = 0;
					func_55(0);
					iLocal_131 = 0;
					GAMEPLAY::CLEAR_BIT(&Global_2425, 3);
				}
				iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
				while (GAMEPLAY::GET_GAME_TIMER() < (iLocal_135 + iLocal_137) && Global_14553.f_1 > 3)
				{
					func_135();
					func_116();
					func_80();
					UNK1::_0xEB2D525B57F42B40();
					SYSTEM::WAIT(0);
				}
				func_140(uLocal_140, "OPEN_SHUTTER");
				if (func_150())
				{
					if (Global_4268033 == 0)
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
						{
							func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
					}
				}
				else if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
				{
					func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_116();
				func_135();
				if (GAMEPLAY::IS_BIT_SET(Global_2423, 28))
				{
					StringCopy(&cLocal_145, "CELL_296", 16);
					func_52();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_295", 16);
					func_27();
				}
			}
		}
	}
	if (iLocal_131 == 0)
	{
		if (iLocal_113 == 0)
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 40) || CONTROLS::IS_CONTROL_JUST_PRESSED(0, 41))
			{
				fLocal_114 = CAM::_GET_GAMEPLAY_CAM_ZOOM();
				if (fLocal_114 > 1f && fLocal_114 < 4.5f)
				{
					if (AUDIO::HAS_SOUND_FINISHED(uLocal_112))
					{
						AUDIO::PLAY_SOUND_FRONTEND(uLocal_112, "Camera_Zoom", &Global_14542, 1);
					}
				}
				else
				{
					AUDIO::STOP_SOUND(uLocal_112);
				}
				iLocal_113 = 1;
			}
		}
		else if (CONTROLS::IS_CONTROL_PRESSED(0, 40) || CONTROLS::IS_CONTROL_PRESSED(0, 41))
		{
			fLocal_114 = CAM::_GET_GAMEPLAY_CAM_ZOOM();
			if (fLocal_114 > 1f && fLocal_114 < 4.5f)
			{
				if (AUDIO::HAS_SOUND_FINISHED(uLocal_112))
				{
					AUDIO::PLAY_SOUND_FRONTEND(uLocal_112, "Camera_Zoom", &Global_14542, 1);
				}
			}
			else
			{
				AUDIO::STOP_SOUND(uLocal_112);
			}
		}
		else
		{
			AUDIO::STOP_SOUND(uLocal_112);
		}
	}
	if (func_94(2, Global_14522, 0))
	{
		uLocal_75 = CAM::GET_GAMEPLAY_CAM_RELATIVE_PITCH();
		uLocal_76 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
		GRAPHICS::_0x1072F115DAB0717E(0, 0);
		GAMEPLAY::SET_BIT(&Global_2423, 21);
		AUDIO::STOP_SOUND(uLocal_112);
		iLocal_127 = 1;
		func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_141(uLocal_140, "SHOW_REMAINING_PHOTOS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Camera_Shoot", &Global_14542, 1);
		func_140(uLocal_140, "CLOSE_SHUTTER");
		vLocal_84 = { -90.3f, 0f, 90f };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_84, 0);
		if (!func_150())
		{
			func_99();
		}
		Global_16902 = 1;
		UI::CLEAR_FLOATING_HELP(0, 1);
		while (Global_16901 < 6 && Global_14553.f_1 > 3)
		{
			func_135();
			func_116();
			func_80();
			func_121();
			UNK1::_0xEB2D525B57F42B40();
			SYSTEM::WAIT(0);
		}
		MOBILE::CELL_CAM_ACTIVATE(0, 0);
		if (Global_14495)
		{
			func_1(1);
		}
		iLocal_135 = GAMEPLAY::GET_GAME_TIMER();
		while (GAMEPLAY::GET_GAME_TIMER() < (iLocal_135 + iLocal_138) && Global_14553.f_1 > 3)
		{
			func_135();
			func_116();
			func_80();
			UNK1::_0xEB2D525B57F42B40();
			SYSTEM::WAIT(0);
		}
		SYSTEM::SETTIMERA(0);
		func_140(uLocal_140, "OPEN_SHUTTER");
		GAMEPLAY::CLEAR_BIT(&Global_2423, 21);
		func_107();
		if (Global_14553.f_1 > 3)
		{
			if (Global_71590)
			{
				func_20(1086, 1, -1);
				func_19();
				func_16(23, 0);
			}
			else
			{
				switch (func_11())
				{
					case 0:
						STATS::STAT_INCREMENT(joaat("sp0_no_photos_taken"), 1f);
						break;
					
					case 1:
						STATS::STAT_INCREMENT(joaat("sp1_no_photos_taken"), 1f);
						break;
					
					case 2:
						STATS::STAT_INCREMENT(joaat("sp2_no_photos_taken"), 1f);
						break;
				}
				func_19();
			}
			func_104(0);
		}
		func_116();
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2423, 28))
	{
		if (func_94(2, Global_14525, 0))
		{
			GRAPHICS::_0x1072F115DAB0717E(0, 0);
			SYSTEM::WAIT(0);
			UNK1::_0xEB2D525B57F42B40();
			func_135();
			SYSTEM::WAIT(0);
			UNK1::_0xEB2D525B57F42B40();
			func_135();
			GRAPHICS::_0xD801CC02177FA3F1();
			GRAPHICS::_0x6A12D88881435DCA();
			Global_16903 = 1;
			iLocal_143 = 0;
			iLocal_126 = 1;
			Global_16899 = 1;
			UI::CLEAR_FLOATING_HELP(0, 1);
			iLocal_128 = 0;
			iLocal_118 = 1;
			iLocal_119 = 1;
			iLocal_120 = 1;
			iLocal_121 = 1;
			iLocal_122 = 1;
			iLocal_123 = 1;
			func_6();
			iLocal_127 = 0;
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			func_100(0, 0);
			func_104(0);
			iLocal_115 = 0;
			func_99();
			if (!Global_2528542.f_6218)
			{
				GAMEPLAY::SET_BIT(&Global_2423, 9);
			}
			GAMEPLAY::SET_GAME_PAUSED(0);
			iLocal_142 = 0;
			func_141(Global_14534, "DISPLAY_VIEW", 16f, -1082130432, -1082130432, -1082130432, -1082130432);
		}
	}
}

int func_11()
{
	func_12();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_12()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_15(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_14(PLAYER::PLAYER_PED_ID());
			if (func_13(iVar0) && (!func_59(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_13(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_13(int iParam0)
{
	return iParam0 < 3;
}

int func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_15(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_15(int iParam0)
{
	if (func_13(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_16(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_18(iParam0, iParam1))
	{
		iVar0 = func_17();
		Global_2458506[iVar0] = iParam0;
	}
}

int func_17()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458506[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_18(int iParam0, var uParam1)
{
	if (Global_1312855)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312867) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_19()
{
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 1;
	iLocal_125 = 0;
	Global_14490 = { Global_14506[Global_14498 /*3*/] };
	func_97(0, 1);
	func_100(0, 0);
	func_104(0);
	iLocal_115 = 0;
	func_99();
	if (!GAMEPLAY::IS_BIT_SET(Global_2424, 28))
	{
		if (NETWORK::_0x76BF03FADBF154F5() == 0)
		{
			if (GAMEPLAY::IS_XBOX360_VERSION())
			{
				if (iLocal_117 == 0)
				{
					iLocal_117 = 1;
				}
			}
		}
	}
}

void func_20(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_24(iParam0, func_25(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_23(iParam0))
	{
		func_22(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_21(iParam0, iVar0, iParam2, 1);
	}
}

void func_21(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_25(uParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_25(uParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_25(uParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_25(uParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_25(uParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_25(uParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_25(uParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_25(uParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_25(uParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_25(uParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_25(uParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_25(uParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_25(uParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_25(uParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_25(uParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_25(uParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_25(uParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_25(uParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_25(uParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_25(uParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_25(uParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_25(uParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_25(uParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_25(uParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_25(uParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_25(uParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_25(uParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_25(uParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_25(uParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_25(uParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_25(uParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_25(uParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_25(uParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_25(uParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_25(uParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_25(uParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_25(uParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_25(uParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_25(uParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_25(uParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_25(uParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_25(uParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_25(uParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_25(uParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_25(uParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_25(uParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_25(uParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_23(int iParam0)
{
	if (Global_1382575)
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
			case 8956:
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
			case 8282:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8010:
				return 1;
				break;
			}
	}
	return 0;
}

int func_24(int iParam0, var uParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_25(uParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_25(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

var func_26()
{
	return Global_1312745;
}

void func_27()
{
	if (iLocal_156 == 1)
	{
		func_51();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		if (!func_137())
		{
			func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
			func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
		}
		else
		{
			func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
			func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
		}
		if (iLocal_131)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
				}
				else if ((Global_71590 == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_58())
				{
					func_49();
				}
				else
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_64(uLocal_141, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_150())
					{
						func_48(5f);
						func_47(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_64(uLocal_141, "SET_DATA_SLOT", 8f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 7f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!func_137())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
						func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
						func_64(uLocal_141, "SET_DATA_SLOT", 4f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
						if (!CONTROLS::_IS_INPUT_DISABLED(0))
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 210, 1), "CELL_284");
						}
						else
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::_0x80C2FD58D720C801(0, 29, 1), "CELL_284");
						}
					}
					if (!func_137())
					{
						if (func_150())
						{
							func_48(6f);
							func_47(7f);
							if (bLocal_63)
							{
								func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, 1), "CELL_FOCUS");
							}
							func_64(uLocal_141, "SET_DATA_SLOT", 8f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_150())
					{
						func_48(3f);
						func_47(4f);
						func_64(uLocal_141, "SET_DATA_SLOT", 8f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else
			{
				if (!func_137())
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (!func_137())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 4f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
						func_64(uLocal_141, "SET_DATA_SLOT", 5f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
						if (!CONTROLS::_IS_INPUT_DISABLED(0))
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 210, 1), "CELL_284");
						}
						else
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::_0x80C2FD58D720C801(0, 29, 1), "CELL_284");
						}
					}
					if (!func_137())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 6f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
					}
					if (!func_137())
					{
						if (func_150())
						{
							func_48(7f);
							func_47(8f);
							if (bLocal_63)
							{
								func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, 1), "CELL_FOCUS");
							}
							func_64(uLocal_141, "SET_DATA_SLOT", 9f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
				else
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_150())
					{
						func_48(3f);
						func_47(4f);
						func_64(uLocal_141, "SET_DATA_SLOT", 5f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_77);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_28(float fParam0)
{
	func_64(uLocal_141, "SET_DATA_SLOT", fParam0, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 174, 1), "CELL_ACTION");
}

int func_29(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_46(Global_4194378, Global_4194379))
		{
			if (iParam0 == 0 || !func_30(Global_4194378, Global_4194379, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_30(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	return func_31(PLAYER::PLAYER_PED_ID(), iParam0, iParam1, bParam2, bParam3, bParam4);
}

int func_31(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar6;
	var uVar12;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	
	if (func_45())
	{
		return 0;
	}
	uVar0 = 5;
	uVar6 = 5;
	uVar12 = 5;
	if (iParam1 == 0)
	{
		iVar21 = 3;
	}
	else if (bParam3)
	{
		iVar21 = 1;
	}
	else if (bParam4)
	{
		iVar21 = 2;
	}
	else
	{
		iVar21 = 0;
	}
	func_39(iParam1, iParam2, &uVar0, &uVar6, &uVar12, iVar21, bParam5);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(uParam0) == joaat("mp_f_freemode_01"))
		{
			iVar18 = func_38(uParam0);
			if (!iVar18 == -1)
			{
				if (func_37(&uVar0, iVar18))
				{
					return 1;
				}
			}
		}
		else
		{
			iVar19 = func_36(uParam0);
			if (!iVar19 == -1)
			{
				if (func_34(&uVar6, iVar19))
				{
					return 1;
				}
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar20 = func_33(uParam0);
			if (!iVar20 == 0)
			{
				if (func_32(&uVar12, iVar20))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_32(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_33(var uParam0)
{
	var uVar0;
	
	uVar0 = PED::GET_PED_DRAWABLE_VARIATION(uParam0, 1);
	return uVar0;
}

bool func_34(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET((*uParam0)[iVar0], (iParam1 - iVar0 * 32)))
	{
		return 1;
	}
	return 0;
}

var func_36(var uParam0)
{
	var uVar0;
	
	uVar0 = PED::GET_PED_PROP_INDEX(uParam0, 0);
	return uVar0;
}

bool func_37(var uParam0, int iParam1)
{
	return func_35(uParam0, iParam1);
}

var func_38(var uParam0)
{
	var uVar0;
	
	uVar0 = PED::GET_PED_PROP_INDEX(uParam0, 0);
	return uVar0;
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_44(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
		case 0:
			func_43(iParam0, iParam1, uParam2, uParam3, uParam4, iParam5, bParam6);
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 4, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 38, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 5:
				case 24:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 62, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 46:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 66, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 47:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 48:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 49:
					func_42(uParam3, 67, 1);
					func_42(uParam3, 68, 1);
					func_42(uParam3, 69, 1);
					func_42(uParam3, 70, 1);
					func_42(uParam3, 71, 1);
					func_42(uParam3, 72, 1);
					func_42(uParam3, 73, 1);
					func_42(uParam3, 74, 1);
					func_42(uParam3, 78, 1);
					func_42(uParam3, 79, 1);
					func_42(uParam3, 80, 1);
					func_42(uParam3, 81, 1);
					func_42(uParam3, 82, 1);
					func_42(uParam3, 91, 1);
					func_42(uParam3, 92, 1);
					func_40(uParam2, 66, 1);
					func_40(uParam2, 67, 1);
					func_40(uParam2, 68, 1);
					func_40(uParam2, 69, 1);
					func_40(uParam2, 70, 1);
					func_40(uParam2, 71, 1);
					func_40(uParam2, 72, 1);
					func_40(uParam2, 73, 1);
					func_40(uParam2, 77, 1);
					func_40(uParam2, 78, 1);
					func_40(uParam2, 79, 1);
					func_40(uParam2, 80, 1);
					func_40(uParam2, 81, 1);
					func_40(uParam2, 90, 1);
					func_40(uParam2, 91, 1);
					func_42(uParam3, 38, 1);
					func_42(uParam3, 47, 1);
					func_42(uParam3, 111, 1);
					func_40(uParam2, 37, 1);
					func_40(uParam2, 46, 1);
					func_40(uParam2, 110, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 124, 1);
					func_44(uParam4, 125, 1);
					func_44(uParam4, 126, 1);
					func_44(uParam4, 127, 1);
					func_44(uParam4, 128, 1);
					func_44(uParam4, 129, 1);
					func_44(uParam4, 130, 1);
					func_44(uParam4, 131, 1);
					func_44(uParam4, 132, 1);
					func_44(uParam4, 133, 1);
					func_44(uParam4, 136, 1);
					func_44(uParam4, 138, 1);
					func_44(uParam4, 139, 1);
					func_44(uParam4, 143, 1);
					func_44(uParam4, 144, 1);
					func_44(uParam4, 145, 1);
					func_44(uParam4, 147, 1);
					break;
				
				case 50:
				case 51:
				case 52:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 10:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 6, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 19, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 106, 1);
							func_42(uParam3, 114, 1);
							func_42(uParam3, 116, 1);
							func_42(uParam3, 117, 1);
							func_42(uParam3, 118, 1);
							func_42(uParam3, 119, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 105, 1);
							func_40(uParam2, 113, 1);
							func_40(uParam2, 114, 1);
							func_40(uParam2, 115, 1);
							func_40(uParam2, 116, 1);
							func_40(uParam2, 117, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 13:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 115, 1);
							func_44(uParam4, 116, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 16:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 4, 1);
							break;
						
						case 1:
							func_44(uParam4, 43, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 23:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 1:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
						
						case 2:
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_44(uParam4, 110, 1);
							func_44(uParam4, 112, 1);
							func_44(uParam4, 124, 1);
							func_44(uParam4, 125, 1);
							func_44(uParam4, 126, 1);
							func_44(uParam4, 127, 1);
							func_44(uParam4, 128, 1);
							func_44(uParam4, 129, 1);
							func_44(uParam4, 130, 1);
							func_44(uParam4, 131, 1);
							func_44(uParam4, 132, 1);
							func_44(uParam4, 133, 1);
							func_44(uParam4, 136, 1);
							func_44(uParam4, 138, 1);
							func_44(uParam4, 139, 1);
							func_44(uParam4, 143, 1);
							func_44(uParam4, 144, 1);
							func_44(uParam4, 145, 1);
							func_44(uParam4, 147, 1);
							break;
					}
					break;
				
				case 17:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 5, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 19:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_42(uParam3, 37, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 36, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 1:
							func_42(uParam3, 3, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 38, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 7, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 43, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
						
						case 2:
							func_42(uParam3, 1, 1);
							func_42(uParam3, 3, 1);
							func_42(uParam3, 4, 1);
							func_42(uParam3, 5, 1);
							func_42(uParam3, 7, 1);
							func_42(uParam3, 10, 1);
							func_42(uParam3, 54, 1);
							func_42(uParam3, 55, 1);
							func_42(uParam3, 56, 1);
							func_42(uParam3, 0, 1);
							func_42(uParam3, 12, 1);
							func_42(uParam3, 13, 1);
							func_42(uParam3, 15, 1);
							func_42(uParam3, 16, 1);
							func_42(uParam3, 48, 1);
							func_42(uParam3, 49, 1);
							func_42(uParam3, 17, 1);
							func_42(uParam3, 18, 1);
							func_42(uParam3, 50, 1);
							func_42(uParam3, 51, 1);
							func_42(uParam3, 52, 1);
							func_42(uParam3, 53, 1);
							func_42(uParam3, 62, 1);
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_42(uParam3, 20, 1);
							func_42(uParam3, 21, 1);
							func_42(uParam3, 25, 1);
							func_42(uParam3, 26, 1);
							func_42(uParam3, 27, 1);
							func_42(uParam3, 30, 1);
							func_42(uParam3, 31, 1);
							func_42(uParam3, 32, 1);
							func_42(uParam3, 33, 1);
							func_42(uParam3, 37, 1);
							func_42(uParam3, 39, 1);
							func_40(uParam2, 0, 1);
							func_40(uParam2, 1, 1);
							func_40(uParam2, 2, 1);
							func_40(uParam2, 3, 1);
							func_40(uParam2, 4, 1);
							func_40(uParam2, 5, 1);
							func_40(uParam2, 6, 1);
							func_40(uParam2, 7, 1);
							func_40(uParam2, 8, 1);
							func_40(uParam2, 9, 1);
							func_40(uParam2, 10, 1);
							func_40(uParam2, 53, 1);
							func_40(uParam2, 56, 1);
							func_40(uParam2, 55, 1);
							func_40(uParam2, 11, 1);
							func_40(uParam2, 12, 1);
							func_40(uParam2, 13, 1);
							func_40(uParam2, 14, 1);
							func_40(uParam2, 15, 1);
							func_40(uParam2, 16, 1);
							func_40(uParam2, 47, 1);
							func_40(uParam2, 48, 1);
							func_40(uParam2, 17, 1);
							func_40(uParam2, 18, 1);
							func_40(uParam2, 49, 1);
							func_40(uParam2, 50, 1);
							func_40(uParam2, 51, 1);
							func_40(uParam2, 52, 1);
							func_40(uParam2, 62, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							func_40(uParam2, 19, 1);
							func_40(uParam2, 20, 1);
							func_40(uParam2, 21, 1);
							func_40(uParam2, 22, 1);
							func_40(uParam2, 54, 1);
							func_40(uParam2, 23, 1);
							func_40(uParam2, 24, 1);
							func_40(uParam2, 26, 1);
							func_40(uParam2, 27, 1);
							func_40(uParam2, 28, 1);
							func_40(uParam2, 29, 1);
							func_40(uParam2, 30, 1);
							func_40(uParam2, 31, 1);
							func_40(uParam2, 32, 1);
							func_40(uParam2, 33, 1);
							func_40(uParam2, 36, 1);
							func_40(uParam2, 38, 1);
							func_40(uParam2, 55, 1);
							func_44(uParam4, 1, 1);
							func_44(uParam4, 2, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 3, 1);
							func_44(uParam4, 4, 1);
							func_44(uParam4, 14, 1);
							func_44(uParam4, 15, 1);
							func_44(uParam4, 16, 1);
							func_44(uParam4, 6, 1);
							func_44(uParam4, 8, 1);
							func_44(uParam4, 9, 1);
							func_44(uParam4, 10, 1);
							func_44(uParam4, 12, 1);
							func_44(uParam4, 13, 1);
							func_44(uParam4, 17, 1);
							func_44(uParam4, 18, 1);
							func_44(uParam4, 19, 1);
							func_44(uParam4, 20, 1);
							func_44(uParam4, 59, 1);
							func_44(uParam4, 60, 1);
							func_44(uParam4, 61, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 62, 1);
							func_44(uParam4, 63, 1);
							func_44(uParam4, 64, 1);
							func_44(uParam4, 65, 1);
							func_44(uParam4, 66, 1);
							func_44(uParam4, 67, 1);
							func_44(uParam4, 68, 1);
							func_44(uParam4, 69, 1);
							func_44(uParam4, 70, 1);
							func_44(uParam4, 71, 1);
							func_44(uParam4, 72, 1);
							func_44(uParam4, 21, 1);
							func_44(uParam4, 22, 1);
							func_44(uParam4, 23, 1);
							func_44(uParam4, 24, 1);
							func_44(uParam4, 25, 1);
							func_44(uParam4, 26, 1);
							func_44(uParam4, 36, 1);
							func_44(uParam4, 46, 1);
							func_44(uParam4, 38, 1);
							func_44(uParam4, 29, 1);
							func_44(uParam4, 28, 1);
							func_44(uParam4, 31, 1);
							func_44(uParam4, 33, 1);
							func_44(uParam4, 34, 1);
							func_44(uParam4, 32, 1);
							func_44(uParam4, 92, 1);
							func_44(uParam4, 93, 1);
							func_44(uParam4, 94, 1);
							func_44(uParam4, 96, 1);
							func_44(uParam4, 97, 1);
							func_44(uParam4, 98, 1);
							func_44(uParam4, 100, 1);
							func_44(uParam4, 103, 1);
							func_44(uParam4, 104, 1);
							func_44(uParam4, 105, 1);
							func_44(uParam4, 106, 1);
							func_44(uParam4, 107, 1);
							func_44(uParam4, 108, 1);
							func_42(uParam3, 65, 1);
							func_42(uParam3, 67, 1);
							func_42(uParam3, 68, 1);
							func_42(uParam3, 69, 1);
							func_42(uParam3, 70, 1);
							func_42(uParam3, 71, 1);
							func_42(uParam3, 72, 1);
							func_42(uParam3, 73, 1);
							func_42(uParam3, 74, 1);
							func_42(uParam3, 75, 1);
							func_42(uParam3, 76, 1);
							func_42(uParam3, 77, 1);
							func_42(uParam3, 78, 1);
							func_42(uParam3, 79, 1);
							func_42(uParam3, 80, 1);
							func_42(uParam3, 81, 1);
							func_42(uParam3, 82, 1);
							func_42(uParam3, 91, 1);
							func_42(uParam3, 92, 1);
							func_40(uParam2, 64, 1);
							func_40(uParam2, 65, 1);
							func_40(uParam2, 66, 1);
							func_40(uParam2, 67, 1);
							func_40(uParam2, 68, 1);
							func_40(uParam2, 69, 1);
							func_40(uParam2, 70, 1);
							func_40(uParam2, 71, 1);
							func_40(uParam2, 72, 1);
							func_40(uParam2, 73, 1);
							func_40(uParam2, 74, 1);
							func_40(uParam2, 75, 1);
							func_40(uParam2, 77, 1);
							func_40(uParam2, 78, 1);
							func_40(uParam2, 79, 1);
							func_40(uParam2, 80, 1);
							func_40(uParam2, 81, 1);
							func_40(uParam2, 90, 1);
							func_40(uParam2, 91, 1);
							break;
					}
					break;
				
				case 18:
					switch (iParam5)
					{
						case 0:
							break;
						
						case 1:
							func_40(uParam2, 2, 1);
							func_40(uParam2, 20, 1);
							break;
						
						case 2:
							break;
					}
					break;
				
				case 0:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					break;
				
				case 8:
				case 10:
				case 12:
				case 14:
				case 18:
				case 22:
				case 25:
				case 29:
				case 33:
				case 19:
				case 21:
					func_39(2, 46, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 31:
					func_39(2, 47, uParam2, uParam3, uParam4, 0, 0);
					break;
				
				case 16:
				case 26:
				case 30:
					break;
			}
			break;
	}
}

void func_40(var uParam0, int iParam1, bool bParam2)
{
	func_41(uParam0, iParam1, bParam2);
}

void func_41(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

void func_42(var uParam0, int iParam1, bool bParam2)
{
	func_41(uParam0, iParam1, bParam2);
}

void func_43(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	func_44(uParam4, 91, 1);
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam5)
					{
						case 0:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 1:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
						
						case 2:
							func_42(uParam3, 38, 1);
							func_42(uParam3, 47, 1);
							func_42(uParam3, 111, 1);
							func_40(uParam2, 37, 1);
							func_40(uParam2, 46, 1);
							func_40(uParam2, 110, 1);
							break;
					}
					break;
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
				case 26:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 5, 1);
					func_44(uParam4, 6, 1);
					func_44(uParam4, 7, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					func_44(uParam4, 115, 1);
					func_44(uParam4, 116, 1);
					break;
				
				case 1:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 9, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
				
				case 10:
					func_44(uParam4, 28, 1);
					break;
				
				case 12:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 4, 1);
						func_42(uParam3, 6, 1);
						func_42(uParam3, 10, 1);
						func_42(uParam3, 54, 1);
						func_42(uParam3, 55, 1);
						func_42(uParam3, 56, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 106, 1);
						func_42(uParam3, 114, 1);
						func_42(uParam3, 116, 1);
						func_42(uParam3, 117, 1);
						func_42(uParam3, 118, 1);
						func_42(uParam3, 119, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 9, 1);
						func_40(uParam2, 10, 1);
						func_40(uParam2, 53, 1);
						func_40(uParam2, 56, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 36, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 55, 1);
						func_40(uParam2, 14, 1);
						func_40(uParam2, 105, 1);
						func_40(uParam2, 113, 1);
						func_40(uParam2, 114, 1);
						func_40(uParam2, 115, 1);
						func_40(uParam2, 116, 1);
						func_40(uParam2, 117, 1);
					}
					func_44(uParam4, 2, 1);
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 32, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					break;
				
				case 15:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 6, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 32, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					func_44(uParam4, 110, 1);
					func_44(uParam4, 112, 1);
					func_44(uParam4, 115, 1);
					func_44(uParam4, 116, 1);
					break;
				
				case 18:
					if (bParam6)
					{
						func_42(uParam3, 4, 1);
					}
					break;
				
				case 17:
					func_44(uParam4, 9, 1);
					break;
				
				case 19:
					if (bParam6)
					{
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
					}
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
				
				case 21:
					if (bParam6)
					{
						func_42(uParam3, 3, 1);
						func_42(uParam3, 7, 1);
						func_42(uParam3, 0, 1);
						func_42(uParam3, 12, 1);
						func_42(uParam3, 13, 1);
						func_42(uParam3, 15, 1);
						func_42(uParam3, 16, 1);
						func_42(uParam3, 48, 1);
						func_42(uParam3, 49, 1);
						func_42(uParam3, 17, 1);
						func_42(uParam3, 18, 1);
						func_42(uParam3, 50, 1);
						func_42(uParam3, 51, 1);
						func_42(uParam3, 52, 1);
						func_42(uParam3, 53, 1);
						func_42(uParam3, 38, 1);
						func_42(uParam3, 47, 1);
						func_42(uParam3, 111, 1);
						func_42(uParam3, 62, 1);
						func_42(uParam3, 20, 1);
						func_42(uParam3, 21, 1);
						func_42(uParam3, 25, 1);
						func_42(uParam3, 26, 1);
						func_42(uParam3, 27, 1);
						func_42(uParam3, 30, 1);
						func_42(uParam3, 31, 1);
						func_42(uParam3, 32, 1);
						func_42(uParam3, 33, 1);
						func_42(uParam3, 39, 1);
						func_42(uParam3, 37, 1);
						func_42(uParam3, 55, 1);
						func_40(uParam2, 0, 1);
						func_40(uParam2, 2, 1);
						func_40(uParam2, 3, 1);
						func_40(uParam2, 4, 1);
						func_40(uParam2, 6, 1);
						func_40(uParam2, 7, 1);
						func_40(uParam2, 8, 1);
						func_40(uParam2, 11, 1);
						func_40(uParam2, 13, 1);
						func_40(uParam2, 15, 1);
						func_40(uParam2, 16, 1);
						func_40(uParam2, 47, 1);
						func_40(uParam2, 48, 1);
						func_40(uParam2, 17, 1);
						func_40(uParam2, 18, 1);
						func_40(uParam2, 49, 1);
						func_40(uParam2, 50, 1);
						func_40(uParam2, 51, 1);
						func_40(uParam2, 52, 1);
						func_40(uParam2, 62, 1);
						func_40(uParam2, 37, 1);
						func_40(uParam2, 46, 1);
						func_40(uParam2, 110, 1);
						func_40(uParam2, 19, 1);
						func_40(uParam2, 20, 1);
						func_40(uParam2, 21, 1);
						func_40(uParam2, 22, 1);
						func_40(uParam2, 54, 1);
						func_40(uParam2, 24, 1);
						func_40(uParam2, 26, 1);
						func_40(uParam2, 27, 1);
						func_40(uParam2, 28, 1);
						func_40(uParam2, 30, 1);
						func_40(uParam2, 31, 1);
						func_40(uParam2, 32, 1);
						func_40(uParam2, 38, 1);
						func_40(uParam2, 36, 1);
					}
					func_44(uParam4, 3, 1);
					func_44(uParam4, 3, 1);
					func_44(uParam4, 4, 1);
					func_44(uParam4, 14, 1);
					func_44(uParam4, 15, 1);
					func_44(uParam4, 16, 1);
					func_44(uParam4, 8, 1);
					func_44(uParam4, 9, 1);
					func_44(uParam4, 10, 1);
					func_44(uParam4, 12, 1);
					func_44(uParam4, 13, 1);
					func_44(uParam4, 17, 1);
					func_44(uParam4, 18, 1);
					func_44(uParam4, 19, 1);
					func_44(uParam4, 20, 1);
					func_44(uParam4, 59, 1);
					func_44(uParam4, 60, 1);
					func_44(uParam4, 61, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 62, 1);
					func_44(uParam4, 63, 1);
					func_44(uParam4, 64, 1);
					func_44(uParam4, 65, 1);
					func_44(uParam4, 66, 1);
					func_44(uParam4, 67, 1);
					func_44(uParam4, 68, 1);
					func_44(uParam4, 69, 1);
					func_44(uParam4, 70, 1);
					func_44(uParam4, 71, 1);
					func_44(uParam4, 72, 1);
					func_44(uParam4, 21, 1);
					func_44(uParam4, 22, 1);
					func_44(uParam4, 23, 1);
					func_44(uParam4, 24, 1);
					func_44(uParam4, 25, 1);
					func_44(uParam4, 26, 1);
					func_44(uParam4, 36, 1);
					func_44(uParam4, 46, 1);
					func_44(uParam4, 38, 1);
					func_44(uParam4, 29, 1);
					func_44(uParam4, 28, 1);
					func_44(uParam4, 31, 1);
					func_44(uParam4, 33, 1);
					func_44(uParam4, 34, 1);
					func_44(uParam4, 92, 1);
					func_44(uParam4, 93, 1);
					func_44(uParam4, 94, 1);
					func_44(uParam4, 96, 1);
					func_44(uParam4, 97, 1);
					func_44(uParam4, 98, 1);
					func_44(uParam4, 100, 1);
					func_44(uParam4, 103, 1);
					func_44(uParam4, 104, 1);
					func_44(uParam4, 105, 1);
					func_44(uParam4, 106, 1);
					func_44(uParam4, 107, 1);
					func_44(uParam4, 108, 1);
					break;
			}
			break;
	}
}

void func_44(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / 32f));
	if (!iVar0 < *uParam0)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(uParam0[iVar0], (iParam1 - (32 * iVar0)));
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(uParam0[iVar0], (iParam1 - iVar0 * 32));
	}
}

int func_45()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 7:
				case 5:
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 14:
				case 16:
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
				case 23:
				case 26:
				case 25:
				case 24:
				case 30:
				case 34:
				case 40:
				case 41:
				case 42:
				case 43:
				case 44:
				case 45:
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_47(float fParam0)
{
	func_64(uLocal_141, "SET_DATA_SLOT", fParam0, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 172, 1), "CELL_BORDER");
}

void func_48(float fParam0)
{
	if (Global_1667046 == 1)
	{
		fParam0 = -1f;
	}
	func_64(uLocal_141, "SET_DATA_SLOT", fParam0, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 173, 1), "CELL_FILTER");
}

void func_49()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 183, 1), "CELL_GRID");
	func_64(uLocal_141, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
	func_48(5f);
	func_47(6f);
	func_50(7f);
	func_28(8f);
	if (bLocal_62)
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 9f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
	}
	if (!func_59(14))
	{
		if ((Global_71590 == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_58())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_140, "SET_FOCUS_LOCK");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_ACTTL");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(UI::_GET_LABEL_TEXT(&Global_4270293));
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_50(float fParam0)
{
	func_64(uLocal_141, "SET_DATA_SLOT", fParam0, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 175, 1), "CELL_ACCYC");
}

void func_51()
{
	func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
	func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
	func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
	func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_280");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_77);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_52()
{
	if (iLocal_156 == 1)
	{
		func_53();
		return;
	}
	if (iLocal_133 == 0 && iLocal_134 == 0)
	{
		func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
		func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), func_63());
		if (iLocal_131)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					if (func_150())
					{
						func_48(3f);
						func_47(4f);
					}
				}
				else if ((Global_71590 == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("pi_menu")) > 0) && func_58())
				{
					func_49();
				}
				else
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
					}
					func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_64(uLocal_141, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_150())
					{
						func_48(5f);
						func_47(6f);
						if (func_29(1))
						{
							func_28(7f);
							if (bLocal_62)
							{
								func_64(uLocal_141, "SET_DATA_SLOT", 8f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
							}
						}
						else if (bLocal_62)
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 7f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
					func_64(uLocal_141, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					func_64(uLocal_141, "SET_DATA_SLOT", 5f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
					if (func_150())
					{
						func_48(6f);
						func_47(7f);
						func_64(uLocal_141, "SET_DATA_SLOT", 8f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_150())
					{
						func_48(3f);
						func_47(4f);
						func_64(uLocal_141, "SET_DATA_SLOT", 5f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
			}
			else if (!PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
			{
				if (!func_137())
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
					}
					else
					{
						func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
					}
				}
				func_64(uLocal_141, "SET_DATA_SLOT", 4f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 183, 1), "CELL_GRID");
				func_64(uLocal_141, "SET_DATA_SLOT", 5f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
				func_64(uLocal_141, "SET_DATA_SLOT", 6f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
				if (func_150())
				{
					if (!func_137())
					{
						func_48(7f);
						func_47(8f);
						if (bLocal_63)
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 182, 1), "CELL_FOCUS");
						}
						func_64(uLocal_141, "SET_DATA_SLOT", 9f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
					}
				}
				else
				{
					if (!func_137())
					{
						if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
						}
						else
						{
							func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_1NP_XB");
						}
					}
					func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
					if (func_150())
					{
						if (!func_137())
						{
							func_48(4f);
							func_47(5f);
							func_64(uLocal_141, "SET_DATA_SLOT", 6f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 185, 1), "CELL_DEPTH");
						}
					}
				}
			}
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_77);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
}

void func_53()
{
	func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_284");
	func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_285");
	func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), func_63());
	func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 177, 1), "CELL_281");
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_77);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_54()
{
	if (iLocal_131)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fLocal_73, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fLocal_74);
	}
}

void func_55(int iParam0)
{
	if (iLocal_156 == 1)
	{
		return;
	}
	if (Global_4456448.f_155713 == 1)
	{
	}
	else if (Global_4456448.f_155714 == 1)
	{
	}
	else
	{
		MOBILE::_DISABLE_PHONE_THIS_FRAME(iParam0);
	}
}

void func_56()
{
	if (iLocal_61 == 1)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sLocal_19[Global_4268032], "phone_cam12DUMMY"))
		{
			MOBILE::_0xA2CCBE62CD4C91A4(0);
			unk_0x375A706A5C2FD084(0);
		}
		else
		{
			MOBILE::_0xA2CCBE62CD4C91A4(1);
			unk_0x375A706A5C2FD084(1);
		}
	}
}

void func_57()
{
	func_141(uLocal_140, "SHOW_REMAINING_PHOTOS", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (!func_150())
	{
		if (Global_1667046 == 0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER("phone_cam");
		}
	}
}

int func_58()
{
	if (func_59(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if ((ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/] || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/]) || ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
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
	return 1;
}

bool func_59(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_60(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_61()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 30, 1), "CELL_RT_RSTICK");
		func_64(uLocal_141, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(2, 1, 1), "CELL_RT_LSTICK");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 1, 1), "CELL_RT_RSTICK");
		func_64(uLocal_141, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(2, 0, 1), "CELL_RT_LSTICK");
	}
}

void func_62()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2) || GAMEPLAY::IS_ORBIS_VERSION())
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 3f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 184, 1), "CELL_SP_2NP_XB");
	}
	func_64(uLocal_141, "SET_DATA_SLOT", 4f, CONTROLS::_0x80C2FD58D720C801(0, 1, 1), "CELL_LT_RSTICK");
	if (func_59(14))
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 5f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, 1), "CELL_LT_LSTICK");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 5f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 39, 1), "CELL_LT_LSTICKZ");
		func_64(uLocal_141, "SET_DATA_SLOT", 6f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 30, 1), "CELL_LT_LSTICK");
	}
}

char* func_63()
{
	if (Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_33 == 233 && Global_1626536[PLAYER::PLAYER_ID() /*603*/].f_11.f_181 == 9)
	{
		return "FHHUD_SENDLES";
	}
	return "CELL_287";
}

void func_64(var uParam0, char* sParam1, float fParam2, var uParam3, char* sParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam3))
	{
		func_65(uParam3);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		func_60(sParam4);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_65(var uParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

void func_66()
{
	if (Global_71590)
	{
		switch (Global_16983)
		{
			case 0:
				if (CONTROLS::_IS_INPUT_DISABLED(2))
				{
					func_136("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_136("CELL_CAM_SELFIE_0", -1);
				}
				Global_16983++;
				break;
			
			case 1:
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2))
					{
						func_136("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_136("CELL_CAM_SELFIE_1", -1);
					}
					Global_16983++;
				}
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		switch (Global_16982)
		{
			case 0:
				if (CONTROLS::_IS_INPUT_DISABLED(2))
				{
					func_136("CELL_CAM_SELFIE_0_KM", -1);
				}
				else
				{
					func_136("CELL_CAM_SELFIE_0", -1);
				}
				Global_16982++;
				break;
			
			case 1:
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (CONTROLS::_IS_INPUT_DISABLED(2))
					{
						func_136("CELL_CAM_SELFIE_1_KM", -1);
					}
					else
					{
						func_136("CELL_CAM_SELFIE_1", -1);
					}
					Global_16982++;
				}
				break;
			
			case 2:
				break;
			}
	}
}

void func_67()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar9 = 179;
		iVar10 = 21;
	}
	else
	{
		iVar9 = 228;
		iVar10 = 229;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, iVar10) && !CONTROLS::IS_CONTROL_PRESSED(2, iVar9))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 1)) * 127;
		uVar3 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			if (GAMEPLAY::ABSI(iVar0) > 28 || GAMEPLAY::ABSI(iVar1) > 28)
			{
				fVar6 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			}
		}
		else if (GAMEPLAY::ABSI(iVar2) > 28 || GAMEPLAY::ABSI(uVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
		}
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			fVar7 = CONTROLS::_0x4F8A26A890FD62FB(0, 290);
			fVar8 = CONTROLS::_0x4F8A26A890FD62FB(0, 291);
			if (CONTROLS::_0xE1615EC03B3BB4FD())
			{
				fVar8 = (fVar8 * -1f);
			}
			fVar4 = (fVar4 + fVar7);
			fVar5 = (fVar5 - fVar8);
		}
		else if (GAMEPLAY::ABSI(iVar0) > 28 || GAMEPLAY::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(-iVar1) / 128f) * fLocal_164);
		}
		func_70(fVar5);
		func_69(fVar6);
		func_68(fVar4);
	}
	else if (!CONTROLS::IS_CONTROL_PRESSED(2, iVar9))
	{
		CONTROLS::ENABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
}

void func_68(float fParam0)
{
	fLocal_161 = (fLocal_161 + fParam0);
	if (fLocal_161 > 1f)
	{
		fLocal_161 = 1f;
	}
	else if (fLocal_161 < -1f)
	{
		fLocal_161 = -1f;
	}
	MOBILE::_0xD6ADE981781FCA09(fLocal_161);
}

void func_69(float fParam0)
{
	fLocal_162 = (fLocal_162 + fParam0);
	if (fLocal_162 > 1f)
	{
		fLocal_162 = 1f;
	}
	else if (fLocal_162 < -1f)
	{
		fLocal_162 = -1f;
	}
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_162);
}

void func_70(float fParam0)
{
	fLocal_163 = (fLocal_163 + fParam0);
	if (fLocal_163 > 1f)
	{
		fLocal_163 = 1f;
	}
	else if (fLocal_163 < -1f)
	{
		fLocal_163 = -1f;
	}
	MOBILE::_0x466DA42C89865553(fLocal_163);
}

void func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		iVar10 = 179;
		iVar11 = 178;
		if (CONTROLS::IS_CONTROL_PRESSED(2, iVar10))
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 178) && !func_137())
			{
				MOBILE::_0x53F4892D18EC90A4(0.5f);
				MOBILE::_0x3117D84EFA60F77B(0.85f);
				MOBILE::_0xAC2890471901861C(0.5f);
				MOBILE::_0x15E69E2802C24B8D(-0.25f);
				fLocal_157 = 0.5f;
				fLocal_158 = 0.85f;
				fLocal_159 = 0.5f;
				fLocal_160 = -0.25f;
			}
		}
	}
	else
	{
		iVar10 = 228;
		iVar11 = 229;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, iVar10) && !CONTROLS::IS_CONTROL_PRESSED(2, iVar11))
	{
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 178) && !func_137())
		{
			MOBILE::_0x53F4892D18EC90A4(0.5f);
			MOBILE::_0x3117D84EFA60F77B(0.85f);
			MOBILE::_0xAC2890471901861C(0.5f);
			MOBILE::_0x15E69E2802C24B8D(-0.25f);
			fLocal_157 = 0.5f;
			fLocal_158 = 0.85f;
			fLocal_159 = 0.5f;
			fLocal_160 = -0.25f;
		}
		CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
		iVar0 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 1)) * 127;
		iVar3 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 2)) * 127;
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			iVar1 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 39)) * 127;
			fVar8 = CONTROLS::_0x4F8A26A890FD62FB(0, 290);
			fVar9 = CONTROLS::_0x4F8A26A890FD62FB(0, 291);
			if (CONTROLS::_0xE1615EC03B3BB4FD())
			{
				fVar9 = (fVar9 * -1f);
			}
			fVar6 = (fVar6 + fVar8);
			fVar7 = (fVar7 - fVar9);
		}
		else if (GAMEPLAY::ABSI(iVar2) > 15 || GAMEPLAY::ABSI(iVar3) > 15)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (GAMEPLAY::ABSI(iVar0) > 28 || GAMEPLAY::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		func_75(fVar6);
		func_74(fVar7);
		func_73(fVar4);
		if (!func_59(14))
		{
			func_72(fVar5);
		}
	}
	else if (!CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		CONTROLS::ENABLE_CONTROL_ACTION(0, 2, 1);
		CONTROLS::ENABLE_CONTROL_ACTION(0, 1, 1);
	}
	if (!CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar10) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iVar11))
	{
		iVar0 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 30)) * 127;
		iVar1 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 31)) * 127;
		iVar2 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 290)) * 127;
		iVar3 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 291)) * 127;
		iVar2 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 294)) * 127;
		iVar2 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 295)) * 127;
		iVar3 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 292)) * 127;
		iVar3 = SYSTEM::FLOOR(CONTROLS::_0x4F8A26A890FD62FB(0, 293)) * 127;
		if (GAMEPLAY::ABSI(iVar2) > 28 || GAMEPLAY::ABSI(iVar3) > 28)
		{
			fVar6 = ((IntToFloat(iVar2) / 128f) * fLocal_164);
			fVar7 = ((IntToFloat(-iVar3) / 128f) * fLocal_164);
		}
		if (GAMEPLAY::ABSI(iVar0) > 28 || GAMEPLAY::ABSI(iVar1) > 28)
		{
			fVar4 = ((IntToFloat(iVar0) / 128f) * fLocal_164);
			fVar5 = ((IntToFloat(iVar1) / 128f) * fLocal_164);
		}
		if (!func_59(14))
		{
			func_72(fVar5);
		}
	}
}

void func_72(float fParam0)
{
	fLocal_159 = (fLocal_159 + fParam0);
	if (fLocal_159 > 1f)
	{
		fLocal_159 = 1f;
	}
	else if (fLocal_159 < 0f)
	{
		fLocal_159 = 0f;
	}
	MOBILE::_0xAC2890471901861C(fLocal_159);
}

void func_73(float fParam0)
{
	fLocal_160 = (fLocal_160 + fParam0);
	if (fLocal_160 > 1f)
	{
		fLocal_160 = 1f;
	}
	else if (fLocal_160 < -1f)
	{
		fLocal_160 = -1f;
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_160);
}

void func_74(float fParam0)
{
	fLocal_158 = (fLocal_158 + fParam0);
	if (fLocal_158 > 1.5f)
	{
		fLocal_158 = 1.5f;
	}
	else if (fLocal_158 < 0.5f)
	{
		fLocal_158 = 0.5f;
	}
	MOBILE::_0x3117D84EFA60F77B(fLocal_158);
}

void func_75(float fParam0)
{
	fLocal_157 = (fLocal_157 + fParam0);
	if (fLocal_157 > 2f)
	{
		fLocal_157 = 2f;
	}
	else if (fLocal_157 < -1.7f)
	{
		fLocal_157 = -1.7f;
	}
	MOBILE::_0x53F4892D18EC90A4(fLocal_157);
}

void func_76()
{
	if (Global_71850 || Global_71851)
	{
		return;
	}
	if (iLocal_124 == 0)
	{
		if (!iLocal_150)
		{
			if (Global_4456448.f_155713 == 0 && Global_4456448.f_155714 == 0)
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_141, 255, 255, 255, 0, 0);
			}
		}
	}
	if (iLocal_127 == 0)
	{
		if (Global_14495)
		{
			if (Global_14725)
			{
				if (iLocal_150 == 0)
				{
					if (Global_14553.f_1 > 3)
					{
					}
				}
			}
		}
		else
		{
			func_78(255, 255, 255, 255);
			func_77(0.059f, 0.644f, "CELL_284", 0);
			func_78(255, 255, 255, 255);
			func_77(0.165f, 0.644f, "CELL_285", 0);
			func_78(255, 255, 255, 255);
			func_77(0.275f, 0.75f, "CELL_280", 0);
			func_78(255, 255, 255, 255);
			func_77(0.275f, 0.83f, "CELL_281", 0);
		}
	}
	else if (Global_14495)
	{
	}
	else
	{
		func_78(255, 255, 255, 255);
		func_77(0.275f, 0.75f, func_63(), 0);
		func_78(255, 255, 255, 255);
		func_77(0.275f, 0.79f, "CELL_286", 0);
		func_78(255, 255, 255, 255);
		func_77(0.275f, 0.83f, "CELL_281", 0);
	}
}

void func_77(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_78(int iParam0, int iParam1, int iParam2, int iParam3)
{
	UI::SET_TEXT_SCALE(0.4f, 0.4f);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	UI::SET_TEXT_PROPORTIONAL(1);
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
}

void func_79()
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(uLocal_75, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(uLocal_76);
}

void func_80()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 44, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 3, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 4, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 5, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 6, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 39, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 56, 1);
}

void func_81()
{
	vLocal_87 = { Global_14506[Global_14498 /*3*/] };
	if (Global_14495)
	{
		if (func_84())
		{
			MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_93);
			vLocal_87 = { vLocal_93 };
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		func_1(1);
		if (iLocal_121)
		{
			vLocal_81.x = (vLocal_81.x + 12f);
		}
		if (vLocal_81.x > vLocal_87.x || vLocal_81.x == vLocal_87.x)
		{
			vLocal_81.x = vLocal_87.x;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			vLocal_81.y = (vLocal_81.y - 6f);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_2425, 4))
		{
			if (vLocal_81.y < (vLocal_87.y + 15f) || vLocal_81.y == (vLocal_87.y + 15f))
			{
				vLocal_81.y = (vLocal_87.y + 15f);
				iLocal_122 = 0;
			}
		}
		else if (vLocal_81.y < (vLocal_87.y + 10f) || vLocal_81.y == (vLocal_87.y + 10f))
		{
			vLocal_81.y = (vLocal_87.y + 10f);
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			vLocal_81.z = (vLocal_81.z - 10f);
		}
		if (vLocal_81.z < vLocal_87.z || vLocal_81.z == vLocal_87.z)
		{
			vLocal_81.z = vLocal_87.z;
			iLocal_123 = 0;
		}
		if (func_84() == 0)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2425, 4))
			{
				vLocal_87.y = (vLocal_87.y + 15f);
			}
			else
			{
				vLocal_87.y = (vLocal_87.y + 10f);
			}
			vLocal_87.x = (vLocal_87.x - 14f);
		}
		else
		{
			vLocal_87 = { Global_14499[Global_14498 /*3*/] };
		}
		vLocal_81 = { vLocal_87 };
		iLocal_123 = 0;
		iLocal_122 = 0;
		iLocal_121 = 0;
		MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_81);
		if ((iLocal_121 == 0 && iLocal_122 == 0) && iLocal_123 == 0)
		{
			iLocal_124 = 0;
			vLocal_84 = { -90.3f, 0f, 90f };
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_84, 0);
			if (!GAMEPLAY::IS_BIT_SET(Global_2423, 22))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2423, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_83();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_82();
				}
				iLocal_100 = 2;
			}
		}
	}
}

void func_82()
{
	func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (GAMEPLAY::IS_BIT_SET(Global_2424, 28))
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_286");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_277");
		func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_77);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

void func_83()
{
	func_141(uLocal_141, "SET_CLEAR_SPACE", 200f, -1082130432, -1082130432, -1082130432, -1082130432);
	func_141(uLocal_141, "SET_DATA_SLOT_EMPTY", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
	if (GAMEPLAY::IS_BIT_SET(Global_2424, 28))
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), func_63());
		func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_286");
	}
	else
	{
		func_64(uLocal_141, "SET_DATA_SLOT", 2f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 179, 1), func_63());
		func_64(uLocal_141, "SET_DATA_SLOT", 1f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 178, 1), "CELL_277");
		func_64(uLocal_141, "SET_DATA_SLOT", 0f, CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 176, 1), "CELL_GALSAVE");
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_141, "SET_MAX_WIDTH");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_77);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_141(uLocal_141, "DRAW_INSTRUCTIONAL_BUTTONS", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
}

int func_84()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			if (Global_14496 == 0)
			{
				if (Global_1738 != 128)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (Global_15866 != 2)
						{
						}
					}
				}
			}
		}
		if (func_59(14))
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
		if (Global_105613)
		{
			return 0;
		}
	}
	if (Global_71590)
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
	if (Global_4269586 || iVar2 == 1)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptrackify")) > 0 || Global_106565.f_14045.f_89)
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

void func_85()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 47, 1);
	CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14523);
	vLocal_84 = { Global_14513 };
	vLocal_87 = { Global_14506[Global_14498 /*3*/] };
	if (func_84())
	{
		MOBILE::GET_MOBILE_PHONE_ROTATION(&vLocal_90, 0);
		vLocal_84 = { vLocal_90 };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_93);
		vLocal_87 = { vLocal_93 };
		iLocal_118 = 0;
		iLocal_119 = 0;
		iLocal_120 = 0;
		iLocal_121 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
	}
	if (Global_14495)
	{
		func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
		func_55(0);
		iLocal_131 = 0;
		if (GAMEPLAY::IS_BIT_SET(Global_2423, 30))
		{
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			func_86();
		}
		if (iLocal_121)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2423, 9))
			{
				vLocal_81.x = (vLocal_81.x + 2f);
			}
			else
			{
				vLocal_81.x = (vLocal_81.x + 12f);
			}
		}
		if (vLocal_81.x > vLocal_87.x || vLocal_81.x == vLocal_87.x)
		{
			vLocal_81.x = vLocal_87.x;
			iLocal_121 = 0;
		}
		if (iLocal_122)
		{
			vLocal_81.y = (vLocal_81.y - 6f);
		}
		if (vLocal_81.y < vLocal_87.y || vLocal_81.y == vLocal_87.y)
		{
			vLocal_81.y = vLocal_87.y;
			iLocal_122 = 0;
		}
		if (iLocal_123)
		{
			vLocal_81.z = (vLocal_81.z - 10f);
		}
		if (vLocal_81.z < vLocal_87.z || vLocal_81.z == vLocal_87.z)
		{
			vLocal_81.z = vLocal_87.z;
			iLocal_123 = 0;
		}
		if (iLocal_123 == 0)
		{
			if (iLocal_118)
			{
				vLocal_78.x = (vLocal_78.x + 1f);
			}
			if (vLocal_78.x > vLocal_84.x || vLocal_78.x == vLocal_84.x)
			{
				vLocal_78.x = vLocal_84.x;
				iLocal_118 = 0;
			}
			if (iLocal_119)
			{
				vLocal_78.y = (vLocal_78.y - 2f);
			}
			if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
			{
				vLocal_78.y = vLocal_84.y;
				iLocal_119 = 0;
			}
			if (iLocal_120)
			{
				vLocal_78.z = (vLocal_78.z - 14f);
			}
			if (vLocal_78.z < vLocal_84.z || vLocal_78.z == vLocal_84.z)
			{
				vLocal_78.z = vLocal_84.z;
				iLocal_120 = 0;
			}
		}
		if (iLocal_126)
		{
			vLocal_78 = { vLocal_84 };
			vLocal_81 = { vLocal_87 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			if (func_84() == 0)
			{
				MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
				MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_81);
			}
			func_97(0, 1);
		}
		else if (func_84() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_81);
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_86();
		}
	}
	else
	{
		if (iLocal_118)
		{
			vLocal_78.x = (vLocal_78.x + 1f);
		}
		if (vLocal_78.x > vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			vLocal_78.y = (vLocal_78.y - 2f);
		}
		if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			vLocal_78.z = (vLocal_78.z - 7f);
		}
		if (vLocal_78.z < vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			iLocal_120 = 0;
		}
		if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
		{
			func_86();
		}
	}
	MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
}

void func_86()
{
	func_1(0);
	if (func_84() == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2423, 30))
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14499[Global_14498 /*3*/]);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14506[Global_14498 /*3*/]);
		}
		vLocal_78 = { vLocal_84 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
	}
	Global_16899 = 0;
	func_100(0, 0);
	func_104(0);
	iLocal_115 = 0;
	func_99();
	Global_14540 = 1;
	Global_16902 = 0;
	if (Global_14553.f_1 > 4)
	{
		Global_14553.f_1 = 6;
		Global_14531 = 1;
		func_87();
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140))
	{
		func_140(uLocal_140, "SHUTDOWN_MOVIE");
	}
	SYSTEM::WAIT(0);
	UNK1::_0xEB2D525B57F42B40();
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_141);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_140);
	if (Global_14727 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2423, 17);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2423, 17);
	}
	GAMEPLAY::CLEAR_BIT(&Global_2423, 18);
	GAMEPLAY::CLEAR_BIT(&Global_2423, 21);
	UI::CLEAR_FLOATING_HELP(0, 1);
	GAMEPLAY::CLEAR_BIT(&Global_2425, 3);
	GAMEPLAY::CLEAR_BIT(&Global_4269308, 3);
	GAMEPLAY::SET_GAME_PAUSED(0);
	PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
	UI::RESET_HUD_COMPONENT_VALUES(15);
	Global_16903 = 1;
	AUDIO::STOP_SOUND(uLocal_112);
	AUDIO::RELEASE_SOUND_ID(uLocal_112);
	UI::_REMOVE_LOADING_PROMPT();
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Normal_1", 0);
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID());
	}
	func_99();
	MOBILE::_0xA2CCBE62CD4C91A4(0);
	unk_0x375A706A5C2FD084(0);
	MOBILE::_0x1B0B4AEED5B9B41C(1f);
	if (Global_4268033 > 0 && Global_4268033 < 13)
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sLocal_33[Global_4268033]);
	}
	func_97(0, 1);
	if (func_148(0, 1, iLocal_64, 1))
	{
		iLocal_64 = 0;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_87()
{
	vector3 vVar0;
	
	if (Global_14536 == 1)
	{
		return;
	}
	if (Global_14553.f_1 < 4)
	{
		return;
	}
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_71590)
		{
			return;
		}
		SYSTEM::WAIT(0);
	}
	switch (Global_14553.f_1)
	{
		case 6:
			func_141(Global_14534, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_91(Global_3028);
			if (Global_3028 == 1)
			{
				func_141(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14557), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14557;
			}
			else
			{
				func_141(Global_14534, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14558), -1082130432, -1082130432, -1082130432);
				Global_14533 = Global_14558;
			}
			if (Global_14541)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205", 0, 0, 0, 0);
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206", 0, 0, 0, 0);
			}
			else
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_14727 == 0)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2423, 17);
			}
			else if (Global_71590)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
				GAMEPLAY::CLEAR_BIT(&Global_2423, 17);
			}
			else
			{
				if (Global_14726 == 1)
				{
					if (Global_14541)
					{
						func_90(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
					}
					else
					{
						func_90(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
					}
				}
				else if (Global_14541)
				{
					func_90(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225", 0, 0, 0, 0);
				}
				else
				{
					func_90(Global_14534, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
				}
				GAMEPLAY::SET_BIT(&Global_2423, 17);
			}
			break;
		
		case 7:
			break;
		
		case 10:
			func_141(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_90(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_90(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2423, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2423, 20))
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			break;
		
		case 9:
			if (Global_14552 == 1)
			{
				func_89();
				func_141(Global_14534, "SET_THEME", SYSTEM::TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				if (Global_15879)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_60("CELL_300");
					func_60("CELL_217");
					func_60("CELL_217");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
				{
					func_90(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", "CELL_217", "CELL_195", 0);
				}
				else
				{
					func_90(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), "CELL_217", &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
				}
				func_141(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			else if (Global_15866 == 4 || Global_15866 == 3)
			{
				func_141(Global_14534, "SET_THEME", SYSTEM::TO_FLOAT(Global_106565.f_14045[Global_14553 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
				func_89();
				if (Global_15879)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(4);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_15881);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					func_60("CELL_300");
					func_60("CELL_219");
					func_60("CELL_219");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					if (Global_16124)
					{
						StringCopy(&vVar0, "CELL_219", 24);
					}
					else
					{
						StringCopy(&vVar0, "CELL_211", 24);
					}
					if (Global_106565.f_28044[Global_1738 /*29*/].f_24[Global_14553] == 0)
					{
						func_141(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_90(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_1738 /*10*/].f_4), "CELL_300", &vVar0, "CELL_195", 0);
					}
					else
					{
						func_141(Global_14534, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
						func_90(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), &(Global_106565.f_28044[Global_1738 /*29*/].f_7), &vVar0, &(Global_106565.f_28044[Global_1738 /*29*/].f_3), 0);
					}
				}
				func_141(Global_14534, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
			}
			func_88();
			break;
		
		default:
			break;
	}
}

void func_88()
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_14534))
	{
		if (Global_14552 == 1)
		{
			if (Global_14541)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203", 0, 0, 0, 0);
			}
			else
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			if (Global_15913)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_2423, 20))
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204", 0, 0, 0, 0);
			}
			else
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			func_90(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2423, 17);
		}
		else
		{
			func_90(Global_14534, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			func_90(Global_14534, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			GAMEPLAY::CLEAR_BIT(&Global_2423, 17);
			if (GAMEPLAY::IS_BIT_SET(Global_2423, 20))
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
			}
			else if (Global_14541)
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202", 0, 0, 0, 0);
				if (Global_14496)
				{
					func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
				}
			}
			else
			{
				func_90(Global_14534, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
			}
		}
	}
}

void func_89()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (Global_14553 == 0)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
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
		if (Global_14553 == 1)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
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
		if (Global_14553 == 2)
		{
			switch (Global_106565.f_14045[Global_14553 /*20*/].f_6)
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
		if (Global_14553 == 3)
		{
			switch (Global_4269584)
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

void func_90(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
		func_60(sParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_60(iParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_60(iParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_60(iParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_60(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_91(int iParam0)
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
	
	Global_16934 = 0;
	Global_3028 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2992[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_59(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2424, 3))
								{
									iVar2 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14729 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458608)
							{
								if (iVar1 == 14)
								{
									func_90(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2992[iVar0] = 1;
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
				if (iParam0 == Global_2430[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2430[iVar1 /*15*/].f_4)
					{
						if (Global_2992[iVar0] == 0)
						{
							Global_2956[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106565.f_14135[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106565.f_14135[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106565.f_14135[iVar3 /*104*/].f_99[Global_14553] == 1)
											{
												Global_16934++;
											}
										}
									}
									iVar3++;
								}
								func_90(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16934), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71590)
								{
									iVar4 = 0;
									iVar4 = Global_4268042;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4268043[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4268043[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4268043[iVar5 /*104*/].f_99[Global_14553] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_90(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14553)
									{
										case 0:
											uVar6 = Global_37589;
											break;
										
										case 1:
											uVar6 = Global_37590;
											break;
										
										case 2:
											uVar6 = Global_37591;
											break;
										
										default:
											break;
									}
									func_90(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(uVar6), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_90(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16929), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2429);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2424, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2424, 3))
								{
									iVar8 = 42;
									Global_14729 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14729 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2430[iVar1 /*15*/]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_2424, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14534, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2430[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_60(&(Global_2430[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2430[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1625180.f_1;
								func_90(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_90(Global_14534, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2430[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2430[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2992[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_92()
{
	switch (iLocal_100)
	{
		case 1:
			UI::CLEAR_FLOATING_HELP(0, 1);
			if (GAMEPLAY::IS_BIT_SET(Global_2423, 28))
			{
				StringCopy(&cLocal_145, "CELL_296", 16);
				func_52();
			}
			else
			{
				StringCopy(&cLocal_145, "CELL_295", 16);
				func_27();
			}
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Global_2423, 22))
			{
				UI::CLEAR_FLOATING_HELP(0, 1);
				if (GAMEPLAY::IS_BIT_SET(Global_2423, 28))
				{
					StringCopy(&cLocal_145, "CELL_294", 16);
					func_83();
				}
				else
				{
					StringCopy(&cLocal_145, "CELL_293", 16);
					func_82();
				}
				iLocal_100 = 2;
			}
			break;
		
		default:
			break;
	}
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		if (!func_102())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 17);
		}
	}
	else if (func_102())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 17);
	}
}

int func_94(int iParam0, var uParam1, int iParam2)
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

void func_95(bool bParam0)
{
	if (bParam0)
	{
		if (!func_96())
		{
			GAMEPLAY::SET_BIT(&Global_1681628, 18);
		}
	}
	else if (func_96())
	{
		GAMEPLAY::CLEAR_BIT(&Global_1681628, 18);
	}
}

bool func_96()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 18);
}

void func_97(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_98(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

int func_98(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2423, 14))
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
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_99()
{
	if ((Global_4456448.f_155713 == 0 && Global_4456448.f_155714 == 0) && Global_1667046 == 0)
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
}

void func_100(int iParam0, int iParam1)
{
	if (Global_4456448.f_155713 == 1)
	{
	}
	else if (Global_4456448.f_155714 == 1)
	{
	}
	else
	{
		MOBILE::CELL_CAM_ACTIVATE(iParam0, iParam1);
	}
}

int func_101()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2423, 15))
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 17);
}

void func_103()
{
	if (Global_14495)
	{
		vLocal_84 = { -90.3f, 0f, 90f };
		vLocal_87 = { 1.5f, 0f, -17f };
		if (func_84())
		{
			MOBILE::GET_MOBILE_PHONE_ROTATION(&vLocal_90, 0);
			vLocal_84 = { vLocal_90 };
			MOBILE::GET_MOBILE_PHONE_POSITION(&vLocal_93);
			vLocal_87 = { vLocal_93 };
			iLocal_118 = 0;
			iLocal_119 = 0;
			iLocal_120 = 0;
			iLocal_121 = 0;
			iLocal_122 = 0;
			iLocal_123 = 0;
		}
		if (iLocal_120 == 0)
		{
			if (iLocal_121)
			{
				vLocal_81.x = (vLocal_81.x - 14f);
			}
			if (vLocal_81.x < vLocal_87.x || vLocal_81.x == vLocal_87.x)
			{
				iLocal_121 = 0;
			}
			if (iLocal_122)
			{
				vLocal_81.y = (vLocal_81.y + 7f);
			}
			if (vLocal_81.y > vLocal_87.y || vLocal_81.y == vLocal_87.y)
			{
				iLocal_122 = 0;
			}
			if (iLocal_123)
			{
				vLocal_81.z = (vLocal_81.z + 12f);
			}
			if (vLocal_81.z > vLocal_87.z || vLocal_81.z == vLocal_87.z)
			{
				iLocal_123 = 0;
			}
		}
		if (iLocal_118)
		{
			vLocal_78.x = (vLocal_78.x - 1f);
		}
		if (vLocal_78.x < vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			vLocal_78.x = vLocal_84.x;
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			vLocal_78.y = (vLocal_78.y - 0.5f);
		}
		if (vLocal_78.y < vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			vLocal_78.y = vLocal_84.y;
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			vLocal_78.z = (vLocal_78.z + 11f);
		}
		if (vLocal_78.z > vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			vLocal_78.z = vLocal_84.z;
			iLocal_120 = 0;
		}
		if (func_84() == 0)
		{
			MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
			MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_81);
		}
	}
	else
	{
		vLocal_84 = { -93.9f, 4.9f, 90.7f };
		if (iLocal_118)
		{
			vLocal_78.x = (vLocal_78.x - 1f);
		}
		if (vLocal_78.x < vLocal_84.x || vLocal_78.x == vLocal_84.x)
		{
			iLocal_118 = 0;
		}
		if (iLocal_119)
		{
			vLocal_78.y = (vLocal_78.y + 2f);
		}
		if (vLocal_78.y > vLocal_84.y || vLocal_78.y == vLocal_84.y)
		{
			iLocal_119 = 0;
		}
		if (iLocal_120)
		{
			vLocal_78.z = (vLocal_78.z + 7f);
		}
		if (vLocal_78.z > vLocal_84.z || vLocal_78.z == vLocal_84.z)
		{
			iLocal_120 = 0;
		}
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
	}
	if (Global_14495)
	{
		if (((((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0) && iLocal_121 == 0) && iLocal_122 == 0) && iLocal_123 == 0)
		{
			if (func_84())
			{
			}
			else
			{
				vLocal_78 = { vLocal_84 };
				MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
				vLocal_81 = { vLocal_87 };
				MOBILE::SET_MOBILE_PHONE_POSITION(vLocal_81);
			}
			if (iLocal_103 == 0)
			{
				Global_16900 = 0;
				func_100(1, 1);
				iLocal_115 = 1;
				func_104(1);
				func_57();
				func_105();
				func_55(0);
				SYSTEM::SETTIMERA(0);
				iLocal_142 = 1;
				iLocal_143 = 1;
				func_116();
				func_141(uLocal_140, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(iLocal_144), -1082130432, -1082130432, -1082130432, -1082130432);
				if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
				{
					func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
				}
				func_141(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
				func_143();
			}
		}
	}
	else if ((iLocal_118 == 0 && iLocal_119 == 0) && iLocal_120 == 0)
	{
		vLocal_78 = { vLocal_84 };
		MOBILE::SET_MOBILE_PHONE_ROTATION(vLocal_78, 0);
		Global_16900 = 0;
	}
}

void func_104(bool bParam0)
{
	if (func_150())
	{
		if (bParam0)
		{
			if (!GRAPHICS::_0xBCEDB009461DA156())
			{
				GRAPHICS::_0x7AC24EAB6D74118D(1);
				if (Global_4268033 > 0 && Global_4268033 < 99)
				{
					GRAPHICS::_0x27FEB5254759CDE3(sLocal_33[Global_4268033], 0);
					MOBILE::_0x1B0B4AEED5B9B41C(0.25f);
				}
			}
		}
		else if (GRAPHICS::_0xBCEDB009461DA156())
		{
			GRAPHICS::_0x7AC24EAB6D74118D(0);
		}
	}
}

void func_105()
{
	if (Global_4268032 > 0 && Global_4268032 < 99)
	{
		if (Global_1667046 == 0)
		{
			GRAPHICS::SET_TIMECYCLE_MODIFIER(sLocal_19[Global_4268032]);
		}
	}
}

void func_106()
{
	if (Global_14495)
	{
		iLocal_125 = 0;
		func_57();
		func_97(1, 1);
		func_100(1, 1);
		iLocal_115 = 1;
		Global_16903 = 1;
	}
}

void func_107()
{
	if (Global_4456448.f_155713 == 1 && func_108(1))
	{
		return;
	}
	if (iLocal_127 == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2423, 28))
		{
			StringCopy(&cLocal_145, "CELL_296", 16);
			func_52();
		}
		else
		{
			StringCopy(&cLocal_145, "CELL_295", 16);
			func_27();
		}
		if (GAMEPLAY::ARE_STRINGS_EQUAL(&cLocal_145, "DUMMYCOMPARISON"))
		{
			fLocal_98 = fLocal_99;
			fLocal_96 = fLocal_97;
			fLocal_99 = fLocal_98;
			fLocal_97 = fLocal_96;
		}
		iLocal_100 = 1;
	}
}

int func_108(int iParam0)
{
	if ((func_111() || func_110()) || (func_109() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_109()
{
	return Global_2448756.f_16;
}

var func_110()
{
	return Global_2448756.f_15;
}

var func_111()
{
	return Global_2448756.f_14;
}

void func_112()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14542, 1);
	}
}

void func_113()
{
	GRAPHICS::_0x1072F115DAB0717E(0, 0);
	iLocal_121 = 1;
	iLocal_122 = 1;
	iLocal_123 = 1;
	iLocal_124 = 0;
	iLocal_125 = 1;
}

void func_114()
{
	func_115();
}

void func_115()
{
	if (iLocal_151)
	{
		if (SYSTEM::TIMERA() > 50)
		{
			iLocal_151 = 0;
		}
	}
	if (iLocal_151 == 0)
	{
	}
}

void func_116()
{
	if (Global_14553.f_1 > 3)
	{
		if (!UI::IS_PAUSE_MENU_ACTIVE())
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_140, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 255, 0);
		}
	}
}

void func_117()
{
	if (func_59(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_11();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

void func_118(int iParam0)
{
	if (func_120())
	{
		return;
	}
	if (Global_14725)
	{
		func_97(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		GAMEPLAY::SET_BIT(&Global_2424, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2423, 30);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_119())
	{
		Global_14553.f_1 = 3;
	}
}

int func_119()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_120()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 19);
}

void func_121()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 56, 1);
	if (iLocal_150 == 0)
	{
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14526);
		CONTROLS::SET_INPUT_EXCLUSIVE(0, Global_14523);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 278, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 279, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 280, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 281, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 282, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 282, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 284, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 285, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 77, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 78, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 286, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 287, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 79, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 61, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 62, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 63, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 64, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 90, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 108, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 109, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 111, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 112, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 91, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 92, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 102, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 137, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 139, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 102, 1);
	}
}

int func_122()
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, -1, 0))
			{
				return 1;
			}
			else if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) == PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_123()
{
	var uVar0;
	
	func_131(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_130())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_129())
	{
		return 1;
	}
	if (func_128(157))
	{
		if (!func_127())
		{
			return 1;
		}
	}
	if (func_128(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_124() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_124()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_124()
{
	switch (func_126())
	{
		case 0:
			return func_125();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_125()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_126()
{
	return Global_25765;
}

bool func_127()
{
	return Global_2448756.f_586;
}

int func_128(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_129()
{
	return Global_2458613;
}

bool func_130()
{
	return Global_2448756.f_581;
}

void func_131(var uParam0)
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
				case -275425152:
					func_132(iVar0);
					break;
				
				case -42615386:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_132(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_134(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_133(uVar4, &bVar5))
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

int func_133(var uParam0, var uParam1)
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

int func_134(var uParam0, bool bParam1, bool bParam2)
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
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_135()
{
	if (iLocal_156 == 1)
	{
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	}
	else
	{
		UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
}

void func_136(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_137()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 5);
}

void func_138()
{
	if (func_139())
	{
		GRAPHICS::_0x4AF92ACD3141D96C();
		if (GRAPHICS::_0x2A893980E96B659A(0))
		{
			iLocal_103 = 1;
			iLocal_111 = 0;
		}
		else
		{
			Global_16903 = 1;
			Global_14553.f_1 = 3;
			UI::_REMOVE_LOADING_PROMPT();
		}
	}
	else
	{
		iLocal_109 = 0;
		iLocal_110 = 0;
		if (iLocal_104 == 1)
		{
			if (iLocal_127 == 0)
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140))
				{
					if (func_150())
					{
						if (Global_4268033 == 0)
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
							{
								func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
							}
						}
						func_141(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
					else
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_4269308, 2))
						{
							func_141(uLocal_140, "SHOW_PHOTO_FRAME", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
						}
						func_141(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
					}
				}
			}
			else if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_140))
			{
				func_141(uLocal_140, "SHOW_PHOTO_FRAME", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				func_141(uLocal_140, "SET_REMAINING_PHOTOS", SYSTEM::TO_FLOAT(iLocal_109), SYSTEM::TO_FLOAT(iLocal_110), -1082130432, -1082130432, -1082130432);
			}
			iLocal_104 = 0;
		}
		iLocal_111 = 0;
		UI::_REMOVE_LOADING_PROMPT();
	}
}

int func_139()
{
	if (Global_4456448.f_155713 == 1)
	{
		if (Global_71590)
		{
			return 0;
		}
	}
	if (Global_4456448.f_155714 == 1)
	{
		if (Global_71590)
		{
			return 0;
		}
	}
	if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_PS3_VERSION())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2424, 28))
		{
			return 0;
		}
	}
	return 1;
}

void func_140(var uParam0, char* sParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_141(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_142()
{
	if (Global_71590)
	{
		Global_14553 = 3;
	}
	else
	{
		Global_14553 = func_11();
	}
	if (Global_14553 > 3)
	{
		Global_14553 = 3;
	}
	return Global_106565.f_14045[Global_14553 /*20*/].f_7;
}

void func_143()
{
	if (Global_14553.f_1 > 3)
	{
		Global_14553.f_1 = 8;
	}
	Global_16902 = 0;
	iLocal_127 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		vLocal_67 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (Global_14495)
	{
		while (SYSTEM::TIMERA() < iLocal_137)
		{
			SYSTEM::WAIT(0);
			func_116();
			func_80();
			UNK1::_0xEB2D525B57F42B40();
		}
		func_140(uLocal_140, "OPEN_SHUTTER");
		func_135();
		func_107();
		iLocal_129 = 1;
		SYSTEM::SETTIMERB(0);
	}
	else
	{
		func_100(1, 1);
		func_104(1);
		func_57();
		func_105();
		func_55(0);
		iLocal_115 = 1;
	}
}

void func_144(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2423, 15);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2423, 15);
	}
}

bool func_145()
{
	return Global_1312844;
}

int func_146(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(uVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(uVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

void func_147()
{
}

int func_148(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && bParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_149()
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			MOBILE::_0x53F4892D18EC90A4(fLocal_157);
			MOBILE::_0x3117D84EFA60F77B(fLocal_158);
			MOBILE::_0xAC2890471901861C(fLocal_159);
		}
		else
		{
			MOBILE::_0x53F4892D18EC90A4(fLocal_157);
			MOBILE::_0x3117D84EFA60F77B(fLocal_158);
			MOBILE::_0xAC2890471901861C(fLocal_159);
		}
	}
	MOBILE::_0x15E69E2802C24B8D(fLocal_160);
	MOBILE::_0xD6ADE981781FCA09(fLocal_161);
	MOBILE::_0xF1E22DC13F5EEBAD(fLocal_162);
	MOBILE::_0x466DA42C89865553(fLocal_163);
	func_54();
}

int func_150()
{
	if (iLocal_56 == 0)
	{
		iLocal_56 = 1;
	}
	return 1;
}

