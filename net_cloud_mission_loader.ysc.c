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
	var uLocal_61 = 10;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	struct<5> Local_96 = { 0, 0, 0, 0, 0 } ;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = -1;
	var uLocal_118 = -1;
	var uLocal_119 = 2;
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
	var uLocal_132 = 2;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	struct<88> Local_190 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_278 = 0;
	bool bLocal_279 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	struct<10> Var1;
	char cVar11[64];
	int iVar19;
	int iVar20;
	bool bVar21;
	var uVar22;
	int iVar30;
	int iVar31;
	bool bVar32;
	
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	GAMEPLAY::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	while (true)
	{
		SYSTEM::WAIT(0);
		bLocal_279 = false;
		bVar0 = func_303();
		Global_2394836.f_3 = 0;
		Global_2395284 = 0;
		if (func_302())
		{
			bLocal_279 = true;
			Var1 = { Global_2394836.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_301(Global_2394836.f_4);
			iVar20 = PLAYER::PLAYER_ID();
			bVar21 = Global_2394836.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394836.f_15 };
			}
			if (Global_2394836.f_25)
			{
				func_300(&Local_96, 1, 1);
				GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar20 /*790*/].f_39.f_18), 2);
				GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar20 /*790*/].f_39.f_18), 1);
				GAMEPLAY::CLEAR_BIT(&(Global_1589747[iVar20 /*790*/].f_39.f_18), 3);
				func_299();
				func_298();
				Global_2394836.f_25 = 0;
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_297();
			}
			else if (!func_118(&Local_96, &cVar11, &(Global_1589747[iVar20 /*790*/].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 1))
			{
				Global_2394836.f_23 = 0;
				Global_2394836.f_27 = -1;
				if (bVar0)
				{
					func_300(&Local_96, 1, 1);
					NETWORK::_0xD53ACDBEF24A46E8();
					func_117();
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
					if (Global_2394836.f_27 < 0)
					{
						Global_2394836.f_27 = 0;
					}
					else
					{
						Global_2394836.f_27++;
						if (Global_2394836.f_27 >= 10)
						{
							func_297();
							Global_2394836.f_25 = 1;
						}
					}
				}
			}
			else if (Local_96)
			{
				Global_2394836.f_23 = 1;
				Global_2394836.f_24 = 1;
				if (Global_2394836.f_27 < 0)
				{
					Global_2394836.f_27 = 0;
				}
				else
				{
					Global_2394836.f_27++;
					if (Global_2394836.f_27 >= 10)
					{
						func_297();
					}
				}
			}
			else
			{
				Global_2394836.f_26++;
				if (Global_2394836.f_26 >= 3)
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
					if (Global_2394836.f_27 < 0)
					{
						Global_2394836.f_27 = 0;
					}
					else
					{
						Global_2394836.f_27++;
						if (Global_2394836.f_27 >= 10)
						{
							func_297();
							Global_2394836.f_25 = 1;
						}
					}
				}
				else
				{
					Global_2394836.f_25 = 1;
				}
			}
		}
		if (func_116())
		{
			bLocal_279 = true;
			MemCopy(&uVar22, {Global_2394836.f_4.f_3}, 8);
			if (Global_2394836.f_23)
			{
				func_297();
			}
			else
			{
				if (Global_2394836.f_25)
				{
					func_300(&Local_96, 1, 1);
					Global_2394836.f_25 = 0;
				}
				iVar30 = 0;
				if (!func_112(&Local_96, &uVar22, &Local_190, &iVar30))
				{
					Global_2394836.f_23 = 0;
					Global_2394836.f_27 = -1;
				}
				else if (Local_96)
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 1;
					Global_2394836.f_28 = Local_190.f_65;
					Global_2394836.f_29 = Local_190.f_68;
					Global_2394836.f_30 = { Local_190.f_22 };
					Global_2394836.f_46 = { Local_190.f_38 };
					Global_2448386.f_5 = iVar30;
					Global_2398783 = { Local_190 };
				}
				else
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
				}
			}
		}
		if (func_111())
		{
			bLocal_279 = true;
			if (Global_2394836.f_23)
			{
				func_297();
			}
			else
			{
				if (Global_2394836.f_25)
				{
					func_300(&Local_96, 1, 1);
					Global_2394836.f_25 = 0;
				}
				iVar31 = Local_96.f_4;
				if (!func_5(&Local_96))
				{
					Global_2395284 = 1;
					if (iVar31 != Local_96.f_4)
					{
						if (Local_96.f_4 == 4)
						{
							iLocal_278 = (GAMEPLAY::GET_GAME_TIMER() + 50000);
						}
					}
					bVar32 = false;
					if (Local_96.f_4 == 4)
					{
						if (GAMEPLAY::GET_GAME_TIMER() > iLocal_278)
						{
							Global_2394836.f_23 = 1;
							Global_2394836.f_24 = 0;
							bVar32 = true;
						}
					}
					if (!bVar32)
					{
						Global_2394836.f_23 = 0;
						Global_2394836.f_27 = -1;
					}
				}
				else if (Local_96)
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 1;
				}
				else
				{
					Global_2394836.f_23 = 1;
					Global_2394836.f_24 = 0;
				}
			}
		}
		if (!bLocal_279)
		{
			if (func_4(PLAYER::PLAYER_ID()) || func_3(PLAYER::PLAYER_ID()))
			{
				if (!func_1(PLAYER::PLAYER_ID(), 1, 0))
				{
					SCRIPT::TERMINATE_THIS_THREAD();
				}
			}
		}
	}
}

int func_1(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_2())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_2()
{
	return -1;
}

bool func_3(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

bool func_4(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

int func_5(bool bParam0)
{
	if (!func_110())
	{
		if (func_107())
		{
			return 1;
		}
	}
	switch (bParam0->f_4)
	{
		case 0:
			if (func_106())
			{
				return 0;
			}
			if (func_105())
			{
				return 0;
			}
			func_104();
			func_103();
			func_102();
			if (func_110())
			{
				NETWORK::_0xFD75DABC0957BF33(1);
			}
			else
			{
				NETWORK::_0xFD75DABC0957BF33(0);
			}
			bParam0->f_13 = Global_2395283;
			bParam0->f_9 = 1200;
			if (bParam0->f_13 == 0)
			{
				return 1;
			}
			func_101(bParam0, 24);
			break;
		
		case 24:
			if (func_99(bParam0->f_13))
			{
				func_300(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_101(bParam0, 1);
			}
			break;
		
		case 1:
			if (NETWORK::_0x6D4CB481FAC835E8(&Global_2394898, bParam0->f_13, 1, func_98(0)))
			{
				func_101(bParam0, 2);
			}
			break;
		
		case 2:
			if (NETWORK::_0x941E5306BCD7C2C7())
			{
				if (NETWORK::_0xC87E740D9F3872CC())
				{
					*bParam0 = 0;
				}
				else
				{
					func_300(bParam0, 1, 1);
					bParam0->f_41 = NETWORK::_0xE0A6138401BCB837();
					*bParam0 = 0;
					return 1;
				}
				if (NETWORK::_0x769951E2455E2EB5() > 0)
				{
					func_101(bParam0, 4);
				}
				else
				{
					func_300(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (NETWORK::_0xEDF7F927136C224B())
			{
				func_103();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1200 + bParam0->f_13))
			{
				func_300(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				bParam0->f_7 = 0;
				while (bParam0->f_7 < bParam0->f_13)
				{
					if (bParam0->f_9 < 1218)
					{
						if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
						{
							DATAFILE::DATAFILE_DELETE();
						}
						if (DATAFILE::_0xA69AC4ADE82B57A4(bParam0->f_7))
						{
							func_6(bParam0, 1);
						}
						else if (bParam0->f_8 > 200)
						{
							func_103();
							bParam0->f_7++;
							bParam0->f_8 = 0;
						}
					}
					bParam0->f_7++;
				}
			}
			break;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	struct<88> Var5;
	var uVar93;
	bool bVar94;
	bool bVar95;
	int iVar96;
	
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar0, "mission");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar1, "gen");
	if (func_110())
	{
		if (func_97(NETWORK::_GET_ROOT_CONTENT_ID(bParam0->f_7)))
		{
			if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
			{
				DATAFILE::DATAFILE_DELETE();
			}
			return;
		}
	}
	if ((DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "type") == 0 && DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "subtype") == 7) && bParam0->f_9 < 1200)
	{
		if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
		{
			DATAFILE::DATAFILE_DELETE();
		}
		return;
	}
	if (Global_262145.f_7608)
	{
		if (DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "type") == 0)
		{
			if (DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "subtype") == 1 || DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "subtype") == 7)
			{
				if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
				{
					DATAFILE::DATAFILE_DELETE();
				}
				return;
			}
			uVar3 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "optbs");
			if (GAMEPLAY::IS_BIT_SET(uVar3, 4) || GAMEPLAY::IS_BIT_SET(uVar3, 12))
			{
				if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
				{
					DATAFILE::DATAFILE_DELETE();
				}
				return;
			}
		}
	}
	if (bParam0->f_9 == 0 && bParam1 == 0)
	{
		func_96();
		Global_794709.f_2 = 0;
		Global_794709.f_123068 = 0;
		func_95();
		iVar4 = 0;
		while (iVar4 < 13)
		{
			Global_794709.f_123083[iVar4] = 0;
			Global_794709.f_123069[iVar4] = 0;
			iVar4++;
		}
		if (func_92())
		{
			func_91(1);
			func_91(0);
			func_89(1);
		}
	}
	Var5.f_65 = -1;
	Var5.f_66 = -1;
	Var5.f_67 = 2;
	Global_794709.f_4[bParam0->f_9 /*88*/] = { Var5 };
	if (!func_110())
	{
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_5 = NETWORK::_0x1D610EB0FEA716D9(bParam0->f_7, 0);
		Global_794709.f_4[bParam0->f_9 /*88*/].f_67 = func_88(bParam0->f_7);
		Global_794709.f_4[bParam0->f_9 /*88*/].f_66 = NETWORK::_0x1D610EB0FEA716D9(bParam0->f_7, Global_794709.f_4[bParam0->f_9 /*88*/].f_67);
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_6 = NETWORK::_0x3054F114121C21EA(bParam0->f_7);
	}
	Global_794709.f_4[bParam0->f_9 /*88*/].f_56 = { func_87(iVar2) };
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar2, "optbs") == 2)
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_76 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "optbs");
	}
	GAMEPLAY::CLEAR_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 15);
	GAMEPLAY::CLEAR_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 18);
	GAMEPLAY::CLEAR_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 19);
	GAMEPLAY::CLEAR_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 29);
	GAMEPLAY::CLEAR_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 28);
	Global_794709.f_4[bParam0->f_9 /*88*/].f_59 = { func_86(iVar2, "cam") };
	Global_794709.f_4[bParam0->f_9 /*88*/].f_62 = { func_85(iVar2) };
	if (!func_110())
	{
		if (NETWORK::_FACEBOOK_SET_HEIST_COMPLETE(NETWORK::_0x3054F114121C21EA(bParam0->f_7)))
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_54 = NETWORK::_0xBAF6BABF9E7CCC13(bParam0->f_7);
		}
		else
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_54 = -1;
		}
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar2, "mgrk") == 2)
	{
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_8 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "mgrk");
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar2, "mght") == 2)
	{
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_9 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "mght");
	}
	Global_794709.f_107189[bParam0->f_9 /*13*/].f_11 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "cncmbs");
	Global_794709.f_4[bParam0->f_9 /*88*/].f_69 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "min");
	Global_794709.f_4[bParam0->f_9 /*88*/].f_71 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "num");
	if (Global_794709.f_4[bParam0->f_9 /*88*/].f_71 == -1)
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_71 = 30;
	}
	StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_22), NETWORK::_GET_CONTENT_DESCRIPTION_HASH(bParam0->f_7), 64);
	Global_794709.f_4[bParam0->f_9 /*88*/].f_65 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "type");
	if (func_110())
	{
		StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_6), func_84(), 64);
	}
	else
	{
		StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_6), NETWORK::_0x584770794D758C18(bParam0->f_7), 64);
	}
	Global_794709.f_4[bParam0->f_9 /*88*/].f_70 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "rank");
	Global_794709.f_107189[bParam0->f_9 /*13*/] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "tnum");
	if (!func_110())
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_73 = func_83(NETWORK::_0x759299C5BB31D2A9(bParam0->f_7, 0), NETWORK::_0x87E5C46C187FE0AE(bParam0->f_7, 0));
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_4 = NETWORK::_0x87E5C46C187FE0AE(bParam0->f_7, 0);
	}
	Global_794709.f_4[bParam0->f_9 /*88*/].f_75 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "charcon");
	Global_794709.f_4[bParam0->f_9 /*88*/].f_78 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "ltm");
	StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/]), NETWORK::_GET_ROOT_CONTENT_ID(bParam0->f_7), 24);
	uVar93 = GAMEPLAY::GET_HASH_KEY(&(Global_794709.f_4[bParam0->f_9 /*88*/]));
	Global_794709.f_107189[bParam0->f_9 /*13*/].f_3 = uVar93;
	if (Global_794709.f_4[bParam0->f_9 /*88*/].f_65 == 6 && !bParam1)
	{
		if (Global_958841.f_684 < 85)
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_68 = Global_958841.f_684;
			Global_958841[Global_958841.f_684 /*3*/] = { func_86(iVar2, "area") };
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar2, "rad") == 2)
			{
				Global_958841.f_512[Global_958841.f_684] = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "rad"));
			}
			else
			{
				Global_958841.f_512[Global_958841.f_684] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar2, "rad");
			}
			Global_958841.f_256[Global_958841.f_684 /*3*/] = { Global_794709.f_4[bParam0->f_9 /*88*/].f_56 };
			Global_958841.f_598[Global_958841.f_684] = uVar93;
			Global_794709.f_4[bParam0->f_9 /*88*/].f_56 = { Global_794709.f_4[bParam0->f_9 /*88*/].f_59 };
			Global_958841.f_684++;
		}
	}
	else
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_68 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "subtype");
		Global_794709.f_4[bParam0->f_9 /*88*/].f_80 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "adverm");
	}
	func_82(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, &(Global_794709.f_4[bParam0->f_9 /*88*/].f_71), &(Global_794709.f_4[bParam0->f_9 /*88*/].f_69));
	if (func_110())
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(NETWORK::_GET_ROOT_CONTENT_ID(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	GAMEPLAY::SET_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 13);
	if (!func_110())
	{
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_1 = GAMEPLAY::GET_HASH_KEY(NETWORK::_0xBF09786A7FCAB582(bParam0->f_7));
	}
	Global_794709.f_107189[bParam0->f_9 /*13*/].f_2 = func_81(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, 1);
	if (func_80(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1))
	{
		if (Global_794709.f_4[bParam0->f_9 /*88*/].f_75 == 0)
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_75 = 1;
		}
	}
	bVar94 = func_79(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1);
	bVar95 = func_78(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1);
	iVar96 = func_77(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1);
	if (iVar96 != -1)
	{
		Global_1684943[iVar96] = bParam0->f_9;
	}
	if (((Global_794709.f_4[bParam0->f_9 /*88*/].f_65 < 13 && !bParam1) && !bVar94) && !bVar95)
	{
		if (Global_794709.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
		{
			Global_794709.f_123069[Global_794709.f_4[bParam0->f_9 /*88*/].f_65]++;
			if (func_76(bParam0->f_9))
			{
				Global_794709.f_123069[7]++;
			}
			else if (func_75(bParam0->f_9))
			{
				Global_794709.f_123069[4]++;
			}
			else if (func_74(bParam0->f_9))
			{
				Global_794709.f_123069[10]++;
			}
			else if (func_73(bParam0->f_9))
			{
				Global_794709.f_123069[12]++;
			}
		}
	}
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
	if (!func_110())
	{
		if (bVar94 || bVar95)
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_69 = Global_794709.f_4[bParam0->f_9 /*88*/].f_71;
		}
		if ((Global_794709.f_123068 < 5 && Global_794709.f_4[bParam0->f_9 /*88*/].f_65 == 0) && Global_794709.f_4[bParam0->f_9 /*88*/].f_68 == 1)
		{
			Global_794709.f_107189[bParam0->f_9 /*13*/].f_10 = Global_794709.f_123068;
			StringCopy(&(Global_794709.f_123037[Global_794709.f_123068 /*6*/]), NETWORK::_0xBF09786A7FCAB582(bParam0->f_7), 24);
			Global_794709.f_123068++;
		}
		func_58(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, &(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), &(Global_794709.f_4[bParam0->f_9 /*88*/].f_77), Global_794709.f_4[bParam0->f_9 /*88*/].f_80);
		func_54(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, bParam0->f_9);
		if (bParam1)
		{
			if (NETWORK::_0x993CBE59D350D225(bParam0->f_7))
			{
				GAMEPLAY::SET_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 14);
			}
		}
		else if (!bVar94 && !bVar95)
		{
			if (func_32(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, Global_794709.f_4[bParam0->f_9 /*88*/].f_80))
			{
				Global_794709.f_123069[11]++;
			}
			if (NETWORK::_0x993CBE59D350D225(bParam0->f_7))
			{
				GAMEPLAY::SET_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 14);
				if (GAMEPLAY::IS_BIT_SET(Global_794709.f_4[bParam0->f_9 /*88*/].f_76, 1) || Global_794709.f_4[bParam0->f_9 /*88*/].f_68 == 2)
				{
					Global_794709.f_123069[9]++;
				}
				if (Global_794709.f_4[bParam0->f_9 /*88*/].f_70 <= 1000)
				{
					if (Global_794709.f_4[bParam0->f_9 /*88*/].f_65 < 13)
					{
						Global_794709.f_123083[Global_794709.f_4[bParam0->f_9 /*88*/].f_65]++;
					}
				}
				Global_794709.f_107189[bParam0->f_9 /*13*/].f_7 = unk_0xC3470AC0BD03A920(bParam0->f_7);
			}
		}
	}
	if ((!bParam1 && !bVar94) && !bVar95)
	{
		if (func_92())
		{
			func_30(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, GAMEPLAY::IS_BIT_SET(Global_794709.f_4[bParam0->f_9 /*88*/].f_76, 14), Global_794709.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_28(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, Global_794709.f_4[bParam0->f_9 /*88*/].f_70, 0);
			func_26(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, Global_794709.f_4[bParam0->f_9 /*88*/].f_75, Global_794709.f_4[bParam0->f_9 /*88*/].f_70, GAMEPLAY::IS_BIT_SET(Global_794709.f_4[bParam0->f_9 /*88*/].f_76, 14));
			func_7(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, Global_794709.f_4[bParam0->f_9 /*88*/].f_68, Global_794709.f_4[bParam0->f_9 /*88*/].f_75, Global_794709.f_4[bParam0->f_9 /*88*/].f_70);
		}
	}
	if (Global_794709.f_4[bParam0->f_9 /*88*/].f_65 == 6)
	{
		Global_959526[0 /*41*/]++;
	}
	bParam0->f_9++;
	Global_794709.f_2++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
}

void func_7(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_14(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_13(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_8(iVar1, 1);
}

void func_8(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_11(iParam0))
	{
		func_10(iParam0, iVar0);
	}
	else
	{
		func_9(iParam0, iVar0);
	}
}

void func_9(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1378819 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1378821 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1378821 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1378822 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1378823 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1378824 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1378825 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1378826 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1378827 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1378828 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1378829 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1378830 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1378831 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1378832 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1378833 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1378834 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1378835 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_10(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_11(int iParam0)
{
	if (Global_1378818)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_12(var uParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = uParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_13(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return joaat("mpply_total_contact_0");
		
		case 19:
			return joaat("mpply_total_contact_1");
		
		case 86:
			return joaat("mpply_total_contact_2");
		
		case 20:
			return joaat("mpply_total_contact_3");
		
		case 31:
			return joaat("mpply_total_contact_4");
		
		case 2:
			return joaat("mpply_total_contact_5");
		
		case 18:
			return joaat("mpply_total_contact_6");
		
		default:
	}
	return -1;
}

int func_14(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		return 0;
	}
	if (iParam1 != 2)
	{
		return 0;
	}
	if (func_20(PLAYER::PLAYER_ID()) < iParam4)
	{
		return 0;
	}
	iVar0 = func_15(iParam2);
	*uParam3 = 145;
	if (iVar0 != 0)
	{
		*uParam3 = iVar0;
	}
	if (*uParam3 == 145)
	{
		return 0;
	}
	return 1;
}

int func_15(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam0 > 0 && iParam0 <= 200)
	{
		if (iParam0 > 90)
		{
			return 0;
		}
		switch (iParam0)
		{
			case 10:
				return 12;
			
			case 17:
				return 19;
			
			case 18:
				return 20;
			
			case 28:
				return 31;
			
			case 75:
				return 12;
			
			default:
		}
		return iParam0;
	}
	iVar0 = func_16(iParam0);
	if (iVar0 == 145)
	{
		return 0;
	}
	return iVar0;
}

int func_16(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 145;
	}
	iVar0 = 0;
	iVar1 = 145;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = func_18(iVar0);
		if (iParam0 == func_17(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 145;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 131908481;
		
		case 19:
			return -366822323;
		
		case 12:
			return -1917614010;
		
		case 31:
			return -328739832;
		
		case 20:
			return -1984782235;
		
		case 18:
			return -2105450473;
		
		case 2:
			return 657970604;
		
		case 76:
			return 612082356;
		
		case 22:
			return 676712040;
		
		case 53:
			return 1603401902;
		
		case 34:
			return 1526580161;
		
		case 152:
			return 1388694673;
		
		case 85:
			return -874891575;
		
		case 84:
			return 1085494823;
		
		case 0:
			return 1435709240;
		
		case 1:
			return 1153582740;
		
		case 153:
			return 1548197805;
		
		case 151:
			return 1252576609;
		
		case 14:
			return 356144869;
		
		case 15:
			return 1518150745;
		
		case 24:
			return 2110802340;
		
		case 30:
			return -1309242723;
		
		case 46:
			return 1528098484;
		
		case 47:
			return -1084633958;
		
		case 54:
			return joaat("hunter");
		
		case 51:
			return 1922837891;
		
		case 60:
			return 1604857004;
		
		case 62:
			return 451094880;
		
		case 66:
			return 1028278171;
		
		case 69:
			return -1120398581;
		
		case 154:
			return -1034857696;
		
		case 82:
			return -867869163;
		
		case 145:
			return 0;
		
		default:
	}
	return 0;
}

int func_18(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	uVar1 = func_19(iVar0);
	return uVar1;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 86;
		
		case 1:
			return 19;
		
		case 2:
			return 12;
		
		case 3:
			return 31;
		
		case 4:
			return 20;
		
		case 5:
			return 18;
		
		case 6:
			return 2;
		
		case 7:
			return 76;
		
		case 8:
			return 22;
		
		case 9:
			return 53;
		
		case 10:
			return 34;
		
		case 11:
			return 152;
		
		case 12:
			return 85;
		
		case 13:
			return 84;
		
		case 14:
			return 0;
		
		case 15:
			return 1;
		
		case 16:
			return 153;
		
		case 17:
			return 151;
		
		case 18:
			return 14;
		
		case 19:
			return 15;
		
		case 20:
			return 24;
		
		case 21:
			return 30;
		
		case 22:
			return 46;
		
		case 23:
			return 47;
		
		case 24:
			return 54;
		
		case 25:
			return 51;
		
		case 26:
			return 60;
		
		case 27:
			return 62;
		
		case 28:
			return 66;
		
		case 29:
			return 69;
		
		case 30:
			return 154;
		
		case 31:
			return 82;
		
		default:
	}
	return 19;
}

int func_20(int iParam0)
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_21(iVar0, 0);
}

int func_21(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_287850[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_287850[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_22(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1378945[func_24(-1)];
			}
			else if (func_23(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_24(-1)];
	}
	return 0;
}

int func_23(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_2437022.f_1, iParam0);
	}
	return 1;
}

int func_24(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312736;
}

void func_26(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		return;
	}
	if (!func_14(iParam0, iParam1, iParam2, &iVar0, iParam3))
	{
		return;
	}
	iVar1 = func_27(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	func_8(iVar1, 1);
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return joaat("mpply_unique_contact_0");
		
		case 19:
			return joaat("mpply_unique_contact_1");
		
		case 86:
			return joaat("mpply_unique_contact_2");
		
		case 20:
			return joaat("mpply_unique_contact_3");
		
		case 31:
			return joaat("mpply_unique_contact_4");
		
		case 2:
			return joaat("mpply_unique_contact_5");
		
		case 18:
			return joaat("mpply_unique_contact_6");
		
		default:
	}
	return -1;
}

void func_28(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_92())
	{
		if (iParam0 == 0)
		{
			if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
			{
				if (func_20(PLAYER::PLAYER_ID()) < iParam2)
				{
					return;
				}
			}
		}
		iVar0 = func_29(iParam0, iParam1, bParam3);
		if (iVar0 == -1)
		{
			return;
		}
		func_8(iVar0, 1);
	}
}

int func_29(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return joaat("mpply_available_races_v");
			}
			else
			{
				return joaat("mpply_available_races");
			}
			break;
		
		case 1:
			if (bParam2)
			{
				return joaat("mpply_available_dms_v");
			}
			else
			{
				return joaat("mpply_available_dms");
			}
			break;
		
		case 8:
			if (bParam2)
			{
				return joaat("mpply_available_paras_v");
			}
			else
			{
				return joaat("mpply_available_paras");
			}
			break;
		
		case 3:
			if (bParam2)
			{
				return joaat("mpply_available_survival_v");
			}
			else
			{
				return joaat("mpply_available_survival");
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return joaat("mpply_available_ctf_v");
					}
					else
					{
						return joaat("mpply_available_ctf");
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return joaat("mpply_available_lts_v");
					}
					else
					{
						return joaat("mpply_available_lts");
					}
					break;
				
				case 4:
					if (bParam2)
					{
						return joaat("mpply_available_versus_v");
					}
					else
					{
						return joaat("mpply_available_versus");
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return -708118870;
					}
					else
					{
						return 978181703;
					}
					break;
				
				case 7:
					if (bParam2)
					{
						return 348170426;
					}
					else
					{
						return 937781072;
					}
					break;
			}
			if (bParam2)
			{
				return joaat("mpply_available_missions_v");
			}
			else
			{
				return joaat("mpply_available_missions");
			}
			break;
	}
	return -1;
}

void func_30(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_92())
	{
		return;
	}
	if (!bParam2)
	{
		return;
	}
	if (iParam0 == 0)
	{
		if (((iParam1 != 6 && iParam1 != 5) && iParam1 != 4) && iParam1 != 9)
		{
			if (func_20(PLAYER::PLAYER_ID()) < iParam3)
			{
				return;
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam3 >= 9999)
		{
			return;
		}
	}
	iVar0 = func_31(iParam0, iParam1, bParam4);
	if (iVar0 == -1)
	{
		return;
	}
	func_8(iVar0, 1);
}

int func_31(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 2:
			if (bParam2)
			{
				return joaat("mpply_unique_races_v");
			}
			else
			{
				return joaat("mpply_unique_races");
			}
			break;
		
		case 1:
			if (bParam2)
			{
				return joaat("mpply_unique_dms_v");
			}
			else
			{
				return joaat("mpply_unique_dms");
			}
			break;
		
		case 8:
			if (bParam2)
			{
				return joaat("mpply_unique_paras_v");
			}
			else
			{
				return joaat("mpply_unique_paras");
			}
			break;
		
		case 3:
			if (bParam2)
			{
				return joaat("mpply_unique_survival_v");
			}
			else
			{
				return joaat("mpply_unique_survival");
			}
			break;
		
		case 0:
			switch (iParam1)
			{
				case 6:
					if (bParam2)
					{
						return joaat("mpply_unique_ctf_v");
					}
					else
					{
						return joaat("mpply_unique_ctf");
					}
					break;
				
				case 5:
					if (bParam2)
					{
						return joaat("mpply_unique_lts_v");
					}
					else
					{
						return joaat("mpply_unique_lts");
					}
					break;
				
				case 4:
					if (bParam2)
					{
						return joaat("mpply_unique_versus_v");
					}
					else
					{
						return joaat("mpply_unique_versus");
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return -548839670;
					}
					else
					{
						return -1776238337;
					}
					break;
				
				case 7:
					if (bParam2)
					{
						return -1054420012;
					}
					else
					{
						return 280555198;
					}
					break;
			}
			if (bParam2)
			{
				return joaat("mpply_unique_missions_v");
			}
			else
			{
				return joaat("mpply_unique_missions");
			}
			break;
	}
	return -1;
}

int func_32(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		return 1;
	}
	if ((((((((((((((((((((func_53(iParam0) || func_52(iParam0)) || func_51(iParam0)) || func_50(iParam0, 1)) || func_49(iParam0)) || func_48(iParam0)) || func_47(iParam0)) || func_46(iParam0)) || func_45(iParam0)) || func_44(iParam0)) || func_43(iParam0)) || func_42(iParam0)) || func_41(iParam0)) || func_40(iParam0)) || func_39(iParam0)) || func_38(iParam0)) || func_37(iParam0)) || func_36(iParam0)) || func_35(iParam0)) || func_34(iParam1)) || func_33(iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_33(int iParam0)
{
	return iParam0 == 65;
}

bool func_34(int iParam0)
{
	return iParam0 == 57;
}

int func_35(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9108[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_36(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9141[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_37(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9130[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9119[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_39(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (iParam0 == Global_262145.f_9095[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9084[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_41(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9073[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_42(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_9062[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8965[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8987[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8976[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8954[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_47(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8943[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_48(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_262145.f_8932[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_49(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8898[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_50(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_152990 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8906[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_51(int iParam0)
{
	if ((((iParam0 == Global_262145.f_8893 || iParam0 == Global_262145.f_8894) || iParam0 == Global_262145.f_8895) || iParam0 == Global_262145.f_8896) || iParam0 == Global_262145.f_8897)
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0)
{
	if ((((iParam0 == Global_262145.f_8888 || iParam0 == Global_262145.f_8889) || iParam0 == Global_262145.f_8890) || iParam0 == Global_262145.f_8891) || iParam0 == Global_262145.f_8892)
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_8881 || iParam0 == Global_262145.f_8882) || iParam0 == Global_262145.f_8883) || iParam0 == Global_262145.f_8884) || iParam0 == Global_262145.f_8885) || iParam0 == Global_262145.f_8886) || iParam0 == Global_262145.f_8887)
	{
		return 1;
	}
	return 0;
}

void func_54(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 >= 1200)
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_8914[iVar0])
		{
			Global_794709.f_123024[0 /*11*/][iVar0] = iParam1;
			Global_794709.f_4[iParam1 /*88*/].f_56 = { func_57(0, iVar0) };
			Global_794709.f_4[iParam1 /*88*/].f_59 = { func_56(0, iVar0) };
			Global_794709.f_4[iParam1 /*88*/].f_62 = { func_55(0, iVar0) };
			Global_794709.f_107189[iParam1 /*13*/].f_12 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794709.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794709.f_4[iParam1 /*88*/].f_73 = -1;
			if (Global_794709.f_123024[0 /*11*/].f_9 <= iVar0)
			{
				Global_794709.f_123024[0 /*11*/].f_9 = iVar0 + 1;
			}
		}
		else if (iParam0 == Global_262145.f_8923[iVar0])
		{
			Global_794709.f_107189[iParam1 /*13*/].f_12 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_68 = 8;
			Global_794709.f_4[iParam1 /*88*/].f_75 = 0;
			Global_794709.f_4[iParam1 /*88*/].f_78 = 16777215;
			Global_794709.f_4[iParam1 /*88*/].f_73 = -1;
		}
		iVar0++;
	}
}

Vector3 func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -15.6168f, 0.1008f, -149.8604f;
				
				case 1:
					return 3.5927f, 0.1008f, 156.3615f;
				
				case 2:
					return 3.4157f, 0.112f, 16.4938f;
				
				case 3:
					return 5.3856f, 0f, 112.9827f;
				
				case 4:
					return 4.2705f, 0f, 19.1749f;
				
				case 5:
					return -5.2724f, 0f, 42.8827f;
				
				case 6:
					return 12.4243f, 0f, 57.4707f;
				
				case 7:
					return -15.6168f, 0.1008f, -149.8604f;
				
				default:
			}
			return 2.8273f, 0f, 0.0625f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_56(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -209.1766f, -1305.476f, 34.7404f;
				
				case 1:
					return -1601.532f, -1039.506f, 17.2286f;
				
				case 2:
					return -8.6889f, -1727.83f, 30.3896f;
				
				case 3:
					return 1997.496f, 3054.69f, 54.605f;
				
				case 4:
					return 967.5151f, -1735.46f, 32.0426f;
				
				case 5:
					return 779.6009f, -1424.604f, 32.9774f;
				
				case 6:
					return -331.129f, -1492.046f, 30.3228f;
				
				case 7:
					return -209.1766f, -1305.476f, 34.7404f;
				
				default:
			}
			return -61.784f, -1538.702f, 43.8935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_57(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -210.4709f, -1306.318f, 30.336f;
				
				case 1:
					return -1598.327f, -1040.538f, 12.0183f;
				
				case 2:
					return -21.2711f, -1732.453f, 28.304f;
				
				case 3:
					return 1992.482f, 3058.078f, 46.0576f;
				
				case 4:
					return 960.3523f, -1745.844f, 30.2208f;
				
				case 5:
					return 775.7347f, -1367.343f, 25.5669f;
				
				case 6:
					return -321.3307f, -1495.598f, 29.6536f;
				
				case 7:
					return -210.4709f, -1306.318f, 30.336f;
				
				default:
			}
			return -210.4709f, -1306.318f, 30.336f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_58(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_53(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam1, 15);
	}
	else if (func_52(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam1, 18);
	}
	else if (func_51(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam1, 19);
	}
	else if (func_49(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam1, 29);
	}
	else if (func_50(iParam0, 1))
	{
		GAMEPLAY::SET_BIT(uParam1, 28);
	}
	else if (func_48(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 0);
	}
	else if (func_47(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 1);
	}
	else if (func_46(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 2);
	}
	else if (func_45(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 3);
	}
	else if (func_44(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 4);
	}
	else if (func_43(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 5);
	}
	else if (func_42(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 6);
	}
	else if (func_41(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 7);
	}
	else if (func_40(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 8);
	}
	else if (func_39(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 9);
	}
	else if (func_35(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 10);
	}
	else if (func_38(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 11);
	}
	else if (func_37(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 12);
	}
	else if (func_72(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 13);
	}
	else if (func_36(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 14);
	}
	else if (func_71(iParam0))
	{
		GAMEPLAY::SET_BIT(uParam2, 22);
	}
	else if (func_70(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 16);
	}
	else if (func_69(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 17);
	}
	else if (func_68(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 20);
	}
	else if (func_67(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 21);
	}
	else if (func_71(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 22);
	}
	else if (func_66(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 23);
	}
	else if (func_65(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 24);
	}
	else if (func_64(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 25);
	}
	else if (func_63(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 26);
	}
	else if (func_62(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 27);
	}
	else if (func_61(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 28);
	}
	else if (func_60(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 29);
	}
	else if (func_59(iParam3))
	{
		GAMEPLAY::SET_BIT(uParam2, 30);
	}
}

bool func_59(int iParam0)
{
	return iParam0 == 17;
}

bool func_60(int iParam0)
{
	return iParam0 == 16;
}

bool func_61(int iParam0)
{
	return iParam0 == 15;
}

bool func_62(int iParam0)
{
	return iParam0 == 14;
}

bool func_63(int iParam0)
{
	return iParam0 == 13;
}

bool func_64(int iParam0)
{
	return iParam0 == 12;
}

bool func_65(int iParam0)
{
	return iParam0 == 11;
}

bool func_66(int iParam0)
{
	return iParam0 == 9;
}

bool func_67(int iParam0)
{
	return (iParam0 == 1 || iParam0 == 67);
}

bool func_68(int iParam0)
{
	return iParam0 == 6;
}

bool func_69(int iParam0)
{
	return iParam0 == 4;
}

bool func_70(int iParam0)
{
	return iParam0 == 2;
}

bool func_71(int iParam0)
{
	return iParam0 == 8;
}

bool func_72(int iParam0)
{
	return iParam0 == 3;
}

bool func_73(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iParam0 /*88*/].f_76, 24);
}

bool func_74(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iParam0 /*88*/].f_76, 3);
}

bool func_75(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iParam0 /*88*/].f_76, 10);
}

bool func_76(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_794709.f_4[iParam0 /*88*/].f_76, 7);
}

int func_77(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5002[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_262145.f_6340[iVar1] == 252)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5785[iVar1])
				{
					if (iParam0 == Global_262145.f_5019[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_262145.f_6340[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5785[iVar1])
				{
					if (iParam0 == Global_262145.f_5019[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_80(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_262145.f_6340[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5785[iVar1])
				{
					if (iParam0 == Global_262145.f_5019[iVar1 /*51*/][iVar0])
					{
						return 1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_81(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (((Global_262145.f_6340[iVar1] == 202 || Global_262145.f_6340[iVar1] == 203) || Global_262145.f_6340[iVar1] == 204) || (iParam1 && (((((Global_262145.f_6340[iVar1] == 224 || Global_262145.f_6340[iVar1] == 223) || Global_262145.f_6340[iVar1] == 232) || Global_262145.f_6340[iVar1] == 245) || Global_262145.f_6340[iVar1] == 246) || Global_262145.f_6340[iVar1] == 251)))
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5785[iVar1])
				{
					if (iParam0 == Global_262145.f_5019[iVar1 /*51*/][iVar0])
					{
						return iVar1;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_82(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == 1)
	{
		if (*uParam2 < 2)
		{
			*uParam2 = 2;
		}
	}
	else if (*uParam2 < 1)
	{
		*uParam2 = 1;
	}
	if (*uParam1 < *uParam2)
	{
		*uParam1 = *uParam2;
	}
}

int func_83(float fParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return -1;
	}
	iVar0 = SYSTEM::ROUND((fParam0 * 100f));
	if (iVar0 < 0)
	{
		iVar0 = -1;
	}
	return iVar0;
}

var func_84()
{
	return UI::_GET_LABEL_TEXT("CREATOR_RSC");
}

Vector3 func_85(int iParam0)
{
	vector3 vVar0;
	
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camp") == 3)
	{
		vVar0.x = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "camp");
	}
	else if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camp") == 2)
	{
		vVar0.x = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "camp"));
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camh") == 3)
	{
		vVar0.z = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "camh");
	}
	else if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "camh") == 2)
	{
		vVar0.z = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "camh"));
	}
	return vVar0;
}

Vector3 func_86(int iParam0, char* sParam1)
{
	vector3 vVar0;
	var uVar3;
	
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, sParam1) == 5)
	{
		vVar0 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iParam0, sParam1) };
	}
	else if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, sParam1) == 6)
	{
		uVar3 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, sParam1);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar3, "x") == 2)
		{
			vVar0.x = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar3, "x"));
		}
		else
		{
			vVar0.x = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar3, "x");
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar3, "y") == 2)
		{
			vVar0.y = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar3, "y"));
		}
		else
		{
			vVar0.y = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar3, "y");
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar3, "z") == 2)
		{
			vVar0.z = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar3, "z"));
		}
		else
		{
			vVar0.z = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar3, "z");
		}
	}
	return vVar0;
}

Vector3 func_87(int iParam0)
{
	vector3 vVar0;
	
	if (iParam0 == 0)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { func_86(iParam0, "start") };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, -2233.327f, 2436.134f, -14.65155f, -2229.56f, 2399.576f, 11.99761f, 24f, 0, 1))
	{
		vVar0 = { -2303.54f, 2428.09f, 2.02f };
	}
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0, 603.6218f, 5573.046f, 694.484f, 594.2379f, 5542.792f, 727.479f, 33.5f, 0, 1))
	{
		vVar0 = { 502.6f, 5537.06f, 777.05f };
	}
	return vVar0;
}

int func_88(int iParam0)
{
	if (NETWORK::_0x32DD916F3F7C9672(iParam0))
	{
		return 2;
	}
	else if (NETWORK::_0x7FCC39C46C3C03BD(iParam0))
	{
		return 1;
	}
	return 1;
}

void func_89(int iParam0)
{
	func_90(joaat("mpply_big_feed_init"), iParam0);
}

void func_90(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, uParam1, 1);
	}
}

void func_91(bool bParam0)
{
	if (!func_92())
	{
		return;
	}
	if (bParam0)
	{
		func_10(joaat("mpply_unique_races"), 0);
		func_10(joaat("mpply_unique_dms"), 0);
		func_10(joaat("mpply_unique_paras"), 0);
		func_10(joaat("mpply_unique_survival"), 0);
		func_10(joaat("mpply_unique_ctf"), 0);
		func_10(joaat("mpply_unique_lts"), 0);
		func_10(joaat("mpply_unique_versus"), 0);
		func_10(joaat("mpply_unique_missions"), 0);
		func_10(280555198, 0);
		func_10(-1776238337, 0);
		func_10(joaat("mpply_available_races"), 0);
		func_10(joaat("mpply_available_dms"), 0);
		func_10(joaat("mpply_available_paras"), 0);
		func_10(joaat("mpply_available_survival"), 0);
		func_10(joaat("mpply_available_lts"), 0);
		func_10(joaat("mpply_available_ctf"), 0);
		func_10(joaat("mpply_available_versus"), 0);
		func_10(joaat("mpply_available_missions"), 0);
		func_10(937781072, 0);
		func_10(978181703, 0);
		func_10(joaat("mpply_unique_contact_0"), 0);
		func_10(joaat("mpply_unique_contact_1"), 0);
		func_10(joaat("mpply_unique_contact_2"), 0);
		func_10(joaat("mpply_unique_contact_3"), 0);
		func_10(joaat("mpply_unique_contact_4"), 0);
		func_10(joaat("mpply_unique_contact_5"), 0);
		func_10(joaat("mpply_unique_contact_6"), 0);
		func_10(joaat("mpply_total_contact_0"), 0);
		func_10(joaat("mpply_total_contact_1"), 0);
		func_10(joaat("mpply_total_contact_2"), 0);
		func_10(joaat("mpply_total_contact_3"), 0);
		func_10(joaat("mpply_total_contact_4"), 0);
		func_10(joaat("mpply_total_contact_5"), 0);
		func_10(joaat("mpply_total_contact_6"), 0);
	}
	else
	{
		func_10(joaat("mpply_unique_races_v"), 0);
		func_10(joaat("mpply_unique_dms_v"), 0);
		func_10(joaat("mpply_unique_paras_v"), 0);
		func_10(joaat("mpply_unique_survival_v"), 0);
		func_10(joaat("mpply_unique_ctf_v"), 0);
		func_10(joaat("mpply_unique_lts_v"), 0);
		func_10(joaat("mpply_unique_versus_v"), 0);
		func_10(joaat("mpply_unique_missions_v"), 0);
		func_10(-1054420012, 0);
		func_10(-548839670, 0);
		func_10(joaat("mpply_available_races_v"), 0);
		func_10(joaat("mpply_available_dms_v"), 0);
		func_10(joaat("mpply_available_paras_v"), 0);
		func_10(joaat("mpply_available_survival_v"), 0);
		func_10(joaat("mpply_available_lts_v"), 0);
		func_10(joaat("mpply_available_ctf_v"), 0);
		func_10(joaat("mpply_available_versus_v"), 0);
		func_10(joaat("mpply_available_missions_v"), 0);
		func_10(348170426, 0);
		func_10(-708118870, 0);
	}
}

int func_92()
{
	if (func_94() && func_93(0))
	{
		return 1;
	}
	return 0;
}

var func_93(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_94()
{
	return func_93(func_25() + 1);
}

void func_95()
{
	int iVar0;
	
	Global_958841.f_684 = 0;
	iVar0 = 0;
	while (iVar0 <= 84)
	{
		Global_958841[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_958841.f_256[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_958841.f_512[iVar0] = 0f;
		iVar0++;
	}
}

void func_96()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Global_794709.f_123024[iVar0 /*11*/].f_9 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Global_794709.f_123024[iVar1 /*11*/][iVar0] = 0;
			iVar0++;
		}
		iVar1++;
	}
}

int func_97(var uParam0)
{
	if ((((((((((((((((GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "QwBYuaosIk-ZB9sAs4T6vQ") || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "O8SUrTkPW0G7NVh-c95lPQ")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "Cdgvsa-E8katW71P6VWhQg")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "W3U0oyo5okGvED-f7CPzhg")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "7CpnaZYqMEKxxbW2rbp33A")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "d_cLbuKs0kyVu6VWc3tfQg")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "hCC18F4SuU254v5vlgPRmA")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "tSm64WIuK0yqti6Po8oQCg")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "5mwusUtO5E6AVvnUrgFZcg")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "_dFdLIICm0OaNP3ewdkmqA")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "cfWCTF0bH0W0JmM3kP3TPg")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "JVlkjgsbUk6pHcrN43FPgQ")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "AdOvPsvI30yZ6h9HpjzcwA")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "te4f3O-vVUOkF3YAbnzD2A")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "8jRfzi-oHEGHiJEQLkbZ_w")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "gYOgjaTS7EedRGFuBasioQ")) || GAMEPLAY::ARE_STRINGS_EQUAL(uParam0, "OGuQ53X7G0qx-jteU3gBkg"))
	{
		return 1;
	}
	return 0;
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "gta5mission";
		
		case 1:
			return "playlist";
		
		case 2:
			return "lifeinvaderpost";
		
		case 3:
			return "photo";
		
		case 4:
			return "challenge";
		
		default:
	}
	return "gta5mission";
}

int func_99(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[64];
	int iVar67;
	
	if (Global_262145.f_3767 == 1)
	{
		return 0;
	}
	if (Global_786550 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		iVar67 = 0;
		iVar1 = 0;
		while (iVar1 < Global_786550)
		{
			if (iVar1 < 35)
			{
				if (iVar67 == 0)
				{
					if (Global_786550.f_3082[iVar1 /*13*/].f_1 == GAMEPLAY::GET_HASH_KEY(&(Global_2394898[iVar0 /*6*/])))
					{
						iVar67 = 1;
						iVar2[iVar0] = iVar1;
					}
				}
			}
			iVar1++;
		}
		if (iVar67 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		Global_794709.f_4[(1200 + iVar0) /*88*/] = { Global_786550.f_1[iVar2[iVar0] /*88*/] };
		Global_794709.f_107189[(1200 + iVar0) /*13*/] = { Global_786550.f_3082[iVar2[iVar0] /*13*/] };
		iVar1 = 0;
		while (iVar1 < 8)
		{
			Global_1655047.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786550.f_3538[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_100(1);
	return 1;
}

void func_100(int iParam0)
{
	Global_1655047.f_1784 = iParam0;
}

void func_101(bool bParam0, int iParam1)
{
	bParam0->f_4 = iParam1;
}

void func_102()
{
	struct<88> Var0;
	int iVar88;
	
	Var0.f_65 = -1;
	Var0.f_66 = -1;
	Var0.f_67 = 2;
	iVar88 = 1200;
	while (iVar88 <= 1217)
	{
		Global_794709.f_4[iVar88 /*88*/] = { Var0 };
		iVar88++;
	}
}

void func_103()
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
}

void func_104()
{
	if (func_110())
	{
		NETWORK::_0xF98DDE0A8ED09323();
	}
	else
	{
		NETWORK::GET_PLAYER_ADVANCED_MODIFIER_PRIVILEGES();
	}
}

bool func_105()
{
	return Global_2456479.f_4;
}

int func_106()
{
	if (NETWORK::_0x5E24341A7F92A74B())
	{
		return 1;
	}
	else if (NETWORK::_0x02ADA21EA2F6918F())
	{
		return 1;
	}
	else if (NETWORK::_0x299EF3C576773506())
	{
		return 1;
	}
	return 0;
}

int func_107()
{
	if (!func_108())
	{
		return 1;
	}
	return 0;
}

int func_108()
{
	if (func_109())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_109()
{
	return Global_2458691;
}

bool func_110()
{
	return Global_1573282.f_4;
}

bool func_111()
{
	return Global_2394836.f_2;
}

int func_112(bool bParam0, var uParam1, char* sParam2, int iParam3)
{
	switch (bParam0->f_4)
	{
		case 0:
			*bParam0 = 0;
			if (func_106())
			{
				return 0;
			}
			func_104();
			func_103();
			if (func_110())
			{
				*bParam0 = 0;
				return 1;
			}
			else
			{
				NETWORK::_0xFD75DABC0957BF33(0);
			}
			func_101(bParam0, 1);
			break;
		
		case 1:
			if (NETWORK::SET_BALANCE_ADD_MACHINES(uParam1, func_98(0)))
			{
				func_101(bParam0, 3);
			}
			break;
		
		case 3:
			if (NETWORK::_0x941E5306BCD7C2C7())
			{
				bParam0->f_41 = NETWORK::_0xE0A6138401BCB837();
				if (NETWORK::_0xC87E740D9F3872CC())
				{
				}
				else
				{
					func_300(bParam0, 1, 1);
					bParam0->f_41 = NETWORK::_0xE0A6138401BCB837();
					*bParam0 = 0;
					return 1;
				}
				if (NETWORK::_0x769951E2455E2EB5() > 0)
				{
					if (DATAFILE::_0xA69AC4ADE82B57A4(0))
					{
						func_113(sParam2, 0, iParam3);
						func_300(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_300(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_113(char* sParam0, int iParam1, var uParam2)
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar0, "mission");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar1, "gen");
	StringCopy(sParam0, NETWORK::_GET_ROOT_CONTENT_ID(iParam1), 24);
	StringCopy(&(sParam0->f_6), NETWORK::_0x584770794D758C18(iParam1), 64);
	StringCopy(&(sParam0->f_22), NETWORK::_GET_CONTENT_DESCRIPTION_HASH(iParam1), 64);
	sParam0->f_56 = { func_87(iVar2) };
	sParam0->f_59 = { func_86(iVar2, "cam") };
	sParam0->f_62 = { func_85(iVar2) };
	sParam0->f_65 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "type");
	sParam0->f_68 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "subtype");
	sParam0->f_80 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "adverm");
	sParam0->f_79 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "testcomplete");
	sParam0->f_69 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "min");
	sParam0->f_70 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "rank");
	sParam0->f_71 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "num");
	sParam0->f_73 = func_83(NETWORK::_0x759299C5BB31D2A9(iParam1, 0), NETWORK::_0x87E5C46C187FE0AE(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "charcon");
	*uParam2 = GAMEPLAY::GET_HASH_KEY(NETWORK::_0xBF09786A7FCAB582(0));
	if (func_115(*uParam2))
	{
		sParam0->f_68 = 8;
	}
	if (func_114() != 2)
	{
		if (sParam0->f_71 > Global_262145.f_4577)
		{
			sParam0->f_71 = Global_262145.f_4577;
		}
		if (sParam0->f_69 > Global_262145.f_4577)
		{
			sParam0->f_69 = Global_262145.f_4577;
		}
	}
	if (!func_110())
	{
		uVar3 = NETWORK::_0x3054F114121C21EA(iParam1);
		if (NETWORK::_FACEBOOK_SET_HEIST_COMPLETE(uVar3))
		{
			sParam0->f_54 = NETWORK::_0xBAF6BABF9E7CCC13(iParam1);
		}
		else
		{
			sParam0->f_54 = -1;
		}
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar2, "ltm") == 2)
	{
		sParam0->f_78 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "ltm");
	}
	GAMEPLAY::SET_BIT(&(sParam0->f_76), 13);
	func_103();
}

int func_114()
{
	return Global_25459;
}

int func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_8914[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_116()
{
	return Global_2394836.f_1;
}

void func_117()
{
	Global_2456479.f_8 = 0;
	Global_2456479.f_7 = 0;
}

int func_118(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if ((iParam3 > 10 && iParam3 <= 15) || iParam3 == 122)
	{
		*uParam0 = 1;
		GAMEPLAY::SET_BIT(uParam2, 3);
		if (!GAMEPLAY::IS_BIT_SET(*uParam2, 2))
		{
		}
		GAMEPLAY::SET_BIT(uParam2, 2);
		return 1;
	}
	if ((func_296() && func_295()) || func_294())
	{
		if (!GAMEPLAY::IS_BIT_SET(*uParam2, 2))
		{
		}
		GAMEPLAY::SET_BIT(uParam2, 2);
		GAMEPLAY::SET_BIT(uParam2, 1);
		GAMEPLAY::SET_BIT(uParam2, 3);
		*uParam0 = 1;
		return 1;
	}
	if (iParam7 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(*uParam2, 3))
		{
			GAMEPLAY::SET_BIT(uParam2, 3);
		}
		return 1;
	}
	if (bParam4)
	{
		if (!func_293())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_292())
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam2, 2))
			{
				GAMEPLAY::SET_BIT(uParam2, 3);
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam6)
	{
		if (func_105())
		{
			return 0;
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(*uParam2, 2))
	{
		if (!GAMEPLAY::IS_BIT_SET(*uParam2, 1))
		{
			if (!bParam12)
			{
				func_266(1, 1, bParam11, 1);
			}
			GAMEPLAY::SET_BIT(uParam2, 1);
			func_300(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_134(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, bParam13))
		{
			if (((func_133() || Global_4456448 == 31) || Global_4456448 == 6) || Global_4456448 == 4)
			{
				if (func_132(Global_4456448.f_130782))
				{
					Global_4456448.f_77 = { func_131() };
				}
				if (Global_4456448.f_40 < 1)
				{
					Global_4456448.f_40 = 1;
				}
				if (Global_4456448.f_39 < 1)
				{
					Global_4456448.f_39 = 1;
				}
				if (!func_130())
				{
					func_129();
				}
			}
			else if (Global_4456448 == 1)
			{
				Global_1379014.f_4 = 99;
				Global_1379014.f_6 = Global_4456448.f_62;
				Global_1379014.f_7 = Global_4456448.f_76668;
				Global_1379014.f_9 = Global_4456448.f_55664;
				Global_1379014.f_11 = Global_4456448.f_63;
				Global_1379014.f_12 = Global_4456448.f_65;
				Global_1379014.f_13 = Global_4456448.f_67;
				Global_1379014.f_14 = Global_4456448.f_66;
				Global_1379014.f_16 = Global_4456448.f_37;
				Global_1379014.f_5 = Global_4456448.f_60;
				Global_1379014.f_10 = Global_4456448.f_73;
			}
			else if (func_128())
			{
				Global_4194340.f_7 = 9901;
				Global_4194340.f_8 = Global_4456448.f_53219 + 1;
				if (func_127(Global_4456448.f_44634))
				{
					Global_4456448.f_44634 = { Global_4456448.f_77 };
				}
			}
			GAMEPLAY::SET_BIT(uParam2, 2);
			GAMEPLAY::CLEAR_BIT(uParam2, 1);
			GAMEPLAY::SET_BIT(uParam2, 3);
			if (*uParam0)
			{
				func_126();
				func_125();
				if (func_124())
				{
					func_121(Global_4456448.f_35);
				}
				Global_4456448.f_131891 = 1;
			}
			else
			{
				func_298();
			}
			if (!func_120())
			{
				func_119();
			}
			return 1;
		}
		else
		{
			uParam0->f_15 = 1;
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(uParam2, 3);
		if (Global_4456448.f_131891)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_119()
{
	Global_2448386.f_36.f_50 = 1;
}

int func_120()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_4456448.f_131075[iVar1 /*6*/])))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_121(int iParam0)
{
	if (!func_123())
	{
		NETWORK::_0x4811BBAC21C5FCD5(2);
		NETWORK::_0x5539C3EBF104A53A(1);
		if (iParam0 == 0)
		{
			iParam0 = 32;
		}
		NETWORK::_0x702BC4D605522539((iParam0 / 2));
		func_122();
	}
}

void func_122()
{
	GAMEPLAY::SET_BIT(&(Global_2448386.f_2), 3);
}

bool func_123()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_2, 3);
}

bool func_124()
{
	return GAMEPLAY::IS_BIT_SET(Global_2449169.f_1.f_2809, 8);
}

void func_125()
{
	GAMEPLAY::SET_BIT(&Global_2448386, 4);
}

void func_126()
{
	GAMEPLAY::SET_BIT(&Global_2448386, 28);
}

int func_127(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

int func_128()
{
	if (Global_4456448 == 2 || Global_4456448 == 8)
	{
		return 1;
	}
	return 0;
}

void func_129()
{
	Global_1646081.f_5 = 0;
	Global_1646081.f_11 = -1;
}

int func_130()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_4456448.f_40)
	{
		iVar1 = 0;
		while (iVar1 < Global_4456448.f_40)
		{
			if (Global_4456448.f_47[iVar0] != Global_4456448.f_47[iVar1])
			{
				return 0;
			}
			else if (Global_4456448.f_42[iVar0] != Global_4456448.f_42[iVar1])
			{
				return 0;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

Vector3 func_131()
{
	return 349.7179f, 4870.692f, -61.4014f;
}

int func_132(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5002[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_133()
{
	if ((((((Global_4456448 == 0 || Global_4456448 == 4) || Global_4456448 == 6) || Global_4456448 == 3) || Global_4456448 == 31) || Global_4456448.f_2 == 6) || Global_4456448.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_134(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<16> Var17;
	var uVar33;
	
	if (uParam0->f_26 == 0)
	{
		if (func_105() && uParam0->f_4 == 0)
		{
			return 0;
		}
	}
	if (!func_110() || (iParam2 != 0 && iParam2 != 1))
	{
		if (func_107())
		{
			*uParam0 = 0;
			return 1;
		}
	}
	switch (uParam0->f_4)
	{
		case 0:
			*uParam0 = 0;
			uParam0->f_1 = 0;
			uParam0->f_28 = 0;
			uParam0->f_24 = func_265(1);
			uParam0->f_25 = func_263(1);
			if (func_106())
			{
				return 0;
			}
			func_104();
			func_103();
			if (func_110() || bParam9)
			{
				NETWORK::_0xFD75DABC0957BF33(1);
			}
			else
			{
				NETWORK::_0xFD75DABC0957BF33(0);
			}
			func_261();
			if (bParam4)
			{
				func_101(uParam0, 11);
			}
			else
			{
				func_101(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_110() || bParam9)
			{
				if (DATAFILE::_LOAD_UGC_FILE(sParam1))
				{
					if (iParam2 == 0)
					{
						Global_4456448.f_131902 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_4456448.f_131069), sParam1, 24);
						}
						func_176(-1, 1, 0, 0);
						uParam0->f_8 = 0;
						func_101(uParam0, 9);
						*uParam0 = 1;
						func_117();
						return 1;
					}
					else if (iParam2 == 1)
					{
						if (uParam0->f_16)
						{
							StringCopy(&(Global_961130.f_42), sParam1, 24);
							Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_19 = { Global_961130.f_12 };
							func_175(&uVar1, &uVar0, &Global_961130);
							if (Global_961130.f_65 == 0)
							{
								func_300(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_103();
								func_117();
								return 1;
							}
							uParam0->f_8 = 0;
						}
						else
						{
							StringCopy(&(Global_959568.f_42), sParam1, 24);
							Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_19 = { Global_959568.f_12 };
							func_175(&uVar1, &uVar0, &Global_959568);
							uParam0->f_8 = 0;
							if (Global_959568.f_65 == 0)
							{
								func_300(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_103();
								func_117();
								return 1;
							}
						}
						func_103();
						NETWORK::_0xF98DDE0A8ED09323();
						NETWORK::_0xFD75DABC0957BF33(1);
						func_174(uParam0);
						func_101(uParam0, 13);
					}
					else
					{
						*uParam0 = 0;
						func_117();
						return 1;
					}
				}
				else
				{
					*uParam0 = 0;
					func_117();
					func_103();
					return 1;
				}
			}
			else if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
			{
				uParam0->f_5 = NETWORK::_0x7FD2990AF016795E(func_98(iParam2), sParam1, 0, uParam0->f_21, uParam0->f_22);
				DATAFILE::_0xAD6875BBC0FC899C(uParam0->f_5);
				func_101(uParam0, 4);
			}
			else if (bParam10)
			{
				if (NETWORK::_0xC7397A83F7A2A462(sParam1, 1, func_98(iParam2)))
				{
					func_101(uParam0, 3);
				}
			}
			else if (NETWORK::SET_BALANCE_ADD_MACHINES(sParam1, func_98(iParam2)))
			{
				func_101(uParam0, 3);
			}
			break;
		
		case 3:
			if (NETWORK::_0x941E5306BCD7C2C7())
			{
				uParam0->f_41 = NETWORK::_0xE0A6138401BCB837();
				if (NETWORK::_0xC87E740D9F3872CC())
				{
				}
				else
				{
					func_300(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::_0xE0A6138401BCB837();
					*uParam0 = 0;
					func_117();
					return 1;
				}
				if (NETWORK::_0x769951E2455E2EB5() > 0)
				{
					if (!bParam12 && !func_172(uParam0->f_24, uParam0->f_25, NETWORK::_0x584770794D758C18(0), NETWORK::_GET_CONTENT_ID(0)))
					{
						func_300(uParam0, 1, 1);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						func_117();
						return 1;
					}
					if (iParam2 == 0)
					{
						uParam0->f_5 = NETWORK::_0x171DF6A0C07FB3DC(0, 0);
						DATAFILE::_0xAD6875BBC0FC899C(uParam0->f_5);
						func_101(uParam0, 4);
					}
					else if (iParam2 == 1)
					{
						if (DATAFILE::_0xA69AC4ADE82B57A4(0))
						{
							if (uParam0->f_16)
							{
								StringCopy(&(Global_961130.f_12), NETWORK::_GET_CONTENT_DESCRIPTION_HASH(0), 64);
								StringCopy(&(Global_961130.f_36), NETWORK::_GET_ROOT_CONTENT_ID(0), 24);
								Global_961130.f_71 = NETWORK::_GET_CONTENT_ID(0);
								StringCopy(&(Global_961130.f_42), sParam1, 24);
								Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_19 = { Global_961130.f_12 };
								func_175(&uVar1, &uVar0, &Global_961130);
								if (Global_961130.f_65 == 0)
								{
									func_300(uParam0, 1, 1);
									*uParam0 = 0;
									uParam0->f_28 = 1;
									func_103();
									func_117();
									return 1;
								}
								uParam0->f_8 = 0;
							}
							else
							{
								StringCopy(&(Global_959568.f_12), NETWORK::_GET_CONTENT_DESCRIPTION_HASH(0), 64);
								StringCopy(&(Global_959568.f_36), NETWORK::_GET_ROOT_CONTENT_ID(0), 24);
								Global_959568.f_71 = NETWORK::_GET_CONTENT_ID(0);
								StringCopy(&(Global_959568.f_42), sParam1, 24);
								Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_19 = { Global_959568.f_12 };
								func_175(&uVar1, &uVar0, &Global_959568);
								uParam0->f_8 = 0;
							}
							func_103();
							func_101(uParam0, 10);
						}
						else
						{
							func_300(uParam0, 1, 1);
							*uParam0 = 0;
							func_117();
							return 1;
						}
					}
					else if (iParam2 == 4)
					{
						if (DATAFILE::_0xA69AC4ADE82B57A4(0))
						{
							if (uParam0->f_16)
							{
								func_170(&uVar1, &uVar0, &Global_961130, iParam6);
								if (iParam6 == 1)
								{
									func_300(uParam0, 1, 1);
									*uParam0 = 1;
									func_117();
									return 1;
								}
								StringCopy(&(Global_961130.f_12), NETWORK::_GET_CONTENT_DESCRIPTION_HASH(0), 64);
								StringCopy(&(Global_961130.f_36), NETWORK::_GET_ROOT_CONTENT_ID(0), 24);
								StringCopy(&(Global_961130.f_42), sParam1, 24);
								Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_19 = { Global_961130.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_170(&uVar1, &uVar0, &Global_959568, iParam6);
								if (iParam6 == 1)
								{
									func_300(uParam0, 1, 1);
									*uParam0 = 1;
									func_117();
									return 1;
								}
								StringCopy(&(Global_959568.f_12), NETWORK::_GET_CONTENT_DESCRIPTION_HASH(0), 64);
								StringCopy(&(Global_959568.f_36), NETWORK::_GET_ROOT_CONTENT_ID(0), 24);
								StringCopy(&(Global_959568.f_42), sParam1, 24);
								Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_19 = { Global_959568.f_12 };
								uParam0->f_8 = 0;
							}
							func_103();
							func_101(uParam0, 10);
						}
						else
						{
							func_300(uParam0, 1, 1);
							*uParam0 = 0;
							func_117();
							return 1;
						}
					}
				}
				else
				{
					func_300(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					return 1;
				}
			}
			break;
		
		case 4:
			if (NETWORK::_0x3A3D5568AF297CD5(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					UI::_REMOVE_LOADING_PROMPT();
				}
				if (NETWORK::CLOUD_CHECK_AVAILABILITY(uParam0->f_5))
				{
					func_101(uParam0, 6);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_101(uParam0, 0);
					return 0;
				}
				else
				{
					func_300(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					return 1;
				}
			}
			else if (func_169() || func_168() == 4)
			{
				if (uParam0->f_2 == 0)
				{
					uParam0->f_2 = 1;
					UI::_BEGIN_TEXT_COMMAND_BUSY_STRING("FMMC_DOWNLOAD");
					UI::_END_TEXT_COMMAND_BUSY_STRING(5);
				}
			}
			break;
		
		case 6:
			if ((bParam13 && !func_167()) && !bParam14)
			{
				return 0;
			}
			if (DATAFILE::_0x15FF52B809DB2353(uParam0->f_5))
			{
				if (DATAFILE::_0x22DA66936E0FFF37(uParam0->f_5))
				{
					if (bParam3)
					{
						if (bParam13)
						{
							func_266(1, 1, bParam11, 1);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_4456448.f_131902 = 1;
							Global_4456448.f_131887 = 1;
							StringCopy(&(Global_4456448.f_130758), "", 64);
							StringCopy(&(Global_4456448.f_130805), "", 24);
							StringCopy(&(Global_4456448.f_130783), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_4456448.f_131069), sParam1, 24);
							}
							uParam0->f_35 = uParam0->f_22;
						}
						else
						{
							Global_4456448.f_130782 = GAMEPLAY::GET_HASH_KEY(NETWORK::_0xBF09786A7FCAB582(0));
							StringCopy(&(Global_4456448.f_130805), NETWORK::_0x584770794D758C18(0), 24);
							Global_4456448.f_131902 = NETWORK::_GET_CONTENT_ID(0);
							if (Global_4456448.f_131902 == 1 || Global_4456448.f_131902 == 2)
							{
								StringCopy(&(Global_4456448.f_130783), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_4456448.f_130783), NETWORK::_0x584770794D758C18(0), 24);
							}
							if ((Global_4456448.f_131902 == 0 || Global_4456448.f_131902 == 3) && NETWORK::_0x703F12425ECA8BF5(0))
							{
								StringCopy(&(Global_4456448.f_130758), PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
							}
							else if ((GAMEPLAY::IS_DURANGO_VERSION() && (Global_4456448.f_131902 == 0 || Global_4456448.f_131902 == 3)) && func_166(&uVar33, &(Global_4456448.f_130805)))
							{
								StringCopy(&(Global_4456448.f_130758), PLAYER::GET_PLAYER_NAME(uVar33), 64);
							}
							else
							{
								StringCopy(&(Global_4456448.f_130758), NETWORK::_0xAEAB987727C5A8A4(0), 64);
							}
							Global_4456448.f_131089 = NETWORK::_0x87E5C46C187FE0AE(0, 0);
							Global_4456448.f_131889 = NETWORK::_GET_CONTENT_CATEGORY(0);
							uParam0->f_23 = func_88(0);
							Global_4456448.f_147469 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_4456448.f_131069), NETWORK::_GET_ROOT_CONTENT_ID(0), 24);
							}
							if (Global_4456448.f_131902 == 0 || Global_4456448.f_131902 == 3)
							{
								if ((NETWORK::_0x8C8D2739BA44AF0F(0, &uVar4) && NETWORK::NETWORK_IS_HANDLE_VALID(&uVar4, 13)) && NETWORK::NETWORK_IS_FRIEND(&uVar4))
								{
									Var17 = { Global_4456448.f_130758 };
									func_165(1, Var17);
								}
								else
								{
									func_165(0, Var17);
								}
							}
							else
							{
								func_165(0, Var17);
							}
							Global_4456448.f_8 = func_83(NETWORK::_0x759299C5BB31D2A9(0, 0), NETWORK::_0x87E5C46C187FE0AE(0, 0));
							if (NETWORK::_0x993CBE59D350D225(uParam0->f_7))
							{
								Global_4456448.f_131888 = unk_0xC3470AC0BD03A920(0);
								Global_4456448.f_131890 = 1;
							}
							else
							{
								Global_4456448.f_131888 = 0;
								Global_4456448.f_131890 = 0;
							}
							Global_4456448.f_131887 = NETWORK::_0xA9240A96C74CCA13(0);
							uParam0->f_35 = NETWORK::_0x3054F114121C21EA(0);
							if (!func_110())
							{
								if (NETWORK::_FACEBOOK_SET_HEIST_COMPLETE(uParam0->f_35))
								{
									uParam0->f_31 = NETWORK::_0xBAF6BABF9E7CCC13(0);
								}
								else
								{
									uParam0->f_31 = -1;
								}
							}
							Global_4456448.f_131088 = uParam0->f_31;
							Global_2449169.f_4274.f_3 = NETWORK::_0x70EA8DA57840F9BE(0, 0);
							Global_2449169.f_4274.f_2 = NETWORK::_0x4E548C0D7AE39FF9(0, 0);
							if (Global_4456448.f_131902 == 1 || Global_4456448.f_131902 == 2)
							{
								StringCopy(&(Global_4456448.f_130758), func_84(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_4456448.f_131069), sParam1, 24);
						}
						uParam0->f_32 = 0;
						if (!func_110())
						{
							func_176(uParam0->f_35, bParam11, (bParam13 || bParam14), uParam0->f_32);
							if (func_132(Global_4456448.f_130782))
							{
								Global_4456448.f_77 = { func_131() };
							}
							if (Global_4456448.f_131902 == 0 && (func_163() || func_161()))
							{
								func_300(uParam0, 1, 1);
								uParam0->f_42.f_3 = 0;
								*uParam0 = 0;
								uParam0->f_1 = 1;
								func_117();
								return 1;
							}
							else if (bParam13 || bParam14)
							{
								func_101(uParam0, 5);
								return 0;
							}
						}
						else
						{
							func_176(-1, bParam11, 0, 0);
						}
						if (func_157(uParam0, iParam2, bParam13, bParam9))
						{
							return 1;
						}
					}
					else
					{
						uVar1 = DATAFILE::DATAFILE_GET_FILE_DICT();
						uVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar1, "mission");
						uVar3 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar2, "gen");
						StringCopy(&(Global_2437022.f_3737), NETWORK::_GET_CONTENT_DESCRIPTION_HASH(0), 32);
						Global_2437022.f_3737.f_8 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar3, "type");
						uParam0->f_17 = NETWORK::_0x993CBE59D350D225(0);
						*uParam0 = 1;
						func_117();
						DATAFILE::_0x8F5EA1C01D65A100(uParam0->f_5);
						func_103();
						return 1;
					}
					DATAFILE::_0x8F5EA1C01D65A100(uParam0->f_5);
					func_103();
				}
				else if (iParam2 == 0)
				{
					func_300(uParam0, 1, 1);
					uParam0->f_42.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_117();
					return 1;
				}
				else
				{
					uParam0->f_8++;
					if (uParam0->f_8 > 1000)
					{
						func_300(uParam0, 1, 1);
						uParam0->f_42.f_3 = 0;
						*uParam0 = 0;
						func_117();
						return 1;
					}
				}
			}
			break;
		
		case 5:
			func_176(uParam0->f_35, bParam11, (bParam13 || bParam14), uParam0->f_32);
			if (uParam0->f_32 >= 6)
			{
				if (func_157(uParam0, iParam2, (bParam13 || bParam14), bParam9))
				{
					return 1;
				}
			}
			uParam0->f_32++;
			break;
		
		case 9:
			if (func_155(uParam0, 0, bParam3, 0))
			{
				func_101(uParam0, 0);
				func_103();
				if ((((func_149(Global_4456448.f_130782) && func_133()) && !bParam9) && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_4456448.f_131075[0 /*6*/]))) && (func_169() || (func_144() && !func_143())))
				{
					uParam0->f_8 = 0;
					func_101(uParam0, 19);
					return 0;
				}
				if ((uParam5 || bParam7) && !bParam13)
				{
					if (bParam7 || uParam5)
					{
						uParam0->f_23 = func_88(0);
						uParam0->f_21 = NETWORK::_0x1D610EB0FEA716D9(0, uParam0->f_23);
					}
					func_142(&(uParam0->f_42), 0);
					func_101(uParam0, 18);
				}
				else
				{
					uParam0->f_42.f_3 = 1;
					func_300(uParam0, 1, 0);
					func_117();
					return 1;
				}
			}
			break;
		
		case 19:
			if (NETWORK::_0xC7397A83F7A2A462(&(Global_4456448.f_131075[0 /*6*/]), 1, func_98(iParam2)))
			{
				func_101(uParam0, 21);
			}
			break;
		
		case 21:
			if (NETWORK::_0x941E5306BCD7C2C7())
			{
				uParam0->f_41 = NETWORK::_0xE0A6138401BCB837();
				if (NETWORK::_0xC87E740D9F3872CC())
				{
				}
				else
				{
					func_300(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::_0xE0A6138401BCB837();
					*uParam0 = 0;
					func_117();
					return 1;
				}
				if (NETWORK::_0x769951E2455E2EB5() > 0)
				{
					uParam0->f_5 = NETWORK::_0x171DF6A0C07FB3DC(0, 0);
					DATAFILE::_0xAD6875BBC0FC899C(uParam0->f_5);
					func_101(uParam0, 22);
				}
				else
				{
					func_300(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					return 1;
				}
			}
			break;
		
		case 22:
			if (NETWORK::_0x3A3D5568AF297CD5(uParam0->f_5))
			{
				if (NETWORK::CLOUD_CHECK_AVAILABILITY(uParam0->f_5))
				{
					func_101(uParam0, 23);
				}
				else if (uParam0->f_22 != 1)
				{
					uParam0->f_22 = 1;
					uParam0->f_3 = 1;
					func_101(uParam0, 0);
					return 0;
				}
				else
				{
					func_300(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					return 1;
				}
			}
			break;
		
		case 23:
			if (DATAFILE::_0x15FF52B809DB2353(uParam0->f_5))
			{
				if (DATAFILE::_0x22DA66936E0FFF37(uParam0->f_5))
				{
					func_139();
					func_300(uParam0, 1, 0);
					Global_1643901 = 1;
					func_117();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_300(uParam0, 1, 1);
					uParam0->f_42.f_3 = 0;
					*uParam0 = 0;
					uParam0->f_1 = 1;
					func_117();
					return 1;
				}
			}
			break;
		
		case 18:
			if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_7, 0))
			{
				if (bParam7)
				{
					if (func_138(&(uParam0->f_42), sParam1, uParam0->f_21, uParam0->f_23))
					{
						func_300(uParam0, 1, 0);
						uParam0->f_42.f_3 = 1;
						uParam0->f_42.f_1 = 0;
						func_117();
						return 1;
					}
				}
				else
				{
					StringCopy(&(uParam0->f_42.f_4), sParam1, 64);
					uParam0->f_42.f_3 = 1;
					func_300(uParam0, 1, 0);
					func_117();
					return 1;
				}
			}
			else
			{
				uParam0->f_42.f_3 = 1;
				func_300(uParam0, 1, 1);
				func_117();
				return 1;
			}
			break;
		
		case 10:
			if (func_155(uParam0, 0, bParam3, iParam2))
			{
				func_103();
				func_101(uParam0, 11);
			}
			break;
		
		case 11:
			if (uParam0->f_16)
			{
				if (NETWORK::_0xA7862BC5ED1DFD7E(&(Global_961130.f_1177), Global_961130.f_65, func_98(0)))
				{
					func_101(uParam0, 12);
				}
			}
			else if (NETWORK::_0xA7862BC5ED1DFD7E(&(Global_959568.f_1177), Global_959568.f_65, func_98(0)))
			{
				func_101(uParam0, 12);
			}
			break;
		
		case 12:
			if (NETWORK::_0x941E5306BCD7C2C7())
			{
				if (NETWORK::_0xC87E740D9F3872CC())
				{
				}
				else
				{
					func_300(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::_0xE0A6138401BCB837();
					*uParam0 = 0;
					func_117();
					return 1;
				}
				if (NETWORK::_0x769951E2455E2EB5() > 0)
				{
					if (uParam0->f_16)
					{
						Global_961130.f_65 = NETWORK::_0x769951E2455E2EB5();
					}
					else
					{
						Global_959568.f_65 = NETWORK::_0x769951E2455E2EB5();
					}
					uParam0->f_8 = 0;
					func_300(uParam0, 0, bParam8);
					func_174(uParam0);
					func_101(uParam0, 13);
				}
				else
				{
					func_300(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					return 1;
				}
			}
			break;
		
		case 13:
			if (func_110())
			{
				if (uParam0->f_16)
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_961130.f_65 - 1))
					{
						if (DATAFILE::_LOAD_UGC_FILE(&(Global_961130.f_1177[uParam0->f_9 /*6*/])))
						{
							func_137(uParam0, &Global_961130);
							NETWORK::_0xF98DDE0A8ED09323();
						}
						uParam0->f_9++;
					}
					func_117();
					return 1;
				}
				else
				{
					uParam0->f_9 = 0;
					while (uParam0->f_9 <= (Global_959568.f_65 - 1))
					{
						if (DATAFILE::_LOAD_UGC_FILE(&(Global_959568.f_1177[uParam0->f_9 /*6*/])))
						{
							func_137(uParam0, &Global_959568);
							NETWORK::_0xF98DDE0A8ED09323();
						}
						uParam0->f_9++;
					}
					func_117();
					return 1;
				}
			}
			else if (uParam0->f_16)
			{
				if (func_136(uParam0, &Global_961130))
				{
					func_135(uParam0, &Global_961130);
					if (uParam0->f_27)
					{
						func_300(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						uParam0->f_30 = 0;
						func_117();
						return 1;
					}
					else if (uParam0->f_30 == 1)
					{
						func_300(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 0;
						func_117();
						uParam0->f_30 = 1;
						return 1;
					}
					else
					{
						func_101(uParam0, 17);
						*uParam0 = 1;
					}
				}
			}
			else if (func_136(uParam0, &Global_959568))
			{
				func_135(uParam0, &Global_959568);
				if (uParam0->f_27)
				{
					func_300(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					uParam0->f_30 = 0;
					func_117();
					return 1;
				}
				else if (uParam0->f_30 == 1)
				{
					func_300(uParam0, 1, bParam8);
					*uParam0 = 0;
					uParam0->f_27 = 0;
					uParam0->f_30 = 1;
					func_117();
					return 1;
				}
				else
				{
					func_101(uParam0, 17);
					*uParam0 = 1;
				}
			}
			break;
		
		case 17:
			func_101(uParam0, 0);
			func_103();
			func_300(uParam0, 1, bParam8);
			*uParam0 = 1;
			func_117();
			return 1;
			break;
	}
	return 0;
}

void func_135(var uParam0, var uParam1)
{
	uParam0->f_30 = 0;
	if (uParam1->f_6 > uParam1->f_7)
	{
		uParam0->f_30 = 1;
	}
}

int func_136(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (uParam1->f_65 - 1))
	{
		if (DATAFILE::_0xA69AC4ADE82B57A4(uParam0->f_7))
		{
			if (!func_172(uParam0->f_24, uParam0->f_25, NETWORK::_0x584770794D758C18(0), NETWORK::_GET_CONTENT_ID(0)))
			{
				uParam0->f_27 = 1;
				return 1;
			}
			func_137(uParam0, uParam1);
			uParam0->f_9++;
		}
		else
		{
			uParam0->f_8++;
		}
		if (uParam0->f_8 > 200)
		{
			func_103();
			uParam0->f_7++;
			uParam0->f_8 = 0;
		}
		if (uParam0->f_9 >= 31)
		{
			return 1;
		}
		if (uParam0->f_7 >= uParam1->f_65)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_137(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar0, "mission");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar1, "gen");
	uParam1->f_72[uParam0->f_9 /*69*/].f_45 = { func_87(iVar2) };
	if (func_110())
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar2, "nm"), 64);
	}
	else
	{
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), NETWORK::_GET_CONTENT_DESCRIPTION_HASH(uParam0->f_7), 64);
	}
	if (!func_110())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_44 = NETWORK::_0xBAF6BABF9E7CCC13(uParam0->f_7);
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_68 = NETWORK::_GET_CONTENT_ID(uParam0->f_7);
	uParam1->f_72[uParam0->f_9 /*69*/].f_56 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "min");
	uParam1->f_72[uParam0->f_9 /*69*/].f_59 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "tnum");
	uParam1->f_72[uParam0->f_9 /*69*/].f_60 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "num");
	uParam1->f_72[uParam0->f_9 /*69*/].f_54 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "type");
	uParam1->f_72[uParam0->f_9 /*69*/].f_55 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "subtype");
	uParam1->f_72[uParam0->f_9 /*69*/].f_48 = { func_86(iVar2, "cam") };
	uParam1->f_72[uParam0->f_9 /*69*/].f_51 = { func_85(iVar2) };
	uParam1->f_72[uParam0->f_9 /*69*/].f_66 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "adverm");
	uParam1->f_72[uParam0->f_9 /*69*/].f_57 = func_88(uParam0->f_7);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_6), NETWORK::_0xAEAB987727C5A8A4(uParam0->f_7), 24);
	if (!func_110())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_61 = func_83(NETWORK::_0x759299C5BB31D2A9(uParam0->f_7, 0), NETWORK::_0x87E5C46C187FE0AE(uParam0->f_7, 0));
	}
	if (func_114() != 2)
	{
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_60 > Global_262145.f_4577)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_60 = Global_262145.f_4577;
		}
		if (uParam1->f_72[uParam0->f_9 /*69*/].f_56 > Global_262145.f_4577)
		{
			uParam1->f_72[uParam0->f_9 /*69*/].f_56 = Global_262145.f_4577;
		}
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_58 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "rank");
	func_82(uParam1->f_72[uParam0->f_9 /*69*/].f_54, &(uParam1->f_72[uParam0->f_9 /*69*/].f_60), &(uParam1->f_72[uParam0->f_9 /*69*/].f_56));
	if (uParam1->f_6 < uParam1->f_72[uParam0->f_9 /*69*/].f_56)
	{
		uParam1->f_6 = uParam1->f_72[uParam0->f_9 /*69*/].f_56;
	}
	if (uParam1->f_7 > uParam1->f_72[uParam0->f_9 /*69*/].f_60 || uParam1->f_7 == 0)
	{
		uParam1->f_7 = uParam1->f_72[uParam0->f_9 /*69*/].f_60;
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_67 = 1;
	GAMEPLAY::SET_BIT(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 13);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/]), NETWORK::_GET_ROOT_CONTENT_ID(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
	if (!func_110())
	{
		StringCopy(&(uParam1->f_1177[uParam0->f_9 /*6*/]), NETWORK::_GET_ROOT_CONTENT_ID(uParam0->f_9), 24);
		if (NETWORK::_0x993CBE59D350D225(uParam0->f_9))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_72[uParam0->f_9 /*69*/].f_64), 14);
			if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
			{
				DATAFILE::DATAFILE_DELETE();
			}
		}
	}
}

int func_138(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (uParam0->f_1)
	{
		case 0:
			if (*uParam0 != 0)
			{
				NETWORK::TEXTURE_DOWNLOAD_HAS_FAILED(*uParam0);
			}
			GRAPHICS::_0x0A46AF8A78DC5E0A();
			uParam0->f_1 = 1;
			break;
		
		case 1:
			if (GRAPHICS::_0x4862437A486F91B0(sParam1, uParam3, uParam2, 0))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			switch (GRAPHICS::_0x1670F8D05056F257(NETWORK::_0xCFD115B373C0DF63(0, uParam3)))
			{
				case 1:
					return 0;
				
				case 0:
					uParam0->f_3 = 1;
					return 1;
				
				case 2:
					uParam0->f_2++;
					if (uParam0->f_2 > 200)
					{
						if (*uParam0 != 0)
						{
							NETWORK::TEXTURE_DOWNLOAD_HAS_FAILED(*uParam0);
							*uParam0 = 0;
						}
						uParam0->f_3 = 0;
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_139()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	int iVar14;
	int iVar15;
	char cVar16[16];
	var uVar20[4];
	var uVar25[4];
	var uVar30[4];
	var uVar35[4];
	var uVar40[4];
	var uVar45[4];
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	int iVar80;
	int iVar81;
	int iVar82[8];
	int iVar91;
	int iVar92[8];
	struct<11> Var101;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	vector3 vVar194;
	
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar0, "mission");
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar1, "endcon");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar1, "ene");
	iVar4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar3, "no");
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "loc");
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar1, "goto");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "no");
	uVar8 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar1, "veh");
	iVar9 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar8, "no");
	uVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar8, "loc");
	uVar11 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar1, "obj");
	iVar12 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar11, "no");
	uVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar11, "loc");
	iVar14 = 0;
	while (iVar14 <= (Global_4456448.f_40 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1643901.f_1[iVar14] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "nrl"), iVar14);
			StringCopy(&cVar16, "txt", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar20[iVar14] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, &cVar16);
			StringCopy(&cVar16, "irbs", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar25[iVar14] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, &cVar16);
			StringCopy(&cVar16, "irbs2", 16);
			StringIntConCat(&cVar16, iVar14, 16);
			uVar30[iVar14] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, &cVar16);
			iVar15 = 0;
			while (iVar15 <= (Global_1643901.f_1[iVar14] - 1))
			{
				Global_1643901.f_6[iVar14 /*18*/][iVar15] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar25[iVar14], iVar15);
				Global_1643901.f_79[iVar14 /*18*/][iVar15] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1643901.f_152[iVar14 /*273*/][iVar15 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1643901.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
				}
				iVar15++;
			}
		}
		iVar14++;
	}
	Var101 = 8;
	Var101.f_1 = 10;
	Var101.f_1.f_11 = 10;
	Var101.f_1.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	Var101.f_1.f_11.f_11.f_11.f_11.f_11.f_11.f_11 = 10;
	iVar80 = 0;
	while (iVar80 <= (Global_4456448.f_40 - 1))
	{
		iVar91 = 0;
		iVar81 = 0;
		iVar190 = 0;
		iVar192 = 0;
		iVar14 = 0;
		while (iVar14 < 8)
		{
			iVar92[iVar14] = -1;
			iVar82[iVar14] = 0;
			iVar191 = 0;
			while (iVar191 < 10)
			{
				Var101[iVar14 /*11*/][iVar191] = 0;
				iVar191++;
			}
			iVar14++;
		}
		iVar14 = 0;
		while (iVar14 < Global_1643901.f_1[iVar80])
		{
			if ((!GAMEPLAY::IS_BIT_SET(Global_1643901.f_6[iVar80 /*18*/][iVar14], 11) && !GAMEPLAY::IS_BIT_SET(Global_1643901.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
			{
				iVar92[iVar81] = iVar14;
				iVar81++;
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar60[iVar80] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar8, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar65[iVar80] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar8, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar9)
		{
			iVar15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar60[iVar80], iVar14);
			iVar193 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar65[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !GAMEPLAY::IS_BIT_SET(Global_1643901.f_6[iVar80 /*18*/][iVar193], 11)) && !GAMEPLAY::IS_BIT_SET(Global_1643901.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_141(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1656980.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar10, iVar14) };
					Global_1656980.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1656980.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_140(iVar15, 1) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar70[iVar80] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar11, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar75[iVar80] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar11, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			iVar15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar70[iVar80], iVar14);
			iVar193 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar75[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !GAMEPLAY::IS_BIT_SET(Global_1643901.f_6[iVar80 /*18*/][iVar193], 11)) && !GAMEPLAY::IS_BIT_SET(Global_1643901.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_141(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1656980.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar13, iVar14) };
					Global_1656980.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1656980.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_140(iVar15, 3) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rl", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar45[iVar80] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar50[iVar80] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar16);
		StringCopy(&cVar16, "loc", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar55[iVar80] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar7)
		{
			iVar193 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar50[iVar80], iVar14);
			iVar15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar45[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !GAMEPLAY::IS_BIT_SET(Global_1643901.f_6[iVar80 /*18*/][iVar193], 11)) && !GAMEPLAY::IS_BIT_SET(Global_1643901.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_141(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1656980.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar55[iVar80], iVar14) };
					Global_1656980.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1656980.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_140(iVar15, 4) };
					iVar82[iVar91]++;
				}
			}
			iVar14++;
		}
		StringCopy(&cVar16, "rule", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar35[iVar80] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, &cVar16);
		StringCopy(&cVar16, "pri", 16);
		StringIntConCat(&cVar16, iVar80, 16);
		uVar40[iVar80] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, &cVar16);
		iVar14 = 0;
		while (iVar14 < iVar4)
		{
			iVar193 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar40[iVar80], iVar14);
			iVar15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar35[iVar80], iVar14);
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !GAMEPLAY::IS_BIT_SET(Global_1643901.f_6[iVar80 /*18*/][iVar193], 11)) && !GAMEPLAY::IS_BIT_SET(Global_1643901.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_141(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1656980.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
						{
							iVar190 = iVar191;
							iVar192 = 1;
						}
						iVar191++;
					}
					if (iVar192 == 0)
					{
						iVar82[iVar91]++;
					}
					vVar194 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar5, iVar14) };
					Global_1656980.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = vVar194.x;
					Global_1656980.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = vVar194.y;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1656980.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1656980.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_140(iVar15, 2) };
				}
			}
			iVar14++;
		}
		iVar14 = 0;
		while (iVar14 < 8)
		{
			iVar191 = 0;
			while (iVar191 < 10)
			{
				if (Global_1656980.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1656980.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1656980.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1656980.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1656980.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
				}
				iVar191++;
			}
			iVar14++;
		}
		iVar80++;
	}
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
}

Vector3 func_140(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 1 || iParam1 == 2)
			{
				vVar0.x = 70;
				vVar0.y = 70;
				vVar0.z = 255;
			}
			else if (iParam1 == 3)
			{
				vVar0.x = 70;
				vVar0.y = 255;
				vVar0.z = 70;
			}
			break;
		
		case 2:
			vVar0.x = 255;
			vVar0.y = 70;
			vVar0.z = 70;
			break;
		
		case 3:
			if (iParam1 == 1 || iParam1 == 2)
			{
				vVar0.x = 70;
				vVar0.y = 70;
				vVar0.z = 255;
			}
			else if (iParam1 == 3)
			{
				vVar0.x = 70;
				vVar0.y = 255;
				vVar0.z = 70;
			}
			break;
		
		case 4:
			if (iParam1 == 1 || iParam1 == 2)
			{
				vVar0.x = 70;
				vVar0.y = 70;
				vVar0.z = 255;
			}
			else if (iParam1 == 3)
			{
				vVar0.x = 70;
				vVar0.y = 255;
				vVar0.z = 70;
			}
			else if (iParam1 == 4)
			{
				vVar0.x = 200;
				vVar0.y = 200;
				vVar0.z = 50;
			}
			break;
		
		case 5:
			vVar0.x = 200;
			vVar0.y = 200;
			vVar0.z = 50;
			break;
		
		case 11:
			if (iParam1 == 1 || iParam1 == 2)
			{
				vVar0.x = 70;
				vVar0.y = 70;
				vVar0.z = 255;
			}
			else if (iParam1 == 3)
			{
				vVar0.x = 70;
				vVar0.y = 255;
				vVar0.z = 70;
			}
			break;
		
		case 12:
			if (iParam1 == 1 || iParam1 == 2)
			{
				vVar0.x = 70;
				vVar0.y = 70;
				vVar0.z = 255;
			}
			else if (iParam1 == 3)
			{
				vVar0.x = 70;
				vVar0.y = 255;
				vVar0.z = 70;
			}
			break;
		
		case 13:
			vVar0.x = 70;
			vVar0.y = 255;
			vVar0.z = 70;
			break;
		
		default:
			vVar0.x = 255;
			vVar0.y = 255;
			vVar0.z = 255;
			break;
	}
	return vVar0;
}

int func_141(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iParam2 - 1))
	{
		if ((*iParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_142(var uParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	struct<6> Var4;
	struct<8> Var10;
	struct<16> Var18;
	
	if (*uParam0 != 0)
	{
		NETWORK::TEXTURE_DOWNLOAD_HAS_FAILED(*uParam0);
		*uParam0 = 0;
	}
	*uParam0 = uVar0;
	uParam0->f_1 = uVar1;
	uParam0->f_2 = uVar2;
	uParam0->f_3 = uVar3;
	MemCopy(&(uParam0->f_4), {Var4}, 16);
	if (bParam1)
	{
		MemCopy(&(uParam0->f_20), {Var10}, 16);
		uParam0->f_36 = { Var18 };
	}
}

bool func_143()
{
	return Global_2448386.f_608;
}

int func_144()
{
	if (((func_148() || func_147()) || func_146()) || func_145())
	{
		return 1;
	}
	return 0;
}

var func_145()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 1);
}

var func_146()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 2);
}

var func_147()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 20);
}

var func_148()
{
	return Global_2448386.f_587;
}

int func_149(int iParam0)
{
	if ((((func_154(iParam0) || func_153(iParam0)) || func_152(iParam0)) || func_151(iParam0)) || func_150(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_150(int iParam0)
{
	return iParam0 == Global_262145.f_8497;
}

bool func_151(int iParam0)
{
	return iParam0 == Global_262145.f_8491;
}

bool func_152(int iParam0)
{
	return iParam0 == Global_262145.f_8485;
}

bool func_153(int iParam0)
{
	return iParam0 == Global_262145.f_8478;
}

bool func_154(int iParam0)
{
	return iParam0 == Global_262145.f_8473;
}

int func_155(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;
	
	if (func_107())
	{
		uParam0->f_19 = 0;
		return 1;
	}
	if (func_110())
	{
		return 1;
	}
	if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam3 == 0)
	{
		return 1;
	}
	switch (uParam0->f_19)
	{
		case 0:
			func_103();
			func_156();
			Global_1646041.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1646066.f_5 = 0;
				Global_1646066.f_4 = 0;
				Global_1646066.f_1 = 0;
				Global_1646066.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1646066.f_5 = 0;
				uParam0->f_19 = 1;
				return 0;
			}
			if (uParam0->f_18 == 0 || uParam0->f_18 == 1)
			{
				uParam0->f_19 = 1;
			}
			else if (uParam0->f_18 == 2)
			{
				uParam0->f_19 = 2;
			}
			break;
		
		case 1:
			if (DATAFILE::_0x9CB0BFA7A9342C3D(iParam1, 1))
			{
				if (iParam3 == 4)
				{
					uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
					Global_1646072 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pt");
					Global_1646072.f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pu");
					Global_1646072.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "ft");
					Global_1646072.f_3 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "fu");
					Global_1646072.f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "qt");
					Global_1646072.f_5 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "qu");
				}
				else
				{
					uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
					Global_1646041.f_10 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "dt"));
					Global_1646041.f_11 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "du"));
					Global_1646041.f_9 = (Global_1646041.f_10 / Global_1646041.f_11);
					Global_1646041.f_13 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pt"));
					Global_1646041.f_14 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pu"));
					Global_968147 = SYSTEM::ROUND(Global_1646041.f_14);
					Global_1646041.f_12 = (Global_1646041.f_13 / Global_1646041.f_14);
					Global_1646041.f_15 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "qt"));
					Global_1646041.f_17 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "qu"));
					Global_1646041.f_16 = (Global_1646041.f_15 / Global_1646041.f_17);
				}
				if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
				{
					DATAFILE::DATAFILE_DELETE();
				}
				if (uParam0->f_18 == 0)
				{
					uParam0->f_19 = 2;
				}
				else
				{
					uParam0->f_19 = 0;
					return 1;
				}
			}
			else
			{
				uParam0->f_8++;
				if (uParam0->f_8 > 5)
				{
					uParam0->f_19 = 0;
					uParam0->f_8 = 0;
					return 1;
				}
			}
			break;
		
		case 2:
			if (NETWORK::_0x993CBE59D350D225(iParam1))
			{
				if (bParam2)
				{
					if (DATAFILE::_0x52818819057F2B40(iParam1))
					{
						uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
						if (iParam3 == 0)
						{
							Global_1646041 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "quit");
							Global_1646041.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "ply");
							Global_1646041.f_8 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "fl");
							if (Global_1646041.f_2 > 0)
							{
								Global_1646041.f_5 = 1;
							}
							DATAFILE::DATAFILE_DELETE();
						}
						else if (iParam3 == 4)
						{
							Global_1646066.f_5 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(uVar0, "won");
							Global_1646066.f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "ply");
							Global_1646066.f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "quit");
							Global_1646066.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "fl");
						}
						uParam0->f_19 = 0;
						return 1;
					}
					else
					{
						uParam0->f_8++;
						if (uParam0->f_8 > 100)
						{
							uParam0->f_19 = 0;
							uParam0->f_8 = 0;
							return 1;
						}
					}
				}
				else
				{
					uParam0->f_17 = 1;
				}
			}
			else
			{
				uParam0->f_19 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_156()
{
	Global_1646041 = 0;
	Global_1646041.f_2 = 0;
	Global_1646041.f_8 = 0;
	Global_1646041.f_3 = 0;
	Global_1646041.f_6 = 0;
}

int func_157(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_160() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_110() && iParam1 == 0) && !bParam3)
			{
				if (Global_4456448.f_131902 == 0)
				{
					if (func_159())
					{
						func_300(uParam0, 1, 1);
						uParam0->f_42.f_3 = 0;
						*uParam0 = 0;
						func_117();
						DATAFILE::_0x8F5EA1C01D65A100(uParam0->f_5);
						func_103();
						return 1;
					}
				}
			}
		}
	}
	if (Global_4456448 == 0 && Global_4456448.f_2 == 6)
	{
		if ((uParam0->f_21 == -1 && uParam0->f_22 == -1) && !func_110())
		{
			if (!NETWORK::_FACEBOOK_SET_HEIST_COMPLETE(NETWORK::_0x3054F114121C21EA(0)))
			{
				Global_4456448.f_131885 = 1;
			}
		}
	}
	uParam0->f_8 = 0;
	if (bParam2)
	{
		func_158();
	}
	func_101(uParam0, 9);
	*uParam0 = 1;
	return 0;
}

void func_158()
{
	GAMEPLAY::SET_BIT(&(Global_2448386.f_36.f_4), 7);
}

int func_159()
{
	if ((Global_4456448 != 2 && Global_4456448 != 0) && Global_4456448 != 1)
	{
		return 1;
	}
	if (Global_4456448 == 0)
	{
		if (Global_4456448.f_152990 != 0)
		{
			return 1;
		}
		if (Global_4456448.f_2 == 4)
		{
			return 1;
		}
		if (Global_4456448.f_2 != 5 && ((((Global_4456448.f_2 != 6 && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 20)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 21)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 22)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 23)))
		{
			return 1;
		}
	}
	if (Global_4456448 == 2)
	{
		if (Global_4456448.f_53220 == 8 || Global_4456448.f_53220 == 9)
		{
			return 1;
		}
	}
	return 0;
}

bool func_160()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

int func_161()
{
	if (Global_4456448.f_44162 || func_162())
	{
		return 1;
	}
	return 0;
}

int func_162()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((((((((((((Global_4456448.f_55585[iVar0] == joaat("prop_rail_boxcar") || Global_4456448.f_55585[iVar0] == joaat("prop_rail_boxcar2")) || Global_4456448.f_55585[iVar0] == -1894510521) || Global_4456448.f_55585[iVar0] == joaat("prop_rail_boxcar3")) || Global_4456448.f_55585[iVar0] == -1562909828) || Global_4456448.f_55585[iVar0] == joaat("prop_rail_boxcar4")) || Global_4456448.f_55585[iVar0] == 338623111) || Global_4456448.f_55585[iVar0] == joaat("prop_rail_boxcar5")) || Global_4456448.f_55585[iVar0] == joaat("prop_rail_boxcar5_d")) || Global_4456448.f_55585[iVar0] == -1529940538) || Global_4456448.f_55585[iVar0] == 1152304222) || Global_4456448.f_55585[iVar0] == joaat("freight")) || Global_4456448.f_55585[iVar0] == joaat("metrotrain"))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_163()
{
	if ((Global_4456448.f_77.f_2 < 0f || func_164(Global_4456448.f_77, 999, 2f)) || (Global_4456448.f_45659[0 /*3*/].f_2 < -2f && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_46172[0], 5)))
	{
		return 1;
	}
	return 0;
}

int func_164(vector3 vParam0, int iParam3, float fParam4)
{
	int iVar0;
	vector3 vVar1[3];
	vector3 vVar11[3];
	int iVar21;
	
	if (iParam3 != 999)
	{
		iVar21 = 0;
		while (iVar21 < 3)
		{
			if (Global_1049778[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1049778[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3.f_2)
			{
				vVar1[iVar21 /*3*/] = { Global_1049778[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
				vVar11[iVar21 /*3*/] = { Global_1049778[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
			}
			else
			{
				vVar1[iVar21 /*3*/] = { Global_1049778[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
				vVar11[iVar21 /*3*/] = { Global_1049778[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
			}
			vVar1[iVar21 /*3*/].f_2 = (vVar1[iVar21 /*3*/].f_2 + fParam4);
			vVar11[iVar21 /*3*/].f_2 = (vVar11[iVar21 /*3*/].f_2 - fParam4);
			iVar21++;
		}
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar11[0 /*3*/], vVar1[0 /*3*/], Global_1049778[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, 1) || (Global_1049778[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar11[1 /*3*/], vVar1[1 /*3*/], Global_1049778[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1049778[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar11[2 /*3*/], vVar1[2 /*3*/], Global_1049778[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_164(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_164(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_164(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_164(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_164(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_164(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_164(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_164(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_164(vParam0, iVar0, fParam4))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_164(vParam0, 8, fParam4))
		{
			return 1;
		}
		if (func_164(vParam0, 17, fParam4))
		{
			return 1;
		}
	}
	return 0;
}

void func_165(int iParam0, struct<16> Param1)
{
	if (iParam0 == 0)
	{
		StringCopy(&Global_2460481, "", 64);
	}
	else
	{
		Global_2460481 = { Param1 };
	}
	Global_2460480 = iParam0;
}

int func_166(var uParam0, var uParam1)
{
	var uVar0;
	
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	NETWORK::NETWORK_HANDLE_FROM_MEMBER_ID(uParam1, &uVar0, 13);
	if (NETWORK::NETWORK_IS_HANDLE_VALID(&uVar0, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uVar0))
	{
		*uParam0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_167()
{
	return Global_2448386.f_36.f_48;
}

int func_168()
{
	return Global_2458641;
}

bool func_169()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_196 != 0;
}

void func_170(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<13> Var3;
	struct<2> Var16;
	var uVar51[16];
	
	*uParam0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "data");
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar1, "trg");
	*uParam1 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "list");
	if (iParam3 == 1)
	{
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*uParam0, "open") == 1)
		{
			uParam2->f_11 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(uVar1, "open");
		}
		return;
	}
	uParam2->f_11 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(uVar1, "open");
	Var3 = { func_171(NETWORK::_0x584770794D758C18(0)) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var16, 35, &Var3);
	uParam2->f_48 = { Var16.f_1 };
	uParam2->f_64 = Var16;
	uParam2->f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "scr");
	uParam2->f_5 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "time");
	uParam2->f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "cash");
	uParam2->f_65 = DATAFILE::_ARRAY_VALUE_GET_SIZE(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar51[iVar0] = DATAFILE::_ARRAY_VALUE_GET_OBJECT(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(uVar51[iVar0], "cid"), 24);
		uParam2->f_72[iVar0 /*69*/].f_62 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar51[iVar0], "scr");
		uParam2->f_72[iVar0 /*69*/].f_63 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar51[iVar0], "time");
		iVar0++;
	}
}

struct<13> func_171(var uParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(uParam0, &Var0, 13);
	return Var0;
}

int func_172(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<13> Var0;
	struct<13> Var13;
	
	if (((iParam3 == 1 || iParam3 == 2) || iParam3 == 3) || iParam3 == 4)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		Var0 = { func_171(uParam2) };
		Var13 = { func_173(PLAYER::PLAYER_ID()) };
		if (bParam1)
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var13, &Var0))
			{
				return 1;
			}
			else if (!NETWORK::NETWORK_IS_FRIEND(&Var0))
			{
				return 0;
			}
		}
		else if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var13, &Var0))
			{
				return 1;
			}
			else if (NETWORK::_0xCCA4318E1AB03F1F(&Var0) && NETWORK::_0xB57A49545BA53CE7(&Var0))
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
			Var13 = { func_173(PLAYER::PLAYER_ID()) };
			if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var13, &Var0))
			{
				return 0;
			}
		}
	}
	return 1;
}

struct<13> func_173(var uParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

void func_174(var uParam0)
{
	if (uParam0->f_16)
	{
		Global_961130.f_6 = 0;
		Global_961130.f_7 = 32;
	}
	else
	{
		Global_959568.f_6 = 0;
		Global_959568.f_7 = 32;
	}
}

void func_175(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1[16];
	
	*uParam0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	if (*uParam0 == 0)
	{
	}
	*uParam1 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "list");
	uParam2->f_10 = 1;
	uParam2->f_65 = DATAFILE::_ARRAY_VALUE_GET_SIZE(*uParam1);
	iVar0 = 0;
	while (iVar0 <= (uParam2->f_65 - 1))
	{
		uVar1[iVar0] = DATAFILE::_ARRAY_VALUE_GET_OBJECT(*uParam1, iVar0);
		StringCopy(&(uParam2->f_1177[iVar0 /*6*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(uVar1[iVar0], "cid"), 24);
		iVar0++;
	}
	uParam2->f_10 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(*uParam0, "h2h");
	uParam2->f_9 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(*uParam0, "ch");
	if (func_110())
	{
		StringCopy(&(uParam2->f_12), DATAFILE::_OBJECT_VALUE_GET_STRING(*uParam0, "name"), 64);
	}
}

void func_176(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	iVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar0, "mission");
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iVar1, "gen");
	Global_4456448.f_131858 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_246(iVar1, iParam0, bParam1);
		func_245(iVar1);
		func_244(&iVar1);
		func_243(&iVar1);
		func_242(&iVar1);
		func_241(&iVar1);
		func_240(&iVar1);
		func_239(&iVar1);
		func_237(&iVar1);
		func_236(&iVar1);
		func_234(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_133())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_233(iVar1);
			func_232(iVar1);
			func_231(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_230(iVar1);
			func_229(uVar2);
			func_228(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_222(iVar1);
			func_221(iVar1);
			func_220(iVar1);
			func_219(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_128())
	{
		func_215(iVar1);
		func_220(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_213(iVar1);
		func_212(iVar1);
		func_211(iVar1);
		func_210(iVar1);
		func_209(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_205(iVar1);
		func_197(iVar1);
		func_193(iVar1);
		func_189(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_4456448 == 1)
	{
		func_232(iVar1);
		func_188(iVar1);
	}
	else if (((Global_4456448 == 0 || Global_4456448.f_53220 == 8) || Global_4456448.f_53220 == 9) || Global_4456448 == 6)
	{
		func_182(iVar1);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_17, 19))
	{
		func_181(iVar1);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_4), 15);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_4), 18);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_4), 19);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_4), 29);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_4), 28);
	if (func_79(Global_4456448.f_130782) || func_78(Global_4456448.f_130782))
	{
		Global_4456448.f_36 = Global_4456448.f_35;
	}
	if ((!func_179(PLAYER::PLAYER_ID()) && !func_178()) && !Global_1645163)
	{
		iVar3 = func_81(Global_4456448.f_130782, 1);
		if (iVar3 != -1)
		{
			if (Global_262145.f_4915[iVar3] != -1 && Global_262145.f_6340[iVar3] != 251)
			{
				Global_4456448.f_36 = Global_262145.f_4915[iVar3];
			}
			if (Global_262145.f_4864[iVar3] != -1 && Global_262145.f_6340[iVar3] != 251)
			{
				Global_4456448.f_35 = Global_262145.f_4864[iVar3];
			}
		}
	}
	if (func_53(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_4), 15);
	}
	else if (func_52(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_4), 18);
	}
	else if (func_51(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_4), 19);
	}
	else if (func_49(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_4), 29);
	}
	else if (func_50(Global_4456448.f_130782, 1))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_4), 28);
	}
	else if (func_48(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 0);
	}
	else if (func_47(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 1);
	}
	else if (func_46(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 2);
	}
	else if (func_42(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 6);
	}
	else if (func_41(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 7);
	}
	else if (func_40(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 8);
	}
	else if (func_39(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 9);
	}
	else if (func_35(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 10);
	}
	else if (func_38(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 11);
	}
	else if (func_37(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 12);
	}
	else if (func_72(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 13);
	}
	else if (func_71(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 22);
	}
	else if (func_36(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 14);
	}
	else if (func_45(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 3);
	}
	else if (func_44(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 4);
	}
	else if (func_70(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 16);
	}
	else if (func_69(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 17);
	}
	else if (func_68(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 20);
	}
	else if (func_67(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 21);
	}
	else if (func_71(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 22);
	}
	else if (func_43(Global_4456448.f_130782))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 5);
	}
	else if (func_66(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 23);
	}
	else if (func_62(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 27);
	}
	else if (func_65(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 24);
	}
	else if (func_63(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 26);
	}
	else if (func_64(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 25);
	}
	else if (func_61(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 28);
	}
	else if (func_60(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 29);
	}
	else if (func_59(Global_4456448.f_152990))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 30);
	}
	func_177(Global_4456448.f_130782);
}

void func_177(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_8914[iVar0] || iParam0 == Global_262145.f_8923[iVar0])
		{
			Global_4456448.f_77 = { func_57(0, iVar0) };
			Global_4456448.f_80 = { func_56(0, iVar0) };
			vVar1 = { func_55(0, iVar0) };
			Global_4456448.f_99 = vVar1.z;
			Global_4456448.f_1 = 0;
			Global_4456448.f_2 = 8;
			Global_4456448.f_131866 = 0;
			Global_4456448.f_131869 = 16777215;
		}
		iVar0++;
	}
}

bool func_178()
{
	return GAMEPLAY::IS_BIT_SET(Global_2449169.f_1.f_2809, 5);
}

bool func_179(int iParam0)
{
	return func_180(iParam0);
}

var func_180(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

void func_181(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "fsp");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "loc");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "head");
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (iVar2 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar2, iVar0) == 5)
		{
			Global_4456448.f_125558[iVar0 /*5*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar2, iVar0) };
			Global_4456448.f_125558[iVar0 /*5*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar3, iVar0);
		}
		else
		{
			Global_4456448.f_125558[iVar0 /*5*/] = { 0f, 0f, 0f };
			Global_4456448.f_125558[iVar0 /*5*/].f_3 = 0f;
		}
		iVar0++;
	}
}

void func_182(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14[4];
	var uVar19;
	var uVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	var uVar42;
	int iVar43;
	var uVar44;
	var uVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	var uVar62[4];
	var uVar67[4];
	var uVar72[4];
	var uVar77[4];
	var uVar82[4];
	var uVar87[4];
	var uVar92[4];
	var uVar97[4];
	var uVar102[4];
	var uVar107[4];
	var uVar112[4];
	var uVar117;
	var uVar118;
	var uVar119;
	var uVar120;
	var uVar121;
	var uVar122;
	int iVar123;
	var uVar124;
	var uVar125;
	var uVar126;
	var uVar127;
	var uVar128;
	var uVar129;
	var uVar130;
	var uVar131;
	var uVar132;
	var uVar133;
	var uVar134;
	var uVar135;
	var uVar136;
	var uVar137;
	var uVar138;
	var uVar139;
	var uVar140;
	var uVar141;
	int iVar142;
	int iVar143;
	int iVar144;
	int iVar145;
	int iVar146;
	int iVar147;
	int iVar148;
	int iVar149;
	int iVar150;
	int iVar151;
	int iVar152;
	int iVar153;
	int iVar154;
	int iVar155;
	int iVar156;
	int iVar157;
	int iVar158;
	int iVar159;
	int iVar160;
	var uVar161;
	var uVar162;
	var uVar163;
	var uVar164;
	int iVar165;
	int iVar166;
	int iVar167;
	int iVar168;
	int iVar169;
	int iVar170;
	int iVar171;
	int iVar172;
	int iVar173;
	int iVar174;
	int iVar175;
	int iVar176;
	int iVar177;
	int iVar178;
	int iVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	int iVar187;
	int iVar188;
	var uVar189;
	var uVar190;
	var uVar191;
	var uVar192;
	int iVar193;
	int iVar194;
	var uVar195;
	var uVar196;
	var uVar197;
	var uVar198;
	int iVar199;
	var uVar200;
	var uVar201;
	var uVar202;
	int iVar203;
	int iVar204;
	int iVar205;
	int iVar206;
	int iVar207;
	int iVar208;
	int iVar209;
	var uVar210[8];
	var uVar219[8];
	var uVar228[8];
	var uVar237[8];
	var uVar246[8];
	var uVar255[8];
	var uVar264[8];
	var uVar273[8];
	int iVar282;
	int iVar283;
	int iVar284;
	int iVar285;
	int iVar286;
	int iVar287;
	int iVar288;
	int iVar289;
	int iVar290;
	int iVar291;
	int iVar292;
	int iVar293;
	int iVar294;
	int iVar295;
	int iVar296;
	var uVar297;
	int iVar298;
	var uVar299;
	int iVar300;
	int iVar301;
	int iVar302;
	int iVar303;
	int iVar304;
	int iVar305;
	int iVar306;
	int iVar307;
	int iVar308;
	int iVar309;
	int iVar310;
	int iVar311;
	int iVar312;
	int iVar313;
	int iVar314;
	int iVar315;
	int iVar316;
	int iVar317;
	int iVar318;
	var uVar319;
	var uVar320;
	int iVar321;
	int iVar322;
	int iVar323;
	int iVar324;
	var uVar325[4];
	var uVar330[4];
	int iVar335;
	int iVar336;
	
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ene");
	Global_4456448.f_87003 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "no");
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar6, "spcap") == 2 && DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "spcap") != 0)
	{
		Global_4456448.f_87005 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "spcap");
	}
	else
	{
		Global_4456448.f_87005 = 50;
	}
	Global_4456448.f_87007 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "time");
	Global_4456448.f_87008 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "pal");
	uVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "loc");
	uVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "head");
	uVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "rng");
	uVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "model");
	uVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gun");
	uVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "skill");
	uVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "rsp");
	if (Global_4456448 == 1)
	{
		uVar14[0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team");
	}
	uVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "wep");
	uVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "hlt");
	iVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "lghlt");
	uVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "veh");
	uVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "foll");
	uVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "iaim");
	uVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "iaimt");
	uVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "iaimr");
	uVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "sanim");
	uVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "sat");
	uVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "saru");
	uVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "sara");
	uVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "satt");
	uVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pada");
	uVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "whost");
	uVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "flee");
	uVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "frr");
	iVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pfrmr");
	iVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psnt");
	iVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psnei");
	iVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "prorbs");
	iVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "p2sp");
	iVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "p2sh");
	uVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "accu");
	iVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "lgacc");
	uVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cmsty");
	uVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedbs");
	iVar46 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbstwo");
	iVar47 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs3");
	iVar48 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs4");
	iVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs5");
	iVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs6");
	iVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs7");
	iVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs8");
	iVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs9");
	iVar54 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs10");
	iVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs11");
	iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs12");
	iVar57 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paot");
	iVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pfh");
	iVar59 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pmfhat");
	iVar60 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pgtho");
	iVar61 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pgthoh");
	if (func_133())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_40 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar62[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar67[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar72[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "pSTRWA", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar77[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar82[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar87[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar92[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar97[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar102[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar107[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "pcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar112[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar210[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar219[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar228[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar237[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar255[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar246[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar264[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar273[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			iVar3++;
		}
		uVar117 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt");
		uVar118 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team");
		uVar119 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spawn");
		uVar120 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "acts");
		uVar121 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "scrrq");
		uVar122 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "awysrl");
		iVar123 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt2");
		uVar124 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team2");
		uVar125 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spawn2");
		uVar126 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "acts2");
		uVar127 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "scrrq2");
		uVar128 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "awysrl2");
		uVar129 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt3");
		uVar130 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team3");
		uVar131 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spawn3");
		uVar132 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "acts3");
		uVar133 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "scrrq3");
		uVar134 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "awysrl3");
		uVar135 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt4");
		uVar136 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team4");
		uVar137 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spawn4");
		uVar138 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "acts4");
		uVar139 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "scrrq4");
		uVar140 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "awysr4");
		uVar141 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "act");
		iVar142 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pper");
		iVar143 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "percr");
		iVar144 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "perca");
		iVar145 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "infr");
		iVar146 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cca");
		iVar147 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ccid");
		iVar148 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gfr");
		iVar149 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "msr");
		iVar150 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "bnr");
		iVar151 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "phor");
		iVar152 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "folr");
		iVar154 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pcvl");
		iVar155 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pcvr");
		iVar153 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdfw");
		iVar159 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pvdp1");
		iVar160 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pvdp2");
		iVar156 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paaw");
		iVar157 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paav1");
		iVar158 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paav2");
		uVar161 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "dt");
		uVar162 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "do");
		uVar189 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "dltd");
		uVar163 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "dtim");
		uVar164 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "dln");
		iVar165 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pvsp");
		uVar190 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "drge");
		uVar191 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "agrot");
		uVar192 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gtds");
		iVar193 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pstat");
		iVar194 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pstar");
		uVar195 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "dmv");
		uVar196 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "blkr");
		uVar197 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "let");
		uVar198 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "escr");
		iVar199 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "esco");
		uVar200 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actr");
		uVar201 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spkds");
		uVar202 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv");
		iVar203 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv2");
		iVar204 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv3");
		iVar205 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv4");
		iVar206 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv5");
		iVar207 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv6");
		iVar208 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv7");
		iVar209 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv8");
		iVar282 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedct");
		iVar284 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdcra");
		iVar283 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedcr");
		iVar286 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedsrT");
		iVar287 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedsrR");
		iVar285 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedcv");
		iVar288 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedbc");
		iVar289 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdbps");
		iVar290 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdbso");
		iVar291 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "avrad");
		iVar292 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdtc");
		iVar335 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdsbr");
		iVar293 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedst");
		iVar294 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gotor");
		iVar295 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "invbs");
		iVar296 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gort");
		uVar297 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gorr");
		uVar299 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gorw");
		iVar298 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cmvd");
		iVar300 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "csct");
		iVar301 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cscr");
		iVar302 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cscs");
		iVar303 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cstnm");
		iVar304 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pspdl");
		iVar305 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psgr");
		iVar306 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pssgr");
		iVar307 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psctt");
		iVar308 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pscto");
		iVar309 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pscta");
		iVar310 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psctac");
		iVar311 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psctv");
		iVar312 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pscth");
		iVar313 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psctot");
		iVar314 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psctoi");
		iVar315 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pscatd");
		iVar316 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pprtot");
		iVar317 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pprtoi");
		iVar318 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ppratd");
		uVar319 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cutsc");
		uVar320 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cutsh");
		iVar321 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cstsc");
		iVar322 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cstsh");
		iVar323 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "nmpass");
		iVar324 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "nmfail");
		iVar166 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pmcp");
		iVar167 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pmcf");
		iVar168 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pambv");
		iVar169 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pwrpt");
		iVar170 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pcash");
		iVar171 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ptrdi");
		iVar172 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pspov");
		iVar173 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paccc");
		iVar174 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pslp");
		iVar175 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psor");
		iVar176 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psort");
		iVar177 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pspovr");
		iVar186 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pspln");
		iVar185 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pcara");
		iVar187 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pior");
		iVar178 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paagzn");
		iVar188 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "piort");
		iVar179 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pfbr");
		iVar180 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pfbd");
		iVar181 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pBcor");
		iVar182 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pLcor");
		iVar183 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pCwhT");
		iVar184 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pFVehS");
		iVar336 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "phffa");
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar325[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar330[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_87003 - 1))
	{
		if (iVar0 < 80)
		{
			Global_4456448.f_87009[iVar0 /*400*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar7, iVar0) };
			Global_4456448.f_87009[iVar0 /*400*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar8, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar9, iVar0);
			if (Global_4456448.f_87009[iVar0 /*400*/].f_4 < 0.75f)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_4 = 0.75f;
			}
			iVar2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_15 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_15 = -346957479;
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_15 = iVar2;
			}
			if (!func_128() && !func_187())
			{
				if (!STREAMING::IS_MODEL_VALID(Global_4456448.f_87009[iVar0 /*400*/].f_15))
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_15 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar11, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_16 = iVar2;
			iVar2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_17 = iVar2;
			if (Global_4456448 == 1)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_18[0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar14[0], iVar0);
			}
			Global_4456448.f_87009[iVar0 /*400*/].f_51 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			if (!func_186(Global_4456448.f_87009[iVar0 /*400*/].f_16))
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_16 = joaat("weapon_pistol");
			}
			Global_4456448.f_87009[iVar0 /*400*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20, iVar0);
			if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar21, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_39 = -1;
			}
			Global_4456448.f_87009[iVar0 /*400*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar25, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar26, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_43 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_44 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_45 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar29, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar30, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_398 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_50 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar33, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_48 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar34, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar35, iVar0);
			if (((((iVar36 != 0 && iVar37 != 0) && iVar38 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar37, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar38, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar36, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_6 = 0f;
				Global_4456448.f_87009[iVar0 /*400*/].f_7 = 0;
				Global_4456448.f_87009[iVar0 /*400*/].f_8 = -1;
			}
			if (iVar39 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar39, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_14 = 0;
			}
			if (((iVar40 != 0 && iVar41 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar40, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar0) == 3)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_9 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar40, iVar0) };
				Global_4456448.f_87009[iVar0 /*400*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar41, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_9 = { 0f, 0f, 0f };
				Global_4456448.f_87009[iVar0 /*400*/].f_12 = 0f;
			}
			Global_4456448.f_87009[iVar0 /*400*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar42, iVar0);
			if (iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_36 = -1;
			}
			Global_4456448.f_87009[iVar0 /*400*/].f_49 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar44, iVar0);
			Global_4456448.f_87009[iVar0 /*400*/].f_250 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar45, iVar0);
			if (iVar46 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar46, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_251 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_251 = 0;
			}
			if (iVar47 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar47, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_252 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar47, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_252 = 0;
			}
			if (iVar48 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar48, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_253 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_253 = 0;
			}
			if (iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_254 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_254 = 0;
			}
			if (iVar50 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar50, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_255 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar50, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_255 = 0;
			}
			if (iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_256 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar51, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_256 = 0;
			}
			if (iVar52 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar52, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_257 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar52, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_257 = 0;
			}
			if (iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_258 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar53, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_258 = 0;
			}
			if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_259 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar54, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_259 = 0;
			}
			if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_260 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar55, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_260 = 0;
			}
			if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_261 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_261 = 0;
			}
			if (iVar57 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar57, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_262 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar57, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_262 = -1;
			}
			if (iVar58 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar58, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_263 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar58, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_263 = 0;
			}
			if (iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_264 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar59, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_264 = -1;
			}
			if (iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_395 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar60, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_395 = -1;
			}
			if (iVar61 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar61, iVar0) == 2)
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_396 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar61, iVar0);
			}
			else
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_396 = -1;
			}
			if (func_133())
			{
				Global_4456448.f_87009[iVar0 /*400*/].f_62 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar117, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_63 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar118, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_64 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar119, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_69 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar120, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_70 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar121, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_71 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar122, iVar0);
				if (iVar123 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar123, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_214 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar123, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_211 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar124, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_217 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar125, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_220 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar126, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_223 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar127, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_226 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar128, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_215 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar129, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_212 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar130, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_218 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar131, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_221 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar132, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_224 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar133, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_227 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar134, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_216 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar135, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_213 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar136, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_219 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar137, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_222 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar138, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_225 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar139, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_228 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar140, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_214 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_211 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_217 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_220 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_223 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_226 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_215 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_212 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_218 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_221 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_224 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_227 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_216 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_213 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_219 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_222 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_225 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_228 = -1;
				}
				Global_4456448.f_87009[iVar0 /*400*/].f_68 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar141, iVar0);
				if (iVar142 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar142, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_276 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar142, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_276 = 0;
				}
				if (iVar143 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar143, iVar0) == 3)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_277 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar143, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_277 = -1f;
				}
				if (iVar144 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar144, iVar0) == 3)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_278 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar144, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_278 = -1f;
				}
				if (iVar145 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar145, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_279 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar145, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_279 = 250;
				}
				if (iVar146 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar146, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_282 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar146, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_282 = 0;
				}
				if (iVar147 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar147, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_283 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar147, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_283 = -1;
				}
				if (iVar148 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar148, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_284 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar148, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_284 = 0;
				}
				if (iVar149 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar149, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_280 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar149, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_280 = 0;
				}
				if (iVar150 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar150, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_281 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar150, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_281 = -1;
				}
				if (iVar151 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar151, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_348 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar151, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_348 = -1;
				}
				if (iVar152 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar152, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_349 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar152, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_349 = -1;
				}
				if (iVar154 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar154, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_285 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar154, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_285 = { 0f, 0f, 0f };
				}
				if (iVar155 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar155, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_288 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar155, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_288 = { 0f, 0f, 0f };
				}
				if (((((iVar159 != 0 && iVar160 != 0) && iVar153 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar159, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar160, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar153, iVar0) == 3)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_296 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar159, iVar0) };
					Global_4456448.f_87009[iVar0 /*400*/].f_299 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar160, iVar0) };
					Global_4456448.f_87009[iVar0 /*400*/].f_302 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar153, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_296 = { 0f, 0f, 0f };
					Global_4456448.f_87009[iVar0 /*400*/].f_299 = { 0f, 0f, 0f };
					Global_4456448.f_87009[iVar0 /*400*/].f_302 = 1f;
				}
				if (((((iVar156 != 0 && iVar157 != 0) && iVar158 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar156, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar157, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar158, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_242 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar156, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_236 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar157, iVar0) };
					Global_4456448.f_87009[iVar0 /*400*/].f_239 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar158, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_242 = 0f;
					Global_4456448.f_87009[iVar0 /*400*/].f_236 = { 0f, 0f, 0f };
					Global_4456448.f_87009[iVar0 /*400*/].f_239 = { 0f, 0f, 0f };
				}
				if (iVar165 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar165, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_316 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar165, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_316 = 0;
				}
				Global_4456448.f_87009[iVar0 /*400*/].f_292 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar161, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_291 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar162, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_293 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar163, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_294 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar164, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_295 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar190, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_387 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar189, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_303 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar191, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_243 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar192, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar195, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar196, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_234 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar197, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_244 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar198, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_399 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar201, iVar0);
				if (iVar199 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar199, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_245 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar199, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_245 = { 0f, 0f, 0f };
				}
				Global_4456448.f_87009[iVar0 /*400*/].f_235 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar200, iVar0);
				Global_4456448.f_87009[iVar0 /*400*/].f_72 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar202, iVar0) };
				if (iVar203 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar203, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar203, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar204 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar204, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar204, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar205 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar205, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar205, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar206 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar206, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[3 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar206, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar207 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar207, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[4 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar207, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[4 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar208 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar208, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[5 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar208, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[5 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar209 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar209, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[6 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar209, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_75[6 /*3*/] = { 0f, 0f, 0f };
				}
				if (((iVar193 != 0 && iVar194 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar193, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar194, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_248 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar193, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_249 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar194, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_248 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_249 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 7)
				{
					if (uVar210[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar210[iVar3], iVar0) == 2)
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_98[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar210[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_98[iVar3] = 0;
					}
					if (uVar219[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar219[iVar3], iVar0) == 2)
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_107[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar219[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_107[iVar3] = 0;
					}
					if (((uVar228[iVar3] != 0 && uVar237[iVar3] != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar228[iVar3], iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar237[iVar3], iVar0) == 2)
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_116[iVar3 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar228[iVar3], iVar0) };
						Global_4456448.f_87009[iVar0 /*400*/].f_141[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar237[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_116[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_4456448.f_87009[iVar0 /*400*/].f_141[iVar3] = 3;
					}
					if (uVar246[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar246[iVar3], iVar0) == 2)
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_168[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar246[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_168[iVar3] = -1;
					}
					if (uVar255[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar255[iVar3], iVar0) == 3)
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_150[iVar3] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar255[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_150[iVar3] = 0f;
					}
					if (uVar264[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar264[iVar3], iVar0) == 3)
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_159[iVar3] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar264[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_159[iVar3] = 0f;
					}
					if (uVar273[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar273[iVar3], iVar0) == 3)
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_177[iVar3] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar273[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_177[iVar3] = 0f;
					}
					iVar3++;
				}
				if (iVar283 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar283, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_304 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar283, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_304 = -1;
				}
				if (iVar282 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar282, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_305 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar282, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_305 = -1;
				}
				if (iVar286 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar286, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_309 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar286, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_309 = -1;
				}
				if (iVar287 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar287, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_308 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar287, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_308 = -1;
				}
				if (iVar285 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar285, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_307 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar285, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_307 = -1;
				}
				if (iVar284 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar284, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_306 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar284, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_306 = -1;
				}
				if (iVar293 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar293, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_315 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar293, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_315 = -3;
				}
				if (iVar288 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar288, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_331 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar288, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_331 = 0;
				}
				if (iVar289 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar289, iVar0) == 3)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_342 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar289, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_342 = 1f;
				}
				if (iVar290 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar290, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_343 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar290, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_343 = 0;
				}
				if (iVar292 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar292, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_394 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar292, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_394 = 1;
				}
				if (iVar335 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar335, iVar0) == 3)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_397 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar335, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_397 = 0f;
				}
				if (iVar291 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar291, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_97 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar291, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_97 = 0;
				}
				if (iVar294 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar294, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_52 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar294, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_52 = 0;
				}
				if (iVar295 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar295, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_53 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar295, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_53 = 0;
				}
				if (iVar303 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar303, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_209 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar303, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_209 = -1;
				}
				if (iVar304 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar304, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_210 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar304, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_210 = 0;
				}
				if (iVar305 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar305, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_65 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar305, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_65 = 0;
				}
				if (iVar306 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar306, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_66 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar306, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_66 = 0;
				}
				if (iVar166 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar166, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_329 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar166, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_329 = -1;
				}
				if (iVar167 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar167, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_330 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar167, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_330 = -1;
				}
				if (iVar168 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar168, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_350 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar168, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_350 = -1;
				}
				if (iVar169 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar169, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_356 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar169, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_356 = -1;
				}
				if (iVar170 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar170, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_357 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar170, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_357 = -1;
				}
				if (iVar171 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar171, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_358 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar171, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_358 = -1;
				}
				if (iVar172 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar172, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_362 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar172, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_362 = -1;
				}
				if (iVar173 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar173, iVar0) == 3)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_363 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar173, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_363 = 0f;
				}
				if (iVar174 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar174, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_359 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar174, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_359 = -1;
				}
				if (iVar175 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar175, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_360 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar175, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_360 = -1;
				}
				if (iVar176 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar176, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_361 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar176, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_361 = -1;
				}
				if (iVar178 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar178, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_388 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar178, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_388 = -1;
				}
				if (iVar179 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar179, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_389 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar179, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_389 = -1;
				}
				if (iVar180 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar180, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_390 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar180, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_390 = 10;
				}
				if (iVar181 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar181, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_391 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar181, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_391 = -1;
				}
				if (iVar182 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar182, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_392 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar182, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_392 = -1;
				}
				if (iVar183 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar183, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_393 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar183, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_393 = 0;
				}
				if (iVar184 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar184, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_67 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar184, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_67 = -1;
				}
				if (iVar336 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar336, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_275 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar336, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_275 = -1;
				}
				if (iVar177 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar177, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_364 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar177, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_364 = -1;
				}
				if (iVar185 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar185, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_383 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar185, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_383 = 10;
				}
				if (iVar187 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar187, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_385 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar187, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_385 = -1;
				}
				if (iVar188 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar188, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_384 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar188, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_384 = 0;
				}
				if (iVar186 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar186, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_386 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar186, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_386 = 0;
				}
				if (((((iVar307 != 0 && iVar308 != 0) && iVar309 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar307, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar308, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar309, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_195 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar307, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_196 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar308, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_198 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar309, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_195 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_196 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_198 = 0;
				}
				if (((((iVar313 != 0 && iVar314 != 0) && iVar315 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar313, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar314, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar315, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_203 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar313, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_204 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar314, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_205 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar315, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_203 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_204 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_205 = -1;
				}
				if (((((iVar316 != 0 && iVar317 != 0) && iVar318 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar316, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar317, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar318, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_206 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar316, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_207 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar317, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_208 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar318, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_206 = 0;
					Global_4456448.f_87009[iVar0 /*400*/].f_207 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_208 = -1;
				}
				if (iVar310 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar310, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_197 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar310, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_197 = 0;
				}
				if (iVar311 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar311, iVar0) == 5)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_199 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar311, iVar0) };
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_199 = { 0f, 0f, 0f };
				}
				if (iVar312 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar312, iVar0) == 3)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_202 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar312, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_202 = 0f;
				}
				if (iVar298 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar298, iVar0) == 3)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar298, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_60 = 0f;
				}
				if (((iVar296 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar296, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar297, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar299, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_54 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar296, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_55 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar297, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_56 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar299, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_54 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_55 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_56 = joaat("weapon_pistol");
				}
				if (((((iVar300 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar300, iVar0) == 2) && iVar301 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar301, iVar0) == 2) && iVar302 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar302, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar300, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar301, iVar0);
					Global_4456448.f_87009[iVar0 /*400*/].f_59 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar302, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_57 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_58 = -1;
					Global_4456448.f_87009[iVar0 /*400*/].f_59 = -1;
				}
				if (Global_4456448.f_2 != 6 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar319, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_344 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar319, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_344 = -1;
				}
				if (iVar323 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar323, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_327 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar323, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_327 = -1;
				}
				if (iVar324 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar324, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_328 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar324, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_328 = -1;
				}
				if (Global_4456448.f_2 != 6 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar320, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_345 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar320, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_345 = 0;
				}
				if (iVar321 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar321, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_346 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar321, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_346 = -1;
				}
				if (iVar322 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar322, iVar0) == 2)
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_347 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar322, iVar0);
				}
				else
				{
					Global_4456448.f_87009[iVar0 /*400*/].f_347 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar325[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar325[iVar1], iVar0) == 5)
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_365[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar325[iVar1], iVar0) };
					}
					else
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_365[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (uVar330[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar330[iVar1], iVar0) == 3)
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_378[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar330[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_378[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_4456448.f_40 - 1))
				{
					if (iVar3 < 4)
					{
						Global_4456448.f_87009[iVar0 /*400*/].f_18[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar14[iVar3], iVar0);
						Global_4456448.f_87009[iVar0 /*400*/].f_23[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar62[iVar3], iVar0);
						Global_4456448.f_87009[iVar0 /*400*/].f_28[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar67[iVar3], iVar0);
						if (Global_4456448.f_87009[iVar0 /*400*/].f_28[iVar3] == -1)
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_28[iVar3] = 99999;
						}
						if (uVar72[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar72[iVar3], iVar0) == 2)
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_265[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar72[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_265[iVar3] = -1;
						}
						if (uVar77[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar77[iVar3], iVar0) == 2)
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_270[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar77[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_270[iVar3] = -1;
						}
						if (uVar82[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar82[iVar3], iVar0) == 2)
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_229[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar82[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_229[iVar3] = 0;
						}
						if (uVar87[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar87[iVar3], iVar0) == 2)
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_317[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar87[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_317[iVar3] = 0;
						}
						if (uVar92[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar92[iVar3], iVar0) == 2)
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_322[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar92[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_322[iVar3] = 0;
						}
						if (((uVar97[iVar3] != 0 && uVar102[iVar3] != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar97[iVar3], iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar102[iVar3], iVar0) == 2)
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_332[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar97[iVar3], iVar0);
							Global_4456448.f_87009[iVar0 /*400*/].f_337[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar102[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_332[iVar3] = -1;
							Global_4456448.f_87009[iVar0 /*400*/].f_337[iVar3] = -1;
						}
						if (uVar107[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar107[iVar3], iVar0) == 2)
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_351[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar107[iVar3], iVar0);
						}
						else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_43710[iVar3 /*4*/][func_185(iVar0)], func_184(iVar0)))
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_351[iVar3] = -1;
						}
						else
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_351[iVar3] = -2;
						}
						if (uVar112[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar112[iVar3], iVar0) == 2)
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_310[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar112[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_87009[iVar0 /*400*/].f_310[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_183(&uVar6);
}

void func_183(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	int iVar32;
	var uVar33;
	int iVar34;
	int iVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	int iVar42;
	var uVar43;
	var uVar44;
	var uVar45;
	int iVar46;
	var uVar47;
	int iVar48;
	int iVar49;
	var uVar50;
	var uVar51;
	var uVar52;
	var uVar53;
	var uVar54;
	var uVar55;
	int iVar56;
	
	Global_4456448.f_119798[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*uParam0, "no0");
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "loc0");
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "head0");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "bit0");
	iVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "veh0");
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tars0");
	iVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "vfrs0");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "vfre0");
	uVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ty0");
	uVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "as0");
	uVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "qu0");
	uVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "gg0");
	uVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ar0");
	uVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ttm0");
	iVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tspr0");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_119798[0] - 1))
	{
		Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar1, iVar0) };
		Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar2, iVar0);
		Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar3, iVar0);
		if (iVar4 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar4, iVar0) == 2)
		{
			Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_7 = -1;
		}
		Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar5, iVar0);
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 2)
		{
			Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar0);
		}
		else
		{
			Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_10 = -1;
		}
		if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_11 = -1;
		}
		Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8, iVar0);
		Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
		Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar10, iVar0);
		Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar11, iVar0);
		Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
		Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13, iVar0);
		if (iVar14 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar14, iVar0) == 2)
		{
			Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar14, iVar0);
		}
		else
		{
			Global_4456448.f_120945[0 /*1141*/][iVar0 /*19*/].f_18 = 0;
		}
		iVar0++;
	}
	Global_4456448.f_119798[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*uParam0, "no1");
	uVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "loc1");
	uVar16 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "head1");
	uVar17 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "bit1");
	iVar18 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "veh1");
	uVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tars1");
	iVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "vfrs1");
	iVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "vfre1");
	uVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ty1");
	uVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "as1");
	uVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "qu1");
	uVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "gg1");
	uVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ar1");
	uVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ttm1");
	iVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tspr1");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_119798[1] - 1))
	{
		Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar15, iVar0) };
		Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar16, iVar0);
		Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17, iVar0);
		if (iVar18 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar18, iVar0) == 2)
		{
			Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar18, iVar0);
		}
		else
		{
			Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_7 = -1;
		}
		Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
		if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar0) == 2)
		{
			Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar0);
		}
		else
		{
			Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_10 = -1;
		}
		if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar0) == 2)
		{
			Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar21, iVar0);
		}
		else
		{
			Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_11 = -1;
		}
		Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
		Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23, iVar0);
		Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24, iVar0);
		Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar25, iVar0);
		Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar26, iVar0);
		Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27, iVar0);
		if (iVar28 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar28, iVar0) == 2)
		{
			Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar0);
		}
		else
		{
			Global_4456448.f_120945[1 /*1141*/][iVar0 /*19*/].f_18 = 0;
		}
		iVar0++;
	}
	Global_4456448.f_119798[2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*uParam0, "no2");
	uVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "loc2");
	uVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "head2");
	uVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "bit2");
	iVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "veh2");
	uVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tars2");
	iVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "vfrs2");
	iVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "vfre2");
	uVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ty2");
	uVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "as2");
	uVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "qu2");
	uVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "gg2");
	uVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ar2");
	uVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ttm2");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tspr2");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_119798[2] - 1))
	{
		Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar29, iVar0) };
		Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar30, iVar0);
		Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
		if (iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 2)
		{
			Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_7 = -1;
		}
		Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar33, iVar0);
		if (iVar34 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar34, iVar0) == 2)
		{
			Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar0);
		}
		else
		{
			Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_10 = -1;
		}
		if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
		{
			Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
		}
		else
		{
			Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_11 = -1;
		}
		Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar36, iVar0);
		Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar37, iVar0);
		Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38, iVar0);
		Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar39, iVar0);
		Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar40, iVar0);
		Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar41, iVar0);
		if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar0) == 2)
		{
			Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
		}
		else
		{
			Global_4456448.f_120945[2 /*1141*/][iVar0 /*19*/].f_18 = 0;
		}
		iVar0++;
	}
	Global_4456448.f_119798[3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*uParam0, "no3");
	uVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "loc3");
	uVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "head3");
	uVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "bit3");
	iVar46 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "veh3");
	uVar47 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tars3");
	iVar48 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "vfrs3");
	iVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "vfre3");
	uVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ty3");
	uVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "as3");
	uVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "qu3");
	uVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "gg3");
	uVar54 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ar3");
	uVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ttm3");
	iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tspr3");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_119798[3] - 1))
	{
		Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar43, iVar0) };
		Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar44, iVar0);
		Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar45, iVar0);
		if (iVar46 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar46, iVar0) == 2)
		{
			Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar0);
		}
		else
		{
			Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_7 = -1;
		}
		Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar47, iVar0);
		if (iVar48 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar48, iVar0) == 2)
		{
			Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar0);
		}
		else
		{
			Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_10 = -1;
		}
		if (iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar0) == 2)
		{
			Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar0);
		}
		else
		{
			Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_11 = -1;
		}
		Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar50, iVar0);
		Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar51, iVar0);
		Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52, iVar0);
		Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar53, iVar0);
		Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar54, iVar0);
		Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar55, iVar0);
		if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar0) == 2)
		{
			Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar0);
		}
		else
		{
			Global_4456448.f_120945[3 /*1141*/][iVar0 /*19*/].f_18 = 0;
		}
		iVar0++;
	}
}

int func_184(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_185(iParam0) * 31);
}

int func_185(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_186(int iParam0)
{
	if (((((((((((((((((((((((((iParam0 == joaat("weapon_pistol") || iParam0 == joaat("weapon_microsmg")) || iParam0 == joaat("weapon_smg")) || iParam0 == joaat("weapon_assaultrifle")) || iParam0 == joaat("weapon_advancedrifle")) || iParam0 == joaat("weapon_mg")) || iParam0 == joaat("weapon_combatmg")) || iParam0 == joaat("weapon_pumpshotgun")) || iParam0 == joaat("weapon_sawnoffshotgun")) || iParam0 == joaat("weapon_sniperrifle")) || iParam0 == joaat("weapon_heavysniper")) || iParam0 == joaat("weapon_grenadelauncher")) || iParam0 == joaat("weapon_rpg")) || iParam0 == joaat("weapon_minigun")) || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_unarmed")) || iParam0 == joaat("weapon_machinepistol")) || iParam0 == joaat("weapon_grenade")) || iParam0 == joaat("weapon_stickybomb")) || iParam0 == joaat("weapon_molotov")) || iParam0 == joaat("weapon_pipebomb")) || iParam0 == joaat("weapon_carbinerifle")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_wrench"))
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_188(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ene");
	Global_4456448.f_119797 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "no");
	Global_4456448.f_55584 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "veh");
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "loc");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "head");
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "team");
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "dmSPTR");
	if (Global_4456448.f_119797 > 60)
	{
		Global_4456448.f_119797 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_119797 - 1))
	{
		if (iVar0 < 60)
		{
			Global_4456448.f_119804[iVar0 /*19*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar2, iVar0) };
			Global_4456448.f_119804[iVar0 /*19*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar3, iVar0);
			Global_4456448.f_119804[iVar0 /*19*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar4, iVar0);
			Global_4456448.f_119804[iVar0 /*19*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar5, iVar0);
		}
		iVar0++;
	}
	func_183(&uVar1);
}

void func_189(int iParam0)
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
	int iVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "dprop");
	Global_4456448.f_75375 = func_192(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "no"), 0, 200);
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "loc");
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "vRot");
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "head");
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "model");
	uVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asst");
	uVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asso");
	uVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asss");
	iVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "pasc");
	iVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asst2");
	uVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asso2");
	uVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asss2");
	uVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "pasc2");
	uVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asst3");
	uVar16 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asso3");
	uVar17 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asss3");
	uVar18 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "pasc3");
	uVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asst4");
	uVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asso4");
	uVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "asss4");
	uVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "pasc4");
	iVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "prpct");
	iVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "prpcr");
	iVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "prcra");
	iVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "prpbs");
	iVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "prpkt");
	iVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "dprorc");
	iVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "prpdclr");
	iVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "dptrpx");
	iVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "dpsl");
	iVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "dpcl");
	iVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "dptrRS");
	iVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "dyipho");
	iVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "dyipbtt");
	iVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "dynrpil");
	if (Global_4456448.f_75375 > 32)
	{
		Global_4456448.f_75375 = 32;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_75375 - 1))
	{
		Global_4456448.f_75377[iVar0 /*39*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar3, iVar0) };
		Global_4456448.f_75377[iVar0 /*39*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar4, iVar0) };
		Global_4456448.f_75377[iVar0 /*39*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar5, iVar0);
		Global_4456448.f_75377[iVar0 /*39*/].f_8 = -1;
		iVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar6, iVar0);
		Global_4456448.f_75377[iVar0 /*39*/].f_7 = func_191(iVar1);
		if (!STREAMING::IS_MODEL_VALID(Global_4456448.f_75377[iVar0 /*39*/].f_7))
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_7 = -1344435013;
		}
		Global_4456448.f_75377[iVar0 /*39*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar7, iVar0);
		Global_4456448.f_75377[iVar0 /*39*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8, iVar0);
		Global_4456448.f_75377[iVar0 /*39*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
		if (Global_4456448.f_75377[iVar0 /*39*/].f_13 == -1)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_13 = 0;
		}
		if (iVar11 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar11, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar11, iVar0);
			Global_4456448.f_75377[iVar0 /*39*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
			Global_4456448.f_75377[iVar0 /*39*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13, iVar0);
			Global_4456448.f_75377[iVar0 /*39*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar15, iVar0);
			Global_4456448.f_75377[iVar0 /*39*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar16, iVar0);
			Global_4456448.f_75377[iVar0 /*39*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17, iVar0);
			Global_4456448.f_75377[iVar0 /*39*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			Global_4456448.f_75377[iVar0 /*39*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20, iVar0);
			Global_4456448.f_75377[iVar0 /*39*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar21, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_22 = -1;
			Global_4456448.f_75377[iVar0 /*39*/].f_19 = 0;
			Global_4456448.f_75377[iVar0 /*39*/].f_25 = 0;
			Global_4456448.f_75377[iVar0 /*39*/].f_23 = -1;
			Global_4456448.f_75377[iVar0 /*39*/].f_20 = 0;
			Global_4456448.f_75377[iVar0 /*39*/].f_26 = 0;
			Global_4456448.f_75377[iVar0 /*39*/].f_24 = -1;
			Global_4456448.f_75377[iVar0 /*39*/].f_21 = 0;
			Global_4456448.f_75377[iVar0 /*39*/].f_27 = 0;
		}
		if (iVar10 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar10, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar10, iVar0);
			Global_4456448.f_75377[iVar0 /*39*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar14, iVar0);
			Global_4456448.f_75377[iVar0 /*39*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18, iVar0);
			Global_4456448.f_75377[iVar0 /*39*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_14 = 0;
			Global_4456448.f_75377[iVar0 /*39*/].f_28 = 0;
			Global_4456448.f_75377[iVar0 /*39*/].f_29 = 0;
			Global_4456448.f_75377[iVar0 /*39*/].f_30 = 0;
		}
		if (iVar24 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar24, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar24, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_15 = -1;
		}
		if (iVar23 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar23, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar23, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_16 = -1;
		}
		if (iVar25 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar25, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_17 = -1;
		}
		if (iVar26 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar26, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_18 = 0;
		}
		if (iVar28 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar28, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_31 = 0;
		}
		if (iVar27 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar27, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_9 = 0;
		}
		if (iVar29 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar29, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar29, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_10 = 1;
		}
		if (iVar30 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar30, iVar0) == 3)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar30, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_32 = 2f;
		}
		if (iVar33 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar33, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar33, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_35 = -1;
		}
		if (iVar31 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar31, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar31, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_33 = 0;
		}
		if (iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_34 = 0;
		}
		if (iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_34 = 0;
		}
		if (iVar34 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar34, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_36 = 0;
		}
		if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_37 = 0;
		}
		if (iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar0) == 2)
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
		}
		else
		{
			Global_4456448.f_75377[iVar0 /*39*/].f_38 = -1;
		}
		iVar0++;
	}
	iVar37 = iVar0;
	if (func_190() || Global_4456448 == 1)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_55666 - 1))
		{
			Global_4456448.f_75377[iVar37 /*39*/] = { Global_4456448.f_55669[iVar0 /*149*/] };
			Global_4456448.f_75377[iVar37 /*39*/].f_3 = { Global_4456448.f_55669[iVar0 /*149*/].f_4 };
			Global_4456448.f_75377[iVar37 /*39*/].f_6 = Global_4456448.f_55669[iVar0 /*149*/].f_3;
			Global_4456448.f_75377[iVar37 /*39*/].f_8 = iVar0;
			Global_4456448.f_75377[iVar37 /*39*/].f_7 = -699955605;
			iVar38 = 0;
			while (iVar38 <= 3)
			{
				Global_4456448.f_55669[iVar37 /*149*/].f_17[iVar38] = 0;
				Global_4456448.f_55669[iVar37 /*149*/].f_22[iVar38] = 99999;
				iVar38++;
			}
			Global_4456448.f_75376++;
			Global_4456448.f_75375++;
			iVar37++;
			iVar0++;
		}
	}
}

int func_190()
{
	if (Global_4456448 == 0 && Global_4456448.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)
{
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_01"))
	{
		return 1334699559;
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_02"))
	{
		return -1350687226;
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_03"))
	{
		return -1572271204;
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_04"))
	{
		return 335572745;
	}
	if (iParam0 == joaat("stt_prop_stunt_tube_fn_05"))
	{
		return -155700103;
	}
	if (iParam0 == joaat("prop_offroad_tyres01"))
	{
		return 1051213133;
	}
	else if (iParam0 == 1212630005)
	{
		return -1359996601;
	}
	else if (iParam0 == -1135198622)
	{
		return -1061569318;
	}
	else if (iParam0 == 55777251)
	{
		return 1290523964;
	}
	else if (iParam0 == 662880068)
	{
		return 662880068;
	}
	else if (iParam0 == -1658282356)
	{
		return -1658282356;
	}
	if ((GAMEPLAY::IS_ORBIS_VERSION() || GAMEPLAY::IS_DURANGO_VERSION()) || GAMEPLAY::IS_PC_VERSION())
	{
		if (iParam0 == -56302774)
		{
			return joaat("prop_tree_fallen_02");
		}
		if (iParam0 == -1924165356)
		{
			return -593160806;
		}
		if (iParam0 == 1837927001)
		{
			return 1566353027;
		}
		if (iParam0 == -960602868)
		{
			return 11906616;
		}
		if (iParam0 == -72825120)
		{
			return -1705943745;
		}
		if (iParam0 == -713058190)
		{
			return -1656246279;
		}
	}
	else if (GAMEPLAY::IS_XBOX360_VERSION() || GAMEPLAY::IS_PS3_VERSION())
	{
		if (iParam0 == joaat("prop_tree_fallen_02"))
		{
			return -56302774;
		}
		if (iParam0 == -593160806)
		{
			return -1924165356;
		}
		if (iParam0 == 1566353027)
		{
			return 1837927001;
		}
		if (iParam0 == 11906616)
		{
			return -960602868;
		}
		if (iParam0 == -1705943745)
		{
			return -72825120;
		}
		if (iParam0 == -1656246279)
		{
			return -713058190;
		}
	}
	return iParam0;
}

int func_192(int iParam0, int iParam1, int iParam2)
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

void func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	var uVar28;
	var uVar29;
	int iVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	var uVar50;
	int iVar51;
	var uVar52;
	var uVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	var uVar68[4];
	char[] cVar73[8];
	var uVar75;
	int iVar76;
	
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "prop");
	Global_4456448.f_59274 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar3, "no");
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "loc");
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "vRot");
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "head");
	uVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "model");
	iVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "cmodel");
	uVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asst");
	uVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asso");
	uVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asss");
	iVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pasc");
	iVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asst2");
	uVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asso2");
	uVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asss2");
	uVar16 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pasc2");
	uVar17 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asst3");
	uVar18 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asso3");
	uVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asss3");
	uVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pasc3");
	uVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asst4");
	uVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asso4");
	uVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asss4");
	uVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pasc4");
	iVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "bpbid");
	iVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "bpbip");
	iVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "bpbpt");
	uVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "fcuat");
	uVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpclcr");
	iVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpclc");
	uVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "aldel");
	uVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "alsnd");
	uVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "alteam");
	uVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "flvfx");
	uVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "flcl");
	uVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpcl");
	iVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prplod");
	iVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpatn");
	iVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpasn");
	iVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpclr");
	iVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prptsp");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prptds");
	iVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpsba");
	iVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "sndid");
	iVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "sndtri");
	iVar46 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "sndlmt");
	iVar47 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpsnpp");
	iVar48 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpct");
	iVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpcr");
	uVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpbs2");
	iVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prcra");
	uVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpbs");
	uVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prers");
	iVar54 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "ptfxtr");
	iVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "ptfxst");
	iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prrorc");
	iVar57 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "updatez");
	iVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "updtime");
	iVar59 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "upddel");
	iVar60 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pLODDist");
	iVar61 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "fwTPos");
	iVar62 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "fwTSize");
	iVar63 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "fwTeam");
	iVar64 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "TrTAct");
	iVar65 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "TrPPD");
	iVar66 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpdypil");
	iVar67 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "TTPH");
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		StringCopy(&cVar73, "prpsdp", 8);
		StringIntConCat(&cVar73, iVar2, 8);
		uVar68[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, &cVar73);
		iVar2++;
	}
	uVar75 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pdip");
	if (Global_4456448.f_59274 > 200)
	{
		Global_4456448.f_59274 = 200;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_154084 - 1))
	{
		if (iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar8, iVar0) == 2)
		{
			iVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar8, iVar0);
			Global_4456448.f_153983[iVar0] = iVar1;
			if (STREAMING::IS_MODEL_VALID(Global_4456448.f_153983[iVar0]))
			{
			}
		}
		iVar0++;
	}
	iVar76 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_59274 - 1))
	{
		Global_4456448.f_59275[iVar0 /*80*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar4, iVar0) };
		Global_4456448.f_59275[iVar0 /*80*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar5, iVar0) };
		Global_4456448.f_59275[iVar0 /*80*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar6, iVar0);
		iVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar7, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_7 = func_191(iVar1);
		if (Global_4456448.f_59275[iVar0 /*80*/].f_7 == joaat("stt_prop_stunt_tube_speed"))
		{
			iVar76++;
			if (iVar76 > 15)
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_7 = joaat("stt_prop_stunt_tube_xxs");
			}
		}
		if (!STREAMING::IS_MODEL_VALID(Global_4456448.f_59275[iVar0 /*80*/].f_7))
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_7 = joaat("prop_const_fence02b");
		}
		if (Global_4456448.f_59275[iVar0 /*80*/].f_7 == 1494272245)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_7 = 1792175224;
		}
		if ((((!func_160() && Global_4456448.f_131902 == 0) && STREAMING::IS_MODEL_VALID(Global_4456448.f_59275[iVar0 /*80*/].f_7)) && !Global_262145.f_18672) && !func_196())
		{
			if (func_195(Global_4456448.f_59275[iVar0 /*80*/].f_7))
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_7 = joaat("prop_const_fence02b");
			}
		}
		Global_4456448.f_59275[iVar0 /*80*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar10, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar11, iVar0);
		if (Global_4456448.f_59275[iVar0 /*80*/].f_10 == -1)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_10 = 0;
		}
		if (iVar25 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar25, iVar0) == 1)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_56 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_56 = 0;
		}
		if (iVar26 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar26, iVar0) == 1)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_57 = 0;
		}
		if (iVar27 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar27, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_58 = 0;
		}
		Global_4456448.f_59275[iVar0 /*80*/].f_59 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_69 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar29, iVar0);
		if (iVar30 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar30, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_70 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar30, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_70 = -1;
		}
		if (iVar13 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar13, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar13, iVar0);
			Global_4456448.f_59275[iVar0 /*80*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar14, iVar0);
			Global_4456448.f_59275[iVar0 /*80*/].f_45 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar15, iVar0);
			Global_4456448.f_59275[iVar0 /*80*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17, iVar0);
			Global_4456448.f_59275[iVar0 /*80*/].f_43 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18, iVar0);
			Global_4456448.f_59275[iVar0 /*80*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			Global_4456448.f_59275[iVar0 /*80*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar21, iVar0);
			Global_4456448.f_59275[iVar0 /*80*/].f_44 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
			Global_4456448.f_59275[iVar0 /*80*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_42 = -1;
			Global_4456448.f_59275[iVar0 /*80*/].f_39 = 0;
			Global_4456448.f_59275[iVar0 /*80*/].f_45 = 0;
			Global_4456448.f_59275[iVar0 /*80*/].f_43 = -1;
			Global_4456448.f_59275[iVar0 /*80*/].f_40 = 0;
			Global_4456448.f_59275[iVar0 /*80*/].f_46 = 0;
			Global_4456448.f_59275[iVar0 /*80*/].f_44 = -1;
			Global_4456448.f_59275[iVar0 /*80*/].f_41 = 0;
			Global_4456448.f_59275[iVar0 /*80*/].f_47 = 0;
		}
		if (iVar12 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar12, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar12, iVar0);
			Global_4456448.f_59275[iVar0 /*80*/].f_48 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar16, iVar0);
			Global_4456448.f_59275[iVar0 /*80*/].f_49 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20, iVar0);
			Global_4456448.f_59275[iVar0 /*80*/].f_50 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_11 = 0;
			Global_4456448.f_59275[iVar0 /*80*/].f_48 = 0;
			Global_4456448.f_59275[iVar0 /*80*/].f_49 = 0;
			Global_4456448.f_59275[iVar0 /*80*/].f_50 = 0;
		}
		Global_4456448.f_59275[iVar0 /*80*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
		if (Global_4456448.f_59275[iVar0 /*80*/].f_7 != -1611832715)
		{
			if (Global_4456448.f_59275[iVar0 /*80*/].f_12 > 0 && Global_4456448.f_59275[iVar0 /*80*/].f_12 < 1000)
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_12 = func_194(Global_4456448.f_59275[iVar0 /*80*/].f_12);
			}
		}
		Global_4456448.f_59275[iVar0 /*80*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar33, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar34, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar35, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar36, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar41, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar42, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar45, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_63 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar0);
		if (iVar37 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar37, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_24 = -1;
		}
		if (iVar38 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar38, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_25 = 0;
		}
		if (iVar39 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar39, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_26 = 0;
		}
		if (iVar40 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar40, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar40, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_27 = 1;
		}
		if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar0) == 3)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar41, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_34 = 0f;
		}
		if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar0) == 3)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar42, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_35 = 0.4f;
		}
		if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0) > 5)
		{
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0) == 15)
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_36 = 1;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0) == 25)
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_36 = 2;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0) == 35)
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_36 = 3;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0) == 45)
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_36 = 4;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0) == 55)
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_36 = 5;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0) == 16)
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_36 = 3;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0) == 30)
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_36 = 2;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0) == 44)
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_36 = 1;
			}
		}
		else if (iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_36 = 2;
		}
		if (iVar44 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar44, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_60 = 0;
		}
		if (iVar45 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar45, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar45, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_61 = 0;
		}
		if (iVar46 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar46, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_63 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_63 = 0;
		}
		if (iVar47 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar47, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar47, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_28 = 0;
		}
		if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar0) == 3)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar54, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_37 = 0f;
		}
		if (iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_18 = -1;
		}
		if (iVar48 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar48, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_19 = -1;
		}
		if (iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar51, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_20 = -1;
		}
		Global_4456448.f_59275[iVar0 /*80*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52, iVar0);
		Global_4456448.f_59275[iVar0 /*80*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar50, iVar0);
		if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar55, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_38 = 0;
		}
		if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_67 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_67 = 0;
		}
		Global_4456448.f_59275[iVar0 /*80*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar53, iVar0);
		if (iVar57 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar57, iVar0) == 3)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_52 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar57, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_52 = -1f;
		}
		if (iVar58 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar58, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_53 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar58, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_53 = 0;
		}
		if (iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_54 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar59, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_54 = 0;
		}
		if (iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_55 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar60, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_55 = 0;
		}
		if (iVar61 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar61, iVar0) == 5)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_71 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar61, iVar0) };
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_71 = { 0f, 0f, 0f };
		}
		if (iVar62 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar62, iVar0) == 3)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_74 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar62, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_74 = 0f;
		}
		if (iVar63 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar63, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_75 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar63, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_75 = 0;
		}
		if (iVar64 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar64, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_76 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar64, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_76 = -1;
		}
		if (iVar65 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar65, iVar0) == 3)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_77 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar65, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_77 = 0f;
		}
		if (iVar67 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar67, iVar0) == 3)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_78 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar67, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_78 = 0f;
		}
		if (iVar66 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar66, iVar0) == 2)
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_79 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar66, iVar0);
		}
		else
		{
			Global_4456448.f_59275[iVar0 /*80*/].f_79 = -1;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (uVar68[iVar2] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar68[iVar2], iVar0) == 2)
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_29[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar68[iVar2], iVar0);
			}
			else
			{
				Global_4456448.f_59275[iVar0 /*80*/].f_29[iVar2] = -1;
			}
			iVar2++;
		}
		Global_4456448.f_59275[iVar0 /*80*/].f_66 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar75, iVar0);
		iVar0++;
	}
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5000;
		
		case 2:
			return 10000;
		
		case 3:
			return 20000;
		
		case 4:
			return 30000;
		
		case 5:
			return 45000;
		
		case 6:
			return 60000;
		
		default:
	}
	return 0;
}

int func_195(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("prop_sec_gate_01d") || iParam0 == joaat("prop_vault_shutter")) || iParam0 == -877963371) || iParam0 == 145818549) || iParam0 == 160663734) || iParam0 == -350795026) || iParam0 == -1901227524) || iParam0 == 1813008354) || iParam0 == 279288106) || iParam0 == joaat("prop_ind_coalcar_02")) || iParam0 == 439340726) || iParam0 == -1913970053) || iParam0 == -1239742687) || iParam0 == 1753330262) || iParam0 == -1600413027) || iParam0 == joaat("prop_water_ramp_01")) || iParam0 == joaat("prop_water_ramp_02")) || iParam0 == joaat("prop_water_ramp_03")) || iParam0 == joaat("stt_prop_track_bend_l")) || iParam0 == joaat("stt_prop_track_bend2_l")) || iParam0 == joaat("stt_prop_track_bend_bar_l")) || iParam0 == joaat("stt_prop_track_bend2_bar_l")) || iParam0 == joaat("prop_ld_alarm_01")) || iParam0 == 1572208841) || iParam0 == joaat("prop_flare_01")) || iParam0 == 301970060) || iParam0 == 1088428993) || iParam0 == -2002895309) || iParam0 == 769923921) || iParam0 == -1941093436) || iParam0 == 1644490552) || iParam0 == 1228163930) || iParam0 == -82704061) || iParam0 == -893826075) || iParam0 == -1906772306) || iParam0 == 1325339411) || iParam0 == joaat("prop_boombox_01")) || iParam0 == joaat("prop_ghettoblast_02")) || iParam0 == joaat("prop_tapeplayer_01")) || iParam0 == 2057223314) || iParam0 == joaat("prop_shamal_crash")) || iParam0 == 1925170211) || iParam0 == -1611832715) || iParam0 == -1305574636) || iParam0 == -1937495485) || iParam0 == 869398406) || iParam0 == -170277480) || iParam0 == -1267801772) || iParam0 == -1876506235) || iParam0 == joaat("prop_cs_heist_bag_01")) || iParam0 == -1747937636) || iParam0 == 866201454) || iParam0 == 642960345) || iParam0 == -1184665400) || iParam0 == -898971071) || iParam0 == 118340176) || iParam0 == 661161633) || iParam0 == 1908860740) || iParam0 == 2095169631) || iParam0 == -549235179) || iParam0 == -502202673) || iParam0 == 1723871309) || iParam0 == 630616933) || iParam0 == joaat("u_f_y_corpse_01")) || iParam0 == joaat("u_f_y_corpse_02")) || iParam0 == 497099277) || iParam0 == 794936718) || iParam0 == 1116990450) || iParam0 == 1430330160) || iParam0 == 1736425389) || iParam0 == -2104487973) || iParam0 == 93927950) || iParam0 == 446151074) || iParam0 == 970414739) || iParam0 == -1187930949) || iParam0 == -278591439) || iParam0 == -403635899) || iParam0 == 443999472) || iParam0 == -840425311) || iParam0 == -490398359) || iParam0 == 1171791475) || iParam0 == -1592077865) || iParam0 == -1494923144) || iParam0 == -863733544) || iParam0 == -955159266) || iParam0 == -1673979170) || iParam0 == 34120519) || iParam0 == joaat("prop_target_ora_purp_01")) || iParam0 == -1835862541) || iParam0 == -1604087404) || iParam0 == -1251067775) || iParam0 == -2025890780) || iParam0 == 170995043) || iParam0 == -126973474) || iParam0 == 1726113796) || iParam0 == 890176606) || iParam0 == 249707472) || iParam0 == -1737968014) || iParam0 == -986153641) || iParam0 == 1171954070) || iParam0 == 726001049) || iParam0 == -239044249) || iParam0 == -556906753) || iParam0 == -2063295939) || iParam0 == -758434067) || iParam0 == 346059280) || iParam0 == -613679208) || iParam0 == 620582592) || iParam0 == 1464908646) || iParam0 == 85342060) || iParam0 == -215444591) || iParam0 == 483832101) || iParam0 == -176168332) || iParam0 == 930976262) || iParam0 == 1721462849) || iParam0 == 1677872320) || iParam0 == 320088805) || iParam0 == 708828172) || iParam0 == 950795200) || iParam0 == -1260656854) || iParam0 == -1875404158) || iParam0 == -864804458) || iParam0 == -1302470386) || iParam0 == 1518201148) || iParam0 == 384852939) || iParam0 == 145606470) || iParam0 == 117169896) || iParam0 == -1479958115) || iParam0 == -797462923) || iParam0 == -1222840593) || iParam0 == -82066709) || iParam0 == -79943355) || iParam0 == -1601827676) || iParam0 == 1228139077) || iParam0 == -167276853) || iParam0 == -2003082453) || iParam0 == 2086345420) || iParam0 == -180282443) || iParam0 == 1137700900) || iParam0 == -685641702) || iParam0 == -1375953456) || iParam0 == 588352126) || iParam0 == 852060754) || iParam0 == -320283514) || iParam0 == -999358909) || iParam0 == -433831507) || iParam0 == 1781931203) || iParam0 == 1008841074) || iParam0 == joaat("prop_cabinet_01b"))
	{
		return 1;
	}
	return 0;
}

int func_196()
{
	if (Global_4456448.f_131902 == 1 || Global_4456448.f_131902 == 2)
	{
		return 1;
	}
	return 0;
}

void func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	char[] cVar4[8];
	var uVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	var uVar15;
	int iVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	int iVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	var uVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	var uVar62;
	var uVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	var uVar70[17];
	var uVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	var uVar117;
	var uVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	var uVar124[4];
	var uVar129[4];
	var uVar134[4];
	var uVar139[4];
	var uVar144[4];
	var uVar149[4];
	var uVar154[4];
	var uVar159[4];
	var uVar164[4];
	var uVar169[4];
	var uVar174[4];
	int iVar179;
	int iVar180;
	int iVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	int iVar185;
	int iVar186;
	int iVar187;
	int iVar188;
	int iVar189;
	int iVar190;
	int iVar191;
	int iVar192;
	int iVar193;
	int iVar194;
	int iVar195;
	int iVar196;
	int iVar197;
	int iVar198;
	int iVar199;
	int iVar200;
	int iVar201;
	int iVar202;
	int iVar203;
	
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "veh");
	Global_4456448.f_79604 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "no");
	Global_4456448.f_79605 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "time");
	Global_4456448.f_79606 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "pal");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_40 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_4456448.f_104[iVar3 /*10693*/].f_59 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_4456448.f_86770[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_4456448.f_43020[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				StringCopy(&cVar4, "rkt", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_43106[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_43106[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "bst", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_43192[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_43192[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "rpr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_43278[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_43278[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "spk", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_43364[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_43364[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "tmr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_43450[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_43450[iVar0 /*5*/][iVar3] = 1500;
				}
				StringCopy(&cVar4, "bsd", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_43536[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_43536[iVar0 /*5*/][iVar3] = 1400;
				}
				StringCopy(&cVar4, "bss", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_43622[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_43622[iVar0 /*5*/][iVar3] = 35;
				}
				iVar0++;
			}
			iVar3++;
		}
	}
	uVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "loc");
	uVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "head");
	uVar17 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "model");
	uVar18 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "col");
	uVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "rsp");
	iVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "rot");
	iVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "liv");
	iVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmodtur");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmodarm");
	iVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmodairc");
	iVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmodBomb");
	iVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmodspoil");
	uVar46 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "hlth");
	uVar62 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "drbs");
	uVar63 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs2");
	iVar64 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs3");
	iVar65 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs4");
	iVar66 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs5");
	iVar67 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs6");
	iVar68 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs7");
	iVar69 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs8");
	if (func_133())
	{
		iVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vrr");
		uVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vrmr");
		uVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vsnt");
		uVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vsnei");
		iVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "v2sp");
		uVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "v2sh");
		iVar16 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "v2si");
		uVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt");
		uVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team");
		uVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spwn");
		iVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt2");
		uVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team2");
		uVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spwn2");
		uVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt3");
		uVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team3");
		uVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spwn3");
		uVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt4");
		uVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team4");
		uVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spwn4");
		Global_4456448.f_59273 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "nocr");
		iVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "crgdm");
		iVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "modps");
		iVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ncol");
		iVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "enveff");
		iVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "colc");
		iVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "col2");
		iVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "col3");
		Global_4456448.f_79607 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "burst");
		iVar47 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "enghp");
		iVar48 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "hbir");
		iVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "hbor");
		iVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ptrhp");
		iVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "bdyhp");
		iVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "hmrh");
		iVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "htrh");
		iVar54 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "fdswm");
		iVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ior");
		iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "iort");
		iVar57 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vddra");
		iVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vddta");
		iVar59 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vddrl");
		iVar60 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vddwda");
		iVar61 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdInter");
		iVar202 = 0;
		while (iVar202 <= 16)
		{
			StringCopy(&cVar4, "vbvrr", 8);
			StringIntConCat(&cVar4, iVar202, 8);
			uVar70[iVar202] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			iVar202++;
		}
		uVar88 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vebs");
		iVar89 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehct");
		iVar92 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vhcra");
		iVar90 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehcr");
		iVar91 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehcv");
		iVar93 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbc");
		iVar94 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbr");
		iVar95 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbso");
		iVar96 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbs");
		iVar97 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehfbr");
		iVar98 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehfbd");
		iVar99 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehtc");
		iVar100 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbrnrl");
		iVar101 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbrntm");
		iVar102 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbrnlf");
		iVar103 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehpotme");
		iVar104 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehdelind");
		iVar105 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbtos");
		iVar106 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehwtci");
		iVar107 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehakwlrt");
		iVar108 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vspdl");
		iVar109 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vsgr");
		iVar110 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vssgr");
		iVar111 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vcnm");
		iVar112 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehap");
		iVar113 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehat");
		iVar114 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehdu");
		iVar115 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vldt");
		iVar116 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vldr");
		uVar117 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cutsc");
		uVar118 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cutsh");
		iVar122 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "nmpass");
		iVar123 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "nmfail");
		iVar119 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmcp");
		iVar120 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmcf");
		iVar121 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gotor");
		iVar180 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vphrang");
		iVar181 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vwpndmg");
		iVar182 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vldv");
		iVar183 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vtmhrn");
		iVar184 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdrpovr");
		iVar185 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdvrfe");
		iVar186 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdeitc");
		iVar187 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdspn");
		iVar188 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdcbal");
		iVar189 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdcbdt");
		iVar190 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vrhlor");
		iVar191 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vddfs");
		iVar192 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vrorc");
		iVar193 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cbvest");
		iVar194 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cbves");
		iVar195 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "hvcr");
		iVar196 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cdtor");
		iVar197 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cvd");
		iVar198 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vifci");
		iVar199 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "viclv");
		iVar200 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vtsr");
		iVar201 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vtspr");
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar164[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar169[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "irsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar174[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			iVar1++;
		}
		iVar179 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_40 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar124[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar129[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar134[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar139[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar144[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar149[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar154[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "vcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar159[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_79604 - 1))
	{
		if (iVar0 < 32)
		{
			Global_4456448.f_79608[iVar0 /*217*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar8, iVar0) };
			Global_4456448.f_79608[iVar0 /*217*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar9, iVar0);
			if (iVar33 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar33, iVar0) == 5)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_214 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar33, iVar0) };
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_214 = { 0f, 0f, 0f };
			}
			uVar2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17, iVar0);
			Global_4456448.f_79608[iVar0 /*217*/].f_12 = uVar2;
			if (!func_128())
			{
				if (!STREAMING::IS_MODEL_VALID(Global_4456448.f_79608[iVar0 /*217*/].f_12) || func_198(Global_4456448.f_79608[iVar0 /*217*/].f_12))
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_12 = joaat("baller");
				}
			}
			if (Global_4456448.f_79608[iVar0 /*217*/].f_12 == joaat("sanctus") && !Global_262145.f_16870)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_12 = joaat("akuma");
			}
			Global_4456448.f_79608[iVar0 /*217*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18, iVar0);
			Global_4456448.f_79608[iVar0 /*217*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			if (iVar34 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar34, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_28 = -1;
			}
			if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_164 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar41, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_164 = -1;
			}
			if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_165 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_165 = -1;
			}
			if (iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_166 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_166 = -1;
			}
			if (iVar44 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar44, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_168 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_168 = 0;
			}
			if (iVar45 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar45, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_169 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar45, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_169 = 0;
			}
			Global_4456448.f_79608[iVar0 /*217*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar46, iVar0);
			if (Global_4456448.f_79608[iVar0 /*217*/].f_32 < 1)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_32 = 100;
			}
			Global_4456448.f_79608[iVar0 /*217*/].f_49 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar62, iVar0);
			Global_4456448.f_79608[iVar0 /*217*/].f_50 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar63, iVar0);
			if (iVar64 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar64, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_51 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar64, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_51 = 0;
			}
			if (iVar65 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar65, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_52 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar65, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_52 = 0;
			}
			if (iVar66 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar66, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_53 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar66, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_53 = 0;
			}
			if (iVar67 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar67, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_54 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar67, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_54 = 0;
			}
			if (iVar68 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar68, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_55 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar68, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_55 = 0;
			}
			if (iVar69 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar69, iVar0) == 2)
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_56 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar69, iVar0);
			}
			else
			{
				Global_4456448.f_79608[iVar0 /*217*/].f_56 = 0;
			}
			if (func_133())
			{
				if ((((iVar10 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar10, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar11, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar12, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar13, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar10, iVar0);
					Global_4456448.f_79608[iVar0 /*217*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar11, iVar0);
					Global_4456448.f_79608[iVar0 /*217*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
					Global_4456448.f_79608[iVar0 /*217*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_4 = 100f;
					Global_4456448.f_79608[iVar0 /*217*/].f_5 = 0f;
					Global_4456448.f_79608[iVar0 /*217*/].f_6 = 0;
					Global_4456448.f_79608[iVar0 /*217*/].f_7 = -1;
				}
				if ((iVar14 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar14, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar15, iVar0) == 3)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_8 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar14, iVar0) };
					Global_4456448.f_79608[iVar0 /*217*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar15, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_8 = { 0f, 0f, 0f };
					Global_4456448.f_79608[iVar0 /*217*/].f_11 = 0f;
				}
				if (iVar16 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar16, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_202 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar16, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_202 = -1;
				}
				Global_4456448.f_79608[iVar0 /*217*/].f_44 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20, iVar0);
				Global_4456448.f_79608[iVar0 /*217*/].f_45 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar21, iVar0);
				Global_4456448.f_79608[iVar0 /*217*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
				if (iVar23 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar23, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_86 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar23, iVar0);
					Global_4456448.f_79608[iVar0 /*217*/].f_83 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24, iVar0);
					Global_4456448.f_79608[iVar0 /*217*/].f_89 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar25, iVar0);
					Global_4456448.f_79608[iVar0 /*217*/].f_87 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar26, iVar0);
					Global_4456448.f_79608[iVar0 /*217*/].f_84 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27, iVar0);
					Global_4456448.f_79608[iVar0 /*217*/].f_90 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28, iVar0);
					Global_4456448.f_79608[iVar0 /*217*/].f_88 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar29, iVar0);
					Global_4456448.f_79608[iVar0 /*217*/].f_85 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar30, iVar0);
					Global_4456448.f_79608[iVar0 /*217*/].f_91 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_86 = -1;
					Global_4456448.f_79608[iVar0 /*217*/].f_83 = 0;
					Global_4456448.f_79608[iVar0 /*217*/].f_89 = 0;
					Global_4456448.f_79608[iVar0 /*217*/].f_87 = -1;
					Global_4456448.f_79608[iVar0 /*217*/].f_84 = 0;
					Global_4456448.f_79608[iVar0 /*217*/].f_90 = 0;
					Global_4456448.f_79608[iVar0 /*217*/].f_88 = -1;
					Global_4456448.f_79608[iVar0 /*217*/].f_85 = 0;
					Global_4456448.f_79608[iVar0 /*217*/].f_91 = 0;
				}
				if (iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_26 = -1;
				}
				if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_29 = -1;
				}
				if (iVar37 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar37, iVar0) == 3)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar37, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_30 = -1f;
				}
				if ((iVar47 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar47, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar47, iVar0) > 0f)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar47, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_33 = 1001f;
				}
				if ((iVar48 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar48, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar0) > 0)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_34 = 0;
				}
				if ((iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar0) > -1)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_35 = -1;
				}
				if ((iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar32, iVar0) >= 0f)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar32, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_40 = 1.5f;
				}
				if (iVar57 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar57, iVar0) == 3)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_173 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar57, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_173 = -1f;
				}
				if (iVar58 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar58, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_174 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar58, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_174 = 0;
				}
				if (iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_175 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar59, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_175 = -1;
				}
				if (iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_176 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar60, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_176 = 0;
				}
				if (iVar61 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar61, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_201 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar61, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_201 = -1;
				}
				if ((iVar50 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar50, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar50, iVar0) > 0f)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar50, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_36 = 1001f;
				}
				if ((iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar51, iVar0) > 0f)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar51, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_37 = 1001f;
				}
				if ((iVar52 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar52, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar52, iVar0) > 0f)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar52, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_38 = 1001f;
				}
				if ((iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar53, iVar0) > 0f)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar53, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_39 = 1001f;
				}
				if ((iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar54, iVar0) != 1f)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_172 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar54, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_172 = 1f;
				}
				if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_170 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar55, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_170 = -1;
				}
				if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_171 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_171 = 0;
				}
				iVar203 = 0;
				while (iVar203 <= 16)
				{
					if (uVar70[iVar203] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar70[iVar203], iVar0) == 2)
					{
						Global_4456448.f_79608[iVar0 /*217*/].f_182[iVar203] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar70[iVar203], iVar0);
					}
					else
					{
						Global_4456448.f_79608[iVar0 /*217*/].f_182[iVar203] = -2;
					}
					iVar203++;
				}
				if (iVar38 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar38, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_27 = -1;
				}
				if (iVar39 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar39, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_24 = -1;
				}
				if (iVar40 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar40, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar40, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_25 = -1;
				}
				Global_4456448.f_79608[iVar0 /*217*/].f_120 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar88, iVar0);
				if (iVar90 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar90, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_72 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar90, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_72 = -1;
				}
				if (iVar89 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar89, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_73 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar89, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_73 = -1;
				}
				if (iVar92 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar92, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_74 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar92, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_74 = -1;
				}
				if (iVar91 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar91, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_75 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar91, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_75 = -1;
				}
				if (iVar108 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar108, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_82 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar108, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_82 = 0;
				}
				if (iVar109 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar109, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar109, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_47 = 0;
				}
				if (iVar110 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar110, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_48 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar110, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_48 = 0;
				}
				if (iVar111 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar111, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_92 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar111, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_92 = -1;
				}
				if (iVar119 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar119, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_110 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar119, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_110 = -1;
				}
				if (iVar120 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar120, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_111 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar120, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_111 = -1;
				}
				if (iVar112 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar112, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_93 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar112, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_93 = -1;
				}
				if (iVar113 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar113, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_94 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar113, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_94 = 1;
				}
				if (iVar114 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar114, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_107 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar114, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_107 = -1;
				}
				if (iVar115 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar115, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_108 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar115, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_108 = -1;
				}
				if (iVar116 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar116, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_109 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar116, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_109 = -1;
				}
				if (iVar93 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar93, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar93, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_58 = 0;
				}
				if (iVar94 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar94, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_59 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar94, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_59 = 0;
				}
				if (iVar95 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar95, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar95, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_60 = 0;
				}
				if (iVar96 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar96, iVar0) == 3)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar96, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_61 = 1.2f;
				}
				if (iVar97 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar97, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_180 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar97, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_180 = -1;
				}
				if (iVar98 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar98, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_181 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar98, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_181 = 10;
				}
				if (iVar99 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar99, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_203 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar99, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_203 = 1;
				}
				if (iVar101 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar101, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_205 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar101, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_205 = 0;
				}
				if (iVar100 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar100, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_204 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar100, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_204 = 0;
				}
				if (iVar102 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar102, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_206 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar102, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_206 = 60;
				}
				if (iVar103 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar103, iVar0) == 3)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_207 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar103, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_207 = 4.5f;
				}
				if (iVar104 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar104, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_208 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar104, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_208 = -1;
				}
				if (iVar105 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar105, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_209 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar105, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_209 = -1;
				}
				if (iVar106 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar106, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_210 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar106, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_210 = -1;
				}
				if (iVar107 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar107, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_211 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar107, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_211 = 0;
				}
				if (iVar121 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar121, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_43 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar121, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_43 = 0;
				}
				if (Global_4456448.f_2 != 6 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar117, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_118 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar117, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_118 = -1;
				}
				if (Global_4456448.f_2 != 6 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar118, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_119 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar118, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_119 = -1;
				}
				if (iVar122 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar122, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_105 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar122, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_105 = -1;
				}
				if (iVar123 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar123, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_106 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar123, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_106 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar164[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar164[iVar1], iVar0) == 5)
					{
						Global_4456448.f_79608[iVar0 /*217*/].f_122[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar164[iVar1], iVar0) };
					}
					else
					{
						Global_4456448.f_79608[iVar0 /*217*/].f_122[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (uVar169[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar169[iVar1], iVar0) == 3)
					{
						Global_4456448.f_79608[iVar0 /*217*/].f_135[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar169[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_79608[iVar0 /*217*/].f_135[iVar1] = 0f;
					}
					if (uVar174[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar174[iVar1], iVar0) == 2)
					{
						Global_4456448.f_79608[iVar0 /*217*/].f_140[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar174[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_79608[iVar0 /*217*/].f_140[iVar1] = -1;
					}
					iVar1++;
				}
				if (iVar179 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar179, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_121 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar179, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_121 = 0;
				}
				if (iVar180 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar180, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_145 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar180, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_145 = -1;
				}
				if (iVar181 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar181, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_154 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar181, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_154 = -1;
				}
				if (iVar182 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar182, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_155 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar182, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_155 = -1;
				}
				if (iVar183 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar183, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_150 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar183, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_150 = -1;
				}
				if (iVar184 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar184, iVar0) == 5)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_151 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar184, iVar0) };
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_151 = { 0f, 0f, 0f };
				}
				if (iVar185 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar185, iVar0) == 3)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_147 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar185, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_147 = -1f;
				}
				if (iVar191 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar191, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_148 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar191, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_148 = 10;
				}
				if (iVar193 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar193, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_162 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar193, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_162 = 2;
				}
				if (iVar194 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar194, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_163 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar194, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_163 = -1;
				}
				if (iVar195 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar195, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_177 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar195, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_177 = -1;
				}
				if (iVar186 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar186, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_146 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar186, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_146 = -1;
				}
				if (iVar187 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar187, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_149 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar187, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_149 = 0;
				}
				if (iVar200 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar200, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_212 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar200, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_212 = -1;
				}
				if (iVar201 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar201, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_213 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar201, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_213 = 0;
				}
				if (iVar188 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar188, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar188, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_41 = 0;
				}
				if (iVar189 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar189, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar189, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_42 = 0;
				}
				if (iVar190 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar190, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_160 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar190, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_160 = 0;
				}
				if (iVar192 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar192, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_161 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar192, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_161 = 0;
				}
				if (iVar196 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar196, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_178 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar196, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_178 = -1;
				}
				if (iVar197 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar197, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_179 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar197, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_179 = 0;
				}
				if (iVar198 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar198, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_200 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar198, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_200 = -1;
				}
				if (iVar199 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar199, iVar0) == 2)
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_81 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar199, iVar0);
				}
				else
				{
					Global_4456448.f_79608[iVar0 /*217*/].f_81 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_4456448.f_40 - 1))
				{
					if (iVar3 < 4)
					{
						Global_4456448.f_79608[iVar0 /*217*/].f_13[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar124[iVar3], iVar0);
						Global_4456448.f_79608[iVar0 /*217*/].f_18[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar129[iVar3], iVar0);
						if (Global_4456448.f_79608[iVar0 /*217*/].f_18[iVar3] == -1)
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_18[iVar3] = 99999;
						}
						if (uVar134[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar134[iVar3], iVar0) == 2)
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_112[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar134[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_112[iVar3] = 0;
						}
						if (uVar139[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar139[iVar3], iVar0) == 2)
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_95[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar139[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_95[iVar3] = 0;
						}
						if (uVar144[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar144[iVar3], iVar0) == 2)
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_100[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar144[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_100[iVar3] = 0;
						}
						if (uVar149[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar149[iVar3], iVar0) == 2)
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_62[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar149[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_62[iVar3] = -1;
						}
						if (uVar154[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar154[iVar3], iVar0) == 2)
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_67[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar154[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_67[iVar3] = -1;
						}
						if (uVar159[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar159[iVar3], iVar0) == 2)
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_76[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar159[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_79608[iVar0 /*217*/].f_76[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

int func_198(int iParam0)
{
	if (((!func_196() && (!func_200(iParam0) || func_199(iParam0))) && !func_160()) && !Global_262145.f_18671)
	{
		return 1;
	}
	return 0;
}

int func_199(int iParam0)
{
	if (!func_160())
	{
		if (((((((((((((((((((((((((iParam0 == joaat("trash2") || iParam0 == joaat("emperor2")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("barracks3")) || iParam0 == joaat("slamvan2")) || iParam0 == joaat("boxville3")) || iParam0 == joaat("boxville4")) || iParam0 == joaat("picador")) || iParam0 == joaat("peyote")) || iParam0 == joaat("tornado")) || iParam0 == joaat("tr2")) || iParam0 == joaat("lurcher")) || iParam0 == joaat("btype2")) || iParam0 == joaat("limo2")) || iParam0 == joaat("dune4")) || iParam0 == joaat("ruiner3")) || iParam0 == joaat("cargoplane")) || iParam0 == joaat("trailerlarge")) || iParam0 == joaat("phantom3")) || iParam0 == joaat("hauler2")) || iParam0 == joaat("submersible2")) || iParam0 == joaat("policet")) || iParam0 == joaat("pbus2")) || iParam0 == -1988428699) || iParam0 == joaat("blimp3")) || iParam0 == joaat("rcbandito"))
		{
			return 1;
		}
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (func_201(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= func_204(iParam1))
	{
		if (iParam0 == func_202(iParam1, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_202(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("dilettante");
					break;
				
				case 1:
					iVar0 = joaat("issi2");
					break;
				
				case 2:
					iVar0 = joaat("rhapsody");
					break;
				
				case 3:
					iVar0 = joaat("panto");
					break;
				
				case 4:
					iVar0 = joaat("brioso");
					break;
				
				case 5:
					iVar0 = joaat("issi3");
					break;
				
				case 6:
					iVar0 = joaat("prairie");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("felon2");
					break;
				
				case 1:
					iVar0 = joaat("jackal");
					break;
				
				case 2:
					iVar0 = joaat("zion");
					break;
				
				case 3:
					iVar0 = joaat("oracle");
					break;
				
				case 4:
					iVar0 = joaat("windsor");
					break;
				
				case 5:
					iVar0 = joaat("windsor2");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("emperor");
					break;
				
				case 1:
					iVar0 = joaat("emperor2");
					break;
				
				case 2:
					iVar0 = joaat("emperor3");
					break;
				
				case 3:
					iVar0 = joaat("fugitive");
					break;
				
				case 4:
					iVar0 = joaat("regina");
					break;
				
				case 5:
					iVar0 = joaat("superd");
					break;
				
				case 6:
					iVar0 = joaat("schafter2");
					break;
				
				case 7:
					iVar0 = joaat("glendale");
					break;
				
				case 8:
					iVar0 = joaat("warrener");
					break;
				
				case 9:
					iVar0 = joaat("asea");
					break;
				
				case 10:
					iVar0 = joaat("futo");
					break;
				
				case 11:
					iVar0 = joaat("surge");
					break;
				
				case 12:
					iVar0 = joaat("primo");
					break;
				
				case 13:
					iVar0 = joaat("primo2");
					break;
				
				case 14:
					iVar0 = joaat("schafter3");
					break;
				
				case 15:
					iVar0 = joaat("schafter4");
					break;
				
				case 16:
					iVar0 = joaat("schafter5");
					break;
				
				case 17:
					iVar0 = joaat("schafter6");
					break;
				
				case 18:
					iVar0 = joaat("cog55");
					break;
				
				case 19:
					iVar0 = joaat("cog552");
					break;
				
				case 20:
					iVar0 = joaat("cognoscenti");
					break;
				
				case 21:
					iVar0 = joaat("cognoscenti2");
					break;
				
				case 22:
					iVar0 = joaat("limo2");
					break;
				
				case 23:
					iVar0 = joaat("stafford");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("dominator");
					break;
				
				case 1:
					iVar0 = joaat("gauntlet");
					break;
				
				case 2:
					iVar0 = joaat("phoenix");
					break;
				
				case 3:
					iVar0 = joaat("blade");
					break;
				
				case 4:
					iVar0 = joaat("ratloader2");
					break;
				
				case 5:
					iVar0 = joaat("slamvan");
					break;
				
				case 6:
					iVar0 = joaat("slamvan2");
					break;
				
				case 7:
					iVar0 = joaat("buccaneer");
					break;
				
				case 8:
					iVar0 = joaat("voodoo2");
					break;
				
				case 9:
					iVar0 = joaat("picador");
					break;
				
				case 10:
					iVar0 = joaat("virgo");
					break;
				
				case 11:
					iVar0 = joaat("coquette3");
					break;
				
				case 12:
					iVar0 = joaat("chino");
					break;
				
				case 13:
					iVar0 = joaat("faction");
					break;
				
				case 14:
					iVar0 = joaat("faction2");
					break;
				
				case 15:
					iVar0 = joaat("moonbeam2");
					break;
				
				case 16:
					iVar0 = joaat("chino2");
					break;
				
				case 17:
					iVar0 = joaat("voodoo");
					break;
				
				case 18:
					iVar0 = joaat("buccaneer2");
					break;
				
				case 19:
					iVar0 = joaat("dukes2");
					break;
				
				case 20:
					iVar0 = joaat("moonbeam");
					break;
				
				case 21:
					iVar0 = joaat("lurcher");
					break;
				
				case 22:
					iVar0 = joaat("nightshade");
					break;
				
				case 23:
					iVar0 = joaat("faction3");
					break;
				
				case 24:
					iVar0 = joaat("slamvan3");
					break;
				
				case 25:
					iVar0 = joaat("virgo3");
					break;
				
				case 26:
					iVar0 = joaat("virgo2");
					break;
				
				case 27:
					iVar0 = joaat("sabregt2");
					break;
				
				case 28:
					iVar0 = joaat("dominator2");
					break;
				
				case 29:
					iVar0 = joaat("gauntlet2");
					break;
				
				case 30:
					iVar0 = joaat("ruiner2");
					break;
				
				case 31:
					iVar0 = joaat("ruiner3");
					break;
				
				case 32:
					iVar0 = joaat("dukes");
					break;
				
				case 33:
					iVar0 = joaat("stalion");
					break;
				
				case 34:
					iVar0 = joaat("stalion2");
					break;
				
				case 35:
					iVar0 = joaat("hotknife");
					break;
				
				case 36:
					iVar0 = joaat("tampa3");
					break;
				
				case 37:
					iVar0 = joaat("yosemite");
					break;
				
				case 38:
					iVar0 = joaat("hermes");
					break;
				
				case 39:
					iVar0 = joaat("hustler");
					break;
				
				case 40:
					iVar0 = joaat("ellie");
					break;
				
				case 41:
					iVar0 = joaat("dominator3");
					break;
				
				case 42:
					iVar0 = joaat("ruiner");
					break;
				
				case 43:
					iVar0 = joaat("clique");
					break;
				
				case 44:
					iVar0 = joaat("impaler");
					break;
				
				case 45:
					iVar0 = joaat("deviant");
					break;
				
				case 46:
					iVar0 = joaat("tulip");
					break;
				
				case 47:
					iVar0 = joaat("vamos");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("banshee");
					break;
				
				case 1:
					iVar0 = joaat("coquette");
					break;
				
				case 2:
					iVar0 = joaat("ninef2");
					break;
				
				case 3:
					iVar0 = joaat("alpha");
					break;
				
				case 4:
					iVar0 = joaat("jester");
					break;
				
				case 5:
					iVar0 = joaat("massacro");
					break;
				
				case 6:
					iVar0 = joaat("furoregt");
					break;
				
				case 7:
					iVar0 = joaat("jester2");
					break;
				
				case 8:
					iVar0 = joaat("massacro2");
					break;
				
				case 9:
					iVar0 = joaat("kuruma");
					break;
				
				case 10:
					iVar0 = joaat("kuruma2");
					break;
				
				case 11:
					iVar0 = joaat("verlierer2");
					break;
				
				case 12:
					iVar0 = joaat("sultan");
					break;
				
				case 13:
					iVar0 = joaat("bestiagts");
					break;
				
				case 14:
					iVar0 = joaat("seven70");
					break;
				
				case 15:
					iVar0 = joaat("omnis");
					break;
				
				case 16:
					iVar0 = joaat("tropos");
					break;
				
				case 17:
					iVar0 = joaat("lynx");
					break;
				
				case 18:
					iVar0 = joaat("tampa2");
					break;
				
				case 19:
					iVar0 = joaat("buffalo3");
					break;
				
				case 20:
					iVar0 = joaat("raptor");
					break;
				
				case 21:
					iVar0 = joaat("elegy2");
					break;
				
				case 22:
					iVar0 = joaat("elegy");
					break;
				
				case 23:
					iVar0 = joaat("comet3");
					break;
				
				case 24:
					iVar0 = joaat("specter");
					break;
				
				case 25:
					iVar0 = joaat("specter2");
					break;
				
				case 26:
					iVar0 = joaat("ruston");
					break;
				
				case 27:
					iVar0 = joaat("khamelion");
					break;
				
				case 28:
					iVar0 = joaat("streiter");
					break;
				
				case 29:
					iVar0 = joaat("neon");
					break;
				
				case 30:
					iVar0 = joaat("pariah");
					break;
				
				case 31:
					iVar0 = joaat("revolter");
					break;
				
				case 32:
					iVar0 = joaat("sentinel3");
					break;
				
				case 33:
					iVar0 = joaat("comet5");
					break;
				
				case 34:
					iVar0 = joaat("raiden");
					break;
				
				case 35:
					iVar0 = joaat("flashgt");
					break;
				
				case 36:
					iVar0 = joaat("gb200");
					break;
				
				case 37:
					iVar0 = joaat("hotring");
					break;
				
				case 38:
					iVar0 = joaat("comet4");
					break;
				
				case 39:
					iVar0 = joaat("schlagen");
					break;
				
				case 40:
					iVar0 = joaat("italigto");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("manana");
					break;
				
				case 1:
					iVar0 = joaat("stingergt");
					break;
				
				case 2:
					iVar0 = joaat("tornado2");
					break;
				
				case 3:
					iVar0 = joaat("btype");
					break;
				
				case 4:
					iVar0 = joaat("pigalle");
					break;
				
				case 5:
					iVar0 = joaat("coquette2");
					break;
				
				case 6:
					iVar0 = joaat("casco");
					break;
				
				case 7:
					iVar0 = joaat("peyote");
					break;
				
				case 8:
					iVar0 = joaat("tornado");
					break;
				
				case 9:
					iVar0 = joaat("feltzer3");
					break;
				
				case 10:
					iVar0 = joaat("mamba");
					break;
				
				case 11:
					iVar0 = joaat("tornado5");
					break;
				
				case 12:
					iVar0 = joaat("tornado6");
					break;
				
				case 13:
					iVar0 = joaat("infernus2");
					break;
				
				case 14:
					iVar0 = joaat("turismo2");
					break;
				
				case 15:
					iVar0 = joaat("cheetah2");
					break;
				
				case 16:
					iVar0 = joaat("ardent");
					break;
				
				case 17:
					iVar0 = joaat("torero");
					break;
				
				case 18:
					iVar0 = joaat("retinue");
					break;
				
				case 19:
					iVar0 = joaat("rapidgt3");
					break;
				
				case 20:
					iVar0 = joaat("savestra");
					break;
				
				case 21:
					iVar0 = joaat("viseris");
					break;
				
				case 22:
					iVar0 = 886810209;
					break;
				
				case 23:
					iVar0 = joaat("gt500");
					break;
				
				case 24:
					iVar0 = joaat("z190");
					break;
				
				case 25:
					iVar0 = joaat("fagaloa");
					break;
				
				case 26:
					iVar0 = joaat("michelli");
					break;
				
				case 27:
					iVar0 = joaat("deluxo");
					break;
				
				case 28:
					iVar0 = joaat("cheburek");
					break;
				
				case 29:
					iVar0 = joaat("jester3");
					break;
				
				case 30:
					iVar0 = joaat("swinger");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("cheetah");
					break;
				
				case 1:
					iVar0 = joaat("entityxf");
					break;
				
				case 2:
					iVar0 = joaat("voltic");
					break;
				
				case 3:
					iVar0 = joaat("turismor");
					break;
				
				case 4:
					iVar0 = joaat("zentorno");
					break;
				
				case 5:
					iVar0 = joaat("osiris");
					break;
				
				case 6:
					iVar0 = joaat("t20");
					break;
				
				case 7:
					iVar0 = joaat("banshee2");
					break;
				
				case 8:
					iVar0 = joaat("sultanrs");
					break;
				
				case 9:
					iVar0 = joaat("reaper");
					break;
				
				case 10:
					iVar0 = joaat("fmj");
					break;
				
				case 11:
					iVar0 = joaat("prototipo");
					break;
				
				case 12:
					iVar0 = joaat("pfister811");
					break;
				
				case 13:
					iVar0 = joaat("le7b");
					break;
				
				case 14:
					iVar0 = joaat("tyrus");
					break;
				
				case 15:
					iVar0 = joaat("sheava");
					break;
				
				case 16:
					iVar0 = joaat("tempesta");
					break;
				
				case 17:
					iVar0 = joaat("nero");
					break;
				
				case 18:
					iVar0 = joaat("nero2");
					break;
				
				case 19:
					iVar0 = joaat("penetrator");
					break;
				
				case 20:
					iVar0 = joaat("voltic2");
					break;
				
				case 21:
					iVar0 = joaat("italigtb");
					break;
				
				case 22:
					iVar0 = joaat("italigtb2");
					break;
				
				case 23:
					iVar0 = joaat("gp1");
					break;
				
				case 24:
					iVar0 = joaat("vagner");
					break;
				
				case 25:
					iVar0 = joaat("xa21");
					break;
				
				case 26:
					iVar0 = joaat("visione");
					break;
				
				case 27:
					iVar0 = joaat("vigilante");
					break;
				
				case 28:
					iVar0 = joaat("cyclone");
					break;
				
				case 29:
					iVar0 = joaat("sc1");
					break;
				
				case 30:
					iVar0 = joaat("autarch");
					break;
				
				case 31:
					iVar0 = joaat("tezeract");
					break;
				
				case 32:
					iVar0 = joaat("taipan");
					break;
				
				case 33:
					iVar0 = joaat("entity2");
					break;
				
				case 34:
					iVar0 = joaat("tyrant");
					break;
				
				case 35:
					iVar0 = joaat("deveste");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("baller");
					break;
				
				case 1:
					iVar0 = joaat("baller2");
					break;
				
				case 2:
					iVar0 = joaat("bjxl");
					break;
				
				case 3:
					iVar0 = joaat("cavalcade2");
					break;
				
				case 4:
					iVar0 = joaat("granger");
					break;
				
				case 5:
					iVar0 = joaat("patriot");
					break;
				
				case 6:
					iVar0 = joaat("huntley");
					break;
				
				case 7:
					iVar0 = joaat("dubsta3");
					break;
				
				case 8:
					iVar0 = joaat("gresley");
					break;
				
				case 9:
					iVar0 = joaat("landstalker");
					break;
				
				case 10:
					iVar0 = joaat("seminole");
					break;
				
				case 11:
					iVar0 = joaat("mesa");
					break;
				
				case 12:
					iVar0 = joaat("crusader");
					break;
				
				case 13:
					iVar0 = joaat("radi");
					break;
				
				case 14:
					iVar0 = joaat("baller3");
					break;
				
				case 15:
					iVar0 = joaat("baller4");
					break;
				
				case 16:
					iVar0 = joaat("baller5");
					break;
				
				case 17:
					iVar0 = joaat("baller6");
					break;
				
				case 18:
					iVar0 = joaat("xls");
					break;
				
				case 19:
					iVar0 = joaat("xls2");
					break;
				
				case 20:
					iVar0 = joaat("contender");
					break;
				
				case 21:
					iVar0 = joaat("patriot2");
					break;
				
				case 22:
					iVar0 = joaat("serrano");
					break;
				
				case 23:
					iVar0 = joaat("fq2");
					break;
				
				case 24:
					iVar0 = joaat("habanero");
					break;
				
				case 25:
					iVar0 = joaat("toros");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("blazer");
					break;
				
				case 1:
					iVar0 = joaat("bodhi2");
					break;
				
				case 2:
					iVar0 = joaat("dune");
					break;
				
				case 3:
					iVar0 = joaat("bfinjection");
					break;
				
				case 4:
					iVar0 = joaat("mesa3");
					break;
				
				case 5:
					iVar0 = joaat("rebel");
					break;
				
				case 6:
					iVar0 = joaat("sadler");
					break;
				
				case 7:
					iVar0 = joaat("ratloader");
					break;
				
				case 8:
					iVar0 = joaat("sandking");
					break;
				
				case 9:
					iVar0 = joaat("bifta");
					break;
				
				case 10:
					iVar0 = joaat("kalahari");
					break;
				
				case 11:
					iVar0 = joaat("monster");
					break;
				
				case 12:
					iVar0 = joaat("technical");
					break;
				
				case 13:
					iVar0 = joaat("brawler");
					break;
				
				case 14:
					iVar0 = joaat("marshall");
					break;
				
				case 15:
					iVar0 = joaat("trophytruck");
					break;
				
				case 16:
					iVar0 = joaat("trophytruck2");
					break;
				
				case 17:
					iVar0 = joaat("rallytruck");
					break;
				
				case 18:
					iVar0 = joaat("blazer4");
					break;
				
				case 19:
					iVar0 = joaat("dune4");
					break;
				
				case 20:
					iVar0 = joaat("dune5");
					break;
				
				case 21:
					iVar0 = joaat("technical2");
					break;
				
				case 22:
					iVar0 = joaat("blazer5");
					break;
				
				case 23:
					iVar0 = joaat("dune3");
					break;
				
				case 24:
					iVar0 = joaat("insurgent3");
					break;
				
				case 25:
					iVar0 = joaat("technical3");
					break;
				
				case 26:
					iVar0 = joaat("nightshark");
					break;
				
				case 27:
					iVar0 = joaat("riata");
					break;
				
				case 28:
					iVar0 = joaat("kamacho");
					break;
				
				case 29:
					iVar0 = joaat("caracara");
					break;
				
				case 30:
					iVar0 = joaat("freecrawler");
					break;
				
				case 31:
					iVar0 = joaat("menacer");
					break;
				
				case 32:
					iVar0 = joaat("patriot");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("bati");
					break;
				
				case 1:
					iVar0 = joaat("daemon");
					break;
				
				case 2:
					iVar0 = joaat("faggio2");
					break;
				
				case 3:
					iVar0 = joaat("hexer");
					break;
				
				case 4:
					iVar0 = joaat("nemesis");
					break;
				
				case 5:
					iVar0 = joaat("sanchez");
					break;
				
				case 6:
					iVar0 = joaat("vader");
					break;
				
				case 7:
					iVar0 = joaat("thrust");
					break;
				
				case 8:
					iVar0 = joaat("sovereign");
					break;
				
				case 9:
					iVar0 = joaat("enduro");
					break;
				
				case 10:
					iVar0 = joaat("innovation");
					break;
				
				case 11:
					iVar0 = joaat("hakuchou");
					break;
				
				case 12:
					iVar0 = joaat("lectro");
					break;
				
				case 13:
					iVar0 = joaat("vindicator");
					break;
				
				case 14:
					iVar0 = joaat("akuma");
					break;
				
				case 15:
					iVar0 = joaat("bf400");
					break;
				
				case 16:
					iVar0 = joaat("gargoyle");
					break;
				
				case 17:
					iVar0 = joaat("cliffhanger");
					break;
				
				case 18:
					iVar0 = joaat("hakuchou2");
					break;
				
				case 19:
					iVar0 = joaat("defiler");
					break;
				
				case 20:
					iVar0 = joaat("chimera");
					break;
				
				case 21:
					iVar0 = joaat("zombieb");
					break;
				
				case 22:
					iVar0 = joaat("avarus");
					break;
				
				case 23:
					iVar0 = joaat("nightblade");
					break;
				
				case 24:
					iVar0 = joaat("zombiea");
					break;
				
				case 25:
					iVar0 = joaat("wolfsbane");
					break;
				
				case 26:
					iVar0 = joaat("manchez");
					break;
				
				case 27:
					iVar0 = joaat("ratbike");
					break;
				
				case 28:
					iVar0 = joaat("bagger");
					break;
				
				case 29:
					iVar0 = joaat("faggio3");
					break;
				
				case 30:
					iVar0 = joaat("faggio");
					break;
				
				case 31:
					iVar0 = joaat("daemon2");
					break;
				
				case 32:
					iVar0 = joaat("vortex");
					break;
				
				case 33:
					iVar0 = joaat("shotaro");
					break;
				
				case 34:
					iVar0 = joaat("esskey");
					break;
				
				case 35:
					iVar0 = joaat("diablous");
					break;
				
				case 36:
					iVar0 = joaat("diablous2");
					break;
				
				case 37:
					iVar0 = joaat("fcr");
					break;
				
				case 38:
					iVar0 = joaat("fcr2");
					break;
				
				case 39:
					iVar0 = joaat("oppressor");
					break;
				
				case 40:
					iVar0 = joaat("sanctus");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("bmx");
					break;
				
				case 1:
					iVar0 = joaat("cruiser");
					break;
				
				case 2:
					iVar0 = joaat("tribike");
					break;
				
				case 3:
					iVar0 = joaat("scorcher");
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("rhino");
					break;
				
				case 1:
					iVar0 = joaat("barracks");
					break;
				
				case 2:
					iVar0 = joaat("barracks2");
					break;
				
				case 3:
					iVar0 = joaat("barracks3");
					break;
				
				case 4:
					iVar0 = joaat("armytanker");
					break;
				
				case 5:
					iVar0 = joaat("cargobob");
					break;
				
				case 6:
					iVar0 = joaat("titan");
					break;
				
				case 7:
					iVar0 = joaat("insurgent");
					break;
				
				case 8:
					iVar0 = joaat("insurgent2");
					break;
				
				case 9:
					iVar0 = joaat("apc");
					break;
				
				case 10:
					iVar0 = joaat("halftrack");
					break;
				
				case 11:
					iVar0 = joaat("chernobog");
					break;
				
				case 12:
					iVar0 = joaat("khanjali");
					break;
				
				case 13:
					iVar0 = joaat("thruster");
					break;
				
				case 14:
					iVar0 = joaat("barrage");
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("police3");
					break;
				
				case 1:
					iVar0 = joaat("policeb");
					break;
				
				case 2:
					iVar0 = joaat("riot");
					break;
				
				case 3:
					iVar0 = joaat("fbi");
					break;
				
				case 4:
					iVar0 = joaat("fbi2");
					break;
				
				case 5:
					iVar0 = joaat("pbus");
					break;
				
				case 6:
					iVar0 = joaat("annihilator");
					break;
				
				case 7:
					iVar0 = joaat("buzzard");
					break;
				
				case 8:
					iVar0 = joaat("polmav");
					break;
				
				case 9:
					iVar0 = joaat("predator");
					break;
				
				case 10:
					iVar0 = joaat("sheriff2");
					break;
				
				case 11:
					iVar0 = joaat("riot2");
					break;
				
				case 12:
					iVar0 = joaat("policet");
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("ambulance");
					break;
				
				case 1:
					iVar0 = joaat("bus");
					break;
				
				case 2:
					iVar0 = joaat("coach");
					break;
				
				case 3:
					iVar0 = joaat("firetruk");
					break;
				
				case 4:
					iVar0 = joaat("romero");
					break;
				
				case 5:
					iVar0 = joaat("stretch");
					break;
				
				case 6:
					iVar0 = joaat("taxi");
					break;
				
				case 7:
					iVar0 = joaat("trash");
					break;
				
				case 8:
					iVar0 = joaat("trash2");
					break;
				
				case 9:
					iVar0 = joaat("dilettante2");
					break;
				
				case 10:
					iVar0 = joaat("brickade");
					break;
				
				case 11:
					iVar0 = joaat("wastelander");
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("bulldozer");
					break;
				
				case 1:
					iVar0 = joaat("dump");
					break;
				
				case 2:
					iVar0 = joaat("handler");
					break;
				
				case 3:
					iVar0 = joaat("mixer");
					break;
				
				case 4:
					iVar0 = joaat("tiptruck");
					break;
				
				case 5:
					iVar0 = joaat("rubble");
					break;
				
				case 6:
					iVar0 = joaat("guardian");
					break;
				
				case 7:
					iVar0 = joaat("mixer2");
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("airtug");
					break;
				
				case 1:
					iVar0 = joaat("caddy");
					break;
				
				case 2:
					iVar0 = joaat("mower");
					break;
				
				case 3:
					iVar0 = joaat("tractor2");
					break;
				
				case 4:
					iVar0 = joaat("scrap");
					break;
				
				case 5:
					iVar0 = joaat("ripley");
					break;
				
				case 6:
					iVar0 = joaat("forklift");
					break;
				
				case 7:
					iVar0 = joaat("caddy3");
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("bison");
					break;
				
				case 1:
					iVar0 = joaat("benson");
					break;
				
				case 2:
					iVar0 = joaat("boxville2");
					break;
				
				case 3:
					iVar0 = joaat("boxville3");
					break;
				
				case 4:
					iVar0 = joaat("boxville4");
					break;
				
				case 5:
					iVar0 = joaat("gburrito");
					break;
				
				case 6:
					iVar0 = joaat("minivan");
					break;
				
				case 7:
					iVar0 = joaat("mule");
					break;
				
				case 8:
					iVar0 = joaat("mule3");
					break;
				
				case 9:
					iVar0 = joaat("speedo");
					break;
				
				case 10:
					iVar0 = joaat("stockade");
					break;
				
				case 11:
					iVar0 = joaat("taco");
					break;
				
				case 12:
					iVar0 = joaat("camper");
					break;
				
				case 13:
					iVar0 = joaat("journey");
					break;
				
				case 14:
					iVar0 = joaat("surfer");
					break;
				
				case 15:
					iVar0 = joaat("paradise");
					break;
				
				case 16:
					iVar0 = joaat("gburrito2");
					break;
				
				case 17:
					iVar0 = joaat("rumpo");
					break;
				
				case 18:
					iVar0 = joaat("minivan2");
					break;
				
				case 19:
					iVar0 = joaat("rumpo3");
					break;
				
				case 20:
					iVar0 = joaat("youga2");
					break;
				
				case 21:
					iVar0 = joaat("boxville5");
					break;
				
				case 22:
					iVar0 = joaat("mule4");
					break;
				
				case 23:
					iVar0 = joaat("speedo4");
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("hauler");
					break;
				
				case 1:
					iVar0 = joaat("flatbed");
					break;
				
				case 2:
					iVar0 = joaat("packer");
					break;
				
				case 3:
					iVar0 = joaat("phantom");
					break;
				
				case 4:
					iVar0 = joaat("tanker");
					break;
				
				case 5:
					iVar0 = joaat("tanker2");
					break;
				
				case 6:
					iVar0 = joaat("trailers");
					break;
				
				case 7:
					iVar0 = joaat("trflat");
					break;
				
				case 8:
					iVar0 = joaat("phantom2");
					break;
				
				case 9:
					iVar0 = joaat("phantom3");
					break;
				
				case 10:
					iVar0 = joaat("hauler2");
					break;
				
				case 11:
					iVar0 = joaat("trailersmall2");
					break;
				
				case 12:
					iVar0 = joaat("trailerlarge");
					break;
				
				case 13:
					iVar0 = joaat("pounder");
					break;
				
				case 14:
					iVar0 = joaat("pounder2");
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("frogger");
					break;
				
				case 1:
					iVar0 = joaat("maverick");
					break;
				
				case 2:
					iVar0 = joaat("skylift");
					break;
				
				case 3:
					iVar0 = joaat("cargobob2");
					break;
				
				case 4:
					iVar0 = joaat("swift");
					break;
				
				case 5:
					iVar0 = joaat("valkyrie");
					break;
				
				case 6:
					iVar0 = joaat("savage");
					break;
				
				case 7:
					iVar0 = joaat("swift2");
					break;
				
				case 8:
					iVar0 = joaat("supervolito");
					break;
				
				case 9:
					iVar0 = joaat("supervolito2");
					break;
				
				case 10:
					iVar0 = joaat("valkyrie2");
					break;
				
				case 11:
					iVar0 = joaat("volatus");
					break;
				
				case 12:
					iVar0 = joaat("buzzard2");
					break;
				
				case 13:
					iVar0 = joaat("havok");
					break;
				
				case 14:
					iVar0 = joaat("hunter");
					break;
				
				case 15:
					iVar0 = joaat("akula");
					break;
				
				case 16:
					iVar0 = joaat("avenger");
					break;
				
				case 17:
					iVar0 = joaat("seasparrow");
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("cuban800");
					break;
				
				case 1:
					iVar0 = joaat("duster");
					break;
				
				case 2:
					iVar0 = joaat("mammatus");
					break;
				
				case 3:
					iVar0 = joaat("shamal");
					break;
				
				case 4:
					iVar0 = joaat("stunt");
					break;
				
				case 5:
					iVar0 = joaat("velum");
					break;
				
				case 6:
					iVar0 = joaat("jet");
					break;
				
				case 7:
					iVar0 = joaat("vestra");
					break;
				
				case 8:
					iVar0 = joaat("miljet");
					break;
				
				case 9:
					iVar0 = joaat("velum2");
					break;
				
				case 10:
					iVar0 = joaat("luxor2");
					break;
				
				case 11:
					iVar0 = joaat("nimbus");
					break;
				
				case 12:
					iVar0 = joaat("cargoplane");
					break;
				
				case 13:
					iVar0 = joaat("dodo");
					break;
				
				case 14:
					iVar0 = joaat("microlight");
					break;
				
				case 15:
					iVar0 = joaat("alphaz1");
					break;
				
				case 16:
					iVar0 = joaat("tula");
					break;
				
				case 17:
					iVar0 = joaat("rogue");
					break;
				
				case 18:
					iVar0 = joaat("starling");
					break;
				
				case 19:
					iVar0 = joaat("bombushka");
					break;
				
				case 20:
					iVar0 = joaat("howard");
					break;
				
				case 21:
					iVar0 = joaat("mogul");
					break;
				
				case 22:
					iVar0 = joaat("seabreeze");
					break;
				
				case 23:
					iVar0 = joaat("nokota");
					break;
				
				case 24:
					iVar0 = joaat("volatol");
					break;
				
				case 25:
					iVar0 = joaat("strikeforce");
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("lazer");
					break;
				
				case 1:
					iVar0 = joaat("besra");
					break;
				
				case 2:
					iVar0 = joaat("hydra");
					break;
				
				case 3:
					iVar0 = joaat("molotok");
					break;
				
				case 4:
					iVar0 = joaat("pyro");
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("dinghy");
					break;
				
				case 1:
					iVar0 = joaat("dinghy2");
					break;
				
				case 2:
					iVar0 = joaat("dinghy3");
					break;
				
				case 3:
					iVar0 = joaat("marquis");
					break;
				
				case 4:
					iVar0 = joaat("seashark");
					break;
				
				case 5:
					iVar0 = joaat("submersible");
					break;
				
				case 6:
					iVar0 = joaat("submersible2");
					break;
				
				case 7:
					iVar0 = joaat("suntrap");
					break;
				
				case 8:
					iVar0 = joaat("tropic");
					break;
				
				case 9:
					iVar0 = joaat("speeder");
					break;
				
				case 10:
					iVar0 = joaat("toro");
					break;
				
				case 11:
					iVar0 = joaat("tug");
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("prop_cs_dildo_01");
					break;
				
				case 1:
					iVar0 = joaat("v_res_d_dildo_b");
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("blazer5");
					break;
				
				case 1:
					iVar0 = joaat("ruiner2");
					break;
				
				case 2:
					iVar0 = joaat("voltic2");
					break;
				
				case 3:
					iVar0 = joaat("technical2");
					break;
				
				case 4:
					iVar0 = joaat("dune4");
					break;
				
				case 5:
					iVar0 = joaat("dune5");
					break;
				
				case 6:
					iVar0 = joaat("phantom2");
					break;
				
				case 7:
					iVar0 = joaat("boxville5");
					break;
				
				case 8:
					iVar0 = joaat("wastelander");
					break;
				
				case 9:
					iVar0 = joaat("oppressor");
					break;
				
				case 10:
					iVar0 = joaat("vigilante");
					break;
				
				case 11:
					iVar0 = joaat("deluxo");
					break;
				
				case 12:
					iVar0 = 886810209;
					break;
				
				case 13:
					iVar0 = joaat("thruster");
					break;
				
				case 14:
					iVar0 = joaat("pbus2");
					break;
				
				case 15:
					iVar0 = joaat("oppressor2");
					break;
				
				case 16:
					iVar0 = -1988428699;
					break;
				
				case 17:
					iVar0 = joaat("blimp3");
					break;
				
				case 18:
					iVar0 = joaat("scramjet");
					break;
				
				case 19:
					iVar0 = joaat("rcbandito");
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("tampa3");
					break;
				
				case 1:
					iVar0 = joaat("dune3");
					break;
				
				case 2:
					iVar0 = joaat("halftrack");
					break;
				
				case 3:
					iVar0 = joaat("insurgent3");
					break;
				
				case 4:
					iVar0 = joaat("technical3");
					break;
				
				case 5:
					iVar0 = joaat("apc");
					break;
				
				case 6:
					iVar0 = joaat("oppressor");
					break;
				
				case 7:
					iVar0 = joaat("trailersmall2");
					break;
				
				case 8:
					iVar0 = joaat("thruster");
					break;
				
				case 9:
					iVar0 = joaat("riot2");
					break;
				
				case 10:
					iVar0 = joaat("khanjali");
					break;
				
				case 11:
					iVar0 = joaat("deluxo");
					break;
				
				case 12:
					iVar0 = joaat("barrage");
					break;
				
				case 13:
					iVar0 = joaat("microlight");
					break;
				
				case 14:
					iVar0 = joaat("havok");
					break;
				
				case 15:
					iVar0 = joaat("seabreeze");
					break;
				
				case 16:
					iVar0 = joaat("starling");
					break;
				
				case 17:
					iVar0 = joaat("akula");
					break;
				
				case 18:
					iVar0 = joaat("cuban800");
					break;
				
				case 19:
					iVar0 = joaat("pyro");
					break;
				
				case 20:
					iVar0 = joaat("mogul");
					break;
				
				case 21:
					iVar0 = joaat("rogue");
					break;
				
				case 22:
					iVar0 = joaat("molotok");
					break;
				
				case 23:
					iVar0 = joaat("nokota");
					break;
				
				case 24:
					iVar0 = joaat("hunter");
					break;
				
				case 25:
					iVar0 = joaat("tula");
					break;
				
				case 26:
					iVar0 = joaat("bombushka");
					break;
				
				case 27:
					iVar0 = joaat("volatol");
					break;
				
				case 28:
					iVar0 = joaat("avenger");
					break;
				
				case 29:
					iVar0 = joaat("nightshark");
					break;
				
				case 30:
					iVar0 = joaat("ardent");
					break;
				
				case 31:
					iVar0 = joaat("blazer5");
					break;
				
				case 32:
					iVar0 = joaat("ruiner2");
					break;
				
				case 33:
					iVar0 = joaat("technical2");
					break;
				
				case 34:
					iVar0 = joaat("boxville5");
					break;
				
				case 35:
					iVar0 = joaat("vigilante");
					break;
				
				case 36:
					iVar0 = 886810209;
					break;
				
				case 37:
					iVar0 = joaat("chernobog");
					break;
				
				case 38:
					iVar0 = joaat("caracara");
					break;
				
				case 39:
					iVar0 = joaat("menacer");
					break;
				
				case 40:
					iVar0 = joaat("oppressor2");
					break;
				
				case 41:
					iVar0 = joaat("strikeforce");
					break;
				
				case 42:
					iVar0 = joaat("scramjet");
					break;
				
				case 43:
					iVar0 = joaat("mule4");
					break;
				
				case 44:
					iVar0 = joaat("pounder2");
					break;
				
				case 45:
					iVar0 = joaat("speedo4");
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return func_203(joaat("bruiser"));
				
				case 1:
					return func_203(joaat("brutus"));
				
				case 2:
					return func_203(joaat("cerberus"));
				
				case 3:
					return func_203(joaat("deathbike"));
				
				case 4:
					return func_203(joaat("dominator4"));
				
				case 5:
					return func_203(joaat("impaler2"));
				
				case 6:
					if (Global_1379105)
					{
						return joaat("imperator");
					}
					return func_203(joaat("imperator"));
				
				case 7:
					return func_203(joaat("issi4"));
				
				case 8:
					return func_203(joaat("monster3"));
				
				case 9:
					return func_203(joaat("scarab"));
				
				case 10:
					return func_203(joaat("slamvan4"));
				
				case 11:
					return func_203(joaat("zr380"));
				
				default:
			}
			break;
	}
	return iVar0;
}

int func_203(int iParam0)
{
	int iVar0;
	
	switch (Global_4456448.f_146778)
	{
		case 1:
			switch (iParam0)
			{
				case joaat("bruiser"):
				case joaat("bruiser2"):
				case -2042350822:
					iVar0 = joaat("bruiser");
					break;
				
				case joaat("brutus"):
				case joaat("brutus2"):
				case 2038858402:
					iVar0 = joaat("brutus");
					break;
				
				case joaat("cerberus"):
				case joaat("cerberus2"):
				case 1909700336:
					iVar0 = joaat("cerberus");
					break;
				
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case -1374500452:
					iVar0 = joaat("deathbike");
					break;
				
				case joaat("dominator4"):
				case joaat("dominator5"):
				case -1293924613:
					iVar0 = joaat("dominator4");
					break;
				
				case joaat("impaler2"):
				case joaat("impaler3"):
				case -1744505657:
					iVar0 = joaat("impaler2");
					break;
				
				case joaat("imperator"):
				case joaat("imperator2"):
				case -755532233:
					iVar0 = joaat("imperator");
					break;
				
				case joaat("issi4"):
				case joaat("issi5"):
				case 1239571361:
					iVar0 = joaat("issi4");
					break;
				
				case joaat("monster3"):
				case 840387324:
				case -715746948:
					iVar0 = joaat("monster3");
					break;
				
				case joaat("scarab"):
				case joaat("scarab2"):
				case -579747861:
					iVar0 = joaat("scarab");
					break;
				
				case joaat("slamvan4"):
				case joaat("slamvan5"):
				case 1742022738:
					iVar0 = joaat("slamvan4");
					break;
				
				case joaat("zr380"):
				case joaat("zr3802"):
				case -1478704292:
					iVar0 = joaat("zr380");
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case joaat("bruiser"):
				case joaat("bruiser2"):
				case -2042350822:
					iVar0 = joaat("bruiser2");
					break;
				
				case joaat("brutus"):
				case joaat("brutus2"):
				case 2038858402:
					iVar0 = joaat("brutus2");
					break;
				
				case joaat("cerberus"):
				case joaat("cerberus2"):
				case 1909700336:
					iVar0 = joaat("cerberus2");
					break;
				
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case -1374500452:
					iVar0 = joaat("deathbike2");
					break;
				
				case joaat("dominator4"):
				case joaat("dominator5"):
				case -1293924613:
					iVar0 = joaat("dominator5");
					break;
				
				case joaat("impaler2"):
				case joaat("impaler3"):
				case -1744505657:
					iVar0 = joaat("impaler3");
					break;
				
				case joaat("imperator"):
				case joaat("imperator2"):
				case -755532233:
					iVar0 = joaat("imperator2");
					break;
				
				case joaat("issi4"):
				case joaat("issi5"):
				case 1239571361:
					iVar0 = joaat("issi5");
					break;
				
				case joaat("monster3"):
				case 840387324:
				case -715746948:
					iVar0 = 840387324;
					break;
				
				case joaat("scarab"):
				case joaat("scarab2"):
				case -579747861:
					iVar0 = joaat("scarab2");
					break;
				
				case joaat("slamvan4"):
				case joaat("slamvan5"):
				case 1742022738:
					iVar0 = joaat("slamvan5");
					break;
				
				case joaat("zr380"):
				case joaat("zr3802"):
				case -1478704292:
					iVar0 = joaat("zr3802");
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case joaat("bruiser"):
				case joaat("bruiser2"):
				case -2042350822:
					iVar0 = -2042350822;
					break;
				
				case joaat("brutus"):
				case joaat("brutus2"):
				case 2038858402:
					iVar0 = 2038858402;
					break;
				
				case joaat("cerberus"):
				case joaat("cerberus2"):
				case 1909700336:
					iVar0 = 1909700336;
					break;
				
				case joaat("deathbike"):
				case joaat("deathbike2"):
				case -1374500452:
					iVar0 = -1374500452;
					break;
				
				case joaat("dominator4"):
				case joaat("dominator5"):
				case -1293924613:
					iVar0 = -1293924613;
					break;
				
				case joaat("impaler2"):
				case joaat("impaler3"):
				case -1744505657:
					iVar0 = -1744505657;
					break;
				
				case joaat("imperator"):
				case joaat("imperator2"):
				case -755532233:
					iVar0 = -755532233;
					break;
				
				case joaat("issi4"):
				case joaat("issi5"):
				case 1239571361:
					iVar0 = 1239571361;
					break;
				
				case joaat("monster3"):
				case 840387324:
				case -715746948:
					iVar0 = -715746948;
					break;
				
				case joaat("scarab"):
				case joaat("scarab2"):
				case -579747861:
					iVar0 = -579747861;
					break;
				
				case joaat("slamvan4"):
				case joaat("slamvan5"):
				case 1742022738:
					iVar0 = 1742022738;
					break;
				
				case joaat("zr380"):
				case joaat("zr3802"):
				case -1478704292:
					iVar0 = -1478704292;
					break;
			}
			break;
	}
	if (STREAMING::IS_MODEL_VALID(iVar0))
	{
		return iVar0;
	}
	return iParam0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (Global_1685168[iParam0] != -1)
	{
		return Global_1685168[iParam0];
	}
	iVar0 = 0;
	while (iVar0 <= 53)
	{
		if (func_202(iParam0, iVar0) == 0)
		{
			Global_1685168[iParam0] = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_205(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	char[] cVar3[8];
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	int iVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	var uVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "weap");
	Global_4456448.f_76665 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "no");
	if (Global_4456448 == 0)
	{
		if (Global_4456448.f_76665 > 60)
		{
			Global_4456448.f_76665 = 60;
		}
	}
	else if (Global_4456448.f_76665 > 60)
	{
		Global_4456448.f_76665 = 60;
	}
	Global_4456448.f_76667 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "time");
	Global_4456448.f_76668 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "pal");
	Global_4456448.f_64 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "blip");
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "loc");
	uVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "head");
	uVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "rotx");
	uVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "roty");
	uVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "type");
	uVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "sub");
	uVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "bits");
	uVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "clip");
	iVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "brest1");
	iVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "brest2");
	iVar16 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "brest3");
	iVar17 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "brest4");
	iVar18 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "dmgmult");
	iVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "rput");
	iVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vput");
	uVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasst");
	uVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasso");
	uVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasss");
	uVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasst2");
	iVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasso2");
	uVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasss2");
	uVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasst3");
	uVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasso3");
	uVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasss3");
	uVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasst4");
	uVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasso4");
	uVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vasss4");
	iVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vclnr");
	iVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vclnt");
	iVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vclnrl");
	iVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ipdi");
	iVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "iwati");
	uVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "iptnp");
	iVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vbmbl");
	iVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vbmbm");
	iVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "wspg");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "wsspg");
	Global_4456448.f_79603 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(uVar5, "randtyp");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_76665 - 1))
	{
		if (iVar0 < 60)
		{
			Global_4456448.f_76674[iVar0 /*48*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar6, iVar0) };
			Global_4456448.f_76674[iVar0 /*48*/].f_3.f_2 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar7, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar8, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_3.f_1 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar9, iVar0);
			uVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar10, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_15 = uVar1;
			if (Global_4456448.f_131902 == 0)
			{
				iVar43 = 0;
				while (iVar43 <= 59)
				{
					if (Global_4456448.f_76674[iVar43 /*48*/].f_15 == -48884066)
					{
						Global_4456448.f_76674[iVar43 /*48*/].f_15 = joaat("pickup_weapon_pistol");
					}
					iVar43++;
				}
			}
			if (!func_208(Global_4456448.f_76674[iVar0 /*48*/].f_15))
			{
				if (Global_4456448.f_76674[iVar0 /*48*/].f_15 == 127042729)
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_15 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_15 = joaat("pickup_weapon_pistol");
				}
			}
			Global_4456448.f_76674[iVar0 /*48*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar11, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar19, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_44 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_45 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar40, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar41, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar0);
			Global_4456448.f_76674[iVar0 /*48*/].f_43 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38, iVar0);
			if (iVar14 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar14, iVar0) == 1)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_10[0] = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar14, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_10[0] = 0;
			}
			if (iVar15 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar15, iVar0) == 1)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_10[1] = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar15, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_10[1] = 0;
			}
			if (iVar16 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar16, iVar0) == 1)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_10[2] = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar16, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_10[2] = 0;
			}
			if (iVar17 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar17, iVar0) == 1)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_10[3] = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar17, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_10[3] = 0;
			}
			if (iVar18 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar18, iVar0) == 3)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar18, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_9 = 1f;
			}
			if (iVar19 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar19, iVar0) == 2)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar19, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_23 = -1;
			}
			if (iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar0) == 2)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_41 = 0;
			}
			if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar0) == 2)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_24 = -1;
			}
			if (iVar37 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar37, iVar0) == 2)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_42 = 0;
			}
			if (iVar37 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar37, iVar0) == 2)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_43 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_43 = 0;
			}
			if (iVar39 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar39, iVar0) == 2)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_44 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_44 = 0;
			}
			if (iVar40 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar40, iVar0) == 2)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_45 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar40, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_45 = 0;
			}
			if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar0) == 2)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar41, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_46 = 0;
			}
			if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar0) == 2)
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
			}
			else
			{
				Global_4456448.f_76674[iVar0 /*48*/].f_47 = 0;
			}
			if (func_133())
			{
				if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
				}
				else
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_29 = -1;
				}
				if (iVar34 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar34, iVar0) == 2)
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar0);
				}
				else
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_30 = -1;
				}
				if (iVar33 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar33, iVar0) == 2)
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar33, iVar0);
				}
				else
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_31 = 0;
				}
				Global_4456448.f_76674[iVar0 /*48*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar21, iVar0);
				Global_4456448.f_76674[iVar0 /*48*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
				Global_4456448.f_76674[iVar0 /*48*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23, iVar0);
				if (Global_4456448.f_76674[iVar0 /*48*/].f_28 == -1)
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_28 = 0;
				}
				if (iVar25 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar25, iVar0) == 2)
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24, iVar0);
					Global_4456448.f_76674[iVar0 /*48*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar25, iVar0);
					Global_4456448.f_76674[iVar0 /*48*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar26, iVar0);
					Global_4456448.f_76674[iVar0 /*48*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27, iVar0);
					Global_4456448.f_76674[iVar0 /*48*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28, iVar0);
					Global_4456448.f_76674[iVar0 /*48*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar29, iVar0);
					Global_4456448.f_76674[iVar0 /*48*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar30, iVar0);
					Global_4456448.f_76674[iVar0 /*48*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
					Global_4456448.f_76674[iVar0 /*48*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32, iVar0);
				}
				else
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_35 = -1;
					Global_4456448.f_76674[iVar0 /*48*/].f_32 = 0;
					Global_4456448.f_76674[iVar0 /*48*/].f_38 = 0;
					Global_4456448.f_76674[iVar0 /*48*/].f_36 = -1;
					Global_4456448.f_76674[iVar0 /*48*/].f_33 = 0;
					Global_4456448.f_76674[iVar0 /*48*/].f_39 = 0;
					Global_4456448.f_76674[iVar0 /*48*/].f_37 = -1;
					Global_4456448.f_76674[iVar0 /*48*/].f_34 = 0;
					Global_4456448.f_76674[iVar0 /*48*/].f_40 = 0;
				}
			}
			StringCopy(&cVar3, "comps", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
			iVar2 = 0;
			while (iVar2 <= 5)
			{
				if (iVar44 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar44, iVar2) == 2)
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_16[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar2);
				}
				else
				{
					Global_4456448.f_76674[iVar0 /*48*/].f_16[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_26, 11))
	{
		func_206();
	}
}

void func_206()
{
	int iVar0;
	
	iVar0 = Global_4456448.f_76668;
	Global_4456448.f_76668 = func_207(iVar0);
	GAMEPLAY::SET_BIT(&(Global_4456448.f_26), 11);
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("weapon_pistol");
			break;
		
		case 1:
			return joaat("weapon_combatpistol");
			break;
		
		case 2:
			return joaat("weapon_appistol");
			break;
		
		case 29:
			return joaat("weapon_snspistol");
			break;
		
		case 30:
			return joaat("weapon_heavypistol");
			break;
		
		case 37:
			return joaat("weapon_vintagepistol");
			break;
		
		case 35:
			return joaat("weapon_pistol50");
			break;
		
		case 69:
			if (func_160())
			{
				return joaat("weapon_pistol_mk2");
			}
			break;
		
		case 75:
			if (func_160())
			{
				return joaat("weapon_revolver_mk2");
			}
			break;
		
		case 3:
			return joaat("weapon_pumpshotgun");
			break;
		
		case 4:
			return joaat("weapon_sawnoffshotgun");
			break;
		
		case 5:
			return joaat("weapon_assaultshotgun");
			break;
		
		case 40:
			return joaat("weapon_heavyshotgun");
			break;
		
		case 76:
			if (func_160())
			{
				return joaat("weapon_pumpshotgun_mk2");
			}
			break;
		
		case 6:
			return joaat("weapon_microsmg");
			break;
		
		case 7:
			return joaat("weapon_smg");
			break;
		
		case 8:
			return joaat("weapon_mg");
			break;
		
		case 9:
			return joaat("weapon_combatmg");
			break;
		
		case 31:
			return joaat("weapon_gusenberg");
			break;
		
		case 70:
			if (func_160())
			{
				return joaat("weapon_smg_mk2");
			}
			break;
		
		case 71:
			if (func_160())
			{
				return joaat("weapon_combatmg_mk2");
			}
			break;
		
		case 10:
			return joaat("weapon_assaultrifle");
			break;
		
		case 11:
			return joaat("weapon_carbinerifle");
			break;
		
		case 12:
			return joaat("weapon_advancedrifle");
			break;
		
		case 32:
			return joaat("weapon_specialcarbine");
			break;
		
		case 33:
			return joaat("weapon_bullpuprifle");
			break;
		
		case 39:
			return joaat("weapon_musket");
			break;
		
		case 72:
			if (func_160())
			{
				return joaat("weapon_assaultrifle_mk2");
			}
			break;
		
		case 73:
			if (func_160())
			{
				return joaat("weapon_carbinerifle_mk2");
			}
			break;
		
		case 77:
			if (func_160())
			{
				return joaat("weapon_bullpuprifle_mk2");
			}
			break;
		
		case 78:
			if (func_160())
			{
				return joaat("weapon_specialcarbine_mk2");
			}
			break;
		
		case 13:
			return joaat("weapon_sniperrifle");
			break;
		
		case 14:
			return joaat("weapon_heavysniper");
			break;
		
		case 41:
			return joaat("weapon_marksmanrifle");
			break;
		
		case 79:
			if (func_160())
			{
				return joaat("weapon_heavysniper_mk2");
			}
			break;
		
		case 15:
			return joaat("weapon_grenadelauncher");
			break;
		
		case 16:
			return joaat("weapon_rpg");
			break;
		
		case 17:
			return joaat("weapon_minigun");
			break;
		
		case 38:
			return joaat("weapon_firework");
			break;
		
		case 43:
			return joaat("weapon_hominglauncher");
			break;
		
		case 55:
			return joaat("weapon_railgun");
			break;
		
		case 18:
			return joaat("weapon_grenade");
			break;
		
		case 19:
			return joaat("weapon_stickybomb");
			break;
		
		case 20:
			return joaat("weapon_smokegrenade");
			break;
		
		case 21:
			return joaat("weapon_molotov");
			break;
		
		case 22:
			return joaat("weapon_petrolcan");
			break;
		
		case 44:
			return joaat("weapon_proxmine");
			break;
		
		case 23:
			return joaat("weapon_knife");
			break;
		
		case 24:
			return joaat("weapon_nightstick");
			break;
		
		case 25:
			return joaat("weapon_bat");
			break;
		
		case 26:
			return joaat("weapon_crowbar");
			break;
		
		case 27:
			return joaat("weapon_golfclub");
			break;
		
		case 34:
			return joaat("weapon_bottle");
			break;
		
		case 36:
			return joaat("weapon_dagger");
			break;
		
		case 28:
			return joaat("weapon_unarmed");
			break;
		
		case 42:
			return joaat("weapon_flaregun");
			break;
		
		case 45:
			return joaat("weapon_knuckle");
			break;
		
		case 46:
			return joaat("weapon_combatpdw");
			break;
		
		case 47:
			return joaat("weapon_marksmanpistol");
			break;
		
		case 53:
			return joaat("weapon_hatchet");
			break;
		
		case 48:
			return joaat("weapon_machete");
			break;
		
		case 51:
			return joaat("weapon_machinepistol");
			break;
		
		case 54:
			return joaat("weapon_assaultsmg");
			break;
		
		case 49:
			return joaat("weapon_dbshotgun");
			break;
		
		case 50:
			return joaat("weapon_compactrifle");
			break;
		
		case 52:
			return joaat("weapon_flashlight");
			break;
		
		case 56:
			return joaat("weapon_revolver");
			break;
		
		case 57:
			return joaat("weapon_switchblade");
			break;
		
		case 58:
			return joaat("weapon_gusenberg");
			break;
		
		case 59:
			return joaat("weapon_autoshotgun");
			break;
		
		case 60:
			return joaat("weapon_minismg");
			break;
		
		case 61:
			return joaat("weapon_compactlauncher");
			break;
		
		case 62:
			return joaat("weapon_pipebomb");
			break;
		
		case 63:
			return joaat("weapon_poolcue");
			break;
		
		case 64:
			return joaat("weapon_battleaxe");
			break;
		
		case 65:
			return joaat("weapon_wrench");
			break;
		
		case 66:
			return joaat("weapon_bullpupshotgun");
			break;
		
		case 67:
			return joaat("weapon_hammer");
			break;
		
		case 68:
			return joaat("weapon_doubleaction");
			break;
		
		case 80:
			if (func_160())
			{
				return joaat("weapon_marksmanrifle_mk2");
			}
			break;
		
		case 81:
			if (func_160())
			{
				return joaat("weapon_snspistol_mk2");
			}
			break;
		
		case 82:
			if (func_160())
			{
				return joaat("weapon_revolver_mk2");
			}
			break;
		
		case 83:
			if (func_160())
			{
				return joaat("weapon_stone_hatchet");
			}
			break;
	}
	return joaat("weapon_pistol");
}

int func_208(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pickup_health_standard"):
		case joaat("pickup_armour_standard"):
		case joaat("pickup_health_snack"):
		case joaat("pickup_money_variable"):
		case joaat("pickup_money_case"):
		case joaat("pickup_money_wallet"):
		case joaat("pickup_money_purse"):
		case joaat("pickup_money_dep_bag"):
		case joaat("pickup_money_med_bag"):
		case joaat("pickup_money_paper_bag"):
		case joaat("pickup_money_security_case"):
		case -512375144:
		case joaat("pickup_weapon_pistol"):
		case joaat("pickup_weapon_combatpistol"):
		case 1817941018:
		case joaat("pickup_weapon_appistol"):
		case joaat("pickup_weapon_microsmg"):
		case joaat("pickup_weapon_smg"):
		case 1948018762:
		case joaat("pickup_weapon_assaultrifle"):
		case joaat("pickup_weapon_carbinerifle"):
		case 1491498856:
		case joaat("pickup_weapon_advancedrifle"):
		case joaat("pickup_weapon_mg"):
		case joaat("pickup_weapon_combatmg"):
		case 975696266:
		case joaat("pickup_weapon_pumpshotgun"):
		case joaat("pickup_weapon_sawnoffshotgun"):
		case joaat("pickup_weapon_assaultshotgun"):
		case joaat("pickup_weapon_sniperrifle"):
		case 1061513000:
		case joaat("pickup_weapon_heavysniper"):
		case joaat("pickup_weapon_grenadelauncher"):
		case joaat("pickup_weapon_rpg"):
		case joaat("pickup_weapon_minigun"):
		case joaat("pickup_weapon_grenade"):
		case joaat("pickup_weapon_smokegrenade"):
		case joaat("pickup_weapon_stickybomb"):
		case joaat("pickup_weapon_molotov"):
		case -48884066:
		case -660082779:
		case -695202657:
		case joaat("pickup_weapon_fireextinguisher"):
		case joaat("pickup_weapon_petrolcan"):
		case joaat("pickup_weapon_loudhailer"):
		case joaat("pickup_weapon_knife"):
		case joaat("pickup_weapon_nightstick"):
		case joaat("pickup_weapon_hammer"):
		case joaat("pickup_weapon_bat"):
		case joaat("pickup_weapon_crowbar"):
		case joaat("pickup_weapon_golfclub"):
		case joaat("pickup_ammo_bullet_mp"):
		case joaat("pickup_ammo_missile_mp"):
		case -1541298894:
		case 544828034:
		case 292537574:
		case -457363514:
		case -564600653:
		case 2012476125:
			return 1;
		
		default:
	}
	switch (iParam0)
	{
		case -1070796507:
		case -2011516760:
		case -2071756841:
		case -228982343:
		case 610630637:
		case -1883407879:
		case -535568356:
		case -114341780:
		case -1892342586:
		case 2001257022:
		case joaat("pickup_vehicle_health_standard"):
		case -34700440:
		case joaat("pickup_vehicle_armour_standard"):
		case joaat("pickup_vehicle_weapon_pistol"):
		case joaat("pickup_vehicle_weapon_combatpistol"):
		case -744254618:
		case joaat("pickup_vehicle_weapon_appistol"):
		case joaat("pickup_vehicle_weapon_microsmg"):
		case joaat("pickup_vehicle_weapon_smg"):
		case joaat("pickup_vehicle_weapon_sawnoff"):
		case 1751145014:
		case joaat("pickup_vehicle_weapon_grenade"):
		case joaat("pickup_vehicle_weapon_smokegrenade"):
		case joaat("pickup_vehicle_weapon_stickybomb"):
		case joaat("pickup_vehicle_weapon_molotov"):
		case joaat("pickup_vehicle_custom_script"):
		case 1104334678:
		case 1704231442:
		case joaat("pickup_portable_crate_unfixed"):
		case -1795552418:
		case joaat("pickup_portable_package"):
		case 837436873:
		case joaat("pickup_submarine"):
		case joaat("pickup_parachute"):
		case joaat("pickup_custom_script"):
		case joaat("pickup_handcuff_key"):
		case joaat("pickup_camera"):
		case -95310859:
		case 157823901:
		case -977852653:
		case -2124585240:
		case -1661912808:
		case -1074893765:
		case -336028321:
		case 1393009900:
		case 582047296:
		case 1983869217:
		case -1071729032:
		case 1649373715:
		case 1311775952:
		case -462548556:
		case -1118969278:
		case 1850631618:
		case -171582756:
		case -1965167499:
		case -1093374267:
		case 127042729:
		case 266812085:
		case -102572257:
		case -668632385:
		case -1112080475:
		case -40063266:
		case 2023061218:
		case -572254182:
		case 1632369836:
		case -1127890446:
		case -747492773:
		case -253098439:
		case -1352061783:
		case 155106086:
		case 158843122:
		case -451800215:
		case -2121850769:
		case -1109887812:
		case -1457529717:
		case -16088425:
		case 1234831722:
		case -282365040:
		case 1038697149:
		case 1835046764:
		case -1945122029:
		case 94531552:
		case 1572258186:
		case -1621765815:
		case 990867623:
		case -862936205:
		case 1651898027:
			return 1;
		
		default:
	}
	return 0;
}

void func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	var uVar4;
	var uVar5[10];
	var uVar16[10];
	var uVar27[10];
	var uVar38[10];
	
	if (DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ptemp") == 0)
	{
		return;
	}
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ptemp");
	Global_4456448.f_152938 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar4, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_152938 - 1))
	{
		StringCopy(&cVar2, "pto", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar5[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
		StringCopy(&cVar2, "ptr", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar16[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
		StringCopy(&cVar2, "ptm", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar27[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
		StringCopy(&cVar2, "ptc", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar38[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (uVar5[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar5[iVar0], iVar1) == 5)
			{
				Global_4456448.f_150457[iVar0 /*248*/][iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar5[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_150457[iVar0 /*248*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar16[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar16[iVar0], iVar1) == 5)
			{
				Global_4456448.f_150457[iVar0 /*248*/].f_91[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_150457[iVar0 /*248*/].f_91[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar27[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar27[iVar0], iVar1) == 2)
			{
				Global_4456448.f_150457[iVar0 /*248*/].f_182[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_150457[iVar0 /*248*/].f_182[iVar1] = 0;
			}
			if (uVar38[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar38[iVar0], iVar1) == 2)
			{
				Global_4456448.f_150457[iVar0 /*248*/].f_213[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_150457[iVar0 /*248*/].f_213[iVar1] = 0;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_210(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	char[] cVar3[8];
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	var uVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	int iVar32;
	var uVar33;
	var uVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	var uVar42;
	int iVar43;
	var uVar44;
	var uVar45;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	var uVar52;
	var uVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	var uVar86;
	var uVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	var uVar95[4];
	var uVar100[4];
	var uVar105[4];
	var uVar110[4];
	var uVar115[4];
	var uVar120[4];
	
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "obj");
	Global_4456448.f_55666 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "no");
	Global_4456448.f_55667 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "pal");
	Global_4456448.f_55668 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "rtm");
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "loc");
	uVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "head");
	uVar18 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "model");
	uVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ped");
	uVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "rsp");
	uVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "rot");
	uVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "cont");
	uVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "valu");
	uVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ammoforwep");
	uVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "cpup");
	uVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "cpupr");
	uVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "cpupt");
	uVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "bits");
	uVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "bits2");
	uVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "bits3");
	uVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "oijh");
	uVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "oiet");
	iVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ospl");
	iVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "dspn");
	iVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objcps");
	iVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objinv");
	uVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objaro");
	if (func_133())
	{
		iVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obrr");
		uVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obrmr");
		iVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "SMeR");
		iVar17 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obder");
		iVar16 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obso");
		uVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "osnt");
		uVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "osnei");
		iVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objbr");
		iVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "o2sp");
		uVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "o2sh");
		uVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "mgbs");
		iVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "mgDT");
		uVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objct");
		uVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "team");
		uVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "spwn");
		iVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objct2");
		uVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "team2");
		uVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "spwn2");
		uVar46 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objct3");
		uVar47 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "team3");
		uVar48 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "spwn3");
		uVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objct4");
		uVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "team4");
		uVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "spwn4");
		uVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "hlt");
		uVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obb");
		iVar54 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obbc");
		iVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obbs");
		iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obtc");
		iVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obtcta");
		iVar57 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obtcts");
		iVar59 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obtcwt");
		iVar60 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obtcvr");
		iVar61 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obtcvw");
		iVar62 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obtcsr");
		iVar63 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "orbcnno");
		iVar64 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objhpovr");
		iVar65 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objbtte");
		iVar70 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objtvi");
		iVar66 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "tl63vts");
		iVar67 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objLOD");
		iVar68 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "iobjhbir");
		iVar69 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "iobjhbor");
		iVar71 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "oIntAnim");
		iVar72 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "oIntPed");
		iVar73 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objclt");
		iVar74 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objcr");
		iVar75 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obcra");
		iVar76 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ospdl");
		iVar77 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "osgr");
		iVar78 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ossgr");
		iVar79 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objcnm");
		iVar80 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ororc");
		iVar81 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objap");
		iVar82 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objapt");
		iVar83 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obint");
		iVar84 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obrom");
		iVar85 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "inco");
		uVar86 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "inhsh");
		uVar87 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vehpu");
		iVar88 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "airpu");
		iVar91 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "gotor");
		iVar92 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "nmpass");
		iVar93 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "nmfail");
		iVar89 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "omcp");
		iVar90 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "omcf");
		iVar94 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objatto");
		iVar2 = 0;
		while (iVar2 <= (Global_4456448.f_40 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar95[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar100[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar105[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar110[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
				StringCopy(&cVar3, "bosr", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar115[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
				StringCopy(&cVar3, "boer", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar120[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_55666 - 1))
	{
		if (iVar0 < 20)
		{
			Global_4456448.f_55669[iVar0 /*149*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar6, iVar0) };
			Global_4456448.f_55669[iVar0 /*149*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar7, iVar0);
			uVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_16 = uVar1;
			if (Global_4456448.f_55669[iVar0 /*149*/].f_16 == -1842407088)
			{
				Global_4456448.f_55669[iVar0 /*149*/].f_16 = -1007354661;
			}
			if (Global_4456448.f_131902 == 0)
			{
				if (Global_4456448.f_55669[iVar0 /*149*/].f_16 == -1861623876)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_16 = 525896218;
				}
			}
			if (!STREAMING::IS_MODEL_VALID(Global_4456448.f_55669[iVar0 /*149*/].f_16))
			{
				Global_4456448.f_55669[iVar0 /*149*/].f_16 = joaat("prop_drug_package");
			}
			if (Global_4456448.f_55669[iVar0 /*149*/].f_16 == 168901740)
			{
				Global_4456448.f_55669[iVar0 /*149*/].f_16 = -1007354661;
			}
			if (Global_4456448.f_55669[iVar0 /*149*/].f_16 == -1340405475)
			{
				Global_4456448.f_55669[iVar0 /*149*/].f_16 = -1842407088;
			}
			if (Global_4456448.f_55669[iVar0 /*149*/].f_16 == -249415613)
			{
				Global_4456448.f_55669[iVar0 /*149*/].f_16 = -739654066;
			}
			Global_4456448.f_55669[iVar0 /*149*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_4 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar21, iVar0) };
			Global_4456448.f_55669[iVar0 /*149*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_51 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_52 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_53 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_54 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar25, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_55 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_56 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar26, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_48 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar29, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_49 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar30, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_108 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar34, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_115 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar33, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_109 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_110 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_111 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_112 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar0);
			Global_4456448.f_55669[iVar0 /*149*/].f_116 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar39, iVar0);
			if (iVar88 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar88, iVar0) == 2)
			{
				if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar88, iVar0) == 1)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_55669[iVar0 /*149*/].f_47, 4))
					{
						GAMEPLAY::SET_BIT(&(Global_4456448.f_55669[iVar0 /*149*/].f_47), 4);
					}
				}
			}
			if (func_133())
			{
				if ((((iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar8, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar10, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar11, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar12, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar8, iVar0);
					Global_4456448.f_55669[iVar0 /*149*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar10, iVar0);
					Global_4456448.f_55669[iVar0 /*149*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar11, iVar0);
					Global_4456448.f_55669[iVar0 /*149*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_7 = 50f;
					Global_4456448.f_55669[iVar0 /*149*/].f_8 = 0f;
					Global_4456448.f_55669[iVar0 /*149*/].f_9 = 0;
					Global_4456448.f_55669[iVar0 /*149*/].f_10 = -1;
				}
				if (iVar9 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar9, iVar0) == 3)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_123 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar9, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_123 = 0f;
				}
				if (iVar17 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar17, iVar0) == 3)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_126 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar17, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_126 = 0f;
				}
				if (iVar16 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar16, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar16, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_33 = 0;
				}
				if (iVar15 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar15, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar15, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_15 = 0;
				}
				if ((iVar13 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar13, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar14, iVar0) == 3)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_11 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar13, iVar0) };
					Global_4456448.f_55669[iVar0 /*149*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar14, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_11 = { 0f, 0f, 0f };
					Global_4456448.f_55669[iVar0 /*149*/].f_14 = 0f;
				}
				if (iVar58 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar58, iVar0) == 3)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_117 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar58, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_117 = 0f;
				}
				if (iVar57 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar57, iVar0) == 3)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_118 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar57, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_118 = 1f;
				}
				if (iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar0) == 3)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_119 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar59, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_119 = 3f;
				}
				if (iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar0) == 3)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_120 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar60, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_120 = 4f;
				}
				if (iVar61 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar61, iVar0) == 3)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_121 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar61, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_121 = 3f;
				}
				if (iVar62 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar62, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_122 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar62, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_122 = -1;
				}
				if (iVar63 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar63, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_124 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar63, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_124 = -1;
				}
				if (iVar64 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar64, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_147 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar64, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_147 = -1;
				}
				if (iVar65 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar65, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_148 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar65, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_148 = -1;
				}
				if (iVar66 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar66, iVar0) == 4)
				{
					StringCopy(&(Global_4456448.f_55669[iVar0 /*149*/].f_130), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar66, iVar0), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_55669[iVar0 /*149*/].f_130), "", 64);
				}
				if (iVar70 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar70, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_146 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar70, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_146 = -1;
				}
				if (iVar67 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar67, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_125 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar67, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_125 = -1;
				}
				if (iVar68 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar68, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar68, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_29 = 0;
				}
				if (iVar69 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar69, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar69, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_30 = 0;
				}
				if (iVar71 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar71, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_71 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar71, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_71 = 0;
				}
				if (iVar72 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar72, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_73 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar72, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_73 = -1;
				}
				Global_4456448.f_55669[iVar0 /*149*/].f_50 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
				if (iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_72 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_72 = -1;
				}
				if (iVar94 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar94, iVar0) == 5)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_127 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar94, iVar0) };
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_127 = { 0f, 0f, 0f };
				}
				Global_4456448.f_55669[iVar0 /*149*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar40, iVar0);
				Global_4456448.f_55669[iVar0 /*149*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar41, iVar0);
				Global_4456448.f_55669[iVar0 /*149*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar42, iVar0);
				if (iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_78 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0);
					Global_4456448.f_55669[iVar0 /*149*/].f_75 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar44, iVar0);
					Global_4456448.f_55669[iVar0 /*149*/].f_81 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar45, iVar0);
					Global_4456448.f_55669[iVar0 /*149*/].f_79 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar46, iVar0);
					Global_4456448.f_55669[iVar0 /*149*/].f_76 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar47, iVar0);
					Global_4456448.f_55669[iVar0 /*149*/].f_82 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar48, iVar0);
					Global_4456448.f_55669[iVar0 /*149*/].f_80 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar49, iVar0);
					Global_4456448.f_55669[iVar0 /*149*/].f_77 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar50, iVar0);
					Global_4456448.f_55669[iVar0 /*149*/].f_83 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar51, iVar0);
				}
				Global_4456448.f_55669[iVar0 /*149*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52, iVar0);
				Global_4456448.f_55669[iVar0 /*149*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar53, iVar0);
				Global_4456448.f_55669[iVar0 /*149*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar87, iVar0);
				if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar54, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_32 = 0;
				}
				if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar0) == 3)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar55, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_34 = 0.8f;
				}
				if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_113 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_113 = 1;
				}
				if (iVar74 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar74, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar74, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_57 = -1;
				}
				if (iVar73 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar73, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar73, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_58 = -1;
				}
				if (iVar75 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar75, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_59 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar75, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_59 = -1;
				}
				if (iVar76 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar76, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_74 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar76, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_74 = -1;
				}
				if (iVar77 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar77, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar77, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_39 = 0;
				}
				if (iVar78 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar78, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar78, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_40 = 0;
				}
				if (iVar79 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar79, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_99 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar79, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_99 = -1;
				}
				if (iVar80 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar80, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_114 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar80, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_114 = 0;
				}
				if (iVar89 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar89, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_96 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar89, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_96 = -1;
				}
				if (iVar90 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar90, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_97 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar90, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_97 = -1;
				}
				if (iVar81 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar81, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_100 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar81, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_100 = -1;
				}
				if (iVar82 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar82, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_101 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar82, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_101 = -1;
				}
				if (iVar83 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar83, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_102 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar83, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_102 = -1;
				}
				if (iVar84 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar84, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_103 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar84, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_103 = -1;
				}
				if ((iVar85 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar85, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar86, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_104 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar85, iVar0) };
					Global_4456448.f_55669[iVar0 /*149*/].f_107 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar86, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_104 = { 0f, 0f, 0f };
					Global_4456448.f_55669[iVar0 /*149*/].f_107 = 0;
				}
				if (iVar91 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar91, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar91, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_60 = 0;
				}
				if (iVar92 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar92, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_94 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar92, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_94 = -1;
				}
				if (iVar93 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar93, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_95 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar93, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_95 = -1;
				}
				if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_109 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_109 = 0;
				}
				if (iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_110 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_110 = 0;
				}
				if (iVar37 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar37, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_111 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_111 = 0;
				}
				if (iVar38 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar38, iVar0) == 2)
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_112 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar0);
				}
				else
				{
					Global_4456448.f_55669[iVar0 /*149*/].f_112 = 0;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_4456448.f_40 - 1))
				{
					if (iVar2 < 4)
					{
						Global_4456448.f_55669[iVar0 /*149*/].f_17[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar95[iVar2], iVar0);
						Global_4456448.f_55669[iVar0 /*149*/].f_22[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar100[iVar2], iVar0);
						if (Global_4456448.f_55669[iVar0 /*149*/].f_22[iVar2] == -1)
						{
							Global_4456448.f_55669[iVar0 /*149*/].f_22[iVar2] = 99999;
						}
						if (uVar105[iVar2] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar105[iVar2], iVar0) == 2)
						{
							Global_4456448.f_55669[iVar0 /*149*/].f_84[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar105[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_55669[iVar0 /*149*/].f_84[iVar2] = 0;
						}
						if (uVar110[iVar2] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar110[iVar2], iVar0) == 2)
						{
							Global_4456448.f_55669[iVar0 /*149*/].f_89[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar110[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_55669[iVar0 /*149*/].f_89[iVar2] = 0;
						}
						if (uVar115[iVar2] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar115[iVar2], iVar0) == 2)
						{
							Global_4456448.f_55669[iVar0 /*149*/].f_61[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar115[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_55669[iVar0 /*149*/].f_61[iVar2] = -1;
						}
						if (uVar120[iVar2] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar120[iVar2], iVar0) == 2)
						{
							Global_4456448.f_55669[iVar0 /*149*/].f_66[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar120[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_55669[iVar0 /*149*/].f_66[iVar2] = -1;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10[4];
	var uVar15[4];
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "zone");
	Global_4456448.f_131090 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "no");
	uVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vto");
	uVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vld");
	uVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "zntp");
	iVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "znbs");
	iVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "znwd");
	iVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "znwvd");
	iVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "znatp");
	iVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "znwid");
	iVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "znhei");
	iVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "zndel");
	iVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "zngTe");
	iVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "zngPo");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "znpr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar10[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar2);
		StringCopy(&cVar2, "znepr", 16);
		StringIntConCat(&cVar2, iVar0, 16);
		uVar15[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar2);
		iVar0++;
	}
	if (Global_4456448.f_131090 > 25)
	{
		Global_4456448.f_131090 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_131090 - 1))
	{
		Global_4456448.f_131113[iVar0 /*29*/][0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar7, iVar0) };
		Global_4456448.f_131113[iVar0 /*29*/][1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar8, iVar0) };
		Global_4456448.f_131113[iVar0 /*29*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uVar10[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar10[iVar1], iVar0) == 2)
			{
				Global_4456448.f_131113[iVar0 /*29*/].f_11[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_4456448.f_131113[iVar0 /*29*/].f_11[iVar1] = -1;
			}
			if (uVar15[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar15[iVar1], iVar0) == 2)
			{
				Global_4456448.f_131113[iVar0 /*29*/].f_16[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_4456448.f_131113[iVar0 /*29*/].f_16[iVar1] = 99999;
			}
			iVar1++;
		}
		if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar0) == 2)
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar0);
		}
		else
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_21 = 0;
		}
		if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar0) == 3)
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar21, iVar0);
		}
		else
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_23 = 0f;
		}
		if (iVar22 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar22, iVar0) == 3)
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar22, iVar0);
		}
		else
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_24 = 0f;
		}
		if (iVar23 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar23, iVar0) == 2)
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar23, iVar0);
		}
		else
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_9 = 0;
		}
		if (iVar24 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar24, iVar0) == 3)
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar24, iVar0);
		}
		else
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_7 = 0f;
		}
		if (iVar25 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar25, iVar0) == 3)
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_8 = 0f;
		}
		if (iVar26 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar26, iVar0) == 2)
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_22 = 0;
		}
		if (iVar27 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar27, iVar0) == 2)
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar0);
		}
		else
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_25 = 0;
		}
		if (iVar28 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar28, iVar0) == 2)
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar0);
		}
		else
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_26 = 2;
		}
		iVar0++;
	}
}

void func_212(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "usj");
	Global_4456448.f_129921 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "no");
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "vto");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "vld");
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "vcm");
	if (Global_4456448.f_129921 > 10)
	{
		Global_4456448.f_129921 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_129921 - 1))
	{
		Global_4456448.f_129922[iVar0 /*9*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar2, iVar0) };
		Global_4456448.f_129922[iVar0 /*9*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar3, iVar0) };
		Global_4456448.f_129922[iVar0 /*9*/].f_6 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar4, iVar0) };
		iVar0++;
	}
}

void func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	var uVar4;
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
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	var uVar44[4];
	int iVar49;
	int iVar50;
	
	if (DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ddtrig") == 0)
	{
		return;
	}
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ddtrig");
	Global_4456448.f_136474 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar4, "no");
	iVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "id");
	iVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "fid");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "rule");
	iVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "team");
	iVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "pos");
	iVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "rad");
	iVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "tdel");
	iVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "tpnt");
	iVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dtfe");
	iVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "crkls");
	iVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "spveh");
	iVar16 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "spveh2");
	iVar17 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "spveh3");
	iVar18 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "spveh4");
	iVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "spveh5");
	iVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "skprs");
	iVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "fcsped");
	iVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "prty");
	iVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dbs");
	iVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dbs2");
	iVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dbs3");
	iVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "drole");
	iVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dspk");
	iVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dspk2");
	iVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dpcr");
	iVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dgck");
	iVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dgvh");
	iVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dgvlst");
	iVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dgpk");
	iVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dgwd");
	iVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dgmrlt");
	iVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "panim");
	iVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "blok");
	iVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "root");
	iVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "mgveh");
	iVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "vehtg");
	iVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "prerq");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "vehdm");
	iVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "vehpir");
	iVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dwsg");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar44[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
		iVar0++;
	}
	if (Global_4456448.f_136474 > 75)
	{
		Global_4456448.f_136474 = 75;
	}
	if (iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_136474 - 1))
		{
			if (iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar8, iVar0) == 2)
			{
				func_214(&(Global_4456448.f_131905[iVar0 /*57*/]), iVar0);
				if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_4456448.f_131905[iVar0 /*57*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_6 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar12, iVar0);
				}
				if (iVar13 != 0)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar13, iVar0);
				}
				if (iVar22 != 0)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar22, iVar0);
				}
				if (iVar23 != 0)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar23, iVar0);
				}
				if (iVar24 != 0)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar24, iVar0);
				}
				if (iVar25 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar25, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar25, iVar0);
				}
				else
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_12 = 0;
				}
				if (iVar26 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar26, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar26, iVar0);
				}
				else
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_4 = 0;
				}
				if (iVar39 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar39, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar0);
				}
				if (iVar14 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar14, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar14, iVar0);
				}
				if (iVar15 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar15, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar15, iVar0);
				}
				if (iVar16 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar16, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar16, iVar0);
				}
				if (iVar17 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar17, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar17, iVar0);
				}
				if (iVar18 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar18, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar18, iVar0);
				}
				if (iVar19 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar19, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar19, iVar0);
				}
				if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar0);
				}
				if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar21, iVar0);
				}
				if (iVar27 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar27, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar0);
				}
				if (iVar28 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar28, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar0);
				}
				if (iVar29 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar29, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar29, iVar0);
				}
				if (iVar30 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar30, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar30, iVar0);
				}
				if (iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar0);
				}
				if (iVar31 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar31, iVar0) == 2)
				{
					iVar50 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar31, iVar0);
					if ((iVar50 >= 0 && iVar50 < 32) && Global_4456448.f_131905[iVar0 /*57*/].f_38 == 0)
					{
						GAMEPLAY::SET_BIT(&(Global_4456448.f_131905[iVar0 /*57*/].f_38), iVar50);
					}
				}
				if (iVar33 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar33, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar33, iVar0);
				}
				if (iVar34 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar34, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar0);
				}
				if (iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
				}
				if (iVar40 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar40, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar40, iVar0);
				}
				if (iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0);
				}
				if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar41, iVar0);
				}
				if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar44[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar44[iVar1], iVar0) == 2)
					{
						Global_4456448.f_131905[iVar0 /*57*/].f_25[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar44[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
				}
				if (iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar0) == 2)
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_55 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar0);
				}
				else
				{
					Global_4456448.f_131905[iVar0 /*57*/].f_55 = 0;
				}
				if (iVar37 != 0)
				{
					StringCopy(&(Global_4456448.f_131905[iVar0 /*57*/].f_43), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar37, iVar0), 24);
				}
				if (iVar38 != 0)
				{
					StringCopy(&(Global_4456448.f_131905[iVar0 /*57*/].f_49), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar38, iVar0), 24);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_136474 - 1))
		{
			Global_4456448.f_131905[iVar0 /*57*/] = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_2 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_3 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_6 = { 0f, 0f, 0f };
			Global_4456448.f_131905[iVar0 /*57*/].f_9 = 3f;
			Global_4456448.f_131905[iVar0 /*57*/].f_5 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_13 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_23 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_30 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_31 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_32 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_33 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_34 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_35 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_14 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_10 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_11 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_12 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_4 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_15 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_16 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_17 = 0;
			StringCopy(&(Global_4456448.f_131905[iVar0 /*57*/].f_43), "", 24);
			StringCopy(&(Global_4456448.f_131905[iVar0 /*57*/].f_49), "", 24);
			Global_4456448.f_131905[iVar0 /*57*/].f_18 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_19 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_21 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_22 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_20 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_55 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_36 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_37 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_38 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_39 = -1;
			Global_4456448.f_131905[iVar0 /*57*/].f_40 = 0;
			Global_4456448.f_131905[iVar0 /*57*/].f_42 = -1;
			iVar0++;
		}
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "dtmp") == 2)
	{
		Global_4456448.f_136470[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "dtmp");
	}
	else
	{
		Global_4456448.f_136470[0] = 0;
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "dtmp2") == 2)
	{
		Global_4456448.f_136470[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "dtmp2");
	}
	else
	{
		Global_4456448.f_136470[1] = 0;
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "dtmp3") == 2)
	{
		Global_4456448.f_136470[2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "dtmp3");
	}
	else
	{
		Global_4456448.f_136470[2] = 0;
	}
}

void func_214(var uParam0, int iParam1)
{
	int iVar0;
	
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = { 0f, 0f, 0f };
	uParam0->f_9 = 3f;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = -1;
	uParam0->f_16 = -1;
	uParam0->f_17 = 0;
	uParam0->f_18 = -1;
	uParam0->f_21 = -1;
	uParam0->f_19 = -1;
	uParam0->f_22 = 0;
	uParam0->f_20 = -1;
	uParam0->f_23 = 0;
	uParam0->f_30 = -1;
	uParam0->f_31 = -1;
	uParam0->f_32 = -1;
	uParam0->f_33 = -1;
	uParam0->f_34 = -1;
	uParam0->f_35 = 0;
	uParam0->f_24 = -1;
	uParam0->f_36 = 0;
	uParam0->f_37 = -1;
	uParam0->f_38 = 0;
	uParam0->f_39 = -1;
	uParam0->f_40 = 0;
	uParam0->f_41 = -1;
	uParam0->f_42 = -1;
	StringCopy(&(uParam0->f_43), "", 24);
	StringCopy(&(uParam0->f_49), "", 24);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_25[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_55 = 0;
	if (iParam1 != -1)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_136470[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (UI::DOES_BLIP_EXIST(uParam0->f_56))
	{
		UI::REMOVE_BLIP(&(uParam0->f_56));
	}
}

void func_215(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	char cVar4[16];
	char cVar8[16];
	char cVar12[16];
	char cVar16[16];
	int iVar20;
	char cVar21[16];
	var uVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	int iVar42;
	int iVar43;
	var uVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	var uVar58;
	var uVar59;
	var uVar60[3];
	var uVar64[3];
	var uVar68[3];
	int iVar72;
	char[] cVar73[8];
	
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "race");
	Global_4456448.f_53217 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "chp");
	iVar3 = (Global_4456448.f_53217 - 1);
	Global_4456448.f_53219 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "lap");
	Global_4456448.f_53220 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "type");
	Global_4456448.f_53221 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "gtar");
	Global_4456448.f_55577 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "head");
	Global_4456448.f_55578 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "lrgs");
	Global_4456448.f_55579 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "udgs");
	Global_4456448.f_55580 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "gw");
	Global_4456448.f_55581 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "gl");
	Global_4456448.f_55582 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "lanes");
	Global_4456448.f_44634 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(uVar2, "grid") };
	Global_4456448.f_53223 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "icv");
	Global_4456448.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "subtype");
	Global_4456448.f_53225 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "tri1");
	Global_4456448.f_53226 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "tri2");
	Global_4456448.f_53227 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "clbs");
	Global_4456448.f_55576 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "ptp");
	Global_4456448.f_55574 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "strtg");
	Global_4456448.f_55575 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "rcdam");
	Global_4456448.f_50211 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "rdis");
	Global_4456448.f_55571 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "gridty");
	Global_4456448.f_153024 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(uVar2, "iprem");
	Global_4456448.f_153122 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "bsted");
	Global_4456448.f_154196 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "retl");
	if (DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "cemx") != 0)
	{
		Global_4456448.f_154197 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "cemx");
	}
	else
	{
		Global_4456448.f_154197 = 12;
	}
	if (DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "cemn") != 0)
	{
		Global_4456448.f_154198 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "cemn");
	}
	else
	{
		Global_4456448.f_154198 = 3;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		StringCopy(&cVar4, "btfs", 16);
		StringIntConCat(&cVar4, iVar0, 16);
		Global_4456448.f_154199[iVar0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, &cVar4);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar8, "icpht", 16);
		StringIntConCat(&cVar8, iVar0, 16);
		StringCopy(&(Global_4456448.f_50190[iVar0 /*6*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(uVar2, &cVar8), 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&cVar12, "trbpf", 16);
		StringIntConCat(&cVar12, iVar0, 16);
		Global_4456448.f_153942[iVar0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, &cVar12);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar16, "trbpc", 16);
		StringIntConCat(&cVar16, iVar0, 16);
		Global_4456448.f_153938[iVar0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, &cVar16);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar20 = 0;
		while (iVar20 < 3)
		{
			StringCopy(&cVar21, "trbps", 16);
			StringIntConCat(&cVar21, iVar0, 16);
			StringConCat(&cVar21, "d", 16);
			StringIntConCat(&cVar21, iVar20, 16);
			Global_4456448.f_153953[iVar0 /*4*/][iVar20] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, &cVar21);
			iVar20++;
		}
		iVar0++;
	}
	if (Global_4456448.f_131902 == 0)
	{
		func_218();
	}
	uVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chh");
	iVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chs");
	iVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chs2");
	iVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chvs");
	iVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chpp");
	iVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chpps");
	uVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chl");
	uVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "sndchk");
	uVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "sndrsp");
	uVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cpwwt");
	uVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cppsst");
	uVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cpado");
	uVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cpados");
	uVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chttu");
	uVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chttr");
	uVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cpbs1");
	uVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cpbs2");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cptfrm");
	iVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cptfrms");
	uVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "trfmvm");
	iVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chdlo");
	iVar46 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chsto");
	iVar47 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chdlos");
	iVar48 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "chstos");
	iVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "rsp");
	iVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cdsblcu");
	iVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cpdss");
	iVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "rndchk");
	iVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "rndchks");
	iVar54 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cpwtr");
	iVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cpwtrs");
	iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "cpair");
	if (Global_4456448.f_53220 == 8)
	{
		Global_4456448.f_53217 = 0;
		iVar0 = 0;
		while (iVar0 <= 101)
		{
			if (!func_127(DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar31, iVar0)))
			{
				Global_4456448.f_53217++;
			}
			iVar0++;
		}
		iVar3 = Global_4456448.f_53217;
	}
	Global_4456448.f_49776 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "sgdo");
	iVar57 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 102)
		{
			if (Global_4456448.f_53220 == 8)
			{
				iVar57 = func_217(uVar31, iVar57);
			}
			else
			{
				iVar57 = iVar0;
			}
			Global_4456448.f_45659[iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar31, iVar57) };
			Global_4456448.f_45966[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar25, iVar57);
			if (iVar26 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar26, iVar57) == 3)
			{
				Global_4456448.f_49364[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar26, iVar57);
			}
			else
			{
				Global_4456448.f_49364[iVar0] = 1f;
			}
			if (iVar28 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar28, iVar57) == 3)
			{
				Global_4456448.f_46275[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar28, iVar57);
			}
			else
			{
				Global_4456448.f_46275[iVar0] = 1f;
			}
			if (iVar27 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar27, iVar57) == 3)
			{
				Global_4456448.f_49467[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar27, iVar57);
			}
			else
			{
				Global_4456448.f_49467[iVar0] = 1f;
			}
			if (iVar29 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar29, iVar57) == 3)
			{
				Global_4456448.f_49570[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar29, iVar57);
			}
			else
			{
				Global_4456448.f_49570[iVar0] = 0f;
			}
			if (iVar30 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar30, iVar57) == 3)
			{
				Global_4456448.f_49673[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar30, iVar57);
			}
			else
			{
				Global_4456448.f_49673[iVar0] = 0f;
			}
			if (iVar45 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar45, iVar57) == 2)
			{
				Global_4456448.f_49777[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar45, iVar57);
			}
			else
			{
				Global_4456448.f_49777[iVar0] = -1;
			}
			if (iVar46 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar46, iVar57) == 2)
			{
				Global_4456448.f_49880[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar57);
			}
			else
			{
				Global_4456448.f_49880[iVar0] = -1;
			}
			if (iVar47 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar47, iVar57) == 2)
			{
				Global_4456448.f_49983[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar47, iVar57);
			}
			else
			{
				Global_4456448.f_49983[iVar0] = -1;
			}
			if (iVar48 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar48, iVar57) == 2)
			{
				Global_4456448.f_50086[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar57);
			}
			else
			{
				Global_4456448.f_50086[iVar0] = -1;
			}
			if (Global_4456448.f_49364[iVar0] < 0.3f)
			{
				Global_4456448.f_49364[iVar0] = 0.3f;
			}
			if (Global_4456448.f_49467[iVar0] < 0.1f)
			{
				Global_4456448.f_49467[iVar0] = Global_4456448.f_49364[iVar0];
			}
			if (Global_4456448.f_49467[iVar0] < 0.3f)
			{
				Global_4456448.f_49467[iVar0] = 0.3f;
			}
			Global_4456448.f_47399[iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar32, iVar57) };
			Global_4456448.f_47706[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar33, iVar57);
			Global_4456448.f_47809[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar34, iVar57);
			Global_4456448.f_47912[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar35, iVar57);
			Global_4456448.f_48015[iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar36, iVar57) };
			Global_4456448.f_48322[iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar37, iVar57) };
			Global_4456448.f_48629[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38, iVar57);
			Global_4456448.f_48732[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar39, iVar57);
			Global_4456448.f_46069[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar40, iVar57);
			Global_4456448.f_46172[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar41, iVar57);
			if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar57) == 2)
			{
				Global_4456448.f_48938[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar57);
			}
			else
			{
				Global_4456448.f_48938[iVar0] = -1;
			}
			if ((iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar57) == 2) && !func_127(Global_4456448.f_47399[iVar0 /*3*/]))
			{
				Global_4456448.f_49041[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar57);
			}
			else
			{
				Global_4456448.f_49041[iVar0] = -1;
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_46069[iVar0], 0))
			{
				if (iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar57) == 1)
				{
					func_216(&(Global_4456448.f_46069[iVar0]), 5, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar49, iVar57));
				}
				if (iVar50 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar50, iVar57) == 1)
				{
					func_216(&(Global_4456448.f_46069[iVar0]), 3, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar50, iVar57));
				}
				if (iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar57) == 1)
				{
					func_216(&(Global_4456448.f_46069[iVar0]), 6, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar51, iVar57));
				}
				if (iVar52 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar52, iVar57) == 1)
				{
					func_216(&(Global_4456448.f_46069[iVar0]), 1, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar52, iVar57));
				}
				if (iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar57) == 1)
				{
					func_216(&(Global_4456448.f_46069[iVar0]), 2, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar53, iVar57));
				}
				if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar57) == 1)
				{
					func_216(&(Global_4456448.f_46069[iVar0]), 7, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar54, iVar57));
				}
				if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar57) == 1)
				{
					func_216(&(Global_4456448.f_46069[iVar0]), 8, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar55, iVar57));
				}
				if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar57) == 1)
				{
					func_216(&(Global_4456448.f_46069[iVar0]), 9, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar56, iVar57));
				}
				GAMEPLAY::SET_BIT(&(Global_4456448.f_46069[iVar0]), 0);
			}
			iVar57++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_4456448.f_49144[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar44, iVar0);
		iVar0++;
	}
	if (Global_4456448.f_49144[3] != 0)
	{
		if (Global_4456448.f_49144[1] == 0)
		{
			Global_4456448.f_49144[1] = joaat("speeder");
		}
		if (Global_4456448.f_49144[2] == 0)
		{
			Global_4456448.f_49144[2] = joaat("luxor2");
		}
	}
	uVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_35 - 1))
	{
		if (iVar0 < 32)
		{
			uVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar58, iVar0);
			Global_4456448.f_55585[iVar0] = uVar1;
		}
		iVar0++;
	}
	uVar59 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "aveh");
	uVar60[0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "adlc");
	uVar60[1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "adlc2");
	iVar0 = 0;
	while (iVar0 < 18)
	{
		uVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar59, iVar0);
		Global_4456448.f_53228[iVar0] = uVar1;
		Global_4456448.f_53247[iVar0 /*4*/][0] = 0;
		Global_4456448.f_53247[iVar0 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar60[0], iVar0);
		Global_4456448.f_53247[iVar0 /*4*/][1] = 0;
		Global_4456448.f_53247[iVar0 /*4*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar60[1], iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar73, "vspn", 8);
		StringIntConCat(&cVar73, iVar0, 8);
		uVar64[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, &cVar73);
		iVar72 = 0;
		while (iVar72 <= iVar3)
		{
			Global_4456448.f_44638[iVar72 /*10*/][iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar64[iVar0], iVar72) };
			iVar72++;
		}
		StringCopy(&cVar73, "vspns", 8);
		StringIntConCat(&cVar73, iVar0, 8);
		uVar68[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, &cVar73);
		iVar72 = 0;
		while (iVar72 <= iVar3)
		{
			if (uVar68[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar68[iVar0], iVar72) == 5)
			{
				Global_4456448.f_46378[iVar72 /*10*/][iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar68[iVar0], iVar72) };
			}
			else
			{
				Global_4456448.f_46378[iVar72 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
			}
			iVar72++;
		}
		iVar0++;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_53227, 15))
	{
		if (Global_4456448.f_53225 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_22), 24);
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_22), 26);
			GAMEPLAY::SET_BIT(&(Global_4456448.f_22), 25);
			Global_4456448.f_55584 = 1;
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_53247[15 /*4*/][0]), 0);
			GAMEPLAY::SET_BIT(&(Global_4456448.f_53247[15 /*4*/][0]), 1);
			Global_4456448.f_53225 = 0;
		}
		else if (Global_4456448.f_53225 == 2)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_22), 25);
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_22), 26);
			GAMEPLAY::SET_BIT(&(Global_4456448.f_22), 24);
			Global_4456448.f_55584 = 2;
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_53247[15 /*4*/][0]), 0);
			GAMEPLAY::SET_BIT(&(Global_4456448.f_53247[15 /*4*/][0]), 2);
			Global_4456448.f_53225 = 0;
		}
	}
}

void func_216(var uParam0, int iParam1, bool bParam2)
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

int func_217(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	while (iVar0 <= 101)
	{
		if (!func_127(DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uParam0, iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_218()
{
	Global_4456448.f_153942[0] = 50;
	Global_4456448.f_153942[1] = 30;
	Global_4456448.f_153942[2] = 20;
	Global_4456448.f_153938[0] = 3;
	Global_4456448.f_153938[1] = 2;
	Global_4456448.f_153938[2] = 1;
	Global_4456448.f_153953[0 /*4*/][0] = 7;
	Global_4456448.f_153953[0 /*4*/][1] = 8;
	Global_4456448.f_153953[0 /*4*/][2] = 9;
	Global_4456448.f_153953[1 /*4*/][0] = 5;
	Global_4456448.f_153953[1 /*4*/][1] = 6;
	Global_4456448.f_153953[1 /*4*/][2] = 7;
	Global_4456448.f_153953[2 /*4*/][0] = 3;
	Global_4456448.f_153953[2 /*4*/][1] = 4;
	Global_4456448.f_153953[2 /*4*/][2] = 5;
	Global_4456448.f_153953[3 /*4*/][0] = 1;
	Global_4456448.f_153953[3 /*4*/][1] = 2;
	Global_4456448.f_153953[3 /*4*/][2] = 3;
}

void func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "otzone") == 0)
	{
		return;
	}
	iVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "otzone");
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar1, "otvo");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar1, "otvt");
	iVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar1, "otbs");
	iVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar1, "otpg");
	iVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar1, "otrw");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar1, "otpl");
	if (iVar1 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar1, "otz") == 2)
	{
		Global_4456448.f_153124 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar1, "otz");
	}
	else
	{
		Global_4456448.f_153124 = 0;
	}
	if (Global_4456448.f_153124 > 30)
	{
		Global_4456448.f_153124 = 30;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_153124 - 1))
	{
		Global_4456448.f_153125[iVar0 /*11*/][0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar2, iVar0) };
		Global_4456448.f_153125[iVar0 /*11*/][1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar3, iVar0) };
		if (iVar4 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar4, iVar0) == 2)
		{
			Global_4456448.f_153125[iVar0 /*11*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_153125[iVar0 /*11*/].f_7 = 0;
		}
		if (iVar5 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar5, iVar0) == 2)
		{
			Global_4456448.f_153125[iVar0 /*11*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar5, iVar0);
		}
		else
		{
			Global_4456448.f_153125[iVar0 /*11*/].f_8 = 0;
		}
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 3)
		{
			Global_4456448.f_153125[iVar0 /*11*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar6, iVar0);
		}
		else if (DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 2)
		{
			Global_4456448.f_153125[iVar0 /*11*/].f_10 = SYSTEM::TO_FLOAT(DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar0));
		}
		else
		{
			Global_4456448.f_153125[iVar0 /*11*/].f_10 = 0f;
		}
		if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_153125[iVar0 /*11*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_153125[iVar0 /*11*/].f_9 = 0;
		}
		iVar0++;
	}
}

void func_220(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "dhprop") == 0)
	{
		return;
	}
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "dhprop");
	Global_4456448.f_147468 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "no");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "pos");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "mn");
	iVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "bits");
	if (Global_4456448.f_147468 > 25)
	{
		Global_4456448.f_147468 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_147468 - 1))
	{
		if (iVar2 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar2, iVar0) == 5)
		{
			Global_4456448.f_147342[iVar0 /*5*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar2, iVar0) };
			Global_4456448.f_147342[iVar0 /*5*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar3, iVar0);
		}
		if (iVar4 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar4, iVar0) == 2)
		{
			Global_4456448.f_147342[iVar0 /*5*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_147342[iVar0 /*5*/].f_4 = 0;
			GAMEPLAY::SET_BIT(&(Global_4456448.f_147342[iVar0 /*5*/].f_4), 0);
		}
		iVar0++;
	}
}

void func_221(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	
	if (DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ddblip") == 0)
	{
		return;
	}
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ddblip");
	Global_4456448.f_147341 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "no");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "pos");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "rule");
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "team");
	iVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "type");
	iVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "size");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "veh");
	uVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "clr");
	uVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "bits");
	iVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "dbnm");
	if (Global_4456448.f_147341 > 10)
	{
		Global_4456448.f_147341 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_147341 - 1))
	{
		if (iVar2 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar2, iVar0) == 5)
		{
			Global_4456448.f_147180[iVar0 /*16*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar2, iVar0) };
			Global_4456448.f_147180[iVar0 /*16*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar3, iVar0);
			Global_4456448.f_147180[iVar0 /*16*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar4, iVar0);
			Global_4456448.f_147180[iVar0 /*16*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8, iVar0);
			Global_4456448.f_147180[iVar0 /*16*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
		}
		if (iVar5 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar5, iVar0) == 2)
		{
			Global_4456448.f_147180[iVar0 /*16*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar5, iVar0);
		}
		else
		{
			Global_4456448.f_147180[iVar0 /*16*/].f_6 = 0;
		}
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 2)
		{
			Global_4456448.f_147180[iVar0 /*16*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar0);
		}
		else
		{
			Global_4456448.f_147180[iVar0 /*16*/].f_5 = 4;
		}
		if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_147180[iVar0 /*16*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_147180[iVar0 /*16*/].f_7 = -1;
		}
		if (iVar10 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar10, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_147180[iVar0 /*16*/].f_10), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar10, iVar0), 24);
		}
		else
		{
			StringCopy(&(Global_4456448.f_147180[iVar0 /*16*/].f_10), "", 24);
		}
		iVar0++;
	}
}

void func_222(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14[5];
	var uVar20[5];
	var uVar26[5];
	var uVar32[5];
	var uVar38[5];
	var uVar44[5];
	var uVar50[5];
	var uVar56[5];
	var uVar62[5];
	var uVar68[5];
	int iVar74;
	
	if (DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "mocap") == 0)
	{
		return;
	}
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "mocap");
	iVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "name");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "bits");
	iVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "bits2");
	iVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "timer");
	iVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "rng");
	iVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ccp");
	iVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ccr");
	iVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ccs");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_143938[iVar0 /*470*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_143938[iVar0 /*470*/]), "", 64);
		}
		if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_16 = 0;
		}
		if (iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar8, iVar0) == 2)
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_17 = 0;
		}
		if (iVar9 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar9, iVar0) == 2)
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_61 = 0;
		}
		if (iVar10 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar10, iVar0) == 2)
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_62 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar10, iVar0);
		}
		else
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_62 = 0;
		}
		if (iVar11 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar11, iVar0) == 5)
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_54 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar11, iVar0) };
		}
		else
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_54 = { 0f, 0f, 0f };
		}
		if (iVar12 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar12, iVar0) == 3)
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar12, iVar0);
		}
		else
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_60 = 0f;
		}
		if (iVar13 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar13, iVar0) == 5)
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_57 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar13, iVar0) };
		}
		else
		{
			Global_4456448.f_143938[iVar0 /*470*/].f_57 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar14[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar20[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar26[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar32[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar38[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar44[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar50[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "plrEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar56[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "pedEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar62[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		if (uVar56[iVar0] != 0 || uVar62[iVar0] != 0)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				func_227(&(Global_4456448.f_143938[iVar0 /*470*/].f_447[iVar2 /*4*/]), &(uVar56[iVar0]), iVar2);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 0)
			{
				func_225(&(Global_4456448.f_143938[iVar0 /*470*/].f_464[iVar2 /*5*/]), &(uVar62[iVar0]), iVar2);
				iVar2++;
			}
		}
		else
		{
			func_224(&(Global_4456448.f_143938[iVar0 /*470*/]), &uVar5, iVar0);
		}
		StringCopy(&cVar3, "plrInf", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar68[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			iVar74 = DATAFILE::_ARRAY_VALUE_GET_OBJECT(uVar68[iVar0], iVar2);
			func_223(iVar74, &(Global_4456448.f_143938[iVar0 /*470*/].f_63[iVar2 /*13*/]));
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uVar14[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar14[iVar0], iVar1) == 5)
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_18[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar14[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar20[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar20[iVar0], iVar1) == 5)
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_31[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar20[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar26[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar26[iVar0], iVar1) == 3)
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_44[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar26[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_44[iVar1] = 0f;
			}
			if (uVar32[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar32[iVar0], iVar1) == 3)
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_49[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar32[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (uVar38[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar38[iVar0], iVar1) == 2)
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_116[iVar1 /*11*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_116[iVar1 /*11*/].f_1 = -1;
			}
			if (uVar44[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar44[iVar0], iVar1) == 2)
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_116[iVar1 /*11*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar44[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_143938[iVar0 /*470*/].f_116[iVar1 /*11*/] = -1;
			}
			if (uVar50[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar50[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_143938[iVar0 /*470*/].f_116[iVar1 /*11*/].f_3), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar50[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_4456448.f_143938[iVar0 /*470*/].f_116[iVar1 /*11*/].f_3), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_223(int iParam0, var uParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = "plrPH";
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, sVar0) == 7)
	{
		iVar1 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iParam0, sVar0);
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (iVar1 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar1, iVar2) == 4)
		{
			StringCopy(uParam1[iVar2 /*6*/], DATAFILE::_ARRAY_VALUE_GET_STRING(iVar1, iVar2), 24);
		}
		else
		{
			StringCopy(uParam1[iVar2 /*6*/], "", 24);
		}
		iVar2++;
	}
}

void func_224(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = -1;
	iVar1 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam1, "pcvid");
	if (iVar1 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar1, iParam2) == 2)
	{
		iVar0 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar1, iParam2);
	}
	StringCopy(&cVar2, "pvpls", 8);
	if (iParam2 > 0)
	{
		StringIntConCat(&cVar2, iParam2, 8);
	}
	iVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam1, &cVar2);
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		uParam0->f_447[iVar5 /*4*/] = iVar0;
		if (iVar4 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar4, iVar5) == 2)
		{
			uParam0->f_447[iVar5 /*4*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar4, iVar5);
		}
		else
		{
			uParam0->f_447[iVar5 /*4*/].f_2 = 0;
		}
		iVar5++;
	}
	StringCopy(&cVar2, "pvpds", 8);
	if (iParam2 > 0)
	{
		StringIntConCat(&cVar2, iParam2, 8);
	}
	iVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam1, &cVar2);
	StringCopy(&cVar2, "pvpdi", 8);
	if (iParam2 > 0)
	{
		StringIntConCat(&cVar2, iParam2, 8);
	}
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam1, &cVar2);
	iVar5 = 0;
	while (iVar5 <= 0)
	{
		if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar5) == 2)
		{
			uParam0->f_464[iVar5 /*5*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar5);
		}
		else
		{
			uParam0->f_464[iVar5 /*5*/] = 0;
		}
		uParam0->f_464[iVar5 /*5*/].f_1 = iVar0;
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar5) == 2)
		{
			uParam0->f_464[iVar5 /*5*/].f_1.f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar5);
		}
		else
		{
			uParam0->f_464[iVar5 /*5*/].f_1.f_2 = 0;
		}
		iVar5++;
	}
}

void func_225(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	char[] cVar1[8];
	
	if (DATAFILE::_ARRAY_VALUE_GET_TYPE(*uParam1, iParam2) != 6)
	{
		return;
	}
	iVar0 = DATAFILE::_ARRAY_VALUE_GET_OBJECT(*uParam1, iParam2);
	if (iVar0 == 0)
	{
	}
	StringCopy(&cVar1, "pedID", 8);
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar1) == 2)
	{
		*uParam0 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar1);
	}
	else
	{
		*uParam0 = -1;
	}
	func_226(&(uParam0->f_1), &iVar0);
}

void func_226(var uParam0, int iParam1)
{
	char[] cVar0[8];
	
	StringCopy(&cVar0, "vehId", 8);
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam1, &cVar0) == 2)
	{
		*uParam0 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam1, &cVar0);
	}
	else
	{
		*uParam0 = -1;
	}
	StringCopy(&cVar0, "vehIdS", 8);
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam1, &cVar0) == 2)
	{
		uParam0->f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_1 = -1;
	}
	StringCopy(&cVar0, "vehSeat", 8);
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam1, &cVar0) == 2)
	{
		uParam0->f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_2 = 0;
	}
	StringCopy(&cVar0, "bit1", 8);
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam1, &cVar0) == 2)
	{
		uParam0->f_3 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam1, &cVar0);
	}
	else
	{
		uParam0->f_3 = 0;
	}
}

void func_227(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	if (DATAFILE::_ARRAY_VALUE_GET_TYPE(*uParam1, iParam2) != 6)
	{
		return;
	}
	iVar0 = DATAFILE::_ARRAY_VALUE_GET_OBJECT(*uParam1, iParam2);
	if (iVar0 == 0)
	{
	}
	func_226(uParam0, &iVar0);
}

void func_228(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13[5];
	var uVar19[5];
	var uVar25[5];
	var uVar31[5];
	var uVar37[5];
	var uVar43[5];
	var uVar49[5];
	var uVar55[5];
	var uVar61[5];
	var uVar67[5];
	var uVar73[5];
	var uVar79[5];
	var uVar85[5];
	var uVar91[5];
	var uVar97[5];
	var uVar103[5];
	var uVar109[5];
	var uVar115[5];
	var uVar121[5];
	var uVar127[5];
	var uVar133[5];
	var uVar139[5];
	var uVar145[5];
	var uVar151[5];
	var uVar157[5];
	var uVar163[5];
	var uVar169[5];
	var uVar175[5];
	var uVar181[5];
	var uVar187[5];
	var uVar193[5];
	int iVar199;
	int iVar200;
	int iVar201;
	int iVar202;
	int iVar203;
	int iVar204;
	int iVar205;
	int iVar206;
	int iVar207;
	int iVar208;
	int iVar209;
	var uVar210[5];
	var uVar216[5];
	
	if (DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "cuts") == 0)
	{
		return;
	}
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "cuts");
	iVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "name");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "bits");
	iVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "bits2");
	iVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "shot");
	iVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "anim");
	iVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "midp");
	iVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "rng");
	iVar199 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "train");
	iVar200 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "trahl");
	iVar201 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "traou");
	iVar202 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "trapo");
	iVar203 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ccp");
	iVar204 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ccr");
	iVar205 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ccs");
	iVar206 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "clms");
	iVar207 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "clsp");
	iVar208 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "clzs");
	iVar209 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "clze");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_136652[iVar0 /*1457*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar6, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_136652[iVar0 /*1457*/]), "", 16);
		}
		if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_4 = 0;
		}
		if (iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_5 = 0;
		}
		if (iVar9 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar9, iVar0) == 2)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_90 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_90 = 0;
		}
		if (iVar10 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar10, iVar0) == 2)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_89 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar10, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_89 = 0;
		}
		if (iVar11 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar11, iVar0) == 2)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_91 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar11, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_91 = 0;
		}
		if (iVar12 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar12, iVar0) == 2)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_782 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar12, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_782 = 0;
		}
		if (iVar203 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar203, iVar0) == 5)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_775 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar203, iVar0) };
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_775 = { 0f, 0f, 0f };
		}
		if (iVar204 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar204, iVar0) == 3)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_778 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar204, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_778 = 0f;
		}
		if (iVar205 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar205, iVar0) == 5)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_779 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar205, iVar0) };
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_779 = { 0f, 0f, 0f };
		}
		if (iVar199 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar199, iVar0) == 2)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_483 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar199, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_483 = 0;
		}
		if (iVar200 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar200, iVar0) == 2)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_485 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar200, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_485 = 0;
		}
		if (iVar201 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar201, iVar0) == 2)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_484 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar201, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_484 = 0;
		}
		if (iVar202 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar202, iVar0) == 5)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_486 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar202, iVar0) };
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_486 = { 0f, 0f, 0f };
		}
		if (iVar206 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar206, iVar0) == 2)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_1453 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar206, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_1453 = -1;
		}
		if (iVar207 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar207, iVar0) == 3)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_1454 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar207, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_1454 = 1f;
		}
		if (iVar208 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar208, iVar0) == 3)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_1455 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar208, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_1455 = 0f;
		}
		if (iVar209 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar209, iVar0) == 3)
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_1456 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar209, iVar0);
		}
		else
		{
			Global_4456448.f_136652[iVar0 /*1457*/].f_1456 = 0f;
		}
		StringCopy(&cVar3, "int", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar13[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "rmin", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar19[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "rmax", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar25[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "ctp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar31[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "sps", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar37[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "eps", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar43[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "srt", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar49[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "ert", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar55[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "sfv", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar61[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "efv", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar67[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "ati", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar133[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "ato", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar139[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "atr", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar145[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "ala", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar151[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "csp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar157[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "csr", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar163[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "cwtp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar181[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "cdtp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar187[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "cdsp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar193[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "cssbs", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar85[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "skt", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar91[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "skm", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar97[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "eind", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar73[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "etyp", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar79[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar109[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar115[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar103[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar121[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "svwi", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar127[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "camnm", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar169[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "locnm", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar175[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "plrSW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar210[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "plrEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar216[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uVar109[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar109[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_6[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar109[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar115[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar115[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_19[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar115[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar103[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar103[iVar0], iVar1) == 3)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_32[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar103[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_32[iVar1] = 0f;
			}
			if (uVar121[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar121[iVar0], iVar1) == 3)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_37[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar121[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_37[iVar1] = 0f;
			}
			if (uVar127[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar127[iVar0], iVar1) == 2)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_42[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar127[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_42[iVar1] = -1;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (uVar13[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar13[iVar0], iVar1) == 2)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_92[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_92[iVar1] = 0;
			}
			if (uVar19[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar19[iVar0], iVar1) == 3)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_47[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar19[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_47[iVar1] = 0f;
			}
			if (uVar25[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar25[iVar0], iVar1) == 3)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_68[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar25[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_68[iVar1] = 0f;
			}
			if (uVar31[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar31[iVar0], iVar1) == 2)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_113[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_113[iVar1] = 0;
			}
			if (uVar37[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar37[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_134[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar37[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_134[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar43[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar43[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_195[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar43[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_195[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar49[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar49[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_256[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar49[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_256[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar55[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar55[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_317[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar55[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_317[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar61[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar61[iVar0], iVar1) == 3)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_378[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar61[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_378[iVar1] = 0f;
			}
			if (uVar67[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar67[iVar0], iVar1) == 3)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_399[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar67[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_399[iVar1] = 0f;
			}
			if (uVar85[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar85[iVar0], iVar1) == 2)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_420[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar85[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_420[iVar1] = 0;
			}
			if (uVar91[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar91[iVar0], iVar1) == 2)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_441[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar91[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_441[iVar1] = 0;
			}
			if (uVar97[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar97[iVar0], iVar1) == 3)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_462[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar97[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_462[iVar1] = 0f;
			}
			if (uVar133[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar133[iVar0], iVar1) == 2)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_571[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar133[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_571[iVar1] = 0;
			}
			if (uVar139[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar139[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_592[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar139[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_592[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar145[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar145[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_653[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar145[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_653[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar151[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar151[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_714[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar151[iVar0], iVar1) };
				Global_4456448.f_147514[iVar1] = Global_4456448.f_136652[iVar0 /*1457*/].f_714[iVar1 /*3*/];
				Global_4456448.f_147535[iVar1] = Global_4456448.f_136652[iVar0 /*1457*/].f_714[iVar1 /*3*/].f_1;
				Global_4456448.f_147556[iVar1] = Global_4456448.f_136652[iVar0 /*1457*/].f_714[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_714[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar157[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar157[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_489[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar157[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_489[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar163[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar163[iVar0], iVar1) == 3)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_550[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar163[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_550[iVar1] = 0f;
			}
			if (uVar181[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar181[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_1310[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar181[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_1310[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar187[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar187[iVar0], iVar1) == 5)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_1371[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar187[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_1371[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar193[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar193[iVar0], iVar1) == 3)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_1432[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar193[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_1432[iVar1] = 0f;
			}
			if (uVar169[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar169[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_136652[iVar0 /*1457*/].f_1148[iVar1 /*4*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar169[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_4456448.f_136652[iVar0 /*1457*/].f_1148[iVar1 /*4*/]), "", 16);
			}
			if (uVar175[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar175[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_136652[iVar0 /*1457*/].f_1229[iVar1 /*4*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar175[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_4456448.f_136652[iVar0 /*1457*/].f_1229[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (uVar73[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar73[iVar0], iVar1) == 2)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_783[iVar1 /*11*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar73[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_783[iVar1 /*11*/].f_1 = -1;
			}
			if (uVar79[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar79[iVar0], iVar1) == 2)
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_783[iVar1 /*11*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar79[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_136652[iVar0 /*1457*/].f_783[iVar1 /*11*/] = -1;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			func_227(&(Global_4456448.f_136652[iVar0 /*1457*/].f_1114[iVar2 /*4*/]), &(uVar210[iVar0]), iVar2);
			func_227(&(Global_4456448.f_136652[iVar0 /*1457*/].f_1131[iVar2 /*4*/]), &(uVar216[iVar0]), iVar2);
			iVar2++;
		}
		iVar0++;
	}
}

void func_229(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar8;
	int iVar9;
	var uVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	
	if (DATAFILE::_OBJECT_VALUE_GET_OBJECT(uParam0, "eoir") == 0 || DATAFILE::_OBJECT_VALUE_GET_OBJECT(uParam0, "eoep") == 0)
	{
		return;
	}
	iVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uParam0, "eoid");
	iVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uParam0, "eoet");
	uVar10 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uParam0, "eoir");
	uVar11 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uParam0, "eoep");
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		if (iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar8, iVar0) == 2)
		{
			Global_4456448.f_125895[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_125895[iVar0] = -1;
		}
		if (iVar9 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar9, iVar0) == 2)
		{
			Global_4456448.f_125864[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_125864[iVar0] = -1;
		}
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&cVar4, "eor", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar10, &cVar4) == 2)
				{
					Global_4456448.f_125926[iVar0 /*66*/][iVar1 /*5*/][iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar10, &cVar4);
				}
				else
				{
					Global_4456448.f_125926[iVar0 /*66*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar11, &cVar4) == 2)
				{
					Global_4456448.f_127907[iVar0 /*66*/][iVar1 /*5*/][iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar11, &cVar4);
				}
				else
				{
					Global_4456448.f_125926[iVar0 /*66*/][iVar1 /*5*/][iVar2] = -1;
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		iVar12 = Global_4456448.f_125895[iVar0];
		iVar13 = Global_4456448.f_125864[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_4456448.f_125895[iVar3] == iVar12) && Global_4456448.f_125864[iVar3] == iVar13)
				{
					Global_4456448.f_125864[iVar3] = -1;
					Global_4456448.f_125895[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 12)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_4456448.f_125926[iVar3 /*66*/][iVar1 /*5*/][iVar2] = -1;
							Global_4456448.f_127907[iVar3 /*66*/][iVar1 /*5*/][iVar2] = -1;
							iVar2++;
						}
						iVar1++;
					}
				}
				iVar3++;
			}
		}
		iVar0++;
	}
}

void func_230(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	var uVar8[4];
	var uVar13[4];
	var uVar18[4];
	var uVar23[4];
	var uVar28[4];
	
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "kill");
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "no");
	iVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "mcp");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "mcf");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_40 - 1))
	{
		if (iVar1 < 4)
		{
			Global_4456448.f_53206[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar5, iVar1);
			StringCopy(&cVar2, "rul", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar8[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar13[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "lim", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar18[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar23[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar28[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_4456448.f_53206[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_4456448.f_52712[iVar0 /*29*/][iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8[iVar1], iVar0);
					Global_4456448.f_52712[iVar0 /*29*/].f_5[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13[iVar1], iVar0);
					if (Global_4456448.f_52712[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_4456448.f_52712[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_4456448.f_52712[iVar0 /*29*/].f_10[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18[iVar1], iVar0);
					if (uVar23[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar23[iVar1], iVar0) == 2)
					{
						Global_4456448.f_52712[iVar0 /*29*/].f_15[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_52712[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (uVar28[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar28[iVar1], iVar0) == 2)
					{
						Global_4456448.f_52712[iVar0 /*29*/].f_20[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_52712[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 2)
					{
						Global_4456448.f_52712[iVar0 /*29*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar0);
					}
					else
					{
						Global_4456448.f_52712[iVar0 /*29*/].f_28 = -1;
					}
					if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
					{
						Global_4456448.f_52712[iVar0 /*29*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
					}
					else
					{
						Global_4456448.f_52712[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	var uVar4;
	var uVar5[4];
	var uVar10[4];
	var uVar15[4];
	var uVar20[4];
	var uVar25[4];
	var uVar30[4];
	var uVar35[4];
	var uVar40[4];
	var uVar45[4];
	var uVar50[4];
	var uVar55[4];
	var uVar60[4];
	var uVar65[4];
	var uVar70[4];
	var uVar75[4];
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	var uVar90;
	var uVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "goto");
	Global_4456448.f_53212[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar4, "no");
	Global_4456448.f_6 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar4, "atrig");
	iVar80 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "lmcp");
	iVar81 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_40 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar2, "loc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar5[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "sz", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar10[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "rl", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar15[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "pri", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar20[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "wtm", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar25[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "gps", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar40[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "smc", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar45[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "lbs", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar50[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "rcptp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar60[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "cmp", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar30[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "air", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar35[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "veh", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar65[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "dir", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar55[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "jtop", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar70[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			StringCopy(&cVar2, "jtof", 8);
			StringIntConCat(&cVar2, iVar1, 8);
			uVar75[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
			iVar0 = 0;
			while (iVar0 <= (Global_4456448.f_53212[0] - 1))
			{
				Global_4456448.f_50212[iVar0 /*119*/].f_1[0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar5[iVar1], iVar0) };
				Global_4456448.f_50212[iVar0 /*119*/].f_14[0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar10[iVar1], iVar0);
				Global_4456448.f_50212[iVar0 /*119*/].f_64[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar15[iVar1], iVar0);
				Global_4456448.f_50212[iVar0 /*119*/].f_69[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20[iVar1], iVar0);
				if (Global_4456448.f_50212[iVar0 /*119*/].f_69[iVar1] == -1)
				{
					Global_4456448.f_50212[iVar0 /*119*/].f_69[iVar1] = 99999;
				}
				Global_4456448.f_50212[iVar0 /*119*/].f_74[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar25[iVar1], iVar0);
				Global_4456448.f_50212[iVar0 /*119*/].f_48[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar60[iVar1], iVar0);
				Global_4456448.f_50212[iVar0 /*119*/].f_79[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar30[iVar1], iVar0);
				Global_4456448.f_50212[iVar0 /*119*/].f_36[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar35[iVar1], iVar0);
				Global_4456448.f_50212[iVar0 /*119*/].f_53 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar50[iVar1], iVar0);
				Global_4456448.f_50212[iVar0 /*119*/].f_31[0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar40[iVar1], iVar0);
				Global_4456448.f_50212[iVar0 /*119*/].f_41[0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar45[iVar1], iVar0);
				Global_4456448.f_50212[iVar0 /*119*/].f_100 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar55[iVar1], iVar0);
				if (iVar80 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar80, iVar0) == 2)
				{
					Global_4456448.f_50212[iVar0 /*119*/].f_96 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar80, iVar0);
				}
				else
				{
					Global_4456448.f_50212[iVar0 /*119*/].f_96 = -1;
				}
				if (iVar81 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar81, iVar0) == 2)
				{
					Global_4456448.f_50212[iVar0 /*119*/].f_97 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar81, iVar0);
				}
				else
				{
					Global_4456448.f_50212[iVar0 /*119*/].f_97 = -1;
				}
				if (uVar65[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar65[iVar1], iVar0) == 2)
				{
					Global_4456448.f_50212[iVar0 /*119*/].f_59[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_50212[iVar0 /*119*/].f_59[iVar1] = 0;
				}
				if (uVar70[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar70[iVar1], iVar0) == 2)
				{
					Global_4456448.f_50212[iVar0 /*119*/].f_84[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_50212[iVar0 /*119*/].f_84[iVar1] = 0;
				}
				if (uVar75[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar75[iVar1], iVar0) == 2)
				{
					Global_4456448.f_50212[iVar0 /*119*/].f_89[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar75[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_50212[iVar0 /*119*/].f_89[iVar1] = 0;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar82 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locbc");
	iVar83 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "loc2rd");
	iVar84 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "loclbr");
	iVar85 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locdir");
	iVar86 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "loctol");
	iVar87 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "lochgt");
	iVar88 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locart");
	iVar89 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locaa1");
	uVar90 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locaa2");
	uVar91 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locaaw");
	iVar92 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "nmpass");
	iVar93 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "nmfail");
	iVar94 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locstd");
	iVar95 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locstm");
	iVar96 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "lcbs2");
	iVar97 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "lcbs3");
	iVar98 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "lcfktm");
	iVar99 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locti");
	iVar100 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locgc");
	iVar101 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "loclto");
	iVar102 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "loctmw");
	iVar103 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "loctmt");
	iVar104 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "loctst");
	iVar105 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locpro");
	iVar106 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locpros");
	iVar107 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locprot");
	iVar108 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locdisa");
	iVar109 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locloo");
	iVar110 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "loccors");
	iVar111 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "lochght");
	iVar112 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locdpth");
	iVar113 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "localph");
	iVar114 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "loccosc");
	iVar115 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locbso");
	iVar116 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locspg");
	iVar117 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locspsg");
	iVar118 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "locitb");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_53212[0] - 1))
	{
		if (iVar82 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar82, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar82, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_46 = 0;
		}
		if (iVar83 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar83, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar83, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_20 = 0f;
		}
		if (iVar84 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar84, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar84, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_19 = 1f;
		}
		if (iVar85 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar85, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar85, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_28 = 0f;
		}
		if (iVar86 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar86, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar86, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_29 = 0f;
		}
		if (iVar87 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar87, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar87, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_30 = 0f;
		}
		if (iVar99 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar99, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar99, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_57 = 0f;
		}
		if (iVar100 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar100, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar100, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_58 = 0f;
		}
		if (iVar88 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar88, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar88, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/] = 0;
		}
		if (iVar92 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar92, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_94 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar92, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_94 = -1;
		}
		if (iVar93 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar93, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_95 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar93, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_95 = -1;
		}
		if (iVar94 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar94, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_99 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar94, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_99 = 10.5f;
		}
		if (iVar111 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar111, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_101 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar111, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_101 = 1f;
		}
		if (iVar112 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar112, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_102 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar112, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_102 = 0f;
		}
		if (iVar113 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar113, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_103 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar113, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_103 = -1;
		}
		if (iVar114 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar114, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_104 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar114, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_104 = 0f;
		}
		if (iVar95 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar95, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_98 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar95, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_98 = 0;
		}
		if (iVar96 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar96, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_54 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar96, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_54 = 0;
		}
		if (iVar97 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar97, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_55 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar97, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_55 = 0;
		}
		if (iVar98 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar98, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_56 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar98, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_56 = -1;
		}
		if (iVar109 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar109, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_106 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar109, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_106 = 0;
		}
		if (iVar110 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar110, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar110, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_47 = 0;
		}
		if (iVar101 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar101, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_107 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar101, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_107 = 0f;
		}
		if (iVar102 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar102, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_108 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar102, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_108 = 0f;
		}
		if (iVar103 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar103, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_109 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar103, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_109 = 0f;
		}
		if (iVar104 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar104, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_110 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar104, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_110 = -1;
		}
		if (iVar105 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar105, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_112 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar105, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_112 = -1;
		}
		if (iVar106 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar106, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_113 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar106, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_113 = -1;
		}
		if (iVar107 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar107, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_114 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar107, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_114 = -1;
		}
		if (iVar108 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar108, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_115 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar108, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_115 = 0;
		}
		if (iVar116 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar116, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_116 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar116, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_116 = 0;
		}
		if (iVar117 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar117, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_117 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar117, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_117 = 0;
		}
		if (iVar118 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar118, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_118 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar118, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_118 = 0;
		}
		if (iVar115 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar115, iVar0) == 2)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_105 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar115, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_105 = 0;
		}
		if (((iVar89 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar89, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar90, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar91, iVar0) == 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_21 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar89, iVar0) };
			Global_4456448.f_50212[iVar0 /*119*/].f_24 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar90, iVar0) };
			Global_4456448.f_50212[iVar0 /*119*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar91, iVar0);
		}
		else
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_21 = { 0f, 0f, 0f };
			Global_4456448.f_50212[iVar0 /*119*/].f_24 = { 0f, 0f, 0f };
			Global_4456448.f_50212[iVar0 /*119*/].f_27 = 1f;
		}
		iVar0++;
	}
}

void func_232(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "cover") == 6)
	{
		uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "cover");
		Global_4456448.f_59131 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "no");
		uVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "loc");
		uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "dir");
		uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "use");
		uVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "high");
		uVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_59131 - 1))
		{
			Global_4456448.f_59132[iVar0 /*7*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar2, iVar0) };
			Global_4456448.f_59132[iVar0 /*7*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar3, iVar0);
			Global_4456448.f_59132[iVar0 /*7*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar4, iVar0);
			Global_4456448.f_59132[iVar0 /*7*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar5, iVar0);
			Global_4456448.f_59132[iVar0 /*7*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar6, iVar0);
			iVar0++;
		}
	}
}

void func_233(var uParam0)
{
	int iVar0;
	var uVar1;
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
	int iVar17;
	var uVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uParam0, "door");
	Global_4456448.f_58799 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "no");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "loc");
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "fopen");
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "model");
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "lock");
	uVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "swing");
	uVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "udrle");
	uVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "udtem");
	uVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "udrat");
	uVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "swingu");
	uVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "audst");
	uVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "aurt");
	uVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "uaudst");
	uVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "uaurt");
	uVar16 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "lfp");
	iVar17 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "dtime");
	uVar18 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "mid");
	uVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "dbs");
	iVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "fcz");
	iVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "foz");
	iVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "org");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_58799 - 1))
	{
		if (iVar0 < 15)
		{
			Global_4456448.f_58800[iVar0 /*22*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar3, iVar0) };
			Global_4456448.f_58800[iVar0 /*22*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar4, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(uVar6, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(uVar7, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar10, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(uVar11, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar13, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar12, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar15, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar14, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(uVar16, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			uVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar5, iVar0);
			Global_4456448.f_58800[iVar0 /*22*/].f_6 = uVar1;
			if (iVar17 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar17, iVar0) == 2)
			{
				Global_4456448.f_58800[iVar0 /*22*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar17, iVar0);
			}
			else
			{
				Global_4456448.f_58800[iVar0 /*22*/].f_9 = 0;
			}
			Global_4456448.f_58800[iVar0 /*22*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(uVar18, iVar0);
			if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar0) == 3)
			{
				Global_4456448.f_58800[iVar0 /*22*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar20, iVar0);
			}
			else
			{
				Global_4456448.f_58800[iVar0 /*22*/].f_4 = 999999f;
			}
			if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar0) == 3)
			{
				Global_4456448.f_58800[iVar0 /*22*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar21, iVar0);
			}
			else
			{
				Global_4456448.f_58800[iVar0 /*22*/].f_5 = 999999f;
			}
			if (iVar22 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar22, iVar0) == 3)
			{
				Global_4456448.f_58800[iVar0 /*22*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar22, iVar0);
			}
			else
			{
				Global_4456448.f_58800[iVar0 /*22*/].f_21 = 0f;
			}
		}
		iVar0++;
	}
}

void func_234(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	var uVar7[4];
	var uVar12[4];
	var uVar17[4];
	var uVar22[4];
	var uVar27[4];
	var uVar32[4];
	var uVar37[4];
	var uVar42[4];
	var uVar47[4];
	var uVar52[4];
	var uVar57[4];
	var uVar62[4];
	var uVar67[4];
	var uVar72[4];
	var uVar77[4];
	var uVar82[4];
	
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_40 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "airset", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "airsid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "airstv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "airsod", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "airsodx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "airssp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "airola", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "airoha", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "airsr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "airsft", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "airtyp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ivmst", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ivmsa", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ivmsac", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ivmsb", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ivmse", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_104[iVar1 /*10693*/].f_59 - 1))
			{
				if (!func_235(&uVar7, 2, iVar1, iVar2) && !func_235(&uVar12, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar7[iVar1], iVar2);
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/] = 0;
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_1 = -1;
				}
				if (!func_235(&uVar17, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_2 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar17[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_2 = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar22, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_5 = 0;
				}
				if (!func_235(&uVar27, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_6 = 0;
				}
				if (!func_235(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_7 = 25;
				}
				if (!func_235(&uVar37, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar37[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_8 = 25;
				}
				if (!func_235(&uVar42, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_9 = 45;
				}
				if (!func_235(&uVar47, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar47[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_10 = 0;
				}
				if (!func_235(&uVar52, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_11 = 3500;
				}
				if (!func_235(&uVar57, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10038[iVar2 /*13*/].f_12 = 0;
				}
				if (!func_235(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9840[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9840[iVar2] = 0;
				}
				if (!func_235(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9858[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9858[iVar2] = 0;
				}
				if (!func_235(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9876[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9876[iVar2] = 0;
				}
				if (!func_235(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9894[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9894[iVar2] = 0;
				}
				if (!func_235(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9912[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9912[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

int func_235(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if ((*uParam0)[iParam2] != 0)
	{
		if (DATAFILE::_ARRAY_VALUE_GET_TYPE((*uParam0)[iParam2], iParam3) == iParam1)
		{
			return 0;
		}
	}
	return 1;
}

void func_236(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	var uVar7[4];
	var uVar12[4];
	var uVar17[4];
	var uVar22[4];
	var uVar27[4];
	var uVar32[4];
	var uVar37[4];
	var uVar42[4];
	var uVar47[4];
	var uVar52[4];
	var uVar57[4];
	var uVar62[4];
	var uVar67[4];
	var uVar72[4];
	var uVar77[4];
	var uVar82[4];
	var uVar87[4];
	var uVar92[4];
	var uVar97[4];
	var uVar102[4];
	var uVar107[4];
	var uVar112[4];
	struct<21> Var117;
	int iVar202;
	int iVar203;
	
	if (func_128())
	{
		return;
	}
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "endcon");
	Var117 = 4;
	Var117.f_1 = 20;
	Var117.f_1.f_21 = 20;
	Var117.f_1.f_21.f_21 = 20;
	Var117.f_1.f_21.f_21.f_21 = 20;
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_40 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "irbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs5", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs6", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs7", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs8", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs9", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs10", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs11", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs12", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irbs13", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "iroamtr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bmmxh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bmspm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bmhrgn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bmsjd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bmhok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bmstd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bmmph", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bmmdm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar112[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			iVar202 = 0;
			while (iVar202 <= 19)
			{
				StringCopy(&cVar3, "hlm", 16);
				StringIntConCat(&cVar3, iVar1, 16);
				StringIntConCat(&cVar3, iVar202, 16);
				Var117[iVar1 /*21*/][iVar202] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
				iVar202++;
			}
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_104[iVar1 /*10693*/].f_59 - 1))
			{
				if (!func_235(&uVar7, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5352[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar7[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5352[iVar2] = 0;
				}
				if (!func_235(&uVar12, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5370[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5370[iVar2] = 0;
				}
				if (!func_235(&uVar17, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5388[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5388[iVar2] = 0;
				}
				if (!func_235(&uVar22, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5406[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5406[iVar2] = 0;
				}
				if (!func_235(&uVar27, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5424[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5424[iVar2] = 0;
				}
				if (!func_235(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5442[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5442[iVar2] = 0;
				}
				if (!func_235(&uVar37, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5460[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar37[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5460[iVar2] = 0;
				}
				if (!func_235(&uVar42, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5478[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5478[iVar2] = 0;
				}
				if (!func_235(&uVar47, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5496[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar47[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5496[iVar2] = 0;
				}
				if (!func_235(&uVar52, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5514[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5514[iVar2] = 0;
				}
				if (!func_235(&uVar57, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5532[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5532[iVar2] = 0;
				}
				if (!func_235(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5550[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5550[iVar2] = 0;
				}
				if (!func_235(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5568[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5568[iVar2] = 0;
				}
				if (!func_235(&uVar72, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_10420[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar72[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_10420[iVar2 /*16*/]), "", 64);
				}
				if (!func_235(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/] = 1000;
				}
				if (!func_235(&uVar82, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_1 = 1.15f;
				}
				if (!func_235(&uVar107, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_6 = 10f;
				}
				if (!func_235(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_2 = 25;
				}
				if (!func_235(&uVar92, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_7 = 0;
				}
				if (!func_235(&uVar97, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_3 = 1;
				}
				if (!func_235(&uVar112, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_8 = 100;
				}
				if (!func_235(&uVar102, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3151[iVar2 /*9*/].f_5 = 25;
				}
				iVar203 = 0;
				iVar203 = 0;
				while (iVar203 <= 19)
				{
					if (Var117[iVar1 /*21*/][iVar203] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(Var117[iVar1 /*21*/][iVar203], iVar2) == 2)
					{
						Global_4456448.f_104[iVar1 /*10693*/].f_3683[iVar2 /*21*/][iVar203] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(Var117[iVar1 /*21*/][iVar203], iVar2);
					}
					else
					{
						Global_4456448.f_104[iVar1 /*10693*/].f_3683[iVar2 /*21*/][iVar203] = 0;
					}
					iVar203++;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_237(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	var uVar7[4];
	var uVar12[4];
	var uVar17[4];
	var uVar22[4];
	var uVar27[4];
	var uVar32[4];
	var uVar37[4];
	var uVar42[4];
	var uVar47[4];
	var uVar52[4];
	var uVar57[4];
	var uVar62[4];
	var uVar67[4];
	var uVar72[4];
	var uVar77[4];
	var uVar82[4];
	var uVar87[4];
	var uVar92[4];
	var uVar97[4];
	var uVar102[4];
	var uVar107[4];
	var uVar112[4];
	var uVar117[4];
	var uVar122[4];
	var uVar127[4];
	var uVar132[4];
	var uVar137[4];
	var uVar142[4];
	var uVar147[4];
	var uVar152[4];
	var uVar157[4];
	var uVar162[4];
	var uVar167[4];
	var uVar172[4];
	var uVar177[4];
	var uVar182[4];
	var uVar187[4];
	var uVar192[4];
	var uVar197[4];
	var uVar202[4];
	var uVar207[4];
	var uVar212[4];
	var uVar217[4];
	var uVar222[4];
	var uVar227[4];
	var uVar232[4];
	var uVar237[4];
	var uVar242[4];
	var uVar247[4];
	var uVar252[4];
	var uVar257[4];
	var uVar262[4];
	var uVar267[4];
	var uVar272[4];
	var uVar277[4];
	var uVar282[4];
	var uVar287[4];
	var uVar292[4];
	var uVar297[4];
	var uVar302[4];
	int iVar307;
	
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_40 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "fleer", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "fleev", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "rloft", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "rloftv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "minspd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mspdlp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mspdsv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "pribt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bosth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bosti", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "vdor", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mspdmx", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "prmg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "traf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "pden", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dlor", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "fceStlth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mors", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mwdmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "vehdmro", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar122[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "vehdmri", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar127[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "remiveh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar132[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "shdtxt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "hitsnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar112[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "rdel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar117[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "diagwf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar137[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "diawfm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar142[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "twpptd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar147[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mnvhhl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar152[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsi", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar157[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mnvhsd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar162[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "blolt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar167[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mxhth", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar172[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "cbmanr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar177[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "rgnd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar182[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "rgnr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar187[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "rgnm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar192[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drnn", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar197[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drnr1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar202[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drnr2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar207[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drnr3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar212[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drnr4", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar217[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drnpl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar222[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drnp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar227[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drnv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar232[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drno", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar237[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drnRt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar242[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drnmss", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar247[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "grtug", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar252[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "grwep", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar257[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "grclp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar262[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "grkil", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar267[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "lbred", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar272[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "lbgre", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar277[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "lbblu", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar282[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "rltiA", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar287[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "rltiB", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar292[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "rltiC", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar297[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "rltiD", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar302[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_104[iVar1 /*10693*/].f_59 - 1))
			{
				if (!func_235(&uVar7, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3081[iVar2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar7[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3081[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar12, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3133[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3133[iVar2] = 0f;
				}
				if (!func_235(&uVar17, 2, iVar1, iVar2) && !func_238())
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9423[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9423[iVar2] = -1;
				}
				if (!func_235(&uVar22, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9441[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9441[iVar2] = 0;
				}
				if (!func_235(&uVar27, 2, iVar1, iVar2) && Global_4456448.f_2 != 6)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9459[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9459[iVar2] = -1;
				}
				if (!func_235(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9477[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9477[iVar2] = 0;
				}
				if (!func_235(&uVar37, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9513[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar37[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9513[iVar2] = -1;
				}
				if (!func_235(&uVar42, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9675[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9675[iVar2] = 0;
				}
				if (!func_235(&uVar47, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9693[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar47[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9693[iVar2] = 0;
				}
				if (!func_235(&uVar52, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9711[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9711[iVar2] = 0;
				}
				if (!func_235(&uVar57, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9729[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9729[iVar2] = -1;
				}
				if (!func_235(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9495[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9495[iVar2] = -1;
				}
				if (!func_235(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9531[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9531[iVar2] = 0;
				}
				if (!func_235(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9585[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9585[iVar2] = -1;
				}
				if (!func_235(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9603[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9603[iVar2] = -1;
				}
				if (!func_235(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4213[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4213[iVar2] = 0;
				}
				if (!func_235(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4249[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4249[iVar2] = -1;
				}
				if (!func_235(&uVar92, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4231[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4231[iVar2] = -1;
				}
				if (!func_235(&uVar97, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4267[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4267[iVar2] = 10;
				}
				if (!func_235(&uVar102, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4285[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4285[iVar2] = 10;
				}
				if (!func_235(&uVar122, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9984[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar122[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9984[iVar2] = 10;
				}
				if (!func_235(&uVar127, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10002[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar127[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10002[iVar2] = 10;
				}
				if (!func_235(&uVar132, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5814[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar132[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5814[iVar2] = -1;
				}
				if (!func_235(&uVar107, 2, iVar1, iVar2))
				{
					iVar307 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar107[iVar1], iVar2);
					if (iVar307 > 0)
					{
						Global_4456448.f_104[iVar1 /*10693*/].f_9549[iVar2] = iVar307;
					}
					else
					{
						Global_4456448.f_104[iVar1 /*10693*/].f_9549[iVar2] = 0;
					}
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9549[iVar2] = 0;
				}
				if (!func_235(&uVar112, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9567[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9567[iVar2] = 0;
				}
				if (!func_235(&uVar117, 2, iVar1, iVar2))
				{
					if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar117[iVar1], iVar2) > 1)
					{
						Global_4456448.f_104[iVar1 /*10693*/].f_4361[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar117[iVar1], iVar2);
					}
					else
					{
						Global_4456448.f_104[iVar1 /*10693*/].f_4361[iVar2] = 1;
					}
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4361[iVar2] = 1;
				}
				if (!func_235(&uVar137, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4051[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar137[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4051[iVar2] = -1;
				}
				if (!func_235(&uVar142, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4069[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar142[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4069[iVar2] = -1;
				}
				if (!func_235(&uVar147, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4141[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar147[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4141[iVar2] = -1;
				}
				if (!func_235(&uVar152, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4087[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar152[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4087[iVar2] = -1;
				}
				if (!func_235(&uVar157, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4105[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar157[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4105[iVar2] = -1;
				}
				if (!func_235(&uVar162, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4123[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar162[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4123[iVar2] = -1;
				}
				if (!func_235(&uVar167, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4159[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar167[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4159[iVar2] = 4;
				}
				if (!func_235(&uVar172, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4177[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar172[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4177[iVar2] = 0;
				}
				if (!func_235(&uVar177, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4195[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar177[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4195[iVar2] = 0;
				}
				if (!func_235(&uVar182, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3510[iVar2 /*3*/] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar182[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3510[iVar2 /*3*/] = 0f;
				}
				if (!func_235(&uVar187, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3510[iVar2 /*3*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar187[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3510[iVar2 /*3*/].f_1 = 1;
				}
				if (!func_235(&uVar192, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3510[iVar2 /*3*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar192[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3510[iVar2 /*3*/].f_2 = 50;
				}
				if (!func_235(&uVar197, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar197[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/] = 0f;
				}
				if (!func_235(&uVar202, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_1[0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar202[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_1[0] = 0f;
				}
				if (!func_235(&uVar207, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_1[1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar207[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_1[1] = 0f;
				}
				if (!func_235(&uVar212, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_1[2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar212[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_1[2] = 0f;
				}
				if (!func_235(&uVar217, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_1[3] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar217[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_1[3] = 0f;
				}
				if (!func_235(&uVar222, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar222[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_6 = 0f;
				}
				if (!func_235(&uVar227, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar227[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_7 = 0f;
				}
				if (!func_235(&uVar232, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar232[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_8 = 0f;
				}
				if (!func_235(&uVar247, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar247[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_11 = 0;
				}
				if (!func_235(&uVar237, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar237[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_9 = 0f;
				}
				if (!func_235(&uVar242, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar242[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3305[iVar2 /*12*/].f_10 = 0f;
				}
				if (!func_235(&uVar252, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3562[iVar2 /*4*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar252[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3562[iVar2 /*4*/] = -1;
				}
				if (!func_235(&uVar257, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3562[iVar2 /*4*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar257[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3562[iVar2 /*4*/].f_1 = -1;
				}
				if (!func_235(&uVar262, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3562[iVar2 /*4*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar262[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3562[iVar2 /*4*/].f_2 = 0;
				}
				if (!func_235(&uVar267, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3562[iVar2 /*4*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar267[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3562[iVar2 /*4*/].f_3 = 0;
				}
				if (!func_235(&uVar272, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3631[iVar2 /*3*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar272[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3631[iVar2 /*3*/] = 0;
				}
				if (!func_235(&uVar282, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3631[iVar2 /*3*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar282[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3631[iVar2 /*3*/].f_2 = 0;
				}
				if (!func_235(&uVar277, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3631[iVar2 /*3*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar277[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_3631[iVar2 /*3*/].f_1 = 0;
				}
				if (!func_235(&uVar287, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10332[iVar2 /*4*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar287[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10332[iVar2 /*4*/].f_1 = 0;
				}
				if (!func_235(&uVar292, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10332[iVar2 /*4*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar292[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10332[iVar2 /*4*/] = 0;
				}
				if (!func_235(&uVar297, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10332[iVar2 /*4*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar297[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10332[iVar2 /*4*/].f_3 = 0f;
				}
				if (!func_235(&uVar302, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10332[iVar2 /*4*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar302[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10332[iVar2 /*4*/].f_2 = 0;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

bool func_238()
{
	return (Global_4456448 == 0 && Global_4456448.f_2 == 6);
}

void func_239(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	var uVar8[4];
	var uVar13[4];
	var uVar18[4];
	var uVar23[4];
	var uVar28[4];
	var uVar33[4];
	var uVar38[4];
	var uVar43[4];
	var uVar48[4];
	var uVar53[4];
	var uVar58[4];
	var uVar63[4];
	var uVar68[4];
	var uVar73[4];
	var uVar78[4];
	var uVar83[4];
	var uVar88[4];
	var uVar93[4];
	var uVar98[4];
	var uVar103[4];
	var uVar108[4];
	var uVar113[4];
	var uVar118[4];
	var uVar123[4];
	var uVar128[4];
	var uVar133[4];
	var uVar138[4];
	var uVar143[4];
	var uVar148[4];
	var uVar153[4];
	var uVar158[4];
	var uVar163[4];
	var uVar168[4];
	struct<5> Var173;
	var uVar194[4];
	var uVar199[4];
	var uVar204[4];
	var uVar209[4];
	var uVar214[4];
	var uVar219[4];
	var uVar224[4];
	var uVar229[4];
	var uVar234[4];
	var uVar239[4];
	var uVar244[4];
	var uVar249[4];
	var uVar254[4];
	var uVar259[4];
	var uVar264[4];
	var uVar269[4];
	var uVar274[4];
	var uVar279[4];
	var uVar284[4];
	var uVar289[4];
	var uVar294[4];
	var uVar299[4];
	var uVar304[4];
	var uVar309[4];
	var uVar314[4];
	var uVar319[4];
	
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "endcon");
	Var173 = 4;
	Var173.f_1 = 4;
	Var173.f_1.f_5 = 4;
	Var173.f_1.f_5.f_5 = 4;
	Var173.f_1.f_5.f_5.f_5 = 4;
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_40 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar4, "itvsd", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar8[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "itved", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar13[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "invor", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar18[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "emonR", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar23[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "pDSaD", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar28[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "todh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar88[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "todm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar93[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "tods", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar98[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "todsh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar103[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "armr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar33[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "bsthr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar38[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mgdm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar43[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "rorcp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar48[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "rocok", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar53[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "rodp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar58[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "rodpt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar63[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "rotes", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar68[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "rolsw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar73[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "roapa", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar78[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "sthpp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar83[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "txt3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar108[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "txt4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar113[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "txt5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar118[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "fail", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar123[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "bfm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar148[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "wwm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar128[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "vss", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar133[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "cwt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar138[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "vhm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar143[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "tsc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar153[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mcry", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar158[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "bdprt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar163[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "bdpst", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar168[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			iVar3 = 0;
			while (iVar3 <= 3)
			{
				StringCopy(&cVar4, "rlbs", 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringConCat(&cVar4, "-", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				Var173[iVar1 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
				StringCopy(&cVar4, "rlnm", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				uVar194[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
				iVar3++;
			}
			StringCopy(&cVar4, "gbnum", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar204[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbngn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar209[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gblgn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar214[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbcol", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar219[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar224[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mcstr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar229[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mcsrm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar234[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mcmp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar249[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "aumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar239[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mpaumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar244[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mpaumxscr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar254[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "filtlh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar259[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbmax", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar264[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbngm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar269[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gblgm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar274[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbvhl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar279[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbaie", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar199[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gacc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar284[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gfld", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar289[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbat", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar294[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar299[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar304[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbaw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar309[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbfnr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar314[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "txt2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar319[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_104[iVar1 /*10693*/].f_59 - 1))
			{
				if (!func_235(&uVar8, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_624[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_624[iVar2] = 5;
				}
				if (!func_235(&uVar13, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_642[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_642[iVar2] = 20;
				}
				if (!func_235(&uVar18, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1022[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1022[iVar2] = -1;
				}
				if (!func_235(&uVar23, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1040[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1040[iVar2] = -1;
				}
				if (!func_235(&uVar28, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1058[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1058[iVar2] = -1;
				}
				if (!func_235(&uVar33, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_860[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar33[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_860[iVar2] = 0;
				}
				if (!func_235(&uVar38, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_878[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_878[iVar2] = -1;
				}
				if (!func_235(&uVar43, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_896[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar43[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_896[iVar2] = 100;
				}
				if (!func_235(&uVar48, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9768[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar48[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9768[iVar2] = 0;
				}
				if (!func_235(&uVar53, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10020[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar53[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10020[iVar2] = 0f;
				}
				if (!func_235(&uVar58, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_914[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar58[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_914[iVar2] = 0;
				}
				if (!func_235(&uVar63, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_932[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar63[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_932[iVar2] = 0;
				}
				if (!func_235(&uVar68, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_950[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar68[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_950[iVar2] = 0;
				}
				if (!func_235(&uVar73, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_968[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar73[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_968[iVar2] = -1;
				}
				if (!func_235(&uVar78, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_986[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar78[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_986[iVar2] = -1;
				}
				if (!func_235(&uVar83, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1004[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar83[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1004[iVar2] = -2;
				}
				if (!func_235(&uVar88, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_788[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar88[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_788[iVar2] = 12;
				}
				if (!func_235(&uVar93, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_806[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar93[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_806[iVar2] = 0;
				}
				if (!func_235(&uVar98, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_824[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar98[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_824[iVar2] = 0;
				}
				if (!func_235(&uVar103, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_842[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar103[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_842[iVar2] = 0;
				}
				if (!func_190())
				{
					if (!func_235(&uVar108, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_7198[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar108[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_7198[iVar2 /*16*/]), "", 64);
					}
					if (!func_235(&uVar113, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_6652[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar113[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_6652[iVar2 /*16*/]), "", 64);
					}
					if (!func_235(&uVar118, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_6925[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar118[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_6925[iVar2 /*16*/]), "", 64);
					}
				}
				if (!func_235(&uVar123, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_7471[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar123[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_7471[iVar2 /*16*/]), "", 64);
				}
				if (!func_235(&uVar148, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_7744[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar148[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_7744[iVar2 /*16*/]), "", 64);
				}
				if (!func_235(&uVar128, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_8017[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar128[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_8017[iVar2 /*16*/]), "", 64);
				}
				if (!func_235(&uVar133, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_8290[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar133[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_8290[iVar2 /*16*/]), "", 64);
				}
				if (!func_235(&uVar138, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_8563[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar138[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_8563[iVar2 /*16*/]), "", 64);
				}
				if (!func_235(&uVar143, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_8836[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar143[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_8836[iVar2 /*16*/]), "", 64);
				}
				if (!func_235(&uVar153, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4325[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar153[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4325[iVar2] = 0;
				}
				if (!func_235(&uVar158, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4343[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar158[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4343[iVar2] = 0;
				}
				if (!func_235(&uVar163, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5608[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar163[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5608[iVar2] = Global_4456448.f_104[iVar1 /*10693*/].f_4043;
				}
				if (!func_235(&uVar168, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5626[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar168[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5626[iVar2] = Global_4456448.f_104[iVar1 /*10693*/].f_4305;
				}
				if (!func_235(&uVar264, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4742[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar264[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4742[iVar2] = 0;
				}
				if (!func_235(&uVar269, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4868[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar269[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4868[iVar2] = 0;
				}
				if (!func_235(&uVar274, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4904[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar274[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4904[iVar2] = 0;
				}
				if (!func_235(&uVar314, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4922[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar314[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4922[iVar2] = -1f;
				}
				if (!func_235(&uVar199, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4832[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar199[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4832[iVar2] = 0;
				}
				if (!func_235(&uVar279, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4760[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar279[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4760[iVar2] = 100;
				}
				if (!func_235(&uVar284, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4796[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar284[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4796[iVar2] = 0;
				}
				if (!func_235(&uVar289, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4814[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar289[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4814[iVar2] = 0;
				}
				if (!func_235(&uVar294, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4778[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar294[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4778[iVar2] = 0;
				}
				if (!func_235(&uVar299, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4620[iVar2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar299[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4620[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar304, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4672[iVar2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar304[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4672[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar309, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4724[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar309[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4724[iVar2] = 0f;
				}
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (Var173[iVar1 /*5*/][iVar3] != 0)
					{
						Global_4456448.f_104[iVar1 /*10693*/].f_5644[iVar2 /*5*/][iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(Var173[iVar1 /*5*/][iVar3], iVar2);
					}
					else
					{
						Global_4456448.f_104[iVar1 /*10693*/].f_5644[iVar2 /*5*/][iVar3] = 0;
					}
					if (uVar194[iVar3] != 0)
					{
						StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_5730[iVar3 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar194[iVar3], 0), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_5730[iVar3 /*16*/]), "", 64);
					}
					iVar3++;
				}
				if (!func_235(&uVar204, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4566[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar204[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4566[iVar2] = 0;
				}
				if (!func_235(&uVar209, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4850[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar209[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4850[iVar2] = 0;
				}
				if (!func_235(&uVar214, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4886[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar214[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4886[iVar2] = 0;
				}
				if (!func_235(&uVar219, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4602[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar219[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4602[iVar2] = 0;
				}
				if (!func_235(&uVar224, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4584[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar224[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4584[iVar2] = 0;
				}
				if (!func_235(&uVar229, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5226[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar229[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5226[iVar2] = 0;
				}
				if (!func_235(&uVar234, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5298[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar234[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5298[iVar2] = -1;
				}
				if (!func_235(&uVar239, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5262[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar239[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5262[iVar2] = 0;
				}
				if (!func_235(&uVar254, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5316[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar254[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5316[iVar2] = 0;
				}
				if (!func_235(&uVar244, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5280[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar244[iVar1], iVar2);
				}
				else if (Global_4456448.f_104[iVar1 /*10693*/].f_5262[iVar2] != 0 && GAMEPLAY::IS_BIT_SET(Global_4456448.f_104[iVar1 /*10693*/].f_5388[iVar2], 8))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5280[iVar2] = Global_4456448.f_104[iVar1 /*10693*/].f_5262[iVar2];
					Global_4456448.f_104[iVar1 /*10693*/].f_5262[iVar2] = 0;
					GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_104[iVar1 /*10693*/].f_5388[iVar2]), 8);
				}
				if (!func_235(&uVar249, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5244[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar249[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5244[iVar2] = 0;
				}
				if (!func_235(&uVar259, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5334[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar259[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5334[iVar2] = 0;
				}
				if (!func_235(&uVar319, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_6379[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar319[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_6379[iVar2 /*16*/]), "", 64);
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_240(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	var uVar7[4];
	var uVar12[4];
	var uVar17[4];
	var uVar22[4];
	var uVar27[4];
	var uVar32[4];
	var uVar37[4];
	var uVar42[4];
	var uVar47[4];
	var uVar52[4];
	var uVar57[4];
	var uVar62[4];
	var uVar67[4];
	var uVar72[4];
	var uVar77[4];
	var uVar82[4];
	var uVar87[4];
	var uVar92[4];
	var uVar97[4];
	var uVar102[4];
	var uVar107[4];
	var uVar112[4];
	var uVar117[4];
	var uVar122[4];
	var uVar127[4];
	var uVar132[4];
	var uVar137[4];
	var uVar142[4];
	var uVar147[4];
	var uVar152[4];
	var uVar157[4];
	var uVar162[4];
	var uVar167[4];
	var uVar172[4];
	var uVar177[4];
	var uVar182[4];
	var uVar187[4];
	var uVar192[4];
	var uVar197[4];
	var uVar202[4];
	var uVar207[4];
	var uVar212[4];
	var uVar217[4];
	var uVar222[4];
	var uVar227[4];
	var uVar232[4];
	var uVar237[4];
	var uVar242[4];
	var uVar247[4];
	var uVar252[4];
	var uVar257[4];
	var uVar262[4];
	var uVar267[4];
	var uVar272[4];
	
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_40 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "destv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "destr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "destv1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "destv2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "destw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outbt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outb", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outhv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outb1v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outb2v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outwtg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outiwv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outiwo", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outclo", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outclr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outclp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outmm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outfp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar112[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outsg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar117[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outbh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar122[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outhc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar142[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outety", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar127[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outeid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar132[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outilv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "outonfv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar137[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bd2t", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar177[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bd2v", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar182[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bd2v1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar187[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bd2v2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar192[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bd2r", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar197[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bd2w", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar202[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2wg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar212[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2iv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar217[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2io", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar227[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2bs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar232[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2mm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar237[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2fp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar242[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2sg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar247[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2bh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar252[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2hc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar272[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2et", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar257[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2id", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar262[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2hv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar207[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2ilv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar222[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "out2onfv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar267[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mpaib", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar147[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mpaib2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar152[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "vrach", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar157[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "vrach2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar162[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bundel", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar167[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bundel2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar172[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_104[iVar1 /*10693*/].f_59 - 1))
			{
				if (!func_235(&uVar17, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_2468[iVar2 /*36*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar17[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_2468[iVar2 /*36*/].f_3 = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar22, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_2468[iVar2 /*36*/].f_6 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar22[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_2468[iVar2 /*36*/].f_6 = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar27, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_2468[iVar2 /*36*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_2468[iVar2 /*36*/].f_10 = 0f;
				}
				if (!func_235(&uVar7, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_2468[iVar2 /*36*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar7[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_2468[iVar2 /*36*/] = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar12, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_2468[iVar2 /*36*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_2468[iVar2 /*36*/].f_9 = 0f;
				}
				if (!func_235(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_19 = -1;
				}
				if (!func_235(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_17 = 0;
				}
				if (!func_235(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_33 = 0;
				}
				if (!func_235(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_18 = -1;
				}
				if (!func_235(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_20 = 0;
				}
				if (!func_235(&uVar92, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_23 = 120;
				}
				if (!func_235(&uVar97, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_24 = 5f;
				}
				if (!func_235(&uVar102, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_25 = 10f;
				}
				if (!func_235(&uVar137, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar137[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_34 = 0;
				}
				if (!func_235(&uVar267, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar267[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_34 = 0;
				}
				if (!func_235(&uVar107, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_26 = 30f;
				}
				if (!func_235(&uVar147, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar147[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_30 = 0;
				}
				if (!func_235(&uVar152, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar152[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_30 = 0;
				}
				if (!func_235(&uVar157, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar157[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_31 = 0;
				}
				if (!func_235(&uVar162, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar162[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_31 = 0;
				}
				if (!func_235(&uVar167, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar167[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_32 = 0;
				}
				if (!func_235(&uVar172, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar172[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_32 = 0;
				}
				if (!func_235(&uVar112, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_27 = 0;
				}
				if (!func_235(&uVar117, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar117[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_28 = 0;
				}
				if (!func_235(&uVar142, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar142[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_35 = 12;
				}
				if (!func_235(&uVar122, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar122[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_29 = 0;
				}
				if (!func_235(&uVar127, 2, iVar1, iVar2) && !func_235(&uVar132, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar127[iVar1], iVar2);
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar132[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_21 = 0;
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_22 = -1;
				}
				if (!func_235(&uVar212, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar212[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_19 = -1;
				}
				if (!func_235(&uVar217, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar217[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_17 = 0;
				}
				if (!func_235(&uVar222, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar222[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_33 = 0;
				}
				if (!func_235(&uVar227, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar227[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_18 = -1;
				}
				if (!func_235(&uVar232, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar232[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_20 = 0;
				}
				if (!func_235(&uVar237, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar237[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_23 = 120;
				}
				if (!func_235(&uVar242, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar242[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_27 = 0;
				}
				if (!func_235(&uVar247, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar247[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_28 = 0;
				}
				if (!func_235(&uVar272, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar272[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_35 = 12;
				}
				if (!func_235(&uVar252, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar252[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_29 = 0;
				}
				if (!func_235(&uVar257, 2, iVar1, iVar2) && !func_235(&uVar262, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar257[iVar1], iVar2);
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar262[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_21 = 0;
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_22 = -1;
				}
				if (!func_235(&uVar47, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar47[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_3 = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar52, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_6 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar52[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_6 = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar57, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_10 = 0f;
				}
				if (!func_235(&uVar62, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_13 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar62[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_13 = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar37, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar37[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/] = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar42, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_9 = 0f;
				}
				if (!func_235(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1242[iVar2 /*36*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32[iVar1], iVar2);
				}
				if (!func_235(&uVar207, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_13 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar207[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_13 = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar182, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar182[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/] = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar192, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar192[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_3 = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar187, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_6 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar187[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_6 = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar202, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar202[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_10 = 0f;
				}
				if (!func_235(&uVar197, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar197[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_9 = 0f;
				}
				if (!func_235(&uVar177, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1855[iVar2 /*36*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar177[iVar1], iVar2);
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_241(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	var uVar7[4];
	var uVar12[4];
	var uVar17[4];
	var uVar22[4];
	var uVar27[4];
	var uVar32[4];
	var uVar37[4];
	var uVar42[4];
	var uVar47[4];
	var uVar52[4];
	var uVar57[4];
	var uVar62[4];
	var uVar67[4];
	var uVar72[4];
	var uVar77[4];
	var uVar82[4];
	var uVar87[4];
	var uVar92[4];
	var uVar97[4];
	var uVar102[4];
	var uVar107[4];
	int iVar112;
	int iVar113;
	
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_40 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "sia", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar7[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "stiam", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar12[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mmiam2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar17[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "siat", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar22[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "stiamt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar27[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mmiam2t", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar32[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "sim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar37[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mmim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar42[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mmi2m", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar47[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "uacp1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar52[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "uacp2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar57[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			iVar112 = 0;
			while (iVar112 <= 81)
			{
				if (uVar7[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar7[iVar1], iVar112) == 2)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_64[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar7[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_64[iVar112] = 0;
				}
				if (uVar12[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar12[iVar1], iVar112) == 2)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_249[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_249[iVar112] = 0;
				}
				if (uVar17[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar17[iVar1], iVar112) == 2)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_433[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_433[iVar112] = 0;
				}
				if (uVar37[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar37[iVar1], iVar112) == 3)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_160[iVar112] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar37[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_160[iVar112] = 1f;
				}
				if (uVar42[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar42[iVar1], iVar112) == 3)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_345[iVar112] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar42[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_345[iVar112] = 1f;
				}
				if (uVar47[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar47[iVar1], iVar112) == 3)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_529[iVar112] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar47[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_529[iVar112] = 1f;
				}
				iVar112++;
			}
			iVar112 = 0;
			while (iVar112 <= 11)
			{
				if (uVar22[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar22[iVar1], iVar112) == 2)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_147[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_147[iVar112] = 0;
				}
				if (uVar27[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar27[iVar1], iVar112) == 2)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_332[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_332[iVar112] = 0;
				}
				if (uVar32[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar32[iVar1], iVar112) == 2)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_516[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_516[iVar112] = 0;
				}
				iVar112++;
			}
			iVar113 = 0;
			while (iVar113 <= 3)
			{
				if (uVar52[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar52[iVar1], iVar113) == 2)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_614[iVar113] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52[iVar1], iVar113);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_614[iVar113] = -1;
				}
				if (uVar57[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar57[iVar1], iVar113) == 2)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_619[iVar113] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar57[iVar1], iVar113);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_619[iVar113] = -1;
				}
				iVar113++;
			}
			StringCopy(&cVar3, "icmsk1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar62[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "icmsk2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar67[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "icmsk3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar72[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "itpreqs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar77[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mnvms", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar82[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ivms", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar87[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ivmsh", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar92[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "isvmg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar97[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "isvro", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar102[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "isvhr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar107[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_104[iVar1 /*10693*/].f_59 - 1))
			{
				if (!func_235(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10260[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10260[iVar2] = 0;
				}
				if (!func_235(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10278[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10278[iVar2] = 0;
				}
				if (!func_235(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10296[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10296[iVar2] = 0;
				}
				if (!func_235(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10402[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10402[iVar2] = 0;
				}
				if (!func_235(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9786[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9786[iVar2] = 0;
				}
				if (!func_235(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9804[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9804[iVar2] = 0;
				}
				if (!func_235(&uVar92, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9822[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar92[iVar1], iVar2);
					if (Global_4456448.f_104[iVar1 /*10693*/].f_9822[iVar2] == 0)
					{
						Global_4456448.f_104[iVar1 /*10693*/].f_9822[iVar2] = -1;
					}
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9822[iVar2] = -1;
				}
				if (!func_235(&uVar97, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9930[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9930[iVar2] = -1;
				}
				if (!func_235(&uVar102, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9948[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9948[iVar2] = -1;
				}
				if (!func_235(&uVar107, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9966[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9966[iVar2] = -1;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_242(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	var uVar14[4];
	var uVar19[4];
	var uVar24[4];
	var uVar29[4];
	var uVar34[4];
	var uVar39[4];
	var uVar44[4];
	var uVar49[4];
	var uVar54[4];
	var uVar59[4];
	var uVar64[4];
	var uVar69[4];
	var uVar74[4];
	var uVar79[4];
	var uVar84[4];
	var uVar89[4];
	var uVar94[4];
	var uVar99[4];
	var uVar104[4];
	var uVar109[4];
	var uVar114[4];
	var uVar119[4];
	var uVar124[4];
	var uVar129[4];
	var uVar134[4];
	var uVar139[4];
	var uVar144[4];
	var uVar149[4];
	var uVar154[4];
	var uVar159[4];
	var uVar164[4];
	var uVar169[4];
	var uVar174[4];
	var uVar179[4];
	var uVar184[4];
	var uVar189[4];
	var uVar194[4];
	var uVar199[4];
	var uVar204[4];
	var uVar209[4];
	var uVar214[4];
	var uVar219[4];
	var uVar224[4];
	var uVar229[4];
	var uVar234[4];
	var uVar239[4];
	var uVar244[4];
	var uVar249[4];
	var uVar254[4];
	var uVar259[4];
	var uVar264[4];
	var uVar269[4];
	var uVar274[4];
	var uVar279[4];
	var uVar284[4];
	var uVar289[4];
	var uVar294[4];
	var uVar299[4];
	var uVar304[4];
	var uVar309[4];
	var uVar314[4];
	var uVar319[4];
	int iVar324;
	int iVar325;
	
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_40 - 1))
	{
		if (iVar1 < 4)
		{
			StringCopy(&cVar3, "tmt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar14[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "sudtm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar19[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "tms", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar24[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "txt", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar29[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "tak", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar34[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "cap", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar39[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "lnkdr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar44[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "lnkdr2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar49[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "hscr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar54[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "rsiv", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar59[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "wprs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar64[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "wfrc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar74[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "wchg", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar69[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "fkwl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar79[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mxwl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar84[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "wdly", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar89[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ttlc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar94[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "swtod", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar99[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "swtok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar104[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "fsdtmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar279[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mpftmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar274[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "artlit", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar109[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mrtl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar114[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bmbtm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar119[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "gpsdp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar124[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dcont", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar129[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "critw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar134[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "diswp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar139[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "frndf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar144[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dsosui", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar149[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dpos", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar154[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "txt1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar159[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dpos2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar164[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dpost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar169[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dotim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar174[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dov", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar179[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar184[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dops", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar189[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dovd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar194[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "pl2an", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar199[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "lvbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar204[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ovwty", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar209[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ovwid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar214[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "wldbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar219[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drpr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar224[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drph", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar229[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "gbtp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar234[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irfbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar239[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "plvrl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar244[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "hdmfp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar284[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "hddstra", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar289[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			bVar7 = false;
			bVar8 = false;
			bVar9 = false;
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			StringCopy(&cVar3, "opl0", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar7 = true;
				uVar249[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar8 = true;
				uVar254[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar9 = true;
				uVar259[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar10 = true;
				uVar264[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "oplbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar269[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mpot0", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar11 = true;
				uVar294[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar12 = true;
				uVar299[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar13 = true;
				uVar304[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "rnrbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar309[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "cojr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar314[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "cojc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar319[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			iVar324 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_104[iVar1 /*10693*/].f_59 - 1))
			{
				if (!func_235(&uVar14, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_716[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar14[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_716[iVar2] = 0;
				}
				if (!func_235(&uVar19, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_734[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_734[iVar2] = 0;
				}
				if (!func_235(&uVar24, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4307[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4307[iVar2] = 0;
				}
				if (!func_235(&uVar34, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4379[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar34[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4379[iVar2] = 0;
				}
				if (!func_235(&uVar39, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4397[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar39[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4397[iVar2] = 0;
				}
				if (!func_235(&uVar29, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_5833[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar29[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_5833[iVar2 /*16*/]), "", 64);
				}
				if (!func_235(&uVar44, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_660[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar44[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_660[iVar2] = 0;
				}
				if (!func_235(&uVar49, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_678[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar49[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_678[iVar2] = 0;
				}
				if (Global_4456448.f_104[iVar1 /*10693*/].f_678[iVar2] == 0)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_678[iVar2] = -1;
				}
				if (!func_235(&uVar54, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_698[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar54[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_698[iVar2] = 0;
				}
				if (!func_235(&uVar74, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4433[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar74[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4433[iVar2] = 0;
				}
				if (!func_235(&uVar69, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4415[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar69[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4415[iVar2] = 0;
				}
				if (!func_235(&uVar79, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4455[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar79[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4455[iVar2] = 0;
				}
				if (!func_235(&uVar84, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4473[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar84[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4473[iVar2] = 1;
				}
				if (!func_235(&uVar89, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4493[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar89[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4493[iVar2] = 10000;
				}
				if (!func_235(&uVar94, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4529[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar94[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4529[iVar2] = -1;
				}
				if (!func_235(&uVar59, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1076[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar59[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1076[iVar2] = 0;
				}
				if (!func_235(&uVar64, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1094[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar64[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1094[iVar2] = 0;
				}
				if (!func_235(&uVar144, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1148[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar144[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1148[iVar2] = 0;
				}
				if (!func_235(&uVar149, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1166[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar149[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1166[iVar2] = 0;
				}
				if (!func_235(&uVar99, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1112[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar99[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1112[iVar2] = -1;
				}
				if (!func_235(&uVar104, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1130[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar104[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1130[iVar2] = -1;
				}
				if (!func_235(&uVar114, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4511[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar114[iVar1], iVar2);
				}
				else if (iVar324 != 0)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4511[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar324, iVar1);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4511[iVar2] = 0;
				}
				if (!func_235(&uVar109, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1202[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar109[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1202[iVar2] = -1;
				}
				if (!func_235(&uVar279, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_770[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar279[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_770[iVar2] = 0;
				}
				if (!func_235(&uVar274, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_752[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar274[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_752[iVar2] = 0;
				}
				if (!func_235(&uVar119, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1184[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar119[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1184[iVar2] = 0;
				}
				if (!func_235(&uVar124, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1220[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar124[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_1220[iVar2] = 0;
				}
				if (!func_235(&uVar129, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9369[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar129[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9369[iVar2] = 0;
				}
				if (!func_235(&uVar134, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9387[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar134[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9387[iVar2] = 0;
				}
				if (!func_235(&uVar139, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9405[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar139[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9405[iVar2] = 0;
				}
				if (!func_235(&uVar154, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4940[iVar2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar154[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4940[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_190())
				{
					if (!func_235(&uVar159, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_6106[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar159[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_6106[iVar2 /*16*/]), "", 64);
					}
				}
				if (!func_235(&uVar164, 5, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4992[iVar2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar164[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4992[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_235(&uVar169, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5080[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar169[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5080[iVar2] = 0;
				}
				if (func_238())
				{
					if (Global_4456448.f_104[iVar1 /*10693*/].f_5080[iVar2] != 1)
					{
						Global_4456448.f_104[iVar1 /*10693*/].f_5080[iVar2] = 6;
					}
				}
				if (!func_235(&uVar174, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5116[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar174[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5116[iVar2] = 0;
				}
				if (!func_235(&uVar234, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4547[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar234[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_4547[iVar2] = 0;
				}
				if (!func_235(&uVar224, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5044[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar224[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5044[iVar2] = 0f;
				}
				if (!func_235(&uVar229, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5062[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar229[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5062[iVar2] = 0.001f;
				}
				if (!func_235(&uVar239, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5586[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar239[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5586[iVar2] = 0;
				}
				if (!func_235(&uVar244, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_39[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar244[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_39[iVar2] = -1;
				}
				if (bVar7)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9142[iVar2 /*5*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar249[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9142[iVar2 /*5*/][0] = -1;
				}
				if (bVar8)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9142[iVar2 /*5*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar254[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9142[iVar2 /*5*/][1] = -1;
				}
				if (bVar9)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9142[iVar2 /*5*/][2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar259[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9142[iVar2 /*5*/][2] = -1;
				}
				if (bVar10)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9142[iVar2 /*5*/][3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar264[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9142[iVar2 /*5*/][3] = -1;
				}
				if (bVar11)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9246[iVar2 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar294[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9246[iVar2 /*4*/][0] = -1;
				}
				if (bVar12)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9246[iVar2 /*4*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar299[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9246[iVar2 /*4*/][1] = -1;
				}
				if (bVar13)
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9246[iVar2 /*4*/][2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar304[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9246[iVar2 /*4*/][2] = -1;
				}
				if (!func_235(&uVar309, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9315[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar309[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9315[iVar2] = 0;
				}
				if (!func_235(&uVar314, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9333[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar314[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9333[iVar2] = -1;
				}
				if (!func_235(&uVar319, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9351[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar319[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9351[iVar2] = 0;
				}
				iVar325 = Global_4456448.f_104[iVar1 /*10693*/].f_59;
				while (iVar325 <= 31)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_104[iVar1 /*10693*/].f_9315[iVar2], iVar325))
					{
						GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_104[iVar1 /*10693*/].f_9315[iVar2]), iVar325);
					}
					iVar325++;
				}
				if (!func_235(&uVar284, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9750[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar284[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9750[iVar2] = 0;
				}
				if (!func_235(&uVar289, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10314[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar289[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_10314[iVar2] = 0;
				}
				if (!func_235(&uVar179, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5098[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar179[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5098[iVar2] = -1;
				}
				if (!func_235(&uVar184, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5134[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar184[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5134[iVar2] = -1f;
				}
				if (!func_235(&uVar189, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5152[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar189[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5152[iVar2] = -1f;
				}
				if (!func_235(&uVar194, 3, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5170[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar194[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5170[iVar2] = 1f;
				}
				if (!func_235(&uVar199, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5208[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar199[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5208[iVar2] = 0;
				}
				if (!func_235(&uVar204, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5190[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar204[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_5190[iVar2] = 0;
				}
				if (!func_235(&uVar209, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9621[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar209[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9621[iVar2] = 0;
				}
				if (!func_235(&uVar214, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9639[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar214[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9639[iVar2] = -1;
				}
				if (!func_235(&uVar219, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9657[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar219[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9657[iVar2] = 0;
				}
				if (!func_235(&uVar269, 2, iVar1, iVar2))
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9228[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar269[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_104[iVar1 /*10693*/].f_9228[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_243(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
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
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	var uVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	var uVar75[10];
	int iVar86;
	char[] cVar87[8];
	
	iVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "endcon");
	iVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "numpt");
	iVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "ptint");
	iVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "pptint");
	bVar7 = true;
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mnumpt") != 2)
	{
		bVar7 = false;
		iVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "mnumpt");
	}
	iVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tcp");
	iVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tcr");
	iVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "abits");
	iVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "sdobs");
	iVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "edobs");
	iVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "dogps");
	iVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "teamv");
	iVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "ireveh");
	iVar16 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "teamrvc");
	iVar17 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "teamrvbh");
	iVar18 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "teamrvcs");
	iVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "teamrvp");
	iVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "mcvbs");
	iVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "mcobs");
	iVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "mcpbs");
	iVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "mcgbs");
	iVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "rpgbs");
	iVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "mcpbs1");
	iVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "mcpbs2");
	iVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "mcpbs3");
	iVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "mcgbs1");
	iVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "mcgbs2");
	iVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "mcgbs3");
	iVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "rpgbs1");
	iVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "rpgbs2");
	iVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "rpgbs3");
	iVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "inpts");
	iVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "ldsf1");
	iVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "ldsf2");
	iVar37 = 1;
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tehlh") == 7)
	{
		iVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tehlh");
		iVar37 = 1;
	}
	else
	{
		iVar37 = 0;
	}
	iVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tehrn");
	iVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "spsy1");
	iVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "spsy2");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tenms");
	iVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tmwntd");
	iVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tmfrcwp");
	iVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "csttn");
	iVar46 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "cstrn");
	iVar47 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "nrl");
	iVar48 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tstrt");
	iVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tstop");
	uVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "sms");
	iVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tblpv1");
	iVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tblpv2");
	iVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tblpv3");
	iVar54 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tblpv4");
	iVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "thudv1");
	iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "thudv2");
	iVar57 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "thudv3");
	iVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "thudv4");
	iVar59 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "thlb1");
	iVar60 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "thlb2");
	iVar61 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "thlb3");
	iVar62 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "thlb4");
	iVar63 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "rcst1q");
	iVar64 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "rcst2q");
	iVar65 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "rcst3q");
	iVar66 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "rcst4q");
	iVar67 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tvmt");
	iVar68 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tvma");
	iVar69 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tvmac");
	iVar70 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tvmet");
	iVar71 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tvmBomb");
	iVar72 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tvmspoil");
	iVar73 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tvmCMO1");
	iVar74 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "tvmCMO2");
	iVar1 = 0;
	while (iVar1 <= (DATAFILE::_ARRAY_VALUE_GET_SIZE(uVar50) - 1))
	{
		uVar75[iVar1] = DATAFILE::_ARRAY_VALUE_GET_OBJECT(uVar50, iVar1);
		Global_4456448.f_43771[iVar1 /*39*/] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "team");
		Global_4456448.f_43771[iVar1 /*39*/].f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "rule");
		Global_4456448.f_43771[iVar1 /*39*/].f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "time");
		iVar86 = 0;
		while (iVar86 <= 1)
		{
			StringCopy(&cVar87, "txt", 8);
			StringIntConCat(&cVar87, iVar86, 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar75[iVar1], &cVar87) == 4)
			{
				StringCopy(&(Global_4456448.f_43771[iVar1 /*39*/].f_5[iVar86 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(uVar75[iVar1], &cVar87), 64);
			}
			iVar86++;
		}
		Global_4456448.f_43771[iVar1 /*39*/].f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "delay");
		Global_4456448.f_43771[iVar1 /*39*/].f_38 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "sndall");
		Global_4456448.f_43771[iVar1 /*39*/].f_3 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "ptsreq");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_40 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar14 != 0)
			{
				uVar2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar14, iVar1);
				Global_4456448.f_55585[iVar1] = uVar2;
			}
			else
			{
				Global_4456448.f_55585[iVar1] = 0;
			}
			if (iVar15 != 0)
			{
				Global_4456448.f_42887[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar15, iVar1);
			}
			else
			{
				Global_4456448.f_42887[iVar1] = -1;
			}
			if (iVar16 != 0)
			{
				Global_4456448.f_55633[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar16, iVar1);
			}
			else
			{
				Global_4456448.f_55633[iVar1] = -1;
			}
			if (iVar17 != 0)
			{
				Global_4456448.f_55648[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar17, iVar1);
			}
			else
			{
				Global_4456448.f_55648[iVar1] = 1001;
			}
			if (iVar18 != 0)
			{
				Global_4456448.f_55643[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar18, iVar1);
			}
			else
			{
				Global_4456448.f_55643[iVar1] = -1;
			}
			if (iVar19 != 0)
			{
				Global_4456448.f_55628[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar19, iVar1);
			}
			else
			{
				Global_4456448.f_55628[iVar1] = 0;
			}
			if (iVar3 != 0)
			{
				Global_4456448.f_42[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar3, iVar1);
			}
			if (Global_4456448.f_42[iVar1] < 1)
			{
				Global_4456448.f_42[iVar1] = 1;
			}
			if (iVar4 != 0)
			{
				if ((func_70(Global_4456448.f_152990) && Global_262145.f_20582) && !Global_1645163)
				{
					Global_4456448.f_44624[iVar1] = 4;
				}
				else
				{
					Global_4456448.f_44624[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar4, iVar1);
				}
			}
			else
			{
				Global_4456448.f_44624[iVar1] = -1;
			}
			if (iVar5 != 0)
			{
				if ((func_70(Global_4456448.f_152990) && Global_262145.f_20582) && !Global_1645163)
				{
					Global_4456448.f_44629[iVar1] = 1;
				}
				else
				{
					Global_4456448.f_44629[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar5, iVar1);
				}
			}
			else
			{
				Global_4456448.f_44629[iVar1] = -1;
			}
			if (bVar7)
			{
				Global_4456448.f_47[iVar1] = 0;
			}
			else
			{
				if (iVar6 != 0)
				{
					Global_4456448.f_47[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar1);
				}
				if (Global_4456448.f_47[iVar1] < 0)
				{
					Global_4456448.f_47[iVar1] = 0;
				}
			}
			if (iVar8 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar8, iVar1) };
			}
			if (iVar9 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_7 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar9, iVar1) };
			}
			if (iVar10 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_1238 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_1239 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_1240 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_1241 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar13, iVar1);
			}
			if ((iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar1) == 2) && iVar35 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_696 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_696 = 0;
			}
			if ((iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar1) == 2) && iVar36 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_697 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_697 = 0;
			}
			if (iVar20 != 0)
			{
				Global_4456448.f_43761[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar1);
			}
			if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar1) == 2)
			{
				Global_4456448.f_43766[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar21, iVar1);
			}
			else
			{
				Global_4456448.f_43766[iVar1] = 0;
			}
			if (iVar22 != 0)
			{
				Global_4456448.f_43744[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar22, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_4456448.f_43744[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_4456448.f_43744[iVar1 /*4*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_4456448.f_43744[iVar1 /*4*/][2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_4456448.f_43727[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar23, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_4456448.f_43727[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_4456448.f_43727[iVar1 /*4*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar29, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_4456448.f_43727[iVar1 /*4*/][2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar30, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_4456448.f_43710[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar24, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_4456448.f_43710[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_4456448.f_43710[iVar1 /*4*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_4456448.f_43710[iVar1 /*4*/][2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_4456448.f_42928[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar1);
			}
			if (iVar37 && iVar38 != 0)
			{
				Global_4456448.f_42960[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar1);
			}
			else
			{
				Global_4456448.f_42960[iVar1] = 3;
			}
			if (iVar39 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar39, iVar1) == 2)
			{
				Global_4456448.f_42965[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar1);
			}
			if (iVar67 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar67, iVar1) == 2)
			{
				Global_4456448.f_42980[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar67, iVar1);
			}
			if (iVar68 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar68, iVar1) == 2)
			{
				Global_4456448.f_42985[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar68, iVar1);
			}
			if (iVar69 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar69, iVar1) == 2)
			{
				Global_4456448.f_42990[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar69, iVar1);
			}
			if (iVar70 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar70, iVar1) == 2)
			{
				Global_4456448.f_42995[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar70, iVar1);
			}
			if (iVar71 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar71, iVar1) == 2)
			{
				Global_4456448.f_43010[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar71, iVar1);
			}
			if (iVar72 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar72, iVar1) == 2)
			{
				Global_4456448.f_43015[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar72, iVar1);
			}
			if (iVar73 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar73, iVar1) == 2)
			{
				Global_4456448.f_43000[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar73, iVar1);
			}
			if (iVar74 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar74, iVar1) == 2)
			{
				Global_4456448.f_43005[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar74, iVar1);
			}
			if (iVar40 != 0)
			{
				StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_9109[0 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar40, iVar1), 64);
			}
			if (iVar41 != 0)
			{
				StringCopy(&(Global_4456448.f_104[iVar1 /*10693*/].f_9109[1 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar41, iVar1), 64);
			}
			if (iVar42 != 0)
			{
				Global_4456448.f_42933[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar1);
			}
			if (iVar43 != 0)
			{
				Global_4456448.f_42970[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar1);
			}
			if (iVar44 != 0)
			{
				Global_4456448.f_42975[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar1);
			}
			if (iVar45 != 0)
			{
				StringCopy(&(Global_4456448.f_42938[iVar1 /*4*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar45, iVar1), 16);
			}
			if (iVar46 != 0)
			{
				Global_4456448.f_42955[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar1);
			}
			if ((iVar48 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar48, iVar1) == 2) && iVar48 != 0)
			{
				Global_4456448.f_136476[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar1);
			}
			if ((iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar1) == 2) && iVar49 != 0)
			{
				Global_4456448.f_136481[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar1);
			}
			if (iVar47 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_59 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar47, iVar1);
			}
			if (iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5795 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar51, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5795 = 0;
			}
			if (iVar52 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar52, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5796 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar52, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5796 = 0;
			}
			if (iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5797 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar53, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5797 = 0;
			}
			if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5798 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar54, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5798 = 0;
			}
			if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5799 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar55, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5799 = 0;
			}
			if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5800 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5800 = 0;
			}
			if (iVar57 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar57, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5801 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar57, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5801 = 0;
			}
			if (iVar58 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar58, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5802 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar58, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5802 = 0;
			}
			if (iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5803 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar59, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5803 = 0;
			}
			if (iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5804 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar60, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5804 = 0;
			}
			if (iVar61 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar61, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5805 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar61, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5805 = 0;
			}
			if (iVar62 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar62, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5806 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar62, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5806 = 0;
			}
			if (iVar63 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar63, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5807 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar63, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5807 = 0;
			}
			if (iVar64 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar64, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5808 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar64, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5808 = 0;
			}
			if (iVar65 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar65, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5809 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar65, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5809 = 0;
			}
			if (iVar66 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar66, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5810 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar66, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5810 = 0;
			}
		}
		iVar1++;
	}
}

void func_244(var uParam0)
{
	var uVar0;
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
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	var uVar61;
	int iVar62;
	var uVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "endcon");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "stpos");
	iVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "delr");
	iVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "epos");
	iVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "endr");
	iVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "vareapos");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "arear");
	iVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "time");
	iVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "plkr");
	iVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "pekr");
	iVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "vhkr");
	iVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "obkr");
	iVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "dr");
	iVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "pedr");
	iVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "vedr");
	iVar16 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "obdr");
	iVar17 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "lwmbs");
	iVar18 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "flmbs");
	iVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "vdoibs");
	iVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "vdohu");
	iVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "tmbts");
	iVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "tmbt2");
	iVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "tmbt3");
	iVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "tmbt4");
	iVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "swmbs");
	iVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "gbmbs");
	iVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "pcbd");
	iVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "lwbs");
	iVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "wodia");
	iVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "repcr");
	iVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "woabs");
	iVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "fwoabs");
	iVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "fail");
	iVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "vehrsp");
	iVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "rilmvbs");
	iVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "spit");
	iVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "pglr");
	iVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "nora");
	iVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "mtlr");
	iVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "mslr");
	iVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "mlpl");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "mlpd");
	iVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "mlpm");
	iVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "plyl");
	iVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "shd");
	iVar46 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "spar");
	iVar47 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "2spar");
	iVar48 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "boud");
	iVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "bla");
	iVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "wla");
	iVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "patm");
	iVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "bnd2");
	iVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "bla2");
	iVar54 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "wla2");
	iVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "pat2");
	iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "inv");
	iVar57 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "inv2");
	iVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "inv3");
	iVar59 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "invsw");
	iVar60 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "invtm");
	uVar61 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "invrl");
	iVar62 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "inv2tm");
	uVar63 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "inv2rl");
	iVar64 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "sinv");
	iVar65 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "sinv2");
	iVar66 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "sinv3");
	iVar67 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "minv");
	iVar68 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "mmsw");
	iVar69 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "mmsw2");
	iVar70 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "minv2");
	iVar71 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "minv3");
	iVar72 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "ppk");
	iVar73 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "mts");
	iVar74 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "spwia");
	iVar75 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "2spwia");
	iVar76 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "pcl");
	iVar77 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "ocl");
	iVar78 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "arrt");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_40 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar2 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar2, iVar1) };
			}
			if (iVar17 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4452 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar17, iVar1);
			}
			if (iVar18 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4491 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5188 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar19, iVar1);
			}
			if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5189 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5189 = 0;
			}
			if (iVar21 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5604 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar21, iVar1);
			}
			if (iVar22 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5605 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5606 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5607 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4454 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4565 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5811 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4451 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4453 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar31, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4049 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar29, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4050 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar30, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4492 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5812 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5813 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar1);
			}
			if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5832 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_5832 = 0;
			}
			if (iVar36 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_9747 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar1);
			}
			if (iVar37 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_9748 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_9749 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar1);
			}
			if (iVar39 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar1);
			}
			if (iVar40 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar40, iVar1);
			}
			if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar41, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_34 = 0;
			}
			if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_35 = 0;
			}
			if (iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_36 = 0;
			}
			if (iVar44 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar1);
			}
			if (iVar46 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4044 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar1);
			}
			if (iVar47 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4046 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar47, iVar1);
			}
			if (iVar48 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4042 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar1);
			}
			if (iVar49 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4041 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar1);
			}
			if ((iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar1) == 2) && iVar51 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4043 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar51, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4043 = 60000;
			}
			if (iVar52 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar52, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4304 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar52, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4304 = 0;
			}
			if (iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4303 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar53, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4303 = 0;
			}
			if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4305 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar55, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4305 = 60000;
			}
			if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4306 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar54, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4306 = 0;
			}
			if (iVar56 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar1);
			}
			if (iVar57 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_62 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar57, iVar1);
			}
			if (iVar58 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_63 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar58, iVar1);
			}
			if (iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_243 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar59, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_243 = -1;
			}
			if (iVar68 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar68, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_244 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar68, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_244 = -1;
			}
			if (iVar69 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar69, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_245 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar69, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_245 = -1;
			}
			if ((iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar1) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar61, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_428 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar60, iVar1);
				Global_4456448.f_104[iVar1 /*10693*/].f_429 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar61, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_428 = -1;
				Global_4456448.f_104[iVar1 /*10693*/].f_429 = -1;
			}
			if (iVar64 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_246 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar64, iVar1);
			}
			if (iVar65 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_247 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar65, iVar1);
			}
			if (iVar66 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_248 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar66, iVar1);
			}
			if ((iVar62 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar62, iVar1) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar63, iVar1) == 2)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_612 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar62, iVar1);
				Global_4456448.f_104[iVar1 /*10693*/].f_613 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar63, iVar1);
			}
			else
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_612 = -1;
				Global_4456448.f_104[iVar1 /*10693*/].f_613 = -1;
			}
			if (iVar67 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_430 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar67, iVar1);
			}
			if (iVar70 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_431 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar70, iVar1);
			}
			if (iVar71 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_432 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar71, iVar1);
			}
			if (iVar72 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar72, iVar1);
			}
			if (iVar73 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar73, iVar1);
			}
			if (iVar74 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4045 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar74, iVar1);
			}
			if (iVar75 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4047 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar75, iVar1);
			}
			if (iVar50 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_4048 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar50, iVar1);
			}
			if (iVar45 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar45, iVar1);
			}
			if (iVar76 != 0)
			{
				Global_4456448.f_42877[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar76, iVar1);
			}
			if (iVar77 != 0)
			{
				Global_4456448.f_42882[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar77, iVar1);
			}
			if (iVar78 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar78, iVar1);
			}
			if (iVar3 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar3, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_15 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar4, iVar1) };
			}
			if (iVar5 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar5, iVar1);
			}
			if (iVar6 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_19 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar6, iVar1) };
			}
			if (iVar7 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar1);
			}
			if (iVar8 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_4456448.f_104[iVar1 /*10693*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar16, iVar1);
			}
		}
		iVar1++;
	}
}

void func_245(var uParam0)
{
	var uVar0;
	
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uParam0, "rule");
	Global_4456448.f_60 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "time");
	Global_4456448.f_62 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "score");
	Global_4456448.f_73 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "prule");
	Global_4456448.f_76666 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "ptyp");
	Global_4456448.f_63 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "blip");
	Global_4456448.f_65 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "tag");
	Global_4456448.f_66 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "voice");
	Global_4456448.f_67 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "radio");
	Global_4456448.f_68 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "aim");
	Global_4456448.f_55664 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pol");
	Global_4456448.f_55 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "liv");
	Global_4456448.f_53222 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "traf");
	Global_4456448.f_131862 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "tod");
	Global_4456448.f_131846 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "weth");
	Global_4456448.f_131864 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "apeds");
	Global_4456448.f_131863 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "vehd");
	Global_4456448.f_71 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "vdm");
	Global_4456448.f_69 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "tdm");
	Global_4456448.f_42877[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pcr");
	Global_4456448.f_42882[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "ocr");
}

void func_246(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar8;
	vector3 vVar9[24];
	int iVar15;
	vector3 vVar16[24];
	vector3 vVar22[24];
	char cVar28[16];
	int iVar32;
	int iVar33;
	char[] cVar34[8];
	int iVar36;
	int iVar37;
	char cVar38[16];
	int iVar42;
	char cVar43[16];
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	var uVar55;
	int iVar56;
	int iVar57;
	var uVar58;
	int iVar59;
	var uVar60;
	float fVar61;
	int iVar62;
	int iVar63;
	var uVar64;
	int iVar65;
	char cVar66[16];
	char cVar70[16];
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	
	iVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uParam0, "gen");
	Global_4456448 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "type");
	Global_4456448.f_9 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(iVar0, "ngjob");
	GAMEPLAY::IS_BIT_SET(Global_4456448.f_7, 0);
	bVar1 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(iVar0, "photo");
	if (bVar1)
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_7), 0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_7), 0);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ivm") == 2)
	{
		Global_4456448.f_55584 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ivm");
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "fixcam") == 2)
	{
		Global_4456448.f_136489 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "fixcam");
	}
	else
	{
		Global_4456448.f_136489 = 0;
	}
	Global_4456448.f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "optbs");
	Global_4456448.f_86 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "camo") };
	Global_4456448.f_89 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "camro") };
	Global_4456448.f_80 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "cam") };
	Global_4456448.f_99 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "camh");
	Global_4456448.f_92 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "camf") };
	Global_4456448.f_95 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "camfr") };
	Global_4456448.f_98 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "camfv");
	Global_4456448.f_130757 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "dmbds");
	Global_4456448.f_74 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "phpo") };
	StringCopy(&(Global_4456448.f_130940[0 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "szTag"), 64);
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "chksfx") == 1)
	{
		Global_4456448.f_50189 = 1;
	}
	else
	{
		Global_4456448.f_50189 = 0;
	}
	StringCopy(&cVar4, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			StringCopy(&cVar4, "nrcid", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			StringCopy(&(Global_4456448.f_131075[iVar2 /*6*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar4), 24);
			iVar2++;
		}
	}
	if (func_133())
	{
		Global_4456448.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "subtype");
		Global_4456448.f_136486 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "testcomplete");
		if (((Global_4456448.f_2 == 6 || Global_4456448.f_2 == 5) || Global_4456448.f_2 == 4) || Global_4456448.f_2 == 9)
		{
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "teamBal") == 2)
			{
				Global_4456448.f_136488 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "numRounds");
			}
			else
			{
				Global_4456448.f_136488 = 1;
			}
			if (Global_4456448.f_136488 < 1)
			{
				Global_4456448.f_136488 = 1;
			}
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "teamBal") == 2)
		{
			Global_4456448.f_136490 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "teamBal");
		}
		else
		{
			Global_4456448.f_136490 = 5;
		}
	}
	Global_4456448.f_152990 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "adverm");
	Global_4456448.f_136487 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "testcomplete");
	Global_4456448.f_61 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "endtype");
	Global_4456448.f_11 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs");
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ovrpc") == 2)
	{
		Global_4456448.f_87006 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ovrpc");
	}
	else
	{
		Global_4456448.f_87006 = -1;
	}
	Global_4456448.f_12 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs2");
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "menubs3") == 2)
	{
		Global_4456448.f_13 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs3");
	}
	else
	{
		Global_4456448.f_13 = 0;
	}
	Global_4456448.f_14 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs4");
	Global_4456448.f_15 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs5");
	Global_4456448.f_16 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs6");
	Global_4456448.f_17 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs7");
	Global_4456448.f_18 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs8");
	Global_4456448.f_19 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs9");
	Global_4456448.f_20 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs10");
	Global_4456448.f_21 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs11");
	Global_4456448.f_22 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs12");
	Global_4456448.f_23 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs13");
	Global_4456448.f_24 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs14");
	Global_4456448.f_25 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs15");
	Global_4456448.f_26 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs16");
	Global_4456448.f_27 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs17");
	Global_4456448.f_153982 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(iVar0, "alrtLocal");
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "menubs18") == 2)
	{
		Global_4456448.f_28 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs18");
	}
	else
	{
		Global_4456448.f_28 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "menubs19") == 2)
	{
		Global_4456448.f_29 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs19");
	}
	else
	{
		Global_4456448.f_29 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "menubs20") == 2)
	{
		Global_4456448.f_30 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs20");
	}
	else
	{
		Global_4456448.f_30 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "menubs21") == 2)
	{
		Global_4456448.f_31 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs21");
	}
	else
	{
		Global_4456448.f_31 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "menubs22") == 2)
	{
		Global_4456448.f_32 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs22");
	}
	else
	{
		Global_4456448.f_32 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "menubs23") == 2)
	{
		Global_4456448.f_33 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs23");
	}
	else
	{
		Global_4456448.f_33 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cordmbs") == 2)
	{
		Global_4456448.f_154299 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cordmbs");
	}
	else
	{
		Global_4456448.f_154299 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "iplyli") == 2)
	{
		Global_4456448.f_56 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "iplyli");
	}
	else
	{
		Global_4456448.f_56 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ptbNBL") == 2)
	{
		Global_4456448.f_154248 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ptbNBL");
	}
	else
	{
		Global_4456448.f_154248 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ptbDrg") == 3)
	{
		Global_4456448.f_154249 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "ptbDrg");
	}
	else
	{
		Global_4456448.f_154249 = 2f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csts") == 3)
	{
		Global_4456448.f_154294 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "csts");
	}
	else
	{
		Global_4456448.f_154294 = 1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rmlo") == 2)
	{
		Global_4456448.f_154295 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rmlo");
	}
	else
	{
		Global_4456448.f_154295 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mxlap") == 2)
	{
		Global_4456448.f_154296 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mxlap");
	}
	else
	{
		Global_4456448.f_154296 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "aghd") == 3)
	{
		Global_4456448.f_154297 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "aghd");
	}
	else
	{
		Global_4456448.f_154297 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "agt") == 2)
	{
		Global_4456448.f_154298 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "agt");
	}
	else
	{
		Global_4456448.f_154298 = 0;
	}
	iVar8 = 0;
	while (iVar8 <= 4)
	{
		StringCopy(&cVar9, "dmHTS", 24);
		StringIntConCat(&cVar9, iVar8, 24);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 4)
		{
			StringCopy(&(Global_4456448.f_153501[iVar8 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar9), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_153501[iVar8 /*16*/]), "", 64);
		}
		iVar15 = 0;
		while (iVar15 <= 3)
		{
			StringCopy(&cVar16, "dmHT", 24);
			StringIntConCat(&cVar16, iVar8, 24);
			StringIntConCat(&cVar16, iVar15, 24);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar16) == 4)
			{
				StringCopy(&(Global_4456448.f_153582[iVar8 /*65*/][iVar15 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar16), 64);
			}
			else
			{
				StringCopy(&(Global_4456448.f_153582[iVar8 /*65*/][iVar15 /*16*/]), "", 64);
			}
			iVar15++;
		}
		StringCopy(&cVar22, "dmHTD", 24);
		StringIntConCat(&cVar22, iVar8, 24);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar22) == 2)
		{
			Global_4456448.f_153908[iVar8] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar22);
		}
		else
		{
			Global_4456448.f_153908[iVar8] = -1;
		}
		iVar8++;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_22, 13))
	{
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "trstim") == 2)
		{
			Global_4456448.f_153044 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "trstim");
		}
		else
		{
			Global_4456448.f_153044 = 10;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "trerad") == 3)
		{
			Global_4456448.f_153045 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "trerad");
		}
		else
		{
			Global_4456448.f_153045 = 5f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "trsstim") == 2)
		{
			Global_4456448.f_153046 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "trsstim");
		}
		else
		{
			Global_4456448.f_153046 = 10;
		}
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "iopcd") == 2)
	{
		Global_4456448.f_152992 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "iopcd");
	}
	else
	{
		Global_4456448.f_152992 = -1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 31))
	{
	}
	Global_4456448.f_16 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs6");
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_16, 16))
	{
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rcvs") == 2)
	{
		Global_4456448.f_43708 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rcvs");
	}
	else
	{
		Global_4456448.f_43708 = 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_18, 25))
	{
		Global_4456448.f_43708 = 1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hptfb") == 2)
	{
		Global_4456448.f_103 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hptfb");
	}
	else
	{
		Global_4456448.f_103 = 0;
	}
	iVar32 = 0;
	while (iVar32 <= 4)
	{
		StringCopy(&cVar28, "specobjt", 16);
		StringIntConCat(&cVar28, iVar32, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 4)
		{
			StringCopy(&(Global_4456448.f_154115[iVar32 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar28), 64);
		}
		else
		{
			IntToString(&(Global_4456448.f_154115[iVar32 /*16*/]), 0, 64);
		}
		iVar32++;
	}
	Global_4456448.f_154303 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "turammo");
	Global_4456448.f_154304 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "turgudm");
	Global_4456448.f_55658 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "teamvbs");
	Global_4456448.f_34 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cncmbs");
	Global_4456448.f_149505 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "todhr");
	Global_4456448.f_149506 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "todmn");
	Global_4456448.f_10 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cmpts");
	Global_4456448.f_59 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rank");
	Global_4456448.f_59 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rank");
	Global_4456448.f_131866 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "charcon");
	Global_4456448.f_131866 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "char");
	Global_4456448.f_131867 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "xpr");
	Global_4456448.f_131868 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cshr");
	Global_4456448.f_131872 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ctsc");
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecsbs") == 2)
	{
		Global_4456448.f_146289.f_16 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ecsbs");
	}
	else
	{
		Global_4456448.f_146289.f_16 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecsbs2") == 2)
	{
		Global_4456448.f_146289.f_17 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ecsbs2");
	}
	else
	{
		Global_4456448.f_146289.f_17 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecsrng") == 2)
	{
		Global_4456448.f_146289.f_62 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ecsrng");
	}
	else
	{
		Global_4456448.f_146289.f_62 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecscp") == 5)
	{
		Global_4456448.f_146289.f_54 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "ecscp") };
	}
	else
	{
		Global_4456448.f_146289.f_54 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecscr") == 3)
	{
		Global_4456448.f_146289.f_60 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "ecscr");
	}
	else
	{
		Global_4456448.f_146289.f_60 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecscs") == 5)
	{
		Global_4456448.f_146289.f_57 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "ecscs") };
	}
	else
	{
		Global_4456448.f_146289.f_57 = { 0f, 0f, 0f };
	}
	iVar33 = 0;
	while (iVar33 <= 29)
	{
		StringCopy(&cVar34, "ecein", 8);
		StringIntConCat(&cVar34, iVar33, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_146289.f_116[iVar33 /*11*/].f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_146289.f_116[iVar33 /*11*/].f_1 = -1;
		}
		StringCopy(&cVar34, "ecetp", 8);
		StringIntConCat(&cVar34, iVar33, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_146289.f_116[iVar33 /*11*/] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_146289.f_116[iVar33 /*11*/] = -1;
		}
		StringCopy(&cVar34, "ecehn", 8);
		StringIntConCat(&cVar34, iVar33, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_146289.f_116[iVar33 /*11*/].f_3), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 32);
		}
		else
		{
			StringCopy(&(Global_4456448.f_146289.f_116[iVar33 /*11*/].f_3), "", 32);
		}
		iVar33++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "clbscr") == 2)
	{
		Global_4456448.f_147470 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "clbscr");
	}
	else
	{
		Global_4456448.f_147470 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "disar") == 2)
	{
		Global_4456448.f_147471 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "disar");
	}
	else
	{
		Global_4456448.f_147471 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rlopt") == 2)
	{
		Global_4456448.f_147169 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rlopt");
	}
	else
	{
		Global_4456448.f_147169 = 0;
	}
	iVar36 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "gpmn");
	Global_4456448.f_102 = iVar36;
	iVar37 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "musx");
	if (iVar37 != -1)
	{
		Global_4456448.f_131861 = iVar37;
	}
	else
	{
		Global_4456448.f_131861 = -1;
	}
	Global_4456448.f_131860 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ausc");
	Global_4456448.f_36 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "minNu");
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "newausc") == 2)
	{
		Global_4456448.f_131859 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "newausc");
	}
	else
	{
		Global_4456448.f_131859 = -1;
	}
	Global_4456448.f_35 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "num");
	if (Global_4456448.f_35 == -1)
	{
		Global_4456448.f_35 = 30;
	}
	Global_4456448.f_37 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "time");
	Global_4456448.f_77 = { func_87(iVar0) };
	StringCopy(&cVar38, "apart", 16);
	Global_4456448.f_146759 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar38) };
	Global_4456448.f_146773 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "apwbs");
	Global_4456448.f_146762 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wrploc");
	Global_4456448.f_146777 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twrst");
	Global_4456448.f_146774 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "iplop");
	Global_4456448.f_146775 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "intop");
	Global_4456448.f_146776 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "intop2");
	Global_4456448.f_146778 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnTh");
	Global_4456448.f_146778.f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnTy");
	Global_4456448.f_146778.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnLi");
	Global_4456448.f_146778.f_29[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnBnA");
	Global_4456448.f_146778.f_29[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnBnB");
	Global_4456448.f_146778.f_29[2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnBnC");
	Global_4456448.f_146778.f_29[3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnBnD");
	Global_4456448.f_146778.f_34[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnCrA");
	Global_4456448.f_146778.f_34[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnCrB");
	Global_4456448.f_146778.f_34[2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnCrC");
	Global_4456448.f_146778.f_34[3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnCrD");
	Global_4456448.f_146778.f_3 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnRnL");
	iVar42 = 0;
	while (iVar42 <= 3)
	{
		StringCopy(&cVar43, "anf1BS", 16);
		StringIntConCat(&cVar43, iVar42, 16);
		Global_4456448.f_146778.f_4[iVar42] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar43);
		StringCopy(&cVar43, "anf2BS", 16);
		StringIntConCat(&cVar43, iVar42, 16);
		Global_4456448.f_146778.f_9[iVar42] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar43);
		StringCopy(&cVar43, "anf3BS", 16);
		StringIntConCat(&cVar43, iVar42, 16);
		Global_4456448.f_146778.f_14[iVar42] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar43);
		StringCopy(&cVar43, "anf4BS", 16);
		StringIntConCat(&cVar43, iVar42, 16);
		Global_4456448.f_146778.f_19[iVar42] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar43);
		StringCopy(&cVar43, "anfMBS", 16);
		StringIntConCat(&cVar43, iVar42, 16);
		Global_4456448.f_146778.f_24[iVar42] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar43);
		iVar42++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "arnVMN") == 2)
	{
		Global_4456448.f_146817 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnVMN");
	}
	else
	{
		Global_4456448.f_146817 = 5;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "copteam") == 2)
	{
		Global_4456448.f_55665 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "copteam");
	}
	else
	{
		Global_4456448.f_55665 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "pttl") == 4)
	{
		StringCopy(&(Global_4456448.f_131091), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_4456448.f_131091), "", 64);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "blmpmsg") == 4)
	{
		StringCopy(&(Global_4456448.f_153469), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "blmpmsg"), 64);
	}
	else
	{
		StringCopy(&(Global_4456448.f_153469), "", 64);
	}
	iVar47 = 0;
	while (iVar47 <= 25)
	{
		StringCopy(&cVar34, "dmvft", 8);
		StringIntConCat(&cVar34, iVar47, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_53751[iVar47] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_53751[iVar47] = 0;
		}
		iVar47++;
	}
	iVar36 = 0;
	while (iVar36 <= 3)
	{
		iVar48 = 0;
		while (iVar48 <= 1)
		{
			StringCopy(&cVar34, "t", 8);
			StringIntConCat(&cVar34, iVar36, 8);
			StringConCat(&cVar34, "fs", 8);
			StringIntConCat(&cVar34, iVar48, 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
			{
				StringCopy(&(Global_4456448.f_150110[iVar36 /*33*/][iVar48 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 64);
			}
			else
			{
				StringCopy(&(Global_4456448.f_150110[iVar36 /*33*/][iVar48 /*16*/]), "", 64);
			}
			iVar48++;
		}
		iVar48 = 0;
		while (iVar48 <= 25)
		{
			iVar49 = 0;
			while (iVar49 <= 2)
			{
				StringCopy(&cVar34, "t", 8);
				StringIntConCat(&cVar34, iVar36, 8);
				StringConCat(&cVar34, "vl", 8);
				StringIntConCat(&cVar34, iVar48, 8);
				if (iVar49 > 0)
				{
					StringIntConCat(&cVar34, iVar49, 8);
				}
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
				{
					Global_4456448.f_53320[iVar36 /*105*/][iVar48 /*4*/][iVar49] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
				}
				else
				{
					Global_4456448.f_53320[iVar36 /*105*/][iVar48 /*4*/][iVar49] = 0;
				}
				iVar49++;
			}
			iVar48++;
		}
		StringCopy(&cVar34, "t", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		StringConCat(&cVar34, "dvl", 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_53741[iVar36] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_53741[iVar36] = 0;
		}
		StringCopy(&cVar34, "t", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		StringConCat(&cVar34, "dv", 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_53746[iVar36] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_53746[iVar36] = 0;
		}
		iVar49 = 0;
		while (iVar49 <= 3)
		{
			iVar48 = 0;
			while (iVar48 <= 25)
			{
				iVar50 = 0;
				while (iVar50 <= 2)
				{
					StringCopy(&cVar28, "t", 16);
					StringIntConCat(&cVar28, iVar36, 16);
					StringIntConCat(&cVar28, iVar49, 16);
					StringConCat(&cVar28, "rv", 16);
					StringIntConCat(&cVar28, iVar48, 16);
					if (iVar50 > 0)
					{
						StringIntConCat(&cVar28, iVar50, 16);
					}
					if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 2)
					{
						Global_4456448.f_53778[iVar36 /*421*/][iVar49 /*105*/][iVar48 /*4*/][iVar50] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar28);
					}
					else
					{
						Global_4456448.f_53778[iVar36 /*421*/][iVar49 /*105*/][iVar48 /*4*/][iVar50] = 0;
					}
					iVar50++;
				}
				iVar48++;
			}
			StringCopy(&cVar34, "t", 8);
			StringIntConCat(&cVar34, iVar36, 8);
			StringIntConCat(&cVar34, iVar49, 8);
			StringConCat(&cVar34, "dvl", 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
			{
				Global_4456448.f_55463[iVar36 /*5*/][iVar49] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
			}
			else
			{
				Global_4456448.f_55463[iVar36 /*5*/][iVar49] = 0;
			}
			StringCopy(&cVar34, "t", 8);
			StringIntConCat(&cVar34, iVar36, 8);
			StringIntConCat(&cVar34, iVar49, 8);
			StringConCat(&cVar34, "dv", 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
			{
				Global_4456448.f_55484[iVar36 /*5*/][iVar49] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
			}
			else
			{
				Global_4456448.f_55484[iVar36 /*5*/][iVar49] = 0;
			}
			iVar49++;
		}
		iVar51 = 0;
		while (iVar51 < 26)
		{
			Global_1685168[iVar51] = -1;
			iVar52 = func_204(iVar51);
			while (iVar52 <= 31)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_53320[iVar36 /*105*/][iVar51 /*4*/][func_185(iVar52)], iVar52))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_53320[iVar36 /*105*/][iVar51 /*4*/][func_185(iVar52)]), iVar52);
					if (Global_4456448.f_53741[iVar36] == iVar51 && Global_4456448.f_53746[iVar36] == iVar52)
					{
						Global_4456448.f_53741[iVar36] = 0;
						Global_4456448.f_53746[iVar36] = 0;
					}
				}
				iVar53 = 0;
				while (iVar53 < 4)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_53778[iVar36 /*421*/][iVar53 /*105*/][iVar51 /*4*/][func_185(iVar52)], iVar52))
					{
						GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_53778[iVar36 /*421*/][iVar53 /*105*/][iVar51 /*4*/][func_185(iVar52)]), iVar52);
						if (Global_4456448.f_55463[iVar36 /*5*/][iVar53] == iVar51 && Global_4456448.f_55484[iVar36 /*5*/][iVar53] == iVar52)
						{
							Global_4456448.f_55463[iVar36 /*5*/][iVar53] = 0;
							Global_4456448.f_55484[iVar36 /*5*/][iVar53] = 0;
						}
					}
					iVar53++;
				}
				iVar52++;
			}
			iVar51++;
		}
		StringCopy(&cVar34, "dmaskg", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_131851[iVar36] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_131851[iVar36] = 0;
		}
		StringCopy(&cVar34, "ofovr", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_136647[iVar36] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_136647[iVar36] = -1;
		}
		StringCopy(&cVar34, "tmrfs", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_150045[iVar36 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_150045[iVar36 /*16*/]), "", 64);
		}
		StringCopy(&cVar34, "tmtss", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_150243[iVar36 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_150243[iVar36 /*16*/]), "", 64);
		}
		StringCopy(&cVar34, "tmrph", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_150308[iVar36 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_150308[iVar36 /*16*/]), "", 64);
		}
		StringCopy(&cVar34, "tmtsr", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_150373[iVar36] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_150373[iVar36] = 0;
		}
		StringCopy(&cVar34, "pmscid", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_147472[iVar36] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_147472[iVar36] = -1;
		}
		StringCopy(&cVar34, "qran", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_131873[iVar36] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_131873[iVar36] = -1;
		}
		StringCopy(&cVar34, "cwtit", 8);
		if (iVar36 > 0)
		{
			StringIntConCat(&cVar34, iVar36, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_152951[iVar36 /*4*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_152951[iVar36 /*4*/]), "", 16);
		}
		StringCopy(&cVar34, "cwstr", 8);
		if (iVar36 > 0)
		{
			StringIntConCat(&cVar34, iVar36, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_152968[iVar36 /*4*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_152968[iVar36 /*4*/]), "", 16);
		}
		StringCopy(&cVar34, "cwspre", 8);
		if (iVar36 > 0)
		{
			StringIntConCat(&cVar34, iVar36, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_152985[iVar36] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_152985[iVar36] = -1;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153032 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twti");
		}
		else
		{
			Global_4456448.f_153032 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153031 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twpta");
		}
		else
		{
			Global_4456448.f_153031 = 0;
		}
		Global_4456448.f_153033 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twct1");
		Global_4456448.f_153034 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twct2");
		Global_4456448.f_153035 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twct3");
		Global_4456448.f_153036 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twct4");
		Global_4456448.f_153037 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twcon");
		Global_4456448.f_153038 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twcto");
		Global_4456448.f_153039 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twcun");
		Global_4456448.f_153040 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twcdi");
		Global_4456448.f_153041 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "svmrcvbr");
		Global_4456448.f_153042 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvmarc");
		Global_4456448.f_153460 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvmsbet");
		Global_4456448.f_153461 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvmsber");
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvmdsr") == 2)
		{
			Global_4456448.f_153468 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvmdsr");
		}
		else
		{
			Global_4456448.f_153468 = -1;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "conbons") == 3)
		{
			Global_4456448.f_153915 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "conbons");
		}
		else
		{
			Global_4456448.f_153915 = 0f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "conspd") == 3)
		{
			Global_4456448.f_153914 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "conspd");
		}
		else
		{
			Global_4456448.f_153914 = 1f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "confot") == 2)
		{
			Global_4456448.f_153916 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "confot");
		}
		else
		{
			Global_4456448.f_153916 = 5000;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "confont") == 2)
		{
			Global_4456448.f_153917 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "confont");
		}
		else
		{
			Global_4456448.f_153917 = 1000;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "consd") == 2)
		{
			Global_4456448.f_153918 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "consd");
		}
		else
		{
			Global_4456448.f_153918 = 1000;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			StringCopy(&cVar34, "kspt", 8);
			StringIntConCat(&cVar34, iVar2, 8);
			Global_4456448.f_153097[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
			StringCopy(&cVar34, "kspr", 8);
			StringIntConCat(&cVar34, iVar2, 8);
			Global_4456448.f_153102[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
			iVar2++;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153924 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hrdnt");
		}
		else
		{
			Global_4456448.f_153924 = 60000;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdtick") == 3)
		{
			Global_4456448.f_153925 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sdtick");
		}
		else
		{
			Global_4456448.f_153925 = 0.5f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sddmg") == 3)
		{
			Global_4456448.f_153927 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sddmg");
		}
		else
		{
			Global_4456448.f_153927 = 1f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdstp") == 3)
		{
			Global_4456448.f_153928 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sdstp");
		}
		else
		{
			Global_4456448.f_153928 = 50f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdmxp") == 3)
		{
			Global_4456448.f_153929 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sdmxp");
		}
		else
		{
			Global_4456448.f_153929 = 100f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sddri") == 3)
		{
			Global_4456448.f_153926 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sddri");
		}
		else
		{
			Global_4456448.f_153926 = 1.5f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdrsc") == 3)
		{
			Global_4456448.f_153930 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sdrsc");
		}
		else
		{
			Global_4456448.f_153930 = 25f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdidd") == 3)
		{
			Global_4456448.f_153931 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sdidd");
		}
		else
		{
			Global_4456448.f_153931 = 1f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMt1r1") == 2)
		{
			Global_4456448.f_153932 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMt1r1");
		}
		else
		{
			Global_4456448.f_153932 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMt2r1") == 2)
		{
			Global_4456448.f_153933 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMt2r1");
		}
		else
		{
			Global_4456448.f_153933 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMt1r2") == 2)
		{
			Global_4456448.f_153934 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMt1r2");
		}
		else
		{
			Global_4456448.f_153934 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMt2r2") == 2)
		{
			Global_4456448.f_153935 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMt2r2");
		}
		else
		{
			Global_4456448.f_153935 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMsttm") == 2)
		{
			Global_4456448.f_153936 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMsttm");
		}
		else
		{
			Global_4456448.f_153936 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMswrt") == 2)
		{
			Global_4456448.f_153937 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMswrt");
		}
		else
		{
			Global_4456448.f_153937 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tgtmcd") == 2)
		{
			Global_4456448.f_154301 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tgtmcd");
		}
		else
		{
			Global_4456448.f_154301 = 30;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mjtr") == 2)
		{
			Global_4456448.f_154300 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mjtr");
		}
		else
		{
			Global_4456448.f_154300 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153048 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "pptl");
		}
		else
		{
			Global_4456448.f_153048 = 5;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153047 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ptltl");
		}
		else
		{
			Global_4456448.f_153047 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153118 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ptlem");
		}
		else
		{
			Global_4456448.f_153118 = -1;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153043 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "trrt");
		}
		else
		{
			Global_4456448.f_153043 = 3;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153119 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tptb");
		}
		else
		{
			Global_4456448.f_153119 = 5000;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153120 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tprt");
		}
		else
		{
			Global_4456448.f_153120 = 2500;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153121 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ldpucd");
		}
		else
		{
			Global_4456448.f_153121 = 3000;
		}
		StringCopy(&cVar34, "rtveft", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153017[iVar36] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_153017[iVar36] = 0;
		}
		StringCopy(&cVar34, "mrtr", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_153972[iVar36] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_153972[iVar36] = 0f;
		}
		StringCopy(&cVar34, "frtr", 8);
		StringIntConCat(&cVar34, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_153977[iVar36] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_153977[iVar36] = 0f;
		}
		iVar36++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ctmrs") == 4)
	{
		Global_4456448.f_130609 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "nqrc");
	}
	else
	{
		Global_4456448.f_130609 = 0;
	}
	iVar54 = 0;
	while (iVar54 <= 15)
	{
		StringCopy(&cVar34, "qrcps", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_130610[iVar54 /*8*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_130610[iVar54 /*8*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "qrchd", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_130610[iVar54 /*8*/].f_3 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_130610[iVar54 /*8*/].f_3 = 0f;
		}
		StringCopy(&cVar34, "qrcbs", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_130610[iVar54 /*8*/].f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_130610[iVar54 /*8*/].f_4 = 0;
		}
		StringCopy(&cVar34, "qrctm", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_130610[iVar54 /*8*/].f_5 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_130610[iVar54 /*8*/].f_5 = 0;
		}
		StringCopy(&cVar34, "qrcck", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_130610[iVar54 /*8*/].f_6 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_130610[iVar54 /*8*/].f_6 = 0;
		}
		StringCopy(&cVar34, "qrcsg", 8);
		StringIntConCat(&cVar34, iVar54, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_130610[iVar54 /*8*/].f_7 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_130610[iVar54 /*8*/].f_7 = 0;
		}
		iVar54++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ctmrs") == 4)
	{
		StringCopy(&(Global_4456448.f_131107), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "ctmrs"), 24);
	}
	else
	{
		StringCopy(&(Global_4456448.f_131107), "", 24);
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar34, "avss", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		Global_4456448.f_136577[iVar2 /*3*/][func_185(iVar2)] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		iVar3 = func_260(iVar2);
		while (iVar3 <= 31)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_136577[iVar2 /*3*/][func_185(iVar2)]), func_184(iVar3));
			iVar3++;
		}
		iVar2++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vsclout") == 2)
	{
		Global_4456448.f_136596[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vsclout");
	}
	else
	{
		Global_4456448.f_136596[0] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vsthout") == 2)
	{
		Global_4456448.f_136596[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vsthout");
	}
	else
	{
		Global_4456448.f_136596[1] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vshwout") == 2)
	{
		Global_4456448.f_136596[3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vshwout");
	}
	else
	{
		Global_4456448.f_136596[3] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vsenout") == 2)
	{
		Global_4456448.f_136596[2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vsenout");
	}
	else
	{
		Global_4456448.f_136596[2] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vstgout") == 2)
	{
		Global_4456448.f_136596[4] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vstgout");
	}
	else
	{
		Global_4456448.f_136596[4] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vsbsout") == 2)
	{
		Global_4456448.f_136596[5] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vsbsout");
	}
	else
	{
		Global_4456448.f_136596[5] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "alfutvs") == 2)
	{
		Global_4456448.f_136603 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "alfutvs");
	}
	else
	{
		Global_4456448.f_136603 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vsdfstc") == 2)
	{
		Global_4456448.f_136604 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vsdfstc");
	}
	else if (((!GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 23) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 24)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 31)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_14, 8))
	{
		Global_4456448.f_136604 = -1;
	}
	else if (((!GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 23) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 24)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 31)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_14, 8))
	{
		Global_4456448.f_136604 = 0;
	}
	else if (((GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 23) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 24)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 31)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_14, 8))
	{
		Global_4456448.f_136604 = 1;
	}
	else if (((!GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 23) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 24)) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 31)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_14, 8))
	{
		Global_4456448.f_136604 = 2;
	}
	else if (((!GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 23) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 24)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 31)) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_14, 8))
	{
		Global_4456448.f_136604 = 3;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "dspteam") == 2)
	{
		Global_4456448.f_147497 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "dspteam");
	}
	else
	{
		Global_4456448.f_147497 = -1;
	}
	if (!func_110() && !func_259())
	{
		if (NETWORK::_FACEBOOK_SET_HEIST_COMPLETE(iParam1))
		{
			StringCopy(&(Global_4456448.f_130789), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_130789), func_258(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_4456448.f_130789), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "nm"), 64);
	}
	Global_4456448.f_131903 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mgrk");
	Global_4456448.f_131904 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mght");
	StringCopy(&(Global_4456448.f_130811[0 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_130811[1 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_130811[2 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_130811[3 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_130811[4 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_130811[5 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_130811[6 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_130811[7 /*16*/]), "", 64);
	uVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "dec");
	iVar56 = UI::_GET_LENGTH_OF_STRING(DATAFILE::_ARRAY_VALUE_GET_STRING(uVar55, 0));
	if (iParam1 == -1 || NETWORK::_FACEBOOK_SET_HEIST_COMPLETE(iParam1))
	{
		if (iVar56 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (DATAFILE::_ARRAY_VALUE_GET_SIZE(uVar55) - 1))
			{
				StringCopy(&(Global_4456448.f_130811[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar55, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			uVar58 = DATAFILE::_ARRAY_VALUE_GET_STRING(uVar55, 0);
			iVar2 = 0;
			while (iVar2 <= 7)
			{
				if (iVar56 > (63 * iVar2))
				{
					if (iVar56 > (63 * iVar2) + 63)
					{
						iVar57 = (63 * iVar2) + 63;
					}
					else
					{
						iVar57 = iVar56;
					}
					StringCopy(&(Global_4456448.f_130811[iVar2 /*16*/]), UI::_GET_TEXT_SUBSTRING_SLICE(uVar58, (63 * iVar2), iVar57), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_4456448.f_130811[0 /*16*/]), func_258(), 64);
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ricb") == 2)
	{
		Global_4456448.f_150399 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ricb");
	}
	else
	{
		Global_4456448.f_150399 = 0;
	}
	Global_4456448.f_40 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tnum");
	Global_4456448.f_41 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mtnum");
	if (!func_257())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 14))
		{
			Global_4456448.f_39 = Global_4456448.f_40;
		}
		else if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "dtn") == 2)
		{
			Global_4456448.f_39 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "dtn");
		}
		else
		{
			Global_4456448.f_39 = Global_4456448.f_40;
		}
	}
	else
	{
		Global_4456448.f_39 = Global_4456448.f_40;
	}
	if (Global_4456448 == 0)
	{
		if (Global_2448386.f_558.f_11 != 0 && Global_4456448.f_40 != Global_2448386.f_558.f_11)
		{
			if (!Global_262145.f_4705 && func_62(Global_4456448.f_152990))
			{
				iVar59 = func_256();
				if (Global_2448386.f_558.f_11 < iVar59)
				{
					Global_2448386.f_558.f_11 = iVar59;
					if (PLAYER::PLAYER_ID() != -1)
					{
						Global_1624218[PLAYER::PLAYER_ID() /*38*/] = Global_2448386.f_558.f_11;
					}
				}
			}
			Global_4456448.f_40 = Global_2448386.f_558.f_11;
			Global_4456448.f_39 = Global_4456448.f_40;
		}
		else if ((func_253() || func_251()) && func_250())
		{
			uVar60 = func_256();
			fVar61 = (SYSTEM::TO_FLOAT(uVar60) / SYSTEM::TO_FLOAT(Global_4456448.f_35));
			iVar62 = 0;
			if (Global_4456448.f_40 == 3)
			{
				if (fVar61 <= 0.66f)
				{
					Global_4456448.f_40 = 2;
					iVar62 = 1;
				}
			}
			else if (Global_4456448.f_40 == 4)
			{
				if (fVar61 <= 0.5f)
				{
					Global_4456448.f_40 = 2;
					iVar62 = 1;
				}
				else if (fVar61 <= 0.75f)
				{
					Global_4456448.f_40 = 3;
					iVar62 = 1;
				}
			}
			if (iVar62 && Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_99.f_28 >= Global_4456448.f_40)
			{
				Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_99.f_28 = func_248(Global_4456448.f_40);
			}
			if (Global_4456448.f_39 > Global_4456448.f_40)
			{
				Global_4456448.f_39 = Global_4456448.f_40;
			}
		}
	}
	if (Global_4456448 == 1)
	{
		if (Global_4456448.f_40 > 4)
		{
			Global_4456448.f_40 = 4;
		}
	}
	else if (Global_4456448.f_40 > 4)
	{
		Global_4456448.f_40 = 4;
	}
	Global_4456448.f_119803 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "atmdm");
	Global_4456448.f_54 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "trel");
	Global_4456448.f_154098 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tpas");
	Global_4456448.f_131869 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ltm");
	Global_4456448.f_83 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "vcpr") };
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hstat") == 2)
	{
		Global_4456448.f_131839 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hstat");
	}
	else
	{
		Global_4456448.f_131839 = 0;
	}
	iVar63 = 0;
	while (iVar63 <= 19)
	{
		StringCopy(&cVar34, "rzpos", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_86856[iVar63 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_86856[iVar63 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "rzzon", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_86917[iVar63] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_86917[iVar63] = 0;
		}
		StringCopy(&cVar34, "rzobj", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_86938[iVar63] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_86938[iVar63] = -1;
		}
		StringCopy(&cVar34, "rzacc", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_86959[iVar63] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_86959[iVar63] = 100f;
		}
		StringCopy(&cVar34, "rzcav", 8);
		StringIntConCat(&cVar34, iVar63, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_86981[iVar63] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_86981[iVar63] = -1;
		}
		iVar63++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rzhmb") == 2)
	{
		Global_4456448.f_86980 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rzhmb");
	}
	else
	{
		Global_4456448.f_86980 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "numzr") == 2)
	{
		Global_4456448.f_87002 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "numzr");
	}
	else
	{
		Global_4456448.f_87002 = 0;
	}
	uVar64 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uParam0, "ene");
	iVar65 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar64, "no");
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar34, "hpped", 8);
		if (iVar2 > 0)
		{
			StringIntConCat(&cVar34, iVar2 + 1, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2 && iVar65 > DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34))
		{
			Global_4456448.f_119673[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_119673[iVar2] = -1;
		}
		iVar2++;
	}
	if ((iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rsgmx") == 2) && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rsgnu") == 2)
	{
		Global_4456448.f_119680 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rsgmx");
		Global_4456448.f_119681 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rsgnu");
		Global_4456448.f_119682 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rsgbs");
		if (Global_4456448.f_119680 > 0 && Global_4456448.f_119681 != 0)
		{
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_119680 - 1))
			{
				if (iVar2 < 10)
				{
					StringCopy(&cVar34, "rsg", 8);
					StringIntConCat(&cVar34, iVar2, 8);
					MemCopy(&cVar66, {cVar34}, 4);
					StringConCat(&cVar66, "mx", 16);
					MemCopy(&cVar70, {cVar34}, 4);
					StringConCat(&cVar70, "nu", 16);
					if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar66) == 2 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar70) == 2)
					{
						Global_4456448.f_119683[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar66);
						Global_4456448.f_119694[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar70);
						MemCopy(&cVar66, {cVar34}, 4);
						StringConCat(&cVar66, "bs", 16);
						Global_4456448.f_119705[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar66);
					}
				}
				iVar2++;
			}
		}
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tshd") == 2)
	{
		Global_4456448.f_131892 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tshd");
	}
	else
	{
		Global_4456448.f_131892 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mrd") == 2)
	{
		Global_4456448.f_131893 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mrd");
	}
	else
	{
		Global_4456448.f_131893 = 15;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "etim") == 3)
	{
		Global_4456448.f_131895 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "etim");
	}
	else
	{
		Global_4456448.f_131895 = 2.5f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "evel") == 3)
	{
		Global_4456448.f_131896 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "evel");
	}
	else
	{
		Global_4456448.f_131896 = 8f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "etimb") == 3)
	{
		Global_4456448.f_131897 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "etimb");
	}
	else
	{
		Global_4456448.f_131897 = 2.5f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "evelb") == 3)
	{
		Global_4456448.f_131898 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "evelb");
	}
	else
	{
		Global_4456448.f_131898 = 8f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "srct") == 2)
	{
		Global_4456448.f_131894 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "srct");
	}
	else
	{
		Global_4456448.f_131894 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tptbd") == 2)
	{
		Global_4456448.f_131899 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tptbd");
	}
	else
	{
		Global_4456448.f_131899 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tptba") == 2)
	{
		Global_4456448.f_131900 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tptba");
	}
	else
	{
		Global_4456448.f_131900 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atspos") == 5)
	{
		Global_4456448.f_149563 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "atspos") };
	}
	else
	{
		Global_4456448.f_149563 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atscmp") == 5)
	{
		Global_4456448.f_149557 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "atscmp") };
	}
	else
	{
		Global_4456448.f_149557 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atscmr") == 5)
	{
		Global_4456448.f_149560 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "atscmr") };
	}
	else
	{
		Global_4456448.f_149560 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atsfov") == 3)
	{
		Global_4456448.f_149566 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "atsfov");
	}
	else
	{
		Global_4456448.f_149566 = 45f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atshed") == 3)
	{
		Global_4456448.f_149567 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "atshed");
	}
	else
	{
		Global_4456448.f_149567 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atsveh") == 2)
	{
		Global_4456448.f_149568 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "atsveh");
	}
	else
	{
		Global_4456448.f_149568 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hpdt1") == 2)
	{
		Global_4456448.f_131840[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hpdt1");
	}
	else
	{
		Global_4456448.f_131840[0] = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hpdt2") == 2)
	{
		Global_4456448.f_131840[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hpdt2");
	}
	else
	{
		Global_4456448.f_131840[1] = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vdt") == 2)
	{
		Global_4456448.f_131844 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vdt");
	}
	else
	{
		Global_4456448.f_131844 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrbs") == 2)
	{
		Global_4456448.f_147477 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrbs");
	}
	else
	{
		Global_4456448.f_147477 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrtt") == 2)
	{
		Global_4456448.f_147478 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrtt");
	}
	else
	{
		Global_4456448.f_147478 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrttm") == 2)
	{
		Global_4456448.f_147479 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrttm");
	}
	else
	{
		Global_4456448.f_147479 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrtrl") == 2)
	{
		Global_4456448.f_147480 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrtrl");
	}
	else
	{
		Global_4456448.f_147480 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrpdt") == 2)
	{
		Global_4456448.f_147482 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrpdt");
	}
	else
	{
		Global_4456448.f_147482 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrvdt") == 2)
	{
		Global_4456448.f_147484 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrvdt");
	}
	else
	{
		Global_4456448.f_147484 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrkt") == 2)
	{
		Global_4456448.f_147486 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrkt");
	}
	else
	{
		Global_4456448.f_147486 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrph") == 2)
	{
		Global_4456448.f_147489 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrph");
	}
	else
	{
		Global_4456448.f_147489 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hecam") == 2)
	{
		Global_4456448.f_147492 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hecam");
	}
	else
	{
		Global_4456448.f_147492 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbhs") == 2)
	{
		Global_4456448.f_147490 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbhs");
	}
	else
	{
		Global_4456448.f_147490 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbht") == 2)
	{
		Global_4456448.f_147491 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbht");
	}
	else
	{
		Global_4456448.f_147491 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdrvm") == 2)
	{
		Global_4456448.f_150400 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "sdrvm");
	}
	else
	{
		Global_4456448.f_150400 = 10000;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vstm") == 2)
	{
		Global_4456448.f_150401 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vstm");
	}
	else
	{
		Global_4456448.f_150401 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "inumbnc") == 2)
	{
		Global_4456448.f_150415 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "inumbnc");
	}
	else
	{
		Global_4456448.f_150415 = 10000;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mdmgm") == 3)
	{
		Global_4456448.f_150402 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "mdmgm");
	}
	else
	{
		Global_4456448.f_150402 = 1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "itsms") == 2)
	{
		Global_4456448.f_153082 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "itsms");
	}
	else
	{
		Global_4456448.f_153082 = 1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "igls") == 2)
	{
		Global_4456448.f_153083 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "igls");
	}
	else
	{
		Global_4456448.f_153083 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "twdas") == 3)
	{
		Global_4456448.f_150403 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "twdas");
	}
	else
	{
		Global_4456448.f_150403 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vdt") == 2)
	{
		Global_4456448.f_152991 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "sphft");
	}
	else
	{
		Global_4456448.f_152991 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdsr") == 2)
	{
		Global_4456448.f_152950 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "sdsr");
	}
	else
	{
		Global_4456448.f_152950 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cmxdftms") == 2)
	{
		Global_4456448.f_153014 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cmxdftms");
	}
	else
	{
		Global_4456448.f_153014 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "crlaa") == 2)
	{
		Global_4456448.f_153016 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "crlaa");
	}
	else
	{
		Global_4456448.f_153016 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cmxtliv") == 2)
	{
		Global_4456448.f_153028 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cmxtliv");
	}
	else
	{
		Global_4456448.f_153028 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cmxdctl") == 2)
	{
		Global_4456448.f_153029 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cmxdctl");
	}
	else
	{
		Global_4456448.f_153029 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cmxmctl") == 2)
	{
		Global_4456448.f_153030 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cmxmctl");
	}
	else
	{
		Global_4456448.f_153030 = 0;
	}
	if ((((iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hmmtt") == 2) && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hmmts") == 2) && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hmmte") == 2) && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hmmth") == 2)
	{
		Global_4456448.f_147493 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hmmtt");
		Global_4456448.f_147494 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hmmts");
		Global_4456448.f_147495 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hmmte");
		Global_4456448.f_147496 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hmmth");
	}
	else
	{
		Global_4456448.f_147493 = 0;
		Global_4456448.f_147494 = 0;
		Global_4456448.f_147495 = 0;
		Global_4456448.f_147496 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tstrm") == 2)
	{
		Global_4456448.f_149504 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tstrm");
	}
	else
	{
		Global_4456448.f_149504 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar34, "dtspk", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_136181[iVar2 /*8*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 32);
		}
		else
		{
			StringCopy(&(Global_4456448.f_136181[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		StringCopy(&cVar34, "cspnm", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_119410[iVar2 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_119410[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar34, "csvnm", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_119491[iVar2 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_119491[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar34, "csonm", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_119572[iVar2 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_119572[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		StringCopy(&cVar34, "otxsgo", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_119716[iVar2 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_119716[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar74 = 0;
	while (iVar74 <= 3)
	{
		iVar3 = 0;
		while (iVar3 <= 12)
		{
			StringCopy(&cVar34, "ofit", 8);
			StringIntConCat(&cVar34, iVar3 + 1, 8);
			StringIntConCat(&cVar34, iVar74, 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
			{
				Global_4456448.f_136515[iVar74 /*14*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
			}
			iVar3++;
		}
		StringCopy(&cVar34, "ofs1", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_136620[iVar74 /*3*/][0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_136620[iVar74 /*3*/][0] = 0;
		}
		StringCopy(&cVar34, "ofs2", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_136620[iVar74 /*3*/][1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_136620[iVar74 /*3*/][1] = 0;
		}
		StringCopy(&cVar34, "mask1", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_136638[iVar74 /*2*/][0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_136638[iVar74 /*2*/][0] = 0;
		}
		StringCopy(&cVar34, "gear", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_136605[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_136605[iVar74] = 0;
		}
		StringCopy(&cVar34, "geard", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_136610[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_136610[iVar74] = -1;
		}
		StringCopy(&cVar34, "apwfr", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_146763[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_146763[iVar74] = -1;
		}
		StringCopy(&cVar34, "apwlr", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_146768[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_146768[iVar74] = -1;
		}
		StringCopy(&cVar34, "tcmin", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2 && !func_190())
		{
			Global_4456448.f_147143[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_147143[iVar74] = 0;
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&cVar34, "trcmn", 8);
			StringIntConCat(&cVar34, iVar3, 8);
			StringIntConCat(&cVar34, iVar74, 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2 && !func_190())
			{
				Global_4456448.f_147148[iVar74 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
			}
			else
			{
				Global_4456448.f_147148[iVar74 /*5*/][iVar3] = 0;
			}
			iVar3++;
		}
		StringCopy(&cVar34, "tmrsp", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_147170[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_147170[iVar74] = 0;
		}
		StringCopy(&cVar34, "vifcit", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_153919[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_153919[iVar74] = -1;
		}
		StringCopy(&cVar34, "tvpm", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_55659[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_55659[iVar74] = -1;
		}
		StringCopy(&cVar34, "tvnc", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_55638[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_55638[iVar74] = -1;
		}
		StringCopy(&cVar34, "tmrees", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_147175[iVar74] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_147175[iVar74] = 1f;
		}
		StringCopy(&cVar34, "tmvhp", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_55618[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_55618[iVar74] = 100;
		}
		StringCopy(&cVar34, "tmvds", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_55623[iVar74] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_55623[iVar74] = 1f;
		}
		StringCopy(&cVar34, "tblty", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_55653[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_55653[iVar74] = 0;
		}
		StringCopy(&cVar34, "pmpos", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_129888[iVar74 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_129888[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "pmpoi", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_129901[iVar74 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_129901[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "pmrad", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_129914[iVar74] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_129914[iVar74] = 0f;
		}
		StringCopy(&cVar34, "dfofit", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_136572[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_136572[iVar74] = -1;
		}
		StringCopy(&cVar34, "dfstyl", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_136633[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_136633[iVar74] = -1;
		}
		StringCopy(&cVar34, "clrovr", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_125859[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_125859[iVar74] = -1;
		}
		StringCopy(&cVar34, "tswpal", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_76669[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_76669[iVar74] = -1;
		}
		StringCopy(&cVar34, "1cmrt", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_119653[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_119653[iVar74] = 0;
		}
		StringCopy(&cVar34, "2cmrt", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_119658[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_119658[iVar74] = 0;
		}
		StringCopy(&cVar34, "3cmrt", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_119663[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_119663[iVar74] = 0;
		}
		StringCopy(&cVar34, "4cmrt", 8);
		StringIntConCat(&cVar34, iVar74, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_119668[iVar74] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_119668[iVar74] = 0;
		}
		iVar75 = 0;
		while (iVar75 <= 3)
		{
			StringCopy(&cVar28, "trstp", 16);
			StringIntConCat(&cVar28, iVar74, 16);
			if (iVar75 > 0)
			{
				StringIntConCat(&cVar28, iVar75, 16);
			}
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 5)
			{
				Global_4456448.f_130013[iVar74 /*53*/][iVar75 /*13*/][0 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar28) };
			}
			else
			{
				Global_4456448.f_130013[iVar74 /*53*/][iVar75 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar28, "trstf", 16);
			StringIntConCat(&cVar28, iVar74, 16);
			if (iVar75 > 0)
			{
				StringIntConCat(&cVar28, iVar75, 16);
			}
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 5)
			{
				Global_4456448.f_130311[iVar74 /*53*/][iVar75 /*13*/][0 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar28) };
			}
			else
			{
				Global_4456448.f_130311[iVar74 /*53*/][iVar75 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar28, "trsth", 16);
			StringIntConCat(&cVar28, iVar74, 16);
			if (iVar75 > 0)
			{
				StringIntConCat(&cVar28, iVar75, 16);
			}
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 3)
			{
				Global_4456448.f_130226[iVar74 /*21*/][iVar75 /*5*/][0] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar28);
			}
			else
			{
				Global_4456448.f_130226[iVar74 /*21*/][iVar75 /*5*/][0] = 0f;
			}
			iVar76 = 0;
			while (iVar76 <= 3)
			{
				StringCopy(&cVar28, "trstp", 16);
				StringIntConCat(&cVar28, iVar74, 16);
				StringIntConCat(&cVar28, iVar75, 16);
				StringConCat(&cVar28, "n", 16);
				StringIntConCat(&cVar28, iVar76, 16);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 5)
				{
					Global_4456448.f_130013[iVar74 /*53*/][iVar75 /*13*/][iVar76 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar28) };
				}
				else
				{
					Global_4456448.f_130013[iVar74 /*53*/][iVar75 /*13*/][iVar76 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar28, "trsth", 16);
				StringIntConCat(&cVar28, iVar74, 16);
				StringIntConCat(&cVar28, iVar75, 16);
				StringConCat(&cVar28, "n", 16);
				StringIntConCat(&cVar28, iVar76, 16);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 3)
				{
					Global_4456448.f_130226[iVar74 /*21*/][iVar75 /*5*/][iVar76] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar28);
				}
				else
				{
					Global_4456448.f_130226[iVar74 /*21*/][iVar75 /*5*/][iVar76] = 0f;
				}
				iVar76++;
			}
			StringCopy(&cVar34, "trsrl", 8);
			StringIntConCat(&cVar34, iVar74, 8);
			StringIntConCat(&cVar34, iVar75, 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
			{
				Global_4456448.f_150378[iVar74 /*5*/][iVar75] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
			}
			else
			{
				Global_4456448.f_150378[iVar74 /*5*/][iVar75] = 0;
			}
			iVar75++;
		}
		iVar77 = 0;
		while (iVar77 <= 3)
		{
			StringCopy(&cVar28, "iltt", 16);
			StringIntConCat(&cVar28, iVar74, 16);
			StringIntConCat(&cVar28, iVar77, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 2)
			{
				Global_4456448.f_152993[iVar74 /*5*/][iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar28);
			}
			else
			{
				Global_4456448.f_152993[iVar74 /*5*/][iVar77] = 0;
			}
			iVar77++;
		}
		iVar78 = 0;
		while (iVar78 <= 4)
		{
			iVar79 = 0;
			while (iVar79 <= 3)
			{
				StringCopy(&cVar28, "cpv", 16);
				StringIntConCat(&cVar28, iVar74, 16);
				StringConCat(&cVar28, "i", 16);
				StringIntConCat(&cVar28, iVar78, 16);
				StringConCat(&cVar28, "s", 16);
				StringIntConCat(&cVar28, iVar79, 16);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 5)
				{
					Global_4456448.f_149570[iVar74 /*66*/][iVar78 /*13*/][iVar79 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar28) };
				}
				else
				{
					Global_4456448.f_149570[iVar74 /*66*/][iVar78 /*13*/][iVar79 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar28, "cph", 16);
				StringIntConCat(&cVar28, iVar74, 16);
				StringConCat(&cVar28, "i", 16);
				StringIntConCat(&cVar28, iVar78, 16);
				StringConCat(&cVar28, "s", 16);
				StringIntConCat(&cVar28, iVar79, 16);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 3)
				{
					Global_4456448.f_149835[iVar74 /*26*/][iVar78 /*5*/][iVar79] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar28);
				}
				else
				{
					Global_4456448.f_149835[iVar74 /*26*/][iVar78 /*5*/][iVar79] = -1f;
				}
				iVar79++;
			}
			iVar78++;
		}
		StringCopy(&cVar34, "tscpos", 8);
		if (iVar74 > 0)
		{
			StringIntConCat(&cVar34, iVar74, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_149508[iVar74 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_149508[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "tscrot", 8);
		if (iVar74 > 0)
		{
			StringIntConCat(&cVar34, iVar74, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_149521[iVar74 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_149521[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "tspos", 8);
		if (iVar74 > 0)
		{
			StringIntConCat(&cVar34, iVar74, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 5)
		{
			Global_4456448.f_149534[iVar74 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar34) };
		}
		else
		{
			Global_4456448.f_149534[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar34, "tscfov", 8);
		if (iVar74 > 0)
		{
			StringIntConCat(&cVar34, iVar74, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_149547[iVar74] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_149547[iVar74] = 45f;
		}
		StringCopy(&cVar34, "tshead", 8);
		if (iVar74 > 0)
		{
			StringIntConCat(&cVar34, iVar74, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 3)
		{
			Global_4456448.f_149552[iVar74] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_149552[iVar74] = 0f;
		}
		iVar74++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar34, "pnid", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 4)
		{
			StringCopy(&(Global_4456448.f_146818[iVar2 /*18*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar34), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_146818[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar34, "pnlv", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2)
		{
			Global_4456448.f_146818[iVar2 /*18*/].f_16 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_146818[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar34, "pnvr", 8);
		StringIntConCat(&cVar34, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar34) == 2 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_4456448.f_146818[iVar2 /*18*/])))
		{
			Global_4456448.f_146818[iVar2 /*18*/].f_17 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar34);
		}
		else
		{
			Global_4456448.f_146818[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cposr") == 3)
	{
		Global_4456448.f_150416 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "cposr");
	}
	else
	{
		Global_4456448.f_150416 = 60f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cporv") == 3)
	{
		Global_4456448.f_150419 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "cporv");
	}
	else
	{
		Global_4456448.f_150419 = -1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmbbp") == 2)
	{
		Global_4456448.f_150405 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "bmbbp");
	}
	else
	{
		Global_4456448.f_150405 = 2;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmber") == 2)
	{
		Global_4456448.f_150406 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "bmber");
	}
	else
	{
		Global_4456448.f_150406 = 2;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmbet") == 2)
	{
		Global_4456448.f_150407 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "bmbet");
	}
	else
	{
		Global_4456448.f_150407 = 3000;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmbsi") == 2)
	{
		Global_4456448.f_150408 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "bmbsi");
	}
	else
	{
		Global_4456448.f_150408 = 150;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmbdi") == 3)
	{
		Global_4456448.f_150409 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "bmbdi");
	}
	else
	{
		Global_4456448.f_150409 = 3f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmbio") == 3)
	{
		Global_4456448.f_150410 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "bmbio");
	}
	else
	{
		Global_4456448.f_150410 = 1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "fvjhdt") == 2)
	{
		Global_4456448.f_150411 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "fvjhdt");
	}
	else
	{
		Global_4456448.f_150411 = 25;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "fvjhmd") == 2)
	{
		Global_4456448.f_150412 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "fvjhmd");
	}
	else
	{
		Global_4456448.f_150412 = 5;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "fvjfvd") == 2)
	{
		Global_4456448.f_150413 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "fvjfvd");
	}
	else
	{
		Global_4456448.f_150413 = 5;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "fvjfvc") == 2)
	{
		Global_4456448.f_150414 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "fvjfvc");
	}
	else
	{
		Global_4456448.f_150414 = 2;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cpopr") == 3)
	{
		Global_4456448.f_150417 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "cpopr");
	}
	else
	{
		Global_4456448.f_150417 = 5f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cpohr") == 3)
	{
		Global_4456448.f_150418 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "cpohr");
	}
	else
	{
		Global_4456448.f_150418 = 60f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bevhtd") == 3)
	{
		Global_4456448.f_55505 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "bevhtd");
	}
	else
	{
		Global_4456448.f_55505 = 0.075f;
	}
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		StringCopy(&cVar28, "fsclv", 16);
		StringIntConCat(&cVar28, iVar2, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 5)
		{
			Global_4456448.f_55508[iVar2 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar28) };
		}
		else
		{
			Global_4456448.f_55508[iVar2 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar28, "fsclr", 16);
		StringIntConCat(&cVar28, iVar2, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 5)
		{
			Global_4456448.f_55539[iVar2 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar28) };
		}
		else
		{
			Global_4456448.f_55539[iVar2 /*3*/] = { 0f, 0f, 0f };
		}
		iVar2++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bevhdd") == 3)
	{
		Global_4456448.f_150418 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "bevhdd");
	}
	else
	{
		Global_4456448.f_150418 = 0.075f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc0") == 2)
	{
		Global_4456448.f_150420 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc0");
	}
	else
	{
		Global_4456448.f_150420 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc1") == 2)
	{
		Global_4456448.f_150421 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc1");
	}
	else
	{
		Global_4456448.f_150421 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc2") == 2)
	{
		Global_4456448.f_150422 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc2");
	}
	else
	{
		Global_4456448.f_150422 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc3") == 2)
	{
		Global_4456448.f_150423 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc3");
	}
	else
	{
		Global_4456448.f_150423 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc4") == 2)
	{
		Global_4456448.f_150424 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc4");
	}
	else
	{
		Global_4456448.f_150424 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc5") == 2)
	{
		Global_4456448.f_150425 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc5");
	}
	else
	{
		Global_4456448.f_150425 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc6") == 2)
	{
		Global_4456448.f_150426 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc6");
	}
	else
	{
		Global_4456448.f_150426 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc9") == 2)
	{
		Global_4456448.f_150430 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc9");
	}
	else
	{
		Global_4456448.f_150430 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc7") == 2)
	{
		Global_4456448.f_150428 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc7");
	}
	else
	{
		Global_4456448.f_150428 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc8") == 2)
	{
		Global_4456448.f_150429 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc8");
	}
	else
	{
		Global_4456448.f_150429 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratcm") == 3)
	{
		Global_4456448.f_150427 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "ratcm");
	}
	else
	{
		Global_4456448.f_150427 = -1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cdrt") == 3)
	{
		Global_4456448.f_150432 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "cdrt");
	}
	else
	{
		Global_4456448.f_150432 = -1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csttl") == 4)
	{
		StringCopy(&(Global_4456448.f_150433), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csttl"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_150433), "", 16);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csstl") == 4)
	{
		StringCopy(&(Global_4456448.f_150437), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csstl"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_150437), "", 16);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csttl2") == 4)
	{
		StringCopy(&(Global_4456448.f_150441), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csttl2"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_150441), "", 16);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csstl2") == 4)
	{
		StringCopy(&(Global_4456448.f_150445), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csstl2"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_150445), "", 16);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csttl3") == 4)
	{
		StringCopy(&(Global_4456448.f_150449), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csttl3"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_150449), "", 16);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csstl3") == 4)
	{
		StringCopy(&(Global_4456448.f_150453), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csstl3"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_150453), "", 16);
	}
	func_247();
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ssdsp") == 5)
	{
		Global_4456448.f_152943 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "ssdsp") };
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ssdsr") == 3)
	{
		Global_4456448.f_152946 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "ssdsr");
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ssder") == 3)
	{
		Global_4456448.f_152947 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "ssder");
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ssdst") == 2)
	{
		Global_4456448.f_152948 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ssdst");
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ssdtg") == 2)
	{
		Global_4456448.f_152949 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ssdtg");
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp0") == 2)
	{
		Global_4456448.f_153084 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp0");
	}
	else
	{
		Global_4456448.f_153084 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp1") == 2)
	{
		Global_4456448.f_153085 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp1");
	}
	else
	{
		Global_4456448.f_153085 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp2") == 2)
	{
		Global_4456448.f_153087 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp2");
	}
	else
	{
		Global_4456448.f_153087 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp3") == 2)
	{
		Global_4456448.f_153088 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp3");
	}
	else
	{
		Global_4456448.f_153088 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp4") == 2)
	{
		Global_4456448.f_153089 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp4");
	}
	else
	{
		Global_4456448.f_153089 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp5") == 2)
	{
		Global_4456448.f_153086 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp5");
	}
	else
	{
		Global_4456448.f_153086 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp15") == 2)
	{
		Global_4456448.f_153091 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp15");
	}
	else
	{
		Global_4456448.f_153091 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp16") == 2)
	{
		Global_4456448.f_153092 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp16");
	}
	else
	{
		Global_4456448.f_153092 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwpbhd") == 2)
	{
		Global_4456448.f_153090 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwpbhd");
	}
	else
	{
		Global_4456448.f_153090 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwprbs") == 2)
	{
		Global_4456448.f_153096 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwprbs");
	}
	else
	{
		Global_4456448.f_153096 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwmgfr") == 2)
	{
		Global_4456448.f_153114 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwmgfr");
	}
	else
	{
		Global_4456448.f_153114 = 5;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwmgda") == 2)
	{
		Global_4456448.f_153115 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwmgda");
	}
	else
	{
		Global_4456448.f_153115 = 350;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwmgnb") == 2)
	{
		Global_4456448.f_153116 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwmgnb");
	}
	else
	{
		Global_4456448.f_153116 = 100;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "crttn") == 2)
	{
		Global_4456448.f_153117 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "crttn");
	}
	else
	{
		Global_4456448.f_153117 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "smoc") == 2)
	{
		Global_4456448.f_55507 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "smoc");
	}
	else
	{
		Global_4456448.f_55507 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vrsp") == 2)
	{
		Global_4456448.f_153467 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vrsp");
	}
	else
	{
		Global_4456448.f_153467 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "otrds") == 2)
	{
		Global_4456448.f_153456 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "otrds");
	}
	else
	{
		Global_4456448.f_153456 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "otsdr") == 2)
	{
		Global_4456448.f_153458 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "otsdr");
	}
	else
	{
		Global_4456448.f_153458 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "otrsc") == 2)
	{
		Global_4456448.f_153459 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "otrsc");
	}
	else
	{
		Global_4456448.f_153459 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "otrpc") == 2)
	{
		Global_4456448.f_153457 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "otrpc");
	}
	else
	{
		Global_4456448.f_153457 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mocb1") == 2)
	{
		Global_4456448.f_153462 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mocb1");
	}
	else
	{
		Global_4456448.f_153462 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mocb2") == 2)
	{
		Global_4456448.f_153462.f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mocb2");
	}
	else
	{
		Global_4456448.f_153462.f_1 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mocb3") == 2)
	{
		Global_4456448.f_153462.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mocb3");
	}
	else
	{
		Global_4456448.f_153462.f_2 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "moccc") == 2)
	{
		Global_4456448.f_153462.f_3 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "moccc");
	}
	else
	{
		Global_4456448.f_153462.f_3 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mocbs") == 2)
	{
		Global_4456448.f_153462.f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mocbs");
	}
	else
	{
		Global_4456448.f_153462.f_4 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwprbs") == 2)
	{
		Global_4456448.f_153096 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwprbs");
	}
	else
	{
		Global_4456448.f_153096 = 0;
	}
	Global_4456448.f_153107 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "vtwsp") };
	Global_4456448.f_153110 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "vtwsr") };
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tsc3") == 3)
	{
		Global_4456448.f_153093 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "tsc3");
	}
	else
	{
		Global_4456448.f_153093 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tsc4") == 3)
	{
		Global_4456448.f_153094 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "tsc4");
	}
	else
	{
		Global_4456448.f_153094 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csstd") == 2)
	{
		Global_4456448.f_153095 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "csstd");
	}
	else
	{
		Global_4456448.f_153095 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "prpccd") == 2)
	{
		Global_4456448.f_153970 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "prpccd");
	}
	else
	{
		Global_4456448.f_153970 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "spwnptd") == 2)
	{
		Global_4456448.f_153971 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "spwnptd");
	}
	else
	{
		Global_4456448.f_153971 = 20;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "objsctt") == 2)
	{
		Global_4456448.f_154213 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "objsctt");
	}
	else
	{
		Global_4456448.f_154213 = 20;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "spwnptd") == 2)
	{
		Global_4456448.f_153971 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "spwnptd");
	}
	else
	{
		Global_4456448.f_153971 = 20;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sba") == 3)
	{
		Global_4456448.f_154097 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sba");
	}
	else
	{
		Global_4456448.f_154097 = 0.5f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sccd") == 2)
	{
		Global_4456448.f_154085 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "sccd");
	}
	else
	{
		Global_4456448.f_154085 = 500;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmsf") == 3)
	{
		Global_4456448.f_154096 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmsf");
	}
	else
	{
		Global_4456448.f_154096 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "schf") == 3)
	{
		Global_4456448.f_154086 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "schf");
	}
	else
	{
		Global_4456448.f_154086 = 10f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmnhfs") == 3)
	{
		Global_4456448.f_154088 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmnhfs");
	}
	else
	{
		Global_4456448.f_154088 = 1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scvf") == 3)
	{
		Global_4456448.f_154087 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scvf");
	}
	else
	{
		Global_4456448.f_154087 = 0.5f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmnvfs") == 3)
	{
		Global_4456448.f_154089 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmnvfs");
	}
	else
	{
		Global_4456448.f_154089 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmxhf") == 3)
	{
		Global_4456448.f_154090 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmxhf");
	}
	else
	{
		Global_4456448.f_154090 = 25f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmnhf") == 3)
	{
		Global_4456448.f_154091 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmnhf");
	}
	else
	{
		Global_4456448.f_154091 = 15f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmxvf") == 3)
	{
		Global_4456448.f_154092 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmxvf");
	}
	else
	{
		Global_4456448.f_154092 = 6f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmnvf") == 3)
	{
		Global_4456448.f_154093 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmnvf");
	}
	else
	{
		Global_4456448.f_154093 = 4f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scd") == 2)
	{
		Global_4456448.f_154094 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "scd");
	}
	else
	{
		Global_4456448.f_154094 = 10;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmind") == 2)
	{
		Global_4456448.f_154095 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "scmind");
	}
	else
	{
		Global_4456448.f_154095 = 1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "awpsobm") == 2)
	{
		Global_4456448.f_154212 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "awpsobm");
	}
	else
	{
		Global_4456448.f_154212 = 0;
	}
	iVar74 = 0;
	while (iVar74 <= 4)
	{
		StringCopy(&cVar28, "rmspco", 16);
		StringIntConCat(&cVar28, iVar74, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 5)
		{
			Global_4456448.f_154250[iVar74 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar28) };
		}
		else
		{
			Global_4456448.f_154250[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar28, "rmspch", 16);
		StringIntConCat(&cVar28, iVar74, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 3)
		{
			Global_4456448.f_154266[iVar74] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar28);
		}
		else
		{
			Global_4456448.f_154266[iVar74] = 0f;
		}
		StringCopy(&cVar28, "rmspcc", 16);
		StringIntConCat(&cVar28, iVar74, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 5)
		{
			Global_4456448.f_154272[iVar74 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar28) };
		}
		else
		{
			Global_4456448.f_154272[iVar74 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar28, "rmspcr", 16);
		StringIntConCat(&cVar28, iVar74, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 3)
		{
			Global_4456448.f_154288[iVar74] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar28);
		}
		else
		{
			Global_4456448.f_154288[iVar74] = 0f;
		}
		iVar74++;
	}
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		StringCopy(&cVar28, "awtt", 16);
		StringIntConCat(&cVar28, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar28) == 2)
		{
			Global_4456448.f_154214[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar28);
		}
		else
		{
			Global_4456448.f_154214[iVar2] = 6;
		}
		iVar2++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "awtrc") == 2)
	{
		Global_4456448.f_154247 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "awtrc");
	}
	else
	{
		Global_4456448.f_154247 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwfdt") == 3)
	{
		Global_4456448.f_154302 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "vwfdt");
	}
	else
	{
		Global_4456448.f_154302 = 2.5f;
	}
}

void func_247()
{
	Global_4456448.f_152943 = { 0f, 0f, 0f };
	Global_4456448.f_152946 = 30f;
	Global_4456448.f_152947 = 5f;
	Global_4456448.f_152948 = 30000;
	Global_4456448.f_152949 = 15000;
}

int func_248(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar5)) && iVar5 != PLAYER::PLAYER_ID())
		{
			iVar2 = iVar5;
			if ((!func_249(iVar5) && Global_1589747[iVar2 /*790*/].f_211 != 8) && !GAMEPLAY::IS_BIT_SET(Global_1589747[iVar2 /*790*/].f_39.f_18, 14))
			{
				if (Global_1589747[iVar2 /*790*/].f_99.f_28 != -1)
				{
					GAMEPLAY::SET_BIT(&uVar1, Global_1589747[iVar2 /*790*/].f_99.f_28);
					if (Global_1589747[iVar2 /*790*/].f_99.f_28 >= iParam0 && iVar2 < PLAYER::PLAYER_ID())
					{
						bVar4 = true;
					}
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iParam0)
	{
		if (!GAMEPLAY::IS_BIT_SET(uVar1, iVar0))
		{
			if (bVar4)
			{
				bVar4 = false;
			}
			else
			{
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_249(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_99.f_32, 5);
}

var func_250()
{
	return Global_1646081.f_3;
}

int func_251()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_252();
	}
	return func_132(Global_4456448.f_130782);
}

var func_252()
{
	return Global_2448386.f_16;
}

int func_253()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_255();
	}
	return func_254(Global_4456448.f_130782);
}

int func_254(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4984[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_255()
{
	return Global_2448386.f_14;
}

int func_256()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2)) && !func_249(iVar2)) && Global_1589747[iVar2 /*790*/].f_211 != 8) && !GAMEPLAY::IS_BIT_SET(Global_1589747[iVar2 /*790*/].f_39.f_18, 14))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_257()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_558.f_1, 0);
}

var func_258()
{
	return UI::_GET_LABEL_TEXT("CREATOR_NO_T");
}

bool func_259()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_142, 0);
}

int func_260(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 13;
		
		case 1:
			return 13;
		
		case 3:
			return 6;
		
		case 2:
			return 2;
		
		case 4:
			return 12;
		
		case 5:
			return 51;
		
		default:
	}
	return 0;
}

void func_261()
{
	if (func_262())
	{
		Global_2456479.f_8 = 1;
	}
	Global_2456479.f_7 = 1;
}

bool func_262()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386.f_2, 11);
}

int func_263(int iParam0)
{
	if (GAMEPLAY::IS_PS3_VERSION() || (GAMEPLAY::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::_0x72D918C99BCACC54(1) == 0 || NETWORK::_0xAEEF48CDF5B6CE7C(1, -1) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::_0x72D918C99BCACC54(1) == 0)
	{
		return 0;
	}
	if (func_264() == 0)
	{
		return 0;
	}
	return 1;
}

int func_264()
{
	if (GAMEPLAY::IS_PS3_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (GAMEPLAY::IS_XBOX360_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if ((GAMEPLAY::IS_ORBIS_VERSION() && NETWORK::_NETWORK_HAS_RESTRICTED_PROFILE() == 0) && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (GAMEPLAY::IS_DURANGO_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	if (GAMEPLAY::IS_PC_VERSION() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
		return 1;
	}
	return 0;
}

int func_265(int iParam0)
{
	if (GAMEPLAY::IS_PS3_VERSION() || (GAMEPLAY::IS_ORBIS_VERSION() && iParam0 == 0))
	{
		if (NETWORK::_0x72D918C99BCACC54(0) == 0 || NETWORK::_0xAEEF48CDF5B6CE7C(0, -1) == 0)
		{
			return 0;
		}
	}
	else if (NETWORK::_0x72D918C99BCACC54(0) == 0)
	{
		return 0;
	}
	if (func_264() == 0)
	{
		return 0;
	}
	return 1;
}

void func_266(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
	
	Global_4456448.f_131888 = 0;
	if (bParam0)
	{
		if (((!func_169() || func_291() == 38) || func_291() == 41) || func_291() == 36)
		{
			Global_4456448.f_130782 = 0;
			Global_4456448.f_147469 = 2;
		}
		Global_4456448.f_87006 = -1;
		Global_4456448.f_11 = 0;
		Global_4456448.f_12 = 0;
		Global_4456448.f_13 = 0;
		Global_4456448.f_14 = 0;
		Global_4456448.f_15 = 0;
		Global_4456448.f_16 = 0;
		Global_4456448.f_17 = 0;
		Global_4456448.f_18 = 0;
		Global_4456448.f_19 = 0;
		Global_4456448.f_20 = 0;
		Global_4456448.f_21 = 0;
		Global_4456448.f_22 = 0;
		Global_4456448.f_23 = 0;
		Global_4456448.f_24 = 0;
		Global_4456448.f_25 = 0;
		Global_4456448.f_26 = 0;
		Global_4456448.f_27 = 0;
		Global_4456448.f_28 = 0;
		Global_4456448.f_29 = 0;
		Global_4456448.f_30 = 0;
		Global_4456448.f_31 = 0;
		Global_4456448.f_32 = 0;
		Global_4456448.f_33 = 0;
		Global_4456448.f_154299 = 0;
		Global_4456448.f_56 = 0;
		Global_4456448.f_103 = 0;
		Global_4456448.f_43708 = 0;
		Global_4456448.f_147169 = 0;
		Global_4456448.f_10 = 0;
		Global_4456448.f_35 = 0;
		Global_4456448.f_61 = 0;
		Global_4456448.f_37 = 0;
		Global_4456448.f_60 = 0;
		Global_4456448.f_62 = 0;
		Global_4456448.f_63 = 0;
		Global_4456448.f_65 = 0;
		Global_4456448.f_66 = 0;
		Global_4456448.f_67 = 0;
		Global_4456448.f_68 = 0;
		Global_4456448.f_39 = 0;
		Global_4456448.f_40 = 1;
		Global_4456448.f_6 = 0;
		Global_4456448.f_55 = 0;
		Global_4456448.f_153044 = 10;
		Global_4456448.f_153045 = 5f;
		Global_4456448.f_153046 = 10;
		Global_4456448.f_59 = 1;
		Global_4456448.f_36 = 0;
		Global_4456448.f_131866 = 0;
		Global_4456448.f_131868 = 0;
		Global_4456448.f_131867 = 0;
		Global_4456448.f_131865 = 0;
		Global_4456448.f_50189 = 0;
		Global_4456448.f_152992 = -1;
		Global_4456448.f_153932 = 0;
		Global_4456448.f_153933 = 0;
		Global_4456448.f_153934 = 0;
		Global_4456448.f_153935 = 0;
		Global_4456448.f_153936 = 0;
		Global_4456448.f_153937 = 1;
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&(Global_4456448.f_154115[iVar3 /*16*/]), "", 64);
			iVar3++;
		}
		Global_4456448.f_154303 = 0f;
		Global_4456448.f_154304 = -1;
		if (bParam1)
		{
			Global_4456448.f_4 = 0;
			Global_4456448.f_5 = 0;
		}
		Global_4456448.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_4456448.f_43771[iVar0 /*39*/] = -1;
			Global_4456448.f_43771[iVar0 /*39*/].f_1 = -1;
			Global_4456448.f_43771[iVar0 /*39*/].f_2 = 0;
			Global_4456448.f_43771[iVar0 /*39*/].f_4 = 0;
			Global_4456448.f_43771[iVar0 /*39*/].f_3 = -1;
			iVar3 = 0;
			while (iVar3 <= 1)
			{
				StringCopy(&(Global_4456448.f_43771[iVar0 /*39*/].f_5[iVar3 /*16*/]), "", 64);
				iVar3++;
			}
			Global_4456448.f_43771[iVar0 /*39*/].f_38 = 0;
			iVar0++;
		}
		Global_4456448.f_131869 = 0;
		Global_4456448.f_131870 = 0;
		Global_4456448.f_131871 = 0;
		Global_4456448.f_131861 = -1;
		Global_4456448.f_131860 = 0;
		Global_4456448.f_131859 = -1;
		Global_4456448.f_72 = 0;
		Global_4456448.f_80 = { 0f, 0f, 0f };
		Global_4456448.f_83 = { 0f, 0f, 0f };
		Global_4456448.f_86 = { 0f, 0f, 0f };
		Global_4456448.f_89 = { 0f, 0f, 0f };
		Global_4456448.f_92 = { 0f, 0f, 0f };
		Global_4456448.f_95 = { 0f, 0f, 0f };
		Global_4456448.f_98 = 0f;
		Global_4456448.f_99 = 0f;
		Global_4456448.f_130757 = 0f;
		Global_4456448.f_102 = 0;
		Global_4456448.f_131887 = 0;
		Global_4456448.f_153024 = 0;
		Global_4456448.f_153982 = 0;
		Global_4456448.f_147471 = 0;
		iVar0 = 0;
		while (iVar0 < 18)
		{
			Global_4456448.f_53247[iVar0 /*4*/][0] = 0;
			Global_4456448.f_53247[iVar0 /*4*/][1] = 0;
			Global_4456448.f_53228[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4456448.f_153485), "", 64);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_4456448.f_153501[iVar0 /*16*/]), "", 64);
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			StringCopy(&(Global_4456448.f_153582[iVar0 /*65*/][iVar4 /*16*/]), "", 64);
			iVar4++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_4456448.f_50190[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_4456448.f_136577[iVar0 /*3*/][0] = 0;
		Global_4456448.f_136577[iVar0 /*3*/][1] = 0;
		Global_4456448.f_136596[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_136603 = 0;
	Global_4456448.f_136604 = -1;
	Global_4456448.f_1 = -1;
	StringCopy(&(Global_4456448.f_131107), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_4456448.f_136181[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_4456448.f_149504 = 0;
	Global_4456448.f_54 = 0;
	Global_4456448.f_74 = { 0f, 0f, 0f };
	Global_4456448.f_147470 = -1;
	StringCopy(&(Global_4456448.f_130789), "", 64);
	StringCopy(&(Global_4456448.f_131091), "", 64);
	StringCopy(&(Global_4456448.f_153469), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_4456448.f_131075[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_4456448.f_130811[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_290();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_4456448.f_43771[0 /*39*/].f_5[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_289();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_47[iVar0] = 0;
		Global_4456448.f_147143[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_147148[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_42[iVar0] = 1;
		Global_4456448.f_129888[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_129901[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_129914[iVar0] = 0f;
		Global_4456448.f_149508[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_149521[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_149534[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_149547[iVar0] = 45f;
		Global_4456448.f_149552[iVar0] = 0f;
		Global_4456448.f_125859[iVar0] = -1;
		Global_4456448.f_76669[iVar0] = -1;
		StringCopy(&(Global_4456448.f_150243[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4456448.f_150308[iVar0 /*16*/]), "", 64);
		Global_4456448.f_150373[iVar0] = 0;
		StringCopy(&(Global_4456448.f_150045[iVar0 /*16*/]), "", 64);
		Global_4456448.f_136647[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_4456448.f_150110[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_4456448.f_44624[iVar0] = -1;
		Global_4456448.f_44629[iVar0] = -1;
		StringCopy(&(Global_4456448.f_152951[iVar0 /*4*/]), "", 16);
		StringCopy(&(Global_4456448.f_152968[iVar0 /*4*/]), "", 16);
		Global_4456448.f_152985[iVar0] = 0;
		Global_4456448.f_153017[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_153032 = 0;
	Global_4456448.f_153031 = 0;
	Global_4456448.f_153033 = 0;
	Global_4456448.f_153034 = 1;
	Global_4456448.f_153035 = 2;
	Global_4456448.f_153036 = 3;
	Global_4456448.f_153037 = 4;
	Global_4456448.f_153038 = 6;
	Global_4456448.f_153039 = 7;
	Global_4456448.f_153040 = 9;
	Global_4456448.f_153041 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_153097[iVar0] = 0;
		Global_4456448.f_153102[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_153048 = 5;
	Global_4456448.f_153047 = 0;
	Global_4456448.f_153043 = 3;
	Global_4456448.f_153924 = 60000;
	Global_4456448.f_153927 = 1f;
	Global_4456448.f_153925 = 0.5f;
	Global_4456448.f_153926 = 0.5f;
	Global_4456448.f_153928 = 50f;
	Global_4456448.f_153929 = 100f;
	Global_4456448.f_153119 = 5000;
	Global_4456448.f_153120 = 2500;
	Global_4456448.f_153121 = 3000;
	Global_4456448.f_149557 = { 0f, 0f, 0f };
	Global_4456448.f_149560 = { 0f, 0f, 0f };
	Global_4456448.f_149563 = { 0f, 0f, 0f };
	Global_4456448.f_149566 = 45f;
	Global_4456448.f_149567 = 0f;
	Global_4456448.f_149568 = 0;
	Global_4456448.f_150400 = 10000;
	Global_4456448.f_150401 = 0;
	Global_4456448.f_150415 = 1;
	Global_4456448.f_150402 = 1f;
	Global_4456448.f_153082 = 1;
	Global_4456448.f_153083 = 0;
	Global_4456448.f_150403 = 0f;
	Global_4456448.f_150416 = 60f;
	Global_4456448.f_150417 = 5f;
	Global_4456448.f_150418 = 60f;
	Global_4456448.f_150419 = -1f;
	Global_4456448.f_150405 = 2;
	Global_4456448.f_150406 = 2;
	Global_4456448.f_150407 = 3000;
	Global_4456448.f_150408 = 150;
	Global_4456448.f_150409 = 3f;
	Global_4456448.f_150410 = 1f;
	Global_4456448.f_150411 = 25;
	Global_4456448.f_150412 = 5;
	Global_4456448.f_150413 = 5;
	Global_4456448.f_150414 = 2000;
	Global_4456448.f_150432 = -1f;
	StringCopy(&(Global_4456448.f_150433), "", 16);
	StringCopy(&(Global_4456448.f_150437), "", 16);
	StringCopy(&(Global_4456448.f_150441), "", 16);
	StringCopy(&(Global_4456448.f_150445), "", 16);
	StringCopy(&(Global_4456448.f_150449), "", 16);
	StringCopy(&(Global_4456448.f_150453), "", 16);
	Global_4456448.f_55505 = 0.075f;
	Global_4456448.f_55506 = 0.075f;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_55508[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_55539[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4456448.f_150420 = 0;
	Global_4456448.f_150429 = 0;
	Global_4456448.f_150421 = 0;
	Global_4456448.f_150422 = 0;
	Global_4456448.f_150423 = 0;
	Global_4456448.f_150424 = 0;
	Global_4456448.f_150425 = 0;
	Global_4456448.f_150426 = 0;
	Global_4456448.f_150430 = 0;
	Global_4456448.f_150427 = -1f;
	Global_4456448.f_150428 = 0;
	Global_4456448.f_150431 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_4456448.f_119410[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4456448.f_119491[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4456448.f_119572[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_4456448.f_119716[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_287(&(Global_4456448.f_136652[iVar0 /*1457*/]));
		func_283(&(Global_4456448.f_143938[iVar0 /*470*/]));
		iVar0++;
	}
	func_283(&(Global_4456448.f_146289));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		func_282(&(Global_4456448.f_147342[iVar0 /*5*/]));
		iVar0++;
	}
	Global_4456448.f_147468 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_86856[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_86917[iVar0] = 0;
		Global_4456448.f_86938[iVar0] = -1;
		Global_4456448.f_86959[iVar0] = 100f;
		Global_4456448.f_86981[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_86980 = 0;
	Global_4456448.f_87002 = 0;
	iVar0 = 0;
	while (iVar0 <= 74)
	{
		func_214(&(Global_4456448.f_131905[iVar0 /*57*/]), iVar0);
		iVar0++;
	}
	Global_4456448.f_136470[0] = 0;
	Global_4456448.f_136470[1] = 0;
	Global_4456448.f_136474 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_281(&(Global_4456448.f_147180[iVar0 /*16*/]));
		iVar0++;
	}
	Global_4456448.f_152990 = 0;
	if (bParam3)
	{
		Global_4456448.f_2 = 0;
	}
	Global_4456448.f_136487 = 0;
	Global_4456448.f_131839 = 0;
	Global_4456448.f_147169 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_131873[iVar0] = -1;
		Global_4456448.f_147472[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_152991 = 0;
	Global_4456448.f_152950 = 0;
	Global_4456448.f_153014 = 0;
	Global_4456448.f_153016 = 0;
	Global_4456448.f_131903 = 0;
	Global_4456448.f_131904 = 0;
	Global_4456448.f_147513 = 0.5f;
	Global_4456448.f_136488 = 1;
	Global_4456448.f_136490 = 5;
	if (bParam3)
	{
		func_277(0);
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_147514[iVar0] = 0f;
		Global_4456448.f_147535[iVar0] = 0f;
		Global_4456448.f_147556[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_55585[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_55633[iVar0] = -1;
		Global_4456448.f_55643[iVar0] = -1;
		Global_4456448.f_55648[iVar0] = 1001;
		iVar0++;
	}
	Global_1643901 = 0;
	Global_4456448.f_7 = 0;
	Global_4456448.f_131846 = 0;
	Global_4456448.f_42927 = 0;
	iVar0 = 0;
	while (iVar0 < Global_4456448.f_125558)
	{
		Global_4456448.f_125558[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_4456448.f_125558[iVar0 /*5*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_43727[iVar0 /*4*/][0] = 0;
		Global_4456448.f_43727[iVar0 /*4*/][1] = 0;
		Global_4456448.f_43727[iVar0 /*4*/][2] = 0;
		Global_4456448.f_43710[iVar0 /*4*/][0] = 0;
		Global_4456448.f_43710[iVar0 /*4*/][1] = 0;
		Global_4456448.f_43710[iVar0 /*4*/][2] = 0;
		Global_4456448.f_43744[iVar0 /*4*/][0] = 0;
		Global_4456448.f_43744[iVar0 /*4*/][1] = 0;
		Global_4456448.f_43744[iVar0 /*4*/][2] = 0;
		Global_4456448.f_43761[iVar0] = 0;
		Global_4456448.f_43766[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_4456448.f_136515[iVar0 /*14*/][iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_136620[iVar0 /*3*/][0] = 0;
		Global_4456448.f_136620[iVar0 /*3*/][1] = 0;
		Global_4456448.f_136638[iVar0 /*2*/][0] = 0;
		Global_4456448.f_104[iVar0 /*10693*/] = { 0f, 0f, 0f };
		Global_4456448.f_104[iVar0 /*10693*/].f_4 = { 0f, 0f, 0f };
		Global_4456448.f_104[iVar0 /*10693*/].f_7 = { 0f, 0f, 0f };
		Global_4456448.f_104[iVar0 /*10693*/].f_11 = { 0f, 0f, 0f };
		Global_4456448.f_104[iVar0 /*10693*/].f_14 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_15 = { 0f, 0f, 0f };
		Global_4456448.f_104[iVar0 /*10693*/].f_18 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_19 = { 0f, 0f, 0f };
		Global_4456448.f_104[iVar0 /*10693*/].f_22 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_23 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_38 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_24 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_25 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_26 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_27 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_28 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_29 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_30 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_31 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_32 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_33 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_34 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_35 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_36 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_59 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_4451 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4453 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4492 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4565 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5811 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4452 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4454 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5812 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_61 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_62 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_63 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_246 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_247 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_248 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_430 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_431 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_432 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5813 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5832 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_57 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_58 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4043 = 60000;
		Global_4456448.f_104[iVar0 /*10693*/].f_4305 = 60000;
		Global_4456448.f_104[iVar0 /*10693*/].f_5188 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_696 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_697 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_9747 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_9748 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_9749 = 1;
		Global_4456448.f_104[iVar0 /*10693*/].f_4049 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4050 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_104[iVar0 /*10693*/].f_4051[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_4069[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_4087[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4105[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_4123[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4159[iVar1] = 4;
			Global_4456448.f_104[iVar0 /*10693*/].f_4177[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4213[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4249[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_4231[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_4267[iVar1] = 10;
			Global_4456448.f_104[iVar0 /*10693*/].f_4285[iVar1] = 10;
			Global_4456448.f_104[iVar0 /*10693*/].f_4195[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4141[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9984[iVar1] = 10;
			Global_4456448.f_104[iVar0 /*10693*/].f_10002[iVar1] = 10;
			Global_4456448.f_104[iVar0 /*10693*/].f_5814[iVar1] = -1;
			iVar1++;
		}
		Global_4456448.f_42877[iVar0] = 0;
		Global_4456448.f_42882[iVar0] = 0;
		Global_4456448.f_42887[iVar0] = -1;
		Global_4456448.f_42933[iVar0] = 0;
		Global_4456448.f_42970[iVar0] = 1;
		Global_4456448.f_42975[iVar0] = -1;
		StringCopy(&(Global_4456448.f_42938[iVar0 /*4*/]), "", 16);
		Global_4456448.f_42960[iVar0] = 3;
		Global_4456448.f_42965[iVar0] = -1;
		Global_4456448.f_42980[iVar0] = -1;
		Global_4456448.f_42985[iVar0] = -1;
		Global_4456448.f_42990[iVar0] = -1;
		Global_4456448.f_42995[iVar0] = -1;
		Global_4456448.f_43010[iVar0] = 0;
		Global_4456448.f_43015[iVar0] = -1;
		Global_4456448.f_42928[iVar0] = 0;
		Global_4456448.f_42955[iVar0] = 0;
		Global_4456448.f_136476[iVar0] = 0;
		Global_4456448.f_136481[iVar0] = 0;
		Global_4456448.f_55618[iVar0] = 100;
		Global_4456448.f_55623[iVar0] = 1f;
		Global_4456448.f_55628[iVar0] = 0;
		Global_4456448.f_55653[iVar0] = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5604 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5605 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5606 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5607 = 0;
		Global_1643901.f_1[iVar0] = 0;
		Global_4456448.f_136605[iVar0] = 0;
		Global_4456448.f_136610[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_4456448.f_130013[iVar0 /*53*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_4456448.f_130226[iVar0 /*21*/][iVar1 /*5*/][iVar2] = 0f;
				Global_4456448.f_130311[iVar0 /*53*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_4456448.f_150378[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 25)
		{
			Global_4456448.f_53320[iVar0 /*105*/][iVar1 /*4*/][0] = 0;
			Global_4456448.f_53320[iVar0 /*105*/][iVar1 /*4*/][1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_152993[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 25)
		{
			Global_4456448.f_53778[iVar0 /*421*/][0 /*105*/][iVar1 /*4*/][0] = 0;
			Global_4456448.f_53778[iVar0 /*421*/][1 /*105*/][iVar1 /*4*/][0] = 0;
			Global_4456448.f_53778[iVar0 /*421*/][0 /*105*/][iVar1 /*4*/][1] = 0;
			Global_4456448.f_53778[iVar0 /*421*/][1 /*105*/][iVar1 /*4*/][1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_4456448.f_149570[iVar0 /*66*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_4456448.f_149835[iVar0 /*26*/][iVar1 /*5*/][iVar2] = 0f;
				iVar2++;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 81)
		{
			Global_4456448.f_104[iVar0 /*10693*/].f_64[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_249[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_433[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_160[iVar1] = 1f;
			Global_4456448.f_104[iVar0 /*10693*/].f_345[iVar1] = 1f;
			Global_4456448.f_104[iVar0 /*10693*/].f_529[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 11)
		{
			Global_4456448.f_104[iVar0 /*10693*/].f_147[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_332[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_516[iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_104[iVar0 /*10693*/].f_614[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_619[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_44163[iVar1 /*27*/] = 0;
			Global_4456448.f_44163[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_4456448.f_44163[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_4456448.f_44163[iVar1 /*27*/].f_25 = 0f;
			Global_4456448.f_44163[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_4456448.f_44163[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_4456448.f_44163[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_4456448.f_44163[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_4456448.f_104[iVar0 /*10693*/].f_5352[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5370[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5388[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5406[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5424[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5442[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5460[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5478[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5496[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5514[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5532[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5550[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5568[iVar1] = 0;
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_10420[iVar1 /*16*/]), "", 64);
			Global_4456448.f_104[iVar0 /*10693*/].f_10402[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_10332[iVar1 /*4*/].f_1 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_10332[iVar1 /*4*/] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_10332[iVar1 /*4*/].f_3 = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_10332[iVar1 /*4*/].f_2 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5586[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_39[iVar1] = -1;
			Global_4456448.f_86770[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5608[iVar1] = 60000;
			Global_4456448.f_104[iVar0 /*10693*/].f_5626[iVar1] = 60000;
			Global_4456448.f_104[iVar0 /*10693*/].f_10260[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_10278[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_10296[iVar1] = 0;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_5730[iVar2 /*16*/]), "", 64);
				Global_4456448.f_104[iVar0 /*10693*/].f_5644[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_4456448.f_43020[iVar1 /*5*/][iVar0] = -1;
			Global_4456448.f_43106[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_43192[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_43278[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_43364[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_43450[iVar1 /*5*/][iVar0] = 1500;
			Global_4456448.f_43536[iVar1 /*5*/][iVar0] = 1400;
			Global_4456448.f_43622[iVar1 /*5*/][iVar0] = 35;
			StringCopy(&(Global_1643901.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1643901.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_716[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_734[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4307[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4325[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4343[iVar1] = 1;
			Global_4456448.f_104[iVar0 /*10693*/].f_4415[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4433[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4493[iVar1] = 10000;
			Global_4456448.f_104[iVar0 /*10693*/].f_4455[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4473[iVar1] = 1;
			Global_4456448.f_104[iVar0 /*10693*/].f_4529[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_4361[iVar1] = 1;
			Global_4456448.f_104[iVar0 /*10693*/].f_4547[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4566[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4850[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4886[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4602[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4584[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4742[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4868[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4904[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4796[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4814[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4760[iVar1] = 100;
			Global_4456448.f_104[iVar0 /*10693*/].f_4620[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_4672[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_4724[iVar1] = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_4778[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4832[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4922[iVar1] = -1f;
			Global_4456448.f_104[iVar0 /*10693*/].f_1112[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_1130[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_1148[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1166[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1202[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_752[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_770[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1184[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1220[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9369[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9387[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9405[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9423[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9441[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9459[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9477[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9513[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9675[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9495[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9531[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9549[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9567[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9585[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9603[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_624[iVar1] = 5;
			Global_4456448.f_104[iVar0 /*10693*/].f_642[iVar1] = 20;
			Global_4456448.f_104[iVar0 /*10693*/].f_1022[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_5226[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5244[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5262[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5280[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_5298[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_5316[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1076[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1094[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4379[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_4397[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_660[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_678[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_698[iVar1] = 0;
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_5833[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_6106[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_6379[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_7198[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_6652[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_6925[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_9109[0 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_9109[1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_7471[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_7744[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_8017[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_8290[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_8563[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_104[iVar0 /*10693*/].f_8836[iVar1 /*16*/]), "", 64);
			Global_4456448.f_104[iVar0 /*10693*/].f_5080[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5116[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5098[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_4940[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_4992[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_16 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/] = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_3 = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_6 = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_9 = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_10 = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_19 = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_17 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_33 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_13 = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_18 = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_20 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_21 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_22 = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_23 = 120;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_28 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_29 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_34 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_35 = 12;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_30 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_31 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1242[iVar1 /*36*/].f_32 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_16 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/] = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_3 = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_6 = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_9 = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_10 = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_19 = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_17 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_33 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_13 = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_18 = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_20 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_21 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_22 = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_23 = 120;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_28 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_29 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_34 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_35 = 12;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_30 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_31 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_1855[iVar1 /*36*/].f_32 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5044[iVar1] = 3f;
			Global_4456448.f_104[iVar0 /*10693*/].f_5062[iVar1] = 0.001f;
			Global_4456448.f_104[iVar0 /*10693*/].f_4511[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5134[iVar1] = 10.5f;
			Global_4456448.f_104[iVar0 /*10693*/].f_5152[iVar1] = 1f;
			Global_4456448.f_104[iVar0 /*10693*/].f_5170[iVar1] = 1f;
			Global_4456448.f_104[iVar0 /*10693*/].f_5334[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_10038[iVar1 /*13*/] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_10038[iVar1 /*13*/].f_1 = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_10038[iVar1 /*13*/].f_2 = { 0f, 0f, 0f };
			Global_4456448.f_104[iVar0 /*10693*/].f_788[iVar1] = 12;
			Global_4456448.f_104[iVar0 /*10693*/].f_806[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_824[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_842[iVar1] = 12;
			Global_4456448.f_104[iVar0 /*10693*/].f_860[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_878[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_896[iVar1] = 100;
			Global_4456448.f_104[iVar0 /*10693*/].f_9768[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_10020[iVar1] = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_914[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_932[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_950[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_968[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_986[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9729[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_1004[iVar1] = -2;
			Global_4456448.f_104[iVar0 /*10693*/].f_1040[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_1058[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_3151[iVar1 /*9*/] = 1000;
			Global_4456448.f_104[iVar0 /*10693*/].f_3151[iVar1 /*9*/].f_1 = 1.15f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3151[iVar1 /*9*/].f_2 = 25;
			Global_4456448.f_104[iVar0 /*10693*/].f_3151[iVar1 /*9*/].f_7 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_3151[iVar1 /*9*/].f_3 = 1;
			Global_4456448.f_104[iVar0 /*10693*/].f_3151[iVar1 /*9*/].f_5 = 25;
			Global_4456448.f_104[iVar0 /*10693*/].f_3151[iVar1 /*9*/].f_6 = 10f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3151[iVar1 /*9*/].f_8 = 100;
			Global_4456448.f_104[iVar0 /*10693*/].f_3510[iVar1 /*3*/] = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3510[iVar1 /*3*/].f_1 = 1;
			Global_4456448.f_104[iVar0 /*10693*/].f_3510[iVar1 /*3*/].f_2 = 50;
			Global_4456448.f_104[iVar0 /*10693*/].f_3305[iVar1 /*12*/] = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3305[iVar1 /*12*/].f_1[0] = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3305[iVar1 /*12*/].f_1[1] = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3305[iVar1 /*12*/].f_1[2] = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3305[iVar1 /*12*/].f_1[3] = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3305[iVar1 /*12*/].f_6 = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3305[iVar1 /*12*/].f_7 = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3305[iVar1 /*12*/].f_8 = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3305[iVar1 /*12*/].f_9 = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3305[iVar1 /*12*/].f_10 = 0f;
			Global_4456448.f_104[iVar0 /*10693*/].f_3305[iVar1 /*12*/].f_11 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_3631[iVar1 /*3*/] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_3631[iVar1 /*3*/].f_1 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_3631[iVar1 /*3*/].f_2 = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_10314[iVar1] = 0;
			iVar5 = 0;
			iVar5 = 0;
			while (iVar5 <= 19)
			{
				Global_4456448.f_104[iVar0 /*10693*/].f_3683[iVar1 /*21*/][iVar5] = 0;
				iVar5++;
			}
			Global_4456448.f_104[iVar0 /*10693*/].f_9786[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9804[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9822[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9840[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9858[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9876[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9894[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9912[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9930[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9948[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9966[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9142[iVar1 /*5*/][0] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9142[iVar1 /*5*/][1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9142[iVar1 /*5*/][2] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9142[iVar1 /*5*/][3] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9228[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9246[iVar1 /*4*/][0] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9246[iVar1 /*4*/][1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9246[iVar1 /*4*/][2] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9315[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9333[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9351[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_5190[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9621[iVar1] = 0;
			Global_4456448.f_104[iVar0 /*10693*/].f_9639[iVar1] = -1;
			Global_4456448.f_104[iVar0 /*10693*/].f_9657[iVar1] = 0;
			func_276(&(Global_4456448.f_104[iVar0 /*10693*/].f_3562[iVar1 /*4*/]));
			iVar1++;
		}
		Global_4456448.f_104[iVar0 /*10693*/].f_4042 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4304 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4041 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4303 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4044 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4045 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4046 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4047 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4048 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_4306 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_1238 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_1239 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_428 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_429 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_612 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_613 = -1;
		Global_4456448.f_104[iVar0 /*10693*/].f_5795 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5796 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5797 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5798 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5799 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5800 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5801 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5802 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5803 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5804 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5805 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5806 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5807 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5808 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5809 = 0;
		Global_4456448.f_104[iVar0 /*10693*/].f_5810 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_119653[iVar0] = 0;
		Global_4456448.f_119658[iVar0] = 0;
		Global_4456448.f_119663[iVar0] = 0;
		Global_4456448.f_119668[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_119680 = 0;
	Global_4456448.f_119681 = 0;
	Global_4456448.f_119682 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_119683[iVar0] = 0;
		Global_4456448.f_119694[iVar0] = 0;
		Global_4456448.f_119705[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_77 = { 0f, 0f, 0f };
	Global_4456448.f_44634 = { 0f, 0f, 0f };
	Global_4456448.f_100 = 0f;
	Global_4456448.f_146759 = { 0f, 0f, 0f };
	Global_4456448.f_152991 = 0;
	Global_4456448.f_153014 = 0;
	Global_4456448.f_131840[0] = 0;
	Global_4456448.f_131840[1] = 0;
	Global_4456448.f_131844 = 0;
	Global_4456448.f_131839 = 0;
	Global_4456448.f_147477 = 0;
	Global_4456448.f_147478 = 0;
	Global_4456448.f_147479 = 0;
	Global_4456448.f_147480 = 0;
	Global_4456448.f_147482 = 0;
	Global_4456448.f_147484 = 0;
	Global_4456448.f_147486 = 0;
	Global_4456448.f_147489 = 0;
	Global_4456448.f_147490 = 0;
	Global_4456448.f_147491 = 0;
	Global_4456448.f_147492 = 0;
	Global_4456448.f_147493 = 0;
	Global_4456448.f_147494 = 0;
	Global_4456448.f_147495 = 0;
	Global_4456448.f_147496 = 0;
	Global_4456448.f_147502 = -1;
	Global_4456448.f_147503 = -1;
	Global_4456448.f_147504 = -1;
	Global_4456448.f_147505 = -1;
	Global_4456448.f_147506 = -1;
	Global_4456448.f_147507 = -1;
	Global_4456448.f_147508 = -1;
	Global_4456448.f_147509 = -1;
	Global_4456448.f_147510 = -1;
	Global_4456448.f_147511 = -1;
	Global_4456448.f_147512 = 1.5f;
	Global_4456448.f_50209 = 0;
	Global_4456448.f_50210 = 0;
	iVar0 = 0;
	while (iVar0 <= 101)
	{
		Global_4456448.f_45659[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_47399[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_44638[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_44638[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_44638[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_46378[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_46378[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_46378[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_45966[iVar0] = 0f;
		Global_4456448.f_47706[iVar0] = 0f;
		Global_4456448.f_49364[iVar0] = 1f;
		Global_4456448.f_46275[iVar0] = 1f;
		Global_4456448.f_49467[iVar0] = 1f;
		Global_4456448.f_49570[iVar0] = 0f;
		Global_4456448.f_49673[iVar0] = 0f;
		Global_4456448.f_47809[iVar0] = -1;
		Global_4456448.f_47912[iVar0] = 0;
		Global_4456448.f_49158[iVar0] = 0f;
		Global_4456448.f_48015[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_48322[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_48629[iVar0] = -1;
		Global_4456448.f_48732[iVar0] = 0;
		Global_4456448.f_46069[iVar0] = 0;
		Global_4456448.f_46172[iVar0] = 0;
		Global_4456448.f_48938[iVar0] = -1;
		Global_4456448.f_49041[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_53217 = 0;
	if (bParam0)
	{
		Global_4456448.f_53219 = 0;
		Global_4456448.f_53227 = 0;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_4456448.f_49144[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_53225 = 0;
	Global_4456448.f_53226 = 0;
	Global_4456448.f_55577 = 0f;
	Global_4456448.f_59274 = 0;
	iVar0 = 0;
	while (iVar0 <= 199)
	{
		Global_4456448.f_59275[iVar0 /*80*/] = { 0f, 0f, 0f };
		Global_4456448.f_59275[iVar0 /*80*/].f_6 = 0f;
		Global_4456448.f_59275[iVar0 /*80*/].f_7 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_9 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_8 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_10 = 1;
		Global_4456448.f_59275[iVar0 /*80*/].f_21 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_22 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_12 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_13 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_14 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_15 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_16 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_17 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_11 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_48 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_49 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_50 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_18 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_19 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_20 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_23 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_51 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_24 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_25 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_26 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_27 = 1;
		Global_4456448.f_59275[iVar0 /*80*/].f_37 = 10f;
		Global_4456448.f_59275[iVar0 /*80*/].f_38 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_67 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_68 = 1;
		Global_4456448.f_59275[iVar0 /*80*/].f_71 = { 0f, 0f, 0f };
		Global_4456448.f_59275[iVar0 /*80*/].f_74 = 0f;
		Global_4456448.f_59275[iVar0 /*80*/].f_75 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_76 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_77 = 0f;
		Global_4456448.f_59275[iVar0 /*80*/].f_78 = 0f;
		Global_4456448.f_59275[iVar0 /*80*/].f_79 = -1;
		Global_4456448.f_59275[iVar0 /*80*/].f_69 = 0;
		Global_4456448.f_59275[iVar0 /*80*/].f_70 = -1;
		iVar0++;
	}
	func_274();
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_272(&(Global_4456448.f_150457[iVar0 /*248*/]));
		iVar0++;
	}
	Global_4456448.f_152938 = 0;
	Global_4456448.f_75375 = 0;
	Global_4456448.f_75376 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_4456448.f_75377[iVar0 /*39*/] = { 0f, 0f, 0f };
		Global_4456448.f_75377[iVar0 /*39*/].f_6 = 0f;
		Global_4456448.f_75377[iVar0 /*39*/].f_7 = 0;
		Global_4456448.f_75377[iVar0 /*39*/].f_8 = -1;
		Global_4456448.f_75377[iVar0 /*39*/].f_12 = -1;
		Global_4456448.f_75377[iVar0 /*39*/].f_11 = -1;
		Global_4456448.f_75377[iVar0 /*39*/].f_13 = 1;
		Global_4456448.f_75377[iVar0 /*39*/].f_18 = 0;
		Global_4456448.f_75377[iVar0 /*39*/].f_31 = 0;
		Global_4456448.f_75377[iVar0 /*39*/].f_14 = 0;
		Global_4456448.f_75377[iVar0 /*39*/].f_28 = 0;
		Global_4456448.f_75377[iVar0 /*39*/].f_29 = 0;
		Global_4456448.f_75377[iVar0 /*39*/].f_30 = 0;
		Global_4456448.f_75377[iVar0 /*39*/].f_15 = -1;
		Global_4456448.f_75377[iVar0 /*39*/].f_16 = -1;
		Global_4456448.f_75377[iVar0 /*39*/].f_17 = -1;
		Global_4456448.f_75377[iVar0 /*39*/].f_9 = 0;
		Global_4456448.f_75377[iVar0 /*39*/].f_10 = 1;
		Global_4456448.f_75377[iVar0 /*39*/].f_34 = 0;
		Global_4456448.f_75377[iVar0 /*39*/].f_33 = 0;
		Global_4456448.f_75377[iVar0 /*39*/].f_36 = -1;
		Global_4456448.f_75377[iVar0 /*39*/].f_37 = -1;
		Global_4456448.f_75377[iVar0 /*39*/].f_38 = -1;
		iVar0++;
	}
	Global_4456448.f_58799 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		func_271(&(Global_4456448.f_58800[iVar0 /*22*/]));
		iVar0++;
	}
	Global_4456448.f_59131 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_59132[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_4456448.f_59132[iVar0 /*7*/].f_3 = 0f;
		Global_4456448.f_59132[iVar0 /*7*/].f_4 = 0;
		Global_4456448.f_59132[iVar0 /*7*/].f_5 = 0;
		Global_4456448.f_59132[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_4456448.f_55578 = 3.5f;
		Global_4456448.f_55579 = 7f;
		Global_4456448.f_55580 = 0f;
		Global_4456448.f_55581 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_4456448.f_55585[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_4456448.f_55633[iVar0] = -1;
			Global_4456448.f_55638[iVar0] = -1;
			Global_4456448.f_55643[iVar0] = -1;
			Global_4456448.f_55648[iVar0] = 1001;
			iVar0++;
		}
	}
	Global_4456448.f_131878 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_53206[iVar0] = 0;
		Global_4456448.f_136572[iVar0] = -1;
		Global_4456448.f_136633[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_52712[iVar1 /*29*/][iVar0] = 0;
			Global_4456448.f_52712[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_4456448.f_52712[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_4456448.f_52712[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_4456448.f_52712[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_4456448.f_147170[iVar0] = 0;
		Global_4456448.f_147175[iVar0] = 1f;
		Global_4456448.f_153919[iVar0] = -1;
		Global_4456448.f_55659[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
		Global_4456448.f_55664 = 1;
	}
	Global_4456448.f_55666 = 0;
	Global_4456448.f_55667 = 0;
	Global_4456448.f_55668 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_55669[iVar0 /*149*/] = { 0f, 0f, 0f };
		Global_4456448.f_55669[iVar0 /*149*/].f_4 = { 0f, 0f, 0f };
		Global_4456448.f_55669[iVar0 /*149*/].f_3 = 0f;
		Global_4456448.f_55669[iVar0 /*149*/].f_7 = 50f;
		Global_4456448.f_55669[iVar0 /*149*/].f_8 = 0f;
		Global_4456448.f_55669[iVar0 /*149*/].f_9 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_10 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_11 = { 0f, 0f, 0f };
		Global_4456448.f_55669[iVar0 /*149*/].f_14 = 0f;
		Global_4456448.f_55669[iVar0 /*149*/].f_15 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_16 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_27 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_31 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_32 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_34 = 0.8f;
		Global_4456448.f_55669[iVar0 /*149*/].f_35 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_50 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_47 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_48 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_49 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_51 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_52 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_53 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_54 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_55 = 60;
		Global_4456448.f_55669[iVar0 /*149*/].f_56 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_29 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_30 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_72 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_71 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_73 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_41 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_114 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_36 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_37 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_38 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_74 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_39 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_57 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_58 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_59 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_102 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_103 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_104 = { 0f, 0f, 0f };
		Global_4456448.f_55669[iVar0 /*149*/].f_107 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_100 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_101 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_108 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_115 = 1000;
		Global_4456448.f_55669[iVar0 /*149*/].f_113 = 1;
		Global_4456448.f_55669[iVar0 /*149*/].f_117 = 0f;
		Global_4456448.f_55669[iVar0 /*149*/].f_118 = 1f;
		Global_4456448.f_55669[iVar0 /*149*/].f_119 = 3f;
		Global_4456448.f_55669[iVar0 /*149*/].f_120 = 4f;
		Global_4456448.f_55669[iVar0 /*149*/].f_121 = 3f;
		Global_4456448.f_55669[iVar0 /*149*/].f_122 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_123 = 5f;
		Global_4456448.f_55669[iVar0 /*149*/].f_126 = 0f;
		Global_4456448.f_55669[iVar0 /*149*/].f_33 = 0;
		Global_4456448.f_55669[iVar0 /*149*/].f_116 = 0f;
		Global_4456448.f_55669[iVar0 /*149*/].f_124 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_125 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_127 = { 0f, 0f, 0f };
		StringCopy(&(Global_4456448.f_55669[iVar0 /*149*/].f_130), "", 64);
		Global_4456448.f_55669[iVar0 /*149*/].f_146 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_147 = -1;
		Global_4456448.f_55669[iVar0 /*149*/].f_148 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_55669[iVar0 /*149*/].f_17[iVar1] = 0;
			Global_4456448.f_55669[iVar0 /*149*/].f_22[iVar1] = 99999;
			Global_4456448.f_55669[iVar0 /*149*/].f_84[iVar1] = 0;
			Global_4456448.f_55669[iVar0 /*149*/].f_89[iVar1] = 0;
			Global_4456448.f_55669[iVar0 /*149*/].f_61[iVar1] = -1;
			Global_4456448.f_55669[iVar0 /*149*/].f_66[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_4456448.f_146818[iVar0 /*18*/]), "", 64);
		Global_4456448.f_146818[iVar0 /*18*/].f_16 = 0;
		Global_4456448.f_146818[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_4456448.f_76665 = 0;
	Global_4456448.f_76666 = 0;
	if (bParam0)
	{
		if (func_133() && !func_190())
		{
			Global_4456448.f_76667 = -1;
		}
		else
		{
			Global_4456448.f_76667 = 0;
		}
	}
	Global_4456448.f_76668 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_76674[iVar0 /*48*/] = { 0f, 0f, 0f };
		Global_4456448.f_76674[iVar0 /*48*/].f_3 = { 0f, 0f, 0f };
		Global_4456448.f_76674[iVar0 /*48*/].f_15 = 76;
		Global_4456448.f_76674[iVar0 /*48*/].f_6 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_7 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_23 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_24 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_9 = 1f;
		Global_4456448.f_76674[iVar0 /*48*/].f_26 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_27 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_28 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_35 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_32 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_38 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_36 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_33 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_39 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_37 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_34 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_40 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_29 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_30 = -1;
		Global_4456448.f_76674[iVar0 /*48*/].f_31 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_41 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_42 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_43 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_44 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_45 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_46 = 0;
		Global_4456448.f_76674[iVar0 /*48*/].f_47 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_76674[iVar0 /*48*/].f_10[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_270();
	Global_4456448.f_153462 = 0;
	Global_4456448.f_153462.f_1 = 0;
	Global_4456448.f_153462.f_2 = 0;
	Global_4456448.f_153462.f_3 = 0;
	Global_4456448.f_153462.f_4 = 0;
	func_269();
	Global_4456448.f_153456 = -1;
	Global_4456448.f_153457 = 0;
	Global_4456448.f_153459 = 0;
	Global_4456448.f_153458 = -1;
	Global_4456448.f_153467 = -1;
	Global_4456448.f_55507 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_4456448.f_119673[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_131892 = -1;
	Global_4456448.f_131893 = 15;
	Global_4456448.f_131894 = -1;
	Global_4456448.f_131899 = -1;
	Global_4456448.f_131900 = 0;
	Global_4456448.f_131895 = 2.5f;
	Global_4456448.f_131896 = 8f;
	Global_4456448.f_131897 = 2.5f;
	Global_4456448.f_131898 = 8f;
	Global_4456448.f_79604 = 0;
	Global_4456448.f_59273 = 0;
	if (bParam0)
	{
		Global_4456448.f_55584 = -1;
		Global_4456448.f_53223 = -1;
	}
	Global_4456448.f_79605 = 0;
	Global_4456448.f_79606 = 0;
	Global_4456448.f_79607 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_268(&(Global_4456448.f_79608[iVar0 /*217*/]));
		iVar0++;
	}
	Global_4456448.f_129921 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_129922[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_4456448.f_129922[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_4456448.f_129922[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4456448.f_119797 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_119804[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_4456448.f_119804[iVar0 /*19*/].f_3 = 0f;
		Global_4456448.f_119804[iVar0 /*19*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_119798[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 59)
		{
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/] = { 0f, 0f, 0f };
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_3 = 0f;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_4 = 0;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_5 = 0;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_7 = -1;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_8 = 0;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_9 = -1;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_10 = -1;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_11 = -1;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_12 = 0;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_13 = 0;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_14 = 0;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_15 = 0;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_16 = 0;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_17 = -2;
			Global_4456448.f_120945[iVar0 /*1141*/][iVar1 /*19*/].f_18 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_4456448.f_87003 = 0;
	Global_4456448.f_87007 = 0;
	Global_4456448.f_87008 = 0;
	Global_4456448.f_87005 = 50;
	iVar0 = 0;
	while (iVar0 <= 79)
	{
		func_267(&(Global_4456448.f_87009[iVar0 /*400*/]));
		iVar0++;
	}
	Global_4456448.f_119797 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_119804[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_4456448.f_119804[iVar0 /*19*/].f_3 = 0f;
		Global_4456448.f_119804[iVar0 /*19*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_4456448.f_53212[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_50212[iVar0 /*119*/].f_53 = 0;
		Global_4456448.f_50212[iVar0 /*119*/].f_46 = 0;
		Global_4456448.f_50212[iVar0 /*119*/].f_20 = 0f;
		Global_4456448.f_50212[iVar0 /*119*/].f_28 = 0f;
		Global_4456448.f_50212[iVar0 /*119*/].f_29 = 0f;
		Global_4456448.f_50212[iVar0 /*119*/].f_30 = 0f;
		Global_4456448.f_50212[iVar0 /*119*/].f_57 = 0f;
		Global_4456448.f_50212[iVar0 /*119*/].f_58 = 0f;
		Global_4456448.f_50212[iVar0 /*119*/] = 0;
		Global_4456448.f_50212[iVar0 /*119*/].f_21 = { 0f, 0f, 0f };
		Global_4456448.f_50212[iVar0 /*119*/].f_24 = { 0f, 0f, 0f };
		Global_4456448.f_50212[iVar0 /*119*/].f_27 = 1f;
		Global_4456448.f_50212[iVar0 /*119*/].f_99 = 10.5f;
		Global_4456448.f_50212[iVar0 /*119*/].f_101 = 1f;
		Global_4456448.f_50212[iVar0 /*119*/].f_102 = 0f;
		Global_4456448.f_50212[iVar0 /*119*/].f_103 = -1;
		Global_4456448.f_50212[iVar0 /*119*/].f_104 = 0f;
		Global_4456448.f_50212[iVar0 /*119*/].f_105 = 0;
		Global_4456448.f_50212[iVar0 /*119*/].f_98 = 0;
		Global_4456448.f_50212[iVar0 /*119*/].f_54 = 0;
		Global_4456448.f_50212[iVar0 /*119*/].f_55 = 0;
		Global_4456448.f_50212[iVar0 /*119*/].f_56 = -1;
		Global_4456448.f_50212[iVar0 /*119*/].f_19 = 1f;
		Global_4456448.f_50212[iVar0 /*119*/].f_106 = -1;
		Global_4456448.f_50212[iVar0 /*119*/].f_107 = -1f;
		Global_4456448.f_50212[iVar0 /*119*/].f_108 = 0f;
		Global_4456448.f_50212[iVar0 /*119*/].f_109 = 0f;
		Global_4456448.f_50212[iVar0 /*119*/].f_110 = -1;
		Global_4456448.f_50212[iVar0 /*119*/].f_112 = -1;
		Global_4456448.f_50212[iVar0 /*119*/].f_113 = -1;
		Global_4456448.f_50212[iVar0 /*119*/].f_114 = -1;
		Global_4456448.f_50212[iVar0 /*119*/].f_115 = 0;
		Global_4456448.f_50212[iVar0 /*119*/].f_116 = 0;
		Global_4456448.f_50212[iVar0 /*119*/].f_117 = 0;
		Global_4456448.f_50212[iVar0 /*119*/].f_47 = 0;
		if (Global_4456448.f_50212[iVar0 /*119*/].f_111 != 0)
		{
			GRAPHICS::DELETE_CHECKPOINT(Global_4456448.f_50212[iVar0 /*119*/].f_111);
			Global_4456448.f_50212[iVar0 /*119*/].f_111 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_50212[iVar0 /*119*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_50212[iVar0 /*119*/].f_14[iVar1] = 0f;
			Global_4456448.f_50212[iVar0 /*119*/].f_36[iVar1] = 0;
			Global_4456448.f_50212[iVar0 /*119*/].f_41[iVar1] = 0;
			Global_4456448.f_50212[iVar0 /*119*/].f_31[iVar1] = 0;
			Global_4456448.f_50212[iVar0 /*119*/].f_64[iVar1] = 0;
			Global_4456448.f_50212[iVar0 /*119*/].f_69[iVar1] = 99999;
			Global_4456448.f_50212[iVar0 /*119*/].f_74[iVar1] = 0;
			Global_4456448.f_50212[iVar0 /*119*/].f_79[iVar1] = 0;
			Global_4456448.f_50212[iVar0 /*119*/].f_59[iVar1] = 0;
			Global_4456448.f_50212[iVar0 /*119*/].f_84[iVar1] = 0;
			Global_4456448.f_50212[iVar0 /*119*/].f_89[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_4456448.f_129919 = 0;
	Global_4456448.f_53 = 0;
	Global_4456448.f_149505 = 12;
	Global_4456448.f_149506 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_146763[iVar0] = -1;
		Global_4456448.f_146768[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_55665 = 0;
	Global_4456448.f_147497 = -1;
	Global_4456448.f_146773 = 0;
	Global_4456448.f_146762 = 0;
	Global_4456448.f_146775 = 0;
	Global_4456448.f_146776 = 0;
	Global_4456448.f_146774 = 0;
	Global_4456448.f_146777 = 0;
	Global_4456448.f_146778 = 1;
	Global_4456448.f_146778.f_1 = 0;
	Global_4456448.f_146778.f_2 = 4;
	Global_4456448.f_146778.f_29[0] = 0;
	Global_4456448.f_146778.f_29[1] = 0;
	Global_4456448.f_146778.f_29[2] = 0;
	Global_4456448.f_146778.f_29[3] = 0;
	Global_4456448.f_146778.f_34[0] = 0;
	Global_4456448.f_146778.f_34[1] = 0;
	Global_4456448.f_146778.f_34[2] = 0;
	Global_4456448.f_146778.f_34[3] = 0;
	Global_4456448.f_146778.f_3 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_146778.f_4[iVar0] = 0;
		Global_4456448.f_146778.f_9[iVar0] = 0;
		Global_4456448.f_146778.f_14[iVar0] = 0;
		Global_4456448.f_146778.f_19[iVar0] = 0;
		Global_4456448.f_146778.f_24[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_146817 = 5;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_131851[iVar0] = 0;
		Global_4456448.f_43000[iVar0] = 0;
		Global_4456448.f_43005[iVar0] = 0;
		Global_4456448.f_153972[iVar0] = 0f;
		iVar0++;
	}
	iVar6 = 0;
	while (iVar6 <= 29)
	{
		Global_4456448.f_125895[iVar6] = -1;
		Global_4456448.f_125864[iVar6] = -1;
		iVar7 = 0;
		while (iVar7 <= 12)
		{
			iVar8 = 0;
			while (iVar8 <= 3)
			{
				Global_4456448.f_125926[iVar6 /*66*/][iVar7 /*5*/][iVar8] = -1;
				Global_4456448.f_127907[iVar6 /*66*/][iVar7 /*5*/][iVar8] = -1;
				iVar8++;
			}
			iVar7++;
		}
		iVar6++;
	}
	Global_4456448.f_153096 = 0;
	Global_4456448.f_153107 = { 0f, 0f, 0f };
	Global_4456448.f_153110 = { 0f, 0f, 0f };
	Global_4456448.f_153970 = 0;
	Global_4456448.f_154213 = 0;
	Global_4456448.f_153971 = 20;
	Global_4456448.f_154085 = 500;
	Global_4456448.f_154086 = 10f;
	Global_4456448.f_154087 = 0.5f;
	Global_4456448.f_154088 = 1f;
	Global_4456448.f_154089 = 0f;
	Global_4456448.f_154090 = 25f;
	Global_4456448.f_154091 = 15f;
	Global_4456448.f_154092 = 6f;
	Global_4456448.f_154093 = 4f;
	Global_4456448.f_154094 = 10;
	Global_4456448.f_154095 = 1;
	Global_4456448.f_154096 = 0f;
	func_247();
	Global_4456448.f_154097 = 0.5f;
	Global_4456448.f_154212 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_4456448.f_154214[iVar0] = 6;
		iVar0++;
	}
	Global_4456448.f_154247 = 0;
	iVar8 = 0;
	while (iVar8 <= 4)
	{
		Global_4456448.f_154250[iVar8 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_154266[iVar8] = 0f;
		Global_4456448.f_154272[iVar8 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_154288[iVar8] = 0f;
		iVar8++;
	}
	Global_4456448.f_154295 = 0;
	Global_4456448.f_154296 = 0;
	Global_4456448.f_154297 = 0f;
	Global_4456448.f_154298 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Global_4456448.f_154199[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_154197 = 12;
	Global_4456448.f_154198 = 3;
	Global_4456448.f_154300 = 0;
	Global_4456448.f_154301 = 30;
	Global_4456448.f_154302 = 2.5f;
}

void func_267(var uParam0)
{
	int iVar0;
	
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0.75f;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_33 = 0;
	uParam0->f_37 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = -1;
	uParam0->f_292 = -1;
	uParam0->f_291 = -1;
	uParam0->f_293 = 0;
	uParam0->f_294 = 0;
	uParam0->f_295 = 20;
	uParam0->f_303 = -1;
	uParam0->f_61 = -1;
	uParam0->f_48 = -1;
	uParam0->f_35 = 0;
	uParam0->f_36 = -1;
	uParam0->f_49 = 0;
	uParam0->f_250 = 0;
	uParam0->f_251 = 0;
	uParam0->f_252 = 0;
	uParam0->f_253 = 0;
	uParam0->f_254 = 0;
	uParam0->f_255 = 0;
	uParam0->f_256 = 0;
	uParam0->f_257 = 0;
	uParam0->f_258 = 0;
	uParam0->f_259 = 0;
	uParam0->f_260 = 0;
	uParam0->f_261 = 0;
	uParam0->f_262 = -1;
	uParam0->f_263 = 0;
	uParam0->f_264 = -1;
	uParam0->f_34 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_5 = 50f;
	uParam0->f_395 = -101;
	uParam0->f_396 = -1;
	uParam0->f_6 = 0f;
	uParam0->f_7 = 0;
	uParam0->f_14 = 0;
	uParam0->f_8 = -1;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_12 = 0f;
	uParam0->f_234 = 0;
	uParam0->f_69 = 0;
	uParam0->f_220 = 0;
	uParam0->f_221 = 0;
	uParam0->f_222 = 0;
	uParam0->f_234 = 0;
	uParam0->f_244 = 0;
	uParam0->f_245 = { 0f, 0f, 0f };
	uParam0->f_235 = 0;
	uParam0->f_243 = -1;
	uParam0->f_72 = { 0f, 0f, 0f };
	uParam0->f_62 = -1;
	uParam0->f_63 = -1;
	uParam0->f_68 = 0;
	uParam0->f_64 = 0;
	uParam0->f_331 = 0;
	uParam0->f_342 = 1f;
	uParam0->f_343 = 0;
	uParam0->f_97 = 0;
	uParam0->f_276 = 0;
	uParam0->f_53 = 0;
	uParam0->f_279 = 250;
	uParam0->f_282 = 0;
	uParam0->f_283 = -1;
	uParam0->f_348 = -1;
	uParam0->f_284 = 0;
	uParam0->f_349 = 4;
	uParam0->f_316 = 0;
	uParam0->f_399 = 0;
	uParam0->f_70 = 0;
	uParam0->f_223 = 0;
	uParam0->f_224 = 0;
	uParam0->f_225 = 0;
	uParam0->f_71 = -1;
	uParam0->f_226 = -1;
	uParam0->f_227 = -1;
	uParam0->f_228 = -1;
	uParam0->f_203 = 0;
	uParam0->f_204 = -1;
	uParam0->f_205 = -1;
	uParam0->f_206 = 0;
	uParam0->f_207 = -1;
	uParam0->f_208 = -1;
	uParam0->f_304 = -1;
	uParam0->f_305 = -1;
	uParam0->f_308 = -1;
	uParam0->f_309 = -1;
	uParam0->f_306 = -1;
	uParam0->f_345 = -1;
	uParam0->f_344 = -1;
	uParam0->f_346 = -1;
	uParam0->f_347 = -1;
	uParam0->f_209 = -1;
	uParam0->f_210 = 0;
	uParam0->f_65 = 0;
	uParam0->f_394 = 1;
	uParam0->f_275 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_18[iVar0] = 0;
		uParam0->f_23[iVar0] = 2;
		uParam0->f_28[iVar0] = 99999;
		uParam0->f_265[iVar0] = -1;
		uParam0->f_270[iVar0] = -1;
		uParam0->f_317[iVar0] = 0;
		uParam0->f_322[iVar0] = 0;
		uParam0->f_332[iVar0] = -1;
		uParam0->f_337[iVar0] = -1;
		uParam0->f_351[iVar0] = -2;
		uParam0->f_229[iVar0] = 0;
		uParam0->f_310[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_150[0] = 0f;
	uParam0->f_159[0] = 0f;
	uParam0->f_177[0] = 0f;
	uParam0->f_98[0] = 0;
	uParam0->f_107[0] = -1;
	uParam0->f_116[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_141[0] = 3;
	uParam0->f_168[0] = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		uParam0->f_75[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_98[iVar0 + 1] = 0;
		uParam0->f_150[iVar0 + 1] = 0f;
		uParam0->f_159[iVar0 + 1] = 0f;
		uParam0->f_177[iVar0 + 1] = 0f;
		uParam0->f_107[iVar0 + 1] = -1;
		uParam0->f_116[iVar0 + 1 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_141[iVar0 + 1] = 3;
		uParam0->f_168[iVar0 + 1] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_186[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_365[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_378[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_248 = -1;
	uParam0->f_249 = -1;
	uParam0->f_350 = -1;
	uParam0->f_356 = -1;
	uParam0->f_357 = -1;
	uParam0->f_358 = -1;
	uParam0->f_362 = -1;
	uParam0->f_363 = 0f;
	uParam0->f_359 = -1;
	uParam0->f_360 = -1;
	uParam0->f_361 = -1;
	uParam0->f_364 = -1;
	uParam0->f_388 = -1;
	uParam0->f_386 = 0;
	uParam0->f_387 = 0;
}

void func_268(var uParam0)
{
	int iVar0;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 50f;
	uParam0->f_5 = 0f;
	uParam0->f_6 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0;
	uParam0->f_23 = -1;
	uParam0->f_24 = -1;
	uParam0->f_25 = -1;
	uParam0->f_27 = -1;
	uParam0->f_31 = 0;
	uParam0->f_32 = 100;
	uParam0->f_33 = 1001f;
	uParam0->f_34 = 0;
	uParam0->f_35 = -1;
	uParam0->f_36 = 1001f;
	uParam0->f_40 = 1.5f;
	uParam0->f_49 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	uParam0->f_121 = 0;
	uParam0->f_28 = -1;
	uParam0->f_29 = -1;
	uParam0->f_30 = -1f;
	uParam0->f_58 = 0;
	uParam0->f_61 = 1.2f;
	uParam0->f_60 = 0;
	uParam0->f_180 = -1;
	uParam0->f_181 = 10;
	uParam0->f_201 = -1;
	uParam0->f_202 = -1;
	uParam0->f_203 = 1;
	uParam0->f_206 = 60;
	uParam0->f_207 = 4.5f;
	uParam0->f_208 = -1;
	uParam0->f_209 = -1;
	uParam0->f_211 = 0;
	uParam0->f_172 = 1f;
	uParam0->f_164 = -1;
	uParam0->f_165 = -1;
	uParam0->f_166 = -1;
	uParam0->f_168 = 0;
	uParam0->f_167 = 0;
	uParam0->f_44 = -1;
	uParam0->f_86 = -1;
	uParam0->f_87 = -1;
	uParam0->f_88 = -1;
	uParam0->f_45 = -1;
	uParam0->f_83 = -1;
	uParam0->f_84 = -1;
	uParam0->f_85 = -1;
	uParam0->f_46 = 0;
	uParam0->f_89 = 0;
	uParam0->f_90 = 0;
	uParam0->f_91 = 0;
	uParam0->f_72 = -1;
	uParam0->f_73 = -1;
	uParam0->f_75 = -1;
	uParam0->f_119 = -1;
	uParam0->f_118 = -1;
	uParam0->f_74 = -1;
	uParam0->f_82 = 0;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_145 = 0;
	uParam0->f_150 = -1;
	uParam0->f_151 = { 0f, 0f, 0f };
	uParam0->f_154 = -1;
	uParam0->f_155 = -1;
	uParam0->f_147 = -1f;
	uParam0->f_146 = -1;
	uParam0->f_149 = 0;
	uParam0->f_212 = -1;
	uParam0->f_213 = 0;
	uParam0->f_41 = 0;
	uParam0->f_42 = 5;
	uParam0->f_160 = -1;
	uParam0->f_148 = 10;
	uParam0->f_161 = 0;
	uParam0->f_162 = 2;
	uParam0->f_163 = -1;
	uParam0->f_173 = -1f;
	uParam0->f_174 = 0;
	uParam0->f_175 = -1;
	uParam0->f_176 = 0;
	uParam0->f_177 = 10;
	uParam0->f_178 = -1;
	uParam0->f_179 = 0;
	uParam0->f_200 = -1;
	uParam0->f_37 = 1001f;
	uParam0->f_38 = 1001f;
	uParam0->f_39 = 1001f;
	uParam0->f_117 = 100f;
	uParam0->f_93 = -1;
	uParam0->f_94 = 1;
	uParam0->f_59 = 0;
	uParam0->f_57 = 0;
	uParam0->f_92 = -1;
	uParam0->f_107 = -1;
	uParam0->f_111 = -1;
	uParam0->f_110 = -1;
	uParam0->f_43 = 0;
	uParam0->f_170 = -1;
	uParam0->f_171 = 0;
	uParam0->f_109 = -1;
	uParam0->f_108 = -1;
	uParam0->f_106 = 0;
	uParam0->f_105 = 0;
	uParam0->f_120 = 0;
	uParam0->f_214 = { 0f, 0f, 0f };
	iVar0 = 0;
	while (iVar0 < 17)
	{
		uParam0->f_182[iVar0] = -2;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_122[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_135[iVar0] = 0f;
		uParam0->f_140[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_13[iVar0] = 0;
		uParam0->f_18[iVar0] = 99999;
		uParam0->f_112[iVar0] = 0;
		uParam0->f_95[iVar0] = 0;
		uParam0->f_100[iVar0] = 0;
		uParam0->f_62[iVar0] = -1;
		uParam0->f_67[iVar0] = -1;
		uParam0->f_76[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_81 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_156[iVar0] = 0;
		iVar0++;
	}
}

void func_269()
{
	int iVar0;
	
	Global_4456448.f_153124 = 0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Global_4456448.f_153125[iVar0 /*11*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_153125[iVar0 /*11*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_153125[iVar0 /*11*/].f_7 = 0;
		Global_4456448.f_153125[iVar0 /*11*/].f_8 = 0;
		Global_4456448.f_153125[iVar0 /*11*/].f_10 = 0f;
		Global_4456448.f_153125[iVar0 /*11*/].f_9 = 0;
		iVar0++;
	}
}

void func_270()
{
	int iVar0;
	int iVar1;
	
	Global_4456448.f_131090 = 0;
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_4456448.f_131113[iVar0 /*29*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_131113[iVar0 /*29*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_131113[iVar0 /*29*/].f_10 = 0;
		Global_4456448.f_131113[iVar0 /*29*/].f_21 = 0;
		Global_4456448.f_131113[iVar0 /*29*/].f_23 = 0f;
		Global_4456448.f_131113[iVar0 /*29*/].f_24 = 0f;
		Global_4456448.f_131113[iVar0 /*29*/].f_22 = 0;
		Global_4456448.f_131113[iVar0 /*29*/].f_7 = 0f;
		Global_4456448.f_131113[iVar0 /*29*/].f_9 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_131113[iVar0 /*29*/].f_11[iVar1] = -1;
			iVar1++;
		}
		Global_4456448.f_131113[iVar0 /*29*/].f_25 = 0;
		Global_4456448.f_131113[iVar0 /*29*/].f_26 = 2;
		iVar0++;
	}
}

void func_271(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 999999f;
	uParam0->f_5 = 999999f;
	uParam0->f_6 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0f;
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	uParam0->f_13 = 0f;
	uParam0->f_15 = 0f;
	uParam0->f_14 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0f;
}

void func_272(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_273(uParam0, iVar0);
		iVar0++;
	}
}

void func_273(var uParam0, int iParam1)
{
	*(uParam0[iParam1 /*3*/]) = { 0f, 0f, 0f };
	uParam0->f_91[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_182[iParam1] = 0;
}

void func_274()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		func_275(iVar0);
		iVar0++;
	}
	Global_4456448.f_154084 = 0;
}

void func_275(int iParam0)
{
	var uVar0;
	
	Global_4456448.f_153983[iParam0] = uVar0;
}

void func_276(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_277(int iParam0)
{
	Global_4456448.f_53220 = iParam0;
	if (Global_4456448.f_53220 != 18 && Global_4456448.f_53220 != 19)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_28), 18);
	}
	func_278((func_280() || func_279()));
}

void func_278(var uParam0)
{
	Global_4194304 = uParam0;
}

var func_279()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_146776, 12);
}

int func_280()
{
	if ((GAMEPLAY::IS_BIT_SET(Global_4456448.f_28, 18) || Global_4456448.f_53220 == 18) || Global_4456448.f_53220 == 19)
	{
		return 1;
	}
	return 0;
}

void func_281(var uParam0)
{
	uParam0->f_4 = -1;
	uParam0->f_3 = -1;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	*uParam0 = { 0f, 0f, 0f };
	StringCopy(&(uParam0->f_10), "", 24);
}

void func_282(var uParam0)
{
	uParam0->f_3 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_4 = 0;
}

void func_283(char* sParam0)
{
	int iVar0;
	
	StringCopy(sParam0, "", 64);
	sParam0->f_16 = 0;
	sParam0->f_17 = 0;
	sParam0->f_54 = { 0f, 0f, 0f };
	sParam0->f_60 = 0f;
	sParam0->f_57 = { 0f, 0f, 0f };
	sParam0->f_61 = 0;
	sParam0->f_62 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_18[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_31[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_44[iVar0] = 0f;
		sParam0->f_49[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_286(&(sParam0->f_447[iVar0 /*4*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		func_285(&(sParam0->f_464[iVar0 /*5*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_284(&(sParam0->f_116[iVar0 /*11*/]));
		iVar0++;
	}
}

void func_284(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	StringCopy(&(uParam0->f_3), "", 32);
}

void func_285(var uParam0)
{
	*uParam0 = -1;
	func_286(&(uParam0->f_1));
}

void func_286(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_287(char* sParam0)
{
	int iVar0;
	
	StringCopy(sParam0, "", 16);
	sParam0->f_4 = 0;
	sParam0->f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		sParam0->f_6[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_19[iVar0 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_32[iVar0] = 0f;
		sParam0->f_37[iVar0] = 0f;
		sParam0->f_42[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_286(&(sParam0->f_1114[iVar0 /*4*/]));
		func_286(&(sParam0->f_1131[iVar0 /*4*/]));
		iVar0++;
	}
	sParam0->f_90 = 0;
	sParam0->f_89 = 0;
	sParam0->f_91 = 0;
	sParam0->f_782 = 0;
	sParam0->f_483 = 0;
	sParam0->f_484 = 0;
	sParam0->f_485 = 0;
	sParam0->f_486 = { 0f, 0f, 0f };
	sParam0->f_775 = { 0f, 0f, 0f };
	sParam0->f_778 = 0f;
	sParam0->f_779 = { 0f, 0f, 0f };
	sParam0->f_1453 = -1;
	sParam0->f_1454 = 1f;
	sParam0->f_1455 = 0f;
	sParam0->f_1456 = 0f;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_288(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_284(&(sParam0->f_783[iVar0 /*11*/]));
		iVar0++;
	}
}

void func_288(char* sParam0, int iParam1)
{
	if (iParam1 >= 0 && iParam1 < 20)
	{
		sParam0->f_92[iParam1] = 0;
		sParam0->f_47[iParam1] = 0f;
		sParam0->f_68[iParam1] = 0f;
		sParam0->f_113[iParam1] = 0;
		sParam0->f_134[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_195[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_256[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_317[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_378[iParam1] = 0f;
		sParam0->f_399[iParam1] = 0f;
		sParam0->f_420[iParam1] = 0;
		sParam0->f_441[iParam1] = -1;
		sParam0->f_462[iParam1] = 0f;
		sParam0->f_489[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_1310[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_1371[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_1432[iParam1] = 0f;
		sParam0->f_550[iParam1] = 0f;
		StringCopy(&(sParam0->f_1148[iParam1 /*4*/]), "", 16);
		StringCopy(&(sParam0->f_1229[iParam1 /*4*/]), "", 16);
	}
}

void func_289()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		Global_4456448.f_53751[iVar0] = 0;
		iVar0++;
	}
}

void func_290()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_4456448.f_130940[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_291()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_196;
}

int func_292()
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		if (Global_1312432)
		{
			return 1;
		}
	}
	else if (Global_1312432)
	{
		Global_1312432 = 0;
	}
	return 0;
}

bool func_293()
{
	return GAMEPLAY::IS_BIT_SET(Global_959568.f_8, 0);
}

var func_294()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 4);
}

var func_295()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448386, 28);
}

var func_296()
{
	return Global_2448386.f_581;
}

void func_297()
{
	struct<62> Var0;
	
	Var0.f_4.f_1 = -1;
	Var0.f_4.f_2 = -1;
	Var0.f_4.f_9 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Global_2394836 = { Var0 };
	StringCopy(&(Global_2394836.f_30), "", 64);
	StringCopy(&(Global_2394836.f_46), "", 64);
	StringCopy(&(Global_2394836.f_15), "", 32);
}

void func_298()
{
	GAMEPLAY::CLEAR_BIT(&Global_2448386, 4);
}

void func_299()
{
	GAMEPLAY::CLEAR_BIT(&Global_2448386, 28);
}

void func_300(bool bParam0, bool bParam1, bool bParam2)
{
	struct<52> Var0;
	
	bParam0->f_5 = 0;
	bParam0->f_6 = 0;
	bParam0->f_7 = 0;
	bParam0->f_8 = 0;
	bParam0->f_9 = 0;
	bParam0->f_12 = 0;
	bParam0->f_32 = 0;
	bParam0->f_13 = 0;
	bParam0->f_14 = 0;
	bParam0->f_15 = 0;
	bParam0->f_17 = 1;
	bParam0->f_17 = 1;
	bParam0->f_18 = 0;
	bParam0->f_19 = 0;
	bParam0->f_20 = 0;
	bParam0->f_21 = -1;
	bParam0->f_3 = 0;
	bParam0->f_28 = 0;
	bParam0->f_29 = 0;
	bParam0->f_30 = 0;
	Global_1573299[0] = 0;
	Global_1573299[1] = 0;
	bParam0->f_41 = 0;
	if (bParam2)
	{
		bParam0->f_42 = { Var0 };
	}
	if (bParam1)
	{
		func_101(bParam0, 0);
	}
}

int func_301(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 15;
		
		case 149:
			return 8;
		
		case 143:
			return 14;
		
		case 147:
			return 122;
		
		case 150:
			return 1;
		
		case 148:
			return 5;
		
		case 151:
			return 6;
		
		case 144:
			return 11;
		
		case 152:
			return 0;
		
		case 153:
			return 2;
		
		case 145:
			return 13;
		
		case 154:
			return 3;
		
		case 146:
			return 12;
		
		case 49:
			return 148;
		
		case 52:
			return 151;
		
		case 53:
			return 152;
		
		case 54:
			return 157;
		
		case 55:
			return 153;
		
		case 56:
			return 154;
		
		case 57:
			return 155;
		
		case 58:
			return 159;
		
		case 51:
			return 162;
		
		case 60:
			return 142;
		
		case 62:
			return 160;
		
		case 63:
			return 164;
		
		case 64:
			return 163;
		
		case 65:
			return 166;
		
		case 66:
			return 167;
		
		case 67:
			return 168;
		
		case 68:
			return 169;
		
		case 69:
			return 170;
		
		case 70:
			return 171;
		
		case 71:
			return 172;
		
		case 72:
			return 173;
		
		case 73:
			return 178;
		
		case 74:
			return 188;
		
		case 75:
			return 214;
		
		case 76:
			return 215;
		
		case 77:
			return 216;
		
		case 78:
			return 217;
		
		case 79:
			return 218;
		
		case 80:
			return 219;
		
		case 81:
			return 220;
		
		case 82:
			return 221;
		
		case 84:
			return 179;
		
		case 83:
			return 189;
		
		case 85:
			return 180;
		
		case 86:
			return 182;
		
		case 87:
			return 183;
		
		case 88:
			return 185;
		
		case 89:
			return 186;
		
		case 90:
			return 190;
		
		case 91:
			return 191;
		
		case 92:
			return 192;
		
		case 93:
			return 193;
		
		case 101:
			return 205;
		
		case 94:
			return 194;
		
		case 95:
			return 197;
		
		case 96:
			return 198;
		
		case 98:
			return 199;
		
		case 99:
			return 200;
		
		case 100:
			return 201;
		
		case 102:
			return 207;
		
		case 103:
			return 208;
		
		case 104:
			return 209;
		
		case 105:
			return 210;
		
		case 97:
			return 195;
		
		case 106:
			return 225;
		
		case 107:
			return 226;
		
		case 108:
			return 227;
		
		case 109:
			return 229;
		
		case 110:
			return 230;
		
		case 112:
			return 233;
		
		case 114:
			return 237;
		
		case 115:
			return 238;
		
		case 116:
			return 239;
		
		case 117:
			return 240;
		
		case 118:
			return 241;
		
		case 119:
			return 242;
		
		case 120:
			return 244;
		
		case 121:
			return 248;
		
		case 122:
			return 249;
		
		case 123:
			return 250;
		
		default:
	}
	return 253;
}

bool func_302()
{
	return Global_2394836;
}

var func_303()
{
	return Global_2394836.f_3;
}

