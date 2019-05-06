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
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49[4] = { 0, 0, 0, 0 };
	var uLocal_54 = 0;
	var uLocal_55[4] = { 0, 0, 0, 0 };
	var uLocal_60 = 0;
	vector3 vLocal_61[4] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_74 = { 0f, 0f, 0f };
	int iLocal_77 = 0;
	bool bLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	bool bLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	bool bLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_78 = true;
	iLocal_84 = joaat("s_m_m_pilot_01");
	iLocal_99 = 500;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_12();
	}
	uLocal_97 = PLAYER::PLAYER_PED_ID();
	while (true)
	{
		if (ENTITY::IS_ENTITY_DEAD(uLocal_97, 0))
		{
			iLocal_98 = 5;
		}
		switch (iLocal_98)
		{
			case 0:
				iLocal_98 = 1;
				break;
			
			case 1:
				func_11();
				iLocal_98 = 2;
				break;
			
			case 2:
				if (func_10())
				{
					iLocal_98 = 3;
				}
				break;
			
			case 3:
				func_9();
				iLocal_98 = 4;
				break;
			
			case 4:
				if (Global_90255)
				{
					iLocal_98 = 5;
				}
				func_4();
				break;
			
			case 5:
				func_1();
				func_12();
				break;
		}
		SYSTEM::WAIT(iLocal_99);
	}
}

void func_1()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[iVar0]))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[iVar0]) || (!ENTITY::IS_ENTITY_DEAD(uLocal_49[iVar0], 0) && !ENTITY::IS_ENTITY_VISIBLE(uLocal_49[iVar0])))
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_49[iVar0]));
				PED::DELETE_PED(&(uLocal_55[iVar0]));
			}
			else
			{
				if (iVar0 == 0 || iVar0 == 2)
				{
					func_3(1);
				}
				func_2(&(uLocal_49[iVar0]), &(uLocal_55[iVar0]));
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_49[iVar0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_55[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_54))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_54))
		{
			VEHICLE::DELETE_VEHICLE(&uLocal_54);
			PED::DELETE_PED(&uLocal_60);
		}
		else
		{
			func_2(&uLocal_54, &uLocal_60);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_54);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_60);
		}
	}
	if (bLocal_82)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportJetTakeOff");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "AirportNew");
		VEHICLE::REMOVE_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
		VEHICLE::REMOVE_VEHICLE_RECORDING(101, "EastWestFlight");
	}
}

void func_2(var uParam0, var uParam1)
{
	if (((ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1)) && !ENTITY::IS_ENTITY_DEAD(*uParam0, 0)) && !ENTITY::IS_ENTITY_DEAD(*uParam1, 0))
	{
		if (ENTITY::IS_ENTITY_IN_AIR(*uParam0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					AI::TASK_PLANE_MISSION(*uParam1, *uParam0, 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 30f, 100, 50, 1);
				}
			}
		}
	}
}

void func_3(bool bParam0)
{
	if (bLocal_78)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(uLocal_49[0]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[0]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_55[0], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0))
					{
						AI::TASK_PLANE_MISSION(uLocal_55[0], uLocal_49[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_55[0], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0))
					{
						AI::TASK_PLANE_MISSION(uLocal_55[0], uLocal_49[0], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0))
		{
			if (ENTITY::IS_ENTITY_IN_AIR(uLocal_49[2]))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[2]))
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_55[2], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0))
					{
						AI::TASK_PLANE_MISSION(uLocal_55[2], uLocal_49[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
				else if (bParam0)
				{
					if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(uLocal_55[2], 0)) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0))
					{
						AI::TASK_PLANE_MISSION(uLocal_55[2], uLocal_49[2], 0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8, 50f, -1f, 90f, 100, 50, 1);
					}
				}
			}
		}
	}
}

