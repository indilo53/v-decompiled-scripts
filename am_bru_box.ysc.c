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
	struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_70 = 0;
	vector3 vLocal_71[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173 = 0;
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
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_231(ScriptParam_0))
		{
			func_225();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_224(PLAYER::PLAYER_ID()) != 1 && !GAMEPLAY::IS_BIT_SET(Global_2528542.f_850.f_7, 0))
			{
				func_225();
			}
		}
	}
	uLocal_169 = ScriptParam_0.f_19;
	while (true)
	{
		func_223();
		if (func_212())
		{
			func_225();
		}
		if (ScriptParam_0.f_16 >= 32)
		{
			if (func_224(PLAYER::PLAYER_ID()) != 1 && Global_1625025 == 0)
			{
				func_225();
			}
		}
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() != iLocal_173)
		{
			func_225();
		}
		NETWORK::_0x2302C0264EA58D31();
		switch (func_211(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_210())
				{
					if (func_209() == 1)
					{
						vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 1;
					}
					else if (func_209() == 4)
					{
						vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_209() == 1)
				{
					func_184();
				}
				else if (func_209() == 4)
				{
					vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 3;
				}
				if (vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 0)
				{
					if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_60.f_3, 500f, 500f, 500f, 0, 1, 0) && func_224(PLAYER::PLAYER_ID()) != 1) && !GAMEPLAY::IS_BIT_SET(Global_2528542.f_850.f_7, 0))
					{
						vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
					}
				}
				break;
			
			case 3:
				func_182(&(Local_60.f_9));
				if (func_181(&(Local_60.f_9)))
				{
					vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
				}
				break;
			
			case 2:
				vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 4;
			
			case 4:
				func_225();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_209())
			{
				case 0:
					if (func_7())
					{
						Local_60 = 1;
					}
					break;
				
				case 1:
					func_6();
					func_5();
					if (func_1())
					{
						Local_60 = 4;
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
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	if (Local_60.f_7 >= 32 && func_224(PLAYER::PLAYER_ID()) == 1)
	{
		if (func_4(Global_2528542.f_850.f_1))
		{
			return 1;
		}
	}
	if (func_3(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (Local_60.f_8 == 2)
	{
		return 1;
	}
	return 0;
}

int func_3(int iParam0)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2506343;
	}
	else
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0));
		if (iVar0 == joaat("mp_m_freemode_01") || iVar0 == joaat("mp_f_freemode_01"))
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

int func_4(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_5()
{
	switch (Local_60.f_8)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2) || Local_60.f_6 != -1)
			{
				Local_60.f_8 = 1;
			}
			break;
		
		case 1:
			Local_60.f_8 = 2;
			break;
		
		case 2:
			break;
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_60.f_6 == -1)
			{
				if (GAMEPLAY::IS_BIT_SET(vLocal_71[iVar0 /*3*/].f_1, 0))
				{
					Local_60.f_6 = iVar0;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_60.f_1, 7))
			{
				if (GAMEPLAY::IS_BIT_SET(vLocal_71[iVar0 /*3*/].f_1, 1))
				{
					GAMEPLAY::SET_BIT(&(Local_60.f_1), 7);
				}
			}
		}
		iVar0++;
	}
}

int func_7()
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	struct<35> Var13;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (func_210())
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				fVar5 = 250f;
				vVar6 = { Local_60.f_3 };
				if (GAMEPLAY::IS_BIT_SET(Local_60.f_1, 8))
				{
					vVar0 = { Global_2528542.f_850.f_1 };
					uVar3 = Global_2528542.f_850.f_4;
				}
				if (func_224(PLAYER::PLAYER_ID()) == 7)
				{
					iVar12 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
					if (Global_4456448.f_105[iVar12 /*11309*/].f_1278[0 /*36*/].f_10 > 0f)
					{
						vVar6 = { Global_4456448.f_105[iVar12 /*11309*/].f_1278[0 /*36*/].f_3 };
						vVar9 = { Global_4456448.f_105[iVar12 /*11309*/].f_1278[0 /*36*/].f_6 };
						fVar5 = Global_4456448.f_105[iVar12 /*11309*/].f_1278[0 /*36*/].f_10;
						iVar4 = 1;
					}
					else if (Global_4456448.f_105[iVar12 /*11309*/].f_1278[0 /*36*/].f_9 > 0f)
					{
						vVar6 = { Global_4456448.f_105[iVar12 /*11309*/].f_1278[0 /*36*/] };
						fVar5 = Global_4456448.f_105[iVar12 /*11309*/].f_1278[0 /*36*/].f_9;
					}
				}
				Var13.f_5 = 1115815936;
				Var13.f_13 = 2;
				Var13.f_20 = 2;
				Var13.f_32 = -1082130432;
				Var13.f_34 = 1;
				Var13.f_4 = 1;
				Var13.f_5 = 30f;
				Var13.f_10 = 1;
				if (iVar4 == 0)
				{
					if (GAMEPLAY::IS_BIT_SET(Local_60.f_1, 8) || func_180(vVar6, fVar5, &vVar0, &uVar3, &Var13))
					{
						if (Local_60.f_7 >= 32 || func_224(PLAYER::PLAYER_ID()) == 1)
						{
							Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
						}
						else
						{
							Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::_CREATE_PORTABLE_PICKUP_2(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
						}
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_2), uVar3);
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_60.f_1, 8) || func_8(vVar6, vVar9, fVar5, &vVar0, &uVar3, Var13))
				{
					if (Local_60.f_7 >= 32 || func_224(PLAYER::PLAYER_ID()) == 1)
					{
						Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
					}
					else
					{
						Local_60.f_2 = NETWORK::OBJ_TO_NET(OBJECT::_CREATE_PORTABLE_PICKUP_2(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
					}
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_60.f_2), uVar3);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		return 1;
	}
	return 0;
}

