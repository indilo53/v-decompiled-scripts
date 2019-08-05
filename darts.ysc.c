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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_55 = 0f;
	vector3 vLocal_56 = { 0f, 0f, 0f };
	var uLocal_59 = 0;
	int iLocal_60 = 0;
	struct<9> Local_61 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_70 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_79 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	vector3 vLocal_85 = { 0f, 0f, 0f };
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	char* sLocal_102 = NULL;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	float fLocal_106 = 0f;
	float fLocal_107 = 0f;
	float fLocal_108 = 0f;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	bool bLocal_133 = 0;
	float fLocal_134 = 0f;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	int iLocal_151[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_163 = 0;
	struct<68> Local_164 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 10;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 2;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 8;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 8;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	float fLocal_285 = 0f;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	vector3 vLocal_292 = { 0f, 0f, 0f };
	var uLocal_295[2] = { 0, 0 };
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	bool bLocal_305 = 0;
	bool bLocal_306 = 0;
	bool bLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	bool bLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	bool bLocal_313 = 0;
	bool bLocal_314 = 0;
	bool bLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	bool bLocal_320 = 0;
	var uLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	int iLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	vector3 vLocal_366 = { 0f, 0f, 0f };
	vector3 vLocal_369 = { 0f, 0f, 0f };
	vector3 vLocal_372 = { 0f, 0f, 0f };
	vector3 vLocal_375 = { 0f, 0f, 0f };
	vector3 vLocal_378 = { 0f, 0f, 0f };
	vector3 vLocal_381 = { 0f, 0f, 0f };
	float fLocal_384 = 0f;
	float fLocal_385 = 0f;
	float fLocal_386 = 0f;
	float fLocal_387 = 0f;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	char* sLocal_390 = NULL;
	char* sLocal_391 = NULL;
	int iLocal_392 = 0;
	char* sLocal_393 = NULL;
	char* sLocal_394 = NULL;
	char* sLocal_395[3] = { NULL, NULL, NULL };
	char* sLocal_399[3] = { NULL, NULL, NULL };
	char* sLocal_403[3] = { NULL, NULL, NULL };
	char* sLocal_407[3] = { NULL, NULL, NULL };
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
#endregion

void __EntryFunction__()
{
	struct<460> Var0;
	int iVar464;
	struct<4> Var465;
	vector3 vVar471;
	struct<25> Var477;
	struct<682> Var508;
	struct<532> Var1191;
	bool bVar1768;
	bool bVar1769;
	bool bVar1770;
	bool bVar1771;
	var uVar1772;
	int iVar1773;
	int iVar1774;
	int iVar1775;
	float fVar1776;
	float fVar1777;
	vector3 vVar1778;
	vector3 vVar1781;
	vector3 vVar1784;
	vector3 vVar1787;
	vector3 vVar1790;
	char* sVar1793;
	var uVar1794;
	var uVar1797;
	var uVar1800;
	var uVar1803[20];
	var uVar1824;
	int iVar1825;
	int iVar1826;
	int iVar1827;
	int iVar1828;
	int iVar1829;
	int iVar1830;
	float fVar1831;
	int iVar1832;
	
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
	iLocal_28 = joaat("prop_dart_1");
	iLocal_29 = joaat("prop_dart_2");
	iLocal_32 = joaat("prop_dart_bd_cab_01");
	fLocal_55 = 0.063f;
	vLocal_56 = { -0.0035f, 0f, -0.001f };
	iLocal_60 = joaat("prop_target_bull");
	vLocal_85 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_92 = 0.1f;
	iLocal_103 = 3;
	fLocal_106 = 80f;
	fLocal_107 = 140f;
	fLocal_108 = 180f;
	iLocal_114 = 1;
	iLocal_115 = 65;
	iLocal_116 = 49;
	iLocal_117 = 64;
	iLocal_140 = 65;
	iLocal_142 = 660;
	fLocal_147 = 0.27f;
	fLocal_148 = 0.1f;
	fLocal_149 = -120f;
	fLocal_150 = 127f;
	fLocal_285 = ((0.05f + 0.275f) - 0.01f);
	vLocal_292 = { 500f, 500f, 500f };
	bLocal_307 = true;
	vLocal_372 = { -573.1373f, 294.0269f, 78.1765f };
	vLocal_375 = { -574.1169f, 292.7964f, 78.1766f };
	vLocal_378 = { 1995.295f, 3050.084f, 46.91535f };
	vLocal_381 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_384 = 172.6813f;
	fLocal_385 = 274.5094f;
	fLocal_386 = 142.6717f;
	fLocal_387 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var477.f_1 = 2;
	Var477.f_1.f_1 = 7;
	Var477.f_1.f_1.f_8 = 7;
	Var508.f_3 = 8;
	Var508.f_12 = 8;
	Var508.f_21 = 4;
	Var508.f_26.f_3 = 8;
	Var508.f_26.f_12 = 8;
	Var508.f_26.f_21 = 4;
	Var508.f_72 = 3;
	Var508.f_72.f_44.f_3.f_1 = 4;
	Var508.f_72.f_113 = 2;
	Var508.f_72.f_113.f_1.f_1 = 4;
	Var508.f_72.f_113.f_1.f_66.f_1 = 4;
	Var508.f_72.f_246.f_6 = 12;
	Var508.f_72.f_246.f_187 = 3;
	Var508.f_509.f_2 = 8;
	Var508.f_509.f_2.f_1.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var508.f_681 = 2;
	Var1191.f_32 = 3;
	Var1191.f_36 = 1;
	Var1191.f_53 = 2;
	Var1191.f_57 = 13;
	Var1191.f_71 = 13;
	Var1191.f_280 = 13;
	Var1191.f_489 = 13;
	Var1191.f_503 = 13;
	Var1191.f_517 = 13;
	Var1191.f_531 = 13;
	iVar1774 = 0;
	sLocal_393 = "facials@gen_female@variations@happy";
	switch (func_496(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			sLocal_394 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_394 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_394 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_395[0] = "mood_happy_1";
	sLocal_395[1] = "mood_happy_2";
	sLocal_395[2] = "mood_happy_3";
	sLocal_399[0] = "darts_outro_01_guy1";
	sLocal_399[1] = "darts_outro_02_guy2";
	sLocal_399[2] = "darts_outro_03_guy2";
	sLocal_403[0] = "darts_outro_01_guy2";
	sLocal_403[1] = "darts_outro_02_guy1";
	sLocal_403[2] = "darts_outro_03_guy1";
	sLocal_407[0] = "darts_outro_01_cam";
	sLocal_407[1] = "darts_outro_02_cam";
	sLocal_407[2] = "darts_outro_03_cam";
	uLocal_295[0] = PLAYER::PLAYER_PED_ID();
	bLocal_310 = true;
	vVar1778 = { 1992.293f, 3050.583f, 47.98973f };
	vVar1781 = { -572.0406f, 294.1958f, 79.9374f };
	func_495();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_334 = 1;
		switch (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2))
		{
			case 0:
				iLocal_331 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_331 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_329 = 10;
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_4))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_334 == 2)
			{
				ScriptParam_0 = { vVar1781 };
				ScriptParam_0.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_0 = { vVar1778 };
				ScriptParam_0.f_3 = 57.78315f;
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_0.f_4 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				OBJECT::_0x163F8B586BC95F2A(ScriptParam_0, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_0, &vVar1784, 0);
				ScriptParam_0.f_3 = vVar1784.z;
			}
		}
	}
	else
	{
		vVar1784 = { ENTITY::GET_ENTITY_COORDS(ScriptParam_0.f_4, 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_494(), 0))
	{
		func_492(iLocal_329, 1);
		if (PED::IS_PED_IN_ANY_VEHICLE(func_494(), 0))
		{
			AI::TASK_LEAVE_ANY_VEHICLE(func_494(), 0, 0);
		}
		uLocal_295[1] = func_494();
	}
	else
	{
		GAMEPLAY::SET_MISSION_FLAG(1);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_483();
		func_465(&Var0, &Var508, &Var1191);
	}
	UI::DISPLAY_AREA_NAME(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
	func_463(1);
	uLocal_325 = func_460(func_496(uLocal_295[0]), 1);
	fVar1776 = (SYSTEM::TO_FLOAT(uLocal_325) / 100f);
	fVar1777 = (fVar1776 * 1200f);
	iLocal_142 = SYSTEM::ROUND(fVar1777);
	if (iLocal_142 < 660)
	{
		iLocal_142 = 660;
	}
	func_459(23, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
		UI::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
		if (iLocal_317 && Var0 < 13)
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(Var477, Var477.f_18, Var477.f_21, Var477.f_24, Var477.f_24, 2);
		}
		if ((PED::IS_PED_INJURED(ScriptParam_0.f_5) && !ENTITY::DOES_ENTITY_EXIST(func_494())) || (ENTITY::DOES_ENTITY_EXIST(func_494()) && PED::IS_PED_INJURED(func_494())))
		{
			func_465(&Var0, &Var508, &Var1191);
		}
		if (!PED::IS_PED_INJURED(uLocal_295[0]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_295[0], 239, 1);
			PED::SET_PED_RESET_FLAG(uLocal_295[0], 124, 1);
			func_458();
			CONTROLS::_DISABLE_INPUT_GROUP(0);
			CONTROLS::_DISABLE_INPUT_GROUP(2);
			iVar1775 = 0;
			while (iVar1775 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1803, -1))
			{
				if (uVar1803[iVar1775] != uLocal_295[1])
				{
					if (!PED::IS_PED_INJURED(uVar1803[iVar1775]))
					{
						PED::SET_PED_RESET_FLAG(uVar1803[iVar1775], 240, 1);
					}
				}
				iVar1775++;
			}
			switch (Var0)
			{
				case 0:
					UI::CLEAR_HELP(1);
					func_457(&(Var0.f_243), &ScriptParam_0);
					func_456(Var0.f_243.f_1, Var0.f_243.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_243))
					{
						vLocal_366 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						vLocal_369 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						uLocal_129 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vLocal_366, vLocal_369, 1115815936, 0, 2);
						CAM::SET_CAM_FOV(uLocal_129, 30f);
					}
					func_455();
					SYSTEM::SETTIMERA(0);
					Var0 = 1;
					break;
				
				case 1:
					if (SYSTEM::TIMERA() > 500 && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						GAMEPLAY::CLEAR_AREA(ScriptParam_0, 0.5f, 1, 0, 0, 0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
						{
							AI::CLEAR_SEQUENCE_TASK(&uLocal_332);
							AI::OPEN_SEQUENCE_TASK(&uLocal_332);
							AI::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
							AI::CLOSE_SEQUENCE_TASK(uLocal_332);
							AI::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_332);
						}
						vLocal_85 = { vLocal_85 };
						Var0 = 2;
					}
					break;
				
				case 2:
					iVar1825 = 0;
					while (iVar1825 < 2)
					{
						iVar1826 = 0;
						while (iVar1826 < 3)
						{
							func_454(&(Var0.f_5[iVar1825 /*79*/][iVar1826 /*26*/]), iVar1825);
							iVar1826++;
						}
						iVar1825++;
					}
					iVar1827 = 0;
					while (iVar1827 < 3)
					{
						func_454(&(Var0.f_164[iVar1827 /*26*/]), 0);
						iVar1827++;
					}
					iVar464 = 2;
					func_453(0);
					func_451(&Var477, iLocal_334, Var0.f_243.f_1, Var0.f_243.f_4);
					if (ENTITY::DOES_ENTITY_EXIST(Var0.f_243))
					{
						vVar1784 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Var0.f_243, Var477.f_18) };
					}
					func_448(&Var477, &Var508);
					AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
					Var0 = 3;
					break;
				
				case 3:
					if (func_445(&Var477, &Var508))
					{
						func_442(&(Var0.f_243), &Var465, &vVar471, 0);
						iLocal_388 = func_496(uLocal_295[0]);
						switch (iLocal_388)
						{
							case 0:
								sLocal_390 = func_441("MICHAEL");
								if (!GAMEPLAY::IS_BIT_SET(Global_106526, 0))
								{
									sVar1793 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar1793 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_390 = func_441("FRANKLIN");
								bLocal_314 = true;
								if (!GAMEPLAY::IS_BIT_SET(Global_106526, 0))
								{
									sVar1793 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar1793 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_390 = func_441("TREVOR");
								if (!GAMEPLAY::IS_BIT_SET(Global_106526, 0))
								{
									sVar1793 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar1793 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!ENTITY::IS_ENTITY_DEAD(func_494(), 0))
						{
							iLocal_389 = func_496(func_494());
							if (iLocal_389 == 145)
							{
								iLocal_389 = func_439(func_494());
							}
							switch (iLocal_389)
							{
								case 0:
									sLocal_391 = func_441("MICHAEL");
									break;
								
								case 1:
									sLocal_391 = func_441("FRANKLIN");
									break;
								
								case 2:
									sLocal_391 = func_441("TREVOR");
									break;
								
								case 19:
									sLocal_391 = func_441("LAMAR");
									PED::SET_PED_COMPONENT_VARIATION(func_494(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_391 = func_441("JIMMY");
									break;
								
								default:
									sLocal_391 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar1773 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 200);
							if (iLocal_334 == 2)
							{
								if (iVar1773 < 51)
								{
									sLocal_391 = func_441("RAYMOND");
									iLocal_392 = 954610991;
								}
								else if (iVar1773 < 101)
								{
									sLocal_391 = func_441("JOHAN");
									iLocal_392 = 94453331;
								}
								else if (iVar1773 < 151)
								{
									sLocal_391 = func_441("STAN");
									iLocal_392 = 1891555423;
								}
								else
								{
									sLocal_391 = func_441("VINCE");
									iLocal_392 = -1067630349;
								}
							}
							else if (iVar1773 < 51)
							{
								sLocal_391 = func_441("KRISTY");
								iLocal_392 = 885327384;
							}
							else if (iVar1773 < 101)
							{
								sLocal_391 = func_441("MARLENE");
								iLocal_392 = -1791000994;
							}
							else if (iVar1773 < 151)
							{
								sLocal_391 = func_441("LORIE");
								iLocal_392 = 1954368234;
							}
							else
							{
								sLocal_391 = func_441("SHELLEY");
								iLocal_392 = -863218904;
							}
						}
						uLocal_59 = OBJECT::CREATE_OBJECT(iLocal_60, vVar471, 1, 1, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0 = 4;
					}
					break;
				
				case 4:
					if (!CAM::_0x705A276EBFF3133D())
					{
						uVar1824 = OBJECT::CREATE_OBJECT(joaat("prop_dart_1"), vVar471, 1, 1, 0);
						func_436(Var0.f_243.f_4, Var465, &uVar1803, &ScriptParam_0);
						func_435(&Var477, sLocal_390, sLocal_391);
						AI::CLEAR_PED_TASKS(uLocal_295[1]);
						uLocal_333 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 0, 0, 0);
						}
						func_434(&(Var0.f_257), 0, PLAYER::PLAYER_PED_ID(), sLocal_390, 0, 1);
						if (ENTITY::IS_ENTITY_DEAD(func_494(), 0))
						{
							if (iLocal_334 == 2)
							{
								func_434(&(Var0.f_257), 3, uLocal_295[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_434(&(Var0.f_257), 3, uLocal_295[1], "DartsMelHick1", 0, 1);
							}
							iVar1774 = -1;
						}
						else
						{
							func_434(&(Var0.f_257), 3, func_494(), sLocal_391, 0, 1);
							func_432(&uVar1800);
							iVar1774 = 6;
						}
						if (!GAMEPLAY::IS_BIT_SET(Global_106526, 0))
						{
							iVar1774 = -1;
						}
						else
						{
							iVar1774 = 3;
						}
						func_431(&Var477, 0);
						Var0 = 5;
					}
					break;
				
				case 5:
					if ((((!PED::IS_PED_INJURED(uLocal_295[1]) && PED::IS_PED_ON_FOOT(uLocal_295[0])) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_295[0], 1)) && PED::IS_PED_ON_FOOT(uLocal_295[1])) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_295[1], 1))
					{
						bLocal_305 = func_429(&uLocal_321);
						if ((func_428() && GAMEPLAY::GET_GAME_TIMER() >= iLocal_323 + 1000) && iVar1774 != 9)
						{
							if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
							{
								CAM::DO_SCREEN_FADE_OUT(500);
							}
						}
						if (CAM::IS_SCREEN_FADED_OUT() && iVar1774 != 9)
						{
							func_425(0);
							func_423();
							iVar1774 = 9;
						}
						switch (iVar1774)
						{
							case -1:
								if (!PED::IS_PED_INJURED(uLocal_295[1]))
								{
									uLocal_327 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_333 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_333, uLocal_327, "darts_ig_intro_cam", "mini@dartsintro");
									CAM::SET_CAM_ACTIVE(uLocal_333, 1);
									CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
									AI::TASK_CLEAR_LOOK_AT(uLocal_295[0]);
									AI::TASK_CLEAR_LOOK_AT(uLocal_295[1]);
									AI::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_295[0]);
									AI::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_295[1]);
									AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[1], uLocal_327, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[0], uLocal_327, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									AI::TASK_PLAY_ANIM(uLocal_295[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									AI::TASK_PLAY_ANIM(uLocal_295[0], "mini@dartsintro", sVar1793, 8f, -8f, -1, 32, 0, 0, 0, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uVar1824, uLocal_327, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 1090519040, 0, 1148846080);
									func_422(&uVar1800);
									iVar1774++;
								}
								break;
							
							case 0:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_327))
								{
									if (!bVar1770)
									{
										if (func_421(&uVar1800) > 1.5f)
										{
											func_420(uLocal_295[0], "DARTS_REQUEST_GAME", 6);
											bVar1770 = true;
											func_419(&uVar1800);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_295[0]))
									{
										if (!bVar1771)
										{
											if (!func_418(&uVar1800))
											{
												func_432(&uVar1800);
											}
											else if (func_421(&uVar1800) > 0.5f)
											{
												func_417(uLocal_295[1]);
												func_419(&uVar1800);
												bVar1771 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_422(&uVar1800);
											func_416("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_327) > 0.25f)
											{
												func_422(&uVar1800);
												func_416("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_327) > 0.55f)
											{
												func_416("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_327) > 0.85f)
											{
												func_416("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_327) > 0.95f)
									{
										iLocal_317 = 1;
										iVar1774++;
									}
									else if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_327) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(uLocal_295[1]))
									{
										func_413(Var0.f_243.f_1, Var0.f_243.f_4, func_415(2), func_414(0), 0, 1);
										iLocal_31 = 0;
										UI::CLEAR_HELP(1);
										CAM::DESTROY_CAM(uLocal_333, 0);
										AI::CLEAR_PED_TASKS(uLocal_295[0]);
										AI::CLEAR_PED_TASKS(uLocal_295[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar1824, -1000f, 0);
										OBJECT::DELETE_OBJECT(&uVar1824);
										AUDIO::STOP_AUDIO_SCENE(func_412(0));
										func_419(&uVar1800);
										Var0 = 6;
										iVar1774 = 0;
									}
								}
								break;
							
							case 3:
								if (!PED::IS_PED_INJURED(uLocal_295[1]))
								{
									uLocal_327 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ScriptParam_0.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (ENTITY::GET_ENTITY_HEADING(ScriptParam_0.f_4) - 3.783146f), 2);
									uLocal_333 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_333, uLocal_327, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									CAM::SET_CAM_ACTIVE(uLocal_333, 1);
									CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
									AI::TASK_CLEAR_LOOK_AT(uLocal_295[0]);
									AI::TASK_CLEAR_LOOK_AT(uLocal_295[1]);
									AI::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_295[0]);
									AI::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_295[1]);
									AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[1], uLocal_327, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[0], uLocal_327, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									AI::TASK_PLAY_ANIM(uLocal_295[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									AI::TASK_PLAY_ANIM(uLocal_295[0], "mini@dartsintro_alt1", sVar1793, 8f, -8f, -1, 32, 0, 0, 0, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uVar1824, uLocal_327, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 1090519040, 0, 1148846080);
									func_422(&uVar1800);
									iVar1774++;
								}
								break;
							
							case 4:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_327))
								{
									if (!bVar1770)
									{
										if (func_421(&uVar1800) > 0.5f)
										{
											func_420(uLocal_295[0], "DARTS_REQUEST_GAME", 6);
											bVar1770 = true;
											func_419(&uVar1800);
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_295[0]))
									{
										if (!bVar1771)
										{
											if (!func_418(&uVar1800))
											{
												func_432(&uVar1800);
											}
											else if (func_421(&uVar1800) > 0.25f)
											{
												func_417(uLocal_295[1]);
												func_419(&uVar1800);
												bVar1771 = true;
											}
										}
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_327) > 0.95f)
									{
										iLocal_317 = 1;
										iVar1774++;
									}
									else if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_327) > 0.99f)
								{
									if (!PED::IS_PED_INJURED(uLocal_295[1]))
									{
										func_411();
										CAM::DESTROY_CAM(uLocal_333, 0);
										AI::CLEAR_PED_TASKS(uLocal_295[0]);
										AI::CLEAR_PED_TASKS(uLocal_295[1]);
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar1824, -1000f, 0);
										OBJECT::DELETE_OBJECT(&uVar1824);
										AUDIO::STOP_AUDIO_SCENE(func_412(0));
										func_419(&uVar1800);
										Var0 = 6;
										iVar1774 = 0;
									}
								}
								break;
							
							case 9:
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									iLocal_317 = 1;
									iLocal_31 = 0;
									UI::CLEAR_HELP(1);
									if (!PED::IS_PED_INJURED(uLocal_295[1]))
									{
										ENTITY::SET_ENTITY_COORDS(uLocal_295[0], Var465, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(uLocal_295[0], Var0.f_243.f_4);
										ENTITY::SET_ENTITY_COORDS(uLocal_295[1], Var465.f_3, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(uLocal_295[1], Var0.f_243.f_4);
										AI::CLEAR_PED_TASKS(uLocal_295[0]);
										AI::CLEAR_PED_TASKS(uLocal_295[1]);
									}
									CAM::DESTROY_CAM(uLocal_333, 0);
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uVar1824, -1000f, 0);
									OBJECT::DELETE_OBJECT(&uVar1824);
									if (!GAMEPLAY::IS_BIT_SET(Global_106526, 0))
									{
										func_413(Var0.f_243.f_1, Var0.f_243.f_4, func_415(2), func_414(0), 0, 1);
									}
									else
									{
										func_411();
									}
									AUDIO::STOP_AUDIO_SCENE(func_412(0));
									func_419(&uVar1800);
									CAM::DO_SCREEN_FADE_IN(500);
									Var0 = 6;
									iVar1774 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar1774)
					{
						case 0:
							iLocal_323 = GAMEPLAY::GET_GAME_TIMER();
							if (!PED::IS_PED_INJURED(uLocal_295[1]))
							{
								ENTITY::SET_ENTITY_COORDS(uLocal_295[0], Var465, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(uLocal_295[0], Var0.f_243.f_4);
								ENTITY::SET_ENTITY_COORDS(uLocal_295[1], Var465.f_3, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(uLocal_295[1], Var0.f_243.f_4);
							}
							AUDIO::START_AUDIO_SCENE(func_412(1));
							iVar1774 = 0;
							Var0 = 7;
							break;
						
						case 1:
							if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_323) > 1500)
							{
								func_409(&(Var508.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar1774++;
							}
							break;
						
						case 2:
							if (!func_408(&(Var508.f_57), 1, 0))
							{
								AUDIO::START_AUDIO_SCENE(func_412(1));
								iVar1774 = 0;
								Var0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!GAMEPLAY::IS_BIT_SET(Global_106526, 0))
					{
						if (func_405(&iVar464, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &uVar1797))
						{
							GAMEPLAY::SET_BIT(&Global_106526, 0);
							Var0 = 8;
						}
					}
					else
					{
						CAM::SET_CAM_ACTIVE(uLocal_120, 1);
						Var0 = 8;
					}
					break;
				
				case 8:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					switch (iVar1774)
					{
						case 0:
							if (!ENTITY::DOES_ENTITY_EXIST(func_494()))
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_106526, 10))
								{
									GAMEPLAY::SET_BIT(&Global_106526, 10);
								}
								else
								{
									GAMEPLAY::CLEAR_BIT(&Global_106526, 10);
								}
								func_403(&Var508);
								iVar1774++;
							}
							else
							{
								func_403(&Var508);
								iVar1774++;
							}
							break;
						
						case 1:
							if (GAMEPLAY::IS_PC_VERSION())
							{
								if (fLocal_134 != GRAPHICS::_GET_ASPECT_RATIO(0))
								{
									fLocal_134 = GRAPHICS::_GET_ASPECT_RATIO(0);
									CAM::SET_CAM_FOV(uLocal_120, func_402(fLocal_134));
									CAM::SET_CAM_FOV(uLocal_121, func_402(fLocal_134));
								}
							}
							if (func_342(&Var508, &(Var0.f_452), &(Var0.f_453)))
							{
								AUDIO::STOP_AUDIO_SCENE(func_412(1));
								if (Var0.f_452 > 0)
								{
									iVar1774 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_341(&Var477, 0, 0, 0, 0);
										bVar1769 = true;
									}
									func_338(1, -1);
									Var0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_331(&Var0, &Var477, &Var508))
					{
						Var0.f_249.f_4 = 1;
						if (Global_106565.f_18964.f_5 >= 5 && Global_106565.f_18964.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_106565.f_18964.f_5 >= 3 && Global_106565.f_18964.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_330(Global_106565.f_18964.f_5, &uLocal_326))
						{
							func_329(&(Var508.f_666), 24, 1);
						}
						fLocal_90 = func_328(Global_106565.f_18964.f_5);
						fLocal_91 = func_327(Global_106565.f_18964.f_5);
						fLocal_88 = fLocal_90;
						fLocal_89 = fLocal_91;
						iLocal_151[4]++;
						if (!PED::IS_PED_INJURED(uLocal_295[1]))
						{
							AI::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_295[1]);
							ENTITY::SET_ENTITY_COORDS(uLocal_295[1], Var465.f_3, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uLocal_295[1], Var0.f_243.f_4);
						}
						if (func_418(&uVar1794))
						{
							func_419(&uVar1794);
						}
						AUDIO::START_AUDIO_SCENE(func_412(2));
						func_326(uLocal_295[1]);
						Var0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (fLocal_134 != GRAPHICS::_GET_ASPECT_RATIO(0))
						{
							fLocal_134 = GRAPHICS::_GET_ASPECT_RATIO(0);
							CAM::SET_CAM_FOV(uLocal_120, func_402(fLocal_134));
							CAM::SET_CAM_FOV(uLocal_121, func_402(fLocal_134));
						}
					}
					if (!bLocal_315)
					{
						STREAMING::REQUEST_ANIM_DICT("mini@dartsoutro");
						bLocal_315 = true;
					}
					if (!iLocal_316)
					{
						if (bLocal_315)
						{
							if (!STREAMING::HAS_ANIM_DICT_LOADED("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_316 = 1;
							}
						}
					}
					func_244(&Var0, &vVar471, &Var477, &Var508, &uVar1794);
					break;
				
				case 11:
					switch (iVar1774)
					{
						case 0:
							if (func_421(&(Var0.f_254)) > 0.5f)
							{
								UI::CLEAR_HELP(1);
								UI::CLEAR_PRINTS();
								func_243(PLAYER::PLAYER_PED_ID());
								func_341(&Var477, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar1828 = 0;
								while (iVar1828 < 2)
								{
									iVar1829 = 0;
									while (iVar1829 < 3)
									{
										func_242(&(Var0.f_5[iVar1828 /*79*/][iVar1829 /*26*/]));
										iVar1829++;
									}
									func_241(&Var477, iVar1828);
									iVar1828++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_239(&(Var508.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_239(&(Var508.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_239(&(Var508.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_239(&(Var508.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar1831 = GRAPHICS::_GET_ASPECT_RATIO(1);
								if (fVar1831 > 2f)
								{
									vVar1787 = { 1992.294f, 3047.577f, 46.21517f };
									vVar1790 = { 0f, 0f, 138.74f };
								}
								else
								{
									vVar1787 = { 1992.336f, 3047.924f, 46.21517f };
									vVar1790 = { 0f, 0f, 136.74f };
								}
								iVar1830 = func_238();
								uLocal_327 = PED::CREATE_SYNCHRONIZED_SCENE(vVar1787, vVar1790, 2);
								uLocal_333 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_333, uLocal_327, sLocal_407[iVar1830], "mini@dartsoutro");
								CAM::SET_CAM_ACTIVE(uLocal_333, 1);
								CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
								if (!PED::IS_PED_INJURED(uLocal_295[0]) && !PED::IS_PED_INJURED(uLocal_295[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar1832 = 1;
										}
										else
										{
											iVar1832 = 0;
										}
										AUDIO::PLAY_SOUND_FRONTEND(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_237(&uLocal_295, iVar1832);
										AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_399[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_403[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_394, sLocal_395[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_236(&uLocal_295);
										AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_399[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_403[iVar1830], 1000f, -1.5f, 0, 0, 1148846080, 0);
										AI::TASK_PLAY_ANIM(uLocal_295[1], sLocal_393, sLocal_395[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar1774++;
							}
							break;
						
						case 1:
							if (!func_234(&(Var508.f_62), 1))
							{
								iVar1774++;
							}
							break;
						
						case 2:
							func_419(&(Var0.f_254));
							iLocal_311 = 0;
							AUDIO::STOP_AUDIO_SCENE(func_412(3));
							func_411();
							if (CAM::DOES_CAM_EXIST(uLocal_333))
							{
								CAM::DESTROY_CAM(uLocal_333, 0);
							}
							iVar1774 = 0;
							Var0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_421(&(Var0.f_254)) > 0.92f)
					{
						func_41(&Var0, &Var508, &Var477, &Var1191, bVar1769);
					}
					break;
				
				case 13:
					uVar1772 = func_10(&Var1191, 0, 1065353216, 0, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(func_494(), 0))
					{
						AI::CLEAR_PED_TASKS(uLocal_295[1]);
						Var0 = 15;
					}
					switch (iVar1774)
					{
						case 0:
							AI::CLEAR_PED_TASKS(uLocal_295[0]);
							if (!bLocal_313)
							{
								CAM::RENDER_SCRIPT_CAMS(0, bLocal_313, 3000, 1, 0, 0);
							}
							else
							{
								CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
							}
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							UI::CLEAR_PRINTS();
							AI::TASK_LOOK_AT_ENTITY(uLocal_295[0], uLocal_295[1], 5000, 2049, 3);
							func_432(&uVar1800);
							iVar1774++;
							break;
						
						case 1:
							if (func_7(&uVar1800) > 0.1f)
							{
								if (!bVar1768)
								{
								}
								func_432(&uVar1800);
								iVar1774++;
							}
							break;
						
						case 2:
							if (func_7(&uVar1800) > 0.3f)
							{
								if (!PED::IS_PED_INJURED(uLocal_295[1]))
								{
									if (!bVar1768)
									{
										func_4(uLocal_295[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_432(&uVar1800);
								iVar1774++;
							}
							break;
						
						case 3:
							if (uVar1772 || bVar1768)
							{
								Var0 = 15;
								iVar1774++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var508);
					if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_1(uLocal_295[1]);
						iLocal_330 = 2;
						bVar1768 = true;
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_412(2)))
						{
							AUDIO::STOP_AUDIO_SCENE(func_412(2));
						}
						Var0 = 13;
					}
					if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_100 = 0;
						}
						func_329(&(Var508.f_666), 8, 0);
						Var0 = 10;
					}
					break;
				
				case 15:
					func_465(&Var0, &Var508, &Var1191);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!UI::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_329(&(uParam0->f_666), 8, 1);
			func_329(&(uParam0->f_666), 15, 0);
			func_329(&(uParam0->f_666), 16, 0);
			func_329(&(uParam0->f_666), 17, 0);
		}
		UI::CLEAR_SMALL_PRINTS();
		UI::SET_WARNING_MESSAGE_WITH_HEADER("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, 0, -1, 0, 0, 1, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_329(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(func_494(), 0) || iParam2)
	{
		func_420(iParam0, sParam1, iParam3);
	}
	else if (!PED::IS_PED_INJURED(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_102, iParam3);
	}
}

void func_5(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(uParam0, sParam1, sParam2, func_6(iParam3), 0);
}

int func_6(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

float func_7(var uParam0)
{
	if (func_418(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_8(bool bParam0)
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

bool func_9(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (GAMEPLAY::GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = GAMEPLAY::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (AI::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			uParam0->f_564 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			}
		}
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	CONTROLS::DISABLE_CONTROL_ACTION(2, 19, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 21, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 28, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 29, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_38(0);
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			UI::_SHOW_CURSOR_THIS_FRAME();
		}
	}
	Global_36975 = 1;
	if (!uParam0->f_563)
	{
		switch (func_496(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_37(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_37(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_37((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_37(30f) - func_37(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_36(1);
		uParam0->f_572 = (uParam0->f_572 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_15(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (CONTROLS::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_559 = func_14((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_14((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_36(0);
			}
			return !bVar0;
		}
	}
	func_36(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
	func_13(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, 1));
	func_12("ES_HELP");
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(215);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
		func_13(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, 1));
		func_12("ES_XPAND");
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(216);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_12(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_13(var uParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)
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

void func_15(var uParam0, float fParam1, var uParam2)
{
	int iVar0;
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
	var uVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_35() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_34(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(150);
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(100);
				}
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
				if (uParam0->f_556 == 4)
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT((uParam0->f_56 - 1));
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_56);
				}
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(uParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(69);
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0.15f);
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		func_33();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_37((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_35());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_32(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_32(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_35()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 215);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 216);
	CONTROLS::SET_INPUT_EXCLUSIVE(2, 200);
	CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_29((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				CONTROLS::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				CONTROLS::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
				CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 215) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	UI::GET_HUD_COLOUR(1, &uVar13, &uVar14, &uVar15, &iVar16);
	UI::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, iVar0);
	UI::SET_TEXT_WRAP(fVar9, fVar10);
	UI::SET_TEXT_JUSTIFICATION(0);
	UI::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_37(6f));
	fVar1 = (fVar1 + (func_37(30f) - func_37((2f * 2f))));
	fVar11 = (fVar2 - func_37((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
		func_33();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_37((2f - 0.5f)) - 0.001388889f)), fVar6, func_28(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_37((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			func_25(uParam0, iVar17, (fVar1 + func_37(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_37(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_37((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_37(2f));
					fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
					func_33();
					GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_37((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_37((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_37(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
			func_33();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			UI::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (UNK::_GET_CURRENT_LANGUAGE_ID() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_35()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_35()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_35()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_35()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				UI::SET_TEXT_WRAP(fVar20, fVar21);
				UI::SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				UI::SET_TEXT_JUSTIFICATION(0);
			}
			UI::SET_TEXT_SCALE(1f, 0.4f);
			func_17(&(uParam0->f_550), fVar20, (fVar1 + func_37((2f * 2f))), 0, 0, 0);
			UI::SET_TEXT_WRAP(fVar20, fVar21);
			UI::SET_TEXT_JUSTIFICATION(2);
			UI::SET_TEXT_SCALE(1f, 0.4f);
			UI::SET_TEXT_CENTRE(0);
			func_33();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			UI::SET_TEXT_WRAP(fVar20, fVar22);
			UI::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 1:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 2:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 5:
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
					UI::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_554, 1);
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						UI::GET_HUD_COLOUR(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						UI::GET_HUD_COLOUR(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						UI::GET_HUD_COLOUR(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_37(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_37(30f) - 2f));
		}
	}
}

float func_16(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_17(var uParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	UI::SET_TEXT_CENTRE(iParam3);
	UI::SET_TEXT_FONT(iParam5);
	func_33();
	if (bParam4)
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam0);
	}
	else
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam0);
	}
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_18(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	
	StringCopy(&cVar0, func_24(iParam0), 64);
	StringCopy(&cVar16, func_21(iParam0, bParam1), 64);
	if (GAMEPLAY::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_20())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_20())
			{
				fVar34 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar32) / fVar34));
			iVar33 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		vVar37 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_19(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_19(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.y = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_6997[29 /*16*/])) == -1487683087)
		{
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17410)
			{
				*fParam4 = (*fParam4 * (Global_17410 / *fParam3));
				*fParam3 = Global_17410;
			}
		}
		return 1;
	}
	return 0;
}

float func_19(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.5f;
			break;
		
		case 60:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_20()
{
	var uVar0;
	var uVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&uVar0, &uVar1);
	fVar2 = (SYSTEM::TO_FLOAT(uVar0) / SYSTEM::TO_FLOAT(uVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_21(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6997[iParam0 /*16*/])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_6997[iParam0 /*16*/])) == -1487683087)
		{
			Var19 = { func_23(PLAYER::PLAYER_ID()) };
			if (NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_22(&uVar3);
			}
		}
		else
		{
			return func_22(&(Global_17411.f_6997[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 50:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 51:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 53:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 54:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 55:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 59:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 60:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_22(var uParam0)
{
	return uParam0;
}

struct<13> func_23(var uParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

char* func_24(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6020[iParam0 /*16*/])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var16 = { func_23(PLAYER::PLAYER_ID()) };
			NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_22(&uVar0);
		}
		else
		{
			return func_22(&(Global_17411.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_25(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	UI::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
	UI::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, uParam5);
	UI::SET_TEXT_WRAP(fParam3, fParam4);
	UI::SET_TEXT_JUSTIFICATION(1);
	UI::SET_TEXT_SCALE(1f, func_27(14f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_FONT(0);
	func_33();
	if (uParam0->f_531[iParam1])
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, uParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, uParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, uParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		UI::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		UI::SET_TEXT_JUSTIFICATION(2);
	}
	UI::SET_TEXT_SCALE(1f, func_27(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		UI::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		UI::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	UI::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, uParam5);
	func_26(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_26(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_FONT(0);
	func_33();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			UI::SET_TEXT_SCALE(1f, func_27(18f));
			UI::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				UI::_BEGIN_TEXT_COMMAND_WIDTH("ESMINDOLLA");
				UI::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
				fVar1 = UI::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			else
			{
				UI::_BEGIN_TEXT_COMMAND_WIDTH("ESDOLLA");
				UI::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
				fVar1 = UI::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			UI::SET_TEXT_SCALE(1f, func_27(14f));
			break;
	}
	UI::_SET_NOTIFICATION_COLOR_NEXT(iVar0);
	switch (iParam5)
	{
		case 11:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
			break;
		
		case 4:
		case 5:
			UI::SET_TEXT_SCALE(1f, func_27(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				UI::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
			}
			else
			{
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				UI::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
			}
			break;
		
		case 6:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam4);
			break;
		
		case 7:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam4);
			break;
		
		case 8:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			UI::SET_TEXT_FONT(5);
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam4);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
			break;
		
		case 15:
		case 14:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam4);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
			break;
		
		case 16:
			UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam4);
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			UI::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			UI::SET_TEXT_SCALE(1f, func_27(14f));
		}
		else
		{
			UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_28(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_29(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_30(7, iVar0);
		Global_1373453.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_4453.f_172[iVar0] = iParam2;
		Global_1373453.f_4453.f_216[iVar0] = iParam3;
		Global_1373453.f_4453.f_183[iVar0] = iParam4;
		Global_1373453.f_4453.f_194[iVar0] = iParam5;
		Global_1373453.f_4453.f_249[iVar0] = iParam6;
		Global_1373453.f_4453.f_260[iVar0] = iParam7;
		Global_1373453.f_4453.f_205[iVar0] = iParam8;
		Global_1373453.f_4453.f_314[iVar0] = iParam9;
		Global_1373453.f_4453.f_325[iVar0] = iParam10;
		Global_1373453.f_4453.f_357[iVar0] = iParam11;
		Global_1373453.f_4453.f_238[iVar0] = iParam12;
		Global_1373453.f_4453.f_271[iVar0] = iParam13;
		Global_1373453.f_4453.f_368[iVar0] = iParam14;
		Global_1373453.f_4453.f_379[iVar0] = iParam15;
		Global_1373453.f_4453.f_390[iVar0] = iParam16;
		Global_1373453.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_30(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1373453.f_6184[iParam0]), iParam1);
}

int func_31(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1373453.f_6184[iParam0], iParam1);
}

float func_32(var uParam0)
{
	UI::_BEGIN_TEXT_COMMAND_WIDTH(uParam0);
	return (UI::_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_33()
{
	GRAPHICS::_SET_UI_LAYER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_SET_UI_LAYER(7);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}

void func_34(var uParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

float func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	if (GAMEPLAY::IS_PC_VERSION())
	{
	}
	return fVar0;
}

void func_36(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

float func_37(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_38(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_39(0))
		{
			func_425(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_2424, 2);
	}
}

int func_39(int iParam0)
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

bool func_40()
{
	return GAMEPLAY::IS_BIT_SET(Global_1681628, 19);
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(2, 199, 1);
	}
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!iLocal_318)
		{
			if (func_211(uParam1, 0, &iLocal_319))
			{
				func_329(&(uParam1->f_666), 9, 0);
				iLocal_318 = 1;
			}
		}
	}
	if (iLocal_300)
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			UI::_SHOW_CURSOR_THIS_FRAME();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !PLAYER::IS_PLAYER_ONLINE())
			{
				uParam1->f_646 = func_202(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_329(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_124(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_120(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
				{
					uParam1->f_680 = 0;
					func_329(&(uParam1->f_666), 9, 0);
				}
				else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 215))
				{
					iVar0 = 2;
				}
				else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_119(&(uParam1->f_72)))
			{
				if (!bLocal_320)
				{
					bLocal_320 = true;
					func_118(&(uParam1->f_509), 0, 0, 1, 1);
					func_117(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_117(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_117(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_117(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_114(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_107(uParam1, 0, 0, iLocal_318);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_327) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_327) >= 0.995f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_327))
		{
			bLocal_313 = true;
			if (CAM::DOES_CAM_EXIST(uLocal_333))
			{
				CAM::DESTROY_CAM(uLocal_333, 0);
				if (!PED::IS_PED_INJURED(uLocal_295[0]) && !PED::IS_PED_INJURED(uLocal_295[1]))
				{
					AI::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_295[0]);
					AI::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_295[1]);
					PED::_0x2208438012482A1A(uLocal_295[0], 0, 0);
					PED::_0x2208438012482A1A(uLocal_295[1], 0, 0);
				}
			}
			func_106();
		}
		if (func_421(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_311)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_237(&uLocal_295, iVar2);
				}
				else
				{
					func_236(&uLocal_295);
				}
				iLocal_311 = 1;
			}
		}
		if (iVar0 == 1)
		{
			UI::CLEAR_HELP(1);
			AUDIO::STOP_AUDIO_SCENE(func_412(3));
			if (!PED::IS_PED_INJURED(uLocal_295[0]) && !PED::IS_PED_INJURED(uLocal_295[1]))
			{
				AI::TASK_CLEAR_LOOK_AT(uLocal_295[0]);
				AI::TASK_CLEAR_LOOK_AT(uLocal_295[1]);
			}
			func_105(uParam3);
			if (bParam4)
			{
				func_341(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			func_419(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_311 = 0;
			iLocal_309 = 0;
			bLocal_313 = false;
			func_102();
			iLocal_318 = 0;
			iLocal_289 = 0;
			uParam1->f_680 = 0;
			iLocal_319 = 0;
			bLocal_320 = false;
			func_94(&(uParam1->f_72), 0);
			func_455();
		}
		else if (iVar0 == 2)
		{
			func_93(uParam3);
			AUDIO::STOP_AUDIO_SCENE(func_412(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_53(func_89(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			UI::CLEAR_PRINTS();
			*uParam0 = 13;
		}
		else if (((CONTROLS::IS_CONTROL_JUST_PRESSED(0, 234) || CONTROLS::IS_CONTROL_JUST_PRESSED(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_299)
			{
				vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_52(vVar3, 0, iLocal_299);
				iLocal_299 = 0;
			}
			else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				iLocal_322++;
				if (iLocal_322 >= uParam0->f_436)
				{
					iLocal_322 = 0;
				}
				vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_50(vVar3);
			}
			else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				iLocal_322 = (iLocal_322 - 1);
				if (iLocal_322 < 0)
				{
					iLocal_322 = (uParam0->f_436 - 1);
				}
				vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_50(vVar3);
			}
		}
		else if (((CONTROLS::IS_CONTROL_JUST_PRESSED(0, 211) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, 211)) && bVar1) && (iLocal_318 || !PLAYER::IS_PLAYER_ONLINE()))
		{
			uParam1->f_680 = 1;
			func_118(&(uParam1->f_509), 0, 0, 1, 1);
			func_117(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_117(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_117(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_320)
			{
				func_117(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_114(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		UI::CLEAR_HELP(1);
		UI::CLEAR_PRINTS();
		func_46(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_151[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar6 = GRAPHICS::_GET_ASPECT_RATIO(1);
		if (fVar6 > 2f)
		{
			vVar7 = { 1992.294f, 3047.577f, 46.21517f };
			vVar10 = { 0f, 0f, 138.74f };
		}
		else
		{
			vVar7 = { 1992.336f, 3047.924f, 46.21517f };
			vVar10 = { 0f, 0f, 136.74f };
		}
		iVar13 = func_238();
		uLocal_327 = PED::CREATE_SYNCHRONIZED_SCENE(vVar7, vVar10, 2);
		uLocal_333 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_333, uLocal_327, sLocal_407[iVar13], "mini@dartsoutro");
		CAM::SET_CAM_ACTIVE(uLocal_333, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		if (!PED::IS_PED_INJURED(uLocal_295[0]) && !PED::IS_PED_INJURED(uLocal_295[1]))
		{
			if (uParam0->f_454)
			{
				AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_399[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_403[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_394, sLocal_395[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[1], uLocal_327, "mini@dartsoutro", sLocal_399[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				AI::TASK_SYNCHRONIZED_SCENE(uLocal_295[0], uLocal_327, "mini@dartsoutro", sLocal_403[iVar13], 1000f, -1.5f, 0, 0, 1148846080, 0);
				AI::TASK_PLAY_ANIM(uLocal_295[1], sLocal_393, sLocal_395[GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_313 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = GAMEPLAY::GET_GAME_TIMER();
		iVar14 = 0;
		while (iVar14 < 2)
		{
			iVar15 = 0;
			while (iVar15 < 3)
			{
				func_242(&(uParam0->f_5[iVar14 /*79*/][iVar15 /*26*/]));
				iVar15++;
			}
			func_241(uParam2, iVar14);
			iVar14++;
		}
	}
	else if ((GAMEPLAY::GET_GAME_TIMER() - uParam1->f_671) > 400 && func_42(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_300 = 1;
	}
}

int func_42(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_45(uParam0);
	func_44(uParam0);
	if (GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
		uParam0->f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_43(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_71851 = 1;
	return 1;
}

void func_43(var uParam0)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(2);
	func_13(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, 1));
	func_12("ES_HELP_TU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
	func_13(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, 1));
	func_12("ES_HELP_TD");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
	func_13(CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1));
	func_12("ES_HELP_AB");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_44(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	UI::SET_TEXT_JUSTIFICATION(0);
	UI::SET_TEXT_SCALE(1f, func_27(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			UI::_BEGIN_TEXT_COMMAND_WIDTH("STRING");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = UI::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			UI::_BEGIN_TEXT_COMMAND_WIDTH(&(uParam0->f_13));
			fVar0 = UI::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
	}
	else
	{
		UI::_BEGIN_TEXT_COMMAND_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = UI::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_45(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_46(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	uParam0->f_561 = 1;
	if (bParam1)
	{
		func_49(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_49(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_48(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_48(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_48(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_48(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_47(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_36(1);
}

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_48(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_49(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_50(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0 = { func_51(vParam0) };
	if (bLocal_133)
	{
		CAM::SET_CAM_COORD(uLocal_131, vVar0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_131, uLocal_130, 500, 1, 1);
		bLocal_133 = false;
	}
	else
	{
		CAM::SET_CAM_COORD(uLocal_130, vVar0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_130, uLocal_131, 500, 1, 1);
		bLocal_133 = true;
	}
}

Vector3 func_51(vector3 vParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar3 = { 0.3495f, -0.0276f, -0.0114f };
	vVar0 = { vParam0 - vVar3 };
	return vVar0;
}

void func_52(vector3 vParam0, bool bParam3, bool bParam4)
{
	vector3 vVar0;
	
	vVar0 = { func_51(vParam0) };
	if (bParam3)
	{
		CAM::SET_CAM_COORD(uLocal_130, vVar0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_130, uLocal_129, 1500, 1, 1);
		CAM::SET_CAM_ACTIVE(uLocal_129, 0);
		CAM::SET_CAM_COORD(uLocal_131, vVar0);
		bLocal_133 = true;
	}
	else if (bParam4)
	{
		CAM::SET_CAM_COORD(uLocal_130, vVar0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_130, uLocal_122, 2000, 1, 1);
		bLocal_133 = true;
	}
	else
	{
		if (bLocal_133)
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_129, uLocal_130, 1500, 1, 1);
		}
		else
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_129, uLocal_131, 1500, 1, 1);
		}
		CAM::SET_CAM_ACTIVE(uLocal_130, 0);
	}
}

void func_53(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_54(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_88();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_87(99, 1);
					func_86(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_86(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_86(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_70(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_65(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_65(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_86(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_86(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_65(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_86(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_86(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_64(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_87(95, iParam3);
					break;
				
				case 1:
					func_87(97, iParam3);
					break;
				
				case 2:
					func_87(96, iParam3);
					break;
			}
			func_87(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_57(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_57(iVar1);
	}
	iVar5 = (Global_53668[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53668[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53668[iVar2] = 2147483647;
				}
				else
				{
					Global_53668[iVar2] = (Global_53668[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_86(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_86(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_86(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53668[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53668[iVar2];
			Global_53668[iVar2] = (Global_53668[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106565.f_20558.f_233[iVar2 /*69*/]++;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_1++;
		if (Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_56(iParam0);
	if (Global_36425 == 15)
	{
		func_55(0);
	}
	return 1;
}

void func_55(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53676[iVar0 /*3*/][0] = Global_106565.f_20558[iVar0];
		Global_53676.f_31[iVar0 /*3*/][0] = Global_106565.f_20558.f_11[iVar0];
		Global_53676.f_62[iVar0 /*3*/][0] = Global_106565.f_20558.f_22[iVar0];
		Global_53676.f_93[iVar0 /*3*/][0] = Global_106565.f_20558.f_33[iVar0];
		Global_53676.f_124[iVar0 /*3*/][0] = Global_106565.f_20558.f_44[iVar0];
		Global_53676.f_155[iVar0 /*3*/][0] = Global_106565.f_20558.f_55[iVar0];
		Global_53676.f_186[iVar0 /*3*/][0] = Global_106565.f_20558.f_66[iVar0];
		Global_53676.f_217[iVar0 /*3*/][0] = Global_106565.f_20558.f_77[iVar0];
		Global_53676.f_248[iVar0 /*3*/][0] = Global_106565.f_20558.f_88[iVar0];
		if (!bParam0)
		{
			Global_53676[iVar0 /*3*/][1] = Global_106565.f_20558[iVar0];
			Global_53676.f_31[iVar0 /*3*/][1] = Global_106565.f_20558.f_11[iVar0];
			Global_53676.f_62[iVar0 /*3*/][1] = Global_106565.f_20558.f_22[iVar0];
			Global_53676.f_93[iVar0 /*3*/][1] = Global_106565.f_20558.f_33[iVar0];
			Global_53676.f_124[iVar0 /*3*/][1] = Global_106565.f_20558.f_44[iVar0];
			Global_53676.f_155[iVar0 /*3*/][1] = Global_106565.f_20558.f_55[iVar0];
			Global_53676.f_186[iVar0 /*3*/][1] = Global_106565.f_20558.f_66[iVar0];
			Global_53676.f_217[iVar0 /*3*/][1] = Global_106565.f_20558.f_77[iVar0];
			Global_53676.f_248[iVar0 /*3*/][1] = Global_106565.f_20558.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_56(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_53668[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), uVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), uVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), uVar0, 1);
			break;
	}
}

void func_57(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_63(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_63(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_63(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_63(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_60(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_60(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_60(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_60(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_60(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_60(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0))
		{
			bVar0 = true;
			GAMEPLAY::CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || GAMEPLAY::IS_BIT_SET(Global_2097152[func_59() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		GAMEPLAY::CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		GAMEPLAY::CLEAR_BIT(&(Global_2097152[func_59() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		UI::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_58(iParam0));
		UI::_SET_NOTIFICATION_MESSAGE_2(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_59()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_60(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_61(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_61(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_62();
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

int func_62()
{
	return Global_1312745;
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_62();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_64(int iParam0)
{
	func_87(93, iParam0);
	func_87(29, iParam0);
	func_87(30, iParam0);
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_67(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_67(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_67(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_67(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = NETWORK::_GET_POSIX_TIME();
		iVar1 = func_66(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = NETWORK::_GET_POSIX_TIME();
		iVar3 = func_66(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = NETWORK::_GET_POSIX_TIME();
		iVar5 = func_66(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = NETWORK::_GET_POSIX_TIME();
		iVar7 = func_66(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = NETWORK::_GET_POSIX_TIME();
		iVar9 = func_66(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = NETWORK::_GET_POSIX_TIME();
		iVar11 = func_66(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return GAMEPLAY::IS_BIT_SET(Global_106565.f_20558.f_471, iParam0);
	}
	return GAMEPLAY::IS_BIT_SET(Global_2097152[func_59() /*10778*/].f_6165.f_10, iParam0);
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_61(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_62();
	}
	iVar1 = func_69(iParam0, iParam1);
	uVar2 = func_68(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_62();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

int func_70(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_85(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_71(27, 1);
	return 1;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_72(iParam0, iParam1);
}

int func_72(int iParam0, int iParam1)
{
	if (func_84(14) && !func_83(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_26012 != 0 && !Global_71590)
	{
		return 0;
	}
	if (func_82(&Global_4269608))
	{
		if (func_80(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_73(&Global_4269608, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_73(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_84(14) && !func_83(iParam1))
	{
		return 0;
	}
	if (func_80(uParam0, iParam1))
	{
		return 0;
	}
	if (func_79(uParam0) < 0f)
	{
		func_78(uParam0, 0);
	}
	func_76(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_74(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_84(14) && !func_83(iParam1))
	{
		return 0;
	}
	if (func_80(uParam0, iParam1))
	{
		return 0;
	}
	if (func_79(uParam0) < 0f)
	{
		func_78(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_75(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_75(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_76(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_77(uParam0, iVar0);
		iVar0++;
	}
	func_78(uParam0, (Global_4269607 - 0.5f));
}

void func_77(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_78(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_79(var uParam0)
{
	return uParam0->f_80;
}

bool func_80(var uParam0, int iParam1)
{
	return func_81(uParam0, iParam1) != -1;
}

int func_81(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_82(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_83(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

bool func_84(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESSION(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESSION(iParam0, iParam1);
	}
	return 0;
}

void func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_87(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_88()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53668[0] == iVar0)
		{
			Global_53668[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53668[1] == iVar0)
		{
			Global_53668[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53668[2] == iVar0)
		{
			Global_53668[2] = iVar0;
		}
	}
}

int func_89()
{
	func_90();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_90()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_92(Global_106565.f_2357.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_496(PLAYER::PLAYER_PED_ID());
			if (func_91(iVar0) && (!func_84(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_91(Global_106565.f_2357.f_539.f_4321))
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

bool func_91(int iParam0)
{
	return iParam0 < 3;
}

int func_92(int iParam0)
{
	if (func_91(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_93(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_94(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_100(uParam0);
		func_99(uParam0);
		func_98(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_96();
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_95(&(Global_1840924.f_49));
	}
	Global_2528542.f_3958 = 0;
}

void func_95(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_96()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835392[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835392.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2708 = 0;
	Global_1835392.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835392.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835392.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835392.f_2754[iVar0] = 0;
		Global_1835392.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2768 = 0;
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2771[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2779 = 0;
	func_97(&(Global_1835392.f_2780));
	func_95(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_95(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_95(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_97(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_98(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar13 /*100*/])->f_16), "", 64);
		(uParam0[iVar13 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_58 = 0;
		(uParam0[iVar13 /*100*/])->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			(uParam0[iVar13 /*100*/])->f_60[iVar14] = 0f;
			(uParam0[iVar13 /*100*/])->f_67[iVar14] = 0;
			iVar14++;
		}
		(uParam0[iVar13 /*100*/])->f_75 = 0;
		(uParam0[iVar13 /*100*/])->f_74 = 0;
		(uParam0[iVar13 /*100*/])->f_76 = 0;
		(uParam0[iVar13 /*100*/])->f_77 = 0;
		(uParam0[iVar13 /*100*/])->f_78 = 0;
		(uParam0[iVar13 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar13 /*100*/])->f_80), "", 16);
		iVar13++;
	}
	func_95(&(Global_1835392.f_2830));
}

void func_99(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_95(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_100(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_101(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_95(&(Global_1835008.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}

void func_102()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_104(&(Global_1835013.f_73));
	func_104(&(Global_1835013.f_142));
	func_104(&(Global_1835013.f_211));
	func_104(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_103(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_103(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

void func_104(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_105(var uParam0)
{
	func_45(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_106()
{
	CAM::SET_CAM_ACTIVE(uLocal_126, 1);
}

int func_107(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_36(1);
			func_118(&(uParam0->f_509), 0, 0, 1, 1);
			func_117(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_117(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_117(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !PLAYER::IS_PLAYER_ONLINE())
			{
				func_117(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_114(&(uParam0->f_509), 1);
			func_329(&(uParam0->f_666), 8, 0);
			func_329(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_110(func_113(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_112(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
					func_110(func_113(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_112(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_110(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				func_408(&(uParam0->f_57), 0, 0);
			}
			func_120(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!UI::IS_PAUSE_MENU_ACTIVE())
		{
			if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_671) > 900)
			{
				if (CONTROLS::IS_CONTROL_PRESSED(2, 216))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_329(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 215))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_109();
					func_108();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			return 2;
		}
		else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			func_329(&(uParam0->f_666), 9, 0);
			func_329(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_108()
{
	if (Global_2437364.f_2708[0 /*80*/].f_2 != 0)
	{
		Global_2437364.f_2708[0 /*80*/].f_2 = 5;
	}
}

void func_109()
{
	Global_25909 = 1;
}

void func_110(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_111(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_30(3, iVar0);
		Global_1373453.f_2655[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_2655.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_2655.f_183[iVar0] = iParam3;
		Global_1373453.f_2655.f_172[iVar0] = iParam2;
		Global_1373453.f_2655.f_205[iVar0] = iParam4;
		Global_1373453.f_2655.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1373453.f_2655.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1373453.f_2655.f_420[iVar0] = iParam7;
		Global_1373453.f_2655.f_453[iVar0] = iParam8;
		Global_1373453.f_2655.f_431[iVar0] = iParam9;
		Global_1373453.f_2655.f_442[iVar0] = iParam10;
		Global_1373453.f_2655.f_464[iVar0] = iParam11;
		Global_1373453.f_2655.f_475[iVar0] = iParam12;
		Global_1373453.f_2655.f_486[iVar0] = iParam13;
		Global_1373453.f_2655.f_497[iVar0] = iParam14;
	}
}

int func_111(var uParam0)
{
	if (GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		return 1;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "") || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

char* func_112(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_113(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_114(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_116(&(uParam0->f_1), 1024);
	}
	else
	{
		func_115(&(uParam0->f_1), 1024);
	}
}

void func_115(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_116(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_117(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_118(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_116(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_116(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_116(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_116(&(uParam0->f_1), 8192);
	}
}

int func_119(var uParam0)
{
	if ((GAMEPLAY::IS_BIT_SET(uParam0->f_42, 1) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_120(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || GAMEPLAY::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_123(uParam0))
	{
		return;
	}
	UI::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::_SET_UI_LAYER(iParam2);
	if (!func_122(uParam0->f_1, 256) || (func_122(uParam0->f_1, 8192) && CONTROLS::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(iParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(iParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(func_122(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = CONTROLS::_IS_INPUT_DISABLED(2);
					break;
				
				case 2:
					bVar4 = !CONTROLS::_IS_INPUT_DISABLED(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						uVar2 = GAMEPLAY::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!GAMEPLAY::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(uVar0, uVar1, uVar2);
						}
						else
						{
							uVar3 = CONTROLS::_0x80C2FD58D720C801(uVar0, uVar1, uVar2);
						}
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							func_13(uVar3);
						}
						iVar7++;
					}
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (GAMEPLAY::IS_PC_VERSION())
					{
						if (func_122(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_121(bParam4, func_121(func_122(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_116(&(uParam0->f_1), 256);
		func_115(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

float func_121(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_122(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_123(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_116(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_124(var uParam0, var uParam1)
{
	func_125(uParam1, uParam0);
}

void func_125(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	char cVar9[64];
	char[] cVar25[8];
	int iVar27[3];
	int iVar31;
	struct<13> Var32;
	var uVar45;
	vector3 vVar51[24];
	vector3 vVar57[24];
	bool bVar63;
	
	func_201(&(Global_1840924.f_49), 1, 0);
	UI::HIDE_HELP_TEXT_THIS_FRAME();
	func_200();
	func_38(0);
	UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_198(1);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	func_197(1);
	func_196(1);
	if (!func_193())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 3))
	{
		*uParam0 = func_192();
		GAMEPLAY::SET_BIT(&(uParam1->f_42), 3);
	}
	Var32 = { func_23(PLAYER::PLAYER_ID()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::_NETWORK_ARE_ROS_AVAILABLE() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_RESTRICTED_PROFILE())) || Global_1835392.f_2832 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_1835392.f_2829 != 2)
				{
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_RESTRICTED_PROFILE())
			{
				if (Global_1835392.f_2829 != 3)
				{
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 3;
				}
			}
			else if (!NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
			{
				if (Global_1835392.f_2829 != 4)
				{
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 4;
				}
			}
			else if (Global_1835392.f_2832 != 0)
			{
				if (Global_1835392.f_2829 != 5)
				{
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 5;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				func_191(*uParam0, Global_1835392.f_2780);
				if (UI::DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_190(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835392.f_2780.f_9 };
							func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_188(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				iVar31 = 0;
				GAMEPLAY::SET_BIT(&iVar31, 4);
				func_187(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				GAMEPLAY::SET_BIT(&iVar31, 5);
				func_187(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				GAMEPLAY::SET_BIT(&iVar31, 6);
				func_187(*uParam0, &iVar6, iVar31, 1, 1);
				GAMEPLAY::SET_BIT(&(uParam1->f_42), 1);
				func_186(*uParam0);
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 2);
				UI::CLEAR_HELP(1);
			}
			else
			{
				func_186(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
				Global_1835392.f_2829 = 1;
			}
			if (!func_151(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 1);
				if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_191(*uParam0, Global_1835392.f_2780);
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_190(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_188(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					GAMEPLAY::SET_BIT(&(uParam1->f_42), 0);
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 2);
				}
				iVar6 = 0;
				iVar0 = 0;
				if (Global_1835392.f_2825 == -1)
				{
					StringCopy(&cVar51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 4);
							func_187(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 5);
							func_187(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 6);
							func_187(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 7);
						func_150(*uParam0, iVar6, iVar31, &cVar51);
						iVar6++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_95(&(Global_1835392.f_2823));
				}
				else if (func_148(&(Global_1835392.f_2823), 300, 0))
				{
					StringCopy(&cVar57, "SC_LB_DL", 24);
					StringIntConCat(&cVar57, Global_1835392.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 4);
							func_187(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 5);
							func_187(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							GAMEPLAY::SET_BIT(&iVar31, 6);
							func_187(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 7);
						func_150(*uParam0, iVar6, iVar31, &cVar57);
						iVar6++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_95(&(Global_1835392.f_2823));
				}
				func_186(*uParam0);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 0);
				if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					func_191(*uParam0, Global_1835392.f_2780);
					if (UI::DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_190(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_189(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_188(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!GAMEPLAY::IS_BIT_SET(uParam1->f_42, 6))
					{
						func_98(&Global_1839723);
						func_144(uParam1, &Global_1839723);
						func_143(uParam1, &Global_1839723);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_190(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839723[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = 0;
									GAMEPLAY::SET_BIT(&iVar31, 4);
									func_187(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									GAMEPLAY::SET_BIT(&iVar31, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_190(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_187(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_187(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									GAMEPLAY::SET_BIT(&iVar31, 6);
									if (!NETWORK::_0x67A5589628E0CFF6())
									{
										bVar63 = true;
									}
									else if (!NETWORK::_0xBA9775570DB788CF())
									{
										bVar63 = true;
									}
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_190(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_187(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_187(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_142(Global_1839723[iVar0 /*100*/].f_32))
							{
								if (func_190(uParam1->f_44))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &uVar45);
									if (!Global_1839723[iVar0 /*100*/].f_74 && GAMEPLAY::ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835392.f_2780.f_27)
									{
										if (func_141(&(Global_1839723[iVar0 /*100*/].f_32), &Var32))
										{
											GAMEPLAY::SET_BIT(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												GAMEPLAY::SET_BIT(&iVar31, 3);
											}
										}
									}
									if (func_190(uParam1->f_44))
									{
										cVar9 = { Global_1839723[iVar0 /*100*/] };
										if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_1839723[iVar0 /*100*/].f_84)) && !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_1839723[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839723[iVar0 /*100*/].f_84), 64);
										}
										func_140(*uParam0, iVar6, iVar31, Global_1839723[iVar0 /*100*/].f_59, &cVar9, &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_140(*uParam0, iVar6, iVar31, Global_1839723[iVar0 /*100*/].f_59, &(Global_1839723[iVar0 /*100*/]), &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835392.f_2708)
									{
										bVar8 = false;
										if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2770, iVar1))
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2754[iVar1] == Global_1839723[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_134(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], 0, Global_1839723[iVar0 /*100*/].f_58);
											}
											else
											{
												func_134(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], Global_1839723[iVar0 /*100*/].f_74, Global_1839723[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2761[iVar1] == Global_1839723[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_131(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_131(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], Global_1839723[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_130();
									uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0 /*100*/].f_59 > 2)
										{
											GAMEPLAY::SET_BIT(&iVar31, 2);
											GAMEPLAY::SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_129(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 4);
						func_187(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 5);
						func_187(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						GAMEPLAY::SET_BIT(&iVar31, 6);
						func_187(*uParam0, &iVar6, iVar31, 1, 0);
					}
					GAMEPLAY::SET_BIT(&(uParam1->f_42), 1);
					GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 2);
					func_186(*uParam0);
					UI::CLEAR_HELP(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							GAMEPLAY::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_129(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_186(*uParam0);
					func_126(uParam0, uParam1);
				}
			}
		}
	}
}

void func_126(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		UI::_SHOW_CURSOR_THIS_FRAME();
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 239);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 240);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 237);
		CONTROLS::SET_INPUT_EXCLUSIVE(2, 238);
		CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 241))
		{
			CONTROLS::_SET_CONTROL_NORMAL(2, 188, 1f);
		}
		if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 242))
		{
			CONTROLS::_SET_CONTROL_NORMAL(2, 187, 1f);
		}
		if (UI::_0x632B2940C67F4EA9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					CONTROLS::_SET_CONTROL_NORMAL(2, 217, 1f);
				}
			}
		}
	}
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		func_128(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!GAMEPLAY::IS_BIT_SET(uParam1->f_246, 0))
		{
			if ((CONTROLS::IS_CONTROL_PRESSED(2, 188) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 188)) || iVar6 < -100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				GAMEPLAY::SET_BIT(&(uParam1->f_246), 0);
				func_95(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_127(uParam1, 188))
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_246), 0);
		}
		if (!GAMEPLAY::IS_BIT_SET(uParam1->f_246, 1))
		{
			if ((CONTROLS::IS_CONTROL_PRESSED(2, 187) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 187)) || iVar6 > 100)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				GAMEPLAY::SET_BIT(&(uParam1->f_246), 1);
				func_95(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_127(uParam1, 187))
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam1->f_246, 3))
	{
		if ((CONTROLS::IS_CONTROL_PRESSED(2, 204) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_246), 3);
			func_95(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_127(uParam1, 204))
	{
		GAMEPLAY::CLEAR_BIT(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_129(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			GAMEPLAY::SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_129(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_42), 2);
		}
		if (func_142(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!GAMEPLAY::IS_BIT_SET(uParam1->f_246, 2))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(2, 217) || CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(2, 217))
				{
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						GAMEPLAY::SET_BIT(&(uParam1->f_246), 2);
						NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!CONTROLS::IS_CONTROL_PRESSED(2, 217))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_127(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_128(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!CONTROLS::IS_CONTROL_PRESSED(2, iParam1) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_148(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!CONTROLS::IS_CONTROL_PRESSED(2, iParam1) && !CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, iParam1)) || func_148(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_128(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((CONTROLS::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_129(var uParam0, int iParam1, int iParam2)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT_STATE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_130()
{
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_131(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				UI::ADD_TEXT_COMPONENT_FLOAT(fParam44, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				UI::ADD_TEXT_COMPONENT_INTEGER(SYSTEM::FLOOR(fParam44));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 18 || Param0.f_29[iParam43] == 20)
				{
					fParam44 = (fParam44 * -1f);
				}
				if (!GAMEPLAY::_0xD3D15555431AB793())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_133(fParam44);
					}
					else
					{
						fParam44 = func_132(fParam44);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				UI::ADD_TEXT_COMPONENT_FLOAT(fParam44, 2);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

float func_132(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_133(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_134(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
{
	struct<4> Var0;
	
	if (iParam44 == 2147483647 || iParam44 == -2147483647)
	{
		bParam45 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[iParam43])
	{
		case 5:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				UI::ADD_TEXT_COMPONENT_INTEGER(iParam44);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				UI::ADD_TEXT_COMPONENT_INTEGER(-iParam44);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 11 && iParam44 < 0)
				{
					iParam44 = (iParam44 * -1);
				}
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam44))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam44));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam44))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam44));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 8:
			if (func_139(iParam44) != 0)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_136(func_139(iParam44), 0));
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 14 || Param0.f_29[iParam43] == 16)
				{
					iParam44 = (iParam44 * -1);
				}
				if (!GAMEPLAY::_0xD3D15555431AB793())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = SYSTEM::FLOOR(func_133(SYSTEM::TO_FLOAT(iParam44)));
					}
					else
					{
						iParam44 = SYSTEM::FLOOR(func_132(SYSTEM::TO_FLOAT(iParam44)));
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				UI::ADD_TEXT_COMPONENT_INTEGER(iParam44);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 21:
			if (iParam44 > 20)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				Var0 = { func_135(iParam44) };
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var0);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

struct<4> func_135(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_136(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("ammo_rpg"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("ammo_tank"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("ammo_space_rocket"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("ammo_player_laser"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("ammo_enemy_laser"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("weapon_stone_hatchet"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("weapon_raypistol"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("weapon_raycarbine"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("weapon_rayminigun"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		default:
			if (func_138(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_137(&(Var0.f_31));
				}
				else
				{
					return func_137(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_137(var uParam0)
{
	return uParam0;
}

int func_138(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = DLC1::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (DLC1::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_139(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_140(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, var uParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
	if (iParam3 > 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(cParam4);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam5);
}

int func_141(var uParam0, var uParam1)
{
	if (!func_142(*uParam0))
	{
		return 0;
	}
	if (!func_142(*uParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_142(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_143(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 5) && !GAMEPLAY::IS_BIT_SET(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar77 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar77;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar77 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar77;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_144(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 5) && !GAMEPLAY::IS_BIT_SET(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_147(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_147(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_147(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_145(uParam1);
	}
}

void func_145(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2704[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_23(PLAYER::PLAYER_ID()) };
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1835392.f_2826))
	{
		iVar16 = STATS::_0x58A651CD201D89AD(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_146(&Global_1839593);
				iVar2 = 0;
				STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_1835392.f_2826, iVar0, &Global_1839593);
				*(uParam0[iVar0 /*100*/]) = { Global_1839593.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839593.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839593.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839593.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839593.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839593.f_60;
				Global_1835392.f_2708 = Global_1839593.f_62;
				Global_1835392.f_2769 = Global_1839593.f_63;
				iVar2 = 0;
				if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835392.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_141(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835392.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839593.f_62)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_63, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[iVar1] = Global_1839593.f_97[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[iVar1] = Global_1839593.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_146(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

int func_147(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835392[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536[iParam3 /*16*/] = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536.f_49[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_67[Global_1835392.f_2779];
			Global_1839536.f_53[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_60[Global_1835392.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835392.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][Global_1835392.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835392.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_23(PLAYER::PLAYER_ID()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835392.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1835392.f_2775[iParam3] + iVar0) < 12 && (Global_1835392.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_148(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_149(uParam0, bParam2, 0);
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

void func_149(var uParam0, bool bParam1, bool bParam2)
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

void func_150(var uParam0, int iParam1, int iParam2, char[4] cParam3)
{
	GAMEPLAY::SET_BIT(&iParam2, 7);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(cParam3);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_151(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_185(&(Global_1835392.f_2827)))
		{
			func_149(&(Global_1835392.f_2827), 1, 0);
			return 0;
		}
		else if (!func_148(&(Global_1835392.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!NETWORK::_NETWORK_ARE_ROS_AVAILABLE() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_NETWORK_HAS_RESTRICTED_PROFILE())) || Global_1835392.f_2832 != 0)
	{
		GAMEPLAY::CLEAR_BIT(&(uParam0->f_42), 4);
		return 1;
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 4))
	{
		func_184(uParam0);
		GAMEPLAY::SET_BIT(&(uParam0->f_42), 4);
		return 0;
	}
	else if (GAMEPLAY::IS_BIT_SET(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_182(uParam0))
	{
		return 0;
	}
	if (!func_180(uParam0))
	{
		return 0;
	}
	if (!func_167(uParam0))
	{
		return 0;
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 6))
	{
		func_98(&Global_1839723);
		func_144(uParam0, &Global_1839723);
		func_143(uParam0, &Global_1839723);
		GAMEPLAY::SET_BIT(&(uParam0->f_42), 6);
	}
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_42, 7))
	{
		if (!func_185(&(Global_1835392.f_2830)))
		{
			func_149(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_148(&(Global_1835392.f_2830), 30000, 1))
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_42), 7);
		}
		if (func_164(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_161(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_156(&Global_1839723))
		{
			func_152(&Global_1839723);
			GAMEPLAY::SET_BIT(&(uParam0->f_42), 7);
			func_152(&Global_1839723);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_152(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_155(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_154(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_146(&Global_1839593);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839593 = Global_1835392.f_2826;
			Global_1839593.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839593.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839593.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839593.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_142((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839593.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839593.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839593.f_62 = Global_1835392.f_2708;
			Global_1839593.f_63 = Global_1835392.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				GAMEPLAY::SET_BIT(&(Global_1839593.f_61), 0);
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1839593.f_61), 0);
			}
			GAMEPLAY::SET_BIT(&(Global_1839593.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839593.f_62)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_1839593.f_63, iVar1))
				{
					Global_1839593.f_97[iVar1] = (uParam0[iVar0 /*100*/])->f_67[iVar1];
				}
				else
				{
					Global_1839593.f_64[iVar1] = (uParam0[iVar0 /*100*/])->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838577.f_81[iVar2] = Global_1835392.f_2826;
			STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_1839593);
		}
		iVar0++;
	}
	Global_1838577.f_87[iVar2 /*3*/] = { func_153(PLAYER::PLAYER_ID()) };
}

Vector3 func_153(var uParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

void func_154(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1838577.f_81[iParam1]))
		{
			STATS::_0x8EC74CEB042E7CFF(Global_1838577.f_81[iParam1]);
		}
		Global_1838577.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
		{
			STATS::_0x8EC74CEB042E7CFF(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838577.f_81[iVar0] == iParam0)
			{
				Global_1838577.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_155(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1838577.f_81[iVar0]))
		{
			iVar3 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1838577.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_156(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_160(uParam0);
			if (GAMEPLAY::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_142((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_159(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841022))
					{
						Global_1841022[Global_1841022.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841022.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841022.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_157(&((uParam0[1 /*100*/])->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841022.f_206 > 12)
			{
				Global_1841022.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841022.f_206)
				{
					if (func_142((uParam0[iVar0 /*100*/])->f_32) && func_142(Global_1841022[iVar1 /*13*/]))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841022[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841022.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_157(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_START(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_158(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_158(var uParam0, var uParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

int func_159(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_142(*(uParam1[iVar0 /*13*/])))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_160(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_103(&(Global_1841022[iVar0 /*13*/]));
		StringCopy(&(Global_1841022.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
		{
			NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
		}
	}
	if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
	{
		NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
	}
	Global_1841022.f_206 = 0;
}

int func_161(var uParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return 1;
	}
	else if (GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		if (!func_163(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_162(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_162(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_142(*uParam1))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
				{
					if (GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (GAMEPLAY::IS_XBOX360_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
						if (GAMEPLAY::IS_PS3_VERSION())
						{
						}
						else if (GAMEPLAY::IS_ORBIS_VERSION())
						{
						}
						else if (GAMEPLAY::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_163(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!GAMEPLAY::IS_DURANGO_VERSION() && !GAMEPLAY::IS_ORBIS_VERSION())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835392.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835392.f_2833[iVar1 /*16*/]), "", 64);
				func_103(&(Global_1835392.f_3026[iVar1 /*13*/]));
				if (func_142((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835392.f_3026[Global_1835392.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835392.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835392.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = NETWORK::_0xD66C9E72B3CC4982(&(Global_1835392.f_3026), Global_1835392.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::_0x58CC181719256197((uParam0[0 /*100*/])->f_79, &(Global_1835392.f_2833), Global_1835392.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_142((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835392.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_164(var uParam0)
{
	int iVar0;
	
	if (GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_ORBIS_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_166(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835392.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_165(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_165(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_142(Var0))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
				{
					if ((GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_DURANGO_VERSION()) || GAMEPLAY::IS_ORBIS_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
						if (GAMEPLAY::IS_PS3_VERSION())
						{
						}
						else if (GAMEPLAY::IS_ORBIS_VERSION())
						{
						}
						else if (GAMEPLAY::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_166(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!GAMEPLAY::IS_DURANGO_VERSION() && !GAMEPLAY::IS_ORBIS_VERSION())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(uParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_142(Var1[0 /*13*/]))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var1[0 /*13*/])))
				{
					*uParam4 = NETWORK::_0xD66C9E72B3CC4982(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::_0x58CC181719256197(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_167(var uParam0)
{
	struct<97> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	bool bVar114;
	int iVar115;
	struct<13> Var116;
	
	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	iVar113 = 2;
	Var116 = { func_23(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835392.f_2775[iVar113] = -1;
			Global_1835392.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
			{
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var116))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar113] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar113] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar113] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_178(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_179(), 0, 0, 0))
			{
				func_177(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_179())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_141(&Var0, &Var116) || func_141(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= STATS::_0x88578F6EC36B4A3A(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_176(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar113] < 11)
							{
								if (func_179() && iVar109 == 0)
								{
									func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835392.f_2775[iVar113] = 0;
									Global_1835392.f_2704[iVar113]++;
								}
								if (func_179() && (func_141(&Var0, &Var116) || func_141(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_141(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835392.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_174(uParam0->f_44))
									{
										iVar108 = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_190(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_67[iVar107] = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_60[iVar107] = STATS::_0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_1835392.f_2704[iVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_1835392.f_2704[iVar113]++;
						}
						if (!func_179())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_176(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar111, &Var0);
							if (Global_1835392.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_179() && iVar109 == iVar111)
								{
									if (!func_141(&(Global_1835392[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
										Global_1835392.f_2704[iVar113]++;
									}
								}
								if (func_179() && (func_141(&Var0, &Var116) || func_141(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar113] < 11)
								{
									if (func_142(Var0) && !func_141(&Var0, &(Global_1835392[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_141(&Var0, &Var116))
										{
											if (Global_1835392.f_2775[iVar113] < 0)
											{
												Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
											}
										}
										MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_32 = { Var0 };
										Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
										Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_74 = 1;
										if (func_174(uParam0->f_44))
										{
											iVar108 = STATS::_0x88578F6EC36B4A3A(iVar111, Global_1835392.f_2709);
											if (iVar108 == 1)
											{
												Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_190(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_67[iVar106] = STATS::_0x88578F6EC36B4A3A(iVar111, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_60[iVar106] = STATS::_0x38491439B6BA7F7D(iVar111, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[iVar113]++;
									}
								}
							}
							func_176(&Var0);
							iVar111++;
						}
						STATS::_0x71B008056E5692D6();
						func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835392.f_2775[iVar113] == -1 && func_179())
							{
								if (Global_1835392.f_2704[iVar113] >= 1)
								{
									func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Global_1835392[iVar113 /*901*/][(Global_1835392.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
								Global_1835392.f_2704[iVar113]++;
							}
							(*uParam0)[iVar113] = 3;
						}
						else
						{
							(*uParam0)[iVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_1835392.f_2704[iVar113]++;
						}
						STATS::_0x71B008056E5692D6();
						func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), iVar113);
				}
			}
			break;
		
		case 2:
			if (Global_1835392.f_2775[iVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_169(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_177(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835392[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835392.f_2704[iVar113] < 11 || bVar114)
							{
								if (func_179() && (func_141(&Var0, &Var116) || func_141(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835392[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835392[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_174(uParam0->f_44))
									{
										iVar108 = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_190(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = STATS::_0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_1835392.f_2704[iVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_1835392.f_2704[iVar113]++;
										}
									}
								}
								else if (Global_1835392.f_2704[iVar113] < 11)
								{
									MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									if (func_174(uParam0->f_44))
									{
										iVar108 = STATS::_0x88578F6EC36B4A3A(iVar106, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_190(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_67[iVar107] = STATS::_0x88578F6EC36B4A3A(iVar106, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_60[iVar107] = STATS::_0x38491439B6BA7F7D(iVar106, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835392.f_2704[iVar113]++;
									}
								}
							}
							func_176(&Var0);
							iVar106++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					STATS::_0x71B008056E5692D6();
					func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), iVar113);
					Global_1835392.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835392.f_2775[iVar113] == -1 && func_179())
				{
					if (Global_1835392.f_2704[iVar113] >= 1)
					{
						func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Global_1835392[iVar113 /*901*/][(Global_1835392.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
					Global_1835392.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_168(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_168(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_179() && Global_1835392.f_2704[iParam0] > Global_1835392.f_2775[iParam0]) && Global_1835392.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835392[iParam0 /*901*/][Global_1835392.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835392.f_2704[iParam0])
			{
				if (iVar0 != Global_1835392.f_2775[iParam0])
				{
					if (Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835392[iParam0 /*901*/][Global_1835392.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_179())
		{
		}
		if (Global_1835392.f_2704[iParam0] <= Global_1835392.f_2775[iParam0])
		{
		}
		if (Global_1835392.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_169(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_172() && !func_171())
			{
				func_170(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_RANK(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_170(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_201(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_171()
{
	if (UI::IS_PAUSE_MENU_ACTIVE() && !func_193())
	{
		return 1;
	}
	return 0;
}

int func_172()
{
	if (STATS::_0xA31FD15197B192BD() || Global_1835008)
	{
		func_173();
		return 1;
	}
	return 0;
}

void func_173()
{
	if (func_148(&(Global_1835008.f_1), 120000, 1))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_95(&(Global_1835008.f_1));
	}
}

int func_174(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_175(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_190(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
		sParam1->f_32 = { func_23(PLAYER::PLAYER_ID()) };
	}
	sParam1->f_59 = iParam2;
	if (func_174(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835392.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835392.f_2708)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, Global_1835392.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835392.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835392.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_176(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_177(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_178(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_172() && !func_171())
			{
				func_170(*uParam2);
				if (bParam5)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
					{
						if (STATS::LEADERBOARDS2_READ_BY_SCORE_INT(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (STATS::LEADERBOARDS2_READ_BY_RADIUS(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_179()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_180(var uParam0)
{
	struct<20> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	struct<13> Var114;
	
	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	iVar113 = 1;
	Var114 = { func_23(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = NETWORK::NETWORK_GET_FRIEND_COUNT();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_179())
				{
					iVar112 = 0;
				}
				else
				{
					iVar112 = 1;
				}
				if (func_181(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], iVar112, 0, 100))
				{
					func_177(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
					{
						if (func_179())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									STATS::_0x34770B9CE0E03B91(iVar110, &Var0);
									if (func_190(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_141(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= STATS::_0x88578F6EC36B4A3A(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_176(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_179() && iVar108 == 0)
						{
							if (Global_1835392.f_2704[iVar113] < 11)
							{
								func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
								Global_1835392.f_2775[iVar113] = 0;
								Global_1835392.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							STATS::_0x34770B9CE0E03B91(0, &Var0);
							if (func_179() && (func_141(&Var0, &Var114) || func_141(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_142(Var0) && Global_1835392.f_2704[iVar113] < 11)
							{
								if (func_141(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_174(uParam0->f_44))
								{
									iVar111 = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
									if (iVar111 == 1)
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_190(uParam0->f_44))
								{
									MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835392.f_2708)
								{
									if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_67[iVar106] = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar106]);
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_60[iVar106] = STATS::_0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835392.f_2704[1]++;
							}
							else
							{
								func_176(&Var0);
								STATS::_0x71B008056E5692D6();
								func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[iVar113] == -1 && func_179())
								{
									if (Global_1835392.f_2704[iVar113] >= 1)
									{
										func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Global_1835392[iVar113 /*901*/][(Global_1835392.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
									Global_1835392.f_2704[iVar113]++;
								}
								return 0;
							}
							func_176(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_176(&Var0);
							STATS::_0x71B008056E5692D6();
							func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[iVar113] == -1 && func_179())
							{
								if (Global_1835392.f_2704[iVar113] >= 1)
								{
									func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Global_1835392[iVar113 /*901*/][(Global_1835392.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
								Global_1835392.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_179())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar110, &Var0);
							if (Global_1835392.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_179() && iVar108 == iVar110)
								{
									if (!func_141(&(Global_1835392[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
										Global_1835392.f_2704[iVar113]++;
									}
								}
								if (func_179() && (func_141(&Var0, &Var114) || func_141(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_142(Var0) && !func_141(&Var0, &(Global_1835392[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_141(&Var0, &Var114))
										{
											if (Global_1835392.f_2775[1] < 0)
											{
												Global_1835392.f_2775[1] = Global_1835392.f_2704[1];
											}
										}
										MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_74 = 1;
										if (func_174(uParam0->f_44))
										{
											iVar111 = STATS::_0x88578F6EC36B4A3A(iVar110, Global_1835392.f_2709);
											if (iVar111 == 1)
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_190(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_67[iVar106] = STATS::_0x88578F6EC36B4A3A(iVar110, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_60[iVar106] = STATS::_0x38491439B6BA7F7D(iVar110, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[1]++;
									}
								}
							}
							func_176(&Var0);
							iVar110++;
						}
						STATS::_0x71B008056E5692D6();
						func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[iVar113] == -1 && func_179())
						{
							if (Global_1835392.f_2704[iVar113] >= 1)
							{
								func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Global_1835392[iVar113 /*901*/][(Global_1835392.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_175(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
							Global_1835392.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_168(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_181(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_172() && !func_171())
			{
				func_170(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_182(var uParam0)
{
	struct<13> Var0;
	struct<97> Var13;
	struct<6> Var111;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	int iVar126;
	bool bVar127;
	int iVar128;
	
	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	iVar126 = 0;
	Var0 = { func_23(PLAYER::PLAYER_ID()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835392.f_2775[iVar126] = -1;
			Global_1835392.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_183(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_178(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_179(), 0, 0, 0))
			{
				func_177(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_179())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_141(&Var13, &Var0) || func_141(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (GAMEPLAY::IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= STATS::_0x88578F6EC36B4A3A(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_176(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar126] < 11)
							{
								if (func_179() && iVar122 == 0)
								{
									func_175(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835392.f_2775[iVar126] = 0;
									Global_1835392.f_2704[iVar126]++;
								}
								if (func_179() && (func_141(&Var13, &Var0) || func_141(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_141(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835392.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_174(uParam0->f_44))
									{
										iVar121 = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
										if (iVar121 == 1)
										{
											Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_190(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835392.f_2708)
									{
										if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
										{
											Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_67[iVar119] = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar119]);
										}
										else
										{
											Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_60[iVar119] = STATS::_0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_1835392.f_2704[iVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_1835392.f_2704[iVar126]++;
						}
						if (!func_179())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_176(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar124, &Var13);
							if (Global_1835392.f_2704[iVar126] < 11 && Var13.f_96 > 1)
							{
								if (func_179() && iVar122 == iVar124)
								{
									if (!func_141(&(Global_1835392[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_175(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
										Global_1835392.f_2704[iVar126]++;
									}
								}
								if (func_179() && (func_141(&Var13, &Var0) || func_141(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar126] < 11)
								{
									if (func_142(Var13) && !func_141(&(Global_1835392[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_141(&Var13, &Var0))
										{
											if (Global_1835392.f_2775[iVar126] < 0)
											{
												Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
											}
										}
										MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_74 = 1;
										if (func_174(uParam0->f_44))
										{
											iVar121 = STATS::_0x88578F6EC36B4A3A(iVar124, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_190(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835392.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_67[iVar119] = STATS::_0x88578F6EC36B4A3A(iVar124, Global_1835392.f_2710[iVar119]);
											}
											else
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_60[iVar119] = STATS::_0x38491439B6BA7F7D(iVar124, Global_1835392.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835392.f_2704[iVar126]++;
									}
								}
							}
							func_176(&Var13);
							iVar124++;
						}
						STATS::_0x71B008056E5692D6();
						func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835392.f_2775[iVar126] == -1 && func_179())
							{
								if (Global_1835392.f_2704[iVar126] >= 1)
								{
									func_175(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), Global_1835392[iVar126 /*901*/][(Global_1835392.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_175(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
								Global_1835392.f_2704[iVar126]++;
							}
							(*uParam0)[iVar126] = 2;
						}
						else
						{
							(*uParam0)[iVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_1835392.f_2704[iVar126]++;
						}
						STATS::_0x71B008056E5692D6();
						func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), iVar126);
				}
			}
			break;
		
		case 1:
			if (Global_1835392.f_2775[iVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_169(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_177(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar119, &Var13);
							if (func_179() && (func_141(&Var13, &Var0) || func_141(&Var13, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_1835392[iVar126 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[iVar126 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_1835392.f_2704[iVar126] < 11 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_1835392[iVar126 /*901*/][0 /*75*/]), {Var13.f_13}, 16);
										Global_1835392[iVar126 /*901*/][0 /*75*/].f_32 = { Var13 };
										Global_1835392[iVar126 /*901*/][0 /*75*/].f_59 = Var13.f_96;
										if (func_174(uParam0->f_44))
										{
											iVar121 = STATS::_0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_190(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = STATS::_0x88578F6EC36B4A3A(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = STATS::_0x38491439B6BA7F7D(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_1835392.f_2704[iVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_1835392.f_2704[iVar126]++;
											}
										}
										else if (Global_1835392.f_2704[iVar126] == 1 && Global_1835392.f_2775[iVar126] == -1)
										{
											Global_1835392.f_2704[iVar126]++;
										}
									}
									else if (Global_1835392.f_2704[iVar126] < 11)
									{
										MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										if (func_174(uParam0->f_44))
										{
											iVar121 = STATS::_0x88578F6EC36B4A3A(iVar119, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_190(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_67[iVar120] = STATS::_0x88578F6EC36B4A3A(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_60[iVar120] = STATS::_0x38491439B6BA7F7D(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_1835392.f_2704[iVar126]++;
										}
									}
								}
							}
							func_176(&Var13);
							iVar119++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2832), iVar126);
					func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[iVar126] == -1 && func_179())
			{
				if (Global_1835392.f_2704[iVar126] >= 1)
				{
					func_175(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), Global_1835392[iVar126 /*901*/][(Global_1835392.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_175(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
				Global_1835392.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_168(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_183(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_184(var uParam0)
{
	int iVar0;
	
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1835392.f_2826))
	{
		iVar0 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1835392.f_2826);
		if (iVar0 < 300000)
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_42), 5);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uParam0->f_42), 5);
			func_154(Global_1835392.f_2826, -1);
		}
	}
}

bool func_185(var uParam0)
{
	return uParam0->f_1;
}

void func_186(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_187(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var36;
	bool bVar52;
	struct<13> Var53;
	int iVar66;
	struct<13> Var67;
	int iVar80;
	
	sVar0 = "";
	if (GAMEPLAY::IS_BIT_SET(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (GAMEPLAY::IS_BIT_SET(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (GAMEPLAY::IS_BIT_SET(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
		{
			if (GAMEPLAY::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_23(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var53))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var53);
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(*iParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
	if (bVar52)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		UI::_ADD_TEXT_COMPONENT_SCALEFORM(&Var36);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		GAMEPLAY::SET_BIT(&iVar66, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(*iParam1);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar66);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835392.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (GAMEPLAY::IS_BIT_SET(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (GAMEPLAY::IS_BIT_SET(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (GAMEPLAY::IS_BIT_SET(iParam2, 6))
		{
			if (NETWORK::_0x67A5589628E0CFF6())
			{
				if (NETWORK::_0xBA9775570DB788CF())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
					{
						if (GAMEPLAY::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_23(PLAYER::PLAYER_ID()) };
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var67))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var67);
								if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var36 = { Var1.f_1 };
									bVar52 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar80 = 0;
		GAMEPLAY::SET_BIT(&iVar80, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(*iParam1);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar80);
		if (bVar52)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&Var36);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
}

void func_188(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam2[iVar0 /*6*/]);
		GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		iVar0++;
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_189(var uParam0, var uParam1, char[4] cParam2, var uParam3, bool bParam4, int iParam5)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_MULTIPLAYER_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam1);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(cParam2))
	{
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(cParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam3))
			{
				UI::_ADD_TEXT_COMPONENT_SCALEFORM(uParam3);
			}
		}
		else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam3))
		{
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam3))
			{
				UI::_ADD_TEXT_COMPONENT_SCALEFORM(uParam3);
			}
		}
		else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam3))
		{
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam3);
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	}
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_190(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_191(var uParam0, var uParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

var func_192()
{
	return unk_0x67D02A194A2FC2BD("SC_LEADERBOARD");
}

bool func_193()
{
	return func_194(PLAYER::PLAYER_ID());
}

int func_194(int iParam0)
{
	switch (func_195(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 40:
		case 35:
		case 38:
		case 41:
			return 0;
		
		default:
	}
	return 1;
}

int func_195(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_196;
}

void func_196(int iParam0)
{
	Global_1315706 = iParam0;
}

void func_197(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_198(bool bParam0)
{
	if (bParam0)
	{
		func_200();
	}
	func_199(4, -1);
	func_199(6, -1);
	func_199(7, -1);
	func_199(3, -1);
	func_199(1, -1);
	func_199(2, -1);
	func_199(11, -1);
	func_199(13, -1);
	func_199(14, -1);
	func_199(16, -1);
}

void func_199(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1371947.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1371947.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_200()
{
	Global_2528542.f_4523 = 0;
}

void func_201(var uParam0, bool bParam1, bool bParam2)
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

int func_202(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < GAMEPLAY::GET_FRAME_COUNT() && Global_1840924.f_2 > 0)
	{
		func_95(&Global_1840924);
		func_95(&(Global_1840924.f_49));
		*uParam0 = 0;
		Global_1840924.f_2 = 0;
		func_210(0);
	}
	Global_1840924.f_2 = GAMEPLAY::GET_FRAME_COUNT();
	iVar1 = -1;
	if (GAMEPLAY::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xBD545D44CCE70597() == 0)
		{
			iVar1 = NETWORK::_0x74FB3E29E6D10FA9();
		}
	}
	if ((GAMEPLAY::IS_ORBIS_VERSION() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_208() && NETWORK::NETWORK_IS_SIGNED_ONLINE()))
	{
		if (NETWORK::_NETWORK_IS_NP_AVAILABLE())
		{
			func_205(&(Global_1840924.f_3), func_207(&(Global_1840924.f_3)));
			if (!GAMEPLAY::IS_BIT_SET(*uParam0, 4))
			{
				GAMEPLAY::SET_BIT(uParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_203(&(Global_1840924.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				UI::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				UI::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				UI::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				UI::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (!func_208())
			{
				UI::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			if (!GAMEPLAY::IS_BIT_SET(*uParam0, 0))
			{
				if (!CONTROLS::IS_CONTROL_PRESSED(2, 201))
				{
					GAMEPLAY::SET_BIT(uParam0, 0);
				}
			}
			else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
			{
				func_95(&(Global_1840924.f_49));
				func_95(&Global_1840924);
				*uParam0 = 0;
				Global_1840924.f_2 = 0;
				func_210(0);
				return 1;
			}
		}
	}
	else
	{
		func_205(&(Global_1840924.f_3), func_207(&(Global_1840924.f_3)));
		if ((func_185(&(Global_1840924.f_49)) && !func_148(&(Global_1840924.f_49), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			GAMEPLAY::SET_BIT(uParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_203(&(Global_1840924.f_3), 0);
		}
		else if (!GAMEPLAY::IS_BIT_SET(*uParam0, 3))
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
				GAMEPLAY::SET_BIT(uParam0, 1);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_203(&(Global_1840924.f_3), 0);
			}
		}
		if (func_185(&Global_1840924))
		{
			if (!func_148(&Global_1840924, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
					{
						UI::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						UI::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!GAMEPLAY::IS_BIT_SET(*uParam0, 0))
						{
							if (!CONTROLS::IS_CONTROL_PRESSED(2, 201))
							{
								GAMEPLAY::SET_BIT(uParam0, 0);
							}
						}
						else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							func_95(&Global_1840924);
							*uParam0 = 0;
							Global_1840924.f_2 = 0;
							func_210(0);
							return 1;
						}
					}
				}
				else
				{
					func_95(&Global_1840924);
					*uParam0 = 0;
					Global_1840924.f_2 = 0;
					func_210(0);
					return 1;
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(*uParam0, 3))
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					UI::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					UI::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!GAMEPLAY::IS_BIT_SET(*uParam0, 0))
				{
					if (!CONTROLS::IS_CONTROL_PRESSED(2, 201))
					{
						GAMEPLAY::SET_BIT(uParam0, 0);
					}
				}
				else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					func_95(&(Global_1840924.f_49));
					func_95(&Global_1840924);
					*uParam0 = 0;
					Global_1840924.f_2 = 0;
					func_210(0);
					return 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					UI::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					UI::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!GAMEPLAY::IS_BIT_SET(*uParam0, 0))
					{
						if (!CONTROLS::IS_CONTROL_PRESSED(2, 201))
						{
							GAMEPLAY::SET_BIT(uParam0, 0);
						}
					}
					else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_95(&(Global_1840924.f_49));
						func_95(&Global_1840924);
						*uParam0 = 0;
						Global_1840924.f_2 = 0;
						func_210(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_203(var uParam0, bool bParam1)
{
	func_204(uParam0);
	if (bParam1)
	{
		func_210(0);
	}
	uParam0->f_35 = 1;
}

void func_204(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_205(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_206(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			UI::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else
		{
			UI::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			UI::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_206(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_207(var uParam0)
{
	return uParam0->f_35;
}

int func_208()
{
	if (func_209())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_209()
{
	return Global_2459114;
}

void func_210(bool bParam0)
{
	UI::_REMOVE_LOADING_PROMPT();
	if (bParam0)
	{
		UI::_0xC65AB383CD91DF98();
	}
}

int func_211(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_289)
	{
		func_223(&(uParam0->f_72), bParam1);
		iLocal_289 = 1;
		func_329(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_220(190, bParam1);
			Global_1835013.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_212(&(uParam0->f_72)))
		{
			Global_1835388 = 1;
			return 1;
		}
	}
	return 0;
}

int func_212(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_190(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_23(PLAYER::PLAYER_ID()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_219(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_177(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_218(uParam0->f_44, iVar188))
					{
						if (func_217(uParam0->f_44, 4, iVar188))
						{
							GAMEPLAY::SET_BIT(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_142(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_218(uParam0->f_44, iVar188))
								{
									if (func_217(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = STATS::_0x88578F6EC36B4A3A(0, iVar188);
										if (Global_1835013.f_73.f_36[iVar188] == -1)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar188] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar188] = STATS::_0x38491439B6BA7F7D(0, iVar188);
										if (Global_1835013.f_73.f_3[iVar188] == -1f)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar188] = 0f;
											}
										}
									}
								}
								iVar188++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_216();
				if (Global_1835013.f_4)
				{
					if (func_215(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			STATS::_0xC38DC1E90D22547C(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_214())
			{
				if (func_213())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_215(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				STATS::_0xC38DC1E90D22547C(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_178(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_177(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Var0.f_13), ""))
						{
							Global_968147.f_1 = -1;
						}
						else
						{
							Global_968147.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_968147.f_1 = -1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_968147.f_1 = -1;
				}
				Global_1835013 = 999;
				func_101(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_213()
{
	return GAMEPLAY::IS_BIT_SET(Global_959568.f_8, 1);
}

var func_214()
{
	return Global_2456885.f_3;
}

int func_215(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_216()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_217(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = STATS::LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_218(int iParam0, int iParam1)
{
	if (STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_219(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_172() && !func_171())
			{
				func_170(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_HANDLE(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_220(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_222(iParam0, &Var0, &Var7, 1, -1, 1, 0))
	{
		func_221(190, 131, 0, 0f, 1);
		func_221(190, 103, iLocal_151[1], 0f, 0);
		func_221(190, 99, iLocal_151[2], 0f, 0);
		func_221(190, 109, iLocal_151[3], 0f, 0);
		func_221(190, 106, iLocal_151[5], 0f, 0);
		func_221(190, 2, iLocal_151[10], 0f, 0);
		func_221(190, 107, iLocal_151[8], 0f, 0);
		func_221(190, 116, iLocal_151[6], 0f, 0);
		iLocal_151[1] = 0;
		iLocal_151[2] = 0;
		iLocal_151[3] = 0;
		iLocal_151[5] = 0;
		iLocal_151[10] = 0;
		iLocal_151[8] = 0;
		iLocal_151[6] = 0;
	}
}

void func_221(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		STATS::_0x0BCA1D2C47B0D269(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_217(iParam0, 4, iVar1))
				{
					GAMEPLAY::SET_BIT(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		GAMEPLAY::SET_BIT(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_222(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_NETWORK_HAS_RESTRICTED_PROFILE())) && NETWORK::_0x422D396F80A96547())
	{
		Var0.f_2.f_1 = 4;
		Var0 = uParam0;
		if (iParam4 == -1)
		{
			if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
			{
				Var69 = { func_23(PLAYER::PLAYER_ID()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var69))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2456885.f_3)
			{
				STATS::_LEADERBOARDS2_WRITE_DATA_EX(&Var0, &(Global_1657223.f_10));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_NETWORK_HAS_RESTRICTED_PROFILE())
	{
	}
	if (!NETWORK::_0x422D396F80A96547())
	{
	}
	return 0;
}

void func_223(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_224(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_224(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	Global_1835392.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_233())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_233())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_233())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_233())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_233())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_233())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 5;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 6;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 5;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 6;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_233())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					NETWORK::NETWORK_PLAYER_GET_USERID(PLAYER::PLAYER_ID(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835392.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_233())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_233())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 4;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_233())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_233())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_233())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 0;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 0;
					Global_1835392.f_2708 = 1;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_233())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_233())
				{
					Global_1835392.f_2780.f_26 = iParam5;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_233())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), "CMSW", 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2710[4] = 6;
			Global_1835392.f_2708 = 5;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 6;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 6;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2710[2] = 5;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835392.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 1;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835392.f_2780.f_9), {func_232(iParam1)}, 16);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2708 = 2;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 0;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 1;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 0;
			Global_1835392.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 3;
			Global_1835392.f_2708 = 1;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 5;
				Global_1835392.f_2710[4] = 6;
				Global_1835392.f_2708 = 3;
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				Global_1835392.f_2780.f_28 = 6;
				Global_1835392.f_2780.f_29[0] = 5;
				Global_1835392.f_2780.f_29[1] = 11;
				Global_1835392.f_2780.f_29[2] = 4;
				Global_1835392.f_2780.f_29[3] = 5;
				Global_1835392.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_62 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 2;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2708 = 3;
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 2;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_231(Global_4456448.f_161209) || func_228(Global_4456448.f_161209))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else if (func_227(Global_4456448.f_161209))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2768), 1);
			Global_1835392.f_2754[1] = -1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 11;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 3;
			Global_1835392.f_2708 = 2;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 1;
					Global_1835392.f_2708 = 4;
					GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 12;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 4;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 17;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 4;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 2;
			Global_1835392.f_2708 = 4;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 10;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 4;
			Global_1835392.f_2710[5] = 3;
			Global_1835392.f_2708 = 6;
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 9;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			Global_1835392.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2708 = 1;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 1;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2709 = 6;
				Global_1835392.f_2708 = 2;
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				Global_1835392.f_2780.f_28 = 4;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 2;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 1;
				Global_1835392.f_2709 = 4;
				Global_1835392.f_2708 = 3;
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 1;
				Global_1835392.f_2780.f_29[2] = 3;
			}
			Global_1835392.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_226(iParam4)}, 8);
			Global_1835392.f_2708 = 4;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			Global_1835392.f_2780.f_28 = 5;
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			GAMEPLAY::CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 4;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 21;
			break;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 < Global_1835392.f_2708)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar16]))
		{
			GAMEPLAY::SET_BIT(&(Global_1835392.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835392.f_2826 = func_225(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

var func_225(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_190(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return GAMEPLAY::GET_HASH_KEY(&cVar0);
}

struct<6> func_226(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_227(int iParam0)
{
	return iParam0 == 74;
}

var func_228(int iParam0)
{
	return (func_230(iParam0) || func_229(iParam0));
}

bool func_229(int iParam0)
{
	return iParam0 == 44;
}

bool func_230(int iParam0)
{
	return iParam0 == 45;
}

bool func_231(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_232(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_233()
{
	if ((((((((((Global_4456448.f_55685 == 1 || Global_4456448.f_55685 == 3) || Global_4456448.f_55685 == 5) || Global_4456448.f_55685 == 7) || Global_4456448.f_55685 == 19) || Global_4456448.f_55685 == 8) || Global_4456448.f_55685 == 9) || Global_4456448.f_55685 == 11) || Global_4456448.f_55685 == 13) || Global_4456448.f_55685 == 21) || Global_4456448.f_55685 == 23)
	{
		return 1;
	}
	return 0;
}

int func_234(var uParam0, int iParam1)
{
	if (!func_418(&(uParam0->f_2)))
	{
		func_432(&(uParam0->f_2));
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_418(&(uParam0->f_5)))
			{
				func_432(&(uParam0->f_5));
				func_235(uParam0, 1051260355);
			}
		}
		if (func_418(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_419(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		if (!func_418(&(uParam0->f_5)))
		{
			func_432(&(uParam0->f_5));
			func_235(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_419(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_235(var uParam0, int iParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_9);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_236(var uParam0)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 40)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_237(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[1]))
		{
			func_4((*uParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!PED::IS_PED_INJURED((*uParam0)[0]))
		{
			func_4((*uParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!PED::IS_PED_INJURED((*uParam0)[1]))
	{
		func_4((*uParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_238()
{
	int iVar0;
	
	if (!bLocal_314)
	{
		iVar0 = (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	}
	else
	{
		iLocal_328++;
		iVar0 = (iLocal_328 % 2);
	}
	return iVar0;
}

void func_239(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	
	uVar0 = func_240(iParam4);
	if (iParam4 != 5)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, uVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	func_12(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_432(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_240(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_241(var uParam0, int iParam1)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_SCORES");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_242(var uParam0)
{
	uParam0->f_2 = { 0f, -2.3685f, -0.2f };
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_20 = 0;
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		OBJECT::DELETE_OBJECT(uParam0);
	}
	return 1;
}

void func_243(var uParam0)
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_122, uLocal_120, 1500, 1, 1);
	CAM::SET_CAM_ACTIVE(uLocal_123, 1);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_122, uLocal_123, 8000, 1, 1);
	CAM::ATTACH_CAM_TO_ENTITY(uLocal_125, uParam0, -0.0301f, 1.498f, 0.7435f, 1);
	CAM::POINT_CAM_AT_ENTITY(uLocal_125, uParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	CAM::SET_CAM_FOV(uLocal_125, 35f);
}

void func_244(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	bool bVar0;
	
	if (!CAM::IS_CAM_INTERPOLATING(uLocal_120))
	{
		bVar0 = false;
		func_325(uParam0);
		if (!bLocal_306)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					UI::CLEAR_HELP(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_163)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_106526, 3))
						{
							func_416("DARTS_INSTR_W", -1);
							GAMEPLAY::SET_BIT(&Global_106526, 3);
						}
						func_329(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!GAMEPLAY::IS_BIT_SET(Global_106526, 4))
						{
							func_416("DARTS_INSTR_B", -1);
							GAMEPLAY::SET_BIT(&Global_106526, 4);
						}
						func_329(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				UI::CLEAR_HELP(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_129) && uParam0->f_3 == 2)
			{
				func_324(uParam3);
			}
		}
		else
		{
			func_322(uParam3, iLocal_30);
		}
		func_321(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_318(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_310(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_303(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (CONTROLS::IS_CONTROL_PRESSED(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_302(iLocal_31, 0);
				if (((((!func_301("DARTS_SHT_USE") && !func_301("DARTS_INSTR_W")) && !func_301("DARTS_INSTR_B")) && !func_301("DARTS_AIM_HLP")) && !func_301("DARTS_STD_HLP")) && !func_301("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_416("DARTS_LEVEL", -1);
						GAMEPLAY::SET_BIT(&(Global_106565.f_18964.f_6), uLocal_326);
						func_329(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_304)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_329(&(uParam3->f_666), 6, 1);
					}
					iLocal_304 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_304)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_329(&(uParam3->f_666), 6, 1);
					}
					iLocal_304 = 1;
				}
				else if (func_291(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					UI::CLEAR_PRINTS();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_301)
				{
					if (!func_418(uParam4))
					{
						func_289(uParam4);
					}
					else if (func_7(uParam4) > 20f)
					{
						func_288(uLocal_295[(1 - iLocal_30)]);
						func_419(uParam4);
						iLocal_301 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_324 = 0;
				func_287(&(uParam0->f_422), &(uParam0->f_249));
				func_284(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (SYSTEM::TIMERA() > GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1250, 2500))
			{
				func_287(&(uParam0->f_422), &(uParam0->f_249));
				func_284(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_271(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_270(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_268(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_253(uParam0, uParam3);
			break;
		
		case 5:
			func_246(uParam0, uParam2, uParam3);
			if (func_418(uParam4))
			{
				func_419(uParam4);
			}
			break;
		
		case 6:
			func_245(uParam0, uParam3);
			break;
	}
}

void func_245(var uParam0, var uParam1)
{
	vector3 vVar0;
	var uVar3;
	int iVar4;
	var uVar5;
	
	iLocal_324++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_308 = 1;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25)
			{
				iLocal_31++;
			}
			else
			{
				func_268(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_253(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_307)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
				}
			}
			func_268(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_253(uParam0, uParam1);
			if (bLocal_307)
			{
				if (iLocal_309)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, vLocal_79, 1, 1, 0);
					vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], vVar0, 1, 0, 0, 1);
					uVar3 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, uVar3, uParam0->f_243.f_4 };
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_287(&(uParam0->f_422), &(uParam0->f_249));
			func_284(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_268(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_30]++;
				}
				func_329(&(uParam1->f_666), 2, 0);
				func_329(&(uParam1->f_666), 3, 0);
				func_329(&(uParam1->f_666), 4, 0);
				func_329(&(uParam1->f_666), 5, 1);
				SYSTEM::SETTIMERB(0);
			}
			func_253(uParam0, uParam1);
			if (bLocal_307)
			{
				if (iLocal_309)
				{
					iVar4 = 0;
					while (iVar4 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/] = OBJECT::CREATE_OBJECT(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_1, vLocal_79, 1, 1, 0);
							vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_1 + fLocal_55), uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_11.f_2) };
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/]))
							{
								ENTITY::SET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], vVar0, 1, 0, 0, 1);
							}
							uVar5 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17 = { 90f, uVar5, uParam0->f_243.f_4 };
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_17, 0, 1);
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_30 /*79*/][iVar4 /*26*/].f_24 = 0;
						}
						iVar4++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_324 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_246(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	int iVar3;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_252();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_251("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_250("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_251("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_251("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_251("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_250("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_251("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_251("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
			}
			SYSTEM::SETTIMERB(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				iLocal_322++;
				if (iLocal_322 >= uParam0->f_436)
				{
					iLocal_322 = 0;
				}
				vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_50(vVar0);
			}
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				iLocal_322 = (iLocal_322 - 1);
				if (iLocal_322 < 0)
				{
					iLocal_322 = (uParam0->f_436 - 1);
				}
				vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_50(vVar0);
			}
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_52(vVar0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				iLocal_298 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || (iLocal_308 && bLocal_307))
			{
				iLocal_298 = 1;
			}
			if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 189) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 190)) && uParam0->f_248 == 1)
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_5[iLocal_30 /*79*/][iLocal_322 /*26*/], 1) };
				func_52(vVar0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_303)
				{
					if (func_249(iLocal_30 == 0, &(uLocal_295[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_303 = 1;
					}
				}
				else if ((GAMEPLAY::GET_GAME_TIMER() % 500) < 50)
				{
				}
			}
			else if (!iLocal_303)
			{
				if (func_248(iLocal_30 == 0, &(uLocal_295[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_303 = 1;
				}
			}
			else if ((GAMEPLAY::GET_GAME_TIMER() % 500) < 50)
			{
			}
			if (iLocal_298 || SYSTEM::TIMERB() > 2000)
			{
				iLocal_308 = 0;
				iVar3 = 0;
				while (iVar3 < 3)
				{
					func_242(&(uParam0->f_5[iLocal_30 /*79*/][iVar3 /*26*/]));
					iVar3++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_247(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
				}
				uParam0->f_425[iLocal_30] = uParam0->f_422[iLocal_30];
				iLocal_31 = 0;
				uParam0->f_428 = 0;
				if (iLocal_30 == 0)
				{
					iLocal_30 = 1;
				}
				else
				{
					iLocal_30 = 0;
				}
				func_431(uParam1, iLocal_30);
				iLocal_99 = 0;
				func_411();
				if (!bLocal_307)
				{
					UI::CLEAR_SMALL_PRINTS();
				}
				iLocal_93 = 0;
				uParam2->f_670 = 3;
				iLocal_304 = 0;
				iLocal_301 = 0;
				iLocal_303 = 0;
				iLocal_298 = 0;
				iLocal_322 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_247(var uParam0, int iParam1, int iParam2)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "ADD_DARTS_SCORE");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_248(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			GAMEPLAY::SET_BIT(&uVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			GAMEPLAY::SET_BIT(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			GAMEPLAY::SET_BIT(&uVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			GAMEPLAY::SET_BIT(&uVar0, 3);
		}
	}
	iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 85)
	{
		if (GAMEPLAY::IS_BIT_SET(uVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (GAMEPLAY::IS_BIT_SET(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (GAMEPLAY::IS_BIT_SET(uVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (GAMEPLAY::IS_BIT_SET(uVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_249(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			GAMEPLAY::SET_BIT(&uVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			GAMEPLAY::SET_BIT(&uVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			GAMEPLAY::SET_BIT(&uVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			GAMEPLAY::SET_BIT(&uVar0, 3);
		}
	}
	iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	iVar2 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar2 < 75)
	{
		if (GAMEPLAY::IS_BIT_SET(uVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (GAMEPLAY::IS_BIT_SET(uVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !ENTITY::DOES_ENTITY_EXIST(func_494()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (GAMEPLAY::IS_BIT_SET(uVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (GAMEPLAY::IS_BIT_SET(uVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_250(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UI::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	UI::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_251(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	UI::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

void func_252()
{
	CAM::SET_CAM_ACTIVE(uLocal_129, 1);
	CAM::SET_CAM_ACTIVE(uLocal_120, 0);
}

void func_253(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_30] = (uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_265(uParam0);
		func_329(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_263(4);
			iLocal_151[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_263(0);
					iLocal_151[1]++;
				}
			}
			func_329(&(uParam1->f_666), 2, 0);
			func_329(&(uParam1->f_666), 3, 0);
			func_329(&(uParam1->f_666), 4, 0);
			func_329(&(uParam1->f_666), 5, 1);
			func_265(uParam0);
			func_329(&(uParam1->f_666), 5, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if ((uParam0->f_422[iLocal_30] == 1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				func_251("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				func_329(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_30] == 1)
			{
				func_329(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_251("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_251("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_303)
			{
				if (func_262(uLocal_295[(1 - iLocal_30)]))
				{
					iLocal_303 = 1;
				}
			}
			uParam0->f_422[iLocal_30] = uParam0->f_425[iLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			SYSTEM::SETTIMERA(0);
			uParam0->f_1 = 5;
			if (iLocal_30 == 0)
			{
				uParam0->f_435++;
			}
			func_329(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_261(uParam1, 1);
					func_263(0);
					iLocal_151[1]++;
				}
				if (!iLocal_303 && !iLocal_308)
				{
					if (func_260(uLocal_295[iLocal_30]))
					{
						iLocal_303 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_303 && !iLocal_308)
				{
					func_259(uLocal_295[(1 - iLocal_30)]);
					iLocal_303 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_303 && !iLocal_308)
				{
					if (func_258(uLocal_295[1], iLocal_30 == 0))
					{
						iLocal_303 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_261(uParam1, 0);
					func_263(1);
					iLocal_151[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_303 && !iLocal_308)
				{
					if (func_256(uLocal_295[iLocal_30], iLocal_30 == 0))
					{
						iLocal_303 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_422[iLocal_30] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_329(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_329(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2) == 0) || uParam0->f_422[iLocal_30] == 50)
					{
						if (uParam0->f_422[iLocal_30] == 50)
						{
						}
						if (!iLocal_302)
						{
							func_255(uLocal_295[1]);
							iLocal_302 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_329(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_30 == 0 && iLocal_31 < 2)
			{
				func_254("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_321(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25 = 1;
			iLocal_31++;
			SYSTEM::SETTIMERA(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_30 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_329(&(uParam1->f_666), 3, 0);
			func_329(&(uParam1->f_666), 2, 0);
			func_329(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_254(char* sParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	UI::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	UI::END_TEXT_COMMAND_PRINT(iParam3, 1);
}

void func_255(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_256(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_494()))
		{
			if (bParam1)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_494(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_257())
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_257()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_258(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_494()))
		{
			if (bParam1)
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_494(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_257())
			{
				func_4(PLAYER::PLAYER_PED_ID(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_259(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			iVar1 = 1;
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_260(int iParam0)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_261(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_262(int iParam0)
{
	int iVar0;
	
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		iVar0 = 1;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_263(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_106565.f_18964++;
			func_264("DARTS_STAT_NUM_BULLSEYES", Global_106565.f_18964);
			break;
		
		case 1:
			Global_106565.f_18964.f_1++;
			func_264("DARTS_STAT_NUM_180S", Global_106565.f_18964.f_1);
			break;
		
		case 2:
			Global_106565.f_18964.f_2++;
			func_264("DARTS_STAT_NUM_WINS", Global_106565.f_18964.f_2);
			break;
		
		case 3:
			Global_106565.f_18964.f_3++;
			func_264("DARTS_STAT_NUM_LOSS", Global_106565.f_18964.f_3);
			break;
		
		case 4:
			Global_106565.f_18964.f_4++;
			func_264("DARTS_STAT_DARTS_THROWN", Global_106565.f_18964.f_4);
			break;
		
		case 5:
			Global_106565.f_18964.f_5++;
			func_264("DARTS_STAT_NUM_GAMES", Global_106565.f_18964.f_5);
			break;
		
		case 7:
			Global_106565.f_18964.f_7 = (SYSTEM::TO_FLOAT(Global_106565.f_18964.f_2) / SYSTEM::TO_FLOAT(Global_106565.f_18964.f_5));
			break;
		
		case 8:
			Global_106565.f_18964.f_8 = (SYSTEM::TO_FLOAT(Global_106565.f_18964.f_4) / SYSTEM::TO_FLOAT(Global_106565.f_18964.f_5));
			break;
	}
}

void func_264(char* sParam0, var uParam1)
{
}

void func_265(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_263(5);
	UI::CLEAR_SMALL_PRINTS();
	UI::CLEAR_HELP(1);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(func_412(2)))
	{
		AUDIO::STOP_AUDIO_SCENE(func_412(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_252();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_312 = 1;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_263(2);
		iLocal_151[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_263(3);
		iLocal_151[9]++;
	}
	func_263(7);
	func_432(&(uParam0->f_254));
	if (func_267(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_30]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_266(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_151[3]++;
			iLocal_330 = 0;
		}
		else
		{
			iLocal_151[5]++;
			iLocal_330 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	AUDIO::START_AUDIO_SCENE(func_412(3));
	iLocal_309 = 1;
	uParam0->f_428 = 0;
	iLocal_99 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_266(bool bParam0)
{
	char* sVar0;
	
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	switch (func_89())
	{
		case 0:
			if (bParam0)
			{
				sVar0 = "MICHAEL_SMALL_01";
			}
			else
			{
				sVar0 = "MICHAEL_BIG_01";
			}
			break;
		
		case 1:
			if (bParam0)
			{
				sVar0 = "FRANKLIN_SMALL_01";
			}
			else
			{
				sVar0 = "FRANKLIN_BIG_01";
			}
			break;
		
		case 2:
			if (bParam0)
			{
				sVar0 = "TREVOR_SMALL_01";
			}
			else
			{
				sVar0 = "TREVOR_BIG_01";
			}
			break;
	}
	AUDIO::PLAY_MISSION_COMPLETE_AUDIO(sVar0);
}

int func_267(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_113(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_151[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_268(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	
	vVar3 = { uParam0->f_8 };
	vVar3.x = (vVar3.x + 0.0041f);
	vVar3.z = (vVar3.z + 0.0002f);
	fVar1 = GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(0f, 1f, vVar3.x, vVar3.z);
	fVar0 = func_269(vVar3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar6 = 0;
		iVar6 = 0;
		while (iVar6 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar7 = (iLocal_33[iVar6] * uParam0->f_21);
				uParam0->f_20 = iVar7;
			}
			fVar2 = (fVar2 + 18f);
			iVar6++;
		}
	}
}

var func_269(vector3 vParam0)
{
	return SYSTEM::SQRT(((vParam0.x * vParam0.x) + (vParam0.z * vParam0.z)));
}

int func_270(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_271(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_272("Darts", "Dart_Reticules", &Local_70, 1, 0, 4, 0);
	}
	fVar6 = GAMEPLAY::GET_FRAME_TIME();
	vVar3 = { uParam0->f_5 * Vector(fVar6, fVar6, fVar6) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - vVar3 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_55), uParam0->f_11.f_2) };
		ENTITY::SET_ENTITY_COORDS(*uParam0, vVar0, 1, 0, 0, 1);
		return 1;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_55), uParam0->f_2.f_2) };
	ENTITY::SET_ENTITY_COORDS(*uParam0, vVar0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar6));
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_272(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_283(&Var0);
			break;
		
		case 1:
			func_282(&Var0);
			break;
		
		case 5:
			func_281(&Var0);
			break;
		
		case 6:
			func_280(&Var0);
			break;
		
		case 7:
			func_279(&Var0);
			break;
		
		case 8:
			func_278(&Var0);
			break;
		
		case 9:
			func_277(&Var0);
			break;
	}
	if (func_275())
	{
		GRAPHICS::_SET_UI_LAYER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_274(Var0), func_273(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_274(Var0), func_273(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		GRAPHICS::_SET_UI_LAYER(4);
	}
}

float func_273(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_274(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_275()
{
	if (func_276())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (GAMEPLAY::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_276()
{
	return Global_1312439;
}

void func_277(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_278(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_279(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_280(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_281(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_282(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_283(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_284(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar13 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar13;
			}
			fVar13 = (fVar13 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(func_286(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-60f, 60f);
		}
		else
		{
			fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-200f, -60f);
			}
			else
			{
				fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
		iVar6 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(func_286(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-1f, -0.3f);
			}
			else
			{
				fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (SYSTEM::SIN(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (SYSTEM::COS(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_285(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_285(uParam0);
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, vLocal_79, 0, 0, 0);
		uVar1 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
		vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, vLocal_82) };
		vVar10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
		fVar2 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((vVar7.x - vVar10.x), (vVar7.y - vVar10.y));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, uVar1, fVar2 };
		ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { vLocal_82 };
		*uParam2 = 3;
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_285(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	vVar0 = { vLocal_82 - uParam0->f_8 };
	fVar3 = SYSTEM::VMAG(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar3, fVar3, fVar3) };
	fVar4 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar4 - 180f);
	fVar5 = (GAMEPLAY::TAN(uParam0->f_17.f_2) * fVar6);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar5);
	vVar0 = { vLocal_82 - uParam0->f_11 };
	fVar3 = SYSTEM::VMAG(vVar0);
	uParam0->f_5 = { vVar0 / Vector(fVar3, fVar3, fVar3) };
}

int func_286(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_287(var uParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_30] > 60)
	{
		if (((*uParam0)[iLocal_30] % 2) == 1)
		{
			if (func_257())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_30] < 61)
	{
		if ((*uParam0)[iLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_288(var uParam0)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 33)
	{
		func_4(uParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_289(var uParam0)
{
	func_290(uParam0, 0f);
}

void func_290(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) + fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_291(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_97)
			{
				if (SYSTEM::TIMERB() > 50)
				{
					iLocal_98 = 0;
					iLocal_99 = 0;
					iLocal_101 = 0;
					if (func_300(uParam0, uParam1, 0))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_97 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(CONTROLS::IS_CONTROL_JUST_PRESSED(2, 223) && iLocal_101) && !bParam4)
				{
					iLocal_98 = 1;
					iLocal_99 = 1;
					if (!iLocal_100)
					{
						func_299(uParam0, *uParam2);
						iLocal_100 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_298();
						}
						func_297(uParam0, iParam6);
						func_296(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0.02f, 0.1f);
						iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { vLocal_82 };
						iLocal_98 = 1;
						iLocal_99 = 1;
					}
					if (iLocal_98 && iLocal_99)
					{
						if (!iLocal_97)
						{
							UI::CLEAR_PRINTS();
							iLocal_97 = 1;
							SYSTEM::SETTIMERB(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_97)
			{
				func_272("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
				if (SYSTEM::TIMERB() > 25)
				{
					if (func_300(uParam0, uParam1, 1))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_97 = 0;
						return 1;
					}
				}
			}
			else if (!func_292(uParam0))
			{
				if (!iLocal_100)
				{
					func_299(uParam0, *uParam2);
				}
				else
				{
					func_298();
					func_297(uParam0, iParam6);
					func_296(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_97)
			{
				iLocal_97 = 1;
				SYSTEM::SETTIMERB(0);
			}
			break;
	}
	return 0;
}

int func_292(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	uVar1 = CONTROLS::GET_CONTROL_NORMAL(2, 220);
	uVar2 = CONTROLS::GET_CONTROL_NORMAL(2, 221);
	iLocal_136 = SYSTEM::ROUND(uVar2);
	switch (iLocal_135)
	{
		case 0:
			if (iLocal_136 > 120)
			{
				iLocal_137 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_135 = 1;
			}
			if (iLocal_136 < -100)
			{
				iLocal_141 = SYSTEM::ROUND(uVar1);
			}
			break;
		
		case 1:
			if (iLocal_136 > 120)
			{
				iLocal_137 = GAMEPLAY::GET_GAME_TIMER();
			}
			else if ((iLocal_136 < 120 && iLocal_136 > -120) && (GAMEPLAY::GET_GAME_TIMER() - iLocal_137) > 500)
			{
				iLocal_135 = 0;
			}
			else if (iLocal_136 < -100)
			{
				iLocal_138 = GAMEPLAY::GET_GAME_TIMER();
				if ((iLocal_138 - iLocal_137) < 500)
				{
					iLocal_141 = SYSTEM::ROUND(uVar1);
					iLocal_139 = (iLocal_138 - iLocal_137);
					iLocal_135 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_139 > iLocal_140)
			{
				if (iLocal_139 > 100 && iLocal_139 < 150)
				{
					fLocal_144 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_144);
				}
				else
				{
					fLocal_143 = (SYSTEM::TO_FLOAT(iLocal_140) / SYSTEM::TO_FLOAT(iLocal_139));
					fLocal_144 = ((1f - fLocal_143) * fLocal_147);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_144);
				}
			}
			else
			{
				fLocal_144 = 0f;
			}
			if (iLocal_141 > 7)
			{
				fLocal_145 = (SYSTEM::TO_FLOAT(iLocal_141) / fLocal_150);
				fLocal_146 = (fLocal_148 * fLocal_145);
				uParam0->f_8 = (uParam0->f_8 + fLocal_146);
			}
			else if (iLocal_141 < -7)
			{
				fLocal_145 = (SYSTEM::TO_FLOAT(iLocal_141) / fLocal_149);
				fLocal_146 = (fLocal_148 * fLocal_145);
				uParam0->f_8 = (uParam0->f_8 - fLocal_146);
			}
			else
			{
				fLocal_146 = 0f;
			}
			if (fLocal_144 < 0.066477f && fLocal_146 == 0f)
			{
				func_295();
			}
			else if (fLocal_144 <= 0.066477f && fLocal_146 < 0.06f)
			{
				func_294();
			}
			else
			{
				func_293();
			}
			iVar0 = 1;
			iLocal_135 = 0;
			break;
	}
	return iVar0;
}

void func_293()
{
	Local_70.f_4 = 210;
	Local_70.f_5 = 23;
	Local_70.f_6 = 19;
}

void func_294()
{
	Local_70.f_4 = 183;
	Local_70.f_5 = 137;
	Local_70.f_6 = 0;
}

void func_295()
{
	Local_70.f_4 = 16;
	Local_70.f_5 = 184;
	Local_70.f_6 = 10;
}

void func_296(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	}
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &Local_61, &(Local_61.f_1));
	if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_94)
		{
			func_272("Darts", "Dart_Reticules_Zoomed", &Local_61, 1, 0, 4, 0);
		}
		else
		{
			func_272("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
		}
		if (!iLocal_101)
		{
			iLocal_101 = 1;
		}
	}
}

void func_297(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = CONTROLS::_0x5B84D09CEC5209C5(2, 218);
	fVar4 = CONTROLS::_0x5B84D09CEC5209C5(2, 219);
	fVar5 = CONTROLS::GET_CONTROL_NORMAL(2, 220);
	fVar6 = CONTROLS::GET_CONTROL_NORMAL(2, 221);
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (GAMEPLAY::ABSF(fVar5) > GAMEPLAY::ABSF(fVar3) || GAMEPLAY::ABSF(fVar6) > GAMEPLAY::ABSF(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (CONTROLS::_0xE1615EC03B3BB4FD())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (CONTROLS::IS_LOOK_INVERTED())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (CONTROLS::IS_CONTROL_PRESSED(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (CONTROLS::_IS_INPUT_DISABLED(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_92 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_92 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_92 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_92 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_92 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_92 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_92 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_92 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_88), (0f + fLocal_88));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_89), (0f + fLocal_89));
		fVar1 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((0f - fLocal_88), (0f + fLocal_88));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_92 = 0.5f;
		if (iLocal_135 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar9), (0f + fVar9));
		fVar1 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_298()
{
	if (CONTROLS::IS_CONTROL_PRESSED(2, 227))
	{
		fLocal_92 = 0.3f;
	}
	else
	{
		fLocal_92 = 0.1f;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, 229))
	{
		if (bLocal_94)
		{
			if (SYSTEM::TIMERA() > iLocal_142)
			{
				fLocal_88 = fLocal_90;
				fLocal_89 = fLocal_91;
				fLocal_92 = 0.1f;
				bLocal_94 = false;
			}
		}
		else if (iLocal_93 < 1)
		{
			fLocal_88 = 0.03f;
			fLocal_89 = 0.05f;
			fLocal_92 = 0.1f;
			SYSTEM::SETTIMERA(0);
			bLocal_94 = true;
			iLocal_93++;
		}
		else if ((((((!func_301("DARTS_FST_HLP") && !func_301("DARTS_AIM_HLP")) && !func_301("DARTS_CLOCK")) && !func_301("DARTS_STD_HLP")) && !func_301("DARTS_INSTR_W")) && !func_301("DARTS_INSTR_B")) && !iLocal_95)
		{
			iLocal_95 = 1;
			if (!GAMEPLAY::IS_BIT_SET(Global_106526, 1))
			{
				func_416("DARTS_SHT_USE", -1);
				GAMEPLAY::SET_BIT(&Global_106526, 1);
			}
		}
	}
	else if (bLocal_94)
	{
		fLocal_88 = fLocal_90;
		fLocal_89 = fLocal_91;
		fLocal_92 = 0.1f;
		bLocal_94 = false;
	}
}

void func_299(var uParam0, struct<4> Param1, var uParam5, var uParam6)
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	vVar0.x = (vVar0.x + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	vVar0.z = (vVar0.z + GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + vVar0 };
	uParam0->f_2 = { vLocal_82 };
}

int func_300(var uParam0, var uParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	var uVar10;
	float fVar11;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, vLocal_79, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = OBJECT::CREATE_OBJECT(uParam0->f_1, vLocal_79, 0, 0, 0);
	}
	bLocal_94 = false;
	fLocal_92 = 0.1f;
	fLocal_88 = fLocal_90;
	fLocal_89 = fLocal_91;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_285(uParam0);
	uVar10 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 90f);
	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, vLocal_82) };
	vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_55), uParam0->f_14.f_2) };
	fVar11 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((vVar3.x - vVar6.x), (vVar3.y - vVar6.y));
	fVar11 = (fVar11 - 180f);
	fVar9 = 90f;
	uParam0->f_17 = { fVar9, uVar10, fVar11 };
	ENTITY::SET_ENTITY_ROTATION(*uParam0, uParam0->f_17, 0, 1);
	iLocal_98 = 0;
	iLocal_100 = 0;
	if (bParam2)
	{
		func_272("Darts", "Dart_Reticules", &Local_61, 1, 0, 4, 0);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_55), uParam0->f_8.f_2) };
	GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar0, &Local_70, &(Local_70.f_1));
	return 1;
}

bool func_301(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_302(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_106526, 9))
		{
			if ((!func_301("DARTS_SHT_USE") && !func_301("DARTS_INSTR_W")) && !func_301("DARTS_INSTR_B"))
			{
				func_416("DARTS_AIM_HLP", -1);
				GAMEPLAY::SET_BIT(&Global_106526, 9);
			}
		}
		else if (iParam1 && !GAMEPLAY::IS_BIT_SET(Global_106526, 7))
		{
			if ((!func_301("DARTS_AIM_HLP") && !func_301("DARTS_INSTR_W")) && !func_301("DARTS_INSTR_B"))
			{
				func_416("DARTS_CLOCK", -1);
				GAMEPLAY::SET_BIT(&Global_106526, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_106526, 8))
		{
			if ((!func_301("DARTS_SHT_USE") && !func_301("DARTS_INSTR_W")) && !func_301("DARTS_INSTR_B"))
			{
				func_416("DARTS_STD_HLP", -1);
				GAMEPLAY::SET_BIT(&Global_106526, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_96 && !func_301("DARTS_SHT_USE")) && !func_301("DARTS_INSTR_W")) && !func_301("DARTS_INSTR_B"))
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_106526, 2))
			{
				func_416("DARTS_FST_HLP", -1);
				GAMEPLAY::SET_BIT(&Global_106526, 2);
			}
			iLocal_96 = 1;
		}
	}
}

int func_303(int iParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	
	switch (*uParam2)
	{
		case 0:
			vVar0 = { func_306(iParam0) };
			*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam1, vVar0) };
			func_305(*uParam3);
			SYSTEM::SETTIMERB(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (SYSTEM::TIMERB() > 3000 || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				func_304();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_304()
{
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_120, uLocal_132, 2000, 1, 1);
	CAM::DESTROY_CAM(uLocal_132, 0);
}

void func_305(vector3 vParam0)
{
	vector3 vVar0;
	
	vVar0 = { -5.5606f, -0.0106f, -131.6781f };
	uLocal_132 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vParam0, vVar0, 1115815936, 0, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_132, uLocal_120, 2000, 1, 1);
}

Vector3 func_306(int iParam0)
{
	var uVar0;
	vector3 vVar1;
	
	if (iParam0 == 50)
	{
		vVar1 = { 0f, -0.5f, 0f };
	}
	else
	{
		uVar0 = func_309(iParam0);
		vVar1.y = -0.5f;
		vVar1.x = func_308(uVar0);
		vVar1.z = func_307(uVar0);
	}
	return vVar1;
}

float func_307(var uParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::COS(uParam0) * fVar0);
	return fVar1;
}

float func_308(var uParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (SYSTEM::SIN(uParam0) * fVar0);
	return fVar1;
}

var func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_310(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (CONTROLS::IS_CONTROL_PRESSED(2, 228))
			{
				func_317(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (CONTROLS::IS_CONTROL_PRESSED(2, 228))
			{
				if (!CAM::IS_CAM_INTERPOLATING(uLocal_129))
				{
					func_315();
					func_314(&uLocal_335, vLocal_366, vLocal_369, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!CONTROLS::IS_CONTROL_PRESSED(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_311(&uLocal_335, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_317(0);
			func_495();
			if (CAM::DOES_CAM_EXIST(uLocal_335))
			{
				if (CAM::IS_CAM_ACTIVE(uLocal_335))
				{
					CAM::SET_CAM_ACTIVE(uLocal_335, 0);
				}
				CAM::DESTROY_CAM(uLocal_335, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_311(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	
	CONTROLS::_DISABLE_INPUT_GROUP(2);
	func_313(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (CONTROLS::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		fVar5 = CONTROLS::_0x5B84D09CEC5209C5(2, 239);
		fVar6 = CONTROLS::_0x5B84D09CEC5209C5(2, 240);
		fVar7 = (fVar5 - uParam0->f_29);
		fVar8 = (fVar6 - uParam0->f_30);
		uParam0->f_29 = fVar5;
		uParam0->f_30 = fVar6;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar7 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar8 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((CONTROLS::_0x5B84D09CEC5209C5(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((CONTROLS::_0x5B84D09CEC5209C5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_312((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_312((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < GAMEPLAY::GET_GAME_TIMER())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (CONTROLS::_IS_INPUT_DISABLED(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = GAMEPLAY::GET_GAME_TIMER() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar9 = (30f * SYSTEM::TIMESTEP());
	vVar10 = { uParam0->f_8 + uParam0->f_11 };
	if ((CONTROLS::_IS_INPUT_DISABLED(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = vVar10.x;
		uParam0->f_14.f_1 = vVar10.y;
		uParam0->f_14.f_2 = vVar10.z;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_14(((((vVar10.x - uParam0->f_14) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_14(((((vVar10.y - uParam0->f_14.f_1) * 0.05f) * fVar9) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_14(((((vVar10.z - uParam0->f_14.f_2) * 0.05f) * fVar9) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, SYSTEM::TO_FLOAT(-uParam0->f_21), SYSTEM::TO_FLOAT(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, SYSTEM::TO_FLOAT(-uParam0->f_22), SYSTEM::TO_FLOAT(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, SYSTEM::TO_FLOAT(-uParam0->f_20), SYSTEM::TO_FLOAT(uParam0->f_20));
	}
	if (CONTROLS::_IS_INPUT_DISABLED(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (CONTROLS::_IS_INPUT_DISABLED(0))
		{
			iVar13 = 40;
			iVar14 = 41;
			if (bParam6)
			{
				iVar13 = 241;
				iVar14 = 242;
			}
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar13))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = GAMEPLAY::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			else if (CONTROLS::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar14))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = GAMEPLAY::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = CONTROLS::GET_CONTROL_VALUE(2, 207);
			iVar0[3] = CONTROLS::GET_CONTROL_VALUE(2, 208);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar9));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			if (CAM::IS_CAM_RENDERING(*uParam0))
			{
				UNK1::_0xAF66DCEE6609B148();
			}
		}
	}
}

int func_312(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_313(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = SYSTEM::FLOOR((CONTROLS::_0x5B84D09CEC5209C5(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((CONTROLS::_0x5B84D09CEC5209C5(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((CONTROLS::_0x5B84D09CEC5209C5(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((CONTROLS::_0x5B84D09CEC5209C5(2, 221) * 127f));
	if (bParam4)
	{
		if (!CONTROLS::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((CONTROLS::_0x4F8A26A890FD62FB(2, 218) * 127f));
		}
		if (!CONTROLS::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((CONTROLS::_0x4F8A26A890FD62FB(2, 219) * 127f));
		}
		if (!CONTROLS::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((CONTROLS::_0x4F8A26A890FD62FB(2, 220) * 127f));
		}
		if (!CONTROLS::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((CONTROLS::_0x4F8A26A890FD62FB(2, 221) * 127f));
		}
	}
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (bParam5)
		{
			if (CONTROLS::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (CONTROLS::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_314(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = fParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(*uParam0, 1);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	if (fParam14 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_23)
	{
		UI::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_315()
{
	if (iLocal_291)
	{
		return;
	}
	func_316();
	CONTROLS::_0x3D42B92563939375("Darts Zoom");
	iLocal_291 = 1;
}

void func_316()
{
	if (iLocal_290 || iLocal_291)
	{
		CONTROLS::_0x643ED62D5EA3BEBD();
		iLocal_290 = 0;
		iLocal_291 = 0;
	}
}

void func_317(bool bParam0)
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_129, uLocal_120, 1000, 1, 1);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_120, uLocal_129, 1000, 1, 1);
	}
}

void func_318(var uParam0)
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_239(&(uParam0->f_62), func_320(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_234(&(uParam0->f_62), 0))
			{
				func_319(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_319(var uParam0)
{
	uParam0->f_8 = 0;
	func_419(&(uParam0->f_2));
	func_419(&(uParam0->f_5));
}

char* func_320(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_321(var uParam0)
{
	if (!iLocal_99)
	{
		if (!CONTROLS::IS_CONTROL_PRESSED(2, 201))
		{
			iLocal_99 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((CONTROLS::IS_CONTROL_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 223)) && iLocal_99)
		{
			*uParam0 = 6;
		}
	}
}

void func_322(var uParam0, int iParam1)
{
	if (!UI::IS_PAUSE_MENU_ACTIVE())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_93 > 0)
			{
				func_118(&(uParam0->f_509), 0, 0, 0, 1);
				func_117(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_117(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_323(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_117(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_117(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_117(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_114(&(uParam0->f_509), 1);
				func_329(&(uParam0->f_666), 8, 0);
				func_329(&(uParam0->f_666), 16, 0);
				func_329(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_93 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_118(&(uParam0->f_509), 0, 0, 0, 1);
				func_117(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_117(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_323(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_117(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_117(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_114(&(uParam0->f_509), 1);
				func_329(&(uParam0->f_666), 8, 0);
				func_329(&(uParam0->f_666), 16, 0);
				func_329(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_118(&(uParam0->f_509), 1, 0, 0, 1);
			func_117(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_117(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_114(&(uParam0->f_509), 1);
			func_329(&(uParam0->f_666), 16, 1);
			func_329(&(uParam0->f_666), 8, 0);
			func_329(&(uParam0->f_666), 15, 0);
			func_329(&(uParam0->f_666), 17, 0);
			func_329(&(uParam0->f_666), 23, 0);
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		func_197(func_113(func_3(&(uParam0->f_666), 16), 1, 2));
		func_120(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_329(&(uParam0->f_666), 15, 0);
		func_329(&(uParam0->f_666), 16, 0);
		func_329(&(uParam0->f_666), 23, 0);
	}
}

int func_323(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		GAMEPLAY::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_324(var uParam0)
{
	if (!UI::IS_PAUSE_MENU_ACTIVE())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_118(&(uParam0->f_509), 0, 0, 0, 1);
			func_323(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_117(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_114(&(uParam0->f_509), 1);
			func_329(&(uParam0->f_666), 23, 1);
			func_329(&(uParam0->f_666), 8, 0);
			func_329(&(uParam0->f_666), 16, 0);
			func_329(&(uParam0->f_666), 15, 0);
			func_329(&(uParam0->f_666), 17, 0);
		}
		func_120(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_329(&(uParam0->f_666), 15, 0);
		func_329(&(uParam0->f_666), 16, 0);
		func_329(&(uParam0->f_666), 23, 0);
		func_329(&(uParam0->f_666), 17, 0);
	}
}

void func_325(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_99)
	{
		if (!CONTROLS::IS_CONTROL_PRESSED(2, 201) && !CONTROLS::IS_CONTROL_PRESSED(2, 202))
		{
			iLocal_99 = 1;
		}
		else
		{
			iLocal_99 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_99 && iLocal_98 == 0)
			{
				iLocal_99 = 0;
				bVar0 = false;
				bLocal_306 = false;
				UI::CLEAR_HELP(1);
			}
		}
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 235) || CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(2, 235))
		{
			if (!bLocal_306)
			{
				*uParam0 = 14;
				bLocal_306 = true;
				UI::CLEAR_HELP(1);
			}
		}
		else if (func_301("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_306 = false;
		}
	}
}

void func_326(var uParam0)
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		func_4(uParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_327(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_328(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_329(var uParam0, int iParam1, bool bParam2)
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

int func_330(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_106565.f_18964.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_331(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_422[iVar0] = 301;
		iParam0->f_425[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_454 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_242(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_241(uParam1, iVar0);
		func_247(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_322 = 0;
	iParam0->f_436 = 0;
	iLocal_93 = 0;
	iLocal_299 = 1;
	iLocal_300 = 0;
	iLocal_302 = 0;
	iLocal_95 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_308 = 0;
	func_329(&(uParam2->f_666), 6, 0);
	func_337();
	func_335(uParam2);
	if (iParam0->f_457)
	{
		func_332(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_332(bool bParam0)
{
	UI::DISPLAY_RADAR(0);
	if (CAM::IS_CAM_ACTIVE(uLocal_122))
	{
		CAM::SET_CAM_ACTIVE(uLocal_122, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_126))
	{
		CAM::SET_CAM_ACTIVE(uLocal_126, 0);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_334();
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		CAM::DO_SCREEN_FADE_IN(500);
	}
	func_333(bParam0);
}

void func_333(bool bParam0)
{
	if (bParam0)
	{
		CAM::SET_CAM_ACTIVE(uLocal_120, 1);
	}
}

void func_334()
{
	CAM::SET_CAM_ACTIVE(uLocal_122, 1);
}

void func_335(var uParam0)
{
	func_336();
	uParam0->f_670 = 3;
	func_329(&(uParam0->f_666), 15, 0);
	func_329(&(uParam0->f_666), 16, 0);
	func_329(&(uParam0->f_666), 17, 0);
}

void func_336()
{
	int iVar0;
	
	Local_164.f_66 = -1;
	Local_164.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_164.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_164.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_164.f_9[iVar0 /*7*/].f_5 = 0;
		Local_164.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_164.f_5 = 0;
	Local_164.f_5.f_1 = -1f;
	Local_164.f_5.f_2 = 0;
	Local_164 = 0;
	Local_164.f_1 = 0;
}

void func_337()
{
	SYSTEM::SETTIMERA(0);
	iLocal_99 = 0;
	UI::CLEAR_SMALL_PRINTS();
}

void func_338(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_340(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17411.f_8353)
	{
		UI::RESET_HUD_COMPONENT_VALUES(15);
		Global_17411.f_8353 = 0;
	}
	UI::_CLEAR_NOTIFICATIONS_POS(0f);
	if (Global_17411.f_5628[iVar0])
	{
		UI::CLEAR_ADDITIONAL_TEXT(9, 0);
		Global_17411.f_5628[iVar0] = 0;
	}
	if (Global_17411.f_5614[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_17411.f_5614[iVar0] = 0;
	}
	if (Global_17411.f_5621[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_17411.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_339(&(Global_17411.f_5660[iVar0 /*10*/]));
		Global_17411.f_5721[iVar0] = 0;
	}
	else
	{
		Global_17411.f_5721[iVar0] = 0;
	}
}

void func_339(var uParam0)
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

int func_340(var uParam0, bool bParam1, int iParam2)
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
		if (Global_17411.f_5721[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_17411.f_5721[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_17411.f_5721[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_341(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

int func_342(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	CONTROLS::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_399(0, 0, 0, 1);
		func_398(0, -1, 1);
		if (func_397())
		{
			if (Global_4268040 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4268040;
				func_396(uParam0->f_660, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (UI::DOES_TEXT_LABEL_EXIST(sVar0))
				{
					func_395(sVar0, 0, 0);
				}
			}
			Global_4268041 = GAMEPLAY::GET_GAME_TIMER() + 300;
		}
		else if (func_394() && GAMEPLAY::GET_GAME_TIMER() > Global_4268041)
		{
			if (Global_4268040 == uParam0->f_660)
			{
				iVar2 = func_393(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4268041 = GAMEPLAY::GET_GAME_TIMER() + 300;
		}
		if (func_392(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_396(uParam0->f_660, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (UI::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_395(sVar0, 0, 0);
			}
		}
		if (func_391(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_396(uParam0->f_660, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (UI::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_395(sVar0, 0, 0);
			}
		}
		if (func_390(&(uParam0->f_633)) || func_389(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_375(uParam0);
		}
		if (func_374(&(uParam0->f_636)) || func_372(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_375(uParam0);
		}
		if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_371(uParam0->f_662 + 1, 1);
			*uParam2 = func_371(uParam0->f_664 + 1, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_345(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202) || func_344())
		{
			func_343(0, 0);
			func_329(&(uParam0->f_666), 8, 0);
			func_329(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			func_36(0);
			*uParam1 = -1;
			return 1;
		}
		else if (CONTROLS::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			func_375(uParam0);
			func_329(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_343(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17411.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17411.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2459153[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17411.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17411.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17411.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17411.f_5089[iVar0] = 0;
		Global_17411.f_5227[iVar0] = 0;
		Global_17411.f_5356[iVar0] = 0;
		Global_17411.f_5879[iVar0] = 0f;
		Global_17411.f_5485[iVar0] = 0;
		Global_17411.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17411.f_5056[iVar0] = 0;
		Global_17411.f_5068[iVar0] = 0f;
		Global_17411.f_5062[iVar0] = -1f;
		Global_17411.f_5075[iVar0] = 0;
		Global_17411.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17411.f_4964[iVar0 /*4*/]), "", 16);
		Global_17411.f_5013[iVar0] = -1;
		Global_17411.f_5026[iVar0] = 359;
		Global_17411.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 61)
	{
		StringCopy(&(Global_17411.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17411.f_6997[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_17411.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4267964.f_16), "", 16);
	Global_4267964.f_20 = -1;
	Global_17411 = 0;
	Global_17411.f_5218 = 0;
	Global_17411.f_5219 = 0;
	Global_17411.f_5220 = 0;
	Global_17411.f_5222 = 0;
	Global_17411.f_5223 = 0;
	Global_17411.f_5224 = 0;
	Global_17411.f_5221 = 0;
	Global_17411.f_5874 = 0;
	Global_17411.f_6014 = 0;
	Global_17411.f_5739 = 0;
	Global_17411.f_5738 = 0;
	Global_17411.f_5740 = 0;
	StringCopy(&(Global_17411.f_4690), "", 24);
	Global_17411.f_4762 = 0;
	Global_17411.f_4763 = 0;
	Global_17411.f_4764 = 0;
	Global_17411.f_4765 = 0;
	Global_17411.f_4766 = 0;
	Global_17411.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_4768 = 0;
	StringCopy(&(Global_4267964.f_21), "", 16);
	Global_4267964.f_61 = 0;
	Global_4267964.f_62 = 0;
	Global_4267964.f_63 = 0;
	Global_4267964.f_64 = 0;
	Global_4267964.f_65 = 0;
	Global_4267964.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4267964.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4267964.f_67 = 0;
	StringCopy(&(Global_17411.f_1), "", 16);
	Global_17411.f_5074 = 0f;
	Global_17411.f_68 = 0;
	Global_17411.f_69 = 0;
	Global_17411.f_70 = 0;
	Global_17411.f_71 = 0;
	Global_17411.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_5744 = 0;
	Global_17411.f_5743 = 0;
	Global_17411.f_5741 = 0;
	Global_17411.f_5742 = 0;
	Global_17411.f_4769 = 0;
	Global_17411.f_4770 = 0;
	Global_17411.f_5225 = 10;
	Global_17411.f_5226 = 0;
	Global_17411.f_5876 = 0f;
	Global_17411.f_5877 = 0f;
	Global_17411.f_5728 = 0;
	Global_17411.f_5729 = 0;
	Global_17411.f_5730 = 0f;
	Global_17411.f_5731 = 0;
	Global_17411.f_5733 = 0;
	Global_17411.f_5732 = 0;
	Global_17411.f_5734 = 0;
	Global_17411.f_5735 = 0;
	Global_17411.f_5736 = 0;
	Global_17411.f_5737 = 0;
	Global_17411.f_8349 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17411.f_6008[iVar0] = -1;
		Global_17411.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_17411.f_5081 = 0f;
	Global_17411.f_5052 = 0;
	Global_17411.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17411.f_6015)
	{
		Global_17411.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_17411.f_8328 = 0;
	Global_17411.f_8323 = 0;
	Global_17411.f_8333 = 0;
	Global_17411.f_8338 = 0;
	Global_17411.f_8343 = 0;
	Global_17411.f_8345 = 0;
	Global_17411.f_8351 = 0;
	Global_17408 = 0.05f;
	Global_17409 = 0.05f;
	Global_17410 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_17410 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17410 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17410 = 0.225f;
	}
}

int func_344()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_345(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	var uVar60;
	var uVar61;
	float fVar62;
	float fVar63;
	float fVar64;
	char cVar65[64];
	char cVar81[64];
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_340(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_368(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	fVar58 = 0f;
	if (Global_17411)
	{
		if (func_18(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar57 = fVar37;
			fVar58 = fVar36;
			fVar57 = (fVar57 + 0f);
		}
		else
		{
			Global_17411 = 0;
		}
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_17409;
	}
	else
	{
		fVar59 = (((Global_17409 + fVar57) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17410;
	}
	fVar62 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&uVar60, &uVar61);
		fVar63 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_20())
		{
			uVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(uVar61) * fVar63));
		}
		fVar64 = (SYSTEM::TO_FLOAT(uVar60) / SYSTEM::TO_FLOAT(uVar61));
		fVar62 = (fVar64 / fVar63);
		if (func_20())
		{
			fVar62 = 1f;
		}
		uVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(uVar60) / fVar62));
		uVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(uVar61) / fVar62));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&uVar60, &uVar61);
	}
	if (bParam3)
	{
		if (Global_17411.f_5218 <= 1)
		{
			func_364(Global_17411.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_17411.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17411.f_5728)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_17409;
			}
			else
			{
				if (Global_17411)
				{
					StringCopy(&cVar65, func_24(29), 64);
					StringCopy(&cVar81, func_21(29, 1), 64);
					if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_6997[29 /*16*/])) == -1487683087)
					{
						func_363(Global_17408, Global_17409, fParam5, (fVar57 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_17408 + (fParam5 * 0.5f)), (Global_17409 + ((fVar57 - 0f) * 0.5f)), fVar58, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar65, &cVar81, (Global_17408 + (fParam5 * 0.5f)), (Global_17409 + ((fVar57 - 0f) * 0.5f)), fParam5, (fVar57 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17411.f_8323)
				{
					iVar1 = Global_17411.f_8319;
					iVar2 = Global_17411.f_8320;
					iVar3 = Global_17411.f_8321;
					iVar4 = Global_17411.f_8322;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_363(Global_17408, (Global_17409 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_17409 + fVar57) + 0.034722f) + 0f);
				if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_1)) != 0)
				{
					func_362();
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17411.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17411.f_68)
					{
						if (Global_17411.f_5[iVar14] == 2)
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17411.f_5[iVar14] == 3)
						{
							UI::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_14[iVar16], Global_17411.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17411.f_5[iVar14] == 1)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17411.f_5[iVar14] == 8)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17411.f_5[iVar14] == 5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 6)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 7)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17411.f_5[iVar14] == 9)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					UI::END_TEXT_COMMAND_DISPLAY_TEXT((Global_17408 + 0.00390625f), ((Global_17409 + fVar57) + 0.00416664f), 0);
				}
				if (Global_17411.f_5735)
				{
					func_362();
					func_360((((Global_17408 + fParam5) - 0.00390625f) - func_361("CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737)), ((Global_17409 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5736, Global_17411.f_5737);
				}
				else if (Global_17411.f_5731 > Global_17411.f_5225)
				{
					if (Global_17411.f_5734 != 0)
					{
						func_362();
						func_360((((Global_17408 + fParam5) - 0.00390625f) - func_361("CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733)), ((Global_17409 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_17411.f_5734, Global_17411.f_5733);
					}
				}
			}
			iVar6 = Global_17411.f_5738;
			iVar9 = 0;
			fVar97 = fVar51;
			if (Global_17411.f_8333)
			{
				iVar1 = Global_17411.f_8329;
				iVar2 = Global_17411.f_8330;
				iVar3 = Global_17411.f_8331;
				iVar4 = Global_17411.f_8332;
			}
			else
			{
				UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17411.f_5225 && iVar6 <= Global_17411.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_17411.f_5485[iVar6])
					{
						if (Global_17411.f_5356[iVar6] && iVar6 != Global_17411.f_5738)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_17411.f_5745[iVar6] != 0f)
						{
							fVar56 = Global_17411.f_5745[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar97 + ((fVar51 - fVar97) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar97), 0f, 255, 255, 255, 255, 0);
			if (Global_17411.f_5731 > Global_17411.f_5225)
			{
				if (Global_17411.f_8338)
				{
					iVar1 = Global_17411.f_8334;
					iVar2 = Global_17411.f_8335;
					iVar3 = Global_17411.f_8336;
					iVar4 = Global_17411.f_8337;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_363(Global_17408, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar62));
				vVar38.y = (vVar38.y * (0.5f / fVar62));
				if (Global_17411.f_8351)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					UI::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_17408 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar62), ((vVar38.y / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_4690)) != 0 && Global_17411.f_4766 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17408 + 0.0046875f);
				if (Global_17411.f_4768 != 0)
				{
					func_18(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_359(fVar42);
				UI::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_17411.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17411.f_4762)
				{
					if (Global_17411.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_17411.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_4705[iVar16], Global_17411.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_17411.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_363(Global_17408, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17411.f_8343)
				{
					iVar1 = Global_17411.f_8339;
					iVar2 = Global_17411.f_8340;
					iVar3 = Global_17411.f_8341;
					iVar4 = Global_17411.f_8342;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_359(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17411.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17411.f_4762)
				{
					if (Global_17411.f_4696[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_17411.f_4696[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_4705[iVar16], Global_17411.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_17411.f_4696[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17411.f_4696[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_17411.f_4768 != 0)
				{
					func_18(Global_17411.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_358(Global_17411.f_4768, 1, &uVar47, &uVar48, &uVar49, &uVar50);
					GRAPHICS::DRAW_SPRITE(func_24(Global_17411.f_4768), func_21(Global_17411.f_4768, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17411.f_4766 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_17411.f_4767) > Global_17411.f_4766)
					{
						StringCopy(&(Global_17411.f_4690), "", 24);
						Global_17411.f_4766 = -1;
					}
				}
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4267964.f_21)) != 0 && Global_4267964.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17408 + 0.0046875f);
				if (Global_4267964.f_67 != 0)
				{
					func_18(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17408 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_359(fVar42);
				UI::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4267964.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4267964.f_61)
				{
					if (Global_4267964.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4267964.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4267964.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4267964.f_34[iVar16], Global_4267964.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4267964.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_363(Global_17408, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17411.f_8343)
				{
					iVar1 = Global_17411.f_8339;
					iVar2 = Global_17411.f_8340;
					iVar3 = Global_17411.f_8341;
					iVar4 = Global_17411.f_8342;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17408 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_359(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4267964.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4267964.f_61)
				{
					if (Global_4267964.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4267964.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4267964.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4267964.f_34[iVar16], Global_4267964.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4267964.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4267964.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4267964.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4267964.f_67 != 0)
				{
					func_18(Global_4267964.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_358(Global_4267964.f_67, 1, &uVar47, &uVar48, &uVar49, &uVar50);
					GRAPHICS::DRAW_SPRITE(func_24(Global_4267964.f_67), func_21(Global_4267964.f_67, 1), ((Global_17408 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4267964.f_65 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_4267964.f_66) > Global_4267964.f_65)
					{
						StringCopy(&(Global_4267964.f_21), "", 16);
						Global_4267964.f_65 = -1;
					}
				}
			}
			func_353(uVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17411.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_17411.f_5218;
			if (Global_17411.f_5729)
			{
				iVar98 = (Global_17411.f_5732 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_17411.f_5745[iVar6] != 0f)
				{
					fVar56 = Global_17411.f_5745[iVar6];
				}
				if (Global_17411.f_5729)
				{
					iVar6 = Global_17411.f_7974[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17411.f_5738 && iVar9 < Global_17411.f_5225)
				{
					bVar33 = true;
					if (Global_17411.f_5739 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_17411.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17411.f_5879[iVar6] = fVar35;
				fVar34 = (Global_17408 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_17411.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_17411.f_8345)
					{
						UI::GET_HUD_COLOUR(Global_17411.f_8344, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						UI::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_17408 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_17411.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_17411.f_5226)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_17411.f_5089[iVar6], iVar8) || Global_17411.f_5056[iVar8] == 5)
					{
						if (Global_17411.f_5729)
						{
							iVar19 = Global_17411.f_7990[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar20 = Global_17411.f_8031[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar21 = Global_17411.f_8072[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar22 = Global_17411.f_8113[((iVar9 * Global_17411.f_5226) + iVar8)];
							iVar23 = Global_17411.f_8154[((iVar9 * Global_17411.f_5226) + iVar8)];
						}
						else
						{
							Global_17411.f_7990[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar19;
							Global_17411.f_8031[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar20;
							Global_17411.f_8072[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar21;
							Global_17411.f_8113[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar22;
							Global_17411.f_8154[((iVar9 * Global_17411.f_5226) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_17411.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_17411.f_6008[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_17411.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_17411.f_6008[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_17411.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_17408 + 0.0046875f) + Global_17411.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_17411.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_17411.f_5062[iVar8 + 1])
						{
							fVar46 = (Global_17411.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_17408 + Global_17410) - 0.0046875f) - fVar34);
						}
						if ((Global_17411.f_5075[iVar8] && Global_17411.f_5874) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_17411.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_351(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, iVar106, bVar53, bVar52);
											UI::_BEGIN_TEXT_COMMAND_WIDTH(&(Global_17411.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_4175[(iVar21 + iVar27)], Global_17411.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0)
										{
											fVar43 = UI::_END_TEXT_COMMAND_GET_WIDTH(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_18(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_17411.f_4433[(iVar22 + iVar14)] == 2 || Global_17411.f_4433[(iVar22 + iVar14)] == 50) || Global_17411.f_4433[(iVar22 + iVar14)] == 60)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar43;
										Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar44;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_17411.f_5083[iVar101] == 2)
												{
													Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar101)] = (Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar101)] - Global_17411.f_5068[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar43 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar44 = Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_358(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_358(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										func_351(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_350(bVar32);
										}
										UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17411.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17411.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2459153[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												UI::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_4175[(iVar21 + iVar27)], Global_17411.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_17411.f_4433[(iVar22 + iVar28)] == 2 || Global_17411.f_4433[(iVar22 + iVar28)] == 50) || Global_17411.f_4433[(iVar22 + iVar28)] == 60)
											{
												if (func_18(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_18(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_358(Global_17411.f_4433[(iVar22 + iVar28)], bVar32, &uVar47, &uVar48, &uVar49, &uVar50);
														if (iVar5 == 1)
														{
															if (Global_17411.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_24(Global_17411.f_4433[(iVar22 + iVar28)]), func_21(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_24(Global_17411.f_4433[(iVar22 + iVar28)]), func_21(Global_17411.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_17411.f_5083[iVar8] == 2)
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
											if (func_349() && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_351(0, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													UI::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													UI::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), 0);
													UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													UI::ADD_TEXT_COMPONENT_INTEGER((Global_17411.f_5738 + iVar30));
													UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_17411.f_4433[(iVar22 + iVar14)] != 2 && Global_17411.f_4433[(iVar22 + iVar14)] != 50) && Global_17411.f_4433[(iVar22 + iVar14)] != 60)
											{
												if (func_18(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_18(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_358(Global_17411.f_4433[(iVar22 + iVar14)], bVar32, &uVar47, &uVar48, &uVar49, &uVar50);
															if (Global_17411.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_24(Global_17411.f_4433[(iVar22 + iVar14)]), func_21(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (Global_17408 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
															}
															else if (Global_17411.f_5083[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_24(Global_17411.f_4433[(iVar22 + iVar14)]), func_21(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_24(Global_17411.f_4433[(iVar22 + iVar14)]), func_21(Global_17411.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_17411.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										func_351(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_350(bVar32);
										}
										UI::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_INTEGER(Global_17411.f_3918[iVar20]);
										fVar43 = UI::_END_TEXT_COMMAND_GET_WIDTH(1);
										fVar42 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar43 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_358(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_358(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_351(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, 0, 0);
										func_348((fVar34 + fVar42), fVar35, "NUMBER", Global_17411.f_3918[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_17411.f_5729)
									{
										func_351(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, 0, 0);
										if (Global_17411.f_8349 && Global_17411.f_8350 == iVar6)
										{
											func_350(bVar32);
										}
										UI::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
										UI::ADD_TEXT_COMPONENT_FLOAT(Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
										fVar43 = UI::_END_TEXT_COMMAND_GET_WIDTH(1);
										fVar42 = 0f;
										if (Global_17411.f_5083[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_17411.f_5083[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
										Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
										fVar43 = Global_17411.f_8236[((iVar9 * Global_17411.f_5226) + iVar8)];
									}
									if (bVar54)
									{
										if (func_18(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_358(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_358(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
									}
									func_351(bVar32, Global_17411.f_1610[iVar24], Global_17411.f_1867[iVar24], bVar55, 0, 0, 0);
									func_347((fVar34 + fVar42), fVar35, "NUMBER", Global_17411.f_4175[iVar21], Global_17411.f_4304[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_18(Global_17411.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_17411.f_5729)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_17411.f_5083[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_17411.f_5083[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar42;
											Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_17411.f_8195[((iVar9 * Global_17411.f_5226) + iVar8)];
											fVar44 = Global_17411.f_8277[((iVar9 * Global_17411.f_5226) + iVar8)];
										}
										if (bVar54)
										{
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17411.f_5083[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_358(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_24(26), func_21(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
													}
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_358(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_24(27), func_21(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_18(Global_17411.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_358(Global_17411.f_4433[iVar22], bVar32, &uVar47, &uVar48, &uVar49, &uVar50);
												GRAPHICS::DRAW_SPRITE(func_24(Global_17411.f_4433[iVar22]), func_21(Global_17411.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_346(Global_17411.f_4433[iVar22])), (fVar37 * func_346(Global_17411.f_4433[iVar22])), 0f, uVar47, uVar48, uVar49, uVar50, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_17411.f_5056[iVar8] == 5)
						{
							if (Global_17411.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
							if (Global_17411.f_5075[iVar8])
							{
								if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_17411.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_17411.f_7974[iVar9] = iVar6;
						Global_17411.f_5740 = iVar6;
						iVar9++;
						if (Global_17411.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_17411.f_5745[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_17411.f_5745[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_17411.f_5728)
					{
						Global_17411.f_5485[iVar6] = 1;
						if (Global_17411.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_17411.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17411.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17411.f_5728)
			{
				Global_17411.f_5730 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_17411.f_5733 = iVar11;
				Global_17411.f_5731 = iVar10;
				Global_17411.f_5728 = 1;
			}
		}
		if (!Global_17411.f_5729)
		{
			Global_17411.f_5732 = iVar9;
			Global_17411.f_5729 = 1;
		}
		iVar5++;
	}
	Global_17411.f_5876 = fVar51;
	Global_17411.f_5878 = GAMEPLAY::GET_GAME_TIMER();
	UI::_CLEAR_NOTIFICATIONS_POS(Global_17411.f_5876);
	if (!Global_17411.f_8318)
	{
		func_38(0);
	}
	Global_17411.f_8318 = 0;
	if (bParam2)
	{
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_197(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

float func_346(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 52:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_347(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_348(float fParam0, float fParam1, char* sParam2, var uParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

var func_349()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

void func_350(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (bParam0)
	{
		UI::GET_HUD_COLOUR(Global_17411.f_8346[0], &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		UI::GET_HUD_COLOUR(Global_17411.f_8346[1], &uVar0, &uVar1, &uVar2, &uVar3);
	}
	UI::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, 255);
}

void func_351(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_352(Global_17411.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				UI::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &uVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				UI::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
				UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			UI::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			UI::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			UI::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
			UI::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, uVar3);
		}
	}
	else if (bParam0)
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		UI::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		UI::SET_TEXT_SCALE(0f, 0.425f);
		UI::SET_TEXT_FONT(6);
	}
	else
	{
		UI::SET_TEXT_FONT(0);
	}
	UI::SET_TEXT_WRAP(0f, 1f);
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_352(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_353(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_340(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_368(bParam4, bParam8))
	{
		return;
	}
	if (func_356())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_354(PLAYER::PLAYER_ID(), 0))
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
	if (Global_17411.f_4769 != 0)
	{
		if (CONTROLS::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (Global_17411.f_5026[iVar1] != 359)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_17411.f_5026[iVar1], 1), 64);
				}
				else if (Global_17411.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_17411.f_4771[iVar1 /*16*/]), CONTROLS::_0x80C2FD58D720C801(2, Global_17411.f_5039[iVar1], 1), 64);
				}
				iVar1++;
			}
			Global_17411.f_4770 = 0;
		}
		if (!Global_17411.f_4770)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT((1f - (Global_17411.f_5081 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (GAMEPLAY::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_17411.f_4769)
			{
				if (GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_4964[iVar1 /*4*/])) != GAMEPLAY::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
					func_13(&(Global_17411.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GAMEPLAY::GET_HASH_KEY(&(Global_17411.f_4964[iVar2 /*4*/])) == GAMEPLAY::GET_HASH_KEY("PREV"))
					{
						func_13(&(Global_17411.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17411.f_5013[iVar1] == -1)
					{
						func_12(&(Global_17411.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_17411.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17411.f_4964[iVar1 /*4*/]));
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
						if (Global_17411.f_5026[iVar1] != 359 && GAMEPLAY::IS_BIT_SET(Global_17411.f_5052, iVar1))
						{
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_17411.f_5026[iVar1]);
						}
						else
						{
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(359);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4267964.f_16)) != GAMEPLAY::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_17411.f_4769);
				func_13(&Global_4267964);
				if (Global_4267964.f_20 == -1)
				{
					func_12(&(Global_4267964.f_16));
				}
				else
				{
					iVar4 = Global_17411.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4267964.f_16));
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
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17411.f_5082)
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_17411.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17411.f_4769)
		{
			if (Global_17411.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17411.f_4964[iVar1 /*4*/]));
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
		if (Global_4267964.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_17411.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4267964.f_16));
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
			if (!Global_17411.f_8353)
			{
				UI::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_17411.f_8353 = 1;
			}
		}
		else if (Global_17411.f_8353)
		{
			UI::RESET_HUD_COMPONENT_VALUES(15);
			Global_17411.f_8353 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_17411.f_5055)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_17411.f_5660[iVar0 /*10*/], Global_17411.f_5053, Global_17411.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_17411.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_354(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_355(-1, 0) == 8;
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

int func_355(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_62();
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

int func_356()
{
	vector3 vVar0;
	
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	if (func_357())
	{
		vVar0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_14498 == 0)
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

int func_357()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_358(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	UI::GET_HUD_COLOUR(1, uParam2, uParam3, uParam4, uParam5);
	*uParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*uParam2 = 194;
			*uParam3 = 80;
			*uParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 52:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
			if (bParam1)
			{
				*uParam2 = 0;
				*uParam3 = 0;
				*uParam4 = 0;
			}
			break;
		
		case 53:
			*uParam5 = 100;
			break;
		
		case 54:
			UI::GET_HUD_COLOUR(24, uParam2, uParam3, uParam4, uParam5);
			*uParam5 = 255;
			break;
	}
}

void func_359(float fParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	UI::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_LEADING(2);
	UI::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, uVar3);
	UI::SET_TEXT_WRAP(fParam0, ((Global_17408 + Global_17410) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_360(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_361(char* sParam0, var uParam1, var uParam2)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_362();
	UI::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return UI::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_362()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	UI::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
	if (Global_17411.f_8328)
	{
		uVar0 = Global_17411.f_8324;
		uVar1 = Global_17411.f_8325;
		uVar2 = Global_17411.f_8326;
		uVar3 = Global_17411.f_8327;
	}
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, uVar3);
	UI::SET_TEXT_WRAP((Global_17408 + 0.0046875f), ((Global_17408 + Global_17410) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_363(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_364(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17411.f_5218 > iParam0)
	{
		return;
	}
	if (Global_17411.f_5218 >= 128)
	{
		return;
	}
	if (Global_17411.f_5220 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 < Global_17411.f_5741)
	{
		return;
	}
	if (Global_17411.f_5218 != iParam0)
	{
		Global_17411.f_5218 = iParam0;
		Global_17411.f_5219 = 0;
	}
	iVar0 = Global_17411.f_5056[Global_17411.f_5219];
	if (iVar0 != 1)
	{
		while (Global_17411.f_5219 < 4 && iVar0 != 1)
		{
			Global_17411.f_5219++;
			iVar0 = Global_17411.f_5056[Global_17411.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]), sParam1, 24);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1) && !UI::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_17411.f_1610[Global_17411.f_5220] = bParam3;
	Global_17411.f_1867[Global_17411.f_5220] = iParam4;
	Global_17411.f_5220++;
	if (!bParam3)
	{
		func_367(Global_17411.f_5218, 1);
	}
	else
	{
		func_367(Global_17411.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_366(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
		if (Global_17411.f_5075[Global_17411.f_5219])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17411.f_5068[Global_17411.f_5219])
		{
			Global_17411.f_5068[Global_17411.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_365(&(Global_17411.f_73[Global_17411.f_5220 /*6*/]));
			if (fVar4 > Global_17411.f_5745[iParam0])
			{
				Global_17411.f_5745[iParam0] = fVar4;
			}
		}
	}
	GAMEPLAY::SET_BIT(&(Global_17411.f_5089[iParam0]), Global_17411.f_5219);
	Global_17411.f_5219++;
	Global_17411.f_5744 = 1;
	Global_17411.f_5742 = (Global_17411.f_5220 - 1);
	Global_17411.f_5743 = 0;
	Global_17411.f_5741 = iParam2;
}

var func_365(var uParam0)
{
	if (!UI::DOES_TEXT_LABEL_EXIST(uParam0))
	{
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_366(var uParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL(uParam0))
	{
		if (GAMEPLAY::GET_HASH_KEY(uParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_351(0, 1, 0, 0, 0, 0, 0);
	UI::_BEGIN_TEXT_COMMAND_WIDTH(uParam0);
	return UI::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_367(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_17411.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_17411.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_368(bool bParam0, bool bParam1)
{
	if (Global_2437364.f_1893.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_370(8, -1) && func_369() != 64)) || (UI::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_71850) || Global_17411.f_8352) || UI::IS_WARNING_MESSAGE_ACTIVE()) || Global_93734.f_1409)
	{
		return 0;
	}
	return 1;
}

int func_369()
{
	return Global_1312802;
}

var func_370(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1371947.f_1048, iParam0);
}

int func_371(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_372(var uParam0, int iParam1, int iParam2)
{
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_393(0) == 1 && Global_4268040 == iParam1)
	{
		if (!func_418(uParam0))
		{
			func_373(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_432(uParam0);
			return 1;
		}
	}
	else if (func_418(uParam0))
	{
		func_419(uParam0);
	}
	return 0;
}

void func_373(var uParam0)
{
	if (!func_418(uParam0))
	{
		func_432(uParam0);
	}
}

int func_374(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		fVar0 = CONTROLS::GET_CONTROL_NORMAL(2, 218);
	}
	if ((fVar0 > 0.8f || CONTROLS::IS_CONTROL_PRESSED(2, 190)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 190))
	{
		if (!func_418(uParam0))
		{
			func_373(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_432(uParam0);
			return 1;
		}
	}
	else if (func_418(uParam0))
	{
		func_419(uParam0);
	}
	return 0;
}

void func_375(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_343(0, 0);
	UI::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_388(uVar0, uVar1, uVar2, uVar3, 1);
	func_387(1, 2, 0, 0, 0);
	func_386(1, 2, 1, 1, 1);
	func_385(0, 1, 0, 0, 0);
	func_384("DARTS_TITLE");
	func_382(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_364(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_379(0, func_371(uParam0->f_662 + 1, 1), 0);
	func_364(1, "DARTS_SETS", 0, 1, 0, 0);
	func_379(1, func_371(uParam0->f_664 + 1, 0), 0);
	func_378(2, 141, 141, 1);
	func_364(2, "DARTS_START", 0, 1, 0, 0);
	func_377(0);
	func_396(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_395(func_112(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_376(201, "ITEM_SELECT", -1, 0);
	func_376(202, "IB_QUIT", -1, 0);
}

void func_376(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	char* sVar0;
	
	sVar0 = CONTROLS::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, 1);
	if (Global_17411.f_4769 >= 12)
	{
		StringCopy(&Global_4267964, sVar0, 64);
		StringCopy(&(Global_4267964.f_16), sParam1, 16);
		Global_4267964.f_20 = iParam2;
		return;
		return;
	}
	if (!bParam3)
	{
		GAMEPLAY::SET_BIT(&(Global_17411.f_5052), Global_17411.f_4769);
	}
	StringCopy(&(Global_17411.f_4771[Global_17411.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17411.f_4964[Global_17411.f_4769 /*4*/]), sParam1, 16);
	Global_17411.f_5013[Global_17411.f_4769] = iParam2;
	Global_17411.f_5026[Global_17411.f_4769] = iParam0;
	Global_17411.f_5039[Global_17411.f_4769] = 32;
	Global_17411.f_4769++;
}

void func_377(int iParam0)
{
	Global_17411.f_5738 = iParam0;
}

void func_378(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_17411.f_8349 = iParam3;
	Global_17411.f_8346[0] = iParam1;
	Global_17411.f_8346[1] = iParam2;
	Global_17411.f_8350 = iParam0;
}

void func_379(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17411.f_5218 > iParam0)
	{
		return;
	}
	if (Global_17411.f_5218 >= 128)
	{
		return;
	}
	if (Global_17411.f_5222 >= 256)
	{
		return;
	}
	if (Global_17411.f_5743 < Global_17411.f_5741)
	{
		return;
	}
	if (Global_17411.f_5218 != iParam0)
	{
		Global_17411.f_5218 = iParam0;
		Global_17411.f_5219 = 0;
	}
	iVar0 = Global_17411.f_5056[Global_17411.f_5219];
	if (iVar0 != 2)
	{
		while (Global_17411.f_5219 < 4 && iVar0 != 2)
		{
			Global_17411.f_5219++;
			iVar0 = Global_17411.f_5056[Global_17411.f_5219];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_17411.f_3918[Global_17411.f_5222] = iParam1;
	Global_17411.f_5222++;
	fVar1 = func_381("NUMBER", iParam1);
	if (Global_17411.f_5075[Global_17411.f_5219])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_17411.f_5068[Global_17411.f_5219])
	{
		Global_17411.f_5068[Global_17411.f_5219] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_380("NUMBER", iParam1);
		if (fVar4 > Global_17411.f_5745[iParam0])
		{
			Global_17411.f_5745[iParam0] = fVar4;
		}
	}
	GAMEPLAY::SET_BIT(&(Global_17411.f_5089[iParam0]), Global_17411.f_5219);
	Global_17411.f_5219++;
	Global_17411.f_5744 = 2;
}

var func_380(char* sParam0, int iParam1)
{
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_381(char* sParam0, var uParam1)
{
	if (!UI::DOES_TEXT_LABEL_EXIST(sParam0))
	{
		return 0f;
	}
	func_351(1, 1, 0, 0, 0, 0, 0);
	UI::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	return UI::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_382(int iParam0, char* sParam1, char* sParam2)
{
	Global_17411 = iParam0;
	func_383(29, sParam1, sParam2);
}

void func_383(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17411.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17411.f_6997[iParam0 /*16*/]), sParam2, 64);
}

void func_384(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17411.f_1), sParam0, 16);
	Global_17411.f_68 = 0;
	Global_17411.f_69 = 0;
	Global_17411.f_70 = 0;
	Global_17411.f_71 = 0;
	Global_17411.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_385(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5075[0] = iParam0;
	Global_17411.f_5075[1] = iParam1;
	Global_17411.f_5075[2] = iParam2;
	Global_17411.f_5075[3] = iParam3;
	Global_17411.f_5075[4] = iParam4;
}

void func_386(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5083[0] = iParam0;
	Global_17411.f_5083[1] = iParam1;
	Global_17411.f_5083[2] = iParam2;
	Global_17411.f_5083[3] = iParam3;
	Global_17411.f_5083[4] = iParam4;
}

void func_387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17411.f_5056[0] = iParam0;
	Global_17411.f_5056[1] = iParam1;
	Global_17411.f_5056[2] = iParam2;
	Global_17411.f_5056[3] = iParam3;
	Global_17411.f_5056[4] = iParam4;
	Global_17411.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_17411.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_17411.f_5226++;
	}
}

void func_388(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_17411.f_8323 = iParam4;
	Global_17411.f_8319 = uParam0;
	Global_17411.f_8320 = uParam1;
	Global_17411.f_8321 = uParam2;
	Global_17411.f_8322 = uParam3;
}

int func_389(var uParam0, int iParam1, int iParam2)
{
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_393(0) == -1 && Global_4268040 == iParam1)
	{
		if (!func_418(uParam0))
		{
			func_373(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_432(uParam0);
			return 1;
		}
	}
	else if (func_418(uParam0))
	{
		func_419(uParam0);
	}
	return 0;
}

int func_390(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		fVar0 = CONTROLS::GET_CONTROL_NORMAL(2, 218);
	}
	if (fVar0 < -0.8f || CONTROLS::IS_CONTROL_PRESSED(2, 189))
	{
		if (!func_418(uParam0))
		{
			func_373(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_432(uParam0);
			return 1;
		}
	}
	else if (func_418(uParam0))
	{
		func_419(uParam0);
	}
	return 0;
}

int func_391(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		fVar0 = CONTROLS::GET_CONTROL_NORMAL(2, 219);
	}
	if (fVar0 > 0.8f || CONTROLS::IS_CONTROL_PRESSED(2, 187))
	{
		if (!func_418(uParam0))
		{
			func_373(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_432(uParam0);
			return 1;
		}
	}
	else if (func_418(uParam0))
	{
		func_419(uParam0);
	}
	return 0;
}

int func_392(var uParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		fVar0 = CONTROLS::GET_CONTROL_NORMAL(2, 219);
	}
	if (fVar0 < -0.8f || CONTROLS::IS_CONTROL_PRESSED(2, 188))
	{
		if (!func_418(uParam0))
		{
			func_373(uParam0);
			return 1;
		}
		else if (func_7(uParam0) > 0.25f)
		{
			func_432(uParam0);
			return 1;
		}
	}
	else if (func_418(uParam0))
	{
		func_419(uParam0);
	}
	return 0;
}

int func_393(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_17410);
	fVar1 = (Global_17411.f_5730 - (IntToFloat(Global_17411.f_5732) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar2, uVar3, &fVar2, &uVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4268034 >= fVar0 && Global_4268034 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4268034 >= fVar0 && Global_4268034 < fVar4)
	{
		return -1;
	}
	if (Global_4268034 >= fVar4 && Global_4268034 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_394()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		return CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 237);
	}
	return 0;
}

void func_395(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17411.f_4690), sParam0, 24);
	Global_17411.f_4762 = 0;
	Global_17411.f_4763 = 0;
	Global_17411.f_4764 = 0;
	Global_17411.f_4765 = 0;
	Global_17411.f_4766 = iParam1;
	Global_17411.f_4767 = GAMEPLAY::GET_GAME_TIMER();
	Global_17411.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17411.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_396(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17411.f_5739 = iParam0;
	Global_17411.f_5874 = iParam2;
	if (Global_17411.f_5739 < Global_17411.f_5738)
	{
		Global_17411.f_5738 = Global_17411.f_5739;
	}
	else if ((Global_17411.f_5729 && Global_17411.f_5739 > Global_17411.f_5740) || (!Global_17411.f_5729 && Global_17411.f_5739 >= (Global_17411.f_5738 + Global_17411.f_5225)))
	{
		iVar0 = Global_17411.f_5738;
		while (iVar0 <= Global_17411.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17411.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17411.f_5225 && Global_17411.f_5738 < 128)
		{
			Global_17411.f_5738++;
			iVar1 = 0;
			iVar0 = Global_17411.f_5738;
			while (iVar0 <= Global_17411.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17411.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17411.f_5728 = 0;
	Global_17411.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17411.f_4690), "", 24);
		StringCopy(&(Global_4267964.f_21), "", 16);
	}
}

int func_397()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (Global_4268040 > -1)
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_398(int iParam0, int iParam1, bool bParam2)
{
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE() || UI::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		UI::_SHOW_CURSOR_THIS_FRAME();
	}
	if (Global_4268040 == -6)
	{
		UI::_SET_CURSOR_SPRITE(4);
		if (iParam0 && CONTROLS::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4268040 = -1;
			return 0;
		}
	}
	if (((Global_4268040 > -1 || Global_4268040 == -3) || Global_4268040 == -2) || UI::_0x3D9ACB1EB139E702())
	{
		UI::_SET_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_4268040 == -1 && iParam0)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 237))
		{
			UI::_SET_CURSOR_SPRITE(4);
			Global_4268040 = -6;
			return 1;
		}
		else
		{
			UI::_SET_CURSOR_SPRITE(3);
			return 0;
		}
	}
	UI::_SET_CURSOR_SPRITE(1);
	return 0;
}

void func_399(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!CONTROLS::_IS_INPUT_DISABLED(2))
	{
		Global_4268040 = -1;
		return;
	}
	CONTROLS::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17408;
	fVar2 = (fVar0 + Global_17410);
	fVar3 = Global_17411.f_5730;
	fVar1 = (Global_17411.f_5730 - (IntToFloat(Global_17411.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17411.f_5732 < 1)
	{
		fVar1 = (Global_17411.f_5730 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_401();
	if (Global_4268040 == -6)
	{
		return;
	}
	Global_4268040 = -1;
	fVar7 = Global_4268034;
	fVar8 = Global_4268035;
	if (Global_17411.f_5733 > Global_17411.f_5732)
	{
		if (((Global_4268034 >= fVar0 && Global_4268034 <= fVar2) && Global_4268035 >= fVar3) && Global_4268035 < (fVar3 + fVar6))
		{
			Global_4268040 = -2;
			if (bParam3)
			{
				func_400(0);
			}
			return;
		}
		if (((Global_4268034 >= fVar0 && Global_4268034 <= fVar2) && Global_4268035 >= (fVar3 + fVar6)) && Global_4268035 < (fVar3 + 0.034722f))
		{
			Global_4268040 = -3;
			if (bParam3)
			{
				func_400(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_17411.f_5733 == -1)
		{
			Global_4268040 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17411.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
				func_363(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17410, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4268040 = Global_17411.f_7974[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4268040 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4268040 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4268040 = -4;
		return;
	}
	Global_4268040 = -1;
}

void func_400(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17408;
	fVar1 = Global_17411.f_5730;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	if (Global_4268040 == -2)
	{
		func_363(fVar0, fVar1, Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4268040 == -3)
	{
		func_363(fVar0, (fVar1 + fVar2), Global_17410, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_401()
{
	Global_4268036 = Global_4268034;
	Global_4268037 = Global_4268035;
	Global_4268034 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4268035 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4268038 = (Global_4268034 - Global_4268036);
	Global_4268039 = (Global_4268035 - Global_4268037);
}

float func_402(float fParam0)
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_403(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_343(0, 0);
	UI::GET_HUD_COLOUR(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_388(uVar0, uVar1, uVar2, uVar3, 1);
	func_387(1, 2, 0, 0, 0);
	func_386(1, 2, 1, 1, 1);
	func_385(0, 1, 0, 0, 0);
	func_384("DARTS_TITLE");
	func_382(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_364(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_379(0, 1, 0);
	func_364(1, "DARTS_SETS", 0, 1, 0, 0);
	func_379(1, 1, 0);
	func_364(2, "DARTS_START", 0, 1, 0, 0);
	func_378(2, 141, 141, 1);
	func_377(0);
	func_396(0, 1, 1);
	func_395("DARTS_LEGD", 0, 0);
	func_404();
	func_376(201, "ITEM_SELECT", -1, 0);
	func_376(202, "IB_QUIT", -1, 0);
}

void func_404()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		CONTROLS::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

int func_405(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_428() && GAMEPLAY::GET_GAME_TIMER() >= iLocal_323 + 1000) && *iParam0 != 8)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_323 = GAMEPLAY::GET_GAME_TIMER();
						func_413(uParam1->f_1, uParam1->f_4, func_415(2), func_414(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_284(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_271(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_432(uParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_421(uParam5) > 1f && !func_301("DARTS_DOUBLE_T"))
					{
						func_416("DARTS_DOUBLE_T", -1);
					}
					if (func_421(uParam5) > 5f)
					{
						func_432(uParam5);
						UI::CLEAR_HELP(1);
						func_407(uParam1->f_1, uParam1->f_4, func_415(3), func_414(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(uLocal_128))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_284(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_271(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_432(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_421(uParam5) > 1f && !func_301("DARTS_TRIPLE_T"))
					{
						func_416("DARTS_TRIPLE_T", -1);
					}
					if (func_421(uParam5) > 5f)
					{
						func_432(uParam5);
						UI::CLEAR_HELP(1);
						func_413(uParam1->f_1, uParam1->f_4, func_415(4), func_414(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!CAM::IS_CAM_INTERPOLATING(uLocal_127))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_284(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_271(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_432(uParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_421(uParam5) > 1f && !func_301("DARTS_BULL_T"))
					{
						func_416("DARTS_BULL_T", -1);
					}
					if (func_421(uParam5) > 5f)
					{
						func_432(uParam5);
						UI::CLEAR_HELP(1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_407(uParam1->f_1, uParam1->f_4, func_415(5), func_414(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_128) && !func_301("DARTS_DBL_WIN"))
			{
				func_416("DARTS_DBL_WIN", -1);
			}
			if (func_421(uParam5) > 6f)
			{
				func_432(uParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			AUDIO::PLAY_SOUND_FRONTEND(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_120, uLocal_128, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_120))
			{
				iLocal_31 = 0;
				UI::CLEAR_HELP(1);
				UI::CLEAR_PRINTS();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_406(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				iLocal_31 = 0;
				UI::CLEAR_HELP(1);
				UI::CLEAR_PRINTS();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_406(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				CAM::SET_CAM_ACTIVE(uLocal_120, 1);
				CAM::DO_SCREEN_FADE_IN(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_406(var uParam0)
{
	vector3 vVar0;
	
	vVar0 = { -1668.044f, -1056.45f, 13.1063f };
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_COORDS(*uParam0, vVar0, 1, 0, 0, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		OBJECT::DELETE_OBJECT(uParam0);
	}
}

void func_407(vector3 vParam0, var uParam3, vector3 vParam4, vector3 vParam7, int iParam10)
{
	CAM::STOP_CAM_POINTING(uLocal_128);
	CAM::SET_CAM_FOV(uLocal_128, 35f);
	CAM::SET_CAM_COORD(uLocal_128, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, uParam3, vParam4));
	CAM::SET_CAM_ROT(uLocal_128, Vector(uParam3, 0f, 0f) - vParam7, 2);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_128, uLocal_127, iParam10, 1, 1);
}

int func_408(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_418(&(uParam0->f_2)))
	{
		func_432(&(uParam0->f_2));
	}
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_419(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_409(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	var uVar0;
	
	uVar0 = func_410(iParam5);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, uVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	UI::_SET_NOTIFICATION_COLOR_NEXT(iParam4);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam2))
	{
		func_12(iParam2);
	}
	if (bParam6)
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(100);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam6)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(iParam7);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	func_432(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_410(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_411()
{
	CAM::SET_CAM_ACTIVE(uLocal_120, 1);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	if (CAM::IS_CAM_ACTIVE(uLocal_127))
	{
		CAM::SET_CAM_ACTIVE(uLocal_127, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_122))
	{
		CAM::SET_CAM_ACTIVE(uLocal_122, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_123))
	{
		CAM::SET_CAM_ACTIVE(uLocal_123, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_124))
	{
		CAM::SET_CAM_ACTIVE(uLocal_124, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_125))
	{
		CAM::SET_CAM_ACTIVE(uLocal_125, 0);
	}
	if (CAM::IS_CAM_ACTIVE(uLocal_126))
	{
		CAM::SET_CAM_ACTIVE(uLocal_126, 0);
	}
}

char* func_412(int iParam0)
{
	if (iLocal_334 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_334 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_413(vector3 vParam0, var uParam3, vector3 vParam4, vector3 vParam7, int iParam10, bool bParam11)
{
	CAM::STOP_CAM_POINTING(uLocal_127);
	CAM::SET_CAM_FOV(uLocal_127, 35f);
	CAM::SET_CAM_COORD(uLocal_127, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, uParam3, vParam4));
	CAM::SET_CAM_ROT(uLocal_127, Vector(uParam3, 0f, 0f) - vParam7, 2);
	if (bParam11)
	{
		CAM::SET_CAM_ACTIVE(uLocal_127, 1);
	}
	else
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_127, uLocal_128, iParam10, 1, 1);
	}
}

Vector3 func_414(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_416(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_417(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(func_494(), 0))
	{
		func_4(func_494(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(uParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_418(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

void func_419(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_420(var uParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, sParam1, func_6(iParam2), 1);
}

float func_421(var uParam0)
{
	if (func_418(uParam0))
	{
		if (func_9(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_8(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

void func_422(var uParam0)
{
	if (!func_418(uParam0))
	{
		func_373(uParam0);
	}
	else
	{
		func_432(uParam0);
	}
}

void func_423()
{
	Global_14732 = 0;
	func_424();
}

void func_424()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15866 = 6;
		return;
	}
}

void func_425(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (Global_14725)
	{
		func_427(0, 0);
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
	if (!func_426())
	{
		Global_14553.f_1 = 3;
	}
}

int func_426()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_427(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_39(0))
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

int func_428()
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 18) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_429(var uParam0)
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!func_430(uVar0))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(uVar0, PLAYER::PLAYER_PED_ID(), vLocal_292, 0, 1, 0))
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

int func_430(var uParam0)
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

void func_431(var uParam0, int iParam1)
{
	iParam1++;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_PLAYER_HIGHLIGHT");
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_432(var uParam0)
{
	func_433(uParam0, 0f);
}

void func_433(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_8(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_434(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

void func_435(var uParam0, var uParam1, char* sParam2)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_34(uParam1);
	func_34(sParam2);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_436(var uParam0, struct<4> Param1, var uParam5, var uParam6, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_494()) && !PED::IS_PED_INJURED(func_494()))
	{
		PED::REMOVE_PED_FROM_GROUP(func_494());
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam8->f_5) && !PED::IS_PED_INJURED(uParam8->f_5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam8->f_5, 1, 1);
			uLocal_295[1] = uParam8->f_5;
			AI::CLEAR_PED_TASKS(uLocal_295[1]);
		}
		else if (func_438(uParam7))
		{
			AI::CLEAR_PED_TASKS(uLocal_295[1]);
		}
		else
		{
			uLocal_295[1] = PED::CREATE_PED(26, iLocal_331, Param1.f_3, uParam0, 1, 1);
		}
		if (DECORATOR::DECOR_EXIST_ON(uLocal_295[1], "Darts_name"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(uLocal_295[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_391 = func_441("RAYMOND");
				iLocal_392 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_391 = func_441("JOHAN");
				iLocal_392 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_391 = func_441("STAN");
				iLocal_392 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_391 = func_441("VINCE");
				iLocal_392 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_391 = func_441("KRISTY");
				iLocal_392 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_391 = func_441("MARLENE");
				iLocal_392 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_391 = func_441("LORIE");
				iLocal_392 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_391 = func_441("SHELLEY");
				iLocal_392 = -863218904;
			}
		}
		DECORATOR::DECOR_SET_INT(uLocal_295[1], "Darts_name", iLocal_392);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(uLocal_295[1]);
	func_437(iVar1);
	AI::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_295[1], uLocal_295[0], 0);
	AI::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_295[0], uLocal_295[1], 0);
}

void func_437(int iParam0)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_102 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_102 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_102 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_102 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_102 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_102 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_438(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), uParam0, -1))
	{
		if (!PED::IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if ((((((ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || ENTITY::GET_ENTITY_MODEL((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY((*uParam0)[iVar0], 1, 1);
				uLocal_295[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_439(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 3;
		while (iVar0 <= (161 - 1))
		{
			if (func_440(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_440(int iParam0)
{
	if (!func_91(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

char* func_441(char* sParam0)
{
	if (UNK::_GET_CURRENT_LANGUAGE_ID() == 7)
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_442(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		uParam0->f_4 = ENTITY::GET_ENTITY_HEADING(*uParam0);
	}
	if (!bParam3)
	{
		func_444(uParam1, uParam0);
	}
	vLocal_82 = { 0f, (-2.3685f + fLocal_55), 0.1f };
	vLocal_82 = { vLocal_82 + vLocal_56 };
	vLocal_79 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_1, uParam0->f_4, vLocal_82) };
	func_443(uParam2, uParam0);
}

void func_443(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + vLocal_56 };
	*uParam0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_444(var uParam0, var uParam1)
{
	*uParam0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_55), -1.7272f) };
	uParam0->f_3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_55), -1.7272f) };
}

int func_445(var uParam0, var uParam1)
{
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\DARTS", 0, -1))
	{
		return 0;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FAMILY1_2", 0, -1))
	{
		return 0;
	}
	if ((((((((((((!STREAMING::HAS_MODEL_LOADED(iLocal_28) || !STREAMING::HAS_MODEL_LOADED(iLocal_29)) || !STREAMING::HAS_MODEL_LOADED(iLocal_60)) || !STREAMING::HAS_MODEL_LOADED(iLocal_331)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_645)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_57)) || !GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam1->f_62)) || !UI::HAS_ADDITIONAL_TEXT_LOADED(3)) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Darts")) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_393)) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_394)) || !func_446(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_446(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_340(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17411.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_5635[iVar0 /*4*/])))
	{
		UI::REQUEST_ADDITIONAL_TEXT(&(Global_17411.f_5635[iVar0 /*4*/]), 9);
		Global_17411.f_5628[iVar0] = 1;
		if (!UI::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_17411.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
	Global_17411.f_5614[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", 0);
		Global_17411.f_5621[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17411.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_447(&(Global_17411.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_447(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = unk_0x67D02A194A2FC2BD(&(uParam0->f_1));
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

void func_448(var uParam0, var uParam1)
{
	STREAMING::REQUEST_MODEL(iLocal_28);
	STREAMING::REQUEST_MODEL(iLocal_29);
	STREAMING::REQUEST_MODEL(iLocal_60);
	STREAMING::REQUEST_MODEL(iLocal_331);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Darts", 0);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("ShopUI_Title_Darts", 0);
	STREAMING::REQUEST_ANIM_DICT(sLocal_393);
	STREAMING::REQUEST_ANIM_DICT(sLocal_394);
	*uParam0 = unk_0x67D02A194A2FC2BD("darts_scoreboard");
	uParam1->f_645 = func_192();
	uParam1->f_57 = func_450();
	uParam1->f_62 = func_449();
	UI::REQUEST_ADDITIONAL_TEXT("DARTS", 3);
}

var func_449()
{
	return unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
}

var func_450()
{
	return unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
}

void func_451(var uParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		uParam0->f_21 = { 180f, 0f, 252.555f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		uParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		uParam0->f_21 = { 180f, 0f, 87.77f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	if (!func_452(vParam2) && fParam5 != 0f)
	{
		uParam0->f_18 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam2, fParam5, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam5 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}

int func_452(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_453(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_61 = 0.5f;
	Local_61.f_1 = 0.5f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		Local_61.f_2 = 0.05f;
		Local_61.f_3 = 0.095f;
	}
	else
	{
		Local_61.f_2 = 0.065f;
		Local_61.f_3 = 0.09f;
	}
	Local_61.f_4 = 255;
	Local_61.f_5 = 250;
	Local_61.f_6 = 255;
	Local_61.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_61.f_4 = 255;
		Local_61.f_5 = 255;
		Local_61.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_61.f_4 = 255;
		Local_61.f_5 = 255;
		Local_61.f_6 = 255;
	}
	Local_61.f_8 = 0f;
	Local_70 = 0f;
	Local_70.f_1 = 0f;
	Local_70.f_2 = 0.061f;
	Local_70.f_3 = 0.105f;
	Local_70.f_4 = 200;
	Local_70.f_5 = 45;
	Local_70.f_6 = 40;
	Local_70.f_7 = 255;
	Local_70.f_8 = 0f;
}

void func_454(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_28;
	}
	else
	{
		uParam0->f_1 = iLocal_29;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_455()
{
	int iVar0;
	
	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838577.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_456(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	float fVar21;
	vector3 vVar22;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	float fVar30;
	float fVar31;
	vector3 vVar32;
	vector3 vVar35;
	vector3 vVar38;
	
	fLocal_134 = GRAPHICS::_GET_ASPECT_RATIO(0);
	fVar21 = 30f;
	fVar21 = func_402(fLocal_134);
	vVar22 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar25 = 1.7939f;
	fVar26 = -1.3346f;
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		vVar27 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar30 = -1.3023f;
		fVar31 = -12.4139f;
	}
	else
	{
		vVar27 = { -0.112635f, -1.86963f, 0.45417f };
		fVar30 = -3.7542f;
		fVar31 = -14.4576f;
	}
	vVar32 = { 0.261599f, -0.750354f, -0.392929f };
	vVar38 = { 0.281314f, -0.573735f, -0.39603f };
	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam3, vVar22) };
	vVar9 = { fVar26, 0f, (fParam3 - fVar25) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam3, vVar27) };
	vVar6 = { fVar31, 0f, (fParam3 - fVar30) };
	vVar12 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam3, vVar32) };
	vVar15 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	vVar35 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, fParam3, vVar38) };
	vVar18 = { 0.8351f, -0.0048f, (fParam3 - 186.5073f) };
	uLocal_120 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar6, fVar21, 0, 2);
	uLocal_121 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar3, vVar9, fVar21, 0, 2);
	uLocal_122 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar12, vVar15, 1115815936, 0, 2);
	uLocal_123 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar35, vVar18, 1115815936, 0, 2);
	uLocal_124 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
	uLocal_125 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
	uLocal_127 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
	uLocal_128 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
	uLocal_126 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	CAM::SET_CAM_FOV(uLocal_122, 43.35f);
	CAM::SET_CAM_FOV(uLocal_123, 42.35f);
	CAM::SHAKE_CAM(uLocal_122, "HAND_SHAKE", 0.1f);
	CAM::SHAKE_CAM(uLocal_123, "HAND_SHAKE", 0.1f);
}

void func_457(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_458()
{
	Global_17272.f_6 = 1;
}

void func_459(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&Global_26010, iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_26010, iParam0);
	}
}

var func_460(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_461(iParam0, iParam1);
	STATS::STAT_GET_INT(uVar1, &uVar0, -1);
	return uVar0;
}

var func_461(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_462(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_462(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_463(bool bParam0)
{
	if (bParam0)
	{
		func_464();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_39(0))
		{
			func_425(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_464()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

void func_465(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	UI::DISPLAY_AREA_NAME(1);
	func_263(8);
	func_316();
	if (bLocal_305)
	{
		func_482(&uLocal_321);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_406(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_28);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_29);
	if (!PED::IS_PED_INJURED(uLocal_295[0]) && !PED::IS_PED_INJURED(uLocal_295[1]))
	{
		AI::TASK_CLEAR_LOOK_AT(uLocal_295[0]);
		AI::TASK_CLEAR_LOOK_AT(uLocal_295[1]);
	}
	func_481();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_60);
	func_480();
	func_479(uParam1->f_645);
	func_478(&(uParam1->f_57));
	if (!ENTITY::IS_ENTITY_DEAD(func_494(), 0))
	{
		PED::SET_PED_AS_GROUP_MEMBER(func_494(), func_477());
		func_476(iLocal_329, iLocal_330);
	}
	else
	{
		func_474(&(uLocal_295[1]));
	}
	func_463(0);
	func_473(uParam2);
	func_36(0);
	UI::RESET_HUD_COMPONENT_VALUES(15);
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (iParam0->f_460 && !iLocal_319)
		{
			func_472(190, 0);
		}
	}
	func_102();
	func_455();
	func_94(&(uParam1->f_72), 0);
	SYSTEM::WAIT(200);
	if (iLocal_312)
	{
		func_469(130, 0, 0);
		func_466();
	}
	func_459(23, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_466()
{
	func_467();
}

int func_467()
{
	if (func_468(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

int func_468(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71838, 0);
}

void func_469(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_63((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = iParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_470();
	}
}

void func_470()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					STATS::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_106288, 0);
					GAMEPLAY::SET_BIT(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_106301, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_106284, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_106302, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_106285, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_106303, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_106286, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_106304, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_106287, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_106291, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_106307 + Global_106306), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_106565.f_10188.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_106308, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_106309, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_106310, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_106565.f_10188.f_3853))
	{
		func_85(13, SYSTEM::FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_471() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_467();
				}
			}
		}
	}
}

int func_471()
{
	return Global_25765;
}

void func_472(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	if (!PLAYER::IS_PLAYER_ONLINE())
	{
		return;
	}
	StringCopy(&(Var7[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_222(iParam0, &Var0, &Var7, 1, -1, 0, 0))
	{
		STATS::_0x0BCA1D2C47B0D269(103, iLocal_151[1], 0f);
		STATS::_0x0BCA1D2C47B0D269(99, iLocal_151[2], 0f);
		STATS::_0x0BCA1D2C47B0D269(109, iLocal_151[3], 0f);
		STATS::_0x0BCA1D2C47B0D269(106, iLocal_151[5], 0f);
		STATS::_0x0BCA1D2C47B0D269(2, iLocal_151[10], 0f);
		STATS::_0x0BCA1D2C47B0D269(107, iLocal_151[8], 0f);
		STATS::_0x0BCA1D2C47B0D269(116, iLocal_151[6], 0f);
	}
}

void func_473(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (GAMEPLAY::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71858)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_71859)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_468(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_36(0);
}

void func_474(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !PED::IS_PED_INJURED(*uParam0))
	{
		AI::CLEAR_SEQUENCE_TASK(&uLocal_332);
		AI::OPEN_SEQUENCE_TASK(&uLocal_332);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_295[0]))
		{
			AI::TASK_LOOK_AT_ENTITY(0, uLocal_295[0], 8000, 2049, 3);
		}
		AI::TASK_STAND_STILL(0, 1000);
		if (bLocal_310)
		{
			if (!GAMEPLAY::IS_BIT_SET(Global_106526, 10))
			{
				AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_475(iLocal_334 == 2, vLocal_375, vLocal_381), 1f, 20000, 0.25f, 0, func_121(iLocal_334 == 2, fLocal_385, fLocal_387));
			}
			else
			{
				AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_475(iLocal_334 == 2, vLocal_372, vLocal_378), 1f, 20000, 0.25f, 0, func_121(iLocal_334 == 2, fLocal_384, fLocal_386));
			}
			AI::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_475(iLocal_334 == 2, vLocal_372, vLocal_378), 1f, 20000, 0.25f, 0, func_121(iLocal_334 == 2, 172.6813f, 142.6717f));
			AI::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		AI::CLOSE_SEQUENCE_TASK(uLocal_332);
		AI::TASK_PERFORM_SEQUENCE(*uParam0, uLocal_332);
		PED::SET_PED_KEEP_TASK(*uParam0, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_331);
}

Vector3 func_475(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

void func_476(int iParam0, var uParam1)
{
	if (Global_89538 == iParam0)
	{
		Global_89539 = Global_89538;
		Global_89540 = uParam1;
		Global_89538 = 23;
	}
}

var func_477()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_478(var uParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
}

void func_479(var uParam0)
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

void func_480()
{
	UI::CLEAR_HELP(1);
	CAM::DESTROY_ALL_CAMS(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	UI::DISPLAY_RADAR(1);
}

void func_481()
{
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_59))
	{
		OBJECT::DELETE_OBJECT(&uLocal_59);
	}
}

void func_482(var uParam0)
{
	var uVar0;
	
	uVar0 = *uParam0;
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		if (!func_430(uVar0))
		{
			ENTITY::SET_ENTITY_COLLISION(uVar0, 1, 0);
			ENTITY::SET_ENTITY_VISIBLE(uVar0, 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uVar0, 0);
		}
	}
}

void func_483()
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_106565.f_9079 || func_468(0))
	{
		if (!func_491())
		{
			iVar0 = func_490();
			if (iVar0 != -1)
			{
				if (!func_485(iVar0))
				{
					return;
				}
				GAMEPLAY::SET_BIT(&(Global_84464[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_484();
		}
	}
}

void func_484()
{
	Global_93717 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Global_71822))
		{
			switch (func_89())
			{
				case 0:
					StringCopy(&Global_71822, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71822, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71822, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71826, "", 16);
		}
		Global_93717 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Global_71822))
		{
			switch (func_89())
			{
				case 0:
					StringCopy(&Global_71822, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71822, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71822, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71826, "", 16);
		}
		Global_93717 = 0;
		GAMEPLAY::SET_BIT(&(Global_93682.f_20), 25);
	}
}

int func_485(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_484();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_84464[iParam0 /*5*/];
	iVar1 = Global_71859.f_109[iVar0 /*4*/];
	func_489(iVar1, 1);
	PLAYER::_0xC9A763D8FE87436A(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_486(&(Global_106565.f_2357.f_539), iVar1);
	if (Global_87887 == Global_93719)
	{
		Global_106565.f_9079.f_330[iVar1 /*6*/].f_1++;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_84500[iVar1 /*34*/].f_15, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			GAMEPLAY::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_106565.f_9079.f_330[iVar1 /*6*/].f_2++;
	Global_87887 = Global_93719;
	if (iParam0 == -1)
	{
		if (Global_106565.f_9079)
		{
		}
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_84464[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_84464[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_486(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_106565.f_18527[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !GAMEPLAY::IS_BIT_SET(Global_106565.f_9079.f_99.f_219[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_488(Global_106565.f_18527[iVar0], &vVar2, &fVar5))
			{
				Global_106565.f_18527[iVar0] = 318;
				func_487(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_91102[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_9 = 0f;
				Global_91102[iVar0 /*29*/].f_12 = 0f;
				Global_91102[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_10 = 0f;
				Global_91102[iVar0 /*29*/].f_13 = 0f;
				Global_91102[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_11 = 0f;
				Global_91102[iVar0 /*29*/].f_14 = 0f;
				Global_91102[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_26 = 0f;
				Global_91102[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_27 = 0f;
				Global_91102[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_91102[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_487(var uParam0)
{
	*uParam0 = -15;
}

int func_488(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_488(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_488(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_489(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87697[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87697[iParam0 /*2*/] = 0;
	}
}

int func_490()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_84464[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_491()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

void func_492(int iParam0, bool bParam1)
{
	if (PED::IS_PED_INJURED(func_494()))
	{
		return;
	}
	if (bParam1)
	{
		if (!PED::IS_PED_GROUP_MEMBER(func_494(), func_477()))
		{
			return;
		}
		if (!PED::IS_PED_INJURED(func_493()))
		{
			if (!PED::IS_PED_GROUP_MEMBER(func_493(), func_477()))
			{
				return;
			}
		}
	}
	if (Global_89538 == 23)
	{
		Global_89540 = 10;
		Global_89538 = iParam0;
	}
}

var func_493()
{
	return Global_89545;
}

int func_494()
{
	return Global_89544;
}

void func_495()
{
	if (iLocal_290 == 1)
	{
		return;
	}
	func_316();
	CONTROLS::_0x3D42B92563939375("Darts");
	iLocal_290 = 1;
}

int func_496(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_92(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