void func_4()
{
	int iVar0;
	
	switch (iLocal_88)
	{
		case 0:
			vLocal_61[0 /*3*/] = { -1542.113f, -3023.802f, 23.2538f };
			vLocal_61[1 /*3*/] = { -3089.888f, -1960.075f, 313.559f };
			vLocal_61[2 /*3*/] = { -1037.638f, -3316.12f, 23.2475f };
			vLocal_61[3 /*3*/] = { 451.174f, -4009.46f, 135.1171f };
			vLocal_74 = { -1612.174f, -2688.442f, 12.9444f };
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					bLocal_78 = false;
				}
				else
				{
					bLocal_78 = true;
				}
			}
			iLocal_88 = 1;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(joaat("jet"));
			STREAMING::REQUEST_MODEL(iLocal_84);
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
			VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
			VEHICLE::REQUEST_VEHICLE_RECORDING(104, "AirplaneLandingRedux");
			iLocal_88 = 2;
			break;
		
		case 2:
			if (!bLocal_82)
			{
				if ((((((STREAMING::HAS_MODEL_LOADED(joaat("jet")) && STREAMING::HAS_MODEL_LOADED(iLocal_84)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					bLocal_82 = true;
				}
				else
				{
					STREAMING::REQUEST_MODEL(joaat("jet"));
					STREAMING::REQUEST_MODEL(iLocal_84);
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportJetTakeOff");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(102, "AirportNew");
					VEHICLE::REQUEST_VEHICLE_RECORDING(101, "EastWestFlight");
				}
			}
			if (bLocal_82)
			{
				if (!CAM::IS_SPHERE_VISIBLE(vLocal_61[0 /*3*/], 50f) && !CAM::IS_SPHERE_VISIBLE(vLocal_74, 50f))
				{
					iLocal_88 = 3;
				}
				else
				{
					if (CAM::IS_SPHERE_VISIBLE(vLocal_61[0 /*3*/], 50f))
					{
					}
					if (CAM::IS_SPHERE_VISIBLE(vLocal_74, 50f))
					{
					}
				}
			}
			break;
		
		case 3:
			uLocal_49[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), vLocal_61[0 /*3*/], 0, 1, 1, 0);
			ENTITY::SET_ENTITY_HEADING(uLocal_49[0], 240.3179f);
			VEHICLE::_0x279D50DE5652D935(uLocal_49[0], 0);
			uLocal_49[1] = VEHICLE::CREATE_VEHICLE(joaat("jet"), vLocal_61[1 /*3*/], 0, 1, 1, 0);
			VEHICLE::_0x279D50DE5652D935(uLocal_49[1], 0);
			uLocal_49[2] = VEHICLE::CREATE_VEHICLE(joaat("jet"), vLocal_61[2 /*3*/], 0, 1, 1, 0);
			VEHICLE::_0x279D50DE5652D935(uLocal_49[2], 0);
			uLocal_49[3] = VEHICLE::CREATE_VEHICLE(joaat("jet"), vLocal_61[3 /*3*/], 0, 1, 1, 0);
			VEHICLE::_0x279D50DE5652D935(uLocal_49[3], 0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[iVar0]))
				{
					uLocal_55[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_49[iVar0], 4, iLocal_84, -1, 1, 1);
					ENTITY::SET_ENTITY_LOD_DIST(uLocal_49[iVar0], 1000);
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_49[iVar0], 1, 1, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_55[iVar0], 1);
				}
				iVar0++;
			}
			func_8(&(uLocal_49[1]), &(uLocal_55[1]));
			func_8(&(uLocal_49[2]), &(uLocal_55[2]));
			func_8(&(uLocal_49[3]), &(uLocal_55[3]));
			if (bLocal_78)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
				{
					if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
						iLocal_77 = 1;
					}
					else
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
					}
				}
			}
			iLocal_88 = 4;
			break;
		
		case 4:
			if (iLocal_81)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[3], 0))
				{
					if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[3]))
					{
						if (!iLocal_79)
						{
							func_8(&(uLocal_49[3]), &(uLocal_55[3]));
							iLocal_79 = 1;
						}
					}
				}
			}
			func_3(0);
			func_7();
			switch (iLocal_87)
			{
				case 0:
					if (!iLocal_77)
					{
						if (bLocal_78)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0))
							{
								if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[0]) && !CAM::IS_SPHERE_VISIBLE(vLocal_61[0 /*3*/], 50f))
								{
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportJetTakeOff"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[0], 101, "AirportJetTakeOff", 2, 5, 786603);
										iLocal_77 = 1;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(101, "AirportJetTakeOff");
									}
								}
							}
						}
					}
					if (iLocal_77)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[0], 0))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[0]))
							{
								fLocal_85 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_49[0]);
							}
						}
						if (fLocal_85 > 1100f)
						{
							iLocal_87 = 1;
						}
					}
					break;
				
				case 1:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[1], 0))
					{
						if (bLocal_78)
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[1]))
							{
								if (iLocal_81)
								{
									if (iLocal_79)
									{
										func_6(&(uLocal_49[1]), &(uLocal_55[1]));
										if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
										{
											VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
											iLocal_80 = 0;
											iLocal_87 = 2;
										}
										else
										{
											VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
										}
									}
								}
								else
								{
									func_6(&(uLocal_49[1]), &(uLocal_55[1]));
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "AirplaneLandingRedux"))
									{
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_49[1], 103, "AirplaneLandingRedux", 2, 5, 786603);
										iLocal_80 = 0;
										iLocal_87 = 2;
									}
									else
									{
										VEHICLE::REQUEST_VEHICLE_RECORDING(103, "AirplaneLandingRedux");
									}
								}
							}
						}
					}
					break;
				
				case 2:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[1], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[1]))
						{
							iLocal_87 = 3;
						}
					}
					break;
				
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0))
					{
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "AirportNew"))
						{
							if (!CAM::IS_SPHERE_VISIBLE(vLocal_61[2 /*3*/], 50f))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[2]))
								{
									func_6(&(uLocal_49[2]), &(uLocal_55[2]));
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_49[2], 101, "AirportNew", 1);
									iLocal_87 = 4;
								}
							}
						}
					}
					break;
				
				case 4:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[2], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[2]))
						{
							fLocal_86 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_49[2]);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[1], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[1]))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_49[1]))
							{
								func_8(&(uLocal_49[1]), &(uLocal_55[1]));
								iLocal_80 = 1;
							}
						}
					}
					if (fLocal_86 > 1100f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[3], 0))
						{
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(104, "AirplaneLandingRedux"))
							{
								if (!CAM::IS_SPHERE_VISIBLE(vLocal_61[3 /*3*/], 50f))
								{
									if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[3]) && iLocal_80)
									{
										func_6(&(uLocal_49[3]), &(uLocal_55[3]));
										VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_49[3], 104, "AirplaneLandingRedux", 1);
										iLocal_87 = 5;
									}
								}
							}
						}
					}
					break;
				
				case 5:
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[3]) && !ENTITY::IS_ENTITY_DEAD(uLocal_49[3], 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_49[3]))
						{
							func_5();
							iLocal_87 = 0;
						}
					}
					break;
			}
			break;
	}
}

