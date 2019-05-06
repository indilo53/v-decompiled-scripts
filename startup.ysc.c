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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
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
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	vector3 vLocal_50 = { 0f, 0f, 0f };
	vector3 vLocal_53 = { 0f, 0f, 0f };
	int iLocal_56 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar18;
	int iVar19;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	sLocal_47 = "CHECKPOINT_NORMAL";
	sLocal_48 = "CHECKPOINT_MISSED";
	sLocal_49 = "CHECKPOINT_PERFECT";
	vLocal_50 = { 1694.74f, 3276.502f, 41.2796f };
	vLocal_53 = { 8.79494f, 0.59893f, 154.8464f };
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	UI::_SET_DIRECTOR_MODE(0);
	GAMEPLAY::_SET_SHOW_PED_IN_PAUSE_MENU(0);
	STREAMING::REMOVE_IPL("prologue_DistantLights");
	STREAMING::REMOVE_IPL("prologue_LODLights");
	iLocal_56 = 0;
	bVar0 = func_41();
	if (GAMEPLAY::_0xA049A5BE0F04F2F8() || GAMEPLAY::_0x3BBBD13E5041A79E())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		SCRIPT::_0xB1577667C3708F9B();
	}
	GAMEPLAY::_USE_FREEMODE_MAP_BEHAVIOR(0);
	func_40(joaat("mp_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_registration"));
	func_40(joaat("mp_fm_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_fm_registration"));
	func_40(joaat("tunables_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("tunables_registration"));
	func_40(joaat("sc_lb_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sc_lb_global_block"));
	func_40(joaat("mp_save_game_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_save_game_global_block"));
	func_40(joaat("mp_prop_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_prop_global_block"));
	func_40(joaat("mp_prop_special_global_block"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("mp_prop_special_global_block"));
	func_40(joaat("title_update_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("title_update_registration"));
	func_40(-556768532, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-556768532);
	func_40(-1350801275, 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(-1350801275);
	Global_4269119 = 0;
	func_40(joaat("sp_dlc_registration"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sp_dlc_registration"));
	func_40(joaat("sp_pilotschool_reg"), 1424);
	SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("sp_pilotschool_reg"));
	func_39();
	switch (iLocal_56)
	{
		case 0:
			func_40(joaat("standard_global_init"), 1424);
			SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(joaat("standard_global_init"));
			break;
	}
	SYSTEM::WAIT(0);
	Global_71207 = 1;
	Global_2 = bVar0;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	switch (iLocal_56)
	{
		case 0:
			Global_2621550 = 0;
			Global_2621549 = 0;
			func_40(joaat("standard_global_reg"), 1424);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("standard_global_reg");
			while ((!GAMEPLAY::IS_BIT_SET(Global_4269119, 0) || !GAMEPLAY::IS_BIT_SET(Global_4269119, 1)) || !GAMEPLAY::IS_BIT_SET(Global_4269119, 2))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_4269119, 0))
				{
				}
				if (!GAMEPLAY::IS_BIT_SET(Global_4269119, 1))
				{
				}
				if (!GAMEPLAY::IS_BIT_SET(Global_4269119, 2))
				{
				}
				SYSTEM::WAIT(0);
			}
			GAMEPLAY::START_SAVE_DATA(&Global_106070, 1, 1);
			GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&Global_106070, "fSaveVersion");
			GAMEPLAY::STOP_SAVE_DATA();
			if (Global_1)
			{
				Global_0 = Global_106070;
			}
			Global_106070 = 1.7f;
			if (Global_1)
			{
				if (Global_0 != 1.7f)
				{
					func_28(Global_0);
				}
			}
			break;
	}
	GAMEPLAY::START_SAVE_DATA(&Global_2097152, 12746, 0);
	GAMEPLAY::_START_SAVE_ARRAY(&Global_2097152, 12746, "g_savedMPGlobals");
	iVar1 = 0;
	while (iVar1 < 1)
	{
		func_22(&(Global_2097152[iVar1 /*12745*/]), iVar1);
		func_20(&(Global_2097152[iVar1 /*12745*/]), iVar1);
		func_18(&(Global_2097152[iVar1 /*12745*/]), iVar1);
		func_14(&(Global_2097152[iVar1 /*12745*/]), iVar1);
		func_12(&(Global_2097152[iVar1 /*12745*/]), iVar1);
		func_11(&(Global_2097152[iVar1 /*12745*/]), iVar1);
		func_10(&(Global_2097152[iVar1 /*12745*/]), iVar1);
		func_3(&(Global_2097152[iVar1 /*12745*/]), iVar1);
		iVar1++;
	}
	GAMEPLAY::STOP_SAVE_STRUCT();
	GAMEPLAY::STOP_SAVE_DATA();
	iVar18 = 12746;
	iVar19 = GAMEPLAY::_0xA09F896CE912481F(0);
	if (iVar18 != iVar19)
	{
	}
	if (!NETWORK::_0xB606E6CC59664972() && !NETWORK::_0x662635855957C411())
	{
		NETWORK::_0x1D4DC17C38FEAFF0(0);
	}
	PATHFIND::_0x228E5C6AD4D74BFD(0);
	GAMEPLAY::_SET_SHOW_PED_IN_PAUSE_MENU(0);
	func_2();
	func_1();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1680.49f, -929.44f, -0.462531f, "vbca_tunnel1");
	Global_30[1] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1562.04f, -876.91f, -0.471913f, "vbca_tunnel2");
	Global_30[2] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1429.65f, -823.211f, -0.432763f, "vbca_tunnel3");
	Global_30[3] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1316.9f, -843.515f, 1.43639f, "vbca_tunnel4");
	Global_30[4] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1249.67f, -896.27f, 0.293292f, "vbca_tunnel5");
	Global_30[5] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.9818f, -570.534f, 28.4812f, "v_31_tun_01");
	Global_30[6] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.908f, -577.602f, 2.41908f, "v_31_newtunnel1");
	Global_30[7] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1029.02f, -260.955f, 48.2681f, "v_31_newtun5");
	Global_30[8] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1022.25f, -205.648f, 42.8956f, "v_31_newtun4b");
	Global_30[9] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(823.852f, -299.823f, 4.54864f, "v_31_newtun3");
	Global_30[0] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(615.395f, -409.282f, -1.57599f, "v_31_newtun2");
	Global_30[11] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1190.58f, -685.387f, 11.0753f, "sm20_tun4");
	Global_30[12] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1292.36f, -730.629f, 11.0934f, "sm20_tun3");
	Global_30[13] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1411.97f, -759.518f, 15.5455f, "sm20_tun2");
	Global_30[14] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-1531.56f, -762.391f, 15.3451f, "sm20_tun1");
	Global_30[15] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(558.653f, -1486.49f, 21.4096f, "sc1_rd_inttunshort");
	Global_30[16] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(569.673f, -1920.17f, 21.1009f, "sc1_rd_inttun3b_end");
	Global_30[17] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(512.412f, -1908.55f, 21.2086f, "sc1_rd_inttun3b");
	Global_30[18] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(434.343f, -1945.27f, 17.3936f, "sc1_rd_inttun3");
	Global_30[19] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(513.914f, -2009.82f, 21.1486f, "sc1_rd_inttun2b_end");
	Global_30[20] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(465.139f, -2025.49f, 19.4406f, "sc1_rd_inttun2b");
	Global_30[21] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(406.938f, -1978.14f, 16.3512f, "sc1_rd_inttun2");
	Global_30[22] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(319.321f, -1896.97f, 22.4086f, "sc1_rd_inttun1");
	Global_30[23] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-573.473f, -580.793f, 25.3082f, "kt1_04_roadtunnel_int");
	Global_30[24] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-675.628f, -606.272f, 25.3078f, "kt1_03_carpark_int");
	Global_30[25] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1314.63f, -904.059f, 53.0877f, "id2_21_a_tun5");
	Global_30[26] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1248.64f, -773.6f, 44.5493f, "id2_21_a_tun4");
	Global_30[27] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1213.45f, -597.799f, 37.7533f, "id2_21_a_tun3");
	Global_30[28] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1083.25f, -502.542f, 34.6573f, "id2_21_a_tun2");
	Global_30[29] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(926.428f, -488.737f, 33.8564f, "id2_21_a_tun1");
	Global_30[30] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(732.663f, -2486.45f, 11.0686f, "id1_11_tunnel8_int");
	Global_30[31] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(749.494f, -2364.79f, 16.2255f, "id1_11_tunnel7_int");
	Global_30[32] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(758.957f, -2260.08f, 23.4637f, "id1_11_tunnel6_int");
	Global_30[33] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(769.889f, -2124.24f, 21.8223f, "id1_11_tunnel5_int");
	Global_30[34] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(789.138f, -1963.58f, 20.6408f, "id1_11_tunnel4_int");
	Global_30[35] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(815.852f, -1832.2f, 22.9671f, "id1_11_tunnel3_int");
	Global_30[36] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.752f, -1718.51f, 20.4594f, "id1_11_tunnel2_int");
	Global_30[37] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(829.845f, -1718.51f, 20.1823f, "id1_11_tunnel1_int");
	Global_30[38] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(274.441f, -636.403f, 29.0854f, "dt1_rd1_tun3");
	Global_30[39] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(142.198f, -581.121f, 31.2974f, "dt1_rd1_tun2");
	Global_30[40] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(204.925f, -601.567f, 29.3757f, "dt1_rd1_tun");
	Global_30[41] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2571.05f, 3907.95f, 41.1896f, "cs4_rwayb_tunnelint");
	Global_30[42] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-493.613f, 4275.55f, 89.1677f, "cs3_03railtunnel_int4");
	Global_30[43] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-476.018f, 4201.55f, 87.9392f, "cs3_03railtunnel_int3");
	Global_30[44] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-457.748f, 4125.51f, 86.1208f, "cs3_03railtunnel_int2");
	Global_30[45] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-442.948f, 4064.86f, 84.1041f, "cs3_03railtunnel_int1");
	Global_30[46] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2159.62f, 5995.87f, 51.2999f, "cs2_roadsb_tunnel_03");
	Global_30[47] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2250.3f, 5915.56f, 49.6273f, "cs2_roadsb_tunnel_02");
	Global_30[48] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2341.18f, 5814.9f, 46.7075f, "cs2_roadsb_tunnel_01");
	Global_30[49] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-537.422f, 4613.09f, 89.7512f, "cs1_14brailway6");
	Global_30[50] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-540.452f, 4719.74f, 89.7576f, "cs1_14brailway5");
	Global_30[51] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-543.783f, 4821.95f, 89.7357f, "cs1_14brailway4");
	Global_30[52] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.036f, 4923.02f, 89.8919f, "cs1_14brailway3");
	Global_30[53] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-546.265f, 4999.07f, 90.8104f, "cs1_14brailway2");
	Global_30[54] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-539.261f, 5077.03f, 91.6235f, "cs1_14brailway1");
	Global_30[55] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-183.656f, 4664.52f, 130.5f, "cs1_12_tunnel03_int");
	Global_30[56] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-273.86f, 4752.12f, 138.21f, "cs1_12_tunnel02_int");
	Global_30[57] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-410.302f, 4860.98f, 144.864f, "cs1_12_tunnel01_int");
	Global_30[58] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2596.83f, 3088.87f, 15.4225f, "ch1_roadsdint_tun2");
	Global_30[59] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-2583.04f, 3268.07f, 13.3157f, "ch1_roadsdint_tun1");
	Global_30[60] = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-179.51f, -180.189f, 43.6251f, "bt1_04_carpark");
}