int func_8(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7, var uParam8, struct<8> Param9, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43)
{
	struct<17> Var0;
	struct<25> Var34;
	
	if (Param9.f_5 < 20f)
	{
		Param9.f_5 = 20f;
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 2;
	Var34.f_8 = { vParam0 };
	Var34.f_11 = { vParam3 };
	Var34.f_14 = fParam6;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	Param9.f_7 = 0;
	if (func_9(&Var34, &Param9, &Var0))
	{
		*uParam7 = { Var0[0 /*3*/] };
		*uParam8 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_9(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	int iVar17;
	vector3 vVar18;
	vector3 vVar21;
	var uVar24;
	bool bVar25;
	struct<56> Var26;
	bool bVar85;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2405071.f_2454 == *uParam0 || !Global_2405071.f_2454.f_1 == uParam0->f_1) || !Global_2405071.f_2454.f_2 == uParam0->f_2) || !Global_2405071.f_2457 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405071.f_2468 == uParam0->f_8 || !Global_2405071.f_2468.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2468.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2471 == uParam0->f_11) || !Global_2405071.f_2471.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2471.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405071.f_2468 == uParam0->f_8 || !Global_2405071.f_2468.f_1 == uParam0->f_8.f_1) || !Global_2405071.f_2468.f_2 == uParam0->f_8.f_2) || !Global_2405071.f_2471 == uParam0->f_11) || !Global_2405071.f_2471.f_1 == uParam0->f_11.f_1) || !Global_2405071.f_2471.f_2 == uParam0->f_11.f_2) || !Global_2405071.f_2474 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405071.f_2452 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2405071.f_2461))
			{
				if (Global_2405071.f_2461 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2458) < func_179(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2458) < func_179(0))
				{
					return 0;
				}
			}
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_178();
		}
		Global_2405071.f_2452 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2458) > func_179(0))
	{
		Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
		func_172();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		vVar8 = { *uParam0 };
	}
	else
	{
		vVar8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar11 = { vVar8 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar14 = { vVar8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2405071.f_2452)
	{
		NETWORK::_0xFB8F2A6F3DF08CBE();
		PED::_0xFEE4A5459472A9F8();
		func_178();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_171(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_2405071.f_2475 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405071.f_2454 = { *uParam0 };
					Global_2405071.f_2457 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405071.f_2468 = { uParam0->f_8 };
					Global_2405071.f_2471 = { uParam0->f_11 };
					Global_2405071.f_2474 = 0f;
					Global_2405071.f_2454 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405071.f_2468 = { uParam0->f_8 };
					Global_2405071.f_2471 = { uParam0->f_11 };
					Global_2405071.f_2474 = uParam0->f_14;
					Global_2405071.f_2454 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_170(vVar8.x, vVar8.y);
			}
			Global_2405071.f_2453 = 1;
			Global_2405071.f_2452 = 1;
			Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2458 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2461 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405071.f_2452)
	{
		if (Global_2405071.f_2453 == 1)
		{
			if (PATHFIND::_0xF7B79A50B905A30D(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2459) > 5000)
			{
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_169(Global_4456448.f_161209))
					{
						Var26.f_9 = 1;
					}
					func_144(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_143(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405071.f_2453 = 9;
				}
				else
				{
					Global_2405071.f_2453 = 2;
				}
			}
		}
		if (Global_2405071.f_2453 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar11, vVar14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2459) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar11, vVar14) == 0)
			{
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_140(PLAYER::PLAYER_ID(), 0))
				{
					Global_2405071.f_2453 = 3;
				}
				else
				{
					Global_2405071.f_2453 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2463) > 7000)
			{
				func_139(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405071.f_2453 == 3)
		{
			if (func_138() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2459) > 10000)
			{
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2453 = 4;
			}
		}
		if (Global_2405071.f_2453 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_172();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::_0x5A6FFA2433E2F14C(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2453 = 5;
							}
							break;
						
						case 1:
							func_137(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							if (NETWORK::_0x4BA92A18502BCA61(PLAYER::PLAYER_ID(), vVar18, vVar21, uVar24, *uParam1, iVar0))
							{
								Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2453 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::_0x4BA92A18502BCA61(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
								Global_2405071.f_2453 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
					Global_2405071.f_2453 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_137(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405071.f_2453 == 5)
		{
			if (func_63(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405071.f_2479.f_5)
				{
					Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
					Global_2405071.f_2453 = 6;
				}
				else
				{
					Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_2405071.f_2453 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2459) > 20000)
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2453 = 8;
			}
		}
		if (Global_2405071.f_2453 == 6)
		{
			iVar0 = 0;
			Global_2405071.f_2479.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_62(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_61(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2453 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_137(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
					PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405071.f_2453 == 7)
		{
			if (func_63(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405071.f_2613[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_143(Global_2405071.f_2613[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2613[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_59(Global_2405071.f_2613[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2613[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2405071.f_2613[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405071.f_2613[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_12(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar17++;
					}
				}
				Global_2405071.f_2453 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405071.f_2459) > 20000)
			{
				Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
				Global_2405071.f_2453 = 8;
			}
		}
		if (Global_2405071.f_2453 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_11(Global_2405071.f_484))
				{
				}
			}
			else if (Global_2405071.f_2479.f_2)
			{
				func_10(uParam2, &(Global_2405071.f_2479.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar85 = false;
				}
				else
				{
					bVar85 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2405071.f_2454 };
				func_12(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2405071.f_2459 = NETWORK::GET_NETWORK_TIME();
			Global_2405071.f_2453 = 9;
		}
		if (Global_2405071.f_2453 == 9)
		{
			Global_2405071.f_2452 = 0;
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_178();
			return 1;
		}
		Global_2405071.f_2458 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_10(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_11(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_12(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	vector3 vVar0;
	var uVar3;
	struct<56> Var4;
	var uVar63;
	int iVar64;
	bool bVar65;
	int iVar66;
	vector3 vVar67;
	vector3 vVar70;
	vector3 vVar73;
	float fVar76;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar66 = 0;
	}
	else
	{
		iVar66 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar66 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar67 = { *uParam5 };
						if (func_62(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_61(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_61(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar66 += 4;
		}
	}
	if (func_28(*uParam0, &vVar0, iVar66, iParam3, 1))
	{
	}
	else
	{
		bVar65 = true;
	}
	if (bVar65)
	{
		vVar0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar64 = 0;
		while (iVar64 < 2)
		{
			Var4.f_38[iVar64 /*3*/] = { uParam6->f_13[iVar64 /*3*/] };
			Var4.f_45[iVar64] = uParam6->f_20[iVar64];
			iVar64++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_24(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_9 = 1;
		}
		func_144(&vVar0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar70 = { *uParam5 };
				fVar76 = uParam5->f_4;
				break;
			
			case 1:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				break;
			
			case 2:
				vVar70 = { uParam5->f_8 };
				vVar73 = { uParam5->f_11 };
				fVar76 = uParam5->f_14;
				break;
		}
		if (!func_23(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
		{
			if (func_28(*uParam0, &vVar0, iVar66, iParam3, 0))
			{
				if (!func_23(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar70 };
					}
					if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar63, 0, 0))
					{
						vVar0.z = uVar63;
					}
				}
			}
			else if (func_13(uParam0, 1, 1, 1, 1))
			{
				func_12(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar70 + vVar73 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar70 };
				}
				if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar63, 0, 0))
				{
					vVar0.z = uVar63;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_2405071.f_659 = 1;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409968[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409968[iVar0 /*17*/].f_16))
			{
				if (func_22(*uParam0, &(Global_2409968[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409968[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409968[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_14(&vVar1, &(Global_2409968[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_13(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_14(&vVar1, &(Global_2409968[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_14(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_21(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2722) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_19(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405071.f_2722) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_18(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_15(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_15(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;
	vector3 vVar13;
	float fVar16;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	vector3 vVar29;
	
	vVar0 = { vParam4 - vParam1 };
	vVar0.z = 0f;
	vVar3 = { *uParam0 - vParam1 };
	vVar3.z = 0f;
	vVar6 = { func_17(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_16(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(vVar6, vVar3) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar10 = { *uParam0 + vVar6 };
		fVar16 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam4.x, vParam4.y, 0f);
		vVar17 = { vParam1 + vParam4 / Vector(2f, 2f, 2f) };
		vVar17.z = 0f;
		vVar6 = { func_17(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.z = 0f;
		vVar29 = { *uParam0 - vVar20 };
		vVar29.z = 0f;
		vVar6 = { func_17(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_16(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_16(vVar6, vVar29) >= 0f)
		{
			vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		vVar13 = { *uParam0 + vVar6 };
		if (SYSTEM::VDIST(vVar10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar10 };
		}
		else
		{
			*uParam0 = { vVar13 };
		}
	}
}

float func_16(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_17(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

void func_18(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	vVar0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	vVar0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				vVar0.x = (Param1 - fParam7);
			}
			else
			{
				vVar0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			vVar0.y = (Param1.f_1 - fParam7);
		}
		else
		{
			vVar0.y = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			vVar0.x = (Param4 + fParam7);
		}
		else
		{
			vVar0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		vVar0.y = (Param4.f_1 + fParam7);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam7);
	}
	*uParam0 = { vVar0 };
}

void func_19(var uParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_20(&vVar0, 0f, 0f, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_20(&vVar0, 0f, 0f, fParam7);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		vVar3 = { vParam1 + vVar0 };
	}
	else
	{
		vVar3 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar3.x;
	uParam0->f_1 = vVar3.y;
}

void func_20(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

Vector3 func_21(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam10)
	{
		case 0:
			func_19(&vParam0, vParam3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_18(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		
		case 2:
			func_15(&vParam0, vParam3, vParam6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_143(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_59(vVar1, vParam3, vParam6, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam3, vParam6, fParam9, 0, 1))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_22(vector3 vParam0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_143(vParam0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405071.f_2722) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_59(vParam0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(vParam0.z < uParam3->f_2 && vParam0.z < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(vParam0.z > uParam3->f_2 && vParam0.z > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_23(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_59(vParam0, vParam4, vParam7, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam4, vParam7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_24(int iParam0, bool bParam1)
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
	if (iParam0 != func_27())
	{
		if (func_26(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1 && Global_2424047[iParam0 /*416*/].f_309.f_8 != func_27())
			{
				return func_25(Global_2424047[iParam0 /*416*/].f_309.f_5) == 12;
			}
		}
	}
	return 0;
}

int func_25(int iParam0)
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
		case 126:
		case 127:
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
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
	}
	return -1;
}

int func_26(int iParam0, bool bParam1, bool bParam2)
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

int func_27()
{
	return -1;
}

int func_28(vector3 vParam0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_58(vParam0, uParam3))
	{
		if (func_29(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam3, iParam4))
	{
		if (func_29(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_29(vector3 vParam0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_45(Global_2405071.f_507, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_33(*uParam3, 1056964608))
			{
				if (!func_30(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_30(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	vVar1 = { *uParam0 };
	iVar4 = func_32(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411443[iVar4])
	{
		if (func_31(vVar1, &(Global_2410173[iVar4 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_2410173[iVar4 /*141*/][iVar0 /*7*/], Global_2410173[iVar4 /*141*/][iVar0 /*7*/].f_3, Global_2410173[iVar4 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411443[8])
	{
		if (func_31(vVar1, &(Global_2410173[8 /*141*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_15(&vVar1, Global_2410173[8 /*141*/][iVar0 /*7*/], Global_2410173[8 /*141*/][iVar0 /*7*/].f_3, Global_2410173[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(vector3 vParam0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_32(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411453[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411453[1])
	{
		if (Param0 < Global_2411457[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411453[2])
	{
		if (Param0 < Global_2411457[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411457[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411457[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_33(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	if (func_42(PLAYER::PLAYER_ID(), 1))
	{
		if (Global_4456448.f_61781 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_61781)
			{
				if (Global_4456448.f_61782[iVar0 /*80*/].f_7 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_61782[iVar0 /*80*/], Global_4456448.f_61782[iVar0 /*80*/].f_6, Global_4456448.f_61782[iVar0 /*80*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_58131 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_58131)
			{
				if (Global_4456448.f_58134[iVar0 /*151*/].f_16 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_58134[iVar0 /*151*/], Global_4456448.f_58134[iVar0 /*151*/].f_3, Global_4456448.f_58134[iVar0 /*151*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_83453 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_83453)
			{
				if (Global_4456448.f_83457[iVar0 /*250*/].f_12 != 0)
				{
					if (func_34(vParam0, Global_4456448.f_83457[iVar0 /*250*/], Global_4456448.f_83457[iVar0 /*250*/].f_3, Global_4456448.f_83457[iVar0 /*250*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969025.f_255 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969025.f_255)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969025.f_220[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969025.f_220[iVar0], 0))
				{
					if (func_34(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969025.f_220[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_969025.f_220[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969025.f_220[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969025.f_253 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969025.f_253)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969025.f_118[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969025.f_118[iVar0], 0))
				{
					if (func_34(vParam0, ENTITY::GET_ENTITY_COORDS(Global_969025.f_118[iVar0], 1), ENTITY::GET_ENTITY_HEADING(Global_969025.f_118[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969025.f_118[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_34(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (SYSTEM::VDIST(vParam0, vParam3) < func_41(iParam7, 1008981770))
	{
		func_35(vParam3, fParam6, iParam7, &vVar0, &vVar3, &uVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar3, uVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_35(vector3 vParam0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_36(iParam4, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.z = (vVar9.z - ((0.5f * GAMEPLAY::ABSF((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.z = (vVar12.z + ((0.5f * GAMEPLAY::ABSF((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*uParam6 = { vVar12 };
	*uParam7 = GAMEPLAY::ABSF((vVar6.x - vVar3.x));
}

void func_36(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		GAMEPLAY::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_39(iParam0);
		if (iVar0 != 0)
		{
			func_37(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_37(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_38(iParam0, &Global_1315802);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315802[iVar0]))
		{
			GAMEPLAY::GET_MODEL_DIMENSIONS(Global_1315802[iVar0], &(Global_1315806[iVar0 /*3*/]), &(Global_1315813[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315806[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315813[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315806[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315813[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315806[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315813[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315820[iVar0] = (Global_1315813[iVar0 /*3*/] - Global_1315806[iVar0 /*3*/]);
		Global_1315823[iVar0] = (Global_1315813[iVar0 /*3*/].f_1 - Global_1315806[iVar0 /*3*/].f_1);
		Global_1315826[iVar0] = (Global_1315813[iVar0 /*3*/].f_2 - Global_1315806[iVar0 /*3*/].f_2);
		if (Global_1315820[iVar0] > Global_1315829)
		{
			Global_1315829 = Global_1315820[iVar0];
		}
		if (Global_1315826[iVar0] > Global_1315830)
		{
			Global_1315830 = Global_1315826[iVar0];
		}
		iVar0++;
	}
	Global_1315831 = (Global_1315829 * -0.5f);
	Global_1315834 = (Global_1315829 * 0.5f);
	Global_1315831.f_1 = ((((0.5f * Global_1315823[0]) + Global_1315823[1]) + Global_1315802.f_3) * -1f);
	Global_1315834.f_1 = (0.5f * Global_1315823[0]);
	Global_1315831.f_2 = (Global_1315826[0] * -0.5f);
	Global_1315834.f_2 = (Global_1315826[0] * 0.5f);
	*uParam1 = { Global_1315831 };
	*uParam2 = { Global_1315834 };
}

void func_38(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_39(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_40(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_41(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_36(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

int func_42(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_43(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589819[iParam0 /*818*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_43(int iParam0)
{
	return func_44(iParam0);
}

var func_44(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

int func_45(vector3 vParam0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_52(vParam0))
	{
		if (func_13(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_47(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_46(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_19(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_46(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405071.f_2724[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_49(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_14(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_49(vVar2, &uVar1) || func_48(vVar2))
			{
				vVar2 = { *uParam0 };
				func_14(&vVar2, &(Global_2405071.f_363[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_48(vector3 vParam0)
{
	float fVar0;
	
	if (Global_2405071.f_588 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405071.f_585);
		if (fVar0 < Global_2405071.f_588)
		{
			return 1;
		}
	}
	return 0;
}

int func_49(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_51())
	{
		return 0;
	}
	iVar1 = func_50();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9 == 1)
		{
			if (func_22(vParam0, &(Global_2405071.f_363[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405071.f_363[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_51()
{
	return Global_1671295.f_163;
}

int func_52(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405071.f_510 && !Global_2405071.f_511)
	{
		if (!Global_2405071.f_45.f_314)
		{
			if (!func_56(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_55(vParam0, 1008981770))
			{
				if (!func_13(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_13(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_54(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_53(&(Global_2405071.f_45[iVar0 /*12*/])) };
					if (!func_13(&vVar1, 0, 0, 0, 1))
					{
						if (!func_13(&vParam0, 0, 0, 0, 1))
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

Vector3 func_53(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_54(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_55(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405071.f_45[iVar0 /*12*/].f_9)
		{
			if (func_22(vParam0, &(Global_2405071.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_56(int iParam0, bool bParam1)
{
	if (Global_1312448 != 0)
	{
		return func_57(iParam0) != 0;
	}
	return func_42(iParam0, bParam1);
}

int func_57(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		return Global_2424047[iParam0 /*416*/].f_1;
	}
	return 0;
}

int func_58(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405071.f_2250 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2250)
		{
			fVar3 = SYSTEM::VDIST(Global_2405071.f_2251[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405071.f_2251[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_59(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_60(&vParam3, &vParam6);
	if (((!vParam0.x >= vParam3.x || !vParam0.y >= vParam3.y) || !vParam0.x <= vParam6.x) || !vParam0.y <= vParam6.y)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (vParam0.z >= vParam3.z)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (vParam0.z <= vParam6.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam3.z && vParam0.z <= vParam6.z)
	{
		return 1;
	}
	return 0;
}

void func_60(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_61(vector3 vParam0, vector3 vParam3, float fParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (vParam0.x > vParam3.x)
	{
		vVar3.x = vParam0.x;
		vVar0.x = vParam3.x;
	}
	else
	{
		vVar3.x = vParam3.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam3.y)
	{
		vVar3.y = vParam0.y;
		vVar0.y = vParam3.y;
	}
	else
	{
		vVar3.y = vParam3.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam3.z)
	{
		vVar3.z = vParam0.z;
		vVar0.z = vParam3.z;
	}
	else
	{
		vVar3.z = vParam3.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar3 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_62(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_63(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2405071.f_2479.f_1 == 0 && Global_2405071.f_2479 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::_0x3C891A251567DFCE(&(Global_2405071.f_2479.f_1)))
			{
				case 0:
					func_135(uParam1, uParam2);
					if (!Global_2405071.f_2479.f_2)
					{
						if (uParam2->f_7 && Global_2405071.f_550.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
							}
							if (uParam1->f_5 && func_11(Global_2405071.f_484))
							{
								if (!Global_2405071.f_2479.f_5)
								{
									Global_2405071.f_2479.f_5 = 1;
								}
								else
								{
									func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_12(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_135(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_135(uParam1, uParam2);
					Global_2405071.f_2479.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_135(uParam1, uParam2);
				if (!Global_2405071.f_2479.f_2)
				{
					Global_2405071.f_2479.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_132(Global_2405071.f_550, &(Global_2405071.f_2479.f_57), &(Global_2405071.f_2479.f_90));
	}
	if (uParam2->f_7 && !Global_2405071.f_2479.f_4)
	{
		Global_2405071.f_2479.f_4 = 1;
		func_71(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2405071.f_2479.f_1 > 0 || Global_2405071.f_2479 > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405071.f_2479.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405071.f_2479.f_3)
					{
						iVar4 = Global_2405071.f_2479.f_3 + 1;
					}
					if (iVar4 > (Global_2405071.f_2479.f_1 - 1))
					{
						iVar4 = (Global_2405071.f_2479.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, &vVar0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar4, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = NETWORK::_0x6C34F1208B8923FD(iVar4);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar4, &iVar5);
					}
					func_71(vVar0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405071.f_2479.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2405071.f_2479.f_1;
		}
		if (Global_2405071.f_2479.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405071.f_2876)
			{
				func_65(&(Global_2405071.f_2479.f_6[0 /*10*/]), &(Global_2405071.f_2479.f_6[1 /*10*/]), &(Global_2405071.f_2479.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_11(Global_2405071.f_484))
			{
				if (Global_2405071.f_2479.f_2)
				{
					func_10(uParam0, &(Global_2405071.f_2479.f_6));
					func_64(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
					func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_64(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405071.f_2479.f_2)
			{
				func_10(uParam0, &(Global_2405071.f_2479.f_6));
				func_64(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2405071.f_2479.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_30(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_64(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
					func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_64(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
				func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_64(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405071.f_2454 };
		if (uParam1->f_5 && func_11(Global_2405071.f_484))
		{
			if (!Global_2405071.f_2479.f_5)
			{
				Global_2405071.f_2479.f_5 = 1;
			}
			else
			{
				func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar8 = false;
			}
			else
			{
				bVar8 = true;
			}
			func_12(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_64(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_64(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405071.f_2613[(3 - iVar0) /*3*/] = { Global_2405071.f_2613[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405071.f_2613[0 /*3*/] = { vParam0 };
}

void func_65(var uParam0, var uParam1, var uParam2)
{
	if (func_11(Global_2405071.f_484) && func_70() < 4096)
	{
		func_69(uParam0, 0f);
		func_69(uParam1, uParam0->f_2);
		func_69(uParam2, uParam1->f_2);
	}
	else
	{
		func_68(uParam0);
		func_67(uParam2, uParam0->f_4);
		func_66(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_66(var uParam0, vector3 vParam1, vector3 vParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2407993[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_2407993[iVar0 /*10*/].f_4, vParam4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407993[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_67(var uParam0, vector3 vParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2407993[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2407993[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_68(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			if (Global_2407993[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2407993[iVar0 /*10*/].f_1;
				Var2 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_69(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			if (Global_2407993[iVar0 /*10*/].f_2 < fVar1 && Global_2407993[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2407993[iVar0 /*10*/].f_2;
				Var2 = { Global_2407993[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_70()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2407993[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_71(vector3 vParam0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar20;
	var uVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2405071.f_484 == 1)
		{
			if (GAMEPLAY::ABSF((Global_2405071.f_507.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_128(PLAYER::PLAYER_ID()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_127(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!PED::_0x68772DB2B2526F9F(PLAYER::PLAYER_PED_ID(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::_0x68772DB2B2526F9F(PLAYER::PLAYER_PED_ID(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_126(vParam0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam5->f_13[iVar11 /*3*/]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(uParam5->f_23) > 0f && SYSTEM::VMAG(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam5->f_23, uParam5->f_26, uParam5->f_29, 0, 1))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_120(vParam0, fParam3, uParam4->f_15, func_125(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405071.f_3;
		}
	}
	else if (!func_117(vParam0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_114(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_114(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405071.f_691)
		{
			vVar12 = { Global_2405071.f_507 };
			if (Global_2405071.f_484 == 26)
			{
				vVar12 = { Global_2405071.f_550.f_18 };
			}
			if (!func_46(vParam0, 0.5f))
			{
				if (func_52(vVar12))
				{
					if (!func_13(&vParam0, 0, 0, 0, 1) && !func_113(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_113(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_112(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_111(PLAYER::PLAYER_ID()) && func_109(PLAYER::PLAYER_ID())))
		{
			if (!func_108(&vParam0, &(Global_2405071.f_2479.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_109(PLAYER::PLAYER_ID()))
		{
			if (!func_107(vParam0, &(Global_2405071.f_2479.f_57), &(Global_2405071.f_2479.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_106(vParam0))
	{
		if (uParam4->f_5)
		{
			if (func_11(Global_2405071.f_484))
			{
				if (func_55(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_105(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405071.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405071.f_691)
		{
			if (!func_47(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_30(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_54(vParam0, 1008981770);
		if (iVar16 > -1)
		{
			func_104(vParam0, &vVar17, &vVar20, &uVar23);
			if (!func_99(&(Global_2405071.f_45[iVar16 /*12*/]), vVar17, vVar20, uVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_33(vParam0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_98(vParam0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405071.f_2876 && uParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_90(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_90(vParam0, Global_2405071.f_2454, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_11(Global_2405071.f_484) && iVar8 < 4096)
			{
				Var25.f_2 = func_88(vParam0);
			}
			uVar7 = func_77(vParam0, 1, 0, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = fParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_76(Var25);
			Global_2405071.f_2479.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405071.f_2479.f_6[iVar24 /*10*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_90(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_90(vParam0, Global_2405071.f_2454, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_11(Global_2405071.f_484) && iVar8 == Global_2405071.f_2479.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_88(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405071.f_2479.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = fParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_75(Var25, iVar24);
							Global_2405071.f_2479.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405071.f_2479.f_6[iVar24 /*10*/] || (iVar8 == Global_2405071.f_2479.f_6[iVar24 /*10*/] && fVar0 > Global_2405071.f_2479.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_75(Var25, iVar24);
						Global_2405071.f_2479.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_73(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_77(vParam0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_72(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_72(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405071.f_2479.f_6[iVar24 /*10*/] || (iVar8 == Global_2405071.f_2479.f_6[iVar24 /*10*/] && fVar3 > Global_2405071.f_2479.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_75(Var25, iVar24);
						Global_2405071.f_2479.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_72(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_73(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_26(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_26(iVar1, 1, 1))
		{
			if (!func_140(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_74(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam7 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_74(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

void func_75(struct<10> Param0, int iParam10)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405071.f_2479.f_6[iParam10 /*10*/] };
	Global_2405071.f_2479.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_75(Var0, iParam10 + 1);
	}
}

void func_76(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;
	
	Var1.f_2 = 1176256410;
	iVar11 = func_70();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] < iVar11)
		{
			Global_2407993[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] == 0)
		{
			Global_2407993[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407993[iVar0 /*10*/] > 0)
		{
			if (Global_2407993[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2407993[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2407993[iVar13 /*10*/] = { Param0 };
	}
}

float func_77(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_26(iVar11, 1, 1) || (iParam7 == 1 && func_26(iVar11, 0, 0)))
		{
			if (!iVar11 == PLAYER::PLAYER_ID() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_79(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar11) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar11) == -1 || !func_56(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar11) || !bParam6)
					{
						if (func_74(iVar11))
						{
							vVar5 = { func_78(iVar11) };
							if (!iVar11 == PLAYER::PLAYER_ID())
							{
								vVar8 = { unk_0x64D779659BC37B19(PLAYER::GET_PLAYER_PED(iVar11)) };
							}
							else
							{
								vVar8 = { vVar5 };
							}
							if (!bParam6)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar8.z < -100f)
								{
									vVar8.z = vParam0.z;
								}
							}
							fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, 1);
							fVar2 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar8, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

Vector3 func_78(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_79(int iParam0)
{
	if (func_26(iParam0, 0, 1))
	{
		if (!func_86(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_42(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_85(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_42(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_80(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_80(int iParam0)
{
	if (func_84(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_83(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2505680))
	{
		return 1;
	}
	if (func_81(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_82(iParam0);
	if (!iVar0 == func_27())
	{
		if (iVar0 == func_82(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)
{
	if (iParam0 != func_27())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_27();
}

struct<13> func_83(var uParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

int func_84(var uParam0, var uParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2505680 = { func_83(uParam0) };
		Global_2505693 = { func_83(uParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2505680))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2505693))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505610, 35, &Global_2505680);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505645, 35, &Global_2505693);
				if (Global_2505610 == Global_2505645)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_85(int iParam0, int iParam1, int iParam2)
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
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 0);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 1);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_55, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_86(int iParam0)
{
	if (func_140(iParam0, 0))
	{
		return 1;
	}
	if (func_87())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_87()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

float func_88(vector3 vParam0)
{
	var uVar0;
	
	return func_89(vParam0, &(Global_2405071.f_45), &uVar0);
}

float func_89(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405071.f_2722) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_90(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_72(SYSTEM::VDIST(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_77(vParam0, 1, 0, 0, 1, 0);
	fVar0 = func_72(fVar4, 0f, func_97(), func_95(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_93(vParam0);
	fVar0 = func_72(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_56(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_92(vParam0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_72(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_91(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_72(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_72(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_72(SYSTEM::VDIST(Global_2405071.f_507, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_91(vector3 vParam0, var uParam3, var uParam4)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar5, &uVar4, 1, 1077936128, 0);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(uVar3))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(uVar3, &vVar0);
		*uParam3 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam4 = GAMEPLAY::ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_92(vector3 vParam0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_26(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_26(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam3) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam3) == -1))
					{
						if (Global_2417757.f_261[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417757.f_131[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_93(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar2], 0))
			{
				if (func_94(uVar6[iVar2]))
				{
					vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar6[iVar2], 1) };
					fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2405071.f_2921)
	{
		if (Global_969025.f_254 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_969025.f_254)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969025.f_139[iVar2]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_969025.f_139[iVar2], 0))
					{
						if (func_94(Global_969025.f_139[iVar2]))
						{
							vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_969025.f_139[iVar2], 1) };
							fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, 1);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_94(var uParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0xCC6E3B6BB69501F1(Global_1574954[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1574954[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1589819[PLAYER::PLAYER_ID() /*818*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xCC6E3B6BB69501F1(Global_1574664[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1574664[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_95()
{
	if (func_96())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_96()
{
	if (Global_2405071.f_45.f_65 && !Global_2405071.f_45.f_301)
	{
		if (!func_86(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_97()
{
	if (func_96())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405071.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405071.f_45.f_67)) || Global_2405071.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_98(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam7)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam8, 0))) || ((iParam3 == 1 && fParam9 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam9, 1)))
	{
		return 1;
	}
	return 0;
}

int func_99(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_103(*uParam0, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_102(*uParam0, uParam0->f_3, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_100(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_100(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, vector3 vParam10, var uParam13)
{
	vector3 vVar0[8];
	int iVar25;
	
	func_101(vParam0, vParam3, fParam6, &vVar0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar25 /*3*/], vParam7, vParam10, uParam13, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_101(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	
	if (vParam0.z == vParam3.z)
	{
		vParam3.z = (vParam3.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam3 };
	vVar3 = { func_17(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar3 = { vVar3 / FtoV(SYSTEM::VMAG(vVar3)) };
	vVar3 = { vVar3 * FtoV((fParam6 * 0.5f)) };
	if (vParam0.z > vParam3.z)
	{
		uVar6 = vParam3.z;
		uVar7 = vParam0.z;
	}
	else
	{
		uVar6 = vParam0.z;
		uVar7 = vParam3.z;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, vParam0.y, vParam0.x) - vVar3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, vParam0.y, vParam0.x) + vVar3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, vParam3.y, vParam3.x) + vVar3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, vParam3.y, vParam3.x) - vVar3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, vParam3.y, vParam3.x) + vVar3 };
}

int func_102(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, var uParam12)
{
	vector3 vVar0[8];
	int iVar25;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam3.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam3.y, vParam3.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam3.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam3.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam3.x, vParam0.y, vParam3.z };
	vVar0[6 /*3*/] = { vParam3.x, vParam3.y, vParam3.z };
	vVar0[7 /*3*/] = { vParam3.x, vParam3.y, vParam0.z };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar25 /*3*/], vParam6, vParam9, uParam12, 0, 1))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_103(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10)
{
	vector3 vVar0[4];
	int iVar13;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam3, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam3), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam3) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar13 /*3*/], vParam4, vParam7, uParam10, 0, 1))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_104(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	vVar1 = { vParam0 };
	iVar4 = func_32(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411443[iVar4])
	{
		if (func_31(vVar1, &(Global_2410173[iVar4 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410173[iVar4 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410173[iVar4 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410173[iVar4 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411443[8])
	{
		if (func_31(vVar1, &(Global_2410173[8 /*141*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410173[8 /*141*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410173[8 /*141*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410173[8 /*141*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_105(vector3 vParam0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2405071.f_45.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2405071.f_45.f_56))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				uVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(uVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(uVar0);
					if (!iVar1 == Global_2405071.f_45.f_57)
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
		}
	}
	return 1;
}

int func_106(vector3 vParam0)
{
	switch (Global_2405071.f_2475)
	{
		case 0:
			return func_143(vParam0, Global_2405071.f_2454, Global_2405071.f_2457, 0, 0);
			break;
		
		case 1:
			return func_59(vParam0, Global_2405071.f_2468, Global_2405071.f_2471, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_2405071.f_2468, Global_2405071.f_2471, Global_2405071.f_2474, 0, 1);
			break;
	}
	return 0;
}

int func_107(vector3 vParam0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(uParam3[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		vVar2 = { *(uParam4[iVar1 /*10*/]) };
		vVar5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar5, fVar8, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_108(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_19(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0)
{
	switch (Global_1312448)
	{
		case 0:
			if (!func_110(iParam0))
			{
				if (Global_1589819[iParam0 /*818*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_110(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_196 != 0;
}

int func_111(int iParam0)
{
	if (func_42(iParam0, 1))
	{
		if (Global_1589819[iParam0 /*818*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_112(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2405071.f_2613[iVar0 /*3*/], vParam0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_113(var uParam0, bool bParam1)
{
	var uVar0;
	vector3 vVar1;
	float fVar4;
	
	if (func_48(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar4 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_19(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 0, fVar4);
			if (func_49(vVar1, &uVar0) || func_48(vVar1))
			{
				vVar1 = { *uParam0 };
				func_19(&vVar1, Global_2405071.f_585, Global_2405071.f_588, 1036831949, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_114(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_26(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_115(PLAYER::PLAYER_ID()), vParam0, 1) <= (fVar2 + fParam3))
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
		if (func_26(iVar1, 1, 1))
		{
			if (!func_140(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_74(iVar1) || !bParam10) && !Global_2424047[iVar1 /*416*/].f_259)
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
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_115(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_115(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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

Vector3 func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_116() && Global_1589819[iVar0 /*818*/].f_789) && !func_4(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_78(iParam0);
}

var func_116()
{
	return Global_2448756.f_16;
}

int func_117(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_119(vParam0, fParam3, iParam4, iParam5, 0) || func_118(vParam0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_118(vector3 vParam0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_34(vParam0, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_119(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_26(iVar1, 0, 1) && func_26(iParam4, 0, 1))
				{
					if (Global_2417757.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417757.f_131[iVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_78(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417757.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417757.f_131[iVar0 /*3*/], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_26(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_78(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_120(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, int iParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405071.f_3 = 0;
	if (!func_117(vParam0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2405071.f_3++;
		if (bParam5)
		{
			if (func_171(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_124(vParam0, fParam12))
				{
					Global_2405071.f_3++;
					if (!func_33(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_171(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
				if (!func_124(vParam0, fParam12))
				{
					Global_2405071.f_3++;
					if (!func_121(vParam0, fParam3, fParam9, iParam10, 1084227584))
					{
						Global_2405071.f_3++;
						if (!func_33(vParam0, 1056964608))
						{
							Global_2405071.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			}
		}
		else if (func_171(vParam0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
			if (!func_124(vParam0, fParam12))
			{
				Global_2405071.f_3++;
				if (!func_121(vParam0, fParam3, fParam9, iParam10, fParam11))
				{
					Global_2405071.f_3++;
					if (!func_33(vParam0, 1056964608))
					{
						Global_2405071.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405071.f_3 = (Global_2405071.f_3 + Global_2405071.f_2);
		}
	}
	return 0;
}

int func_121(vector3 vParam0, float fParam3, float fParam4, var uParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_26(iVar1, 1, 1) && func_74(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_123(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_122(func_78(iVar1), vParam0, fParam3, fParam4, uParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_122(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, var uParam8, float fParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	vVar0.x = SYSTEM::SIN(fParam6);
	vVar0.y = SYSTEM::COS(fParam6);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam7, fParam7, fParam7) };
	vVar3 = { vParam3 + vVar0 };
	vVar3.z = vParam3.z;
	vVar3.z = (vVar3.z + fParam9);
	vParam3.z = (vParam3.z + fParam9);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam3, vVar3, uParam8, 0, 1);
}

bool func_123(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_124(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_26(iVar1, 1, 1) && func_74(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_56(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_123(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_78(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0)
{
	if ((Global_2405071.f_484 == 9 || Global_2405071.f_484 == 9) || (Global_2405071.f_484 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_126(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_26(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_74(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_80(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_78(iVar1), vParam0, 1) < fParam3)
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

int func_127(vector3 vParam0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 1, 1))
			{
				if ((!func_140(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_78(iVar1), vParam0, 1) <= (fVar2 + fParam3))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_128(int iParam0)
{
	if (((func_56(iParam0, 1) || func_131(iParam0)) || func_130(iParam0, 0)) || func_129(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	if (!func_26(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589819[iParam0 /*818*/].f_35;
}

int func_130(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1626536[iVar0 /*603*/] != -1;
	}
	return 0;
}

void func_132(vector3 vParam0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	vector3 vVar17;
	vector3 vVar20;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2359721[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2359721[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2359721[iVar1 /*26*/].f_6.f_2;
					func_134(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5920[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5920[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_134(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 13)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5966[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_5966[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_134(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311706)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			vVar17 = { Global_1311025[iVar1 /*8*/].f_1 + Global_1311025[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar17, vParam0) < SYSTEM::VDIST(vVar20, vParam0))
			{
				Var7 = { Global_1311025[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1311025[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1311025[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_2359397[iVar1 /*3*/] };
				func_133(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_133(var uParam0, var uParam1, int iParam2)
{
	Global_2412448 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_133(&Global_2412448, uParam1, iParam2 + 1);
	}
}

void func_134(var uParam0, var uParam1, int iParam2)
{
	Global_2412444 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_134(&Global_2412444, uParam1, iParam2 + 1);
	}
}

void func_135(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	if (Global_2405071.f_2250 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_2250)
		{
			if (func_136(Global_2405071.f_2251[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2405071.f_2251[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405071.f_2251[iVar0 /*4*/] };
					fVar4 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_71(Global_2405071.f_2251[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2405071.f_2479++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405071.f_2876)
	{
		func_65(&(Global_2405071.f_2479.f_6[0 /*10*/]), &(Global_2405071.f_2479.f_6[1 /*10*/]), &(Global_2405071.f_2479.f_6[2 /*10*/]));
	}
}

int func_136(vector3 vParam0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_23(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_23(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_137(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_60(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0.5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*uParam8 = (fVar0 * 0.5f);
}

var func_138()
{
	return Global_1310987.f_4;
}

void func_139(var uParam0, var uParam1)
{
	func_178();
	func_170(uParam0, uParam1);
}

bool func_140(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_141(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
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

int func_141(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_142();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_142()
{
	return Global_1312745;
}

bool func_143(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		vParam0.z = 0f;
		vParam3.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (vParam0.z > vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (vParam0.z < vParam3.z)
		{
			vParam0.z = vParam3.z;
		}
		return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam3) < (fParam6 + 0.01f);
}

void func_144(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405071.f_1742 > 0)
	{
		iVar0 = 0;
		while (func_166(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_145(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_145(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	vector3 vVar27;
	var uVar30;
	vector3 vVar31;
	float fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_165(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412458.f_162 = 0;
	Global_2412458.f_163 = 0;
	Global_2412458.f_164 = -99;
	Global_2412458.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412458[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412458.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_39(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &vVar1);
			bVar12 = false;
			if (Global_2412458.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412458.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::_GET_IS_SLOW_ROAD_FLAG(iVar8)) || PATHFIND::_GET_SUPPORTS_GPS_ROUTE_FLAG(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_113(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_164(vVar1))
									{
										vVar1 = { func_160(vVar1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_33(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_159(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_165(&vVar1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_155(vVar1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_45(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_154(vVar1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_171(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_171(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_152(vVar1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_151(vVar1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412458.f_162)
																										{
																											Global_2412458[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412458.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412458.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412458.f_162 == 0)
																									{
																										Global_2412458[0 /*3*/] = { vVar1 };
																										Global_2412458.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412458.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412458[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_150(vVar1, fVar4, iVar16);
																													iVar16 = Global_2412458.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412458.f_162++;
																									if (Global_2412458.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412458.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412458[Global_2412458.f_162 /*3*/] = { vVar1 };
																									Global_2412458.f_121[Global_2412458.f_162] = fVar4;
																									Global_2412458.f_162++;
																									if (func_159(vVar1, uParam2))
																									{
																										Global_2412458.f_163++;
																									}
																									if (Global_2412458.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412458.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412458.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412458[0 /*3*/] };
						*uParam1 = Global_2412458.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412458.f_163 > 0 && !Global_2412458.f_163 == Global_2412458.f_162)
						{
							func_148(0, uParam2);
						}
						iVar26 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2412458.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412458[0 /*3*/] };
						uVar30 = Global_2412458.f_121[0];
						Global_2412458[0 /*3*/] = { Global_2412458[iVar26 /*3*/] };
						Global_2412458.f_121[0] = Global_2412458.f_121[iVar26];
						Global_2412458[iVar26 /*3*/] = { vVar27 };
						Global_2412458.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412458[0 /*3*/] };
						*uParam1 = Global_2412458.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_147(iVar15, *uParam0, &iVar0, &vVar1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						vVar31 = { vVar1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_45(uParam2->f_35, &vVar31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_165(&vVar31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_146(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412458.f_164 = iVar8;
	}
	return 0;
}

void func_146(var uParam0, var uParam1, var uParam2, vector3 vParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_117(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_147(int iParam0, vector3 vParam1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_160(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_164(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_148(int iParam0, var uParam1)
{
	if (!func_159(Global_2412458[iParam0 /*3*/], uParam1))
	{
		Global_2412458.f_162 = (Global_2412458.f_162 - 1);
		func_149(iParam0);
		if (Global_2412458.f_162 > Global_2412458.f_163)
		{
			func_148(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_148(iParam0 + 1, uParam1);
	}
}

void func_149(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412458[iParam0 /*3*/] = { Global_2412458[iParam0 + 1 /*3*/] };
			Global_2412458.f_121[iParam0] = Global_2412458.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_150(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;
	
	vVar0 = { Global_2412458[iParam4 /*3*/] };
	uVar3 = Global_2412458.f_121[iParam4];
	Global_2412458[iParam4 /*3*/] = { vParam0 };
	Global_2412458.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412458.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_150(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_151(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_79(iVar5))
		{
			vVar1 = { func_78(iVar5) };
			fVar7 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_152(vector3 vParam0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	int iVar4;
	vector3 vVar5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_26(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_74(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_80(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									uVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(uVar3) && !ENTITY::IS_ENTITY_DEAD(uVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(uVar3);
										vVar5 = { ENTITY::GET_ENTITY_COORDS(uVar3, 0) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(uVar3);
										if (func_153(vParam0, fParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_34(func_78(iVar1), vParam0, fParam3, iParam4, fVar2))
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

int func_153(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	
	if (func_34(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_36(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	vVar20 = { 0f, vVar17.y, 0f };
	func_20(&vVar20, 0f, 0f, fParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_20(&vVar23, 0f, 0f, fParam3);
	vVar26 = { (GAMEPLAY::ABSF((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
	func_20(&vVar26, 0f, 0f, fParam3);
	vVar1[0 /*3*/] = { vParam0 + vVar20 + vVar26 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * GAMEPLAY::ABSF((vVar17.z - vVar14.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar20 - vVar26 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * GAMEPLAY::ABSF((vVar17.z - vVar14.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar23 + vVar26 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * GAMEPLAY::ABSF((vVar17.z - vVar14.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar23 - vVar26 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * GAMEPLAY::ABSF((vVar17.z - vVar14.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_34(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_153(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_154(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	uVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(uVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(uVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar1, 0) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(uVar1);
		if (func_153(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	uVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(uVar1) && !ENTITY::IS_ENTITY_DEAD(uVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(uVar1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(uVar1, 0) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(uVar1);
		if (func_153(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_155(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_158(vParam0, fParam3, iParam4, iParam5, iParam6) || func_156(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_156(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_157(vParam0, iParam4, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_153(vParam0, fParam3, iParam4, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_26(iVar2, 0, 1) && func_26(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_157(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_41(iParam3, 1008981770);
	fVar1 = func_41(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_158(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_26(iVar1, 0, 1) && func_26(iParam5, 0, 1))
			{
				if (Global_2417757.f_261[iVar0])
				{
					if (func_34(Global_2417757.f_131[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_34(func_78(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417757.f_261[iVar0])
			{
				if (func_34(Global_2417757.f_131[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_26(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_34(func_78(iVar1), vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_159(vector3 vParam0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_143(vParam0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_59(vParam0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_160(vector3 vParam0, var uParam3, int iParam4, bool bParam5, vector3 vParam6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(vParam6) > 0f)
		{
			if (!func_163(vParam0, *uParam3, vParam6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_162(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_161(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_161(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam6) > 0f)
	{
		if (!func_163(vParam0, *uParam3, vParam6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || vParam0.z == 0f) && bParam10))
			{
				*uParam3 = (*uParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *uParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xA0F8A7517A273C05(vParam0, *uParam3, &vVar15))
		{
			vVar18 = { vVar15 - vParam0 };
			if (!iParam11 == 0)
			{
				vVar21 = { vVar18 / FtoV(SYSTEM::VMAG(vVar18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_161(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_161(iParam11, 1.5f);
				}
				vVar21 = { vVar21 * FtoV((fVar14 * 0.5f)) };
				vVar18 = { vVar18 - vVar21 };
				vVar15 = { vParam0 + vVar18 };
			}
			vVar21 = { vVar0 - vVar15 };
			vVar0 = { vVar15 };
		}
	}
	return vVar0;
}

float func_161(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_36(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_162(vector3 vParam0)
{
	float fVar0;
	
	if (GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_163(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0f, 1f, 0f };
	func_20(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_16(vVar3, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_164(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_32(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2412165[iVar1])
	{
		if (func_31(vParam0, &(Global_2411462[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412165[8])
	{
		if (func_31(vParam0, &(Global_2411462[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_165(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405071.f_26.f_18)
	{
		switch (Global_2405071.f_26.f_17)
		{
			case 0:
				if (func_143(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_59(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_21(*uParam0, Global_2405071.f_26.f_10, Global_2405071.f_26.f_13, Global_2405071.f_26.f_16, Global_2405071.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_166(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	bool bVar11;
	int iVar12;
	float fVar13;
	int iVar14;
	vector3 vVar15;
	var uVar18;
	
	if (Global_2405071.f_1742 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_45(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_165(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412458.f_162 = 0;
		Global_2412458.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412458[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412458.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_167(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405071.f_1742)
		{
			iVar1 = Global_2405071.f_2148[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405071.f_1743[iVar1 /*4*/] };
				fVar5 = Global_2405071.f_1743[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_155(vVar2, fVar5, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_45(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar7 = uParam2->f_31;
										bVar8 = true;
										iVar9 = 1;
										fVar10 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											fVar10 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar7 = 0;
											bVar8 = false;
											iVar9 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar10 = (fVar10 * 0.375f);
											}
										}
										else
										{
											bVar8 = true;
											iVar9 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar10 = (fVar10 * 0.375f);
												}
											}
										}
										bVar11 = false;
										if (!func_154(vVar2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_171(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_171(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_152(vVar2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_151(vVar2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412458.f_162)
															{
																Global_2412458[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412458.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412458.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412458.f_162 == 0)
														{
															Global_2412458[0 /*3*/] = { vVar2 };
															Global_2412458.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412458.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_35) < SYSTEM::VDIST2(Global_2412458[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_150(vVar2, fVar5, iVar6);
																		iVar6 = Global_2412458.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412458.f_162++;
														if (Global_2412458.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1742;
															}
															else if (Global_2412458.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1742;
															}
														}
													}
													else
													{
														Global_2412458[Global_2412458.f_162 /*3*/] = { vVar2 };
														Global_2412458.f_121[Global_2412458.f_162] = fVar5;
														Global_2412458.f_162++;
														if (Global_2412458.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405071.f_1742;
															}
															else if (Global_2412458.f_162 == 40)
															{
																iVar0 = Global_2405071.f_1742;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar5;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar5;
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
		if (Global_2412458.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412458[0 /*3*/] };
				*uParam1 = Global_2412458.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412458.f_163 > 0 && !Global_2412458.f_163 == Global_2412458.f_162)
				{
					func_148(0, uParam2);
				}
				iVar14 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2412458.f_162);
				vVar15 = { Global_2412458[0 /*3*/] };
				uVar18 = Global_2412458.f_121[0];
				Global_2412458[0 /*3*/] = { Global_2412458[iVar14 /*3*/] };
				Global_2412458.f_121[0] = Global_2412458.f_121[iVar14];
				Global_2412458[iVar14 /*3*/] = { vVar15 };
				Global_2412458.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412458[0 /*3*/] };
				*uParam1 = Global_2412458.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_167(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405071.f_1742)
	{
		uVar1 = func_168(vParam0, fVar0, &fVar0);
		Global_2405071.f_2148[iVar2] = uVar1;
		iVar2++;
	}
}

int func_168(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405071.f_1742)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405071.f_1743[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_169(int iParam0)
{
	return iParam0 == 50;
}

void func_170(var uParam0, var uParam1)
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
	Global_2405071.f_2462 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405071.f_2460 = 1;
	Global_2405071.f_2463 = NETWORK::GET_NETWORK_TIME();
}

int func_171(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405071.f_2 = 0;
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
	Global_2405071.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam14 > 0f)
	{
		if (func_126(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_114(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

void func_172()
{
	func_177();
	func_176();
	func_175();
	func_174();
	func_173();
}

void func_173()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2407993[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_174()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405071.f_2479.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_175()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405071.f_2479.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_176()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405071.f_2479.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_177()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405071.f_2479 = { Var0 };
}

void func_178()
{
	if (Global_2405071.f_2460)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405071.f_2462)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405071.f_2460 = 0;
	}
}

int func_179(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_180(vector3 vParam0, float fParam3, var uParam4, var uParam5, var uParam6)
{
	struct<17> Var0;
	struct<18> Var34;
	vector3 vVar62;
	
	if (uParam6->f_5 > (fParam3 - 20f))
	{
		uParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34 = { vParam0 };
	Var34.f_3 = uParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = 0;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	if (func_9(&Var34, uParam6, &Var0))
	{
		if ((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8)
		{
			vVar62 = { vParam0 - Var0[0 /*3*/] };
			if (vVar62.z > uParam6->f_12)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_181(var uParam0)
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

void func_182(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_183(uParam0, 0, 0);
		}
	}
}

void func_183(var uParam0, bool bParam1, bool bParam2)
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

void func_184()
{
	switch (vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			func_208();
			func_206();
			if (func_195())
			{
				func_187();
				func_186();
				func_185(35);
				vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			else if (Local_60.f_8 >= 1)
			{
				func_186();
				vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 1;
			}
			break;
		
		case 1:
			if (Local_60.f_8 >= 2)
			{
				vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_185(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8462)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1312570.f_1[iVar0] == -1)
		{
			Global_1312570.f_1[iVar0] = iParam0;
			Global_1312570 = 1;
			return;
		}
		iVar0++;
	}
}

void func_186()
{
	if (UI::DOES_BLIP_EXIST(uLocal_170))
	{
		UI::REMOVE_BLIP(&uLocal_170);
	}
}

void func_187()
{
	if (!GAMEPLAY::IS_BIT_SET(Global_2437364.f_3880, 0))
	{
		GAMEPLAY::SET_BIT(&(Global_2437364.f_3880), 0);
		func_188();
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_2437364.f_3880), 1);
	}
}

void func_188()
{
	func_189(1188, -1);
}

void func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_193(iParam0, func_194(iParam1), 0);
	iVar0++;
	if (!func_192(iParam0))
	{
		func_191(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_190(iParam0, iVar0, iParam1, 1);
	}
}

void func_190(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2539502[iParam0 /*3*/][func_194(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1382642[func_194(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1382648[func_194(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1382654[func_194(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1382660[func_194(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1382618[func_194(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1382624[func_194(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1382630[func_194(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1382636[func_194(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1382594[func_194(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1382600[func_194(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1382606[func_194(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1382612[func_194(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1382666[func_194(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1382672[func_194(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1382678[func_194(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1382684[func_194(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1382690[func_194(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1382696[func_194(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1382702[func_194(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1382708[func_194(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2573513[0 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2573513[1 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2573513[2 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2573513[3 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 8956:
			Global_2573644[func_194(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1382714[func_194(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1382720[func_194(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1382726[func_194(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1382732[func_194(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2573577[0 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2573577[1 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2573577[2 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2573577[3 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2573577[4 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2573647[0 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2573647[1 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2573647[2 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2573647[3 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2573647[4 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2573663[0 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2573663[1 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2573663[2 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2573663[3 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2573663[4 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2573577[5 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2573513[4 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2573679[func_194(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2573688[func_194(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2573682[func_194(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2573691[func_194(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2573685[func_194(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2573694[func_194(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2573697[func_194(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2573577[6 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2573513[5 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2573577[7 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2573513[6 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2573577[8 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2573513[7 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2573577[9 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2573513[8 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2573577[10 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2573513[9 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2573577[11 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2573513[10 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2573577[12 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2573513[11 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2573577[13 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2573513[12 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2573577[14 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2573513[13 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2573577[15 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2573513[14 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2573577[16 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2573513[15 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2573577[17 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2573513[16 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2573513[17 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2573513[18 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2573513[19 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 8010:
			Global_2573513[20 /*3*/][func_194(iParam2)] = iParam1;
			break;
		
		case 8282:
			Global_2573700[func_194(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2573703[func_194(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2573706[func_194(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2573709[func_194(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2573712[func_194(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2573715[func_194(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2573718[func_194(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2573721[func_194(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2573724[func_194(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2573727[func_194(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2573730[func_194(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2573733[func_194(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2573736[func_194(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_191(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_194(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_192(int iParam0)
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

int func_193(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_194(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_194(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_142();
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

int func_195()
{
	struct<14> Var0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_60.f_2))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_2), PLAYER::PLAYER_PED_ID()) && func_205(Local_60.f_2))
			{
				func_204(&(Local_60.f_2));
				if (UI::DOES_BLIP_EXIST(uLocal_170))
				{
					UI::REMOVE_BLIP(&uLocal_170);
				}
				if (!func_203(1))
				{
					func_198("ABB_BOXCT", 1);
				}
				Var0.f_2 = -1710288243;
				Var0.f_10 = PLAYER::PLAYER_ID();
				Var0.f_3 = uLocal_169;
				func_196(Var0, func_197(1));
				GAMEPLAY::SET_BIT(&(vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1), 0);
				return 1;
			}
		}
	}
	return 0;
}

void func_196(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 111286607;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_197(int iParam0)
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
			if (func_26(iVar2, 0, 0))
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

int func_198(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_199(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_199(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_202() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_140(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_200(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1665914.f_5[iVar0 /*53*/] = iParam0;
		Global_1665914.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1665914.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1665914.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1665914.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1665914.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1665914.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1665914.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1665914 - 1))
	{
		if (iParam0 > Global_1665914.f_5[iVar0 /*53*/].f_1)
		{
			func_201(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1665914++;
	if (Global_1665914 > 5)
	{
		Global_1665914 = 5;
		return Global_1665914;
	}
	return (Global_1665914 - 1);
}

void func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1665914.f_5[iVar0 /*53*/] = { Global_1665914.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_202()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

int func_203(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1625025 > 0;
		
		case 2:
			return Global_1625025.f_1 > 0;
		
		case 3:
			return Global_1625025.f_2 > 0;
		
		case 4:
			return Global_1625025.f_4 > 0;
		
		case 5:
			return Global_1625025.f_3 > 0;
		
		default:
	}
	return 0;
}

void func_204(var uParam0)
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&uVar0);
	}
}

int func_205(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

void func_206()
{
	if (!UI::DOES_BLIP_EXIST(uLocal_170))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2))
		{
			uLocal_170 = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_OBJ(Local_60.f_2));
			if (func_207())
			{
				UI::SET_BLIP_SCALE(uLocal_170, 0.85f);
			}
			else
			{
				UI::SET_BLIP_SCALE(uLocal_170, 1.2f);
			}
			UI::SET_BLIP_SPRITE(uLocal_170, 403);
			UI::SET_BLIP_COLOUR(uLocal_170, 2);
			UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_170, "ABB_BLIPN");
		}
	}
}

bool func_207()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return GAMEPLAY::IS_BIT_SET(Global_4456448.f_165254, 0);
	}
	return ((GAMEPLAY::IS_BIT_SET(Global_4456448.f_165254, 0) || Global_1648547) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

void func_208()
{
	var uVar0;
	
	if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		uVar0 = func_193(1190, -1, 0);
		if (!GAMEPLAY::IS_BIT_SET(uVar0, 14))
		{
			GAMEPLAY::SET_BIT(&uVar0, 14);
			func_191(1190, uVar0, -1, 1, 0);
		}
	}
}

int func_209()
{
	return Local_60;
}

int func_210()
{
	STREAMING::REQUEST_MODEL(joaat("prop_drug_package_02"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("prop_drug_package_02")))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	return vLocal_71[iParam0 /*3*/];
}

int func_212()
{
	var uVar0;
	
	func_220(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_219())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_218())
	{
		return 1;
	}
	if (func_217(157))
	{
		if (!func_216())
		{
			return 1;
		}
	}
	if (func_217(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_213() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_213()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_213()
{
	switch (func_215())
	{
		case 0:
			return func_214();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_214()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_215()
{
	return Global_25765;
}

bool func_216()
{
	return Global_2448756.f_586;
}

int func_217(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_218()
{
	return Global_2458613;
}

bool func_219()
{
	return Global_2448756.f_581;
}

void func_220(var uParam0)
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
					func_221(iVar0);
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

void func_221(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_26(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_222(uVar4, &bVar5))
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

int func_222(var uParam0, var uParam1)
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

void func_223()
{
	SYSTEM::WAIT(0);
}

int func_224(int iParam0)
{
	return Global_1589819[iParam0 /*818*/];
}

void func_225()
{
	Global_1382798 = -1;
	if (UI::DOES_BLIP_EXIST(uLocal_170))
	{
		UI::REMOVE_BLIP(&uLocal_170);
	}
	func_228();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_60.f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_60.f_2))
			{
				func_204(&(Local_60.f_2));
			}
			Local_60 = 4;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_60.f_1, 8))
	{
		func_227();
	}
	func_226();
}

void func_226()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_227()
{
	Global_2528542.f_850 = 0;
	Global_2528542.f_850.f_1 = { 0f, 0f, 0f };
	Global_2528542.f_850.f_4 = 0f;
	Global_2528542.f_850.f_8 = 0;
	GAMEPLAY::CLEAR_BIT(&(Global_2528542.f_850.f_7), 0);
}

void func_228()
{
	if (GAMEPLAY::IS_BIT_SET(uLocal_168, 4))
	{
		PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 0.72f);
		PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f, 1);
		PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
		func_229(1);
		GAMEPLAY::CLEAR_BIT(&uLocal_168, 5);
		GAMEPLAY::CLEAR_BIT(&uLocal_168, 7);
		GAMEPLAY::CLEAR_BIT(&uLocal_168, 4);
	}
}

void func_229(int iParam0)
{
	var uVar0;
	
	uVar0 = func_230(iParam0, 0);
	GRAPHICS::ANIMPOSTFX_STOP(uVar0);
}

char* func_230(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1)
			{
				return "MP_Bull_tost_Out";
			}
			else
			{
				return "MP_Bull_tost";
			}
			break;
		
		case 2:
			if (bParam1)
			{
				return "MP_Powerplay_Out";
			}
			else
			{
				return "MP_Powerplay";
			}
			break;
		
		case 3:
			if (bParam1)
			{
				return "MP_Killstreak_Out";
			}
			else
			{
				return "MP_Killstreak";
			}
			break;
		
		case 4:
			if (bParam1)
			{
				return "MP_Loser_Streak_Out";
			}
			else
			{
				return "MP_Loser_Streak";
			}
			break;
		
		case 6:
			if (bParam1)
			{
				return "BikerFilterOut";
			}
			else
			{
				return "BikerFilter";
			}
			break;
	}
	return "";
}

int func_231(struct<21> Param0)
{
	func_235(func_236(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	func_233(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_60, 11);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_71, 97);
	if (!func_232())
	{
		return 0;
	}
	GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_60.f_7 = Param0.f_16;
		Global_1382798 = Local_60.f_7;
		Local_60.f_3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
		if (!func_4(Global_2528542.f_850.f_1))
		{
			GAMEPLAY::SET_BIT(&(Local_60.f_1), 8);
		}
	}
	iLocal_173 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
	vLocal_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
	return 1;
}

int func_232()
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
		if (func_219())
		{
			return 0;
		}
		if (func_217(155))
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

int func_233(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_226();
			}
			else
			{
				return 0;
			}
		}
		if (!func_234())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_226();
					}
					else
					{
						return 0;
					}
				}
				if (func_219())
				{
					if (!bParam2)
					{
						func_226();
					}
					else
					{
						return 0;
					}
				}
				if (func_217(155))
				{
					if (!bParam2)
					{
						func_226();
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
					func_226();
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
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_226();
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
			func_226();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_234()
{
	return Global_1312844;
}

void func_235(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_226();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_236(int iParam0)
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
		
		case 124:
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
		
		case 125:
			return 32;
		
		case 126:
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
		
		case 137:
			return 32;
		
		case 138:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 132:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 133:
			return 32;
		
		case 134:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 2;
		
		case 148:
			return 1;
		
		case 144:
			return 2;
		
		case 145:
			return 4;
		
		case 146:
			return 2;
		
		case 147:
			return 2;
		
		case 129:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return 0;
		
		case 163:
			return 1;
		
		case 156:
			return 4;
		
		case 159:
			return 4;
		
		case 160:
			return 1;
		
		case 161:
			return 8;
		
		case 162:
			return 8;
		
		case 157:
			return 16;
		
		case 158:
			return 32;
		
		default:
	}
	return 0;
}