void func_5()
{
	fLocal_85 = 0f;
	iLocal_77 = 0;
	iLocal_81 = 1;
	iLocal_79 = 0;
}

void func_6(var uParam0, var uParam1)
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, 1, 0);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, 1, 0);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, 1, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 0);
}

void func_7()
{
	vector3 vVar0;
	
	switch (iLocal_83)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_54))
			{
				uLocal_54 = VEHICLE::CREATE_VEHICLE(joaat("jet"), -65.3177f, 15.4603f, 703.106f, 0, 1, 1, 0);
				ENTITY::SET_ENTITY_LOD_DIST(uLocal_54, 1000);
				VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_54, 1, 1, 0);
				VEHICLE::_0x279D50DE5652D935(uLocal_54, 0);
				uLocal_60 = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_54, 4, iLocal_84, -1, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_60, 1);
				iLocal_83 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_54) && !ENTITY::IS_ENTITY_DEAD(uLocal_54, 0))
			{
				if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "EastWestFlight"))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_54))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(uLocal_54, 101, "EastWestFlight", 2, 5, 786603);
						iLocal_83 = 2;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_54) && !ENTITY::IS_ENTITY_DEAD(uLocal_54, 0))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_54))
				{
					if ((ENTITY::IS_ENTITY_OCCLUDED(uLocal_54) && !CAM::IS_SPHERE_VISIBLE(-1602.086f, -2674.039f, 12.9444f, 50f)) && SYSTEM::VDIST2(vVar0, ENTITY::GET_ENTITY_COORDS(uLocal_54, 1)) > 62500f)
					{
						iLocal_83 = 1;
					}
				}
			}
			break;
	}
}

void func_8(var uParam0, var uParam1)
{
	ENTITY::SET_ENTITY_VISIBLE(*uParam0, 0, 0);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, 0, 0);
	ENTITY::SET_ENTITY_COLLISION(*uParam0, 0, 0);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam0, 1);
}

void func_9()
{
}

int func_10()
{
	return 1;
}

void func_11()
{
}

void func_12()
{
	func_1();
	func_13();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_13()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_89))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_89))
		{
			VEHICLE::DELETE_VEHICLE(&uLocal_89);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_89, 0) && !PED::IS_PED_INJURED(uLocal_90))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_89);
			PED::SET_PED_KEEP_TASK(uLocal_90, 1);
			vVar0 = { ENTITY::GET_ENTITY_COORDS(uLocal_89, 1) };
			uVar9 = ENTITY::GET_ENTITY_HEADING(uLocal_89);
			vVar3 = { 0f, 500f, 50f };
			vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, uVar9, vVar3) };
			AI::TASK_HELI_MISSION(uLocal_90, uLocal_89, 0, 0, vVar6, 4, 50f, -1f, 0f, 100, 50, -1082130432, 0);
		}
	}
	if (bLocal_95)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "HelicopterTakeOff");
	}
}