void func_2()
{
	Global_144761 = 1;
	Global_144762 = 1;
}

void func_3(var uParam0, int iParam1)
{
	func_9(uParam0, iParam1);
	func_8(uParam0, iParam1);
	func_7(uParam0, iParam1);
	func_6(uParam0, iParam1);
	func_5(uParam0, iParam1);
	func_4(uParam0, iParam1);
}

void func_4(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_DATE_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12718.f_19), 8, &cVar0);
	GAMEPLAY::_START_SAVE_STRUCT(&(uParam0->f_12718.f_19[0 /*7*/]), 7, "TEMPSTAT_DATE");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12718.f_19[0 /*7*/]), "TEMPSTAT_DATE.year");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12718.f_19[0 /*7*/].f_1), "TEMPSTAT_DATE.month");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12718.f_19[0 /*7*/].f_2), "TEMPSTAT_DATE.day");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12718.f_19[0 /*7*/].f_3), "TEMPSTAT_DATE.hour");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12718.f_19[0 /*7*/].f_4), "TEMPSTAT_DATE.minute");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12718.f_19[0 /*7*/].f_5), "TEMPSTAT_DATE.seconds");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12718.f_19[0 /*7*/].f_6), "TEMPSTAT_DATE.Milliseconds");
	GAMEPLAY::STOP_SAVE_STRUCT();
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_5(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_VECTOR_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12718.f_15), 4, &cVar0);
	GAMEPLAY::_START_SAVE_STRUCT(&(uParam0->f_12718.f_15[0 /*3*/]), 3, "TEMPSTAT_VEC");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_12718.f_15[0 /*3*/]), "TEMPSTAT_VEC.x");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_12718.f_15[0 /*3*/].f_1), "TEMPSTAT_VEC.y");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_12718.f_15[0 /*3*/].f_2), "TEMPSTAT_VEC.z");
	GAMEPLAY::STOP_SAVE_STRUCT();
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_6(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_STRING_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12718.f_6), 9, &cVar0);
	GAMEPLAY::_0x8269816F6CFD40F8(&(uParam0->f_12718.f_6[0 /*8*/]), "TEMPSTAT_LABEL");
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_7(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_BOOL_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12718.f_4), 2, &cVar0);
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_12718.f_4[0]), "TEMPSTAT_BOOL");
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_8(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_FLOAT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12718.f_2), 2, &cVar0);
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_12718.f_2[0]), "TEMPSTAT_FLOAT");
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_9(var uParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "g_SaveData_INT_ScriptSaves", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12718), 2, &cVar0);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12718[0]), "TEMPSTAT_INT1");
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_10(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	int iVar6;
	struct<4> Var7;
	char cVar11[16];
	char cVar15[16];
	char cVar19[16];
	char cVar23[16];
	
	StringCopy(&cVar0, "MP_ATM_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	GAMEPLAY::_START_SAVE_STRUCT(&(uParam0->f_12568), 150, &cVar0);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12568), "MPATM_CARET_");
	iVar6 = 0;
	StringCopy(&Var7, "MPATMLOGVAL", 16);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12568.f_1), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar11 = { Var7 };
		StringIntConCat(&cVar11, iVar6, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12568.f_1[iVar6]), &cVar11);
		iVar6++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	StringCopy(&Var7, "MPATMLOGSCRS", 16);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12568.f_18), 97, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar15 = { Var7 };
		StringIntConCat(&cVar15, iVar6, 16);
		GAMEPLAY::_0x48F069265A0E4BEC(&(uParam0->f_12568.f_18[iVar6 /*6*/]), &cVar15);
		iVar6++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	StringCopy(&Var7, "MPATMLOGACT", 16);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12568.f_115), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar19 = { Var7 };
		StringIntConCat(&cVar19, iVar6, 16);
		GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_12568.f_115[iVar6]), &cVar19);
		iVar6++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	StringCopy(&Var7, "MPATMLOGDAT", 16);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12568.f_132), 17, &Var7);
	iVar6 = 0;
	while (iVar6 < 16)
	{
		cVar23 = { Var7 };
		StringIntConCat(&cVar23, iVar6, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12568.f_132[iVar6]), &cVar23);
		iVar6++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_12568.f_149), "mpAnyVecBought");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_11(var uParam0, int iParam1)
{
	struct<6> Var0;
	char cVar6[32];
	int iVar14;
	
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	GAMEPLAY::_START_SAVE_STRUCT(&(uParam0->f_12327), 241, &Var0);
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327), "BOUNTY_GAMERH64_1");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_1), "BOUNTY_GAMERH64_2");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_2), "BOUNTY_GAMERH64_3");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_3), "BOUNTY_GAMERH64_4");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_4), "BOUNTY_GAMERH64_5");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_5), "BOUNTY_GAMERH64_6");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_6), "BOUNTY_GAMERH64_7");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_7), "BOUNTY_GAMERH64_8");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_8), "BOUNTY_GAMERH64_9");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_9), "BOUNTY_GAMERH64_10");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_10), "BOUNTY_GAMERH64_11");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_11), "BOUNTY_GAMERH64_12");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_12), "BOUNTY_GAMERH64_13");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12327.f_13), "BOUNTY_TIME");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12327.f_14), "BOUNTY_VALUE");
	StringConCat(&Var0, "_GH", 24);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12327.f_15), 209, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_1", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/]), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_2", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_1), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_3", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_2), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_4", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_3), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_5", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_4), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_6", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_5), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_7", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_6), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_8", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_7), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_9", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_8), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_10", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_9), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_11", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_10), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_12", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_11), &cVar6);
		MemCopy(&cVar6, {Var0}, 8);
		StringConCat(&cVar6, "64_", 32);
		StringIntConCat(&cVar6, iVar14, 32);
		StringConCat(&cVar6, "_13", 32);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12327.f_15[iVar14 /*13*/].f_12), &cVar6);
		iVar14++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	StringCopy(&Var0, "MP_BOUNTY_SAVED", 24);
	StringIntConCat(&Var0, iParam1, 24);
	StringConCat(&Var0, "_TIM", 24);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_12327.f_224), 17, &Var0);
	iVar14 = 0;
	while (iVar14 < 16)
	{
		MemCopy(&cVar6, {Var0}, 8);
		StringIntConCat(&cVar6, iVar14, 32);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12327.f_224[iVar14]), &cVar6);
		iVar14++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_12(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_GENERAL_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_13(&(uParam0->f_8178), &cVar0);
}

void func_13(var uParam0, char[4] cParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	char cVar6[64];
	int iVar22;
	int iVar23;
	char cVar24[16];
	char cVar28[16];
	char cVar32[16];
	char cVar36[16];
	char cVar40[16];
	
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 4149, cParam1);
	GAMEPLAY::REGISTER_INT_TO_SAVE(uParam0, "CASH_GIVEN_TOTAL");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "CASH_GIVEN_TIME");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "LAST_SAVED_CAR");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "CURRENT_PROP_VALUE");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iNewVehPurchased");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "WHEELIE_TIMER");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "WHEELIE_UPDATES");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "WHEELIE_TIME");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_7), "GRAB_TIME");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iLastSoldVehicleTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "ilasttimeplayed");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iSaveCoupons");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iLastBruciePillReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iLastSecVanReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iLastBountyReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iLastParaReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iLastCrateDropReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLastGangAttackReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "iLastImpExpReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iLastInsuranceReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iLastSurvivalReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_21), "iLastBikerBackupReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_22), "iLastVagosBackupReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "iLastLesterVehReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "iLastPersonalVehDeliveryReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iLastPegasusVehicleReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "iLastMerryweatherReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "iLastLesterHelpReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_28), "iLastLesterReqJobReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_29), "iLastGeraldReqJobReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_30), "iLastSimeonReqJobReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_31), "iLastMartinReqJobReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iLastRonReqJobReminder");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_33), "iRecentlyPassedMissionBitset");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_34), "iRecentlyPassedMissionTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_35), "iLastImportExportDelTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_36), "iLastImportExportListTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_37), "iMyLastImportExportListDay");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_38), "iVehicleWebsiteReminderTime");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_39), "bDefaultClothesSet");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_40), 6, "CLOTHES");
	iVar0 = 0;
	while (iVar0 < uParam0->f_40)
	{
		StringCopy(&Var1, "CLOTHES", 16);
		StringIntConCat(&Var1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_40[iVar0]), &Var1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_46), 1225, "CARMODS");
	iVar0 = 0;
	while (iVar0 < uParam0->f_46)
	{
		StringCopy(&Var1, "CARMODS", 16);
		StringIntConCat(&Var1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_46[iVar0]), &Var1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1271), "iLastCrewCharWasIn");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1272), "iStripperUnlockedBS");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1273), "iGeneralBS");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1274), "iCarsModifiedTimeStamp");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1275), 10, "GOLF_fLongestDriveHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_1275)
	{
		StringCopy(&cVar6, "fLongestDriveHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1275[iVar5]), &cVar6);
		iVar5++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1285), 10, "GOLF_fLongestPuttHole");
	iVar5 = 0;
	while (iVar5 < uParam0->f_1285)
	{
		StringCopy(&cVar6, "fLongestPuttHole_", 64);
		StringIntConCat(&cVar6, iVar5, 64);
		GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1285[iVar5]), &cVar6);
		iVar5++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1295), "GOLF_iBestRound");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1296), "GOLF_fLongestDrive");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_1297), "GOLF_fLongestPutt");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1298), "iShareLJCashTotal");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1299), "iShareLJCashTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1300), "iReceiveLJCashTotal");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1301), "iReceiveLJCashTime");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1302), "LAST_ACC_PROP");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1303), "MULTI1_PROP_VAL");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1324), "LAST_ACC_SMPLINT");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1304), 20, "PROP_ARY_VAL");
	iVar22 = 0;
	while (iVar22 < uParam0->f_1304)
	{
		StringCopy(&Var1, "PROP_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1304[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1325), "KR_PATCH_UPDATE");
	iVar22 = 0;
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2681), 919, "DLC_MODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_2681)
	{
		StringCopy(&Var1, "DLC_MODS_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2681[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	iVar22 = 0;
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_3600), 317, "DLC_SUPERMODS");
	iVar22 = 0;
	while (iVar22 < uParam0->f_3600)
	{
		StringCopy(&Var1, "DLC_SMODS_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3600[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1326), 274, "OUTFIT_CompDraw");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CompDraw", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1326[iVar22 /*13*/]), 13, &Var1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&Var1, "CompDraw", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1326[iVar22 /*13*/][iVar23]), &Var1);
			iVar23++;
		}
		GAMEPLAY::STOP_SAVE_ARRAY();
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1600), 274, "OUTFIT_CompTex");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CompTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1600[iVar22 /*13*/]), 13, &Var1);
		iVar23 = 0;
		while (iVar23 < 12)
		{
			StringCopy(&Var1, "CompTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1600[iVar22 /*13*/][iVar23]), &Var1);
			iVar23++;
		}
		GAMEPLAY::STOP_SAVE_ARRAY();
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1874), 211, "OUTFIT_PropID");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "PropID", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1874[iVar22 /*10*/]), 10, &Var1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&Var1, "PropID", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1874[iVar22 /*10*/][iVar23]), &Var1);
			iVar23++;
		}
		GAMEPLAY::STOP_SAVE_ARRAY();
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2085), 211, "OUTFIT_PropTex");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "PropTex", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2085[iVar22 /*10*/]), 10, &Var1);
		iVar23 = 0;
		while (iVar23 < 9)
		{
			StringCopy(&Var1, "PropTex", 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar22, 16);
			StringConCat(&Var1, "_", 16);
			StringIntConCat(&Var1, iVar23, 16);
			GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2085[iVar22 /*10*/][iVar23]), &Var1);
			iVar23++;
		}
		GAMEPLAY::STOP_SAVE_ARRAY();
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2296), 22, "OUTFIT_Stored");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "Stored", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2296[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2318), 22, "OUTFIT_CrewTatA");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalA", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2318[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2340), 22, "OUTFIT_CrewTatB");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalB", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2340[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2362), 22, "OUTFIT_CrewTatC");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalC", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2362[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2384), 22, "OUTFIT_CrewTatD");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalD", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2384[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2406), 22, "OUTFIT_CrewTatE");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalE", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2406[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2428), 22, "OUTFIT_CrewTatF");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "CrewDecalF", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2428[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2619), 22, "OUTFIT_Shirt");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "ShirtDecal", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2619[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2450), 169, "OUTFIT_Name");
	iVar22 = 0;
	while (iVar22 < 21)
	{
		StringCopy(&Var1, "Name", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::_0x8269816F6CFD40F8(&(uParam0->f_2450[iVar22 /*8*/]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2641), 40, "LAST_JobGamer");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastJobG64_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_1", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/]), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_2", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_1), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_3", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_2), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_4", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_3), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_5", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_4), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_6", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_5), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_7", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_6), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_8", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_7), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_9", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_8), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_10", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_9), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_11", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_10), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_12", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_11), &cVar24);
		cVar24 = { Var1 };
		StringConCat(&cVar24, "_13", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2641[iVar22 /*13*/].f_12), &cVar24);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_3917), "DO_CompletedObjectives");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_3918), "DO_LoggedInToday");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3919), "DO_xValue");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3920), "DO_LastHistoryLength");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3921), "DO_LastResetTime");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_3922), 10, "DO_Objectives");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "Objective", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3922[iVar22 /*3*/]), &Var1);
		StringCopy(&Var1, "Completed", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_3922[iVar22 /*3*/].f_1), &Var1);
		StringCopy(&Var1, "Initial", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3922[iVar22 /*3*/].f_2), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_3932), 25, "DO_History");
	iVar22 = 0;
	while (iVar22 < 24)
	{
		StringCopy(&Var1, "History", 16);
		StringConCat(&Var1, "_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3932[iVar22]), &Var1);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_3957), 49, "LAST_JobGamer_TL");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastJobTL_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar28 = { Var1 };
		StringConCat(&cVar28, "_1", 16);
		GAMEPLAY::_0xFAA457EF263E8763(&(uParam0->f_3957[iVar22 /*16*/]), &cVar28);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4006), 11, "BGSAVEINT");
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&Var1, "BGSAVEINT", 16);
		StringIntConCat(&Var1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4006[iVar0]), &Var1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4017), 3, "PROPLIB");
	iVar0 = 0;
	while (iVar0 < uParam0->f_4017)
	{
		StringCopy(&Var1, "PROPLIB", 16);
		StringIntConCat(&Var1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4017[iVar0]), &Var1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4020), 40, "LAST_GOGamer");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastGOG64_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_1", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/]), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_2", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_1), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_3", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_2), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_4", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_3), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_5", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_4), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_6", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_5), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_7", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_6), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_8", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_7), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_9", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_8), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_10", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_9), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_11", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_10), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_12", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_11), &cVar32);
		cVar32 = { Var1 };
		StringConCat(&cVar32, "_13", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4020[iVar22 /*13*/].f_12), &cVar32);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4060), 40, "LAST_GOJobGamer");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastGJG64_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_1", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/]), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_2", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_1), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_3", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_2), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_4", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_3), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_5", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_4), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_6", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_5), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_7", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_6), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_8", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_7), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_9", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_8), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_10", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_9), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_11", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_10), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_12", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_11), &cVar36);
		cVar36 = { Var1 };
		StringConCat(&cVar36, "_13", 16);
		GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4060[iVar22 /*13*/].f_12), &cVar36);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_4100), 49, "LAST_GOJobGamer_TL");
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&Var1, "LastGJTL_", 16);
		StringIntConCat(&Var1, iVar22, 16);
		cVar40 = { Var1 };
		StringConCat(&cVar40, "_1", 16);
		GAMEPLAY::_0xFAA457EF263E8763(&(uParam0->f_4100[iVar22 /*16*/]), &cVar40);
		iVar22++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_14(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_SAVED_CARAPP", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_15(&(uParam0->f_6070), &cVar0, iParam1);
}

void func_15(var uParam0, char[4] cParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 2108, cParam1);
	GAMEPLAY::_START_SAVE_ARRAY(uParam0, 1886, "CAR_APP_DATA");
	iVar16 = 0;
	while (iVar16 < 145)
	{
		StringCopy(&cVar0, "CARAPP_DATA_", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		func_17(uParam0[iVar16 /*13*/], &cVar0);
		iVar16++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::STOP_SAVE_STRUCT();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1927), 146, "CAR_HIDDEN");
	iVar16 = 0;
	while (iVar16 < 145)
	{
		StringCopy(&cVar0, "CAR_HIDDEN", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_1927[iVar16]), &cVar0);
		iVar16++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	func_16(&(uParam0->f_1886), "CAR_APP_ORDER");
	StringCopy(&cVar0, "bMultiplayerDataWiped", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2073), &cVar0);
	StringCopy(&cVar0, "bCarAppPlateSet", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2075), &cVar0);
	StringCopy(&cVar0, "bDeleteCarData", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2074), &cVar0);
	StringCopy(&cVar0, "iCarAppPlateBack", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2080), &cVar0);
	StringCopy(&cVar0, "tlCarAppPlateText", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	GAMEPLAY::_0x6F7794F28C6B2535(&(uParam0->f_2076), &cVar0);
	StringCopy(&cVar0, "iOrderCount", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2081), &cVar0);
	StringCopy(&cVar0, "iOrderVehicle", 64);
	StringIntConCat(&cVar0, iParam2, 64);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2082), &cVar0);
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2083), 11, "SAVED_VEH_SLOT");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_SLOT", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2083[iVar16]), &cVar0);
		iVar16++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2094), 11, "SAVED_VEH_PRIO");
	iVar16 = 0;
	while (iVar16 < 10)
	{
		StringCopy(&cVar0, "VEH_PRIO", 64);
		StringIntConCat(&cVar0, iVar16, 64);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2094[iVar16]), &cVar0);
		iVar16++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2105), "LAST_USED");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2106), "NEW_SAVED");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2107), "SETUP_INIT");
}

void func_16(var uParam0, char* sParam1)
{
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 41, sParam1);
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3), "iColour1Group");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_4), "iColour2Group");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iWindowTint");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iTyreSmokeR");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iTyreSmokeG");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iTyreSmokeB");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iEngine");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_10), "iBrakes");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "iWheels");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "iWheelType");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "iExhaust");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "iSuspension");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "iArmour");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "iHorn");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "iLights");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_18), "bBulletProofTyres");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "iTurbo");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "iTyreSmoke");
	GAMEPLAY::_0x6F7794F28C6B2535(&(uParam0->f_21), "tlPlateText");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "iPlateBack");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "UID");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "Cost");
	GAMEPLAY::_0x6F7794F28C6B2535(&(uParam0->f_28), "tlPlateText_pending");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_32), "iPlateBack_pending");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_33), "bProcessOrder");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_36), "bOrderPending");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_35), "bOrderReceivedOnBoot");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_34), "bOrderForPlayerVehicle");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_37), "bCheckPlateProfanity");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_40), "bOrderPaidFor");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_38), "bSCProfanityFailed");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_39), "bOrderFailedFunds");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_17(var uParam0, char[4] cParam1)
{
	int iVar0;
	char cVar1[16];
	
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 13, cParam1);
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(uParam0, "Model");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "iColourID1");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_2), "iColourID2");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "iModCountWheels");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_3), 6, "iHornHash");
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringCopy(&cVar1, "iHornHash", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_3[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_10), "bSendDataToCloud");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_11), "bDeleteData");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_12), "bUpdateMods");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_18(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_PROPERTY_SAVED", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_19(&(uParam0->f_5506), &cVar0);
}

void func_19(var uParam0, char[4] cParam1)
{
	int iVar0;
	char cVar1[16];
	
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 564, cParam1);
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(uParam0, "TV_ON");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1), "TV_CHANNEL_ID");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_2), 3, "RADIO_ON");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RADIO_ON_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_2[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_5), 3, "RADIO_STATION");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "RDO_STA_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_5[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_8), "GARAGE_TV_ON");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_9), "GARAGE_TV_CHANNEL_ID");
	GAMEPLAY::REGISTER_BOOL_TO_SAVE(&(uParam0->f_10), "GARAGE_RADIO_ON");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_11), "GARAGE_RADIO_STATION_ID");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_12), "NUMBERS_TIMES_SMOKED");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_13), "NUMBER_TIMES_DRANK");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_14), "NUMBER_TIMES_STRIPPERS");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_15), "NUMBERS_TIMES_SMOKED_SECOND");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_16), "NUMBER_TIMES_DRANK_SECOND");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_17), "NUMBER_TIMES_STRIPPERS_SECOND");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_18), "NUMBERS_TIMES_SMOKED3");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_19), "NUMBER_TIMES_DRANK3");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_20), "NUMBER_TIMES_STRIPPERS3");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_21), "NUMBERS_TIMES_SMOKED4");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_22), "NUMBER_TIMES_DRANK4");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_23), "NUMBER_TIMES_STRIPPERS4");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_24), "NUMBERS_TIMES_SMOKED5");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_25), "NUMBER_TIMES_DRANK5");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_26), "NUMBER_TIMES_STRIPPERS5");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_27), "NUMBERS_TIMES_SMOKEDYacht");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_28), "NUMBER_TIMES_DRANKYacht");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_29), "NUMBER_TIMES_STRIPPERSYacht");
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_30), "DATE_LAST_CLEANED_APARTMENT");
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_31), "SHOWERS_TAKEN");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_32), 17, "PROP_DRINKS");
	StringCopy(&cVar1, "DRANK_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_32[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		StringCopy(&cVar1, "DRANK_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_32[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_49), 17, "PROP_SMOKES");
	StringCopy(&cVar1, "SMOKED_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_49[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		StringCopy(&cVar1, "SMOKED_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_49[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_66), 17, "PROP_STRIPPERS");
	StringCopy(&cVar1, "STRIPPERS_", 16);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		StringIntConCat(&cVar1, iVar0 + 5, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_66[iVar0]), &cVar1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		StringCopy(&cVar1, "STRIPPERS_8", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_66[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_83), 481, "PROP_NAMEDVEHS");
	iVar0 = 0;
	while (iVar0 < 30)
	{
		StringCopy(&cVar1, "NAMEDVEH_", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::_0xFAA457EF263E8763(&(uParam0->f_83[iVar0 /*16*/]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_20(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_BIG_ASS_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_21(&(uParam0->f_5500), &cVar0);
}

void func_21(var uParam0, char[4] cParam1)
{
	int iVar0;
	char cVar1[16];
	
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 6, cParam1);
	GAMEPLAY::REGISTER_INT_TO_SAVE(uParam0, "BAV_Timestamp");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_1), 5, "B_A_V_BS_ID");
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "B_A_V_BS_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_1[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_22(var uParam0, int iParam1)
{
	vector3 vVar0[24];
	
	StringCopy(&cVar0, "MP_SAVED_VEHICLES", 24);
	StringIntConCat(&cVar0, iParam1, 24);
	func_23(uParam0, &cVar0);
}

void func_23(var uParam0, char[4] cParam1)
{
	int iVar0;
	char cVar1[32];
	
	iVar0 = 0;
	GAMEPLAY::_START_SAVE_ARRAY(uParam0, 5500, cParam1);
	iVar0 = 0;
	while (iVar0 < 39)
	{
		StringCopy(&cVar1, "MP_VEHICLE", 32);
		StringIntConCat(&cVar1, iVar0, 32);
		func_24(uParam0[iVar0 /*141*/], &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
}

void func_24(var uParam0, char[4] cParam1)
{
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 141, cParam1);
	func_25(uParam0, "VEHICLE_SETUP_STRUCT_MP");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_102), "VEHICLE_BS");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_104), "PAID_PREMIUM");
	GAMEPLAY::_0xFAA457EF263E8763(&(uParam0->f_105), "PAID_PLAYER");
	GAMEPLAY::_0xFAA457EF263E8763(&(uParam0->f_121), "RADIO_STATION");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_103), "IMPOUND_TIME");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_137), "COLOUR_GROUP1");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_138), "COLOUR_GROUP2");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_139), "PRICE_PAID");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_140), "OBTAIN_TIME");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_25(var uParam0, char* sParam1)
{
	func_27(uParam0, "VEHICLE_SETUP_STRUCT");
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 102, sParam1);
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_78), "iSpawnVehicleHorn");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_79), "iHornID");
	GAMEPLAY::REGISTER_FLOAT_TO_SAVE(&(uParam0->f_80), "fEnveffScale");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_97), "iColour5");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_98), "iLivery2");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_99), "iColour6");
	func_26(&(uParam0->f_81), "GamerHandleOfCarOwner");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_94), "OwnerStatus");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_95), "iFlags");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_96), "iPVSlot");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_100), "iPlayerIndex");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_101), "iIEPlayerVehicle");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_26(var uParam0, char* sParam1)
{
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 13, sParam1);
	GAMEPLAY::_0xA735353C77334EA0(uParam0, "Data64_1");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_1), "Data64_2");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_2), "Data64_3");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_3), "Data64_4");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_4), "Data64_5");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_5), "Data64_6");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_6), "Data64_7");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_7), "Data64_8");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_8), "Data64_9");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_9), "Data64_10");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_10), "Data64_11");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_11), "Data64_12");
	GAMEPLAY::_0xA735353C77334EA0(&(uParam0->f_12), "Data64_13");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_27(var uParam0, char* sParam1)
{
	int iVar0;
	char cVar1[16];
	
	GAMEPLAY::_START_SAVE_STRUCT(uParam0, 78, sParam1);
	GAMEPLAY::REGISTER_INT_TO_SAVE(uParam0, "iPlateIndex");
	GAMEPLAY::_0x6F7794F28C6B2535(&(uParam0->f_1), "tlPlateText");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_5), "iColour1");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_6), "iColour2");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_7), "iColourExtra1");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_8), "iColourExtra2");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_62), "iTyreR");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_63), "iTyreG");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_64), "iTyreB");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_65), "iWindowTintColour");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_67), "iLivery");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_69), "iWheelType");
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_68), "eRoofState");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_77), "iFlags");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_71), "iCustomR");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_72), "iCustomG");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_73), "iCustomB");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_74), "iNeonR");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_75), "iNeonG");
	GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_76), "iNeonB");
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_66), "eModel");
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_9), 50, "MODS_ID");
	iVar0 = 0;
	while (iVar0 < 49)
	{
		StringCopy(&cVar1, "MOD_ID", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_9[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::_START_SAVE_ARRAY(&(uParam0->f_59), 3, "MODS_VAR");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		StringCopy(&cVar1, "MOD_VAR", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		GAMEPLAY::REGISTER_INT_TO_SAVE(&(uParam0->f_59[iVar0]), &cVar1);
		iVar0++;
	}
	GAMEPLAY::STOP_SAVE_ARRAY();
	GAMEPLAY::REGISTER_ENUM_TO_SAVE(&(uParam0->f_70), "eLockState");
	GAMEPLAY::STOP_SAVE_STRUCT();
}

void func_28(float fParam0)
{
	func_37();
	if (fParam0 == 1f)
	{
		func_35();
	}
	if (fParam0 <= 1.1f)
	{
		func_34();
	}
	if (fParam0 < 1.5f)
	{
		func_32();
	}
	if (fParam0 <= 1.5f)
	{
		func_31();
	}
	if (fParam0 == 1.5f)
	{
		func_30();
	}
	if (fParam0 < 1.7f)
	{
		func_29();
	}
}

void func_29()
{
	Global_106070.f_26406.f_4 = 0;
}

void func_30()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	STATS::STAT_GET_INT(joaat("content_hanger_veh"), &iVar0, -1);
	STATS::STAT_GET_INT(joaat("content_marina_veh"), &iVar1, -1);
	STATS::STAT_GET_INT(joaat("content_heli_veh"), &iVar2, -1);
	if ((iVar0 >= 0 && iVar1 >= 0) && iVar2 >= 0)
	{
		Global_106070.f_668.f_1304 = (Global_106070.f_668.f_1304 - iVar0);
	}
}

void func_31()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 171;
		while (iVar1 <= 198)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_106070.f_25154[iVar1], iVar0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_25154[iVar1]), iVar0);
				iVar2 = (iVar1 + (198 - 171)) + 1;
				GAMEPLAY::SET_BIT(&(Global_106070.f_25154[iVar2]), iVar0);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_32()
{
	if ((((func_33(54) || func_33(55)) || func_33(56)) || func_33(57)) || func_33(58))
	{
		GAMEPLAY::SET_BIT(&(Global_106070.f_9988.f_25), 6);
	}
}

int func_33(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106070.f_9057.f_330[iParam0 /*6*/];
}

void func_34()
{
}

void func_35()
{
	if (Global_106070.f_9057.f_99.f_205[7] != 0)
	{
		if (!Global_106070.f_9057.f_330[86 /*6*/])
		{
			Global_106070.f_9057.f_330[86 /*6*/] = 1;
		}
	}
	if (Global_106070.f_9057.f_99.f_205[8] != 0)
	{
		if (!Global_106070.f_9057.f_330[71 /*6*/])
		{
			Global_106070.f_9057.f_330[71 /*6*/] = 1;
		}
	}
	if (Global_106070.f_9057.f_99.f_205[9] != 0)
	{
		if (!Global_106070.f_9057.f_330[91 /*6*/])
		{
			Global_106070.f_9057.f_330[91 /*6*/] = 1;
		}
	}
	if (Global_106070.f_9057.f_99.f_205[10] != 0)
	{
		if (!Global_106070.f_9057.f_330[67 /*6*/])
		{
			Global_106070.f_9057.f_330[67 /*6*/] = 1;
		}
	}
	if (Global_106070.f_9057.f_99.f_205[11] != 0)
	{
		if (!Global_106070.f_9057.f_330[77 /*6*/])
		{
			Global_106070.f_9057.f_330[77 /*6*/] = 1;
		}
	}
	func_36(195, 198);
	func_36(195, 197);
	func_36(195, 196);
}

void func_36(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	
	Var0 = { Global_106070.f_10166[iParam0 /*12*/] };
	uVar4 = Global_106070.f_10166[iParam0 /*12*/].f_4;
	uVar5 = Global_106070.f_10166[iParam0 /*12*/].f_5;
	uVar6 = Global_106070.f_10166[iParam0 /*12*/].f_6;
	uVar7 = Global_106070.f_10166[iParam0 /*12*/].f_7;
	uVar8 = Global_106070.f_10166[iParam0 /*12*/].f_8;
	uVar9 = Global_106070.f_10166[iParam0 /*12*/].f_9;
	uVar10 = Global_106070.f_10166[iParam0 /*12*/].f_10;
	uVar11 = Global_106070.f_10166[iParam0 /*12*/].f_11;
	Global_106070.f_10166[iParam0 /*12*/] = { Global_106070.f_10166[iParam1 /*12*/] };
	Global_106070.f_10166[iParam0 /*12*/].f_4 = Global_106070.f_10166[iParam1 /*12*/].f_4;
	Global_106070.f_10166[iParam0 /*12*/].f_5 = Global_106070.f_10166[iParam1 /*12*/].f_5;
	Global_106070.f_10166[iParam0 /*12*/].f_6 = Global_106070.f_10166[iParam1 /*12*/].f_6;
	Global_106070.f_10166[iParam0 /*12*/].f_7 = Global_106070.f_10166[iParam1 /*12*/].f_7;
	Global_106070.f_10166[iParam0 /*12*/].f_8 = Global_106070.f_10166[iParam1 /*12*/].f_8;
	Global_106070.f_10166[iParam0 /*12*/].f_9 = Global_106070.f_10166[iParam1 /*12*/].f_9;
	Global_106070.f_10166[iParam0 /*12*/].f_10 = Global_106070.f_10166[iParam1 /*12*/].f_10;
	Global_106070.f_10166[iParam0 /*12*/].f_11 = Global_106070.f_10166[iParam1 /*12*/].f_11;
	Global_106070.f_10166[iParam1 /*12*/] = { Var0 };
	Global_106070.f_10166[iParam1 /*12*/].f_4 = uVar4;
	Global_106070.f_10166[iParam1 /*12*/].f_5 = uVar5;
	Global_106070.f_10166[iParam1 /*12*/].f_6 = uVar6;
	Global_106070.f_10166[iParam1 /*12*/].f_7 = uVar7;
	Global_106070.f_10166[iParam1 /*12*/].f_8 = uVar8;
	Global_106070.f_10166[iParam1 /*12*/].f_9 = uVar9;
	Global_106070.f_10166[iParam1 /*12*/].f_10 = uVar10;
	Global_106070.f_10166[iParam1 /*12*/].f_11 = uVar11;
}

void func_37()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!func_38(Global_106070.f_24876[iVar0 /*4*/]))
		{
			if (Global_106070.f_24876[iVar0 /*4*/] != 145)
			{
				Global_106070.f_24876[iVar0 /*4*/] = 145;
			}
		}
		iVar0++;
	}
}

bool func_38(int iParam0)
{
	return iParam0 < 3;
}

void func_39()
{
	UNK2::_0x7E2BD3EF6C205F09("No_Filter", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam1", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam2", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam3", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam4", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam5", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam6", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam7", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam9", 1);
	UNK2::_0x7E2BD3EF6C205F09("phone_cam12", 0);
}

void func_40(int iParam0, int iParam1)
{
	SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	while (!SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam0);
	}
	SYSTEM::START_NEW_SCRIPT_WITH_NAME_HASH(iParam0, iParam1);
}

int func_41()
{
	if (((UNK::_0xEF7D17BC6C85264C() || UNK::_0xF2CA003F167E21D2()) || NETWORK::_0x67FC09BC554A75E5()) || NETWORK::_0x966DD84FB6A46017())
	{
		return 1;
	}
	return 0;
}

