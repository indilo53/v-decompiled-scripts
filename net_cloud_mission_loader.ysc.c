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
		bVar0 = func_318();
		Global_2394836.f_3 = 0;
		Global_2395284 = 0;
		if (func_317())
		{
			bLocal_279 = true;
			Var1 = { Global_2394836.f_4 };
			MemCopy(&cVar11, {Var1.f_3}, 8);
			iVar19 = func_316(Global_2394836.f_4);
			iVar20 = PLAYER::PLAYER_ID();
			bVar21 = Global_2394836.f_14;
			if (bVar21)
			{
				cVar11 = { Global_2394836.f_15 };
			}
			if (Global_2394836.f_25)
			{
				func_315(&Local_96, 1, 1);
				GAMEPLAY::CLEAR_BIT(&(Global_1589819[iVar20 /*818*/].f_39.f_18), 2);
				GAMEPLAY::CLEAR_BIT(&(Global_1589819[iVar20 /*818*/].f_39.f_18), 1);
				GAMEPLAY::CLEAR_BIT(&(Global_1589819[iVar20 /*818*/].f_39.f_18), 3);
				func_314();
				func_313();
				Global_2394836.f_25 = 0;
			}
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				func_312();
			}
			else if (!func_118(&Local_96, &cVar11, &(Global_1589819[iVar20 /*818*/].f_39.f_18), iVar19, 0, 0, 1, 0, 1, bVar21, 0, 1, 0, 1))
			{
				Global_2394836.f_23 = 0;
				Global_2394836.f_27 = -1;
				if (bVar0)
				{
					func_315(&Local_96, 1, 1);
					NETWORK::_0xE9B99B6853181409();
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
							func_312();
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
						func_312();
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
							func_312();
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
				func_312();
			}
			else
			{
				if (Global_2394836.f_25)
				{
					func_315(&Local_96, 1, 1);
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
					Global_2448756.f_5 = iVar30;
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
				func_312();
			}
			else
			{
				if (Global_2394836.f_25)
				{
					func_315(&Local_96, 1, 1);
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
	if (GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_273.f_23, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
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
	return Global_2424047[iParam0 /*416*/].f_115 == 7;
}

bool func_4(int iParam0)
{
	return Global_2424047[iParam0 /*416*/].f_115 == 2;
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
				NETWORK::_0xF98DDE0A8ED09323(1);
			}
			else
			{
				NETWORK::_0xF98DDE0A8ED09323(0);
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
				func_315(bParam0, 1, 1);
				*bParam0 = 1;
				return 1;
			}
			else
			{
				func_101(bParam0, 1);
			}
			break;
		
		case 1:
			if (NETWORK::_0xC7397A83F7A2A462(&Global_2394898, bParam0->f_13, 1, func_98(0)))
			{
				func_101(bParam0, 2);
			}
			break;
		
		case 2:
			if (NETWORK::_0x02ADA21EA2F6918F())
			{
				if (NETWORK::_0x941E5306BCD7C2C7())
				{
					*bParam0 = 0;
				}
				else
				{
					func_315(bParam0, 1, 1);
					bParam0->f_41 = NETWORK::_0xEDF7F927136C224B();
					*bParam0 = 0;
					return 1;
				}
				if (NETWORK::_0xE0A6138401BCB837() > 0)
				{
					func_101(bParam0, 4);
				}
				else
				{
					func_315(bParam0, 1, 1);
					*bParam0 = 0;
					return 1;
				}
			}
			break;
		
		case 4:
			if (NETWORK::_0xC87E740D9F3872CC())
			{
				func_103();
				*bParam0 = 0;
				return 1;
			}
			if (bParam0->f_9 >= (1200 + bParam0->f_13))
			{
				func_315(bParam0, 1, 1);
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
	int iVar95;
	
	uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar0, "mission");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uVar1, "gen");
	if (func_110())
	{
		if (func_97(NETWORK::_GET_CONTENT_ID(bParam0->f_7)))
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
	if (Global_262145.f_7612)
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
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_5 = NETWORK::_GET_CONTENT_FILE_VERSION(bParam0->f_7, 0);
		Global_794709.f_4[bParam0->f_9 /*88*/].f_67 = func_88(bParam0->f_7);
		Global_794709.f_4[bParam0->f_9 /*88*/].f_66 = NETWORK::_GET_CONTENT_FILE_VERSION(bParam0->f_7, Global_794709.f_4[bParam0->f_9 /*88*/].f_67);
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_6 = NETWORK::_0x32DD916F3F7C9672(bParam0->f_7);
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
		if (NETWORK::_0xF53E48461B71EECB(NETWORK::_0x32DD916F3F7C9672(bParam0->f_7)))
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_54 = NETWORK::_GET_CONTENT_DESCRIPTION_HASH(bParam0->f_7);
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
		Global_794709.f_4[bParam0->f_9 /*88*/].f_71 = func_84();
	}
	StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_22), NETWORK::_0xBF09786A7FCAB582(bParam0->f_7), 64);
	Global_794709.f_4[bParam0->f_9 /*88*/].f_65 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "type");
	if (func_110())
	{
		StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_6), func_83(), 64);
	}
	else
	{
		StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_6), NETWORK::GET_PLAYER_ADVANCED_MODIFIER_PRIVILEGES(bParam0->f_7), 64);
	}
	Global_794709.f_4[bParam0->f_9 /*88*/].f_70 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "rank");
	Global_794709.f_107189[bParam0->f_9 /*13*/] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "tnum");
	if (!func_110())
	{
		Global_794709.f_4[bParam0->f_9 /*88*/].f_73 = func_82(NETWORK::_0x1ACCFBA3D8DAB2EE(bParam0->f_7, 0), NETWORK::_0x759299C5BB31D2A9(bParam0->f_7, 0));
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_4 = NETWORK::_0x759299C5BB31D2A9(bParam0->f_7, 0);
	}
	Global_794709.f_4[bParam0->f_9 /*88*/].f_75 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "charcon");
	Global_794709.f_4[bParam0->f_9 /*88*/].f_78 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "ltm");
	StringCopy(&(Global_794709.f_4[bParam0->f_9 /*88*/]), NETWORK::_GET_CONTENT_ID(bParam0->f_7), 24);
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
	func_81(Global_794709.f_4[bParam0->f_9 /*88*/].f_65, &(Global_794709.f_4[bParam0->f_9 /*88*/].f_71), &(Global_794709.f_4[bParam0->f_9 /*88*/].f_69));
	if (func_110())
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(NETWORK::_GET_CONTENT_ID(bParam0->f_7), "lUo6JFfliE-ZQ_8gd90ZxQ"))
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_56 = { 897.5109f, -2340.599f, 29.4461f };
		}
	}
	GAMEPLAY::SET_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 13);
	if (!func_110())
	{
		Global_794709.f_107189[bParam0->f_9 /*13*/].f_1 = GAMEPLAY::GET_HASH_KEY(NETWORK::_GET_ROOT_CONTENT_ID(bParam0->f_7));
	}
	Global_794709.f_107189[bParam0->f_9 /*13*/].f_2 = func_80(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, 1);
	if (func_79(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1))
	{
		if (Global_794709.f_4[bParam0->f_9 /*88*/].f_75 == 0)
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_75 = 1;
		}
	}
	bVar94 = func_78(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1);
	iVar95 = func_77(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1);
	if (iVar95 != -1)
	{
		Global_1687982[iVar95] = bParam0->f_9;
	}
	if ((Global_794709.f_4[bParam0->f_9 /*88*/].f_65 < 13 && !bParam1) && !bVar94)
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
		if (bVar94)
		{
			Global_794709.f_4[bParam0->f_9 /*88*/].f_69 = Global_794709.f_4[bParam0->f_9 /*88*/].f_71;
		}
		if ((Global_794709.f_123068 < 5 && Global_794709.f_4[bParam0->f_9 /*88*/].f_65 == 0) && Global_794709.f_4[bParam0->f_9 /*88*/].f_68 == 1)
		{
			Global_794709.f_107189[bParam0->f_9 /*13*/].f_10 = Global_794709.f_123068;
			StringCopy(&(Global_794709.f_123037[Global_794709.f_123068 /*6*/]), NETWORK::_GET_ROOT_CONTENT_ID(bParam0->f_7), 24);
			Global_794709.f_123068++;
		}
		func_58(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, &(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), &(Global_794709.f_4[bParam0->f_9 /*88*/].f_77), Global_794709.f_4[bParam0->f_9 /*88*/].f_80);
		func_54(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, bParam0->f_9);
		if (bParam1)
		{
			if (NETWORK::_0x70EA8DA57840F9BE(bParam0->f_7))
			{
				GAMEPLAY::SET_BIT(&(Global_794709.f_4[bParam0->f_9 /*88*/].f_76), 14);
			}
		}
		else if (!bVar94)
		{
			if (func_32(Global_794709.f_107189[bParam0->f_9 /*13*/].f_1, Global_794709.f_4[bParam0->f_9 /*88*/].f_80))
			{
				Global_794709.f_123069[11]++;
			}
			if (NETWORK::_0x70EA8DA57840F9BE(bParam0->f_7))
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
				Global_794709.f_107189[bParam0->f_9 /*13*/].f_7 = NETWORK::_0x993CBE59D350D225(bParam0->f_7);
			}
		}
	}
	if (!bParam1 && !bVar94)
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
			Global_1382576 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1382578 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1382579 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1382580 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1382581 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1382582 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1382583 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1382584 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1382585 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1382586 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1382587 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1382588 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1382589 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1382590 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1382591 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1382592 = iParam1;
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
	if (Global_1382575)
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
	while (iVar0 < 33)
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
		
		case 157:
			return -979045660;
		
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
		
		case 32:
			return 157;
		
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
		if (Global_289559[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_289559[iVar3] < iParam0)
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
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1382702[func_24(-1)];
			}
			else if (func_23(iParam0))
			{
				return Global_1589819[iParam0 /*818*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1382702[func_24(-1)];
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
		return GAMEPLAY::IS_BIT_SET(Global_2437364.f_1, iParam0);
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

int func_25()
{
	return Global_1312745;
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
		if (iParam0 == Global_262145.f_9112[iVar0])
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
		if (iParam0 == Global_262145.f_9145[iVar0])
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
		if (iParam0 == Global_262145.f_9134[iVar0])
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
		if (iParam0 == Global_262145.f_9123[iVar0])
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
		if (iParam0 == Global_262145.f_9099[iVar0])
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
		if (iParam0 == Global_262145.f_9088[iVar0])
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
		if (iParam0 == Global_262145.f_9077[iVar0])
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
		if (iParam0 == Global_262145.f_9066[iVar0])
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
		if (iParam0 == Global_262145.f_8969[iVar0])
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
		if (iParam0 == Global_262145.f_8991[iVar0])
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
		if (iParam0 == Global_262145.f_8980[iVar0])
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
		if (iParam0 == Global_262145.f_8958[iVar0])
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
		if (iParam0 == Global_262145.f_8947[iVar0])
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
		if (iParam0 == Global_262145.f_8936[iVar0])
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
		if (iParam0 == Global_262145.f_8902[iVar0])
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
		if (Global_4456448.f_161209 == 65)
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
		if (iParam0 == Global_262145.f_8910[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_51(int iParam0)
{
	if ((((iParam0 == Global_262145.f_8897 || iParam0 == Global_262145.f_8898) || iParam0 == Global_262145.f_8899) || iParam0 == Global_262145.f_8900) || iParam0 == Global_262145.f_8901)
	{
		return 1;
	}
	return 0;
}

int func_52(int iParam0)
{
	if ((((iParam0 == Global_262145.f_8892 || iParam0 == Global_262145.f_8893) || iParam0 == Global_262145.f_8894) || iParam0 == Global_262145.f_8895) || iParam0 == Global_262145.f_8896)
	{
		return 1;
	}
	return 0;
}

int func_53(int iParam0)
{
	if ((((((iParam0 == Global_262145.f_8885 || iParam0 == Global_262145.f_8886) || iParam0 == Global_262145.f_8887) || iParam0 == Global_262145.f_8888) || iParam0 == Global_262145.f_8889) || iParam0 == Global_262145.f_8890) || iParam0 == Global_262145.f_8891)
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
		if (iParam0 == Global_262145.f_8918[iVar0])
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
		else if (iParam0 == Global_262145.f_8927[iVar0])
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
		if (Global_262145.f_5003[iVar0] == iParam0)
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
		while (iVar1 < 13)
		{
			if (Global_262145.f_6340[iVar1] == 2)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5844[iVar1])
				{
					if (iParam0 == Global_262145.f_5027[iVar1 /*51*/][iVar0])
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
		while (iVar1 < 13)
		{
			if (Global_262145.f_6340[iVar1] == 251)
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5844[iVar1])
				{
					if (iParam0 == Global_262145.f_5027[iVar1 /*51*/][iVar0])
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

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != 0)
	{
		iVar1 = 0;
		while (iVar1 < 13)
		{
			if (((Global_262145.f_6340[iVar1] == 202 || Global_262145.f_6340[iVar1] == 203) || Global_262145.f_6340[iVar1] == 204) || (iParam1 && (((((((Global_262145.f_6340[iVar1] == 224 || Global_262145.f_6340[iVar1] == 223) || Global_262145.f_6340[iVar1] == 232) || Global_262145.f_6340[iVar1] == 245) || Global_262145.f_6340[iVar1] == 246) || Global_262145.f_6340[iVar1] == 251) || Global_262145.f_6340[iVar1] == 252) || Global_262145.f_6340[iVar1] == 253)))
			{
				iVar0 = 0;
				while (iVar0 < Global_262145.f_5844[iVar1])
				{
					if (iParam0 == Global_262145.f_5027[iVar1 /*51*/][iVar0])
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

void func_81(int iParam0, var uParam1, var uParam2)
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

int func_82(float fParam0, int iParam1)
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

var func_83()
{
	return UI::_GET_LABEL_TEXT("CREATOR_RSC");
}

int func_84()
{
	if (Global_2455946)
	{
		return 32;
	}
	return (32 - Global_2455947);
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
	if (NETWORK::_0x7FCC39C46C3C03BD(iParam0))
	{
		return 2;
	}
	else if (NETWORK::_0x1D610EB0FEA716D9(iParam0))
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
			Global_1657580.f_111[iVar0 /*204*/].f_44[iVar1 /*16*/] = { Global_786550.f_3538[iVar2[iVar0] /*132*/][iVar1 /*16*/] };
			iVar1++;
		}
		iVar0++;
	}
	func_100(1);
	return 1;
}

void func_100(int iParam0)
{
	Global_1657580.f_1784 = iParam0;
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
		NETWORK::_0x61A885D3F7CFEE9A();
	}
	else
	{
		NETWORK::_0xBA96394A0EECFA65();
	}
}

bool func_105()
{
	return Global_2456885.f_4;
}

int func_106()
{
	if (NETWORK::_0x9FEDF86898F100E9())
	{
		return 1;
	}
	else if (NETWORK::_0xD53ACDBEF24A46E8())
	{
		return 1;
	}
	else if (NETWORK::_0x45E816772E93A9DB())
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
	return Global_2459114;
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
				NETWORK::_0xF98DDE0A8ED09323(0);
			}
			func_101(bParam0, 1);
			break;
		
		case 1:
			if (NETWORK::SET_BALANCE_ADD_MACHINE(uParam1, func_98(0)))
			{
				func_101(bParam0, 3);
			}
			break;
		
		case 3:
			if (NETWORK::_0x02ADA21EA2F6918F())
			{
				bParam0->f_41 = NETWORK::_0xEDF7F927136C224B();
				if (NETWORK::_0x941E5306BCD7C2C7())
				{
				}
				else
				{
					func_315(bParam0, 1, 1);
					bParam0->f_41 = NETWORK::_0xEDF7F927136C224B();
					*bParam0 = 0;
					return 1;
				}
				if (NETWORK::_0xE0A6138401BCB837() > 0)
				{
					if (DATAFILE::_0xA69AC4ADE82B57A4(0))
					{
						func_113(sParam2, 0, iParam3);
						func_315(bParam0, 1, 1);
						*bParam0 = 1;
						return 1;
					}
				}
				else
				{
					func_315(bParam0, 1, 1);
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
	StringCopy(sParam0, NETWORK::_GET_CONTENT_ID(iParam1), 24);
	StringCopy(&(sParam0->f_6), NETWORK::GET_PLAYER_ADVANCED_MODIFIER_PRIVILEGES(iParam1), 64);
	StringCopy(&(sParam0->f_22), NETWORK::_0xBF09786A7FCAB582(iParam1), 64);
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
	sParam0->f_73 = func_82(NETWORK::_0x1ACCFBA3D8DAB2EE(iParam1, 0), NETWORK::_0x759299C5BB31D2A9(iParam1, 0));
	sParam0->f_74 = 0;
	sParam0->f_75 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "charcon");
	*uParam2 = GAMEPLAY::GET_HASH_KEY(NETWORK::_GET_ROOT_CONTENT_ID(0));
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
		uVar3 = NETWORK::_0x32DD916F3F7C9672(iParam1);
		if (NETWORK::_0xF53E48461B71EECB(uVar3))
		{
			sParam0->f_54 = NETWORK::_GET_CONTENT_DESCRIPTION_HASH(iParam1);
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
	return Global_25765;
}

int func_115(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_262145.f_8918[iVar0])
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
	Global_2456885.f_8 = 0;
	Global_2456885.f_7 = 0;
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
	if ((func_311() && func_310()) || func_309())
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
		if (!func_308())
		{
			return 0;
		}
	}
	uParam0->f_15 = 0;
	if (bParam8)
	{
		if (func_307())
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
				func_277(1, 1, bParam11, 1);
			}
			GAMEPLAY::SET_BIT(uParam2, 1);
			func_315(uParam0, 1, 1);
			*uParam0 = 0;
		}
		if (func_134(uParam0, sParam1, 0, 1, 0, iParam5, 0, 0, 1, bParam9, bParam10, bParam11, 0, bParam12, bParam13))
		{
			if (((func_133() || Global_4456448 == 31) || Global_4456448 == 6) || Global_4456448 == 4)
			{
				if (func_132(Global_4456448.f_138474))
				{
					Global_4456448.f_78 = { func_131() };
				}
				if (Global_4456448.f_41 < 1)
				{
					Global_4456448.f_41 = 1;
				}
				if (Global_4456448.f_40 < 1)
				{
					Global_4456448.f_40 = 1;
				}
				if (!func_130())
				{
					func_129();
				}
			}
			else if (Global_4456448 == 1)
			{
				Global_1382771.f_4 = 99;
				Global_1382771.f_6 = Global_4456448.f_63;
				Global_1382771.f_7 = Global_4456448.f_79175;
				Global_1382771.f_9 = Global_4456448.f_58129;
				Global_1382771.f_11 = Global_4456448.f_64;
				Global_1382771.f_12 = Global_4456448.f_66;
				Global_1382771.f_13 = Global_4456448.f_68;
				Global_1382771.f_14 = Global_4456448.f_67;
				Global_1382771.f_16 = Global_4456448.f_38;
				Global_1382771.f_5 = Global_4456448.f_61;
				Global_1382771.f_10 = Global_4456448.f_74;
			}
			else if (func_128())
			{
				Global_4194340.f_7 = 9901;
				Global_4194340.f_8 = Global_4456448.f_55684 + 1;
				if (func_127(Global_4456448.f_47099))
				{
					Global_4456448.f_47099 = { Global_4456448.f_78 };
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
					func_121(Global_4456448.f_36);
				}
				Global_4456448.f_139758 = 1;
			}
			else
			{
				func_313();
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
		if (Global_4456448.f_139758)
		{
			*uParam0 = 1;
		}
		return 1;
	}
	return 0;
}

void func_119()
{
	Global_2448756.f_35.f_50 = 1;
}

int func_120()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_4456448.f_138767[iVar1 /*6*/])))
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
	GAMEPLAY::SET_BIT(&(Global_2448756.f_2), 3);
}

bool func_123()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448756.f_2, 3);
}

bool func_124()
{
	return GAMEPLAY::IS_BIT_SET(Global_2449538.f_1.f_2809, 8);
}

void func_125()
{
	GAMEPLAY::SET_BIT(&Global_2448756, 4);
}

void func_126()
{
	GAMEPLAY::SET_BIT(&Global_2448756, 28);
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
	Global_1648607.f_5 = 0;
	Global_1648607.f_11 = -1;
}

int func_130()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_4456448.f_41)
	{
		iVar1 = 0;
		while (iVar1 < Global_4456448.f_41)
		{
			if (Global_4456448.f_48[iVar0] != Global_4456448.f_48[iVar1])
			{
				return 0;
			}
			else if (Global_4456448.f_43[iVar0] != Global_4456448.f_43[iVar1])
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
		if (Global_262145.f_5003[iVar0] == iParam0)
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
			uParam0->f_24 = func_276(1);
			uParam0->f_25 = func_274(1);
			if (func_106())
			{
				return 0;
			}
			func_104();
			func_103();
			if (func_110() || bParam9)
			{
				NETWORK::_0xF98DDE0A8ED09323(1);
			}
			else
			{
				NETWORK::_0xF98DDE0A8ED09323(0);
			}
			func_272();
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
						Global_4456448.f_139770 = 1;
						if (!bParam9)
						{
							StringCopy(&(Global_4456448.f_138761), sParam1, 24);
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
							Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_19 = { Global_961130.f_12 };
							func_175(&uVar1, &uVar0, &Global_961130);
							if (Global_961130.f_65 == 0)
							{
								func_315(uParam0, 1, 1);
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
							Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_19 = { Global_959568.f_12 };
							func_175(&uVar1, &uVar0, &Global_959568);
							uParam0->f_8 = 0;
							if (Global_959568.f_65 == 0)
							{
								func_315(uParam0, 1, 1);
								*uParam0 = 0;
								uParam0->f_28 = 1;
								func_103();
								func_117();
								return 1;
							}
						}
						func_103();
						NETWORK::_0x61A885D3F7CFEE9A();
						NETWORK::_0xF98DDE0A8ED09323(1);
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
				if (NETWORK::_0x158EC424F35EC469(sParam1, 1, func_98(iParam2)))
				{
					func_101(uParam0, 3);
				}
			}
			else if (NETWORK::SET_BALANCE_ADD_MACHINE(sParam1, func_98(iParam2)))
			{
				func_101(uParam0, 3);
			}
			break;
		
		case 3:
			if (NETWORK::_0x02ADA21EA2F6918F())
			{
				uParam0->f_41 = NETWORK::_0xEDF7F927136C224B();
				if (NETWORK::_0x941E5306BCD7C2C7())
				{
				}
				else
				{
					func_315(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::_0xEDF7F927136C224B();
					*uParam0 = 0;
					func_117();
					return 1;
				}
				if (NETWORK::_0xE0A6138401BCB837() > 0)
				{
					if (!bParam12 && !func_172(uParam0->f_24, uParam0->f_25, NETWORK::GET_PLAYER_ADVANCED_MODIFIER_PRIVILEGES(0), NETWORK::_GET_CONTENT_CATEGORY(0)))
					{
						func_315(uParam0, 1, 1);
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
								StringCopy(&(Global_961130.f_12), NETWORK::_0xBF09786A7FCAB582(0), 64);
								StringCopy(&(Global_961130.f_36), NETWORK::_GET_CONTENT_ID(0), 24);
								Global_961130.f_71 = NETWORK::_GET_CONTENT_CATEGORY(0);
								StringCopy(&(Global_961130.f_42), sParam1, 24);
								Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_19 = { Global_961130.f_12 };
								func_175(&uVar1, &uVar0, &Global_961130);
								if (Global_961130.f_65 == 0)
								{
									func_315(uParam0, 1, 1);
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
								StringCopy(&(Global_959568.f_12), NETWORK::_0xBF09786A7FCAB582(0), 64);
								StringCopy(&(Global_959568.f_36), NETWORK::_GET_CONTENT_ID(0), 24);
								Global_959568.f_71 = NETWORK::_GET_CONTENT_CATEGORY(0);
								StringCopy(&(Global_959568.f_42), sParam1, 24);
								Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_19 = { Global_959568.f_12 };
								func_175(&uVar1, &uVar0, &Global_959568);
								uParam0->f_8 = 0;
							}
							func_103();
							func_101(uParam0, 10);
						}
						else
						{
							func_315(uParam0, 1, 1);
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
									func_315(uParam0, 1, 1);
									*uParam0 = 1;
									func_117();
									return 1;
								}
								StringCopy(&(Global_961130.f_12), NETWORK::_0xBF09786A7FCAB582(0), 64);
								StringCopy(&(Global_961130.f_36), NETWORK::_GET_CONTENT_ID(0), 24);
								StringCopy(&(Global_961130.f_42), sParam1, 24);
								Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_19 = { Global_961130.f_12 };
								uParam0->f_8 = 0;
							}
							else
							{
								func_170(&uVar1, &uVar0, &Global_959568, iParam6);
								if (iParam6 == 1)
								{
									func_315(uParam0, 1, 1);
									*uParam0 = 1;
									func_117();
									return 1;
								}
								StringCopy(&(Global_959568.f_12), NETWORK::_0xBF09786A7FCAB582(0), 64);
								StringCopy(&(Global_959568.f_36), NETWORK::_GET_CONTENT_ID(0), 24);
								StringCopy(&(Global_959568.f_42), sParam1, 24);
								Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_19 = { Global_959568.f_12 };
								uParam0->f_8 = 0;
							}
							func_103();
							func_101(uParam0, 10);
						}
						else
						{
							func_315(uParam0, 1, 1);
							*uParam0 = 0;
							func_117();
							return 1;
						}
					}
				}
				else
				{
					func_315(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					return 1;
				}
			}
			break;
		
		case 4:
			if (NETWORK::_0x4C61B39930D045DA(uParam0->f_5))
			{
				if (uParam0->f_2)
				{
					uParam0->f_2 = 0;
					UI::_REMOVE_LOADING_PROMPT();
				}
				if (NETWORK::_0x3A3D5568AF297CD5(uParam0->f_5))
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
					func_315(uParam0, 1, 1);
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
							func_277(1, 1, bParam11, 1);
						}
						if ((uParam0->f_21 != -1 && uParam0->f_22 != -1) && iParam2 == 0)
						{
							Global_4456448.f_139770 = 1;
							Global_4456448.f_139754 = 1;
							StringCopy(&(Global_4456448.f_138450), "", 64);
							StringCopy(&(Global_4456448.f_138497), "", 24);
							StringCopy(&(Global_4456448.f_138475), "RockStar", 24);
							if (bParam10)
							{
								StringCopy(&(Global_4456448.f_138761), sParam1, 24);
							}
							uParam0->f_35 = uParam0->f_22;
						}
						else
						{
							Global_4456448.f_138474 = GAMEPLAY::GET_HASH_KEY(NETWORK::_GET_ROOT_CONTENT_ID(0));
							StringCopy(&(Global_4456448.f_138497), NETWORK::GET_PLAYER_ADVANCED_MODIFIER_PRIVILEGES(0), 24);
							Global_4456448.f_139770 = NETWORK::_GET_CONTENT_CATEGORY(0);
							if (Global_4456448.f_139770 == 1 || Global_4456448.f_139770 == 2)
							{
								StringCopy(&(Global_4456448.f_138475), "RockStar", 24);
							}
							else
							{
								StringCopy(&(Global_4456448.f_138475), NETWORK::GET_PLAYER_ADVANCED_MODIFIER_PRIVILEGES(0), 24);
							}
							if ((Global_4456448.f_139770 == 0 || Global_4456448.f_139770 == 3) && NETWORK::_0x8C8D2739BA44AF0F(0))
							{
								StringCopy(&(Global_4456448.f_138450), PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), 64);
							}
							else if ((GAMEPLAY::IS_DURANGO_VERSION() && (Global_4456448.f_139770 == 0 || Global_4456448.f_139770 == 3)) && func_166(&uVar33, &(Global_4456448.f_138497)))
							{
								StringCopy(&(Global_4456448.f_138450), PLAYER::GET_PLAYER_NAME(uVar33), 64);
							}
							else
							{
								StringCopy(&(Global_4456448.f_138450), NETWORK::_0x703F12425ECA8BF5(0), 64);
							}
							Global_4456448.f_138781 = NETWORK::_0x759299C5BB31D2A9(0, 0);
							Global_4456448.f_139756 = NETWORK::_0xAEAB987727C5A8A4(0);
							uParam0->f_23 = func_88(0);
							Global_4456448.f_155684 = uParam0->f_23;
							if (bParam10)
							{
								StringCopy(&(Global_4456448.f_138761), NETWORK::_GET_CONTENT_ID(0), 24);
							}
							if (Global_4456448.f_139770 == 0 || Global_4456448.f_139770 == 3)
							{
								if ((NETWORK::_0x584770794D758C18(0, &uVar4) && NETWORK::NETWORK_IS_HANDLE_VALID(&uVar4, 13)) && NETWORK::NETWORK_IS_FRIEND(&uVar4))
								{
									Var17 = { Global_4456448.f_138450 };
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
							Global_4456448.f_8 = func_82(NETWORK::_0x1ACCFBA3D8DAB2EE(0, 0), NETWORK::_0x759299C5BB31D2A9(0, 0));
							if (NETWORK::_0x70EA8DA57840F9BE(uParam0->f_7))
							{
								Global_4456448.f_139755 = NETWORK::_0x993CBE59D350D225(0);
								Global_4456448.f_139757 = 1;
							}
							else
							{
								Global_4456448.f_139755 = 0;
								Global_4456448.f_139757 = 0;
							}
							Global_4456448.f_139754 = NETWORK::_0x3054F114121C21EA(0);
							uParam0->f_35 = NETWORK::_0x32DD916F3F7C9672(0);
							if (!func_110())
							{
								if (NETWORK::_0xF53E48461B71EECB(uParam0->f_35))
								{
									uParam0->f_31 = NETWORK::_GET_CONTENT_DESCRIPTION_HASH(0);
								}
								else
								{
									uParam0->f_31 = -1;
								}
							}
							Global_4456448.f_138780 = uParam0->f_31;
							Global_2449538.f_4286.f_3 = NETWORK::_0x4E548C0D7AE39FF9(0, 0);
							Global_2449538.f_4286.f_2 = NETWORK::_0x87E5C46C187FE0AE(0, 0);
							if (Global_4456448.f_139770 == 1 || Global_4456448.f_139770 == 2)
							{
								StringCopy(&(Global_4456448.f_138450), func_83(), 64);
							}
						}
						if (!bParam10)
						{
							StringCopy(&(Global_4456448.f_138761), sParam1, 24);
						}
						uParam0->f_32 = 0;
						if (!func_110())
						{
							func_176(uParam0->f_35, bParam11, (bParam13 || bParam14), uParam0->f_32);
							if (func_132(Global_4456448.f_138474))
							{
								Global_4456448.f_78 = { func_131() };
							}
							if (Global_4456448.f_139770 == 0 && (func_163() || func_161()))
							{
								func_315(uParam0, 1, 1);
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
						StringCopy(&(Global_2437364.f_3741), NETWORK::_0xBF09786A7FCAB582(0), 32);
						Global_2437364.f_3741.f_8 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar3, "type");
						uParam0->f_17 = NETWORK::_0x70EA8DA57840F9BE(0);
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
					func_315(uParam0, 1, 1);
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
						func_315(uParam0, 1, 1);
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
				if ((((func_149(Global_4456448.f_138474) && func_133()) && !bParam9) && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_4456448.f_138767[0 /*6*/]))) && (func_169() || (func_144() && !func_143())))
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
						uParam0->f_21 = NETWORK::_GET_CONTENT_FILE_VERSION(0, uParam0->f_23);
					}
					func_142(&(uParam0->f_42), 0);
					func_101(uParam0, 18);
				}
				else
				{
					uParam0->f_42.f_3 = 1;
					func_315(uParam0, 1, 0);
					func_117();
					return 1;
				}
			}
			break;
		
		case 19:
			if (NETWORK::_0x158EC424F35EC469(&(Global_4456448.f_138767[0 /*6*/]), 1, func_98(iParam2)))
			{
				func_101(uParam0, 21);
			}
			break;
		
		case 21:
			if (NETWORK::_0x02ADA21EA2F6918F())
			{
				uParam0->f_41 = NETWORK::_0xEDF7F927136C224B();
				if (NETWORK::_0x941E5306BCD7C2C7())
				{
				}
				else
				{
					func_315(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::_0xEDF7F927136C224B();
					*uParam0 = 0;
					func_117();
					return 1;
				}
				if (NETWORK::_0xE0A6138401BCB837() > 0)
				{
					uParam0->f_5 = NETWORK::_0x171DF6A0C07FB3DC(0, 0);
					DATAFILE::_0xAD6875BBC0FC899C(uParam0->f_5);
					func_101(uParam0, 22);
				}
				else
				{
					func_315(uParam0, 1, 1);
					*uParam0 = 0;
					func_117();
					return 1;
				}
			}
			break;
		
		case 22:
			if (NETWORK::_0x4C61B39930D045DA(uParam0->f_5))
			{
				if (NETWORK::_0x3A3D5568AF297CD5(uParam0->f_5))
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
					func_315(uParam0, 1, 1);
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
					func_315(uParam0, 1, 0);
					Global_1646426 = 1;
					func_117();
					*uParam0 = 1;
					return 1;
				}
				else
				{
					func_315(uParam0, 1, 1);
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
						func_315(uParam0, 1, 0);
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
					func_315(uParam0, 1, 0);
					func_117();
					return 1;
				}
			}
			else
			{
				uParam0->f_42.f_3 = 1;
				func_315(uParam0, 1, 1);
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
				if (NETWORK::SET_BALANCE_ADD_MACHINES(&(Global_961130.f_1177), Global_961130.f_65, func_98(0)))
				{
					func_101(uParam0, 12);
				}
			}
			else if (NETWORK::SET_BALANCE_ADD_MACHINES(&(Global_959568.f_1177), Global_959568.f_65, func_98(0)))
			{
				func_101(uParam0, 12);
			}
			break;
		
		case 12:
			if (NETWORK::_0x02ADA21EA2F6918F())
			{
				if (NETWORK::_0x941E5306BCD7C2C7())
				{
				}
				else
				{
					func_315(uParam0, 1, 1);
					uParam0->f_41 = NETWORK::_0xEDF7F927136C224B();
					*uParam0 = 0;
					func_117();
					return 1;
				}
				if (NETWORK::_0xE0A6138401BCB837() > 0)
				{
					if (uParam0->f_16)
					{
						Global_961130.f_65 = NETWORK::_0xE0A6138401BCB837();
					}
					else
					{
						Global_959568.f_65 = NETWORK::_0xE0A6138401BCB837();
					}
					uParam0->f_8 = 0;
					func_315(uParam0, 0, bParam8);
					func_174(uParam0);
					func_101(uParam0, 13);
				}
				else
				{
					func_315(uParam0, 1, 1);
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
							NETWORK::_0x61A885D3F7CFEE9A();
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
							NETWORK::_0x61A885D3F7CFEE9A();
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
						func_315(uParam0, 1, bParam8);
						*uParam0 = 0;
						uParam0->f_27 = 1;
						uParam0->f_30 = 0;
						func_117();
						return 1;
					}
					else if (uParam0->f_30 == 1)
					{
						func_315(uParam0, 1, bParam8);
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
					func_315(uParam0, 1, 1);
					*uParam0 = 0;
					uParam0->f_27 = 1;
					uParam0->f_30 = 0;
					func_117();
					return 1;
				}
				else if (uParam0->f_30 == 1)
				{
					func_315(uParam0, 1, bParam8);
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
			func_315(uParam0, 1, bParam8);
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
			if (!func_172(uParam0->f_24, uParam0->f_25, NETWORK::GET_PLAYER_ADVANCED_MODIFIER_PRIVILEGES(0), NETWORK::_GET_CONTENT_CATEGORY(0)))
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
		StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_12), NETWORK::_0xBF09786A7FCAB582(uParam0->f_7), 64);
	}
	if (!func_110())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_44 = NETWORK::_GET_CONTENT_DESCRIPTION_HASH(uParam0->f_7);
	}
	uParam1->f_72[uParam0->f_9 /*69*/].f_68 = NETWORK::_GET_CONTENT_CATEGORY(uParam0->f_7);
	uParam1->f_72[uParam0->f_9 /*69*/].f_56 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "min");
	uParam1->f_72[uParam0->f_9 /*69*/].f_59 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "tnum");
	uParam1->f_72[uParam0->f_9 /*69*/].f_60 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "num");
	uParam1->f_72[uParam0->f_9 /*69*/].f_54 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "type");
	uParam1->f_72[uParam0->f_9 /*69*/].f_55 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "subtype");
	uParam1->f_72[uParam0->f_9 /*69*/].f_48 = { func_86(iVar2, "cam") };
	uParam1->f_72[uParam0->f_9 /*69*/].f_51 = { func_85(iVar2) };
	uParam1->f_72[uParam0->f_9 /*69*/].f_66 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar2, "adverm");
	uParam1->f_72[uParam0->f_9 /*69*/].f_57 = func_88(uParam0->f_7);
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/].f_6), NETWORK::_0x703F12425ECA8BF5(uParam0->f_7), 24);
	if (!func_110())
	{
		uParam1->f_72[uParam0->f_9 /*69*/].f_61 = func_82(NETWORK::_0x1ACCFBA3D8DAB2EE(uParam0->f_7, 0), NETWORK::_0x759299C5BB31D2A9(uParam0->f_7, 0));
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
	func_81(uParam1->f_72[uParam0->f_9 /*69*/].f_54, &(uParam1->f_72[uParam0->f_9 /*69*/].f_60), &(uParam1->f_72[uParam0->f_9 /*69*/].f_56));
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
	StringCopy(&(uParam1->f_72[uParam0->f_9 /*69*/]), NETWORK::_GET_CONTENT_ID(uParam0->f_9), 24);
	uParam0->f_8 = 0;
	uParam0->f_7++;
	if (DATAFILE::DATAFILE_GET_FILE_DICT() != 0)
	{
		DATAFILE::DATAFILE_DELETE();
	}
	if (!func_110())
	{
		StringCopy(&(uParam1->f_1177[uParam0->f_9 /*6*/]), NETWORK::_GET_CONTENT_ID(uParam0->f_9), 24);
		if (NETWORK::_0x70EA8DA57840F9BE(uParam0->f_9))
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
				NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
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
			switch (GRAPHICS::_0x1670F8D05056F257(NETWORK::_0xBAF6BABF9E7CCC13(0, uParam3)))
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
							NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
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
	while (iVar14 <= (Global_4456448.f_41 - 1))
	{
		if (iVar14 < 4)
		{
			Global_1646426.f_1[iVar14] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "nrl"), iVar14);
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
			while (iVar15 <= (Global_1646426.f_1[iVar14] - 1))
			{
				Global_1646426.f_6[iVar14 /*18*/][iVar15] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar25[iVar14], iVar15);
				Global_1646426.f_79[iVar14 /*18*/][iVar15] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar30[iVar14], iVar15);
				if (uVar20[iVar14] != 0)
				{
					StringCopy(&(Global_1646426.f_152[iVar14 /*273*/][iVar15 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar20[iVar14], iVar15), 64);
				}
				else
				{
					StringCopy(&(Global_1646426.f_152[iVar14 /*273*/][iVar15 /*16*/]), "", 64);
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
	while (iVar80 <= (Global_4456448.f_41 - 1))
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
		while (iVar14 < Global_1646426.f_1[iVar80])
		{
			if ((!GAMEPLAY::IS_BIT_SET(Global_1646426.f_6[iVar80 /*18*/][iVar14], 11) && !GAMEPLAY::IS_BIT_SET(Global_1646426.f_79[iVar80 /*18*/][iVar14], 21)) && iVar81 < 8)
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
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !GAMEPLAY::IS_BIT_SET(Global_1646426.f_6[iVar80 /*18*/][iVar193], 11)) && !GAMEPLAY::IS_BIT_SET(Global_1646426.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_141(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1659513.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar10, iVar14) };
					Global_1659513.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1659513.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_140(iVar15, 1) };
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
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !GAMEPLAY::IS_BIT_SET(Global_1646426.f_6[iVar80 /*18*/][iVar193], 11)) && !GAMEPLAY::IS_BIT_SET(Global_1646426.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_141(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1659513.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar13, iVar14) };
					Global_1659513.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1659513.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_140(iVar15, 3) };
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
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !GAMEPLAY::IS_BIT_SET(Global_1646426.f_6[iVar80 /*18*/][iVar193], 11)) && !GAMEPLAY::IS_BIT_SET(Global_1646426.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_141(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					Global_1659513.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar82[iVar91] /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar55[iVar80], iVar14) };
					Global_1659513.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar82[iVar91]] = 1;
					Global_1659513.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar82[iVar91] /*3*/] = { func_140(iVar15, 4) };
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
			if (((((iVar193 != -1 && iVar193 < 17) && iVar15 != 0) && iVar15 != 99999) && !GAMEPLAY::IS_BIT_SET(Global_1646426.f_6[iVar80 /*18*/][iVar193], 11)) && !GAMEPLAY::IS_BIT_SET(Global_1646426.f_79[iVar80 /*18*/][iVar193], 21))
			{
				iVar91 = func_141(&iVar92, iVar193, iVar81);
				if (iVar91 != -1 && iVar82[iVar91] < 10)
				{
					iVar190 = iVar82[iVar91];
					iVar192 = 0;
					iVar191 = 0;
					while (iVar191 < 10)
					{
						if (iVar192 == 0 && Global_1659513.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
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
					Global_1659513.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/] = vVar194.x;
					Global_1659513.f_407[iVar91 /*295*/].f_125[iVar80 /*31*/][iVar190 /*3*/].f_1 = vVar194.y;
					Var101[iVar91 /*11*/][iVar190]++;
					Global_1659513.f_407[iVar91 /*295*/].f_250[iVar80 /*11*/][iVar190] = 2;
					Global_1659513.f_407[iVar91 /*295*/][iVar80 /*31*/][iVar190 /*3*/] = { func_140(iVar15, 2) };
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
				if (Global_1659513.f_407[iVar14 /*295*/].f_250[iVar80 /*11*/][iVar191] == 2)
				{
					Global_1659513.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] = (Global_1659513.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/] / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
					Global_1659513.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 = (Global_1659513.f_407[iVar14 /*295*/].f_125[iVar80 /*31*/][iVar191 /*3*/].f_1 / IntToFloat(Var101[iVar14 /*11*/][iVar191]));
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
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
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
	return Global_2448756.f_607;
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
	return GAMEPLAY::IS_BIT_SET(Global_2448756, 1);
}

var func_146()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448756, 2);
}

var func_147()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448756, 20);
}

var func_148()
{
	return Global_2448756.f_586;
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
	return iParam0 == Global_262145.f_8501;
}

bool func_151(int iParam0)
{
	return iParam0 == Global_262145.f_8495;
}

bool func_152(int iParam0)
{
	return iParam0 == Global_262145.f_8489;
}

bool func_153(int iParam0)
{
	return iParam0 == Global_262145.f_8482;
}

bool func_154(int iParam0)
{
	return iParam0 == Global_262145.f_8477;
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
			Global_1648567.f_5 = 0;
			uParam0->f_8 = 0;
			if (iParam3 == 1)
			{
				Global_1648592.f_5 = 0;
				Global_1648592.f_4 = 0;
				Global_1648592.f_1 = 0;
				Global_1648592.f_2 = 0;
				return 1;
			}
			else if (iParam3 == 4)
			{
				Global_1648592.f_5 = 0;
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
					Global_1648598 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pt");
					Global_1648598.f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pu");
					Global_1648598.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "ft");
					Global_1648598.f_3 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "fu");
					Global_1648598.f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "qt");
					Global_1648598.f_5 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "qu");
				}
				else
				{
					uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
					Global_1648567.f_10 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "dt"));
					Global_1648567.f_11 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "du"));
					Global_1648567.f_9 = (Global_1648567.f_10 / Global_1648567.f_11);
					Global_1648567.f_13 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pt"));
					Global_1648567.f_14 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pu"));
					Global_968147 = SYSTEM::ROUND(Global_1648567.f_14);
					Global_1648567.f_12 = (Global_1648567.f_13 / Global_1648567.f_14);
					Global_1648567.f_15 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "qt"));
					Global_1648567.f_17 = SYSTEM::TO_FLOAT(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "qu"));
					Global_1648567.f_16 = (Global_1648567.f_15 / Global_1648567.f_17);
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
			if (NETWORK::_0x70EA8DA57840F9BE(iParam1))
			{
				if (bParam2)
				{
					if (DATAFILE::_0x52818819057F2B40(iParam1))
					{
						uVar0 = DATAFILE::DATAFILE_GET_FILE_DICT();
						if (iParam3 == 0)
						{
							Global_1648567 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "quit");
							Global_1648567.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "ply");
							Global_1648567.f_8 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "fl");
							if (Global_1648567.f_2 > 0)
							{
								Global_1648567.f_5 = 1;
							}
							DATAFILE::DATAFILE_DELETE();
						}
						else if (iParam3 == 4)
						{
							Global_1648592.f_5 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(uVar0, "won");
							Global_1648592.f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "ply");
							Global_1648592.f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "quit");
							Global_1648592.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "fl");
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
	Global_1648567 = 0;
	Global_1648567.f_2 = 0;
	Global_1648567.f_8 = 0;
	Global_1648567.f_3 = 0;
	Global_1648567.f_6 = 0;
}

int func_157(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_160() && !bParam2)
	{
		if (uParam0->f_21 == -1 || uParam0->f_22 == -1)
		{
			if ((!func_110() && iParam1 == 0) && !bParam3)
			{
				if (Global_4456448.f_139770 == 0)
				{
					if (func_159())
					{
						func_315(uParam0, 1, 1);
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
			if (!NETWORK::_0xF53E48461B71EECB(NETWORK::_0x32DD916F3F7C9672(0)))
			{
				Global_4456448.f_139752 = 1;
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
	GAMEPLAY::SET_BIT(&(Global_2448756.f_35.f_4), 7);
}

int func_159()
{
	if (((Global_4456448 != 2 && Global_4456448 != 0) && Global_4456448 != 1) && Global_4456448 != 3)
	{
		return 1;
	}
	if (Global_4456448 == 0)
	{
		if (Global_4456448.f_161209 != 0)
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
		if (Global_4456448.f_55685 == 8 || Global_4456448.f_55685 == 9)
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
	if (Global_4456448.f_46627 || func_162())
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
		if ((((((((((((Global_4456448.f_58050[iVar0] == joaat("prop_rail_boxcar") || Global_4456448.f_58050[iVar0] == joaat("prop_rail_boxcar2")) || Global_4456448.f_58050[iVar0] == -1894510521) || Global_4456448.f_58050[iVar0] == joaat("prop_rail_boxcar3")) || Global_4456448.f_58050[iVar0] == -1562909828) || Global_4456448.f_58050[iVar0] == joaat("prop_rail_boxcar4")) || Global_4456448.f_58050[iVar0] == 338623111) || Global_4456448.f_58050[iVar0] == joaat("prop_rail_boxcar5")) || Global_4456448.f_58050[iVar0] == joaat("prop_rail_boxcar5_d")) || Global_4456448.f_58050[iVar0] == -1529940538) || Global_4456448.f_58050[iVar0] == 1152304222) || Global_4456448.f_58050[iVar0] == joaat("freight")) || Global_4456448.f_58050[iVar0] == joaat("metrotrain"))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_163()
{
	if ((Global_4456448.f_78.f_2 < 0f || func_164(Global_4456448.f_78, 999, 2f)) || (Global_4456448.f_48124[0 /*3*/].f_2 < -2f && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_48637[0], 5)))
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
			if (Global_1049815[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_2 > Global_1049815[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3.f_2)
			{
				vVar1[iVar21 /*3*/] = { Global_1049815[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
				vVar11[iVar21 /*3*/] = { Global_1049815[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
			}
			else
			{
				vVar1[iVar21 /*3*/] = { Global_1049815[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/].f_3 };
				vVar11[iVar21 /*3*/] = { Global_1049815[iParam3 /*1951*/].f_146.f_57[iVar21 /*8*/] };
			}
			vVar1[iVar21 /*3*/].f_2 = (vVar1[iVar21 /*3*/].f_2 + fParam4);
			vVar11[iVar21 /*3*/].f_2 = (vVar11[iVar21 /*3*/].f_2 - fParam4);
			iVar21++;
		}
		if ((OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar11[0 /*3*/], vVar1[0 /*3*/], Global_1049815[iParam3 /*1951*/].f_146.f_57[0 /*8*/].f_6, 0, 1) || (Global_1049815[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar11[1 /*3*/], vVar1[1 /*3*/], Global_1049815[iParam3 /*1951*/].f_146.f_57[1 /*8*/].f_6, 0, 1))) || (Global_1049815[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar11[2 /*3*/], vVar1[2 /*3*/], Global_1049815[iParam3 /*1951*/].f_146.f_57[2 /*8*/].f_6, 0, 1)))
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
		StringCopy(&Global_2460909, "", 64);
	}
	else
	{
		Global_2460909 = { Param1 };
	}
	Global_2460908 = iParam0;
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
	return Global_2448756.f_35.f_48;
}

int func_168()
{
	return Global_2459064;
}

bool func_169()
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_196 != 0;
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
	Var3 = { func_171(NETWORK::GET_PLAYER_ADVANCED_MODIFIER_PRIVILEGES(0)) };
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
	Global_4456448.f_139725 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "debugOnlyVersion");
	if (!bParam2 || iParam3 == 0)
	{
		func_254(iVar1, iParam0, bParam1);
		func_253(iVar1);
		func_252(&iVar1);
		func_251(&iVar1);
		func_250(&iVar1);
		func_249(&iVar1);
		func_248(&iVar1);
		func_247(&iVar1);
		func_245(&iVar1);
		func_244(&iVar1);
		func_242(&iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (func_133())
	{
		if (!bParam2 || iParam3 == 1)
		{
			func_241(iVar1);
			func_240(iVar1);
			func_239(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 2)
		{
			func_238(iVar1);
			func_237(uVar2);
			func_236(iVar1);
			if (bParam2)
			{
				return;
			}
		}
		if (!bParam2 || iParam3 == 3)
		{
			func_230(iVar1);
			func_229(iVar1);
			func_228(iVar1);
			func_227(iVar1);
			if (bParam2)
			{
				return;
			}
		}
	}
	else if (func_128())
	{
		func_223(iVar1);
		func_228(iVar1);
	}
	else if (func_222())
	{
		func_228(iVar1);
	}
	if (!bParam2 || iParam3 == 4)
	{
		func_220(iVar1);
		func_219(iVar1);
		func_218(iVar1);
		func_217(iVar1);
		func_216(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (!bParam2 || iParam3 == 5)
	{
		func_212(iVar1);
		func_204(iVar1);
		func_200(iVar1);
		func_195(iVar1);
		if (bParam2)
		{
			return;
		}
	}
	if (Global_4456448 == 1)
	{
		func_240(iVar1);
		func_194(iVar1);
	}
	else if ((((Global_4456448 == 0 || Global_4456448.f_55685 == 8) || Global_4456448.f_55685 == 9) || Global_4456448 == 6) || func_193())
	{
		func_187(iVar1);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_17, 19))
	{
		func_186(iVar1);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_4), 15);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_4), 18);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_4), 19);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_4), 29);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_4), 28);
	if (func_193() && func_185(Global_4456448.f_161209))
	{
		func_181(&iVar1);
	}
	if (func_78(Global_4456448.f_138474))
	{
		Global_4456448.f_37 = Global_4456448.f_36;
	}
	if ((!func_179(PLAYER::PLAYER_ID()) && !func_178()) && !Global_1647688)
	{
		iVar3 = func_80(Global_4456448.f_138474, 1);
		if (iVar3 != -1)
		{
			if (Global_262145.f_4915[iVar3] != -1 && Global_262145.f_6340[iVar3] != 251)
			{
				Global_4456448.f_37 = Global_262145.f_4915[iVar3];
			}
			if (Global_262145.f_4864[iVar3] != -1 && Global_262145.f_6340[iVar3] != 251)
			{
				Global_4456448.f_36 = Global_262145.f_4864[iVar3];
			}
		}
	}
	if (func_53(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_4), 15);
	}
	else if (func_52(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_4), 18);
	}
	else if (func_51(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_4), 19);
	}
	else if (func_49(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_4), 29);
	}
	else if (func_50(Global_4456448.f_138474, 1))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_4), 28);
	}
	else if (func_48(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 0);
	}
	else if (func_47(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 1);
	}
	else if (func_46(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 2);
	}
	else if (func_42(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 6);
	}
	else if (func_41(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 7);
	}
	else if (func_40(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 8);
	}
	else if (func_39(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 9);
	}
	else if (func_35(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 10);
	}
	else if (func_38(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 11);
	}
	else if (func_37(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 12);
	}
	else if (func_72(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 13);
	}
	else if (func_71(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 22);
	}
	else if (func_36(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 14);
	}
	else if (func_45(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 3);
	}
	else if (func_44(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 4);
	}
	else if (func_70(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 16);
	}
	else if (func_69(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 17);
	}
	else if (func_68(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 20);
	}
	else if (func_67(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 21);
	}
	else if (func_71(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 22);
	}
	else if (func_43(Global_4456448.f_138474))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 5);
	}
	else if (func_66(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 23);
	}
	else if (func_62(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 27);
	}
	else if (func_65(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 24);
	}
	else if (func_63(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 26);
	}
	else if (func_64(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 25);
	}
	else if (func_61(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 28);
	}
	else if (func_60(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 29);
	}
	else if (func_59(Global_4456448.f_161209))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_5), 30);
	}
	func_177(Global_4456448.f_138474);
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
		if (iParam0 == Global_262145.f_8918[iVar0] || iParam0 == Global_262145.f_8927[iVar0])
		{
			Global_4456448.f_78 = { func_57(0, iVar0) };
			Global_4456448.f_81 = { func_56(0, iVar0) };
			vVar1 = { func_55(0, iVar0) };
			Global_4456448.f_100 = vVar1.z;
			Global_4456448.f_1 = 0;
			Global_4456448.f_2 = 8;
			Global_4456448.f_139733 = 0;
			Global_4456448.f_139736 = 16777215;
		}
		iVar0++;
	}
}

bool func_178()
{
	return GAMEPLAY::IS_BIT_SET(Global_2449538.f_1.f_2809, 5);
}

bool func_179(int iParam0)
{
	return func_180(iParam0);
}

var func_180(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

void func_181(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	char cVar7[16];
	
	iVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*iParam0, "surv");
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wave") == 2)
	{
		Global_4456448.f_162445 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wave");
	}
	else
	{
		Global_4456448.f_162445 = 10;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvtst") == 2)
	{
		Global_4456448.f_162445.f_2728 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvtst");
	}
	else
	{
		Global_4456448.f_162445.f_2728 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sbits") == 2)
	{
		Global_4456448.f_162445.f_2808 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "sbits");
	}
	else
	{
		Global_4456448.f_162445.f_2808 = 0;
	}
	iVar2 = 1;
	while (iVar2 <= Global_4456448.f_162445)
	{
		StringCopy(&cVar7, "wKil", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_162445.f_1[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_162445.f_1[iVar2] = func_184(13, iVar2, 0);
		}
		StringCopy(&cVar7, "wveq", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_162445.f_2729[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_162445.f_2729[iVar2] = func_184(17, iVar2, 0);
		}
		StringCopy(&cVar7, "wvss", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_162445.f_2773[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_162445.f_2773[iVar2] = func_184(18, iVar2, 0);
		}
		StringCopy(&cVar7, "wdif", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_162445.f_2751[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_162445.f_2751[iVar2] = func_184(19, iVar2, 0);
		}
		iVar3 = 0;
		while (iVar3 <= 2)
		{
			StringCopy(&cVar7, "sqd", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_23[iVar2 /*4*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_23[iVar2 /*4*/][iVar3] = func_184(0, iVar2, iVar3);
			}
			StringCopy(&cVar7, "pps", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_108[iVar2 /*4*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_108[iVar2 /*4*/][iVar3] = func_184(1, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_278[iVar2 /*4*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_278[iVar2 /*4*/][iVar3] = func_184(8, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdA", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_363[iVar2 /*4*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_363[iVar2 /*4*/][iVar3] = func_184(9, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdAC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_448[iVar2 /*4*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_448[iVar2 /*4*/][iVar3] = func_184(10, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_533[iVar2 /*4*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_533[iVar2 /*4*/][iVar3] = func_184(12, iVar2, iVar3);
			}
			StringCopy(&cVar7, "sqdMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_193[iVar2 /*4*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_193[iVar2 /*4*/][iVar3] = func_183(7, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_618[iVar2 /*4*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_618[iVar2 /*4*/][iVar3] = func_184(24, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_703[iVar2 /*4*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_703[iVar2 /*4*/][iVar3] = func_184(25, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyA", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_788[iVar2 /*4*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_788[iVar2 /*4*/][iVar3] = func_184(26, iVar2, iVar3);
			}
			StringCopy(&cVar7, "hvyMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "d", 16);
			StringIntConCat(&cVar7, iVar3, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_873[iVar2 /*4*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_873[iVar2 /*4*/][iVar3] = func_183(27, iVar2, iVar3);
			}
			iVar3++;
		}
		StringCopy(&cVar7, "lVeh", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_162445.f_958[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_162445.f_958[iVar2] = func_184(3, iVar2, 0);
		}
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			StringCopy(&cVar7, "vped", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_980[iVar2 /*5*/][iVar4] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_980[iVar2 /*5*/][iVar4] = func_184(4, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vmn", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_1086[iVar2 /*5*/][iVar4] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_1086[iVar2 /*5*/][iVar4] = func_183(5, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vHP", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_1192[iVar2 /*5*/][iVar4] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_1192[iVar2 /*5*/][iVar4] = func_184(14, iVar2, iVar4);
			}
			StringCopy(&cVar7, "vC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "v", 16);
			StringIntConCat(&cVar7, iVar4, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_1298[iVar2 /*5*/][iVar4] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_1298[iVar2 /*5*/][iVar4] = func_184(28, iVar2, iVar4);
			}
			iVar4++;
		}
		StringCopy(&cVar7, "sHeli", 16);
		StringIntConCat(&cVar7, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
		{
			Global_4456448.f_162445.f_2440[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
		}
		else
		{
			Global_4456448.f_162445.f_2440[iVar2] = func_184(6, iVar2, 0);
		}
		iVar5 = 0;
		while (iVar5 <= 2)
		{
			StringCopy(&cVar7, "airMN", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_2462[iVar2 /*4*/][iVar5] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_2462[iVar2 /*4*/][iVar5] = func_183(15, iVar2, iVar5);
			}
			StringCopy(&cVar7, "airH", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_2547[iVar2 /*4*/][iVar5] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_2547[iVar2 /*4*/][iVar5] = func_184(16, iVar2, iVar5);
			}
			StringCopy(&cVar7, "airC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "a", 16);
			StringIntConCat(&cVar7, iVar5, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_2632[iVar2 /*4*/][iVar5] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_2632[iVar2 /*4*/][iVar5] = func_184(28, iVar2, iVar5);
			}
			iVar5++;
		}
		iVar6 = 0;
		while (iVar6 <= 3)
		{
			StringCopy(&cVar7, "wepTyp", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_1404[iVar2 /*5*/][iVar6] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_1404[iVar2 /*5*/][iVar6] = func_182(iVar2, iVar6);
			}
			StringCopy(&cVar7, "wepC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_1510[iVar2 /*5*/][iVar6] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_1510[iVar2 /*5*/][iVar6] = func_184(20, iVar2, iVar6);
			}
			StringCopy(&cVar7, "wepT", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_1616[iVar2 /*5*/][iVar6] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			else
			{
				Global_4456448.f_162445.f_1616[iVar2 /*5*/][iVar6] = func_184(21, iVar2, iVar6);
			}
			iVar6++;
		}
		iVar6 = 0;
		while (iVar6 <= 9)
		{
			StringCopy(&cVar7, "ldWTyp", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_1722[iVar2 /*11*/][iVar6] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			StringCopy(&cVar7, "ldWwepC", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_1954[iVar2 /*11*/][iVar6] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			StringCopy(&cVar7, "ldWwepT", 16);
			StringIntConCat(&cVar7, iVar2, 16);
			StringConCat(&cVar7, "w", 16);
			StringIntConCat(&cVar7, iVar6, 16);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
			{
				Global_4456448.f_162445.f_2186[iVar2 /*11*/][iVar6] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
			}
			iVar6++;
		}
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "swwon") == 2)
		{
			Global_4456448.f_162445.f_2418[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "swwon");
		}
		else
		{
			Global_4456448.f_162445.f_2418[iVar2] = 0;
		}
		iVar2++;
	}
	StringCopy(&cVar7, "sqdMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "d", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_162445.f_193[0 /*4*/][0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_162445.f_193[0 /*4*/][0] = func_183(7, 0, 0);
	}
	StringCopy(&cVar7, "vmn", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "v", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_162445.f_1086[0 /*5*/][0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_162445.f_1086[0 /*5*/][0] = func_183(5, 0, 0);
	}
	StringCopy(&cVar7, "airMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "a", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_162445.f_2462[0 /*4*/][0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_162445.f_2462[0 /*4*/][0] = func_183(15, 0, 0);
	}
	StringCopy(&cVar7, "hvyMN", 16);
	StringIntConCat(&cVar7, 0, 16);
	StringConCat(&cVar7, "d", 16);
	StringIntConCat(&cVar7, 0, 16);
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 2)
	{
		Global_4456448.f_162445.f_873[0 /*4*/][0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar7);
	}
	else
	{
		Global_4456448.f_162445.f_873[0 /*4*/][0] = func_183(27, 0, 0);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		StringCopy(&cVar7, "sbndsv", 16);
		StringIntConCat(&cVar7, iVar1, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar7) == 5)
		{
			Global_4456448.f_162445.f_2717[iVar1 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar7) };
		}
		else
		{
			Global_4456448.f_162445.f_2717[iVar1 /*3*/] = { 0f, 0f, 0f };
		}
		iVar1++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sbndsr") == 3)
	{
		Global_4456448.f_162445.f_2724 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sbndsr");
	}
	else
	{
		Global_4456448.f_162445.f_2724 = 100f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sbndsh") == 3)
	{
		Global_4456448.f_162445.f_2725 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sbndsh");
	}
	else
	{
		Global_4456448.f_162445.f_2725 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sbndsbo") == 3)
	{
		Global_4456448.f_162445.f_2726 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sbndsbo");
	}
	else
	{
		Global_4456448.f_162445.f_2726 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sbndst") == 2)
	{
		Global_4456448.f_162445.f_2727 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "sbndst");
	}
	else
	{
		Global_4456448.f_162445.f_2727 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvalv") == 2)
	{
		Global_4456448.f_162445.f_2795 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvalv");
	}
	else
	{
		Global_4456448.f_162445.f_2795 = 360;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvaav") == 2)
	{
		Global_4456448.f_162445.f_2796 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvaav");
	}
	else
	{
		Global_4456448.f_162445.f_2796 = 1200;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvscb") == 2)
	{
		Global_4456448.f_162445.f_2798 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvscb");
	}
	else
	{
		Global_4456448.f_162445.f_2798 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvpcb") == 2)
	{
		Global_4456448.f_162445.f_2799 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvpcb");
	}
	else
	{
		Global_4456448.f_162445.f_2799 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvlvcb") == 2)
	{
		Global_4456448.f_162445.f_2802 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvlvcb");
	}
	else
	{
		Global_4456448.f_162445.f_2802 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvlmcb") == 2)
	{
		Global_4456448.f_162445.f_2803 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvlmcb");
	}
	else
	{
		Global_4456448.f_162445.f_2803 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvavcb") == 2)
	{
		Global_4456448.f_162445.f_2804 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvavcb");
	}
	else
	{
		Global_4456448.f_162445.f_2804 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvamcb") == 2)
	{
		Global_4456448.f_162445.f_2805 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvamcb");
	}
	else
	{
		Global_4456448.f_162445.f_2805 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvdcb") == 2)
	{
		Global_4456448.f_162445.f_2800 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvdcb");
	}
	else
	{
		Global_4456448.f_162445.f_2800 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvpmcb") == 2)
	{
		Global_4456448.f_162445.f_2801 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvpmcb");
	}
	else
	{
		Global_4456448.f_162445.f_2801 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvhcb") == 2)
	{
		Global_4456448.f_162445.f_2806 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvhcb");
	}
	else
	{
		Global_4456448.f_162445.f_2806 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvhmcb") == 2)
	{
		Global_4456448.f_162445.f_2807 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvhmcb");
	}
	else
	{
		Global_4456448.f_162445.f_2807 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvhow") == 2)
	{
		Global_4456448.f_162445.f_2797 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvhow");
	}
	else
	{
		Global_4456448.f_162445.f_2797 = 0;
	}
}

int func_182(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 3:
					return joaat("weapon_combatmg");
				
				default:
			}
			return joaat("weapon_pistol");
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("weapon_pistol");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("weapon_assaultshotgun");
				
				case 1:
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("weapon_assaultshotgun");
				
				case 1:
					return joaat("weapon_assaultrifle");
				
				case 2:
					return joaat("weapon_smg");
				
				case 3:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("weapon_carbinerifle");
				
				case 1:
					return joaat("weapon_assaultrifle");
				
				case 2:
					return joaat("weapon_assaultshotgun");
				
				case 3:
					return joaat("weapon_combatmg");
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("weapon_mg");
				
				case 1:
					return joaat("weapon_assaultrifle");
				
				case 2:
					return joaat("weapon_assaultshotgun");
				
				case 3:
					return joaat("weapon_minigun");
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("weapon_assaultrifle");
				
				case 2:
					return joaat("weapon_assaultshotgun");
				
				case 3:
					return joaat("weapon_minigun");
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("weapon_combatmg");
				
				case 1:
				case 2:
					return joaat("weapon_assaultrifle");
				
				case 3:
					return joaat("weapon_minigun");
				
				default:
			}
			break;
		
		case 9:
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("weapon_combatmg");
				
				case 2:
					return joaat("weapon_minigun");
				
				case 3:
					return joaat("weapon_minigun");
				
				default:
			}
			break;
		
		default:
			switch (iParam1)
			{
				case 0:
				case 1:
					return joaat("weapon_combatmg");
				
				case 2:
					return joaat("weapon_minigun");
				
				case 3:
					return joaat("weapon_minigun");
				
				default:
			}
			break;
	}
	return joaat("weapon_pistol");
}

int func_183(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 9:
							return joaat("sandking");
						
						default:
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 3:
						case 6:
							return joaat("sandking");
						
						case 5:
						case 8:
						case 9:
							return joaat("cavalcade");
						
						default:
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 6:
						case 8:
						case 9:
							return joaat("speedo");
						
						default:
					}
					break;
			}
			return joaat("sandking");
			break;
		
		case 7:
			return joaat("g_m_y_lost_01");
			break;
		
		case 15:
			return joaat("buzzard2");
			break;
		
		case 27:
			return -1863364300;
			break;
	}
	return 0;
}

int func_184(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					switch (iParam1)
					{
						case 1:
						case 2:
							return 1;
						
						case 3:
						case 4:
						case 5:
							return 2;
						
						case 6:
						case 7:
						case 8:
							return 3;
						
						case 9:
						case 10:
							return 4;
						
						default:
					}
					return 4;
					break;
				
				case 1:
					switch (iParam1)
					{
						case 1:
						case 2:
							return 1;
						
						case 3:
						case 4:
						case 5:
							return 2;
						
						case 6:
						case 7:
						case 8:
							return 3;
						
						case 9:
						case 10:
							return 4;
						
						default:
					}
					return 4;
					break;
				
				case 2:
					switch (iParam1)
					{
						case 1:
							return 0;
						
						case 2:
							return 1;
						
						case 3:
							return 0;
						
						case 4:
						case 5:
							return 2;
						
						case 6:
							return 0;
						
						case 7:
						case 8:
							return 3;
						
						case 9:
						case 10:
							return 4;
						
						default:
					}
					return 4;
					break;
			}
			break;
		
		case 1:
			return 5;
			break;
		
		case 3:
			switch (iParam1)
			{
				case 3:
				case 5:
				case 6:
				case 8:
					return 2;
				
				default:
			}
			return 0;
			break;
		
		case 6:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 6:
				case 8:
				case 9:
					return 0;
				
				default:
			}
			return 1;
			break;
		
		case 4:
			return 2;
			break;
		
		case 8:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 125;
				
				case 4:
				case 5:
				case 6:
					return 150;
				
				case 7:
				case 8:
				case 9:
				case 10:
					return 200;
				
				default:
			}
			return 200;
			break;
		
		case 9:
			switch (iParam1)
			{
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
					return 30;
				
				default:
			}
			return 20;
			break;
		
		case 10:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 15;
				
				case 4:
				case 5:
				case 6:
					return 20;
				
				case 7:
				case 8:
				case 9:
					return 25;
				
				case 10:
					return 30;
				
				default:
			}
			return 30;
			break;
		
		case 12:
			switch (iParam1)
			{
				case 1:
					return 0;
				
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return 1;
				
				case 7:
				case 8:
				case 9:
				case 10:
					return 2;
				
				default:
			}
			return 2;
			break;
		
		case 13:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
				case 4:
					return 3;
				
				default:
			}
			return 4;
			break;
		
		case 14:
			return 1000;
			break;
		
		case 16:
			return 350;
			break;
		
		case 17:
			switch (iParam1)
			{
				case 1:
				case 2:
					return 0;
				
				case 3:
				case 4:
				case 5:
					return 1;
				
				case 6:
				case 7:
				case 8:
					return 2;
				
				case 9:
				case 10:
					return 3;
				
				default:
			}
			return 3;
			break;
		
		case 18:
			switch (iParam1)
			{
				case 1:
					return 1;
				
				case 2:
					return 2;
				
				case 3:
					return 1;
				
				case 4:
				case 5:
					return 2;
				
				case 6:
					return 1;
				
				case 7:
				case 8:
				case 9:
				case 10:
					return 2;
				
				default:
			}
			return 2;
			break;
		
		case 19:
			switch (iParam1)
			{
				case 1:
				case 2:
				case 3:
					return 0;
				
				case 4:
				case 5:
				case 6:
					return 1;
				
				case 7:
				case 8:
				case 9:
					return 2;
				
				case 10:
					return 3;
				
				default:
			}
			return 3;
			break;
		
		case 20:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 3:
							return 2;
						
						default:
					}
					return 0;
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 0;
						
						case 2:
							return 2;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
						case 2:
							return 2;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 1;
						
						case 1:
							return 3;
						
						case 2:
							return 2;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 3;
						
						case 2:
							return 1;
						
						case 3:
							return 2;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						case 1:
							return 3;
						
						case 2:
							return 1;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 3;
						
						case 2:
							return 1;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 2;
						
						case 1:
						case 2:
							return 3;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				case 9:
				case 10:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 2;
						
						case 2:
							return 5;
						
						case 3:
							return 5;
						
						default:
					}
					break;
				
				default:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 2;
						
						case 2:
							return 5;
						
						case 3:
							return 5;
						
						default:
					}
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 3:
							return 25;
						
						default:
					}
					return 0;
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 0;
						
						case 2:
							return 23;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 16;
						
						case 1:
						case 2:
							return 23;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 16;
						
						case 1:
							return 33;
						
						case 2:
							return 23;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 34;
						
						case 1:
							return 33;
						
						case 2:
							return 16;
						
						case 3:
							return 25;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 24;
						
						case 1:
							return 33;
						
						case 2:
							return 16;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 33;
						
						case 2:
							return 16;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 25;
						
						case 1:
						case 2:
							return 33;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				case 9:
				case 10:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 25;
						
						case 2:
							return 51;
						
						case 3:
							return 51;
						
						default:
					}
					break;
				
				default:
					switch (iParam2)
					{
						case 0:
						case 1:
							return 25;
						
						case 2:
							return 51;
						
						case 3:
							return 51;
						
						default:
					}
					break;
			}
			break;
		
		case 24:
			return 0;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 4;
			break;
		
		case 28:
			return -1;
			break;
	}
	return 0;
}

bool func_185(int iParam0)
{
	return iParam0 == 998;
}

void func_186(int iParam0)
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
			Global_4456448.f_133250[iVar0 /*5*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar2, iVar0) };
			Global_4456448.f_133250[iVar0 /*5*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar3, iVar0);
		}
		else
		{
			Global_4456448.f_133250[iVar0 /*5*/] = { 0f, 0f, 0f };
			Global_4456448.f_133250[iVar0 /*5*/].f_3 = 0f;
		}
		iVar0++;
	}
}

void func_187(int iParam0)
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
	var uVar36;
	var uVar37;
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
	var uVar48;
	var uVar49;
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
	var uVar133;
	var uVar134;
	var uVar135;
	var uVar136;
	var uVar137;
	var uVar138;
	int iVar139;
	var uVar140;
	var uVar141;
	var uVar142;
	var uVar143;
	var uVar144;
	var uVar145;
	var uVar146;
	var uVar147;
	var uVar148;
	var uVar149;
	var uVar150;
	var uVar151;
	var uVar152;
	var uVar153;
	var uVar154;
	var uVar155;
	var uVar156;
	var uVar157;
	int iVar158;
	int iVar159;
	int iVar160;
	int iVar161;
	int iVar162;
	int iVar163;
	int iVar164;
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
	var uVar177;
	var uVar178;
	var uVar179;
	var uVar180;
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
	int iVar204;
	int iVar205;
	int iVar206;
	int iVar207;
	var uVar208;
	var uVar209;
	var uVar210;
	var uVar211;
	int iVar212;
	int iVar213;
	var uVar214;
	var uVar215;
	var uVar216;
	var uVar217;
	int iVar218;
	var uVar219;
	var uVar220;
	int iVar221;
	var uVar222;
	int iVar223;
	int iVar224;
	int iVar225;
	int iVar226;
	int iVar227;
	int iVar228;
	int iVar229;
	var uVar230[8];
	var uVar239[8];
	var uVar248[8];
	var uVar257[8];
	var uVar266[8];
	var uVar275[8];
	var uVar284[8];
	var uVar293[8];
	var uVar302[8];
	int iVar311;
	int iVar312;
	int iVar313;
	int iVar314;
	int iVar315;
	int iVar316;
	int iVar317;
	int iVar318;
	int iVar319;
	int iVar320;
	int iVar321;
	int iVar322;
	int iVar323;
	int iVar324;
	int iVar325;
	var uVar326;
	int iVar327;
	int iVar328;
	int iVar329;
	var uVar330;
	int iVar331;
	int iVar332;
	int iVar333;
	int iVar334;
	int iVar335;
	int iVar336;
	int iVar337;
	int iVar338;
	int iVar339;
	int iVar340;
	int iVar341;
	int iVar342;
	int iVar343;
	int iVar344;
	int iVar345;
	int iVar346;
	int iVar347;
	int iVar348;
	int iVar349;
	var uVar350;
	var uVar351;
	int iVar352;
	int iVar353;
	int iVar354;
	int iVar355;
	var uVar356[4];
	var uVar361[4];
	int iVar366;
	int iVar367;
	int iVar368;
	
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ene");
	Global_4456448.f_91941 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "no");
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar6, "spcap") == 2 && DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "spcap") != 0)
	{
		Global_4456448.f_91943 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "spcap");
	}
	else
	{
		Global_4456448.f_91943 = 50;
	}
	Global_4456448.f_91945 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "time");
	Global_4456448.f_91946 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "pal");
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
	uVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbrki");
	uVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbrks");
	uVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "whost");
	uVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "flee");
	uVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "frr");
	iVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pfrmr");
	iVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psnt");
	iVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psnei");
	iVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "prorbs");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "p2sp");
	iVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "p2sh");
	iVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pOvSp");
	iVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pOvSpH");
	uVar46 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "accu");
	iVar47 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "lgacc");
	uVar48 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cmsty");
	uVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedbs");
	iVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbstwo");
	iVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs3");
	iVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs4");
	iVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs5");
	iVar54 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs6");
	iVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs7");
	iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs8");
	iVar57 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs9");
	iVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs10");
	iVar59 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs11");
	iVar60 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs12");
	iVar61 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pbs13");
	iVar62 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paot");
	iVar63 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pfh");
	iVar64 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pmfhat");
	iVar65 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pgtho");
	iVar66 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pgthoh");
	iVar67 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "fixpd1");
	iVar68 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "fixpd2");
	iVar69 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "fixpd3");
	iVar70 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "fixpd4");
	iVar71 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cstp0");
	iVar72 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cstp1");
	iVar73 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cstp2");
	iVar74 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "mvov1r");
	iVar75 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "mvov1t");
	iVar76 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "mvov2r");
	iVar77 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "mvov2t");
	if (func_133())
	{
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_41 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "group", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar14[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar78[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar83[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "agr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar88[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "pSTRWA", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar93[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "tmflw", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar98[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar103[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar108[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "cblfr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar113[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "cblto", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar118[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "gtcpr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar123[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "pcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar128[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			StringCopy(&cVar4, "awt", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar230[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "awr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar239[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "awl", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar248[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "awlr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar257[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "aht", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar275[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "ags", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar266[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "agrd", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar284[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "agvr", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar293[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "agvg", 8);
			StringIntConCat(&cVar4, iVar3, 8);
			uVar302[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			iVar3++;
		}
		uVar133 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt");
		uVar134 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team");
		uVar135 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spawn");
		uVar136 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "acts");
		uVar137 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "scrrq");
		uVar138 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "awysrl");
		iVar139 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt2");
		uVar140 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team2");
		uVar141 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spawn2");
		uVar142 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "acts2");
		uVar143 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "scrrq2");
		uVar144 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "awysrl2");
		uVar145 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt3");
		uVar146 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team3");
		uVar147 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spawn3");
		uVar148 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "acts3");
		uVar149 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "scrrq3");
		uVar150 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "awysrl3");
		uVar151 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt4");
		uVar152 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team4");
		uVar153 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spawn4");
		uVar154 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "acts4");
		uVar155 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "scrrq4");
		uVar156 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "awysr4");
		uVar157 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "act");
		iVar158 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pper");
		iVar159 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "percr");
		iVar160 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "perca");
		iVar161 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "infr");
		iVar162 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cca");
		iVar163 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ccid");
		iVar164 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gfr");
		iVar165 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "msr");
		iVar166 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "bnr");
		iVar167 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "phor");
		iVar168 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "folr");
		iVar170 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pcvl");
		iVar171 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pcvr");
		iVar169 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdfw");
		iVar175 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pvdp1");
		iVar176 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pvdp2");
		iVar172 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paaw");
		iVar173 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paav1");
		iVar174 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paav2");
		uVar177 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "dt");
		uVar178 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "do");
		uVar208 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "dltd");
		uVar179 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "dtim");
		uVar180 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "dln");
		iVar181 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pvsp");
		uVar209 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "drge");
		uVar210 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "agrot");
		uVar211 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gtds");
		iVar212 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pstat");
		iVar213 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pstar");
		uVar214 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "dmv");
		uVar215 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "blkr");
		uVar216 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "let");
		uVar217 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "escr");
		iVar218 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "esco");
		uVar219 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actr");
		uVar220 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spkds");
		iVar221 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "entdmr");
		uVar222 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv");
		iVar223 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv2");
		iVar224 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv3");
		iVar225 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv4");
		iVar226 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv5");
		iVar227 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv6");
		iVar228 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv7");
		iVar229 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "actv8");
		iVar311 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedct");
		iVar313 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdcra");
		iVar312 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedcr");
		iVar315 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedsrT");
		iVar316 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedsrR");
		iVar314 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedcv");
		iVar317 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedbc");
		iVar318 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdbps");
		iVar319 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdbso");
		iVar320 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "avrad");
		iVar321 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdtc");
		iVar366 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdsbr");
		iVar367 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdrols");
		iVar322 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pedst");
		iVar323 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gotor");
		iVar324 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "invbs");
		iVar325 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gort");
		uVar326 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gorr");
		uVar330 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gorw");
		iVar327 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cmvd");
		iVar331 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "csct");
		iVar332 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cscr");
		iVar333 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cscs");
		iVar334 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cstnm");
		iVar335 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pspdl");
		iVar336 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psgr");
		iVar337 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pssgr");
		iVar338 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psctt");
		iVar339 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pscto");
		iVar340 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pscta");
		iVar341 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psctac");
		iVar342 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psctv");
		iVar343 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pscth");
		iVar344 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psctot");
		iVar345 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psctoi");
		iVar346 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pscatd");
		iVar347 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pprtot");
		iVar348 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pprtoi");
		iVar349 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ppratd");
		uVar350 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cutsc");
		uVar351 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cutsh");
		iVar352 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cstsc");
		iVar353 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cstsh");
		iVar354 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "nmpass");
		iVar355 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "nmfail");
		iVar182 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pmcp");
		iVar183 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pmcf");
		iVar184 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pambv");
		iVar185 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pwrpt");
		iVar186 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pcash");
		iVar187 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ptrdi");
		iVar188 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pspov");
		iVar189 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paccc");
		iVar190 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pslp");
		iVar191 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psor");
		iVar192 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "psort");
		iVar193 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pspovr");
		iVar203 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pspln");
		iVar202 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pcara");
		iVar194 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "paagzn");
		iVar204 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pior");
		iVar205 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "piort");
		iVar206 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "phbor");
		iVar207 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "phbort");
		iVar195 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pfbr");
		iVar196 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pfbd");
		iVar198 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pBcor");
		iVar199 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pLcor");
		iVar200 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pCwhT");
		iVar201 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pFVehS");
		iVar368 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "phffa");
		iVar197 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdamspok");
		iVar328 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdrlgrr");
		iVar329 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "pdrlgrt");
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&cVar4, "prstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar356[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "prsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar361[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			iVar1++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_91941 - 1))
	{
		if (iVar0 < 80)
		{
			Global_4456448.f_91947[iVar0 /*434*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar7, iVar0) };
			Global_4456448.f_91947[iVar0 /*434*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar8, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar9, iVar0);
			if (Global_4456448.f_91947[iVar0 /*434*/].f_4 < 0.75f)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_4 = 0.75f;
			}
			iVar2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar10, iVar0);
			if (iVar2 == joaat("mp_m_fibsec_01"))
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_19 = joaat("s_m_m_ciasec_01");
			}
			else if (iVar2 == joaat("ig_michelle"))
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_19 = -346957479;
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_19 = iVar2;
			}
			if (!func_128() && !func_192())
			{
				if (!STREAMING::IS_MODEL_VALID(Global_4456448.f_91947[iVar0 /*434*/].f_19))
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_19 = joaat("s_m_y_cop_01");
				}
			}
			iVar2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar11, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_20 = iVar2;
			iVar2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_21 = iVar2;
			if (Global_4456448 == 1)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_22[0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar14[0], iVar0);
			}
			Global_4456448.f_91947[iVar0 /*434*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			if (!func_191(Global_4456448.f_91947[iVar0 /*434*/].f_20))
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_20 = joaat("weapon_pistol");
			}
			Global_4456448.f_91947[iVar0 /*434*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20, iVar0);
			if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_43 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar21, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_43 = -1;
			}
			Global_4456448.f_91947[iVar0 /*434*/].f_67 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_44 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_45 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar25, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar26, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_48 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_49 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar29, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_50 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar30, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_51 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_416 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_52 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar33, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_53 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar34, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_56 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar35, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_54 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar36, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar37, iVar0);
			if (((((iVar38 != 0 && iVar39 != 0) && iVar40 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar38, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar39, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar40, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar38, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar40, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_6 = 0f;
				Global_4456448.f_91947[iVar0 /*434*/].f_7 = 0;
				Global_4456448.f_91947[iVar0 /*434*/].f_8 = -1;
			}
			if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar41, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_18 = 0;
			}
			if (((iVar42 != 0 && iVar43 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar0) == 3)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_9 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar42, iVar0) };
				Global_4456448.f_91947[iVar0 /*434*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar43, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_9 = { 0f, 0f, 0f };
				Global_4456448.f_91947[iVar0 /*434*/].f_12 = 0f;
			}
			if (((iVar44 != 0 && iVar45 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar44, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar45, iVar0) == 3)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_13 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar44, iVar0) };
				Global_4456448.f_91947[iVar0 /*434*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar45, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_13 = { 0f, 0f, 0f };
				Global_4456448.f_91947[iVar0 /*434*/].f_16 = 0f;
			}
			Global_4456448.f_91947[iVar0 /*434*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar46, iVar0);
			if (iVar47 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar47, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar47, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_40 = -1;
			}
			Global_4456448.f_91947[iVar0 /*434*/].f_55 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar48, iVar0);
			Global_4456448.f_91947[iVar0 /*434*/].f_265 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar49, iVar0);
			if (iVar50 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar50, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_266 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar50, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_266 = 0;
			}
			if (iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_267 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar51, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_267 = 0;
			}
			if (iVar52 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar52, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_268 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar52, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_268 = 0;
			}
			if (iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_269 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar53, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_269 = 0;
			}
			if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_270 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar54, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_270 = 0;
			}
			if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_271 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar55, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_271 = 0;
			}
			if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_272 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_272 = 0;
			}
			if (iVar57 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar57, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_273 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar57, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_273 = 0;
			}
			if (iVar58 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar58, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_274 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar58, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_274 = 0;
			}
			if (iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_275 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar59, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_275 = 0;
			}
			if (iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_276 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar60, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_276 = 0;
			}
			if (iVar61 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar61, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_277 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar61, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_277 = 0;
			}
			if (iVar62 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar62, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_278 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar62, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_278 = -1;
			}
			if (iVar63 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar63, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_279 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar63, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_279 = 0;
			}
			if (iVar67 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar67, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_423 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar67, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_423 = -1;
			}
			if (iVar68 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar68, iVar0) == 3)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_424 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar68, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_424 = -1f;
			}
			if (iVar69 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar69, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_425 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar69, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_425 = -1;
			}
			if (iVar70 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar70, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_426 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar70, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_426 = -1;
			}
			if (iVar71 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar71, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_427 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar71, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_427 = 0;
			}
			if (iVar72 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar72, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_428 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar72, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_428 = -1;
			}
			if (iVar73 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar73, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_429 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar73, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_429 = -1;
			}
			if (iVar74 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar74, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_430 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar74, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_430 = -1;
			}
			if (iVar75 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar75, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_431 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar75, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_431 = -1;
			}
			if (iVar76 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar76, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_432 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar76, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_432 = -1;
			}
			if (iVar77 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar77, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_433 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar77, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_433 = -1;
			}
			if (iVar64 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar64, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_280 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar64, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_280 = -1;
			}
			if (iVar65 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar65, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_413 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar65, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_413 = -1;
			}
			if (iVar66 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar66, iVar0) == 2)
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_414 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar66, iVar0);
			}
			else
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_414 = -1;
			}
			if (func_133())
			{
				Global_4456448.f_91947[iVar0 /*434*/].f_68 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar133, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_69 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar134, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_70 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar135, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_75 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar136, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_76 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar137, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_77 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar138, iVar0);
				if (iVar139 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar139, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_229 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar139, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_226 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar140, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_232 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar141, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_235 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar142, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_238 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar143, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_241 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar144, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_230 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar145, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_227 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar146, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_233 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar147, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_236 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar148, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_239 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar149, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_242 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar150, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_231 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar151, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_228 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar152, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_234 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar153, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_237 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar154, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_240 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar155, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_243 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar156, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_229 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_226 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_232 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_235 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_238 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_241 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_230 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_227 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_233 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_236 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_239 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_242 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_231 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_228 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_234 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_237 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_240 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_243 = -1;
				}
				Global_4456448.f_91947[iVar0 /*434*/].f_74 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar157, iVar0);
				if (iVar158 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar158, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_292 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar158, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_292 = 0;
				}
				if (iVar159 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar159, iVar0) == 3)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_293 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar159, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_293 = -1f;
				}
				if (iVar160 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar160, iVar0) == 3)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_294 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar160, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_294 = -1f;
				}
				if (iVar161 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar161, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_295 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar161, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_295 = 250;
				}
				if (iVar162 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar162, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_298 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar162, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_298 = 0;
				}
				if (iVar163 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar163, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_299 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar163, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_299 = -1;
				}
				if (iVar164 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar164, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_300 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar164, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_300 = 0;
				}
				if (iVar165 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar165, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_296 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar165, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_296 = 0;
				}
				if (iVar166 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar166, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_297 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar166, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_297 = -1;
				}
				if (iVar167 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar167, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_364 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar167, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_364 = -1;
				}
				if (iVar168 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar168, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_365 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar168, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_365 = -1;
				}
				if (iVar170 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar170, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_301 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar170, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_301 = { 0f, 0f, 0f };
				}
				if (iVar171 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar171, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_304 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar171, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_304 = { 0f, 0f, 0f };
				}
				if (((((iVar175 != 0 && iVar176 != 0) && iVar169 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar175, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar176, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar169, iVar0) == 3)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_312 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar175, iVar0) };
					Global_4456448.f_91947[iVar0 /*434*/].f_315 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar176, iVar0) };
					Global_4456448.f_91947[iVar0 /*434*/].f_318 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar169, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_312 = { 0f, 0f, 0f };
					Global_4456448.f_91947[iVar0 /*434*/].f_315 = { 0f, 0f, 0f };
					Global_4456448.f_91947[iVar0 /*434*/].f_318 = 1f;
				}
				if (((((iVar172 != 0 && iVar173 != 0) && iVar174 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar172, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar173, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar174, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_257 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar172, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_251 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar173, iVar0) };
					Global_4456448.f_91947[iVar0 /*434*/].f_254 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar174, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_257 = 0f;
					Global_4456448.f_91947[iVar0 /*434*/].f_251 = { 0f, 0f, 0f };
					Global_4456448.f_91947[iVar0 /*434*/].f_254 = { 0f, 0f, 0f };
				}
				if (iVar181 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar181, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_332 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar181, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_332 = 0;
				}
				Global_4456448.f_91947[iVar0 /*434*/].f_308 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar177, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_307 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar178, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_309 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar179, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_310 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar180, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_311 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar209, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_405 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar208, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_319 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar210, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_258 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar211, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar214, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar215, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_249 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar216, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_259 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar217, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_417 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar220, iVar0);
				if (iVar221 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar221, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_418 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar221, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_418 = 0;
				}
				if (iVar218 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar218, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_260 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar218, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_260 = { 0f, 0f, 0f };
				}
				Global_4456448.f_91947[iVar0 /*434*/].f_250 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar219, iVar0);
				Global_4456448.f_91947[iVar0 /*434*/].f_78 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar222, iVar0) };
				if (iVar223 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar223, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar223, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[0 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar224 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar224, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar224, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[1 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar225 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar225, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar225, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[2 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar226 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar226, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[3 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar226, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[3 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar227 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar227, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[4 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar227, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[4 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar228 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar228, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[5 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar228, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[5 /*3*/] = { 0f, 0f, 0f };
				}
				if (iVar229 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar229, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[6 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar229, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_81[6 /*3*/] = { 0f, 0f, 0f };
				}
				if (((iVar212 != 0 && iVar213 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar212, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar213, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_263 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar212, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_264 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar213, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_263 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_264 = -1;
				}
				iVar3 = 0;
				while (iVar3 <= 7)
				{
					if (uVar230[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar230[iVar3], iVar0) == 2)
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_104[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar230[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_104[iVar3] = 0;
					}
					if (uVar239[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar239[iVar3], iVar0) == 2)
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_113[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar239[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_113[iVar3] = -1;
					}
					if (((uVar248[iVar3] != 0 && uVar257[iVar3] != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar248[iVar3], iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar257[iVar3], iVar0) == 2)
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_122[iVar3 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar248[iVar3], iVar0) };
						Global_4456448.f_91947[iVar0 /*434*/].f_147[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar257[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_122[iVar3 /*3*/] = { 0f, 0f, 0f };
						Global_4456448.f_91947[iVar0 /*434*/].f_147[iVar3] = 3;
					}
					if (uVar266[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar266[iVar3], iVar0) == 2)
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_174[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar266[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_174[iVar3] = -1;
					}
					if (uVar275[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar275[iVar3], iVar0) == 3)
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_156[iVar3] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar275[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_156[iVar3] = 0f;
					}
					if (uVar284[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar284[iVar3], iVar0) == 3)
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_165[iVar3] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar284[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_165[iVar3] = 0f;
					}
					if (uVar293[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar293[iVar3], iVar0) == 3)
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_183[iVar3] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar293[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_183[iVar3] = 0f;
					}
					if (uVar302[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar302[iVar3], iVar0) == 2)
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_201[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar302[iVar3], iVar0);
					}
					else
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_201[iVar3] = -1;
					}
					iVar3++;
				}
				if (iVar312 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar312, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_320 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar312, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_320 = -1;
				}
				if (iVar311 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar311, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_321 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar311, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_321 = -1;
				}
				if (iVar315 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar315, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_325 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar315, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_325 = -1;
				}
				if (iVar316 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar316, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_324 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar316, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_324 = -1;
				}
				if (iVar314 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar314, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_323 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar314, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_323 = -1;
				}
				if (iVar313 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar313, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_322 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar313, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_322 = -1;
				}
				if (iVar322 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar322, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_331 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar322, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_331 = -3;
				}
				if (iVar317 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar317, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_347 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar317, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_347 = 0;
				}
				if (iVar318 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar318, iVar0) == 3)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_358 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar318, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_358 = 1f;
				}
				if (iVar319 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar319, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_359 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar319, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_359 = 0;
				}
				if (iVar321 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar321, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_412 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar321, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_412 = 1;
				}
				if (iVar366 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar366, iVar0) == 3)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_415 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar366, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_415 = 0f;
				}
				if (iVar367 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar367, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_420 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar367, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_420 = -1;
				}
				if (iVar320 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar320, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_103 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar320, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_103 = 0;
				}
				if (iVar323 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar323, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar323, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_58 = 0;
				}
				if (iVar324 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar324, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_59 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar324, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_59 = 0;
				}
				if (iVar334 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar334, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_224 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar334, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_224 = -1;
				}
				if (iVar335 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar335, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_225 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar335, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_225 = 0;
				}
				if (iVar336 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar336, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_71 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar336, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_71 = 0;
				}
				if (iVar337 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar337, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_72 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar337, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_72 = 0;
				}
				if (iVar182 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar182, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_345 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar182, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_345 = -1;
				}
				if (iVar183 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar183, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_346 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar183, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_346 = -1;
				}
				if (iVar184 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar184, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_366 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar184, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_366 = -1;
				}
				if (iVar185 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar185, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_372 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar185, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_372 = -1;
				}
				if (iVar186 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar186, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_373 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar186, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_373 = -1;
				}
				if (iVar187 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar187, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_374 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar187, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_374 = -1;
				}
				if (iVar188 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar188, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_378 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar188, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_378 = -1;
				}
				if (iVar189 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar189, iVar0) == 3)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_379 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar189, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_379 = 0f;
				}
				if (iVar190 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar190, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_375 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar190, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_375 = -1;
				}
				if (iVar191 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar191, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_376 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar191, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_376 = -1;
				}
				if (iVar192 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar192, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_377 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar192, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_377 = -1;
				}
				if (iVar194 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar194, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_406 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar194, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_406 = -1;
				}
				if (iVar195 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar195, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_407 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar195, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_407 = -1;
				}
				if (iVar196 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar196, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_408 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar196, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_408 = 10;
				}
				if (iVar198 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar198, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_409 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar198, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_409 = -1;
				}
				if (iVar199 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar199, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_410 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar199, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_410 = -1;
				}
				if (iVar200 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar200, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_411 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar200, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_411 = 0;
				}
				if (iVar197 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar197, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_419 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar197, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_419 = 0;
				}
				if (iVar201 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar201, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_73 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar201, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_73 = -1;
				}
				if (iVar368 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar368, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_291 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar368, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_291 = -1;
				}
				if (iVar193 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar193, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_380 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar193, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_380 = -1;
				}
				if (iVar202 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar202, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_399 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar202, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_399 = 10;
				}
				if (iVar204 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar204, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_401 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar204, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_401 = -1;
				}
				if (iVar205 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar205, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_400 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar205, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_400 = 0;
				}
				if (iVar206 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar206, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_403 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar206, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_403 = -1;
				}
				if (iVar207 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar207, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_402 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar207, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_402 = 0;
				}
				if (iVar203 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar203, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_404 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar203, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_404 = 0;
				}
				if (((((iVar338 != 0 && iVar339 != 0) && iVar340 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar338, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar339, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar340, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_210 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar338, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_211 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar339, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_213 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar340, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_210 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_211 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_213 = 0;
				}
				if (((((iVar344 != 0 && iVar345 != 0) && iVar346 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar344, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar345, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar346, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_218 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar344, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_219 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar345, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_220 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar346, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_218 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_219 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_220 = -1;
				}
				if (((((iVar347 != 0 && iVar348 != 0) && iVar349 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar347, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar348, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar349, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_221 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar347, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_222 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar348, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_223 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar349, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_221 = 0;
					Global_4456448.f_91947[iVar0 /*434*/].f_222 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_223 = -1;
				}
				if (iVar341 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar341, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_212 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar341, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_212 = 0;
				}
				if (iVar342 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar342, iVar0) == 5)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_214 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar342, iVar0) };
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_214 = { 0f, 0f, 0f };
				}
				if (iVar343 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar343, iVar0) == 3)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_217 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar343, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_217 = 0f;
				}
				if (iVar328 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar328, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_421 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar328, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_421 = -1;
				}
				if (iVar329 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar329, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_422 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar329, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_422 = -1;
				}
				if (iVar327 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar327, iVar0) == 3)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_66 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar327, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_66 = 0f;
				}
				if (((iVar325 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar325, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar326, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar330, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar325, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar326, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_62 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar330, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_60 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_61 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_62 = joaat("weapon_pistol");
				}
				if (((((iVar331 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar331, iVar0) == 2) && iVar332 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar332, iVar0) == 2) && iVar333 != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar333, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_63 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar331, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_64 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar332, iVar0);
					Global_4456448.f_91947[iVar0 /*434*/].f_65 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar333, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_63 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_64 = -1;
					Global_4456448.f_91947[iVar0 /*434*/].f_65 = -1;
				}
				if (Global_4456448.f_2 != 6 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar350, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_360 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar350, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_360 = -1;
				}
				if (iVar354 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar354, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_343 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar354, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_343 = -1;
				}
				if (iVar355 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar355, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_344 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar355, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_344 = -1;
				}
				if (Global_4456448.f_2 != 6 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar351, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_361 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar351, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_361 = 0;
				}
				if (iVar352 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar352, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_362 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar352, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_362 = -1;
				}
				if (iVar353 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar353, iVar0) == 2)
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_363 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar353, iVar0);
				}
				else
				{
					Global_4456448.f_91947[iVar0 /*434*/].f_363 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar356[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar356[iVar1], iVar0) == 5)
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_381[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar356[iVar1], iVar0) };
					}
					else
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_381[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (uVar361[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar361[iVar1], iVar0) == 3)
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_394[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar361[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_394[iVar1] = 0f;
					}
					iVar1++;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_4456448.f_41 - 1))
				{
					if (iVar3 < 4)
					{
						Global_4456448.f_91947[iVar0 /*434*/].f_22[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar14[iVar3], iVar0);
						Global_4456448.f_91947[iVar0 /*434*/].f_27[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar78[iVar3], iVar0);
						Global_4456448.f_91947[iVar0 /*434*/].f_32[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar83[iVar3], iVar0);
						if (Global_4456448.f_91947[iVar0 /*434*/].f_32[iVar3] == -1)
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_32[iVar3] = 99999;
						}
						if (uVar88[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar88[iVar3], iVar0) == 2)
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_281[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar88[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_281[iVar3] = -1;
						}
						if (uVar93[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar93[iVar3], iVar0) == 2)
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_286[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar93[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_286[iVar3] = -1;
						}
						if (uVar98[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar98[iVar3], iVar0) == 2)
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_244[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar98[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_244[iVar3] = 0;
						}
						if (uVar103[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar103[iVar3], iVar0) == 2)
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_333[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar103[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_333[iVar3] = 0;
						}
						if (uVar108[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar108[iVar3], iVar0) == 2)
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_338[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar108[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_338[iVar3] = 0;
						}
						if (((uVar113[iVar3] != 0 && uVar118[iVar3] != 0) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar113[iVar3], iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar118[iVar3], iVar0) == 2)
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_348[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar113[iVar3], iVar0);
							Global_4456448.f_91947[iVar0 /*434*/].f_353[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar118[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_348[iVar3] = -1;
							Global_4456448.f_91947[iVar0 /*434*/].f_353[iVar3] = -1;
						}
						if (uVar123[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar123[iVar3], iVar0) == 2)
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_367[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar123[iVar3], iVar0);
						}
						else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_46175[iVar3 /*4*/][func_190(iVar0)], func_189(iVar0)))
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_367[iVar3] = -1;
						}
						else
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_367[iVar3] = -2;
						}
						if (uVar128[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar128[iVar3], iVar0) == 2)
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_326[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar128[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_91947[iVar0 /*434*/].f_326[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
	func_188(&uVar6);
}

void func_188(var uParam0)
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
	int iVar13;
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
	int iVar27;
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
	int iVar41;
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
	int iVar55;
	int iVar56;
	
	Global_4456448.f_127490[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*uParam0, "no0");
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
	iVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ttm0");
	iVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tspr0");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_127490[0] - 1))
	{
		Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar1, iVar0) };
		Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar2, iVar0);
		Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar3, iVar0);
		if (iVar4 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar4, iVar0) == 2)
		{
			Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_7 = -1;
		}
		Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar5, iVar0);
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 2)
		{
			Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar0);
		}
		else
		{
			Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_10 = -1;
		}
		if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_11 = -1;
		}
		Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8, iVar0);
		Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
		Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar10, iVar0);
		Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar11, iVar0);
		Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
		if (iVar13 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar13, iVar0) == 2)
		{
			Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar13, iVar0);
		}
		else
		{
			Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_17 = -2;
		}
		if (iVar14 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar14, iVar0) == 2)
		{
			Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar14, iVar0);
		}
		else
		{
			Global_4456448.f_128637[0 /*1141*/][iVar0 /*19*/].f_18 = 0;
		}
		iVar0++;
	}
	Global_4456448.f_127490[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*uParam0, "no1");
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
	iVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ttm1");
	iVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tspr1");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_127490[1] - 1))
	{
		Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar15, iVar0) };
		Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar16, iVar0);
		Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17, iVar0);
		if (iVar18 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar18, iVar0) == 2)
		{
			Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar18, iVar0);
		}
		else
		{
			Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_7 = -1;
		}
		Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
		if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar0) == 2)
		{
			Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar0);
		}
		else
		{
			Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_10 = -1;
		}
		if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar0) == 2)
		{
			Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar21, iVar0);
		}
		else
		{
			Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_11 = -1;
		}
		Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
		Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23, iVar0);
		Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24, iVar0);
		Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar25, iVar0);
		Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar26, iVar0);
		if (iVar27 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar27, iVar0) == 2)
		{
			Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar0);
		}
		else
		{
			Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_17 = -2;
		}
		if (iVar28 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar28, iVar0) == 2)
		{
			Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar0);
		}
		else
		{
			Global_4456448.f_128637[1 /*1141*/][iVar0 /*19*/].f_18 = 0;
		}
		iVar0++;
	}
	Global_4456448.f_127490[2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*uParam0, "no2");
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
	iVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ttm2");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tspr2");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_127490[2] - 1))
	{
		Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar29, iVar0) };
		Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar30, iVar0);
		Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
		if (iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 2)
		{
			Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_7 = -1;
		}
		Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar33, iVar0);
		if (iVar34 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar34, iVar0) == 2)
		{
			Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar0);
		}
		else
		{
			Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_10 = -1;
		}
		if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
		{
			Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
		}
		else
		{
			Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_11 = -1;
		}
		Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar36, iVar0);
		Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar37, iVar0);
		Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38, iVar0);
		Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar39, iVar0);
		Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar40, iVar0);
		if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar0) == 2)
		{
			Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar41, iVar0);
		}
		else
		{
			Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_17 = -2;
		}
		if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar0) == 2)
		{
			Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
		}
		else
		{
			Global_4456448.f_128637[2 /*1141*/][iVar0 /*19*/].f_18 = 0;
		}
		iVar0++;
	}
	Global_4456448.f_127490[3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*uParam0, "no3");
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
	iVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "ttm3");
	iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(*uParam0, "tspr3");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_127490[3] - 1))
	{
		Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar43, iVar0) };
		Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar44, iVar0);
		Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar45, iVar0);
		if (iVar46 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar46, iVar0) == 2)
		{
			Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar0);
		}
		else
		{
			Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_7 = -1;
		}
		Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar47, iVar0);
		if (iVar48 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar48, iVar0) == 2)
		{
			Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar0);
		}
		else
		{
			Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_10 = -1;
		}
		if (iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar0) == 2)
		{
			Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar0);
		}
		else
		{
			Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_11 = -1;
		}
		Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar50, iVar0);
		Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar51, iVar0);
		Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52, iVar0);
		Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar53, iVar0);
		Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar54, iVar0);
		if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar0) == 2)
		{
			Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar55, iVar0);
		}
		else
		{
			Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_17 = -2;
		}
		if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar0) == 2)
		{
			Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar0);
		}
		else
		{
			Global_4456448.f_128637[3 /*1141*/][iVar0 /*19*/].f_18 = 0;
		}
		iVar0++;
	}
}

int func_189(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_190(iParam0) * 31);
}

int func_190(int iParam0)
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

int func_191(int iParam0)
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("weapon_pistol") || iParam0 == joaat("weapon_microsmg")) || iParam0 == joaat("weapon_smg")) || iParam0 == joaat("weapon_assaultrifle")) || iParam0 == joaat("weapon_advancedrifle")) || iParam0 == joaat("weapon_mg")) || iParam0 == joaat("weapon_combatmg")) || iParam0 == joaat("weapon_pumpshotgun")) || iParam0 == joaat("weapon_sawnoffshotgun")) || iParam0 == joaat("weapon_sniperrifle")) || iParam0 == joaat("weapon_heavysniper")) || iParam0 == joaat("weapon_grenadelauncher")) || iParam0 == joaat("weapon_rpg")) || iParam0 == joaat("weapon_minigun")) || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_unarmed")) || iParam0 == joaat("weapon_machinepistol")) || iParam0 == joaat("weapon_grenade")) || iParam0 == joaat("weapon_stickybomb")) || iParam0 == joaat("weapon_molotov")) || iParam0 == joaat("weapon_pipebomb")) || iParam0 == joaat("weapon_carbinerifle")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_wrench")) || iParam0 == joaat("weapon_specialcarbine")) || iParam0 == joaat("weapon_bullpuprifle")) || iParam0 == joaat("weapon_heavyshotgun")) || iParam0 == joaat("weapon_bullpupshotgun")) || iParam0 == joaat("weapon_assaultshotgun")) || iParam0 == joaat("weapon_assaultsmg")) || iParam0 == joaat("weapon_combatpdw"))
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

bool func_193()
{
	return Global_4456448 == 3;
}

void func_194(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ene");
	Global_4456448.f_127489 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "no");
	Global_4456448.f_58049 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "veh");
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "loc");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "head");
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "team");
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "dmSPTR");
	if (Global_4456448.f_127489 > 60)
	{
		Global_4456448.f_127489 = 60;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_127489 - 1))
	{
		if (iVar0 < 60)
		{
			Global_4456448.f_127496[iVar0 /*19*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar2, iVar0) };
			Global_4456448.f_127496[iVar0 /*19*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar3, iVar0);
			Global_4456448.f_127496[iVar0 /*19*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar4, iVar0);
			Global_4456448.f_127496[iVar0 /*19*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar5, iVar0);
		}
		iVar0++;
	}
	func_188(&uVar1);
}

void func_195(int iParam0)
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
	Global_4456448.f_77882 = func_199(DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "no"), 0, 200);
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
	if (Global_4456448.f_77882 > 32)
	{
		Global_4456448.f_77882 = 32;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_77882 - 1))
	{
		Global_4456448.f_77884[iVar0 /*39*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar3, iVar0) };
		Global_4456448.f_77884[iVar0 /*39*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar4, iVar0) };
		Global_4456448.f_77884[iVar0 /*39*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar5, iVar0);
		Global_4456448.f_77884[iVar0 /*39*/].f_8 = -1;
		iVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar6, iVar0);
		Global_4456448.f_77884[iVar0 /*39*/].f_7 = func_198(iVar1);
		if (!STREAMING::IS_MODEL_VALID(Global_4456448.f_77884[iVar0 /*39*/].f_7))
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_7 = -1344435013;
		}
		Global_4456448.f_77884[iVar0 /*39*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar7, iVar0);
		Global_4456448.f_77884[iVar0 /*39*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8, iVar0);
		Global_4456448.f_77884[iVar0 /*39*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
		if (Global_4456448.f_77884[iVar0 /*39*/].f_13 == -1)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_13 = 0;
		}
		if (iVar11 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar11, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar11, iVar0);
			Global_4456448.f_77884[iVar0 /*39*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
			Global_4456448.f_77884[iVar0 /*39*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13, iVar0);
			Global_4456448.f_77884[iVar0 /*39*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar15, iVar0);
			Global_4456448.f_77884[iVar0 /*39*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar16, iVar0);
			Global_4456448.f_77884[iVar0 /*39*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17, iVar0);
			Global_4456448.f_77884[iVar0 /*39*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			Global_4456448.f_77884[iVar0 /*39*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20, iVar0);
			Global_4456448.f_77884[iVar0 /*39*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar21, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_22 = -1;
			Global_4456448.f_77884[iVar0 /*39*/].f_19 = 0;
			Global_4456448.f_77884[iVar0 /*39*/].f_25 = 0;
			Global_4456448.f_77884[iVar0 /*39*/].f_23 = -1;
			Global_4456448.f_77884[iVar0 /*39*/].f_20 = 0;
			Global_4456448.f_77884[iVar0 /*39*/].f_26 = 0;
			Global_4456448.f_77884[iVar0 /*39*/].f_24 = -1;
			Global_4456448.f_77884[iVar0 /*39*/].f_21 = 0;
			Global_4456448.f_77884[iVar0 /*39*/].f_27 = 0;
		}
		if (iVar10 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar10, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar10, iVar0);
			Global_4456448.f_77884[iVar0 /*39*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar14, iVar0);
			Global_4456448.f_77884[iVar0 /*39*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18, iVar0);
			Global_4456448.f_77884[iVar0 /*39*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_14 = 0;
			Global_4456448.f_77884[iVar0 /*39*/].f_28 = 0;
			Global_4456448.f_77884[iVar0 /*39*/].f_29 = 0;
			Global_4456448.f_77884[iVar0 /*39*/].f_30 = 0;
		}
		if (iVar24 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar24, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar24, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_15 = -1;
		}
		if (iVar23 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar23, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar23, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_16 = -1;
		}
		if (iVar25 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar25, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_17 = -1;
		}
		if (iVar26 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar26, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_18 = 0;
		}
		if (iVar28 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar28, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_31 = 0;
		}
		if (iVar27 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar27, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_9 = 0;
		}
		if (iVar29 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar29, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar29, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_10 = 1;
		}
		if (iVar30 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar30, iVar0) == 3)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar30, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_32 = 2f;
		}
		if (iVar33 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar33, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar33, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_35 = -1;
		}
		if (iVar31 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar31, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar31, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_33 = 0;
		}
		if (iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_34 = 0;
		}
		if (iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_34 = 0;
		}
		if (iVar34 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar34, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_36 = 0;
		}
		if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_37 = 0;
		}
		if (iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar0) == 2)
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
		}
		else
		{
			Global_4456448.f_77884[iVar0 /*39*/].f_38 = -1;
		}
		iVar0++;
	}
	iVar37 = iVar0;
	if ((func_197() || Global_4456448 == 1) && !func_196())
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_58131 - 1))
		{
			Global_4456448.f_77884[iVar37 /*39*/] = { Global_4456448.f_58134[iVar0 /*151*/] };
			Global_4456448.f_77884[iVar37 /*39*/].f_3 = { Global_4456448.f_58134[iVar0 /*151*/].f_4 };
			Global_4456448.f_77884[iVar37 /*39*/].f_6 = Global_4456448.f_58134[iVar0 /*151*/].f_3;
			Global_4456448.f_77884[iVar37 /*39*/].f_8 = iVar0;
			Global_4456448.f_77884[iVar37 /*39*/].f_7 = -699955605;
			iVar38 = 0;
			while (iVar38 <= 3)
			{
				Global_4456448.f_58134[iVar37 /*151*/].f_17[iVar38] = 0;
				Global_4456448.f_58134[iVar37 /*151*/].f_22[iVar38] = 99999;
				iVar38++;
			}
			Global_4456448.f_77883++;
			Global_4456448.f_77882++;
			iVar37++;
			iVar0++;
		}
	}
}

bool func_196()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return GAMEPLAY::IS_BIT_SET(Global_4456448.f_165254, 0);
	}
	return ((GAMEPLAY::IS_BIT_SET(Global_4456448.f_165254, 0) || Global_1648547) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_197()
{
	if (Global_4456448 == 0 && Global_4456448.f_2 == 5)
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0)
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

int func_199(int iParam0, int iParam1, int iParam2)
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

void func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	int iVar12;
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
	var uVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	var uVar27;
	var uVar28;
	int iVar29;
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
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	var uVar49;
	int iVar50;
	var uVar51;
	var uVar52;
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
	var uVar68[4];
	char[] cVar73[8];
	var uVar75;
	int iVar76;
	
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "prop");
	Global_4456448.f_61781 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar3, "no");
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "loc");
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "vRot");
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "head");
	uVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "model");
	uVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asst");
	uVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asso");
	uVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asss");
	iVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pasc");
	iVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asst2");
	uVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asso2");
	uVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asss2");
	uVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pasc2");
	uVar16 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asst3");
	uVar17 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asso3");
	uVar18 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asss3");
	uVar19 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pasc3");
	uVar20 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asst4");
	uVar21 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asso4");
	uVar22 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "asss4");
	uVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pasc4");
	iVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "bpbid");
	iVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "bpbip");
	iVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "bpbpt");
	uVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "fcuat");
	uVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpclcr");
	iVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpclc");
	uVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "aldel");
	uVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "alsnd");
	uVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "alteam");
	uVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "flvfx");
	uVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "flcl");
	uVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpcl");
	iVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prplod");
	iVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpatn");
	iVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpasn");
	iVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpclr");
	iVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prptsp");
	iVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prptds");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpsba");
	iVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "sndid");
	iVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "sndtri");
	iVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "sndlmt");
	iVar46 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpsnpp");
	iVar47 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpct");
	iVar48 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpcr");
	uVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpbs2");
	iVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prcra");
	uVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpbs");
	uVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prers");
	iVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "ptfxtr");
	iVar54 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "ptfxst");
	iVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prrorc");
	iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "updatez");
	iVar57 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "updtime");
	iVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "upddel");
	iVar59 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pLODDist");
	iVar60 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "fwTPos");
	iVar61 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "fwTSize");
	iVar62 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "fwTeam");
	iVar63 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "TrTAct");
	iVar64 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "TrPPD");
	iVar65 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "prpdypil");
	iVar66 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "TTPH");
	iVar67 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "cusprpMn");
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		StringCopy(&cVar73, "prpsdp", 8);
		StringIntConCat(&cVar73, iVar2, 8);
		uVar68[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, &cVar73);
		iVar2++;
	}
	uVar75 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar3, "pdip");
	if (Global_4456448.f_61781 > 200)
	{
		Global_4456448.f_61781 = 200;
	}
	if (iVar67 != 0)
	{
		iVar2 = 0;
		while (iVar2 <= (DATAFILE::_ARRAY_VALUE_GET_SIZE(iVar67) - 1))
		{
			if (DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar67, iVar2) == 2)
			{
				Global_4456448.f_162203[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar67, iVar2);
				Global_4456448.f_162224++;
			}
			else
			{
				Global_4456448.f_162203[iVar2] = 0;
			}
			iVar2++;
		}
	}
	iVar76 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_61781 - 1))
	{
		Global_4456448.f_61782[iVar0 /*80*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar4, iVar0) };
		Global_4456448.f_61782[iVar0 /*80*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar5, iVar0) };
		Global_4456448.f_61782[iVar0 /*80*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar6, iVar0);
		iVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar7, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_7 = func_198(iVar1);
		if (Global_4456448.f_61782[iVar0 /*80*/].f_7 == joaat("stt_prop_stunt_tube_speed"))
		{
			iVar76++;
			if (iVar76 > 15)
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_7 = joaat("stt_prop_stunt_tube_xxs");
			}
		}
		if (!STREAMING::IS_MODEL_VALID(Global_4456448.f_61782[iVar0 /*80*/].f_7))
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_7 = joaat("prop_const_fence02b");
		}
		if (Global_4456448.f_61782[iVar0 /*80*/].f_7 == 1494272245)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_7 = 1792175224;
		}
		if ((((!func_160() && Global_4456448.f_139770 == 0) && STREAMING::IS_MODEL_VALID(Global_4456448.f_61782[iVar0 /*80*/].f_7)) && !Global_262145.f_18677) && !func_203())
		{
			if (func_202(Global_4456448.f_61782[iVar0 /*80*/].f_7))
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_7 = joaat("prop_const_fence02b");
			}
		}
		Global_4456448.f_61782[iVar0 /*80*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar10, iVar0);
		if (Global_4456448.f_61782[iVar0 /*80*/].f_10 == -1)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_10 = 0;
		}
		if (iVar24 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar24, iVar0) == 1)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_56 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar24, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_56 = 0;
		}
		if (iVar25 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar25, iVar0) == 1)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_57 = 0;
		}
		if (iVar26 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar26, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_58 = 0;
		}
		Global_4456448.f_61782[iVar0 /*80*/].f_59 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_69 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28, iVar0);
		if (iVar29 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar29, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_70 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar29, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_70 = -1;
		}
		if (iVar12 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar12, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar12, iVar0);
			Global_4456448.f_61782[iVar0 /*80*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13, iVar0);
			Global_4456448.f_61782[iVar0 /*80*/].f_45 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar14, iVar0);
			Global_4456448.f_61782[iVar0 /*80*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar16, iVar0);
			Global_4456448.f_61782[iVar0 /*80*/].f_43 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17, iVar0);
			Global_4456448.f_61782[iVar0 /*80*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18, iVar0);
			Global_4456448.f_61782[iVar0 /*80*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20, iVar0);
			Global_4456448.f_61782[iVar0 /*80*/].f_44 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar21, iVar0);
			Global_4456448.f_61782[iVar0 /*80*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_42 = -1;
			Global_4456448.f_61782[iVar0 /*80*/].f_39 = 0;
			Global_4456448.f_61782[iVar0 /*80*/].f_45 = 0;
			Global_4456448.f_61782[iVar0 /*80*/].f_43 = -1;
			Global_4456448.f_61782[iVar0 /*80*/].f_40 = 0;
			Global_4456448.f_61782[iVar0 /*80*/].f_46 = 0;
			Global_4456448.f_61782[iVar0 /*80*/].f_44 = -1;
			Global_4456448.f_61782[iVar0 /*80*/].f_41 = 0;
			Global_4456448.f_61782[iVar0 /*80*/].f_47 = 0;
		}
		if (iVar11 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar11, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar11, iVar0);
			Global_4456448.f_61782[iVar0 /*80*/].f_48 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar15, iVar0);
			Global_4456448.f_61782[iVar0 /*80*/].f_49 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			Global_4456448.f_61782[iVar0 /*80*/].f_50 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_11 = 0;
			Global_4456448.f_61782[iVar0 /*80*/].f_48 = 0;
			Global_4456448.f_61782[iVar0 /*80*/].f_49 = 0;
			Global_4456448.f_61782[iVar0 /*80*/].f_50 = 0;
		}
		Global_4456448.f_61782[iVar0 /*80*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar30, iVar0);
		if (Global_4456448.f_61782[iVar0 /*80*/].f_7 != -1611832715)
		{
			if (Global_4456448.f_61782[iVar0 /*80*/].f_12 > 0 && Global_4456448.f_61782[iVar0 /*80*/].f_12 < 1000)
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_12 = func_201(Global_4456448.f_61782[iVar0 /*80*/].f_12);
			}
		}
		Global_4456448.f_61782[iVar0 /*80*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar33, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar34, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar35, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar40, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar41, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_63 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar45, iVar0);
		if (iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_24 = -1;
		}
		if (iVar37 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar37, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_25 = 0;
		}
		if (iVar38 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar38, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_26 = 0;
		}
		if (iVar39 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar39, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_27 = 1;
		}
		if (iVar40 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar40, iVar0) == 3)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar40, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_34 = 0f;
		}
		if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar0) == 3)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar41, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_35 = 0.4f;
		}
		if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0) > 5)
		{
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0) == 15)
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_36 = 1;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0) == 25)
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_36 = 2;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0) == 35)
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_36 = 3;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0) == 45)
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_36 = 4;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0) == 55)
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_36 = 5;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0) == 16)
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_36 = 3;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0) == 30)
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_36 = 2;
			}
			if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0) == 44)
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_36 = 1;
			}
		}
		else if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_36 = 2;
		}
		if (iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_60 = 0;
		}
		if (iVar44 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar44, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_61 = 0;
		}
		if (iVar45 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar45, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_63 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar45, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_63 = 0;
		}
		if (iVar46 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar46, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_28 = 0;
		}
		if (iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar0) == 3)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar53, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_37 = 0f;
		}
		if (iVar48 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar48, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_18 = -1;
		}
		if (iVar47 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar47, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar47, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_19 = -1;
		}
		if (iVar50 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar50, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar50, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_20 = -1;
		}
		Global_4456448.f_61782[iVar0 /*80*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar51, iVar0);
		Global_4456448.f_61782[iVar0 /*80*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar49, iVar0);
		if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar54, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_38 = 0;
		}
		if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_67 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar55, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_67 = 0;
		}
		Global_4456448.f_61782[iVar0 /*80*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52, iVar0);
		if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar0) == 3)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_52 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar56, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_52 = -1f;
		}
		if (iVar57 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar57, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_53 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar57, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_53 = 0;
		}
		if (iVar58 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar58, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_54 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar58, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_54 = 0;
		}
		if (iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_55 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar59, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_55 = 0;
		}
		if (iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar0) == 5)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_71 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar60, iVar0) };
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_71 = { 0f, 0f, 0f };
		}
		if (iVar61 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar61, iVar0) == 3)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_74 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar61, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_74 = 0f;
		}
		if (iVar62 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar62, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_75 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar62, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_75 = 0;
		}
		if (iVar63 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar63, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_76 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar63, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_76 = -1;
		}
		if (iVar64 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar64, iVar0) == 3)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_77 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar64, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_77 = 0f;
		}
		if (iVar66 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar66, iVar0) == 3)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_78 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar66, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_78 = 0f;
		}
		if (iVar65 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar65, iVar0) == 2)
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_79 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar65, iVar0);
		}
		else
		{
			Global_4456448.f_61782[iVar0 /*80*/].f_79 = -1;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			if (uVar68[iVar2] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar68[iVar2], iVar0) == 2)
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_29[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar68[iVar2], iVar0);
			}
			else
			{
				Global_4456448.f_61782[iVar0 /*80*/].f_29[iVar2] = -1;
			}
			iVar2++;
		}
		Global_4456448.f_61782[iVar0 /*80*/].f_66 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar75, iVar0);
		iVar0++;
	}
}

int func_201(int iParam0)
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

int func_202(int iParam0)
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("prop_sec_gate_01d") || iParam0 == joaat("prop_vault_shutter")) || iParam0 == -877963371) || iParam0 == 145818549) || iParam0 == 160663734) || iParam0 == -350795026) || iParam0 == -1901227524) || iParam0 == 1813008354) || iParam0 == 279288106) || iParam0 == joaat("prop_ind_coalcar_02")) || iParam0 == 439340726) || iParam0 == -1913970053) || iParam0 == -1239742687) || iParam0 == 1753330262) || iParam0 == -1600413027) || iParam0 == joaat("prop_water_ramp_01")) || iParam0 == joaat("prop_water_ramp_02")) || iParam0 == joaat("prop_water_ramp_03")) || iParam0 == joaat("stt_prop_track_bend_l")) || iParam0 == joaat("stt_prop_track_bend2_l")) || iParam0 == joaat("stt_prop_track_bend_bar_l")) || iParam0 == joaat("stt_prop_track_bend2_bar_l")) || iParam0 == joaat("prop_ld_alarm_01")) || iParam0 == 1572208841) || iParam0 == joaat("prop_flare_01")) || iParam0 == 301970060) || iParam0 == 1088428993) || iParam0 == -2002895309) || iParam0 == 769923921) || iParam0 == -1941093436) || iParam0 == 1644490552) || iParam0 == 1228163930) || iParam0 == -82704061) || iParam0 == -893826075) || iParam0 == -1906772306) || iParam0 == 1325339411) || iParam0 == joaat("prop_boombox_01")) || iParam0 == joaat("prop_ghettoblast_02")) || iParam0 == joaat("prop_tapeplayer_01")) || iParam0 == 2057223314) || iParam0 == joaat("prop_shamal_crash")) || iParam0 == 1925170211) || iParam0 == -1611832715) || iParam0 == -1305574636) || iParam0 == -1937495485) || iParam0 == 869398406) || iParam0 == -170277480) || iParam0 == -1267801772) || iParam0 == -1876506235) || iParam0 == joaat("prop_cs_heist_bag_01")) || iParam0 == -1747937636) || iParam0 == 866201454) || iParam0 == 642960345) || iParam0 == -1184665400) || iParam0 == -898971071) || iParam0 == 118340176) || iParam0 == 661161633) || iParam0 == 1908860740) || iParam0 == 2095169631) || iParam0 == -549235179) || iParam0 == -502202673) || iParam0 == 1723871309) || iParam0 == 630616933) || iParam0 == joaat("u_f_y_corpse_01")) || iParam0 == joaat("u_f_y_corpse_02")) || iParam0 == 497099277) || iParam0 == 794936718) || iParam0 == 1116990450) || iParam0 == 1430330160) || iParam0 == 1736425389) || iParam0 == -2104487973) || iParam0 == 93927950) || iParam0 == 446151074) || iParam0 == 970414739) || iParam0 == -1187930949) || iParam0 == -278591439) || iParam0 == -403635899) || iParam0 == 443999472) || iParam0 == -840425311) || iParam0 == -490398359) || iParam0 == 1171791475) || iParam0 == -1592077865) || iParam0 == -1494923144) || iParam0 == -863733544) || iParam0 == -955159266) || iParam0 == -1673979170) || iParam0 == 34120519) || iParam0 == joaat("prop_target_ora_purp_01")) || iParam0 == -1835862541) || iParam0 == -1604087404) || iParam0 == -1251067775) || iParam0 == -2025890780) || iParam0 == 170995043) || iParam0 == -126973474) || iParam0 == 1726113796) || iParam0 == 890176606) || iParam0 == 249707472) || iParam0 == -1737968014) || iParam0 == -986153641) || iParam0 == 1171954070) || iParam0 == 726001049) || iParam0 == -239044249) || iParam0 == -556906753) || iParam0 == -2063295939) || iParam0 == -758434067) || iParam0 == 346059280) || iParam0 == -613679208) || iParam0 == 620582592) || iParam0 == 1464908646) || iParam0 == 85342060) || iParam0 == -215444591) || iParam0 == 483832101) || iParam0 == -176168332) || iParam0 == 930976262) || iParam0 == 1721462849) || iParam0 == 1677872320) || iParam0 == 320088805) || iParam0 == 708828172) || iParam0 == 950795200) || iParam0 == -1260656854) || iParam0 == -1875404158) || iParam0 == -864804458) || iParam0 == -1302470386) || iParam0 == 1518201148) || iParam0 == 384852939) || iParam0 == 145606470) || iParam0 == 117169896) || iParam0 == -1479958115) || iParam0 == -797462923) || iParam0 == -1222840593) || iParam0 == -82066709) || iParam0 == -79943355) || iParam0 == -1601827676) || iParam0 == 1228139077) || iParam0 == -167276853) || iParam0 == -2003082453) || iParam0 == 2086345420) || iParam0 == -180282443) || iParam0 == 1137700900) || iParam0 == -685641702) || iParam0 == -1375953456) || iParam0 == 588352126) || iParam0 == 852060754) || iParam0 == -320283514) || iParam0 == -999358909) || iParam0 == -433831507) || iParam0 == 1781931203) || iParam0 == 1008841074) || iParam0 == joaat("prop_cabinet_01b"))
	{
		return 1;
	}
	return 0;
}

int func_203()
{
	if (Global_4456448.f_139770 == 1 || Global_4456448.f_139770 == 2)
	{
		return 1;
	}
	return 0;
}

void func_204(int iParam0)
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
	var uVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
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
	var uVar54;
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
	var uVar70;
	var uVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	var uVar78[17];
	var uVar96;
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
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	var uVar128;
	var uVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	var uVar135[4];
	var uVar140[4];
	var uVar145[4];
	var uVar150[4];
	var uVar155[4];
	var uVar160[4];
	var uVar165[4];
	var uVar170[4];
	var uVar175[4];
	var uVar180[4];
	var uVar185[4];
	var uVar190[4];
	var uVar195[4];
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
	int iVar210;
	int iVar211;
	int iVar212;
	int iVar213;
	int iVar214;
	int iVar215;
	int iVar216;
	int iVar217;
	int iVar218;
	int iVar219;
	int iVar220;
	int iVar221;
	int iVar222;
	int iVar223;
	int iVar224;
	int iVar225;
	int iVar226;
	int iVar227;
	int iVar228;
	int iVar229;
	int iVar230;
	
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "veh");
	Global_4456448.f_83453 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "no");
	Global_4456448.f_83454 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "time");
	Global_4456448.f_83455 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "pal");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "vhrls");
	if (iVar7 != 0)
	{
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_41 - 1))
		{
			iVar0 = 0;
			while (iVar0 <= (Global_4456448.f_105[iVar3 /*11309*/].f_59 - 1))
			{
				StringCopy(&cVar4, "vhr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_4456448.f_91708[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				StringCopy(&cVar4, "vrs", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				Global_4456448.f_45485[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				StringCopy(&cVar4, "rkt", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_45571[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_45571[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "bst", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_45657[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_45657[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "rpr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_45743[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_45743[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "spk", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_45829[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_45829[iVar0 /*5*/][iVar3] = 0;
				}
				StringCopy(&cVar4, "tmr", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_45915[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_45915[iVar0 /*5*/][iVar3] = 1500;
				}
				StringCopy(&cVar4, "bsd", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_46001[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_46001[iVar0 /*5*/][iVar3] = 1400;
				}
				StringCopy(&cVar4, "bss", 8);
				StringIntConCat(&cVar4, iVar0, 8);
				StringIntConCat(&cVar4, iVar3, 8);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar7, &cVar4) == 2)
				{
					Global_4456448.f_46087[iVar0 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar7, &cVar4);
				}
				else
				{
					Global_4456448.f_46087[iVar0 /*5*/][iVar3] = 35;
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
	iVar41 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "rot");
	iVar42 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "liv");
	iVar49 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmodtur");
	iVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmodarm");
	iVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmodairc");
	iVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmodBomb");
	iVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmodspoil");
	uVar54 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "hlth");
	uVar70 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "drbs");
	uVar71 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs2");
	iVar72 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs3");
	iVar73 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs4");
	iVar74 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs5");
	iVar75 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs6");
	iVar76 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs7");
	iVar77 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vbs8");
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
		uVar23 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spsrc");
		uVar24 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spasr");
		iVar25 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt2");
		uVar26 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team2");
		uVar27 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spwn2");
		uVar28 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spsrc2");
		uVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spasr2");
		uVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt3");
		uVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team3");
		uVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spwn3");
		uVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spsrc3");
		uVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spasr3");
		uVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "objt4");
		uVar36 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "team4");
		uVar37 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spwn4");
		uVar38 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spsrc4");
		uVar39 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "spasr4");
		Global_4456448.f_61780 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "nocr");
		iVar40 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "crgdm");
		iVar43 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "modps");
		iVar44 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ncol");
		iVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "enveff");
		iVar46 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "colc");
		iVar47 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "col2");
		iVar48 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "col3");
		Global_4456448.f_83456 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "burst");
		iVar55 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "enghp");
		iVar56 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "hbir");
		iVar57 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "hbor");
		iVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ptrhp");
		iVar59 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "bdyhp");
		iVar60 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "hmrh");
		iVar61 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "htrh");
		iVar62 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "fdswm");
		iVar63 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ior");
		iVar64 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "iort");
		iVar65 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vddra");
		iVar66 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vddta");
		iVar67 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vddrl");
		iVar68 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vddwda");
		iVar69 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdInter");
		iVar227 = 0;
		while (iVar227 <= 16)
		{
			StringCopy(&cVar4, "vbvrr", 8);
			StringIntConCat(&cVar4, iVar227, 8);
			uVar78[iVar227] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			iVar227++;
		}
		uVar96 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vebs");
		iVar97 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehct");
		iVar100 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vhcra");
		iVar98 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehcr");
		iVar99 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehcv");
		iVar101 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbc");
		iVar102 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbr");
		iVar103 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbso");
		iVar104 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbs");
		iVar105 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehfbr");
		iVar106 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehfbd");
		iVar107 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehtc");
		iVar108 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbrnrl");
		iVar109 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbrntm");
		iVar110 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbrnlf");
		iVar111 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehpotme");
		iVar112 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehdelind");
		iVar113 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbtos");
		iVar114 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehwtci");
		iVar115 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehakwlrt");
		iVar116 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehrlgrpd");
		iVar117 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbcsgc");
		iVar118 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehbcsgl");
		iVar119 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vspdl");
		iVar120 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vsgr");
		iVar121 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vssgr");
		iVar122 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vcnm");
		iVar123 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehap");
		iVar124 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehat");
		iVar125 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vehdu");
		iVar126 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vldt");
		iVar127 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vldr");
		uVar128 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cutsc");
		uVar129 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cutsh");
		iVar133 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "nmpass");
		iVar134 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "nmfail");
		iVar130 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmcp");
		iVar131 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vmcf");
		iVar132 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "gotor");
		iVar201 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vphrang");
		iVar202 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vwpndmg");
		iVar203 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vldv");
		iVar204 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vtmhrn");
		iVar205 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdrpovr");
		iVar206 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdrprad");
		iVar207 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdrpvrad");
		iVar208 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdvrfe");
		iVar209 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdeitc");
		iVar210 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdspn");
		iVar211 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdcbal");
		iVar212 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vdcbdt");
		iVar213 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vrhlor");
		iVar214 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vddfs");
		iVar215 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vrorc");
		iVar216 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cbvest");
		iVar217 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cbves");
		iVar218 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "hvcr");
		iVar219 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cdtor");
		iVar220 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "cvd");
		iVar221 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vifci");
		iVar222 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "viclv");
		iVar223 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vtsr");
		iVar224 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vtspr");
		iVar225 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vwlot");
		iVar226 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "vstwd");
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&cVar4, "vrstp", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar175[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "frsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar180[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "irsth", 8);
			if (iVar1 > 0)
			{
				StringIntConCat(&cVar4, iVar1, 8);
			}
			uVar185[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			iVar1++;
		}
		iVar228 = 0;
		iVar228 = 0;
		while (iVar228 <= 3)
		{
			StringCopy(&cVar4, "vwrvv", 8);
			StringIntConCat(&cVar4, iVar228, 8);
			uVar190[iVar228] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			StringCopy(&cVar4, "fwrvv", 8);
			StringIntConCat(&cVar4, iVar228, 8);
			uVar195[iVar228] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			iVar228++;
		}
		iVar200 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "ubrkdb");
		iVar3 = 0;
		while (iVar3 <= (Global_4456448.f_41 - 1))
		{
			if (iVar3 < 4)
			{
				StringCopy(&cVar4, "rule", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar135[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "pri", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar140[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "tsp", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar145[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "jtop", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar150[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "jtof", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar155[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "vcbf", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar160[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "vcbt", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar165[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
				StringCopy(&cVar4, "vcrr", 8);
				StringIntConCat(&cVar4, iVar3, 8);
				uVar170[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, &cVar4);
			}
			iVar3++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_83453 - 1))
	{
		if (iVar0 < 32)
		{
			Global_4456448.f_83457[iVar0 /*250*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar8, iVar0) };
			Global_4456448.f_83457[iVar0 /*250*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar9, iVar0);
			if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar0) == 5)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_224 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar41, iVar0) };
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_224 = { 0f, 0f, 0f };
			}
			uVar2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17, iVar0);
			Global_4456448.f_83457[iVar0 /*250*/].f_12 = uVar2;
			if (!func_128() && !func_193())
			{
				if (!STREAMING::IS_MODEL_VALID(Global_4456448.f_83457[iVar0 /*250*/].f_12) || func_205(Global_4456448.f_83457[iVar0 /*250*/].f_12))
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_12 = joaat("baller");
				}
			}
			if (Global_4456448.f_83457[iVar0 /*250*/].f_12 == joaat("sanctus") && !Global_262145.f_16873)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_12 = joaat("akuma");
			}
			Global_4456448.f_83457[iVar0 /*250*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18, iVar0);
			Global_4456448.f_83457[iVar0 /*250*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_28 = -1;
			}
			if (iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_174 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_174 = -1;
			}
			if (iVar50 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar50, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_175 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar50, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_175 = -1;
			}
			if (iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_176 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar51, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_176 = -1;
			}
			if (iVar52 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar52, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_178 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar52, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_178 = 0;
			}
			if (iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_179 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar53, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_179 = 0;
			}
			Global_4456448.f_83457[iVar0 /*250*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar54, iVar0);
			if (Global_4456448.f_83457[iVar0 /*250*/].f_32 < 1)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_32 = 100;
			}
			Global_4456448.f_83457[iVar0 /*250*/].f_51 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar70, iVar0);
			Global_4456448.f_83457[iVar0 /*250*/].f_52 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar71, iVar0);
			if (iVar72 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar72, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_53 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar72, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_53 = 0;
			}
			if (iVar73 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar73, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_54 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar73, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_54 = 0;
			}
			if (iVar74 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar74, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_55 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar74, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_55 = 0;
			}
			if (iVar75 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar75, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_56 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar75, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_56 = 0;
			}
			if (iVar76 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar76, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar76, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_57 = 0;
			}
			if (iVar77 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar77, iVar0) == 2)
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar77, iVar0);
			}
			else
			{
				Global_4456448.f_83457[iVar0 /*250*/].f_58 = 0;
			}
			if (func_133())
			{
				if ((((iVar10 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar10, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar11, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar12, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar13, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar10, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar11, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_4 = 100f;
					Global_4456448.f_83457[iVar0 /*250*/].f_5 = 0f;
					Global_4456448.f_83457[iVar0 /*250*/].f_6 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_7 = -1;
				}
				if ((iVar14 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar14, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar15, iVar0) == 3)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_8 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar14, iVar0) };
					Global_4456448.f_83457[iVar0 /*250*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar15, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_8 = { 0f, 0f, 0f };
					Global_4456448.f_83457[iVar0 /*250*/].f_11 = 0f;
				}
				if (iVar16 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar16, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_212 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar16, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_212 = -1;
				}
				Global_4456448.f_83457[iVar0 /*250*/].f_44 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20, iVar0);
				Global_4456448.f_83457[iVar0 /*250*/].f_45 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar21, iVar0);
				Global_4456448.f_83457[iVar0 /*250*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
				Global_4456448.f_83457[iVar0 /*250*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23, iVar0);
				Global_4456448.f_83457[iVar0 /*250*/].f_48 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24, iVar0);
				if (iVar25 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar25, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_88 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar25, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_85 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar26, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_91 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_94 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_95 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar29, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_89 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar30, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_86 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_92 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_96 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar33, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_97 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar34, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_90 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar35, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_87 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar36, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_93 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar37, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_98 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38, iVar0);
					Global_4456448.f_83457[iVar0 /*250*/].f_99 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar39, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_88 = -1;
					Global_4456448.f_83457[iVar0 /*250*/].f_85 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_91 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_94 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_95 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_89 = -1;
					Global_4456448.f_83457[iVar0 /*250*/].f_86 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_92 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_96 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_97 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_90 = -1;
					Global_4456448.f_83457[iVar0 /*250*/].f_87 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_93 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_98 = 0;
					Global_4456448.f_83457[iVar0 /*250*/].f_99 = 0;
				}
				if (iVar44 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar44, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_26 = -1;
				}
				if (iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_29 = -1;
				}
				if (iVar45 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar45, iVar0) == 3)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar45, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_30 = -1f;
				}
				if ((iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar55, iVar0) > 0f)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar55, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_33 = 1001f;
				}
				if ((iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar0) > 0)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_34 = 0;
				}
				if ((iVar57 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar57, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar57, iVar0) > -1)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar57, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_35 = -1;
				}
				if ((iVar40 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar40, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar40, iVar0) >= 0f)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar40, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_40 = 1.5f;
				}
				if (iVar65 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar65, iVar0) == 3)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_183 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar65, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_183 = -1f;
				}
				if (iVar66 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar66, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_184 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar66, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_184 = 0;
				}
				if (iVar67 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar67, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_185 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar67, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_185 = -1;
				}
				if (iVar68 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar68, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_186 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar68, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_186 = 0;
				}
				if (iVar69 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar69, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_211 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar69, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_211 = -1;
				}
				if ((iVar58 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar58, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar58, iVar0) > 0f)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar58, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_36 = 1001f;
				}
				if ((iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar59, iVar0) > 0f)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar59, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_37 = 1001f;
				}
				if ((iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar60, iVar0) > 0f)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar60, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_38 = 1001f;
				}
				if ((iVar61 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar61, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar61, iVar0) > 0f)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar61, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_39 = 1001f;
				}
				if ((iVar62 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar62, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar62, iVar0) != 1f)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_182 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar62, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_182 = 1f;
				}
				if (iVar63 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar63, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_180 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar63, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_180 = -1;
				}
				if (iVar64 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar64, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_181 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar64, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_181 = 0;
				}
				iVar229 = 0;
				while (iVar229 <= 16)
				{
					if (uVar78[iVar229] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar78[iVar229], iVar0) == 2)
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_192[iVar229] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar78[iVar229], iVar0);
					}
					else
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_192[iVar229] = -2;
					}
					iVar229++;
				}
				if (iVar46 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar46, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_27 = -1;
				}
				if (iVar47 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar47, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar47, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_24 = -1;
				}
				if (iVar48 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar48, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_25 = -1;
				}
				Global_4456448.f_83457[iVar0 /*250*/].f_128 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar96, iVar0);
				if (iVar98 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar98, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_74 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar98, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_74 = -1;
				}
				if (iVar97 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar97, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_75 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar97, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_75 = -1;
				}
				if (iVar100 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar100, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_76 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar100, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_76 = -1;
				}
				if (iVar99 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar99, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_77 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar99, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_77 = -1;
				}
				if (iVar119 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar119, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_84 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar119, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_84 = 0;
				}
				if (iVar120 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar120, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_49 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar120, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_49 = 0;
				}
				if (iVar121 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar121, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_50 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar121, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_50 = 0;
				}
				if (iVar122 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar122, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_100 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar122, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_100 = -1;
				}
				if (iVar130 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar130, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_118 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar130, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_118 = -1;
				}
				if (iVar131 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar131, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_119 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar131, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_119 = -1;
				}
				if (iVar123 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar123, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_101 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar123, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_101 = -1;
				}
				if (iVar124 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar124, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_102 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar124, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_102 = 1;
				}
				if (iVar125 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar125, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_115 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar125, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_115 = -1;
				}
				if (iVar126 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar126, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_116 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar126, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_116 = -1;
				}
				if (iVar127 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar127, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_117 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar127, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_117 = -1;
				}
				if (iVar101 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar101, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar101, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_60 = 0;
				}
				if (iVar102 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar102, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar102, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_61 = 0;
				}
				if (iVar103 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar103, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_62 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar103, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_62 = 0;
				}
				if (iVar104 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar104, iVar0) == 3)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_63 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar104, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_63 = 1.2f;
				}
				if (iVar105 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar105, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_190 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar105, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_190 = -1;
				}
				if (iVar106 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar106, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_191 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar106, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_191 = 10;
				}
				if (iVar107 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar107, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_213 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar107, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_213 = 1;
				}
				if (iVar109 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar109, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_215 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar109, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_215 = 0;
				}
				if (iVar108 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar108, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_214 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar108, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_214 = 0;
				}
				if (iVar110 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar110, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_216 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar110, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_216 = 60;
				}
				if (iVar111 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar111, iVar0) == 3)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_217 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar111, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_217 = 4.5f;
				}
				if (iVar112 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar112, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_218 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar112, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_218 = -1;
				}
				if (iVar113 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar113, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_219 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar113, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_219 = -1;
				}
				if (iVar114 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar114, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_220 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar114, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_220 = -1;
				}
				if (iVar115 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar115, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_221 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar115, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_221 = 0;
				}
				if (iVar117 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar117, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_228 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar117, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_228 = -1;
				}
				if (iVar118 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar118, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_229 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar118, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_229 = -1;
				}
				if (iVar116 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar116, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_227 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar116, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_227 = 0;
				}
				if (iVar132 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar132, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_43 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar132, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_43 = 0;
				}
				if (Global_4456448.f_2 != 6 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar128, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_126 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar128, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_126 = -1;
				}
				if (Global_4456448.f_2 != 6 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar129, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_127 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar129, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_127 = -1;
				}
				if (iVar133 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar133, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_113 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar133, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_113 = -1;
				}
				if (iVar134 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar134, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_114 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar134, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_114 = -1;
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar175[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar175[iVar1], iVar0) == 5)
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_130[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar175[iVar1], iVar0) };
					}
					else
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_130[iVar1 /*3*/] = { 0f, 0f, 0f };
					}
					if (uVar180[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar180[iVar1], iVar0) == 3)
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_143[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar180[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_143[iVar1] = 0f;
					}
					if (uVar185[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar185[iVar1], iVar0) == 2)
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_148[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar185[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_148[iVar1] = -1;
					}
					iVar1++;
				}
				iVar230 = 0;
				iVar230 = 0;
				while (iVar230 <= 3)
				{
					if (uVar190[iVar230] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar190[iVar230], iVar0) == 5)
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_232[iVar230 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar190[iVar230], iVar0) };
					}
					else
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_232[iVar230 /*3*/] = { 0f, 0f, 0f };
					}
					if (uVar195[iVar230] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar195[iVar230], iVar0) == 3)
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_245[iVar230] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar195[iVar230], iVar0);
					}
					else
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_245[iVar230] = 0f;
					}
					iVar230++;
				}
				if (iVar200 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar200, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_129 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar200, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_129 = 0;
				}
				if (iVar201 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar201, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_153 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar201, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_153 = -1;
				}
				if (iVar202 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar202, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_164 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar202, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_164 = -1;
				}
				if (iVar203 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar203, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_165 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar203, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_165 = -1;
				}
				if (iVar204 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar204, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_158 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar204, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_158 = -1;
				}
				if (iVar205 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar205, iVar0) == 5)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_159 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar205, iVar0) };
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_159 = { 0f, 0f, 0f };
				}
				if (iVar206 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar206, iVar0) == 3)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_162 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar206, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_162 = 0f;
				}
				if (iVar207 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar207, iVar0) == 3)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_163 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar207, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_163 = 0f;
				}
				if (iVar208 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar208, iVar0) == 3)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_155 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar208, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_155 = -1f;
				}
				if (iVar214 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar214, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_156 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar214, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_156 = 10;
				}
				if (iVar216 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar216, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_172 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar216, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_172 = 2;
				}
				if (iVar217 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar217, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_173 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar217, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_173 = -1;
				}
				if (iVar218 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar218, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_187 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar218, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_187 = -1;
				}
				if (iVar209 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar209, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_154 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar209, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_154 = -1;
				}
				if (iVar210 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar210, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_157 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar210, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_157 = 0;
				}
				if (iVar223 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar223, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_222 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar223, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_222 = -1;
				}
				if (iVar224 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar224, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_223 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar224, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_223 = 0;
				}
				if (iVar211 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar211, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar211, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_41 = 0;
				}
				if (iVar212 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar212, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar212, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_42 = 0;
				}
				if (iVar213 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar213, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_170 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar213, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_170 = 0;
				}
				if (iVar215 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar215, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_171 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar215, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_171 = 0;
				}
				if (iVar219 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar219, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_188 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar219, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_188 = -1;
				}
				if (iVar220 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar220, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_189 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar220, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_189 = 0;
				}
				if (iVar221 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar221, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_210 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar221, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_210 = -1;
				}
				if (iVar222 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar222, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_83 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar222, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_83 = -1;
				}
				if (iVar225 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar225, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_230 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar225, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_230 = 0;
				}
				if (iVar226 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar226, iVar0) == 2)
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_231 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar226, iVar0);
				}
				else
				{
					Global_4456448.f_83457[iVar0 /*250*/].f_231 = 0;
				}
				iVar3 = 0;
				while (iVar3 <= (Global_4456448.f_41 - 1))
				{
					if (iVar3 < 4)
					{
						Global_4456448.f_83457[iVar0 /*250*/].f_13[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar135[iVar3], iVar0);
						Global_4456448.f_83457[iVar0 /*250*/].f_18[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar140[iVar3], iVar0);
						if (Global_4456448.f_83457[iVar0 /*250*/].f_18[iVar3] == -1)
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_18[iVar3] = 99999;
						}
						if (uVar145[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar145[iVar3], iVar0) == 2)
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_120[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar145[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_120[iVar3] = 0;
						}
						if (uVar150[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar150[iVar3], iVar0) == 2)
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_103[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar150[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_103[iVar3] = 0;
						}
						if (uVar155[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar155[iVar3], iVar0) == 2)
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_108[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar155[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_108[iVar3] = 0;
						}
						if (uVar160[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar160[iVar3], iVar0) == 2)
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_64[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar160[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_64[iVar3] = -1;
						}
						if (uVar165[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar165[iVar3], iVar0) == 2)
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_69[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar165[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_69[iVar3] = -1;
						}
						if (uVar170[iVar3] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar170[iVar3], iVar0) == 2)
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_78[iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar170[iVar3], iVar0);
						}
						else
						{
							Global_4456448.f_83457[iVar0 /*250*/].f_78[iVar3] = 0;
						}
					}
					iVar3++;
				}
			}
		}
		iVar0++;
	}
}

int func_205(int iParam0)
{
	if (((!func_203() && (!func_207(iParam0) || func_206(iParam0))) && !func_160()) && !Global_262145.f_18676)
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	if (!func_160())
	{
		if ((((((((((((((((((((((((iParam0 == joaat("trash2") || iParam0 == joaat("emperor2")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("barracks3")) || iParam0 == joaat("slamvan2")) || iParam0 == joaat("boxville3")) || iParam0 == joaat("boxville4")) || iParam0 == joaat("picador")) || iParam0 == joaat("peyote")) || iParam0 == joaat("tornado")) || iParam0 == joaat("tr2")) || iParam0 == joaat("lurcher")) || iParam0 == joaat("btype2")) || iParam0 == joaat("limo2")) || iParam0 == joaat("dune4")) || iParam0 == joaat("ruiner3")) || iParam0 == joaat("cargoplane")) || iParam0 == joaat("trailerlarge")) || iParam0 == joaat("phantom3")) || iParam0 == joaat("hauler2")) || iParam0 == joaat("submersible2")) || iParam0 == joaat("policet")) || iParam0 == -1988428699) || iParam0 == joaat("blimp3")) || iParam0 == joaat("rcbandito"))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (func_208(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_208(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= func_211(iParam1))
	{
		if (iParam0 == func_209(iParam1, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
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
				
				case 48:
					iVar0 = 722226637;
					break;
				
				case 49:
					iVar0 = 1934384720;
					break;
				
				case 50:
					iVar0 = -1804415708;
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
				
				case 41:
					iVar0 = 686471183;
					break;
				
				case 42:
					iVar0 = 1854776567;
					break;
				
				case 43:
					iVar0 = -1620126302;
					break;
				
				case 44:
					iVar0 = -941272559;
					break;
				
				case 45:
					iVar0 = -208911803;
					break;
				
				case 46:
					iVar0 = -447711397;
					break;
				
				case 47:
					iVar0 = joaat("schwarzer");
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
				
				case 31:
					iVar0 = 1862507111;
					break;
				
				case 32:
					iVar0 = 310284501;
					break;
				
				case 33:
					iVar0 = -882629065;
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
				
				case 36:
					iVar0 = 1044193113;
					break;
				
				case 37:
					iVar0 = -682108547;
					break;
				
				case 38:
					iVar0 = -664141241;
					break;
				
				case 39:
					iVar0 = 1323778901;
					break;
				
				case 40:
					iVar0 = -324618589;
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
				
				case 26:
					iVar0 = -1829436850;
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
				
				case 33:
					iVar0 = -362150785;
					break;
				
				case 34:
					iVar0 = -1349095620;
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
				
				case 41:
					iVar0 = 916547552;
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
				
				case 13:
					iVar0 = joaat("sheriff");
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
				
				case 46:
					iVar0 = joaat("seasparrow");
					break;
				
				case 47:
					iVar0 = 1416466158;
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					return func_210(joaat("bruiser"));
				
				case 1:
					return func_210(joaat("brutus"));
				
				case 2:
					return func_210(joaat("cerberus"));
				
				case 3:
					return func_210(joaat("deathbike"));
				
				case 4:
					return func_210(joaat("dominator4"));
				
				case 5:
					return func_210(joaat("impaler2"));
				
				case 6:
					if (Global_1382862)
					{
						return joaat("imperator");
					}
					return func_210(joaat("imperator"));
				
				case 7:
					return func_210(joaat("issi4"));
				
				case 8:
					return func_210(joaat("monster3"));
				
				case 9:
					return func_210(joaat("scarab"));
				
				case 10:
					return func_210(joaat("slamvan4"));
				
				case 11:
					return func_210(joaat("zr380"));
				
				default:
			}
			break;
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

int func_210(int iParam0)
{
	int iVar0;
	
	switch (Global_4456448.f_154963)
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

int func_211(int iParam0)
{
	int iVar0;
	
	if (Global_1688208[iParam0] != -1)
	{
		return Global_1688208[iParam0];
	}
	iVar0 = 0;
	while (iVar0 <= 53)
	{
		if (func_209(iParam0, iVar0) == 0)
		{
			Global_1688208[iParam0] = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_212(int iParam0)
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
	int iVar45;
	int iVar46;
	
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "weap");
	Global_4456448.f_79172 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "no");
	if (Global_4456448 == 0)
	{
		if (Global_4456448.f_79172 > 60)
		{
			Global_4456448.f_79172 = 60;
		}
	}
	else if (Global_4456448.f_79172 > 60)
	{
		Global_4456448.f_79172 = 60;
	}
	Global_4456448.f_79174 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "time");
	Global_4456448.f_79175 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "pal");
	Global_4456448.f_65 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "blip");
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
	Global_4456448.f_83452 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(uVar5, "randtyp");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_79172 - 1))
	{
		if (iVar0 < 60)
		{
			Global_4456448.f_79181[iVar0 /*70*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar6, iVar0) };
			Global_4456448.f_79181[iVar0 /*70*/].f_3.f_2 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar7, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar8, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_3.f_1 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar9, iVar0);
			uVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar10, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_15 = uVar1;
			if (Global_4456448.f_139770 == 0)
			{
				iVar43 = 0;
				while (iVar43 <= 59)
				{
					if (Global_4456448.f_79181[iVar43 /*70*/].f_15 == -48884066)
					{
						Global_4456448.f_79181[iVar43 /*70*/].f_15 = joaat("pickup_weapon_pistol");
					}
					iVar43++;
				}
			}
			if (!func_215(Global_4456448.f_79181[iVar0 /*70*/].f_15))
			{
				if (Global_4456448.f_79181[iVar0 /*70*/].f_15 == 127042729)
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_15 = joaat("pickup_weapon_sniperrifle");
				}
				else
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_15 = joaat("pickup_weapon_pistol");
				}
			}
			Global_4456448.f_79181[iVar0 /*70*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar11, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar19, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_44 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_45 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar40, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar41, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar0);
			Global_4456448.f_79181[iVar0 /*70*/].f_43 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38, iVar0);
			if (iVar14 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar14, iVar0) == 1)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_10[0] = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar14, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_10[0] = 0;
			}
			if (iVar15 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar15, iVar0) == 1)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_10[1] = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar15, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_10[1] = 0;
			}
			if (iVar16 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar16, iVar0) == 1)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_10[2] = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar16, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_10[2] = 0;
			}
			if (iVar17 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar17, iVar0) == 1)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_10[3] = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar17, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_10[3] = 0;
			}
			if (iVar18 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar18, iVar0) == 3)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar18, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_9 = 1f;
			}
			if (iVar19 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar19, iVar0) == 2)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar19, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_23 = -1;
			}
			if (iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar0) == 2)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_41 = 0;
			}
			if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar0) == 2)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_24 = -1;
			}
			if (iVar37 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar37, iVar0) == 2)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_42 = 0;
			}
			if (iVar37 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar37, iVar0) == 2)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_43 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_43 = 0;
			}
			if (iVar39 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar39, iVar0) == 2)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_44 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_44 = 0;
			}
			if (iVar40 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar40, iVar0) == 2)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_45 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar40, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_45 = 0;
			}
			if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar0) == 2)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar41, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_46 = 0;
			}
			if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar0) == 2)
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
			}
			else
			{
				Global_4456448.f_79181[iVar0 /*70*/].f_47 = 0;
			}
			if (func_133())
			{
				if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
				}
				else
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_29 = -1;
				}
				if (iVar34 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar34, iVar0) == 2)
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar0);
				}
				else
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_30 = -1;
				}
				if (iVar33 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar33, iVar0) == 2)
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar33, iVar0);
				}
				else
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_31 = 0;
				}
				Global_4456448.f_79181[iVar0 /*70*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar21, iVar0);
				Global_4456448.f_79181[iVar0 /*70*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
				Global_4456448.f_79181[iVar0 /*70*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23, iVar0);
				if (Global_4456448.f_79181[iVar0 /*70*/].f_28 == -1)
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_28 = 0;
				}
				if (iVar25 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar25, iVar0) == 2)
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24, iVar0);
					Global_4456448.f_79181[iVar0 /*70*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar25, iVar0);
					Global_4456448.f_79181[iVar0 /*70*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar26, iVar0);
					Global_4456448.f_79181[iVar0 /*70*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27, iVar0);
					Global_4456448.f_79181[iVar0 /*70*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28, iVar0);
					Global_4456448.f_79181[iVar0 /*70*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar29, iVar0);
					Global_4456448.f_79181[iVar0 /*70*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar30, iVar0);
					Global_4456448.f_79181[iVar0 /*70*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
					Global_4456448.f_79181[iVar0 /*70*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32, iVar0);
				}
				else
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_35 = -1;
					Global_4456448.f_79181[iVar0 /*70*/].f_32 = 0;
					Global_4456448.f_79181[iVar0 /*70*/].f_38 = 0;
					Global_4456448.f_79181[iVar0 /*70*/].f_36 = -1;
					Global_4456448.f_79181[iVar0 /*70*/].f_33 = 0;
					Global_4456448.f_79181[iVar0 /*70*/].f_39 = 0;
					Global_4456448.f_79181[iVar0 /*70*/].f_37 = -1;
					Global_4456448.f_79181[iVar0 /*70*/].f_34 = 0;
					Global_4456448.f_79181[iVar0 /*70*/].f_40 = 0;
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
					Global_4456448.f_79181[iVar0 /*70*/].f_16[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar2);
				}
				else
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_16[iVar2] = 0;
				}
				iVar2++;
			}
			StringCopy(&cVar3, "wtSOv", 8);
			StringIntConCat(&cVar3, iVar0, 8);
			iVar45 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
			iVar2 = 1;
			while (iVar2 <= 20)
			{
				if (iVar45 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar45, (iVar2 - 1)) == 2)
				{
					iVar46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar45, (iVar2 - 1));
					Global_4456448.f_79181[iVar0 /*70*/].f_48[iVar2] = iVar46;
					if (iVar46 != -1 && Global_4456448.f_79181[iVar0 /*70*/].f_48[iVar2] != 76)
					{
					}
				}
				else
				{
					Global_4456448.f_79181[iVar0 /*70*/].f_48[iVar2] = 76;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_26, 11))
	{
		func_213();
	}
}

void func_213()
{
	int iVar0;
	
	iVar0 = Global_4456448.f_79175;
	Global_4456448.f_79175 = func_214(iVar0);
	GAMEPLAY::SET_BIT(&(Global_4456448.f_26), 11);
}

int func_214(int iParam0)
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

int func_215(int iParam0)
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

void func_216(int iParam0)
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
	Global_4456448.f_161157 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar4, "no");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_161157 - 1))
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
				Global_4456448.f_158676[iVar0 /*248*/][iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar5[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_158676[iVar0 /*248*/][iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar16[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar16[iVar0], iVar1) == 5)
			{
				Global_4456448.f_158676[iVar0 /*248*/].f_91[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_158676[iVar0 /*248*/].f_91[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar27[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar27[iVar0], iVar1) == 2)
			{
				Global_4456448.f_158676[iVar0 /*248*/].f_182[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_158676[iVar0 /*248*/].f_182[iVar1] = 0;
			}
			if (uVar38[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar38[iVar0], iVar1) == 2)
			{
				Global_4456448.f_158676[iVar0 /*248*/].f_213[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_158676[iVar0 /*248*/].f_213[iVar1] = 0;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_217(int iParam0)
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
	int iVar86;
	int iVar87;
	var uVar88;
	var uVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	var uVar97[4];
	var uVar102[4];
	var uVar107[4];
	var uVar112[4];
	var uVar117[4];
	var uVar122[4];
	
	uVar5 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "obj");
	Global_4456448.f_58131 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "no");
	Global_4456448.f_58132 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "pal");
	Global_4456448.f_58133 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar5, "rtm");
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
	if (func_133() || func_196())
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
		iVar63 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obtcsht");
		iVar64 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obtcbht");
		iVar65 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "orbcnno");
		iVar66 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objhpovr");
		iVar67 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objbtte");
		iVar72 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objtvi");
		iVar68 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "tl63vts");
		iVar69 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objLOD");
		iVar70 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "iobjhbir");
		iVar71 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "iobjhbor");
		iVar73 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "oIntAnim");
		iVar74 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "oIntPed");
		iVar75 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objclt");
		iVar76 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objcr");
		iVar77 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obcra");
		iVar78 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ospdl");
		iVar79 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "osgr");
		iVar80 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ossgr");
		iVar81 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objcnm");
		iVar82 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "ororc");
		iVar83 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objap");
		iVar84 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objapt");
		iVar85 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obint");
		iVar86 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "obrom");
		iVar87 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "inco");
		uVar88 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "inhsh");
		uVar89 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vehpu");
		iVar90 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "airpu");
		iVar93 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "gotor");
		iVar94 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "nmpass");
		iVar95 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "nmfail");
		iVar91 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "omcp");
		iVar92 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "omcf");
		iVar96 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "objatto");
		iVar2 = 0;
		while (iVar2 <= (Global_4456448.f_41 - 1))
		{
			if (iVar2 < 4)
			{
				StringCopy(&cVar3, "rule", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar97[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
				StringCopy(&cVar3, "pri", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar102[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
				StringCopy(&cVar3, "jtop", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar107[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
				StringCopy(&cVar3, "jtof", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar112[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
				StringCopy(&cVar3, "bosr", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar117[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
				StringCopy(&cVar3, "boer", 8);
				StringIntConCat(&cVar3, iVar2, 8);
				uVar122[iVar2] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
			}
			iVar2++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_58131 - 1))
	{
		if (iVar0 < 20)
		{
			Global_4456448.f_58134[iVar0 /*151*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar6, iVar0) };
			Global_4456448.f_58134[iVar0 /*151*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar7, iVar0);
			uVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_16 = uVar1;
			if (Global_4456448.f_58134[iVar0 /*151*/].f_16 == -1842407088)
			{
				Global_4456448.f_58134[iVar0 /*151*/].f_16 = -1007354661;
			}
			if (Global_4456448.f_139770 == 0)
			{
				if (Global_4456448.f_58134[iVar0 /*151*/].f_16 == -1861623876)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_16 = 525896218;
				}
			}
			if (!STREAMING::IS_MODEL_VALID(Global_4456448.f_58134[iVar0 /*151*/].f_16))
			{
				Global_4456448.f_58134[iVar0 /*151*/].f_16 = joaat("prop_drug_package");
			}
			if (Global_4456448.f_58134[iVar0 /*151*/].f_16 == 168901740)
			{
				Global_4456448.f_58134[iVar0 /*151*/].f_16 = -1007354661;
			}
			if (Global_4456448.f_58134[iVar0 /*151*/].f_16 == -1340405475)
			{
				Global_4456448.f_58134[iVar0 /*151*/].f_16 = -1842407088;
			}
			if (Global_4456448.f_58134[iVar0 /*151*/].f_16 == -249415613)
			{
				Global_4456448.f_58134[iVar0 /*151*/].f_16 = -739654066;
			}
			Global_4456448.f_58134[iVar0 /*151*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_4 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar21, iVar0) };
			Global_4456448.f_58134[iVar0 /*151*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_51 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_52 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_53 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_54 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar25, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_55 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_56 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar26, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_48 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar29, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_49 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar30, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_108 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar34, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_115 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar33, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_109 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_110 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_111 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_112 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar0);
			Global_4456448.f_58134[iVar0 /*151*/].f_116 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar39, iVar0);
			if (iVar90 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar90, iVar0) == 2)
			{
				if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar90, iVar0) == 1)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_58134[iVar0 /*151*/].f_47, 4))
					{
						GAMEPLAY::SET_BIT(&(Global_4456448.f_58134[iVar0 /*151*/].f_47), 4);
					}
				}
			}
			if (func_133() || func_196())
			{
				if ((((iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar8, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar10, iVar0) == 3) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar11, iVar0) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar12, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar8, iVar0);
					Global_4456448.f_58134[iVar0 /*151*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar10, iVar0);
					Global_4456448.f_58134[iVar0 /*151*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar11, iVar0);
					Global_4456448.f_58134[iVar0 /*151*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_7 = 50f;
					Global_4456448.f_58134[iVar0 /*151*/].f_8 = 0f;
					Global_4456448.f_58134[iVar0 /*151*/].f_9 = 0;
					Global_4456448.f_58134[iVar0 /*151*/].f_10 = -1;
				}
				if (iVar9 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar9, iVar0) == 3)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_125 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar9, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_125 = 0f;
				}
				if (iVar17 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar17, iVar0) == 3)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_128 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar17, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_128 = 0f;
				}
				if (iVar16 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar16, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar16, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_33 = 0;
				}
				if (iVar15 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar15, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar15, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_15 = 0;
				}
				if ((iVar13 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar13, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar14, iVar0) == 3)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_11 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar13, iVar0) };
					Global_4456448.f_58134[iVar0 /*151*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar14, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_11 = { 0f, 0f, 0f };
					Global_4456448.f_58134[iVar0 /*151*/].f_14 = 0f;
				}
				if (iVar58 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar58, iVar0) == 3)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_117 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar58, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_117 = 0f;
				}
				if (iVar57 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar57, iVar0) == 3)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_118 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar57, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_118 = 1f;
				}
				if (iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar0) == 3)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_119 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar59, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_119 = 3f;
				}
				if (iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar0) == 3)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_120 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar60, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_120 = 4f;
				}
				if (iVar61 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar61, iVar0) == 3)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_121 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar61, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_121 = 3f;
				}
				if (iVar62 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar62, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_122 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar62, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_122 = -1;
				}
				if (iVar63 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar63, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_123 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar63, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_123 = -1;
				}
				if (iVar64 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar64, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_124 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar64, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_124 = -1;
				}
				if (iVar65 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar65, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_126 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar65, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_126 = -1;
				}
				if (iVar66 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar66, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_149 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar66, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_149 = -1;
				}
				if (iVar67 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar67, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_150 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar67, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_150 = -1;
				}
				if (iVar68 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar68, iVar0) == 4)
				{
					StringCopy(&(Global_4456448.f_58134[iVar0 /*151*/].f_132), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar68, iVar0), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_58134[iVar0 /*151*/].f_132), "", 64);
				}
				if (iVar72 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar72, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_148 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar72, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_148 = -1;
				}
				if (iVar69 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar69, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_127 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar69, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_127 = -1;
				}
				if (iVar70 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar70, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar70, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_29 = 0;
				}
				if (iVar71 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar71, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar71, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_30 = 0;
				}
				if (iVar73 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar73, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_71 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar73, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_71 = 0;
				}
				if (iVar74 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar74, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_73 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar74, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_73 = -1;
				}
				Global_4456448.f_58134[iVar0 /*151*/].f_50 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31, iVar0);
				if (iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_72 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_72 = -1;
				}
				if (iVar96 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar96, iVar0) == 5)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_129 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar96, iVar0) };
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_129 = { 0f, 0f, 0f };
				}
				Global_4456448.f_58134[iVar0 /*151*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar40, iVar0);
				Global_4456448.f_58134[iVar0 /*151*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar41, iVar0);
				Global_4456448.f_58134[iVar0 /*151*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar42, iVar0);
				if (iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_78 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0);
					Global_4456448.f_58134[iVar0 /*151*/].f_75 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar44, iVar0);
					Global_4456448.f_58134[iVar0 /*151*/].f_81 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar45, iVar0);
					Global_4456448.f_58134[iVar0 /*151*/].f_79 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar46, iVar0);
					Global_4456448.f_58134[iVar0 /*151*/].f_76 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar47, iVar0);
					Global_4456448.f_58134[iVar0 /*151*/].f_82 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar48, iVar0);
					Global_4456448.f_58134[iVar0 /*151*/].f_80 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar49, iVar0);
					Global_4456448.f_58134[iVar0 /*151*/].f_77 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar50, iVar0);
					Global_4456448.f_58134[iVar0 /*151*/].f_83 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar51, iVar0);
				}
				Global_4456448.f_58134[iVar0 /*151*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52, iVar0);
				Global_4456448.f_58134[iVar0 /*151*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar53, iVar0);
				Global_4456448.f_58134[iVar0 /*151*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar89, iVar0);
				if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar54, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_32 = 0;
				}
				if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar0) == 3)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar55, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_34 = 0.8f;
				}
				if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_113 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_113 = 1;
				}
				if (iVar76 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar76, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar76, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_57 = -1;
				}
				if (iVar75 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar75, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar75, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_58 = -1;
				}
				if (iVar77 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar77, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_59 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar77, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_59 = -1;
				}
				if (iVar78 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar78, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_74 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar78, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_74 = -1;
				}
				if (iVar79 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar79, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar79, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_39 = 0;
				}
				if (iVar80 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar80, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar80, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_40 = 0;
				}
				if (iVar81 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar81, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_99 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar81, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_99 = -1;
				}
				if (iVar82 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar82, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_114 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar82, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_114 = 0;
				}
				if (iVar91 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar91, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_96 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar91, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_96 = -1;
				}
				if (iVar92 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar92, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_97 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar92, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_97 = -1;
				}
				if (iVar83 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar83, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_100 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar83, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_100 = -1;
				}
				if (iVar84 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar84, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_101 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar84, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_101 = -1;
				}
				if (iVar85 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar85, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_102 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar85, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_102 = -1;
				}
				if (iVar86 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar86, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_103 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar86, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_103 = -1;
				}
				if ((iVar87 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar87, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar88, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_104 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar87, iVar0) };
					Global_4456448.f_58134[iVar0 /*151*/].f_107 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar88, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_104 = { 0f, 0f, 0f };
					Global_4456448.f_58134[iVar0 /*151*/].f_107 = 0;
				}
				if (iVar93 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar93, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar93, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_60 = 0;
				}
				if (iVar94 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar94, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_94 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar94, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_94 = -1;
				}
				if (iVar95 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar95, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_95 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar95, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_95 = -1;
				}
				if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_109 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_109 = 0;
				}
				if (iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_110 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_110 = 0;
				}
				if (iVar37 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar37, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_111 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_111 = 0;
				}
				if (iVar38 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar38, iVar0) == 2)
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_112 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar0);
				}
				else
				{
					Global_4456448.f_58134[iVar0 /*151*/].f_112 = 0;
				}
				iVar2 = 0;
				while (iVar2 <= (Global_4456448.f_41 - 1))
				{
					if (iVar2 < 4)
					{
						Global_4456448.f_58134[iVar0 /*151*/].f_17[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar97[iVar2], iVar0);
						Global_4456448.f_58134[iVar0 /*151*/].f_22[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar102[iVar2], iVar0);
						if (Global_4456448.f_58134[iVar0 /*151*/].f_22[iVar2] == -1)
						{
							Global_4456448.f_58134[iVar0 /*151*/].f_22[iVar2] = 99999;
						}
						if (uVar107[iVar2] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar107[iVar2], iVar0) == 2)
						{
							Global_4456448.f_58134[iVar0 /*151*/].f_84[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar107[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_58134[iVar0 /*151*/].f_84[iVar2] = 0;
						}
						if (uVar112[iVar2] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar112[iVar2], iVar0) == 2)
						{
							Global_4456448.f_58134[iVar0 /*151*/].f_89[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar112[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_58134[iVar0 /*151*/].f_89[iVar2] = 0;
						}
						if (uVar117[iVar2] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar117[iVar2], iVar0) == 2)
						{
							Global_4456448.f_58134[iVar0 /*151*/].f_61[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar117[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_58134[iVar0 /*151*/].f_61[iVar2] = -1;
						}
						if (uVar122[iVar2] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar122[iVar2], iVar0) == 2)
						{
							Global_4456448.f_58134[iVar0 /*151*/].f_66[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar122[iVar2], iVar0);
						}
						else
						{
							Global_4456448.f_58134[iVar0 /*151*/].f_66[iVar2] = -1;
						}
					}
					iVar2++;
				}
			}
		}
		iVar0++;
	}
}

void func_218(int iParam0)
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
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	
	uVar6 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "zone");
	Global_4456448.f_138782 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar6, "no");
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
	iVar29 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "znscra1");
	iVar30 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "znscra2");
	iVar31 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "znscra3");
	iVar32 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "zneilnk");
	iVar33 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "znetlnk");
	iVar34 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "znebc");
	iVar35 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar6, "zneba");
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
	if (Global_4456448.f_138782 > 25)
	{
		Global_4456448.f_138782 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_138782 - 1))
	{
		Global_4456448.f_138805[iVar0 /*36*/][0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar7, iVar0) };
		Global_4456448.f_138805[iVar0 /*36*/][1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar8, iVar0) };
		Global_4456448.f_138805[iVar0 /*36*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uVar10[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar10[iVar1], iVar0) == 2)
			{
				Global_4456448.f_138805[iVar0 /*36*/].f_11[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar10[iVar1], iVar0);
			}
			else
			{
				Global_4456448.f_138805[iVar0 /*36*/].f_11[iVar1] = -1;
			}
			if (uVar15[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar15[iVar1], iVar0) == 2)
			{
				Global_4456448.f_138805[iVar0 /*36*/].f_16[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar15[iVar1], iVar0);
			}
			else
			{
				Global_4456448.f_138805[iVar0 /*36*/].f_16[iVar1] = 99999;
			}
			iVar1++;
		}
		if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar0) == 2)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_21 = 0;
		}
		if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar0) == 3)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar21, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_23 = 0f;
		}
		if (iVar22 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar22, iVar0) == 3)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar22, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_24 = 0f;
		}
		if (iVar23 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar23, iVar0) == 2)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar23, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_9 = 0;
		}
		if (iVar24 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar24, iVar0) == 3)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar24, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_7 = 0f;
		}
		if (iVar25 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar25, iVar0) == 3)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar25, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_8 = 0f;
		}
		if (iVar26 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar26, iVar0) == 2)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar26, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_22 = 0;
		}
		if (iVar27 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar27, iVar0) == 2)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_25 = 0;
		}
		if (iVar28 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar28, iVar0) == 2)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_26 = 2;
		}
		if (iVar29 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar29, iVar0) == 2)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar29, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_27 = -1;
		}
		if (iVar30 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar30, iVar0) == 2)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar30, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_28 = 0;
		}
		if (iVar31 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar31, iVar0) == 3)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar31, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_29 = 0f;
		}
		if (iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 2)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_30 = 0;
		}
		if (iVar33 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar33, iVar0) == 2)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar33, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_31 = -1;
		}
		if (iVar34 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar34, iVar0) == 2)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_34 = 1;
		}
		if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
		}
		else
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_35 = 120;
		}
		iVar0++;
	}
}

void func_219(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "usj");
	Global_4456448.f_137613 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "no");
	uVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "vto");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "vld");
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "vcm");
	if (Global_4456448.f_137613 > 10)
	{
		Global_4456448.f_137613 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_137613 - 1))
	{
		Global_4456448.f_137614[iVar0 /*9*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar2, iVar0) };
		Global_4456448.f_137614[iVar0 /*9*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar3, iVar0) };
		Global_4456448.f_137614[iVar0 /*9*/].f_6 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar4, iVar0) };
		iVar0++;
	}
}

void func_220(int iParam0)
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
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	
	if (DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ddtrig") == 0)
	{
		return;
	}
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ddtrig");
	Global_4456448.f_144642 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar4, "no");
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
	iVar50 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "vhmd");
	iVar51 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "pedtg");
	iVar52 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "peddm");
	iVar53 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "dtChar");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar2, "trl", 8);
		StringIntConCat(&cVar2, iVar0, 8);
		uVar44[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, &cVar2);
		iVar0++;
	}
	if (Global_4456448.f_144642 > 75)
	{
		Global_4456448.f_144642 = 75;
	}
	if (iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar8, 0) == 2)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_144642 - 1))
		{
			if (iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar8, iVar0) == 2)
			{
				func_221(&(Global_4456448.f_139773[iVar0 /*61*/]), iVar0);
				if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar0);
				}
				if (iVar5 != 0)
				{
					Global_4456448.f_139773[iVar0 /*61*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar5, iVar0);
				}
				if (iVar7 != 0)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
				}
				if (iVar8 != 0)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar8, iVar0);
				}
				if (iVar9 != 0)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_6 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar9, iVar0) };
				}
				if (iVar10 != 0)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar10, iVar0);
				}
				if (iVar11 != 0)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar11, iVar0);
				}
				if (iVar12 != 0)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar12, iVar0);
				}
				if (iVar13 != 0)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_41 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar13, iVar0);
				}
				if (iVar22 != 0)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar22, iVar0);
				}
				if (iVar23 != 0)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar23, iVar0);
				}
				if (iVar24 != 0)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar24, iVar0);
				}
				if (iVar25 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar25, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar25, iVar0);
				}
				else
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_12 = 0;
				}
				if (iVar26 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar26, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar26, iVar0);
				}
				else
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_4 = 0;
				}
				if (iVar50 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar50, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar50, iVar0);
				}
				else
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_58 = 0;
				}
				if (iVar39 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar39, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar0);
				}
				if (iVar14 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar14, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar14, iVar0);
				}
				if (iVar15 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar15, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar15, iVar0);
				}
				if (iVar16 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar16, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar16, iVar0);
				}
				if (iVar17 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar17, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar17, iVar0);
				}
				if (iVar18 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar18, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar18, iVar0);
				}
				if (iVar19 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar19, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar19, iVar0);
				}
				if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar0);
				}
				if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar21, iVar0);
				}
				if (iVar27 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar27, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar0);
				}
				if (iVar28 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar28, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar0);
				}
				if (iVar29 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar29, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar29, iVar0);
				}
				if (iVar30 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar30, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar30, iVar0);
				}
				if (iVar32 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar32, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar0);
				}
				if (iVar31 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar31, iVar0) == 2)
				{
					iVar54 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar31, iVar0);
					if ((iVar54 >= 0 && iVar54 < 32) && Global_4456448.f_139773[iVar0 /*61*/].f_38 == 0)
					{
						GAMEPLAY::SET_BIT(&(Global_4456448.f_139773[iVar0 /*61*/].f_38), iVar54);
					}
				}
				if (iVar33 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar33, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_39 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar33, iVar0);
				}
				if (iVar34 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar34, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_40 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar0);
				}
				if (iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar0);
				}
				if (iVar40 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar40, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar40, iVar0);
				}
				if (iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar0);
				}
				if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar41, iVar0);
				}
				if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar0);
				}
				if (iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_43 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar51, iVar0);
				}
				if (iVar52 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar52, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_44 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar52, iVar0);
				}
				iVar1 = 0;
				while (iVar1 <= 3)
				{
					if (uVar44[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar44[iVar1], iVar0) == 2)
					{
						Global_4456448.f_139773[iVar0 /*61*/].f_25[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar44[iVar1], iVar0);
					}
					iVar1++;
				}
				if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_42 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar0);
				}
				if (iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar0);
				}
				else
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_57 = 0;
				}
				if (iVar37 != 0)
				{
					StringCopy(&(Global_4456448.f_139773[iVar0 /*61*/].f_45), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar37, iVar0), 24);
				}
				if (iVar38 != 0)
				{
					StringCopy(&(Global_4456448.f_139773[iVar0 /*61*/].f_51), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar38, iVar0), 24);
				}
				if (iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar0) == 2)
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar53, iVar0);
				}
				else
				{
					Global_4456448.f_139773[iVar0 /*61*/].f_60 = -1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_144642 - 1))
		{
			Global_4456448.f_139773[iVar0 /*61*/] = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_2 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_3 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_6 = { 0f, 0f, 0f };
			Global_4456448.f_139773[iVar0 /*61*/].f_9 = 3f;
			Global_4456448.f_139773[iVar0 /*61*/].f_5 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_13 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_23 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_30 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_31 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_32 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_33 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_34 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_35 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_14 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_10 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_11 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_12 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_4 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_15 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_16 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_17 = 0;
			StringCopy(&(Global_4456448.f_139773[iVar0 /*61*/].f_45), "", 24);
			StringCopy(&(Global_4456448.f_139773[iVar0 /*61*/].f_51), "", 24);
			Global_4456448.f_139773[iVar0 /*61*/].f_18 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_19 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_21 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_22 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_20 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_57 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_36 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_37 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_38 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_39 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_40 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_42 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_58 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_43 = -1;
			Global_4456448.f_139773[iVar0 /*61*/].f_44 = 0;
			Global_4456448.f_139773[iVar0 /*61*/].f_60 = -1;
			iVar0++;
		}
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "dtmp") == 2)
	{
		Global_4456448.f_144638[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "dtmp");
	}
	else
	{
		Global_4456448.f_144638[0] = 0;
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "dtmp2") == 2)
	{
		Global_4456448.f_144638[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "dtmp2");
	}
	else
	{
		Global_4456448.f_144638[1] = 0;
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "dtmp3") == 2)
	{
		Global_4456448.f_144638[2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, "dtmp3");
	}
	else
	{
		Global_4456448.f_144638[2] = 0;
	}
}

void func_221(var uParam0, int iParam1)
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
	StringCopy(&(uParam0->f_45), "", 24);
	StringCopy(&(uParam0->f_51), "", 24);
	uParam0->f_58 = 0;
	uParam0->f_43 = -1;
	uParam0->f_44 = 0;
	uParam0->f_60 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uParam0->f_25[iVar0] = -1;
		iVar0++;
	}
	uParam0->f_57 = 0;
	if (iParam1 != -1)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_144638[(iParam1 / 32)]), (iParam1 % 32));
	}
	if (UI::DOES_BLIP_EXIST(uParam0->f_59))
	{
		UI::REMOVE_BLIP(&(uParam0->f_59));
	}
}

bool func_222()
{
	return Global_4456448 == 1;
}

void func_223(int iParam0)
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
	Global_4456448.f_55682 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "chp");
	iVar3 = (Global_4456448.f_55682 - 1);
	Global_4456448.f_55684 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "lap");
	Global_4456448.f_55685 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "type");
	Global_4456448.f_55686 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "gtar");
	Global_4456448.f_58042 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "head");
	Global_4456448.f_58043 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "lrgs");
	Global_4456448.f_58044 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "udgs");
	Global_4456448.f_58045 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "gw");
	Global_4456448.f_58046 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "gl");
	Global_4456448.f_58047 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "lanes");
	Global_4456448.f_47099 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(uVar2, "grid") };
	Global_4456448.f_55688 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "icv");
	Global_4456448.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "subtype");
	Global_4456448.f_55690 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "tri1");
	Global_4456448.f_55691 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "tri2");
	Global_4456448.f_55692 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "clbs");
	Global_4456448.f_58041 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "ptp");
	Global_4456448.f_58039 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "strtg");
	Global_4456448.f_58040 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "rcdam");
	Global_4456448.f_52676 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(uVar2, "rdis");
	Global_4456448.f_58036 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "gridty");
	Global_4456448.f_161244 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(uVar2, "iprem");
	Global_4456448.f_161342 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "bsted");
	Global_4456448.f_162336 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "retl");
	if (DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "cemx") != 0)
	{
		Global_4456448.f_162337 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "cemx");
	}
	else
	{
		Global_4456448.f_162337 = 12;
	}
	if (DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "cemn") != 0)
	{
		Global_4456448.f_162338 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "cemn");
	}
	else
	{
		Global_4456448.f_162338 = 3;
	}
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		StringCopy(&cVar4, "btfs", 16);
		StringIntConCat(&cVar4, iVar0, 16);
		Global_4456448.f_162339[iVar0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, &cVar4);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&cVar8, "icpht", 16);
		StringIntConCat(&cVar8, iVar0, 16);
		StringCopy(&(Global_4456448.f_52655[iVar0 /*6*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(uVar2, &cVar8), 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&cVar12, "trbpf", 16);
		StringIntConCat(&cVar12, iVar0, 16);
		Global_4456448.f_162162[iVar0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, &cVar12);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		StringCopy(&cVar16, "trbpc", 16);
		StringIntConCat(&cVar16, iVar0, 16);
		Global_4456448.f_162158[iVar0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, &cVar16);
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
			Global_4456448.f_162173[iVar0 /*4*/][iVar20] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, &cVar21);
			iVar20++;
		}
		iVar0++;
	}
	if (Global_4456448.f_139770 == 0)
	{
		func_226();
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
	if (Global_4456448.f_55685 == 8)
	{
		Global_4456448.f_55682 = 0;
		iVar0 = 0;
		while (iVar0 <= 101)
		{
			if (!func_127(DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar31, iVar0)))
			{
				Global_4456448.f_55682++;
			}
			iVar0++;
		}
		iVar3 = Global_4456448.f_55682;
	}
	Global_4456448.f_52241 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "sgdo");
	iVar57 = 0;
	iVar0 = 0;
	while (iVar0 <= iVar3)
	{
		if (iVar0 < 102)
		{
			if (Global_4456448.f_55685 == 8)
			{
				iVar57 = func_225(uVar31, iVar57);
			}
			else
			{
				iVar57 = iVar0;
			}
			Global_4456448.f_48124[iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar31, iVar57) };
			Global_4456448.f_48431[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar25, iVar57);
			if (iVar26 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar26, iVar57) == 3)
			{
				Global_4456448.f_51829[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar26, iVar57);
			}
			else
			{
				Global_4456448.f_51829[iVar0] = 1f;
			}
			if (iVar28 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar28, iVar57) == 3)
			{
				Global_4456448.f_48740[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar28, iVar57);
			}
			else
			{
				Global_4456448.f_48740[iVar0] = 1f;
			}
			if (iVar27 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar27, iVar57) == 3)
			{
				Global_4456448.f_51932[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar27, iVar57);
			}
			else
			{
				Global_4456448.f_51932[iVar0] = 1f;
			}
			if (iVar29 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar29, iVar57) == 3)
			{
				Global_4456448.f_52035[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar29, iVar57);
			}
			else
			{
				Global_4456448.f_52035[iVar0] = 0f;
			}
			if (iVar30 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar30, iVar57) == 3)
			{
				Global_4456448.f_52138[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar30, iVar57);
			}
			else
			{
				Global_4456448.f_52138[iVar0] = 0f;
			}
			if (iVar45 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar45, iVar57) == 2)
			{
				Global_4456448.f_52242[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar45, iVar57);
			}
			else
			{
				Global_4456448.f_52242[iVar0] = -1;
			}
			if (iVar46 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar46, iVar57) == 2)
			{
				Global_4456448.f_52345[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar57);
			}
			else
			{
				Global_4456448.f_52345[iVar0] = -1;
			}
			if (iVar47 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar47, iVar57) == 2)
			{
				Global_4456448.f_52448[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar47, iVar57);
			}
			else
			{
				Global_4456448.f_52448[iVar0] = -1;
			}
			if (iVar48 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar48, iVar57) == 2)
			{
				Global_4456448.f_52551[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar57);
			}
			else
			{
				Global_4456448.f_52551[iVar0] = -1;
			}
			if (Global_4456448.f_51829[iVar0] < 0.3f)
			{
				Global_4456448.f_51829[iVar0] = 0.3f;
			}
			if (Global_4456448.f_51932[iVar0] < 0.1f)
			{
				Global_4456448.f_51932[iVar0] = Global_4456448.f_51829[iVar0];
			}
			if (Global_4456448.f_51932[iVar0] < 0.3f)
			{
				Global_4456448.f_51932[iVar0] = 0.3f;
			}
			Global_4456448.f_49864[iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar32, iVar57) };
			Global_4456448.f_50171[iVar0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar33, iVar57);
			Global_4456448.f_50274[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar34, iVar57);
			Global_4456448.f_50377[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar35, iVar57);
			Global_4456448.f_50480[iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar36, iVar57) };
			Global_4456448.f_50787[iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar37, iVar57) };
			Global_4456448.f_51094[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38, iVar57);
			Global_4456448.f_51197[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar39, iVar57);
			Global_4456448.f_48534[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar40, iVar57);
			Global_4456448.f_48637[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar41, iVar57);
			if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar57) == 2)
			{
				Global_4456448.f_51403[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar57);
			}
			else
			{
				Global_4456448.f_51403[iVar0] = -1;
			}
			if ((iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar57) == 2) && !func_127(Global_4456448.f_49864[iVar0 /*3*/]))
			{
				Global_4456448.f_51506[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar57);
			}
			else
			{
				Global_4456448.f_51506[iVar0] = -1;
			}
			if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_48534[iVar0], 0))
			{
				if (iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar57) == 1)
				{
					func_224(&(Global_4456448.f_48534[iVar0]), 5, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar49, iVar57));
				}
				if (iVar50 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar50, iVar57) == 1)
				{
					func_224(&(Global_4456448.f_48534[iVar0]), 3, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar50, iVar57));
				}
				if (iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar57) == 1)
				{
					func_224(&(Global_4456448.f_48534[iVar0]), 6, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar51, iVar57));
				}
				if (iVar52 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar52, iVar57) == 1)
				{
					func_224(&(Global_4456448.f_48534[iVar0]), 1, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar52, iVar57));
				}
				if (iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar57) == 1)
				{
					func_224(&(Global_4456448.f_48534[iVar0]), 2, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar53, iVar57));
				}
				if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar57) == 1)
				{
					func_224(&(Global_4456448.f_48534[iVar0]), 7, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar54, iVar57));
				}
				if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar57) == 1)
				{
					func_224(&(Global_4456448.f_48534[iVar0]), 8, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar55, iVar57));
				}
				if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar57) == 1)
				{
					func_224(&(Global_4456448.f_48534[iVar0]), 9, DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(iVar56, iVar57));
				}
				GAMEPLAY::SET_BIT(&(Global_4456448.f_48534[iVar0]), 0);
			}
			iVar57++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_4456448.f_51609[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar44, iVar0);
		iVar0++;
	}
	if (Global_4456448.f_51609[3] != 0)
	{
		if (Global_4456448.f_51609[1] == 0)
		{
			Global_4456448.f_51609[1] = joaat("speeder");
		}
		if (Global_4456448.f_51609[2] == 0)
		{
			Global_4456448.f_51609[2] = joaat("luxor2");
		}
	}
	uVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar2, "vta");
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_36 - 1))
	{
		if (iVar0 < 32)
		{
			uVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar58, iVar0);
			Global_4456448.f_58050[iVar0] = uVar1;
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
		Global_4456448.f_55693[iVar0] = uVar1;
		Global_4456448.f_55712[iVar0 /*4*/][0] = 0;
		Global_4456448.f_55712[iVar0 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar60[0], iVar0);
		Global_4456448.f_55712[iVar0 /*4*/][1] = 0;
		Global_4456448.f_55712[iVar0 /*4*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar60[1], iVar0);
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
			Global_4456448.f_47103[iVar72 /*10*/][iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar64[iVar0], iVar72) };
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
				Global_4456448.f_48843[iVar72 /*10*/][iVar0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar68[iVar0], iVar72) };
			}
			else
			{
				Global_4456448.f_48843[iVar72 /*10*/][iVar0 /*3*/] = { 0f, 0f, 0f };
			}
			iVar72++;
		}
		iVar0++;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_55692, 15))
	{
		if (Global_4456448.f_55690 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_22), 24);
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_22), 26);
			GAMEPLAY::SET_BIT(&(Global_4456448.f_22), 25);
			Global_4456448.f_58049 = 1;
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_55712[15 /*4*/][0]), 0);
			GAMEPLAY::SET_BIT(&(Global_4456448.f_55712[15 /*4*/][0]), 1);
			Global_4456448.f_55690 = 0;
		}
		else if (Global_4456448.f_55690 == 2)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_22), 25);
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_22), 26);
			GAMEPLAY::SET_BIT(&(Global_4456448.f_22), 24);
			Global_4456448.f_58049 = 2;
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_55712[15 /*4*/][0]), 0);
			GAMEPLAY::SET_BIT(&(Global_4456448.f_55712[15 /*4*/][0]), 2);
			Global_4456448.f_55690 = 0;
		}
	}
}

void func_224(var uParam0, int iParam1, bool bParam2)
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

int func_225(var uParam0, int iParam1)
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

void func_226()
{
	Global_4456448.f_162162[0] = 50;
	Global_4456448.f_162162[1] = 30;
	Global_4456448.f_162162[2] = 20;
	Global_4456448.f_162158[0] = 3;
	Global_4456448.f_162158[1] = 2;
	Global_4456448.f_162158[2] = 1;
	Global_4456448.f_162173[0 /*4*/][0] = 7;
	Global_4456448.f_162173[0 /*4*/][1] = 8;
	Global_4456448.f_162173[0 /*4*/][2] = 9;
	Global_4456448.f_162173[1 /*4*/][0] = 5;
	Global_4456448.f_162173[1 /*4*/][1] = 6;
	Global_4456448.f_162173[1 /*4*/][2] = 7;
	Global_4456448.f_162173[2 /*4*/][0] = 3;
	Global_4456448.f_162173[2 /*4*/][1] = 4;
	Global_4456448.f_162173[2 /*4*/][2] = 5;
	Global_4456448.f_162173[3 /*4*/][0] = 1;
	Global_4456448.f_162173[3 /*4*/][1] = 2;
	Global_4456448.f_162173[3 /*4*/][2] = 3;
}

void func_227(int iParam0)
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
		Global_4456448.f_161344 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar1, "otz");
	}
	else
	{
		Global_4456448.f_161344 = 0;
	}
	if (Global_4456448.f_161344 > 30)
	{
		Global_4456448.f_161344 = 30;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_161344 - 1))
	{
		Global_4456448.f_161345[iVar0 /*11*/][0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar2, iVar0) };
		Global_4456448.f_161345[iVar0 /*11*/][1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar3, iVar0) };
		if (iVar4 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar4, iVar0) == 2)
		{
			Global_4456448.f_161345[iVar0 /*11*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_161345[iVar0 /*11*/].f_7 = 0;
		}
		if (iVar5 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar5, iVar0) == 2)
		{
			Global_4456448.f_161345[iVar0 /*11*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar5, iVar0);
		}
		else
		{
			Global_4456448.f_161345[iVar0 /*11*/].f_8 = 0;
		}
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 3)
		{
			Global_4456448.f_161345[iVar0 /*11*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar6, iVar0);
		}
		else if (DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 2)
		{
			Global_4456448.f_161345[iVar0 /*11*/].f_10 = SYSTEM::TO_FLOAT(DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar0));
		}
		else
		{
			Global_4456448.f_161345[iVar0 /*11*/].f_10 = 0f;
		}
		if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_161345[iVar0 /*11*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_161345[iVar0 /*11*/].f_9 = 0;
		}
		iVar0++;
	}
}

void func_228(int iParam0)
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
	Global_4456448.f_155683 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "no");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "pos");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "mn");
	iVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "bits");
	if (Global_4456448.f_155683 > 25)
	{
		Global_4456448.f_155683 = 25;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_155683 - 1))
	{
		if (iVar2 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar2, iVar0) == 5)
		{
			Global_4456448.f_155557[iVar0 /*5*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar2, iVar0) };
			Global_4456448.f_155557[iVar0 /*5*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar3, iVar0);
		}
		if (iVar4 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar4, iVar0) == 2)
		{
			Global_4456448.f_155557[iVar0 /*5*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar4, iVar0);
		}
		else
		{
			Global_4456448.f_155557[iVar0 /*5*/].f_4 = 0;
			GAMEPLAY::SET_BIT(&(Global_4456448.f_155557[iVar0 /*5*/].f_4), 0);
		}
		iVar0++;
	}
}

void func_229(int iParam0)
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
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	
	if (DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ddblip") == 0)
	{
		return;
	}
	uVar1 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(iParam0, "ddblip");
	Global_4456448.f_155556 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "no");
	iVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "pos");
	uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "rule");
	uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "team");
	iVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "type");
	iVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "size");
	iVar7 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "veh");
	uVar8 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "clr");
	uVar9 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "spri");
	uVar10 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "bits");
	uVar11 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "entt");
	uVar12 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "enti");
	iVar13 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "dbnm");
	if (Global_4456448.f_155556 > 10)
	{
		Global_4456448.f_155556 = 10;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_4456448.f_155556 - 1))
	{
		if (iVar2 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar2, iVar0) == 5)
		{
			Global_4456448.f_155365[iVar0 /*19*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar2, iVar0) };
			Global_4456448.f_155365[iVar0 /*19*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar3, iVar0);
			Global_4456448.f_155365[iVar0 /*19*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar4, iVar0);
			Global_4456448.f_155365[iVar0 /*19*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8, iVar0);
			Global_4456448.f_155365[iVar0 /*19*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
			Global_4456448.f_155365[iVar0 /*19*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar10, iVar0);
			Global_4456448.f_155365[iVar0 /*19*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar11, iVar0);
			Global_4456448.f_155365[iVar0 /*19*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12, iVar0);
		}
		if (iVar5 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar5, iVar0) == 2)
		{
			Global_4456448.f_155365[iVar0 /*19*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar5, iVar0);
		}
		else
		{
			Global_4456448.f_155365[iVar0 /*19*/].f_6 = 0;
		}
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 2)
		{
			Global_4456448.f_155365[iVar0 /*19*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar0);
		}
		else
		{
			Global_4456448.f_155365[iVar0 /*19*/].f_5 = 4;
		}
		if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_155365[iVar0 /*19*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_155365[iVar0 /*19*/].f_7 = -1;
		}
		if (iVar13 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar13, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_155365[iVar0 /*19*/].f_13), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar13, iVar0), 24);
		}
		else
		{
			StringCopy(&(Global_4456448.f_155365[iVar0 /*19*/].f_13), "", 24);
		}
		iVar0++;
	}
}

void func_230(int iParam0)
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
	int iVar14;
	int iVar15;
	var uVar16[5];
	var uVar22[5];
	var uVar28[5];
	var uVar34[5];
	var uVar40[5];
	var uVar46[5];
	var uVar52[5];
	var uVar58[5];
	var uVar64[5];
	var uVar70[5];
	int iVar76;
	
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
	iVar14 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vhspz");
	iVar15 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vrbsm");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_152111[iVar0 /*472*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar6, iVar0), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_152111[iVar0 /*472*/]), "", 64);
		}
		if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_16 = 0;
		}
		if (iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar8, iVar0) == 2)
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_17 = 0;
		}
		if (iVar9 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar9, iVar0) == 2)
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_61 = 0;
		}
		if (iVar10 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar10, iVar0) == 2)
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_62 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar10, iVar0);
		}
		else
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_62 = 0;
		}
		if (iVar11 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar11, iVar0) == 5)
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_54 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar11, iVar0) };
		}
		else
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_54 = { 0f, 0f, 0f };
		}
		if (iVar12 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar12, iVar0) == 3)
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_60 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar12, iVar0);
		}
		else
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_60 = 0f;
		}
		if (iVar13 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar13, iVar0) == 5)
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_57 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar13, iVar0) };
		}
		else
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_57 = { 0f, 0f, 0f };
		}
		if (iVar14 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar14, iVar0) == 3)
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_63 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar14, iVar0);
		}
		else
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_63 = 6f;
		}
		if (iVar15 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar15, iVar0) == 2)
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_64 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar15, iVar0);
		}
		else
		{
			Global_4456448.f_152111[iVar0 /*472*/].f_64 = 0;
		}
		StringCopy(&cVar3, "pstr", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar16[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "pend", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar22[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "strh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar28[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "endh", 8);
		if (iVar0 > 0)
		{
			StringIntConCat(&cVar3, iVar0, 8);
		}
		uVar34[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "mcei", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar40[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "mcet", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar46[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "mceh", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar52[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "plrEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar58[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "pedEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar64[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		if (uVar58[iVar0] != 0 || uVar64[iVar0] != 0)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				func_235(&(Global_4456448.f_152111[iVar0 /*472*/].f_449[iVar2 /*4*/]), &(uVar58[iVar0]), iVar2);
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 <= 0)
			{
				func_233(&(Global_4456448.f_152111[iVar0 /*472*/].f_466[iVar2 /*5*/]), &(uVar64[iVar0]), iVar2);
				iVar2++;
			}
		}
		else
		{
			func_232(&(Global_4456448.f_152111[iVar0 /*472*/]), &uVar5, iVar0);
		}
		StringCopy(&cVar3, "plrInf", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar70[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			iVar76 = DATAFILE::_ARRAY_VALUE_GET_OBJECT(uVar70[iVar0], iVar2);
			func_231(iVar76, &(Global_4456448.f_152111[iVar0 /*472*/].f_65[iVar2 /*13*/]));
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uVar16[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar16[iVar0], iVar1) == 5)
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_18[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar16[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_18[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar22[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar22[iVar0], iVar1) == 5)
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_31[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar22[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_31[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar28[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar28[iVar0], iVar1) == 3)
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_44[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar28[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_44[iVar1] = 0f;
			}
			if (uVar34[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar34[iVar0], iVar1) == 3)
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_49[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar34[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_49[iVar1] = 0f;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (uVar40[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar40[iVar0], iVar1) == 2)
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_118[iVar1 /*11*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar40[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_118[iVar1 /*11*/].f_1 = -1;
			}
			if (uVar46[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar46[iVar0], iVar1) == 2)
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_118[iVar1 /*11*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar46[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_152111[iVar0 /*472*/].f_118[iVar1 /*11*/] = -1;
			}
			if (uVar52[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar52[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_152111[iVar0 /*472*/].f_118[iVar1 /*11*/].f_3), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar52[iVar0], iVar1), 32);
			}
			else
			{
				StringCopy(&(Global_4456448.f_152111[iVar0 /*472*/].f_118[iVar1 /*11*/].f_3), "", 32);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_231(int iParam0, var uParam1)
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

void func_232(var uParam0, var uParam1, int iParam2)
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
		uParam0->f_449[iVar5 /*4*/] = iVar0;
		if (iVar4 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar4, iVar5) == 2)
		{
			uParam0->f_449[iVar5 /*4*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar4, iVar5);
		}
		else
		{
			uParam0->f_449[iVar5 /*4*/].f_2 = 0;
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
			uParam0->f_466[iVar5 /*5*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar5);
		}
		else
		{
			uParam0->f_466[iVar5 /*5*/] = 0;
		}
		uParam0->f_466[iVar5 /*5*/].f_1 = iVar0;
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar5) == 2)
		{
			uParam0->f_466[iVar5 /*5*/].f_1.f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar5);
		}
		else
		{
			uParam0->f_466[iVar5 /*5*/].f_1.f_2 = 0;
		}
		iVar5++;
	}
}

void func_233(var uParam0, var uParam1, int iParam2)
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
	func_234(&(uParam0->f_1), &iVar0);
}

void func_234(var uParam0, int iParam1)
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

void func_235(var uParam0, var uParam1, int iParam2)
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
	func_234(uParam0, &iVar0);
}

void func_236(int iParam0)
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
	int iVar210;
	var uVar211[5];
	var uVar217[5];
	
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
	iVar210 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, "vhspd");
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 4)
		{
			StringCopy(&(Global_4456448.f_144820[iVar0 /*1458*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar6, iVar0), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_144820[iVar0 /*1458*/]), "", 16);
		}
		if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_4 = 0;
		}
		if (iVar8 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_5 = 0;
		}
		if (iVar9 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar9, iVar0) == 2)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_90 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_90 = 0;
		}
		if (iVar10 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar10, iVar0) == 2)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_89 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar10, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_89 = 0;
		}
		if (iVar11 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar11, iVar0) == 2)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_91 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar11, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_91 = 0;
		}
		if (iVar12 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar12, iVar0) == 2)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_782 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar12, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_782 = 0;
		}
		if (iVar203 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar203, iVar0) == 5)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_775 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar203, iVar0) };
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_775 = { 0f, 0f, 0f };
		}
		if (iVar204 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar204, iVar0) == 3)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_778 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar204, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_778 = 0f;
		}
		if (iVar205 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar205, iVar0) == 5)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_779 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar205, iVar0) };
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_779 = { 0f, 0f, 0f };
		}
		if (iVar199 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar199, iVar0) == 2)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_483 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar199, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_483 = 0;
		}
		if (iVar200 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar200, iVar0) == 2)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_485 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar200, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_485 = 0;
		}
		if (iVar201 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar201, iVar0) == 2)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_484 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar201, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_484 = 0;
		}
		if (iVar202 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar202, iVar0) == 5)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_486 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar202, iVar0) };
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_486 = { 0f, 0f, 0f };
		}
		if (iVar206 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar206, iVar0) == 2)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_1454 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar206, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_1454 = -1;
		}
		if (iVar207 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar207, iVar0) == 3)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_1455 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar207, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_1455 = 1f;
		}
		if (iVar208 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar208, iVar0) == 3)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_1456 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar208, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_1456 = 0f;
		}
		if (iVar209 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar209, iVar0) == 3)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_1457 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar209, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_1457 = 0f;
		}
		if (iVar210 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar210, iVar0) == 3)
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_783 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar210, iVar0);
		}
		else
		{
			Global_4456448.f_144820[iVar0 /*1458*/].f_783 = 6f;
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
		uVar211[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		StringCopy(&cVar3, "plrEW", 8);
		StringIntConCat(&cVar3, iVar0, 8);
		uVar217[iVar0] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar5, &cVar3);
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (uVar109[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar109[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_6[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar109[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_6[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar115[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar115[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_19[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar115[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_19[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar103[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar103[iVar0], iVar1) == 3)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_32[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar103[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_32[iVar1] = 0f;
			}
			if (uVar121[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar121[iVar0], iVar1) == 3)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_37[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar121[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_37[iVar1] = 0f;
			}
			if (uVar127[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar127[iVar0], iVar1) == 2)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_42[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar127[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_42[iVar1] = -1;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (uVar13[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar13[iVar0], iVar1) == 2)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_92[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_92[iVar1] = 0;
			}
			if (uVar19[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar19[iVar0], iVar1) == 3)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_47[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar19[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_47[iVar1] = 0f;
			}
			if (uVar25[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar25[iVar0], iVar1) == 3)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_68[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar25[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_68[iVar1] = 0f;
			}
			if (uVar31[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar31[iVar0], iVar1) == 2)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_113[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar31[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_113[iVar1] = 0;
			}
			if (uVar37[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar37[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_134[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar37[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_134[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar43[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar43[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_195[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar43[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_195[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar49[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar49[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_256[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar49[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_256[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar55[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar55[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_317[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar55[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_317[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar61[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar61[iVar0], iVar1) == 3)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_378[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar61[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_378[iVar1] = 0f;
			}
			if (uVar67[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar67[iVar0], iVar1) == 3)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_399[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar67[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_399[iVar1] = 0f;
			}
			if (uVar85[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar85[iVar0], iVar1) == 2)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_420[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar85[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_420[iVar1] = 0;
			}
			if (uVar91[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar91[iVar0], iVar1) == 2)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_441[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar91[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_441[iVar1] = 0;
			}
			if (uVar97[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar97[iVar0], iVar1) == 3)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_462[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar97[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_462[iVar1] = 0f;
			}
			if (uVar133[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar133[iVar0], iVar1) == 2)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_571[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar133[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_571[iVar1] = 0;
			}
			if (uVar139[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar139[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_592[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar139[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_592[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar145[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar145[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_653[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar145[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_653[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar151[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar151[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_714[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar151[iVar0], iVar1) };
				Global_4456448.f_155729[iVar1] = Global_4456448.f_144820[iVar0 /*1458*/].f_714[iVar1 /*3*/];
				Global_4456448.f_155750[iVar1] = Global_4456448.f_144820[iVar0 /*1458*/].f_714[iVar1 /*3*/].f_1;
				Global_4456448.f_155771[iVar1] = Global_4456448.f_144820[iVar0 /*1458*/].f_714[iVar1 /*3*/].f_2;
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_714[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar157[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar157[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_489[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar157[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_489[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar163[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar163[iVar0], iVar1) == 3)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_550[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar163[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_550[iVar1] = 0f;
			}
			if (uVar181[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar181[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_1311[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar181[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_1311[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar187[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar187[iVar0], iVar1) == 5)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_1372[iVar1 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar187[iVar0], iVar1) };
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_1372[iVar1 /*3*/] = { 0f, 0f, 0f };
			}
			if (uVar193[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar193[iVar0], iVar1) == 3)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_1433[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar193[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_1433[iVar1] = 0f;
			}
			if (uVar169[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar169[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_144820[iVar0 /*1458*/].f_1149[iVar1 /*4*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar169[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_4456448.f_144820[iVar0 /*1458*/].f_1149[iVar1 /*4*/]), "", 16);
			}
			if (uVar175[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar175[iVar0], iVar1) == 4)
			{
				StringCopy(&(Global_4456448.f_144820[iVar0 /*1458*/].f_1230[iVar1 /*4*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar175[iVar0], iVar1), 16);
			}
			else
			{
				StringCopy(&(Global_4456448.f_144820[iVar0 /*1458*/].f_1230[iVar1 /*4*/]), "", 16);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 29)
		{
			if (uVar73[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar73[iVar0], iVar1) == 2)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_784[iVar1 /*11*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar73[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_784[iVar1 /*11*/].f_1 = -1;
			}
			if (uVar79[iVar0] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar79[iVar0], iVar1) == 2)
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_784[iVar1 /*11*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar79[iVar0], iVar1);
			}
			else
			{
				Global_4456448.f_144820[iVar0 /*1458*/].f_784[iVar1 /*11*/] = -1;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			func_235(&(Global_4456448.f_144820[iVar0 /*1458*/].f_1115[iVar2 /*4*/]), &(uVar211[iVar0]), iVar2);
			func_235(&(Global_4456448.f_144820[iVar0 /*1458*/].f_1132[iVar2 /*4*/]), &(uVar217[iVar0]), iVar2);
			iVar2++;
		}
		iVar0++;
	}
}

void func_237(var uParam0)
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
			Global_4456448.f_133587[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar8, iVar0);
		}
		else
		{
			Global_4456448.f_133587[iVar0] = -1;
		}
		if (iVar9 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar9, iVar0) == 2)
		{
			Global_4456448.f_133556[iVar0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar9, iVar0);
		}
		else
		{
			Global_4456448.f_133556[iVar0] = -1;
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
					Global_4456448.f_133618[iVar0 /*66*/][iVar1 /*5*/][iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar10, &cVar4);
				}
				else
				{
					Global_4456448.f_133618[iVar0 /*66*/][iVar1 /*5*/][iVar2] = -1;
				}
				StringCopy(&cVar4, "eop", 16);
				StringIntConCat(&cVar4, iVar0, 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringIntConCat(&cVar4, iVar2, 16);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar11, &cVar4) == 2)
				{
					Global_4456448.f_135599[iVar0 /*66*/][iVar1 /*5*/][iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar11, &cVar4);
				}
				else
				{
					Global_4456448.f_133618[iVar0 /*66*/][iVar1 /*5*/][iVar2] = -1;
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
		iVar12 = Global_4456448.f_133587[iVar0];
		iVar13 = Global_4456448.f_133556[iVar0];
		if (iVar12 != -1 && iVar13 != -1)
		{
			iVar3 = 0;
			while (iVar3 <= 29)
			{
				if ((iVar3 != iVar0 && Global_4456448.f_133587[iVar3] == iVar12) && Global_4456448.f_133556[iVar3] == iVar13)
				{
					Global_4456448.f_133556[iVar3] = -1;
					Global_4456448.f_133587[iVar3] = -1;
					iVar1 = 0;
					while (iVar1 <= 12)
					{
						iVar2 = 0;
						while (iVar2 <= 3)
						{
							Global_4456448.f_133618[iVar3 /*66*/][iVar1 /*5*/][iVar2] = -1;
							Global_4456448.f_135599[iVar3 /*66*/][iVar1 /*5*/][iVar2] = -1;
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

void func_238(int iParam0)
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
	while (iVar1 <= (Global_4456448.f_41 - 1))
	{
		if (iVar1 < 4)
		{
			Global_4456448.f_55671[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar5, iVar1);
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
			while (iVar0 <= (Global_4456448.f_55671[iVar1] - 1))
			{
				if (iVar0 < 17)
				{
					Global_4456448.f_55177[iVar0 /*29*/][iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8[iVar1], iVar0);
					Global_4456448.f_55177[iVar0 /*29*/].f_5[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13[iVar1], iVar0);
					if (Global_4456448.f_55177[iVar0 /*29*/].f_5[iVar1] == -1)
					{
						Global_4456448.f_55177[iVar0 /*29*/].f_5[iVar1] = 99999;
					}
					Global_4456448.f_55177[iVar0 /*29*/].f_10[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18[iVar1], iVar0);
					if (uVar23[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar23[iVar1], iVar0) == 2)
					{
						Global_4456448.f_55177[iVar0 /*29*/].f_15[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_55177[iVar0 /*29*/].f_15[iVar1] = 0;
					}
					if (uVar28[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar28[iVar1], iVar0) == 2)
					{
						Global_4456448.f_55177[iVar0 /*29*/].f_20[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28[iVar1], iVar0);
					}
					else
					{
						Global_4456448.f_55177[iVar0 /*29*/].f_20[iVar1] = 0;
					}
					if (iVar6 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar6, iVar0) == 2)
					{
						Global_4456448.f_55177[iVar0 /*29*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar0);
					}
					else
					{
						Global_4456448.f_55177[iVar0 /*29*/].f_28 = -1;
					}
					if (iVar7 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar7, iVar0) == 2)
					{
						Global_4456448.f_55177[iVar0 /*29*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar0);
					}
					else
					{
						Global_4456448.f_55177[iVar0 /*29*/].f_27 = -1;
					}
				}
				iVar0++;
			}
		}
		iVar1++;
	}
}

void func_239(int iParam0)
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
	Global_4456448.f_55677[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar4, "no");
	Global_4456448.f_6 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar4, "atrig");
	iVar80 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "lmcp");
	iVar81 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar4, "lmcf");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_41 - 1))
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
			while (iVar0 <= (Global_4456448.f_55677[0] - 1))
			{
				Global_4456448.f_52677[iVar0 /*119*/].f_1[0 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar5[iVar1], iVar0) };
				Global_4456448.f_52677[iVar0 /*119*/].f_14[0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar10[iVar1], iVar0);
				Global_4456448.f_52677[iVar0 /*119*/].f_64[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar15[iVar1], iVar0);
				Global_4456448.f_52677[iVar0 /*119*/].f_69[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar20[iVar1], iVar0);
				if (Global_4456448.f_52677[iVar0 /*119*/].f_69[iVar1] == -1)
				{
					Global_4456448.f_52677[iVar0 /*119*/].f_69[iVar1] = 99999;
				}
				Global_4456448.f_52677[iVar0 /*119*/].f_74[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar25[iVar1], iVar0);
				Global_4456448.f_52677[iVar0 /*119*/].f_48[iVar1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar60[iVar1], iVar0);
				Global_4456448.f_52677[iVar0 /*119*/].f_79[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar30[iVar1], iVar0);
				Global_4456448.f_52677[iVar0 /*119*/].f_36[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar35[iVar1], iVar0);
				Global_4456448.f_52677[iVar0 /*119*/].f_53 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar50[iVar1], iVar0);
				Global_4456448.f_52677[iVar0 /*119*/].f_31[0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar40[iVar1], iVar0);
				Global_4456448.f_52677[iVar0 /*119*/].f_41[0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar45[iVar1], iVar0);
				Global_4456448.f_52677[iVar0 /*119*/].f_100 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar55[iVar1], iVar0);
				if (iVar80 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar80, iVar0) == 2)
				{
					Global_4456448.f_52677[iVar0 /*119*/].f_96 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar80, iVar0);
				}
				else
				{
					Global_4456448.f_52677[iVar0 /*119*/].f_96 = -1;
				}
				if (iVar81 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar81, iVar0) == 2)
				{
					Global_4456448.f_52677[iVar0 /*119*/].f_97 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar81, iVar0);
				}
				else
				{
					Global_4456448.f_52677[iVar0 /*119*/].f_97 = -1;
				}
				if (uVar65[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar65[iVar1], iVar0) == 2)
				{
					Global_4456448.f_52677[iVar0 /*119*/].f_59[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar65[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_52677[iVar0 /*119*/].f_59[iVar1] = 0;
				}
				if (uVar70[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar70[iVar1], iVar0) == 2)
				{
					Global_4456448.f_52677[iVar0 /*119*/].f_84[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar70[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_52677[iVar0 /*119*/].f_84[iVar1] = 0;
				}
				if (uVar75[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar75[iVar1], iVar0) == 2)
				{
					Global_4456448.f_52677[iVar0 /*119*/].f_89[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar75[iVar1], iVar0);
				}
				else
				{
					Global_4456448.f_52677[iVar0 /*119*/].f_89[iVar1] = 0;
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
	while (iVar0 <= (Global_4456448.f_55677[0] - 1))
	{
		if (iVar82 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar82, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_46 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar82, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_46 = 0;
		}
		if (iVar83 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar83, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar83, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_20 = 0f;
		}
		if (iVar84 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar84, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar84, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_19 = 1f;
		}
		if (iVar85 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar85, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar85, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_28 = 0f;
		}
		if (iVar86 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar86, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar86, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_29 = 0f;
		}
		if (iVar87 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar87, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar87, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_30 = 0f;
		}
		if (iVar99 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar99, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar99, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_57 = 0f;
		}
		if (iVar100 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar100, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar100, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_58 = 0f;
		}
		if (iVar88 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar88, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar88, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/] = 0;
		}
		if (iVar92 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar92, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_94 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar92, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_94 = -1;
		}
		if (iVar93 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar93, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_95 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar93, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_95 = -1;
		}
		if (iVar94 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar94, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_99 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar94, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_99 = 10.5f;
		}
		if (iVar111 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar111, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_101 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar111, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_101 = 1f;
		}
		if (iVar112 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar112, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_102 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar112, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_102 = 0f;
		}
		if (iVar113 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar113, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_103 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar113, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_103 = -1;
		}
		if (iVar114 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar114, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_104 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar114, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_104 = 0f;
		}
		if (iVar95 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar95, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_98 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar95, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_98 = 0;
		}
		if (iVar96 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar96, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_54 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar96, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_54 = 0;
		}
		if (iVar97 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar97, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_55 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar97, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_55 = 0;
		}
		if (iVar98 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar98, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_56 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar98, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_56 = -1;
		}
		if (iVar109 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar109, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_106 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar109, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_106 = 0;
		}
		if (iVar110 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar110, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_47 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar110, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_47 = 0;
		}
		if (iVar101 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar101, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_107 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar101, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_107 = 0f;
		}
		if (iVar102 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar102, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_108 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar102, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_108 = 0f;
		}
		if (iVar103 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar103, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_109 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar103, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_109 = 0f;
		}
		if (iVar104 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar104, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_110 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar104, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_110 = -1;
		}
		if (iVar105 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar105, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_112 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar105, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_112 = -1;
		}
		if (iVar106 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar106, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_113 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar106, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_113 = -1;
		}
		if (iVar107 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar107, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_114 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar107, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_114 = -1;
		}
		if (iVar108 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar108, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_115 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar108, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_115 = 0;
		}
		if (iVar116 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar116, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_116 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar116, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_116 = 0;
		}
		if (iVar117 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar117, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_117 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar117, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_117 = 0;
		}
		if (iVar118 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar118, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_118 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar118, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_118 = 0;
		}
		if (iVar115 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar115, iVar0) == 2)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_105 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar115, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_105 = 0;
		}
		if (((iVar89 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar89, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar90, iVar0) == 5) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar91, iVar0) == 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_21 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar89, iVar0) };
			Global_4456448.f_52677[iVar0 /*119*/].f_24 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar90, iVar0) };
			Global_4456448.f_52677[iVar0 /*119*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar91, iVar0);
		}
		else
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_21 = { 0f, 0f, 0f };
			Global_4456448.f_52677[iVar0 /*119*/].f_24 = { 0f, 0f, 0f };
			Global_4456448.f_52677[iVar0 /*119*/].f_27 = 1f;
		}
		iVar0++;
	}
}

void func_240(int iParam0)
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
		Global_4456448.f_61638 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar1, "no");
		uVar2 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "loc");
		uVar3 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "dir");
		uVar4 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "use");
		uVar5 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "high");
		uVar6 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar1, "arc");
		iVar0 = 0;
		while (iVar0 <= (Global_4456448.f_61638 - 1))
		{
			Global_4456448.f_61639[iVar0 /*7*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar2, iVar0) };
			Global_4456448.f_61639[iVar0 /*7*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar3, iVar0);
			Global_4456448.f_61639[iVar0 /*7*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar4, iVar0);
			Global_4456448.f_61639[iVar0 /*7*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar5, iVar0);
			Global_4456448.f_61639[iVar0 /*7*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar6, iVar0);
			iVar0++;
		}
	}
}

void func_241(var uParam0)
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
	Global_4456448.f_61306 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar2, "no");
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
	while (iVar0 <= (Global_4456448.f_61306 - 1))
	{
		if (iVar0 < 15)
		{
			Global_4456448.f_61307[iVar0 /*22*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar3, iVar0) };
			Global_4456448.f_61307[iVar0 /*22*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar4, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(uVar6, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(uVar7, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar9, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_15 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar10, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(uVar11, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar13, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar12, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar15, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_13 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar14, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(uVar16, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19, iVar0);
			uVar1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar5, iVar0);
			Global_4456448.f_61307[iVar0 /*22*/].f_6 = uVar1;
			if (iVar17 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar17, iVar0) == 2)
			{
				Global_4456448.f_61307[iVar0 /*22*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar17, iVar0);
			}
			else
			{
				Global_4456448.f_61307[iVar0 /*22*/].f_9 = 0;
			}
			Global_4456448.f_61307[iVar0 /*22*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_BOOLEAN(uVar18, iVar0);
			if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar0) == 3)
			{
				Global_4456448.f_61307[iVar0 /*22*/].f_4 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar20, iVar0);
			}
			else
			{
				Global_4456448.f_61307[iVar0 /*22*/].f_4 = 999999f;
			}
			if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar0) == 3)
			{
				Global_4456448.f_61307[iVar0 /*22*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar21, iVar0);
			}
			else
			{
				Global_4456448.f_61307[iVar0 /*22*/].f_5 = 999999f;
			}
			if (iVar22 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar22, iVar0) == 3)
			{
				Global_4456448.f_61307[iVar0 /*22*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar22, iVar0);
			}
			else
			{
				Global_4456448.f_61307[iVar0 /*22*/].f_21 = 0f;
			}
		}
		iVar0++;
	}
}

void func_242(var uParam0)
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
	while (iVar1 <= (Global_4456448.f_41 - 1))
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
			while (iVar2 <= (Global_4456448.f_105[iVar1 /*11309*/].f_59 - 1))
			{
				if (!func_243(&uVar7, 2, iVar1, iVar2) && !func_243(&uVar12, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar7[iVar1], iVar2);
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/] = 0;
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_1 = -1;
				}
				if (!func_243(&uVar17, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_2 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar17[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_2 = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar22, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_5 = 0;
				}
				if (!func_243(&uVar27, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_6 = 0;
				}
				if (!func_243(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_7 = 25;
				}
				if (!func_243(&uVar37, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar37[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_8 = 25;
				}
				if (!func_243(&uVar42, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_9 = 45;
				}
				if (!func_243(&uVar47, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar47[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_10 = 0;
				}
				if (!func_243(&uVar52, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_11 = 3500;
				}
				if (!func_243(&uVar57, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_12 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10654[iVar2 /*13*/].f_12 = 0;
				}
				if (!func_243(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10456[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10456[iVar2] = 0;
				}
				if (!func_243(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10474[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10474[iVar2] = 0;
				}
				if (!func_243(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10492[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10492[iVar2] = 0;
				}
				if (!func_243(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10510[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10510[iVar2] = 0;
				}
				if (!func_243(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10528[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10528[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

int func_243(var uParam0, int iParam1, int iParam2, int iParam3)
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

void func_244(var uParam0)
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
	while (iVar1 <= (Global_4456448.f_41 - 1))
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
			while (iVar2 <= (Global_4456448.f_105[iVar1 /*11309*/].f_59 - 1))
			{
				if (!func_243(&uVar7, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5406[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar7[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5406[iVar2] = 0;
				}
				if (!func_243(&uVar12, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5424[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5424[iVar2] = 0;
				}
				if (!func_243(&uVar17, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5442[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5442[iVar2] = 0;
				}
				if (!func_243(&uVar22, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5460[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5460[iVar2] = 0;
				}
				if (!func_243(&uVar27, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5478[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5478[iVar2] = 0;
				}
				if (!func_243(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5496[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5496[iVar2] = 0;
				}
				if (!func_243(&uVar37, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5514[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar37[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5514[iVar2] = 0;
				}
				if (!func_243(&uVar42, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5532[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5532[iVar2] = 0;
				}
				if (!func_243(&uVar47, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5550[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar47[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5550[iVar2] = 0;
				}
				if (!func_243(&uVar52, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5568[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5568[iVar2] = 0;
				}
				if (!func_243(&uVar57, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5586[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5586[iVar2] = 0;
				}
				if (!func_243(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5604[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5604[iVar2] = 0;
				}
				if (!func_243(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5622[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5622[iVar2] = 0;
				}
				if (!func_243(&uVar72, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_11036[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar72[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_11036[iVar2 /*16*/]), "", 64);
				}
				if (!func_243(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/] = 1000;
				}
				if (!func_243(&uVar82, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_1 = 1.15f;
				}
				if (!func_243(&uVar107, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_6 = 10f;
				}
				if (!func_243(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_2 = 25;
				}
				if (!func_243(&uVar92, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_7 = 0;
				}
				if (!func_243(&uVar97, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_3 = 1;
				}
				if (!func_243(&uVar112, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_8 = 100;
				}
				if (!func_243(&uVar102, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_5 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3187[iVar2 /*9*/].f_5 = 25;
				}
				iVar203 = 0;
				iVar203 = 0;
				while (iVar203 <= 19)
				{
					if (Var117[iVar1 /*21*/][iVar203] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(Var117[iVar1 /*21*/][iVar203], iVar2) == 2)
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_3719[iVar2 /*21*/][iVar203] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(Var117[iVar1 /*21*/][iVar203], iVar2);
					}
					else
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_3719[iVar2 /*21*/][iVar203] = 0;
					}
					iVar203++;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_245(var uParam0)
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
	while (iVar1 <= (Global_4456448.f_41 - 1))
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
			while (iVar2 <= (Global_4456448.f_105[iVar1 /*11309*/].f_59 - 1))
			{
				if (!func_243(&uVar7, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3117[iVar2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar7[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3117[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar12, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3169[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3169[iVar2] = 0f;
				}
				if (!func_243(&uVar17, 2, iVar1, iVar2) && !func_246())
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10039[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10039[iVar2] = -1;
				}
				if (!func_243(&uVar22, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10057[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10057[iVar2] = 0;
				}
				if (!func_243(&uVar27, 2, iVar1, iVar2) && Global_4456448.f_2 != 6)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10075[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10075[iVar2] = -1;
				}
				if (!func_243(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10093[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10093[iVar2] = 0;
				}
				if (!func_243(&uVar37, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10129[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar37[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10129[iVar2] = -1;
				}
				if (!func_243(&uVar42, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10291[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10291[iVar2] = 0;
				}
				if (!func_243(&uVar47, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10309[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar47[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10309[iVar2] = 0;
				}
				if (!func_243(&uVar52, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10327[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10327[iVar2] = 0;
				}
				if (!func_243(&uVar57, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10345[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10345[iVar2] = -1;
				}
				if (!func_243(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10111[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10111[iVar2] = -1;
				}
				if (!func_243(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10147[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10147[iVar2] = 0;
				}
				if (!func_243(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10201[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10201[iVar2] = -1;
				}
				if (!func_243(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10219[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10219[iVar2] = -1;
				}
				if (!func_243(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4249[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4249[iVar2] = 0;
				}
				if (!func_243(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4285[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4285[iVar2] = -1;
				}
				if (!func_243(&uVar92, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4267[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4267[iVar2] = -1;
				}
				if (!func_243(&uVar97, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4303[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4303[iVar2] = 10;
				}
				if (!func_243(&uVar102, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4321[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4321[iVar2] = 10;
				}
				if (!func_243(&uVar122, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10600[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar122[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10600[iVar2] = 10;
				}
				if (!func_243(&uVar127, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10618[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar127[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10618[iVar2] = 10;
				}
				if (!func_243(&uVar132, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_6430[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar132[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_6430[iVar2] = -1;
				}
				if (!func_243(&uVar107, 2, iVar1, iVar2))
				{
					iVar307 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar107[iVar1], iVar2);
					if (iVar307 > 0)
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_10165[iVar2] = iVar307;
					}
					else
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_10165[iVar2] = 0;
					}
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10165[iVar2] = 0;
				}
				if (!func_243(&uVar112, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10183[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10183[iVar2] = 0;
				}
				if (!func_243(&uVar117, 2, iVar1, iVar2))
				{
					if (DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar117[iVar1], iVar2) > 1)
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_4397[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar117[iVar1], iVar2);
					}
					else
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_4397[iVar2] = 1;
					}
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4397[iVar2] = 1;
				}
				if (!func_243(&uVar137, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4087[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar137[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4087[iVar2] = -1;
				}
				if (!func_243(&uVar142, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4105[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar142[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4105[iVar2] = -1;
				}
				if (!func_243(&uVar147, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4177[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar147[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4177[iVar2] = -1;
				}
				if (!func_243(&uVar152, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4123[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar152[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4123[iVar2] = -1;
				}
				if (!func_243(&uVar157, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4141[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar157[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4141[iVar2] = -1;
				}
				if (!func_243(&uVar162, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4159[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar162[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4159[iVar2] = -1;
				}
				if (!func_243(&uVar167, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4195[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar167[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4195[iVar2] = 4;
				}
				if (!func_243(&uVar172, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4213[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar172[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4213[iVar2] = 0;
				}
				if (!func_243(&uVar177, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4231[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar177[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4231[iVar2] = 0;
				}
				if (!func_243(&uVar182, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3546[iVar2 /*3*/] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar182[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3546[iVar2 /*3*/] = 0f;
				}
				if (!func_243(&uVar187, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3546[iVar2 /*3*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar187[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3546[iVar2 /*3*/].f_1 = 1;
				}
				if (!func_243(&uVar192, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3546[iVar2 /*3*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar192[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3546[iVar2 /*3*/].f_2 = 50;
				}
				if (!func_243(&uVar197, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar197[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/] = 0f;
				}
				if (!func_243(&uVar202, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_1[0] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar202[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_1[0] = 0f;
				}
				if (!func_243(&uVar207, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_1[1] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar207[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_1[1] = 0f;
				}
				if (!func_243(&uVar212, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_1[2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar212[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_1[2] = 0f;
				}
				if (!func_243(&uVar217, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_1[3] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar217[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_1[3] = 0f;
				}
				if (!func_243(&uVar222, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_6 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar222[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_6 = 0f;
				}
				if (!func_243(&uVar227, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_7 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar227[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_7 = 0f;
				}
				if (!func_243(&uVar232, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_8 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar232[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_8 = 0f;
				}
				if (!func_243(&uVar247, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_11 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar247[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_11 = 0;
				}
				if (!func_243(&uVar237, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar237[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_9 = 0f;
				}
				if (!func_243(&uVar242, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar242[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3341[iVar2 /*12*/].f_10 = 0f;
				}
				if (!func_243(&uVar252, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3598[iVar2 /*4*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar252[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3598[iVar2 /*4*/] = -1;
				}
				if (!func_243(&uVar257, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3598[iVar2 /*4*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar257[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3598[iVar2 /*4*/].f_1 = -1;
				}
				if (!func_243(&uVar262, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3598[iVar2 /*4*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar262[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3598[iVar2 /*4*/].f_2 = 0;
				}
				if (!func_243(&uVar267, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3598[iVar2 /*4*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar267[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3598[iVar2 /*4*/].f_3 = 0;
				}
				if (!func_243(&uVar272, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3667[iVar2 /*3*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar272[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3667[iVar2 /*3*/] = 0;
				}
				if (!func_243(&uVar282, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3667[iVar2 /*3*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar282[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3667[iVar2 /*3*/].f_2 = 0;
				}
				if (!func_243(&uVar277, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3667[iVar2 /*3*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar277[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_3667[iVar2 /*3*/].f_1 = 0;
				}
				if (!func_243(&uVar287, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10948[iVar2 /*4*/].f_1 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar287[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10948[iVar2 /*4*/].f_1 = 0;
				}
				if (!func_243(&uVar292, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10948[iVar2 /*4*/] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar292[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10948[iVar2 /*4*/] = 0;
				}
				if (!func_243(&uVar297, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10948[iVar2 /*4*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar297[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10948[iVar2 /*4*/].f_3 = 0f;
				}
				if (!func_243(&uVar302, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10948[iVar2 /*4*/].f_2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar302[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10948[iVar2 /*4*/].f_2 = 0;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

bool func_246()
{
	return (Global_4456448 == 0 && Global_4456448.f_2 == 6);
}

void func_247(var uParam0)
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
	var uVar173[4];
	struct<5> Var178;
	struct<33> Var199;
	var uVar332[4];
	var uVar337[4];
	var uVar342[4];
	var uVar347[4];
	var uVar352[4];
	var uVar357[4];
	var uVar362[4];
	var uVar367[4];
	var uVar372[4];
	var uVar377[4];
	var uVar382[4];
	var uVar387[4];
	var uVar392[4];
	var uVar397[4];
	var uVar402[4];
	var uVar407[4];
	var uVar412[4];
	var uVar417[4];
	var uVar422[4];
	var uVar427[4];
	var uVar432[4];
	var uVar437[4];
	var uVar442[4];
	var uVar447[4];
	var uVar452[4];
	var uVar457[4];
	
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "endcon");
	Var178 = 4;
	Var178.f_1 = 4;
	Var178.f_1.f_5 = 4;
	Var178.f_1.f_5.f_5 = 4;
	Var178.f_1.f_5.f_5.f_5 = 4;
	Var199 = 4;
	Var199.f_1 = 32;
	Var199.f_1.f_33 = 32;
	Var199.f_1.f_33.f_33 = 32;
	Var199.f_1.f_33.f_33.f_33 = 32;
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_41 - 1))
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
			uVar93[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "todm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar98[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "tods", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar103[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "todsh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar108[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
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
			StringCopy(&cVar4, "expRR", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar73[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "rolsw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar78[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "roapa", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar83[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "sthpp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar88[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "txt3", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar113[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "txt4", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar118[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "txt5", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar123[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "fail", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar128[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "bfm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar153[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "wwm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar133[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "vss", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar138[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "cwt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar143[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "vhm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar148[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "tsc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar158[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mcry", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar163[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "bdprt", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar168[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "bdpst", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar173[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			iVar3 = 0;
			while (iVar3 <= 3)
			{
				StringCopy(&cVar4, "rlbs", 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringConCat(&cVar4, "-", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				Var178[iVar1 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
				StringCopy(&cVar4, "rlnm", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				uVar332[iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
				iVar3++;
			}
			iVar3 = 0;
			while (iVar3 <= 31)
			{
				StringCopy(&cVar4, "irlw", 16);
				StringIntConCat(&cVar4, iVar1, 16);
				StringConCat(&cVar4, "-", 16);
				StringIntConCat(&cVar4, iVar3, 16);
				Var199[iVar1 /*33*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
				iVar3++;
			}
			StringCopy(&cVar4, "gbnum", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar342[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbngn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar347[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gblgn", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar352[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbcol", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar357[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbdel", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar362[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mcstr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar367[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mcsrm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar372[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mcmp", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar387[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "aumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar377[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mpaumx", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar382[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "mpaumxscr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar392[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "filtlh", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar397[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbmax", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar402[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbngm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar407[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gblgm", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar412[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbvhl", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar417[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbaie", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar337[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gacc", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar422[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gfld", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar427[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbat", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar432[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbv1", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar437[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbv2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar442[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbaw", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar447[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "gbfnr", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar452[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			StringCopy(&cVar4, "txt2", 16);
			StringIntConCat(&cVar4, iVar1, 16);
			uVar457[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar4);
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_105[iVar1 /*11309*/].f_59 - 1))
			{
				if (!func_243(&uVar8, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_642[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar8[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_642[iVar2] = 5;
				}
				if (!func_243(&uVar13, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_660[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar13[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_660[iVar2] = 20;
				}
				if (!func_243(&uVar18, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1058[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar18[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1058[iVar2] = -1;
				}
				if (!func_243(&uVar23, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1076[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar23[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1076[iVar2] = -1;
				}
				if (!func_243(&uVar28, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1094[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar28[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1094[iVar2] = -1;
				}
				if (!func_243(&uVar33, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_878[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar33[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_878[iVar2] = 0;
				}
				if (!func_243(&uVar38, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_896[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar38[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_896[iVar2] = -1;
				}
				if (!func_243(&uVar43, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_914[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar43[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_914[iVar2] = 100;
				}
				if (!func_243(&uVar48, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10384[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar48[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10384[iVar2] = 0;
				}
				if (!func_243(&uVar53, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10636[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar53[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10636[iVar2] = 0f;
				}
				if (!func_243(&uVar58, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_932[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar58[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_932[iVar2] = 0;
				}
				if (!func_243(&uVar63, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_950[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar63[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_950[iVar2] = 0;
				}
				if (!func_243(&uVar68, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_968[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar68[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_968[iVar2] = 0;
				}
				if (!func_243(&uVar73, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_986[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar73[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_986[iVar2] = 0f;
				}
				if (!func_243(&uVar78, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1004[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar78[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1004[iVar2] = -1;
				}
				if (!func_243(&uVar83, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1022[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar83[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1022[iVar2] = -1;
				}
				if (!func_243(&uVar88, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1040[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar88[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1040[iVar2] = -2;
				}
				if (!func_243(&uVar93, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_806[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar93[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_806[iVar2] = 12;
				}
				if (!func_243(&uVar98, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_824[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar98[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_824[iVar2] = 0;
				}
				if (!func_243(&uVar103, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_842[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar103[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_842[iVar2] = 0;
				}
				if (!func_243(&uVar108, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_860[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar108[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_860[iVar2] = 0;
				}
				if (!func_197())
				{
					if (!func_243(&uVar113, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_7814[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar113[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_7814[iVar2 /*16*/]), "", 64);
					}
					if (!func_243(&uVar118, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_7268[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar118[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_7268[iVar2 /*16*/]), "", 64);
					}
					if (!func_243(&uVar123, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_7541[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar123[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_7541[iVar2 /*16*/]), "", 64);
					}
				}
				if (!func_243(&uVar128, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_8087[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar128[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_8087[iVar2 /*16*/]), "", 64);
				}
				if (!func_243(&uVar153, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_8360[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar153[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_8360[iVar2 /*16*/]), "", 64);
				}
				if (!func_243(&uVar133, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_8633[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar133[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_8633[iVar2 /*16*/]), "", 64);
				}
				if (!func_243(&uVar138, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_8906[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar138[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_8906[iVar2 /*16*/]), "", 64);
				}
				if (!func_243(&uVar143, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_9179[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar143[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_9179[iVar2 /*16*/]), "", 64);
				}
				if (!func_243(&uVar148, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_9452[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar148[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_9452[iVar2 /*16*/]), "", 64);
				}
				if (!func_243(&uVar158, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4361[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar158[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4361[iVar2] = 0;
				}
				if (!func_243(&uVar163, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4379[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar163[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4379[iVar2] = 0;
				}
				if (!func_243(&uVar168, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_6224[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar168[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_6224[iVar2] = Global_4456448.f_105[iVar1 /*11309*/].f_4079;
				}
				if (!func_243(&uVar173, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_6242[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar173[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_6242[iVar2] = Global_4456448.f_105[iVar1 /*11309*/].f_4341;
				}
				if (!func_243(&uVar402, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4796[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar402[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4796[iVar2] = 0;
				}
				if (!func_243(&uVar407, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4922[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar407[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4922[iVar2] = 0;
				}
				if (!func_243(&uVar412, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4958[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar412[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4958[iVar2] = 0;
				}
				if (!func_243(&uVar452, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4976[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar452[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4976[iVar2] = -1f;
				}
				if (!func_243(&uVar337, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4886[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar337[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4886[iVar2] = 0;
				}
				if (!func_243(&uVar417, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4814[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar417[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4814[iVar2] = 100;
				}
				if (!func_243(&uVar422, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4850[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar422[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4850[iVar2] = 0;
				}
				if (!func_243(&uVar427, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4868[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar427[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4868[iVar2] = 0;
				}
				if (!func_243(&uVar432, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4832[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar432[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4832[iVar2] = 0;
				}
				if (!func_243(&uVar437, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4674[iVar2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar437[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4674[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar442, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4726[iVar2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar442[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4726[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar447, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4778[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar447[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4778[iVar2] = 0f;
				}
				iVar3 = 0;
				while (iVar3 <= 3)
				{
					if (Var178[iVar1 /*5*/][iVar3] != 0)
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_6260[iVar2 /*5*/][iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(Var178[iVar1 /*5*/][iVar3], iVar2);
					}
					else
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_6260[iVar2 /*5*/][iVar3] = 0;
					}
					if (uVar332[iVar3] != 0)
					{
						StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_6346[iVar3 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar332[iVar3], 0), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_6346[iVar3 /*16*/]), "", 64);
					}
					iVar3++;
				}
				iVar3 = 0;
				while (iVar3 <= 31)
				{
					if (Var199[iVar1 /*33*/][iVar3] != 0)
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_5640[iVar2 /*33*/][iVar3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(Var199[iVar1 /*33*/][iVar3], iVar2);
					}
					else
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_5640[iVar2 /*33*/][iVar3] = -1;
					}
					iVar3++;
				}
				if (!func_243(&uVar342, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4620[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar342[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4620[iVar2] = 0;
				}
				if (!func_243(&uVar347, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4904[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar347[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4904[iVar2] = 0;
				}
				if (!func_243(&uVar352, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4940[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar352[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4940[iVar2] = 0;
				}
				if (!func_243(&uVar357, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4656[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar357[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4656[iVar2] = 0;
				}
				if (!func_243(&uVar362, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4638[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar362[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4638[iVar2] = 0;
				}
				if (!func_243(&uVar367, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5280[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar367[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5280[iVar2] = 0;
				}
				if (!func_243(&uVar372, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5352[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar372[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5352[iVar2] = -1;
				}
				if (!func_243(&uVar377, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5316[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar377[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5316[iVar2] = 0;
				}
				if (!func_243(&uVar392, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5370[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar392[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5370[iVar2] = 0;
				}
				if (!func_243(&uVar382, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5334[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar382[iVar1], iVar2);
				}
				else if (Global_4456448.f_105[iVar1 /*11309*/].f_5316[iVar2] != 0 && GAMEPLAY::IS_BIT_SET(Global_4456448.f_105[iVar1 /*11309*/].f_5442[iVar2], 8))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5334[iVar2] = Global_4456448.f_105[iVar1 /*11309*/].f_5316[iVar2];
					Global_4456448.f_105[iVar1 /*11309*/].f_5316[iVar2] = 0;
					GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_105[iVar1 /*11309*/].f_5442[iVar2]), 8);
				}
				if (!func_243(&uVar387, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5298[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar387[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5298[iVar2] = 0;
				}
				if (!func_243(&uVar397, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5388[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar397[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5388[iVar2] = 0;
				}
				if (!func_243(&uVar457, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_6995[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar457[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_6995[iVar2 /*16*/]), "", 64);
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_248(var uParam0)
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
	while (iVar1 <= (Global_4456448.f_41 - 1))
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
			while (iVar2 <= (Global_4456448.f_105[iVar1 /*11309*/].f_59 - 1))
			{
				if (!func_243(&uVar17, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_2504[iVar2 /*36*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar17[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_2504[iVar2 /*36*/].f_3 = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar22, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_2504[iVar2 /*36*/].f_6 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar22[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_2504[iVar2 /*36*/].f_6 = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar27, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_2504[iVar2 /*36*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar27[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_2504[iVar2 /*36*/].f_10 = 0f;
				}
				if (!func_243(&uVar7, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_2504[iVar2 /*36*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar7[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_2504[iVar2 /*36*/] = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar12, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_2504[iVar2 /*36*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar12[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_2504[iVar2 /*36*/].f_9 = 0f;
				}
				if (!func_243(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_19 = -1;
				}
				if (!func_243(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_17 = 0;
				}
				if (!func_243(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_33 = 0;
				}
				if (!func_243(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_18 = -1;
				}
				if (!func_243(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_20 = 0;
				}
				if (!func_243(&uVar92, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar92[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_23 = 120;
				}
				if (!func_243(&uVar97, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_24 = 5f;
				}
				if (!func_243(&uVar102, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_25 = 10f;
				}
				if (!func_243(&uVar137, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar137[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_34 = 0;
				}
				if (!func_243(&uVar267, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar267[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_34 = 0;
				}
				if (!func_243(&uVar107, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_26 = 30f;
				}
				if (!func_243(&uVar147, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar147[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_30 = 0;
				}
				if (!func_243(&uVar152, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar152[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_30 = 0;
				}
				if (!func_243(&uVar157, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar157[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_31 = 0;
				}
				if (!func_243(&uVar162, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar162[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_31 = 0;
				}
				if (!func_243(&uVar167, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar167[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_32 = 0;
				}
				if (!func_243(&uVar172, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar172[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_32 = 0;
				}
				if (!func_243(&uVar112, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar112[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_27 = 0;
				}
				if (!func_243(&uVar117, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar117[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_28 = 0;
				}
				if (!func_243(&uVar142, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar142[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_35 = 12;
				}
				if (!func_243(&uVar122, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar122[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_29 = 0;
				}
				if (!func_243(&uVar127, 2, iVar1, iVar2) && !func_243(&uVar132, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar127[iVar1], iVar2);
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar132[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_21 = 0;
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_22 = -1;
				}
				if (!func_243(&uVar212, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_19 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar212[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_19 = -1;
				}
				if (!func_243(&uVar217, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_17 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar217[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_17 = 0;
				}
				if (!func_243(&uVar222, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar222[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_33 = 0;
				}
				if (!func_243(&uVar227, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar227[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_18 = -1;
				}
				if (!func_243(&uVar232, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_20 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar232[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_20 = 0;
				}
				if (!func_243(&uVar237, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar237[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_23 = 120;
				}
				if (!func_243(&uVar242, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar242[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_27 = 0;
				}
				if (!func_243(&uVar247, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar247[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_28 = 0;
				}
				if (!func_243(&uVar272, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar272[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_35 = 12;
				}
				if (!func_243(&uVar252, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar252[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_29 = 0;
				}
				if (!func_243(&uVar257, 2, iVar1, iVar2) && !func_243(&uVar262, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_21 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar257[iVar1], iVar2);
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar262[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_21 = 0;
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_22 = -1;
				}
				if (!func_243(&uVar47, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar47[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_3 = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar52, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_6 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar52[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_6 = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar57, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar57[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_10 = 0f;
				}
				if (!func_243(&uVar62, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_13 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar62[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_13 = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar37, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar37[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/] = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar42, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar42[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_9 = 0f;
				}
				if (!func_243(&uVar32, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1278[iVar2 /*36*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32[iVar1], iVar2);
				}
				if (!func_243(&uVar207, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_13 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar207[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_13 = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar182, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar182[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/] = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar192, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_3 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar192[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_3 = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar187, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_6 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar187[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_6 = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar202, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_10 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar202[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_10 = 0f;
				}
				if (!func_243(&uVar197, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_9 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar197[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_9 = 0f;
				}
				if (!func_243(&uVar177, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1891[iVar2 /*36*/].f_16 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar177[iVar1], iVar2);
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_249(var uParam0)
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
	while (iVar1 <= (Global_4456448.f_41 - 1))
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
			while (iVar112 <= 84)
			{
				if (uVar7[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar7[iVar1], iVar112) == 2)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_64[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar7[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_64[iVar112] = 0;
				}
				if (uVar12[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar12[iVar1], iVar112) == 2)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_255[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar12[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_255[iVar112] = 0;
				}
				if (uVar17[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar17[iVar1], iVar112) == 2)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_445[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar17[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_445[iVar112] = 0;
				}
				if (uVar37[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar37[iVar1], iVar112) == 3)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_163[iVar112] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar37[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_163[iVar112] = 1f;
				}
				if (uVar42[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar42[iVar1], iVar112) == 3)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_354[iVar112] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar42[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_354[iVar112] = 1f;
				}
				if (uVar47[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar47[iVar1], iVar112) == 3)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_544[iVar112] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar47[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_544[iVar112] = 1f;
				}
				iVar112++;
			}
			iVar112 = 0;
			while (iVar112 <= 11)
			{
				if (uVar22[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar22[iVar1], iVar112) == 2)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_150[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar22[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_150[iVar112] = 0;
				}
				if (uVar27[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar27[iVar1], iVar112) == 2)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_341[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar27[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_341[iVar112] = 0;
				}
				if (uVar32[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar32[iVar1], iVar112) == 2)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_531[iVar112] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar32[iVar1], iVar112);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_531[iVar112] = 0;
				}
				iVar112++;
			}
			iVar113 = 0;
			while (iVar113 <= 3)
			{
				if (uVar52[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar52[iVar1], iVar113) == 2)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_632[iVar113] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar52[iVar1], iVar113);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_632[iVar113] = -1;
				}
				if (uVar57[iVar1] != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar57[iVar1], iVar113) == 2)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_637[iVar113] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar57[iVar1], iVar113);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_637[iVar113] = -1;
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
			while (iVar2 <= (Global_4456448.f_105[iVar1 /*11309*/].f_59 - 1))
			{
				if (!func_243(&uVar62, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10876[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar62[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10876[iVar2] = 0;
				}
				if (!func_243(&uVar67, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10894[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar67[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10894[iVar2] = 0;
				}
				if (!func_243(&uVar72, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10912[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar72[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10912[iVar2] = 0;
				}
				if (!func_243(&uVar77, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_11018[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar77[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_11018[iVar2] = 0;
				}
				if (!func_243(&uVar82, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10402[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar82[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10402[iVar2] = 0;
				}
				if (!func_243(&uVar87, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10420[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar87[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10420[iVar2] = 0;
				}
				if (!func_243(&uVar92, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10438[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar92[iVar1], iVar2);
					if (Global_4456448.f_105[iVar1 /*11309*/].f_10438[iVar2] == 0)
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_10438[iVar2] = -1;
					}
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10438[iVar2] = -1;
				}
				if (!func_243(&uVar97, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10546[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar97[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10546[iVar2] = -1;
				}
				if (!func_243(&uVar102, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10564[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar102[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10564[iVar2] = -1;
				}
				if (!func_243(&uVar107, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10582[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar107[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10582[iVar2] = -1;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_250(var uParam0)
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
	var uVar324[4];
	int iVar329;
	int iVar330;
	
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(*uParam0, "endcon");
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_41 - 1))
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
			StringCopy(&cVar3, "wlreq", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar84[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mxwl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar89[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "wdly", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar94[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ttlc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar99[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "swtod", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar104[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "swtok", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar109[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "fsdtmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar284[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mpftmr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar279[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "artlit", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar114[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mrtl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar119[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "bmbtm", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar124[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "gpsdp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar129[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dcont", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar134[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "critw", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar139[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "diswp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar144[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "frndf", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar149[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dsosui", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar154[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dpos", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar159[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "txt1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar164[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dpos2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar169[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dpost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar174[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dotim", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar179[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dov", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar184[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dost", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar189[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dops", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar194[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "dovd", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar199[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "pl2an", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar204[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "lvbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar209[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ovwty", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar214[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "ovwid", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar219[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "wldbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar224[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drpr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar229[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "drph", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar234[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "gbtp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar239[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "irfbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar244[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "plvrl", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar249[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "hdmfp", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar289[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "hddstra", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar294[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
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
				uVar254[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar8 = true;
				uVar259[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar9 = true;
				uVar264[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "opl3", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar10 = true;
				uVar269[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "oplbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar274[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "mpot0", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar11 = true;
				uVar299[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot1", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar12 = true;
				uVar304[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "mpot2", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar0, &cVar3) == 7)
			{
				bVar13 = true;
				uVar309[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			}
			StringCopy(&cVar3, "rnrbs", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar314[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "cojr", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar319[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			StringCopy(&cVar3, "cojc", 16);
			StringIntConCat(&cVar3, iVar1, 16);
			uVar324[iVar1] = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, &cVar3);
			iVar329 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(uVar0, "tlimt");
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_105[iVar1 /*11309*/].f_59 - 1))
			{
				if (!func_243(&uVar14, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_734[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar14[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_734[iVar2] = 0;
				}
				if (!func_243(&uVar19, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_752[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar19[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_752[iVar2] = 0;
				}
				if (!func_243(&uVar24, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4343[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar24[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4343[iVar2] = 0;
				}
				if (!func_243(&uVar34, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4415[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar34[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4415[iVar2] = 0;
				}
				if (!func_243(&uVar39, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4433[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar39[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4433[iVar2] = 0;
				}
				if (!func_243(&uVar29, 4, iVar1, iVar2))
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_6449[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar29[iVar1], iVar2), 64);
				}
				else
				{
					StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_6449[iVar2 /*16*/]), "", 64);
				}
				if (!func_243(&uVar44, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_678[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar44[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_678[iVar2] = 0;
				}
				if (!func_243(&uVar49, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_696[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar49[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_696[iVar2] = 0;
				}
				if (Global_4456448.f_105[iVar1 /*11309*/].f_696[iVar2] == 0)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_696[iVar2] = -1;
				}
				if (!func_243(&uVar54, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_716[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar54[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_716[iVar2] = 0;
				}
				if (!func_243(&uVar74, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4469[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar74[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4469[iVar2] = 0;
				}
				if (!func_243(&uVar69, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4451[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar69[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4451[iVar2] = 0;
				}
				if (!func_243(&uVar79, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4491[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar79[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4491[iVar2] = 0;
				}
				if (!func_243(&uVar84, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4509[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar84[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4509[iVar2] = -2;
				}
				if (!func_243(&uVar89, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4527[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar89[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4527[iVar2] = 1;
				}
				if (!func_243(&uVar94, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4547[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar94[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4547[iVar2] = 10000;
				}
				if (!func_243(&uVar99, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4583[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar99[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4583[iVar2] = -1;
				}
				if (!func_243(&uVar59, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1112[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar59[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1112[iVar2] = 0;
				}
				if (!func_243(&uVar64, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1130[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar64[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1130[iVar2] = 0;
				}
				if (!func_243(&uVar149, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1184[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar149[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1184[iVar2] = 0;
				}
				if (!func_243(&uVar154, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1202[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar154[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1202[iVar2] = 0;
				}
				if (!func_243(&uVar104, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1148[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar104[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1148[iVar2] = -1;
				}
				if (!func_243(&uVar109, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1166[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar109[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1166[iVar2] = -1;
				}
				if (!func_243(&uVar119, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4565[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar119[iVar1], iVar2);
				}
				else if (iVar329 != 0)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4565[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar329, iVar1);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4565[iVar2] = 0;
				}
				if (!func_243(&uVar114, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1238[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar114[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1238[iVar2] = -1;
				}
				if (!func_243(&uVar284, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_788[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar284[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_788[iVar2] = 0;
				}
				if (!func_243(&uVar279, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_770[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar279[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_770[iVar2] = 0;
				}
				if (!func_243(&uVar124, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1220[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar124[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1220[iVar2] = 0;
				}
				if (!func_243(&uVar129, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1256[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar129[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_1256[iVar2] = 0;
				}
				if (!func_243(&uVar134, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9985[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar134[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9985[iVar2] = 0;
				}
				if (!func_243(&uVar139, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10003[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar139[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10003[iVar2] = 0;
				}
				if (!func_243(&uVar144, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10021[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar144[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10021[iVar2] = 0;
				}
				if (!func_243(&uVar159, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4994[iVar2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar159[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4994[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_197())
				{
					if (!func_243(&uVar164, 4, iVar1, iVar2))
					{
						StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_6722[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar164[iVar1], iVar2), 64);
					}
					else
					{
						StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_6722[iVar2 /*16*/]), "", 64);
					}
				}
				if (!func_243(&uVar169, 5, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5046[iVar2 /*3*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(uVar169[iVar1], iVar2) };
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5046[iVar2 /*3*/] = { 0f, 0f, 0f };
				}
				if (!func_243(&uVar174, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5134[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar174[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5134[iVar2] = 0;
				}
				if (func_246())
				{
					if (Global_4456448.f_105[iVar1 /*11309*/].f_5134[iVar2] != 1)
					{
						Global_4456448.f_105[iVar1 /*11309*/].f_5134[iVar2] = 6;
					}
				}
				if (!func_243(&uVar179, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5170[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar179[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5170[iVar2] = 0;
				}
				if (!func_243(&uVar239, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4601[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar239[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_4601[iVar2] = 0;
				}
				if (!func_243(&uVar229, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5098[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar229[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5098[iVar2] = 0f;
				}
				if (!func_243(&uVar234, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5116[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar234[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5116[iVar2] = 0.001f;
				}
				if (!func_243(&uVar244, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_6202[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar244[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_6202[iVar2] = 0;
				}
				if (!func_243(&uVar249, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_39[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar249[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_39[iVar2] = -1;
				}
				if (bVar7)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9758[iVar2 /*5*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar254[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9758[iVar2 /*5*/][0] = -1;
				}
				if (bVar8)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9758[iVar2 /*5*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar259[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9758[iVar2 /*5*/][1] = -1;
				}
				if (bVar9)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9758[iVar2 /*5*/][2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar264[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9758[iVar2 /*5*/][2] = -1;
				}
				if (bVar10)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9758[iVar2 /*5*/][3] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar269[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9758[iVar2 /*5*/][3] = -1;
				}
				if (bVar11)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9862[iVar2 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar299[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9862[iVar2 /*4*/][0] = -1;
				}
				if (bVar12)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9862[iVar2 /*4*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar304[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9862[iVar2 /*4*/][1] = -1;
				}
				if (bVar13)
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9862[iVar2 /*4*/][2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar309[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9862[iVar2 /*4*/][2] = -1;
				}
				if (!func_243(&uVar314, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9931[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar314[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9931[iVar2] = 0;
				}
				if (!func_243(&uVar319, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9949[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar319[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9949[iVar2] = -1;
				}
				if (!func_243(&uVar324, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9967[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar324[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9967[iVar2] = 0;
				}
				iVar330 = Global_4456448.f_105[iVar1 /*11309*/].f_59;
				while (iVar330 <= 31)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_105[iVar1 /*11309*/].f_9931[iVar2], iVar330))
					{
						GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_105[iVar1 /*11309*/].f_9931[iVar2]), iVar330);
					}
					iVar330++;
				}
				if (!func_243(&uVar289, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10366[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar289[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10366[iVar2] = 0;
				}
				if (!func_243(&uVar294, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10930[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar294[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10930[iVar2] = 0;
				}
				if (!func_243(&uVar184, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5152[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar184[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5152[iVar2] = -1;
				}
				if (!func_243(&uVar189, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5188[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar189[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5188[iVar2] = -1f;
				}
				if (!func_243(&uVar194, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5206[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar194[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5206[iVar2] = -1f;
				}
				if (!func_243(&uVar199, 3, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5224[iVar2] = DATAFILE::_ARRAY_VALUE_GET_FLOAT(uVar199[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5224[iVar2] = 1f;
				}
				if (!func_243(&uVar204, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5262[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar204[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5262[iVar2] = 0;
				}
				if (!func_243(&uVar209, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5244[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar209[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_5244[iVar2] = 0;
				}
				if (!func_243(&uVar214, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10237[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar214[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10237[iVar2] = 0;
				}
				if (!func_243(&uVar219, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10255[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar219[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10255[iVar2] = -1;
				}
				if (!func_243(&uVar224, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10273[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar224[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_10273[iVar2] = 0;
				}
				if (!func_243(&uVar274, 2, iVar1, iVar2))
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9844[iVar2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar274[iVar1], iVar2);
				}
				else
				{
					Global_4456448.f_105[iVar1 /*11309*/].f_9844[iVar2] = 0;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
}

void func_251(var uParam0)
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
		Global_4456448.f_46236[iVar1 /*39*/] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "team");
		Global_4456448.f_46236[iVar1 /*39*/].f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "rule");
		Global_4456448.f_46236[iVar1 /*39*/].f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "time");
		iVar86 = 0;
		while (iVar86 <= 1)
		{
			StringCopy(&cVar87, "txt", 8);
			StringIntConCat(&cVar87, iVar86, 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(uVar75[iVar1], &cVar87) == 4)
			{
				StringCopy(&(Global_4456448.f_46236[iVar1 /*39*/].f_5[iVar86 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(uVar75[iVar1], &cVar87), 64);
			}
			iVar86++;
		}
		Global_4456448.f_46236[iVar1 /*39*/].f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "delay");
		Global_4456448.f_46236[iVar1 /*39*/].f_38 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "sndall");
		Global_4456448.f_46236[iVar1 /*39*/].f_3 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar75[iVar1], "ptsreq");
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= (Global_4456448.f_41 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar14 != 0)
			{
				uVar2 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar14, iVar1);
				Global_4456448.f_58050[iVar1] = uVar2;
			}
			else
			{
				Global_4456448.f_58050[iVar1] = 0;
			}
			if (iVar15 != 0)
			{
				Global_4456448.f_45352[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar15, iVar1);
			}
			else
			{
				Global_4456448.f_45352[iVar1] = -1;
			}
			if (iVar16 != 0)
			{
				Global_4456448.f_58098[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar16, iVar1);
			}
			else
			{
				Global_4456448.f_58098[iVar1] = -1;
			}
			if (iVar17 != 0)
			{
				Global_4456448.f_58113[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar17, iVar1);
			}
			else
			{
				Global_4456448.f_58113[iVar1] = 1001;
			}
			if (iVar18 != 0)
			{
				Global_4456448.f_58108[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar18, iVar1);
			}
			else
			{
				Global_4456448.f_58108[iVar1] = -1;
			}
			if (iVar19 != 0)
			{
				Global_4456448.f_58093[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar19, iVar1);
			}
			else
			{
				Global_4456448.f_58093[iVar1] = 0;
			}
			if (iVar3 != 0)
			{
				Global_4456448.f_43[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar3, iVar1);
			}
			if (Global_4456448.f_43[iVar1] < 1)
			{
				Global_4456448.f_43[iVar1] = 1;
			}
			if (iVar4 != 0)
			{
				if ((func_70(Global_4456448.f_161209) && Global_262145.f_20588) && !Global_1647688)
				{
					Global_4456448.f_47089[iVar1] = 4;
				}
				else
				{
					Global_4456448.f_47089[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar4, iVar1);
				}
			}
			else
			{
				Global_4456448.f_47089[iVar1] = -1;
			}
			if (iVar5 != 0)
			{
				if ((func_70(Global_4456448.f_161209) && Global_262145.f_20588) && !Global_1647688)
				{
					Global_4456448.f_47094[iVar1] = 1;
				}
				else
				{
					Global_4456448.f_47094[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar5, iVar1);
				}
			}
			else
			{
				Global_4456448.f_47094[iVar1] = -1;
			}
			if (bVar7)
			{
				Global_4456448.f_48[iVar1] = 0;
			}
			else
			{
				if (iVar6 != 0)
				{
					Global_4456448.f_48[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar6, iVar1);
				}
				if (Global_4456448.f_48[iVar1] < 0)
				{
					Global_4456448.f_48[iVar1] = 0;
				}
			}
			if (iVar8 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar8, iVar1) };
			}
			if (iVar9 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_7 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar9, iVar1) };
			}
			if (iVar10 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_1274 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_1275 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_1276 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_1277 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar13, iVar1);
			}
			if ((iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar1) == 2) && iVar35 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_714 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_714 = 0;
			}
			if ((iVar36 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar36, iVar1) == 2) && iVar36 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_715 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_715 = 0;
			}
			if (iVar20 != 0)
			{
				Global_4456448.f_46226[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar1);
			}
			if (iVar21 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar21, iVar1) == 2)
			{
				Global_4456448.f_46231[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar21, iVar1);
			}
			else
			{
				Global_4456448.f_46231[iVar1] = 0;
			}
			if (iVar22 != 0)
			{
				Global_4456448.f_46209[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar22, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_4456448.f_46209[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_4456448.f_46209[iVar1 /*4*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_4456448.f_46209[iVar1 /*4*/][2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_4456448.f_46192[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar23, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_4456448.f_46192[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_4456448.f_46192[iVar1 /*4*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar29, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_4456448.f_46192[iVar1 /*4*/][2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar30, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_4456448.f_46175[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar24, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_4456448.f_46175[iVar1 /*4*/][0] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar31, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_4456448.f_46175[iVar1 /*4*/][1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_4456448.f_46175[iVar1 /*4*/][2] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_4456448.f_45393[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar1);
			}
			if (iVar37 && iVar38 != 0)
			{
				Global_4456448.f_45425[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar1);
			}
			else
			{
				Global_4456448.f_45425[iVar1] = 3;
			}
			if (iVar39 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar39, iVar1) == 2)
			{
				Global_4456448.f_45430[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar1);
			}
			if (iVar67 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar67, iVar1) == 2)
			{
				Global_4456448.f_45445[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar67, iVar1);
			}
			if (iVar68 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar68, iVar1) == 2)
			{
				Global_4456448.f_45450[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar68, iVar1);
			}
			if (iVar69 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar69, iVar1) == 2)
			{
				Global_4456448.f_45455[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar69, iVar1);
			}
			if (iVar70 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar70, iVar1) == 2)
			{
				Global_4456448.f_45460[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar70, iVar1);
			}
			if (iVar71 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar71, iVar1) == 2)
			{
				Global_4456448.f_45475[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar71, iVar1);
			}
			if (iVar72 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar72, iVar1) == 2)
			{
				Global_4456448.f_45480[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar72, iVar1);
			}
			if (iVar73 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar73, iVar1) == 2)
			{
				Global_4456448.f_45465[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar73, iVar1);
			}
			if (iVar74 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar74, iVar1) == 2)
			{
				Global_4456448.f_45470[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar74, iVar1);
			}
			if (iVar40 != 0)
			{
				StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_9725[0 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar40, iVar1), 64);
			}
			if (iVar41 != 0)
			{
				StringCopy(&(Global_4456448.f_105[iVar1 /*11309*/].f_9725[1 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar41, iVar1), 64);
			}
			if (iVar42 != 0)
			{
				Global_4456448.f_45398[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar1);
			}
			if (iVar43 != 0)
			{
				Global_4456448.f_45435[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar1);
			}
			if (iVar44 != 0)
			{
				Global_4456448.f_45440[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar1);
			}
			if (iVar45 != 0)
			{
				StringCopy(&(Global_4456448.f_45403[iVar1 /*4*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(iVar45, iVar1), 16);
			}
			if (iVar46 != 0)
			{
				Global_4456448.f_45420[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar1);
			}
			if ((iVar48 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar48, iVar1) == 2) && iVar48 != 0)
			{
				Global_4456448.f_144644[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar1);
			}
			if ((iVar49 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar49, iVar1) == 2) && iVar49 != 0)
			{
				Global_4456448.f_144649[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar1);
			}
			if (iVar47 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_59 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar47, iVar1);
			}
			if (iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6411 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar51, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6411 = 0;
			}
			if (iVar52 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar52, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6412 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar52, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6412 = 0;
			}
			if (iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6413 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar53, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6413 = 0;
			}
			if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6414 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar54, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6414 = 0;
			}
			if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6415 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar55, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6415 = 0;
			}
			if (iVar56 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar56, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6416 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6416 = 0;
			}
			if (iVar57 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar57, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6417 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar57, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6417 = 0;
			}
			if (iVar58 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar58, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6418 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar58, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6418 = 0;
			}
			if (iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6419 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar59, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6419 = 0;
			}
			if (iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6420 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar60, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6420 = 0;
			}
			if (iVar61 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar61, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6421 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar61, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6421 = 0;
			}
			if (iVar62 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar62, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6422 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar62, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6422 = 0;
			}
			if (iVar63 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar63, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6423 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar63, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6423 = 0;
			}
			if (iVar64 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar64, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6424 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar64, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6424 = 0;
			}
			if (iVar65 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar65, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6425 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar65, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6425 = 0;
			}
			if (iVar66 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar66, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6426 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar66, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6426 = 0;
			}
		}
		iVar1++;
	}
}

void func_252(var uParam0)
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
	while (iVar1 <= (Global_4456448.f_41 - 1))
	{
		if (iVar1 < 4)
		{
			if (iVar2 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/] = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar2, iVar1) };
			}
			if (iVar17 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4488 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar17, iVar1);
			}
			if (iVar18 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4545 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar18, iVar1);
			}
			if (iVar19 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_5242 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar19, iVar1);
			}
			if (iVar20 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar20, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_5243 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar20, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_5243 = 0;
			}
			if (iVar21 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6220 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar21, iVar1);
			}
			if (iVar22 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6221 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar22, iVar1);
			}
			if (iVar23 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6222 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar23, iVar1);
			}
			if (iVar24 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6223 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar24, iVar1);
			}
			if (iVar25 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4490 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar25, iVar1);
			}
			if (iVar26 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4619 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar26, iVar1);
			}
			if (iVar27 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6427 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar27, iVar1);
			}
			if (iVar28 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4487 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar28, iVar1);
			}
			if (iVar31 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4489 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar31, iVar1);
			}
			if (iVar29 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4085 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar29, iVar1);
			}
			if (iVar30 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4086 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar30, iVar1);
			}
			if (iVar32 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4546 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar32, iVar1);
			}
			if (iVar33 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6428 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar33, iVar1);
			}
			if (iVar34 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6429 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar34, iVar1);
			}
			if (iVar35 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar35, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6448 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar35, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_6448 = 0;
			}
			if (iVar36 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_10363 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar36, iVar1);
			}
			if (iVar37 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_10364 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar37, iVar1);
			}
			if (iVar38 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_10365 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar38, iVar1);
			}
			if (iVar39 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_32 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar39, iVar1);
			}
			if (iVar40 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_33 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar40, iVar1);
			}
			if (iVar41 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar41, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_34 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar41, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_34 = 0;
			}
			if (iVar42 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar42, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_35 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar42, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_35 = 0;
			}
			if (iVar43 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar43, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_36 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar43, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_36 = 0;
			}
			if (iVar44 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_38 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar44, iVar1);
			}
			if (iVar46 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4080 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar46, iVar1);
			}
			if (iVar47 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4082 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar47, iVar1);
			}
			if (iVar48 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4078 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar48, iVar1);
			}
			if (iVar49 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4077 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar49, iVar1);
			}
			if ((iVar51 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar51, iVar1) == 2) && iVar51 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4079 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar51, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4079 = 60000;
			}
			if (iVar52 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar52, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4340 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar52, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4340 = 0;
			}
			if (iVar53 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar53, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4339 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar53, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4339 = 0;
			}
			if (iVar55 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar55, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4341 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar55, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4341 = 60000;
			}
			if (iVar54 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar54, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4342 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar54, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4342 = 0;
			}
			if (iVar56 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_61 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar56, iVar1);
			}
			if (iVar57 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_62 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar57, iVar1);
			}
			if (iVar58 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_63 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar58, iVar1);
			}
			if (iVar59 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar59, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_249 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar59, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_249 = -1;
			}
			if (iVar68 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar68, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_250 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar68, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_250 = -1;
			}
			if (iVar69 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar69, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_251 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar69, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_251 = -1;
			}
			if ((iVar60 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar60, iVar1) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar61, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_440 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar60, iVar1);
				Global_4456448.f_105[iVar1 /*11309*/].f_441 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar61, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_440 = -1;
				Global_4456448.f_105[iVar1 /*11309*/].f_441 = -1;
			}
			if (iVar64 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_252 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar64, iVar1);
			}
			if (iVar65 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_253 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar65, iVar1);
			}
			if (iVar66 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_254 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar66, iVar1);
			}
			if ((iVar62 != 0 && DATAFILE::_ARRAY_VALUE_GET_TYPE(iVar62, iVar1) == 2) && DATAFILE::_ARRAY_VALUE_GET_TYPE(uVar63, iVar1) == 2)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_630 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar62, iVar1);
				Global_4456448.f_105[iVar1 /*11309*/].f_631 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(uVar63, iVar1);
			}
			else
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_630 = -1;
				Global_4456448.f_105[iVar1 /*11309*/].f_631 = -1;
			}
			if (iVar67 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_442 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar67, iVar1);
			}
			if (iVar70 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_443 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar70, iVar1);
			}
			if (iVar71 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_444 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar71, iVar1);
			}
			if (iVar72 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_57 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar72, iVar1);
			}
			if (iVar73 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_58 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar73, iVar1);
			}
			if (iVar74 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4081 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar74, iVar1);
			}
			if (iVar75 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4083 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar75, iVar1);
			}
			if (iVar50 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_4084 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar50, iVar1);
			}
			if (iVar45 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_3 = DATAFILE::_ARRAY_VALUE_GET_FLOAT(iVar45, iVar1);
			}
			if (iVar76 != 0)
			{
				Global_4456448.f_45342[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar76, iVar1);
			}
			if (iVar77 != 0)
			{
				Global_4456448.f_45347[iVar1] = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar77, iVar1);
			}
			if (iVar78 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_37 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar78, iVar1);
			}
			if (iVar3 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_14 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar3, iVar1);
			}
			if (iVar4 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_15 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar4, iVar1) };
			}
			if (iVar5 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_18 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar5, iVar1);
			}
			if (iVar6 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_19 = { DATAFILE::_ARRAY_VALUE_GET_VECTOR3(iVar6, iVar1) };
			}
			if (iVar7 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_22 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar7, iVar1);
			}
			if (iVar8 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_23 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar8, iVar1);
			}
			if (iVar9 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_24 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar9, iVar1);
			}
			if (iVar10 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_25 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar10, iVar1);
			}
			if (iVar11 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_26 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar11, iVar1);
			}
			if (iVar12 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_27 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar12, iVar1);
			}
			if (iVar13 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_28 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar13, iVar1);
			}
			if (iVar14 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_29 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar14, iVar1);
			}
			if (iVar15 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_30 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar15, iVar1);
			}
			if (iVar16 != 0)
			{
				Global_4456448.f_105[iVar1 /*11309*/].f_31 = DATAFILE::_ARRAY_VALUE_GET_INTEGER(iVar16, iVar1);
			}
		}
		iVar1++;
	}
}

void func_253(var uParam0)
{
	var uVar0;
	
	uVar0 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uParam0, "rule");
	Global_4456448.f_61 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "time");
	Global_4456448.f_63 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "score");
	Global_4456448.f_74 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "prule");
	Global_4456448.f_79173 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "ptyp");
	Global_4456448.f_64 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "blip");
	Global_4456448.f_66 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "tag");
	Global_4456448.f_67 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "voice");
	Global_4456448.f_68 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "radio");
	Global_4456448.f_69 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "aim");
	Global_4456448.f_58129 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pol");
	Global_4456448.f_56 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "liv");
	Global_4456448.f_55687 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "traf");
	Global_4456448.f_139729 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "tod");
	Global_4456448.f_139713 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "weth");
	Global_4456448.f_139731 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "apeds");
	Global_4456448.f_139730 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "vehd");
	Global_4456448.f_72 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "vdm");
	Global_4456448.f_70 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "tdm");
	Global_4456448.f_45342[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "pcr");
	Global_4456448.f_45347[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar0, "ocr");
}

void func_254(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar8;
	char[] cVar9[8];
	int iVar11;
	int iVar12;
	vector3 vVar13[24];
	int iVar19;
	vector3 vVar20[24];
	vector3 vVar26[24];
	char cVar32[16];
	int iVar36;
	char[] cVar37[8];
	int iVar39;
	int iVar40;
	char cVar41[16];
	int iVar45;
	char cVar46[16];
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	var uVar58;
	int iVar59;
	int iVar60;
	var uVar61;
	int iVar62;
	var uVar63;
	float fVar64;
	int iVar65;
	int iVar66;
	var uVar67;
	int iVar68;
	char cVar69[16];
	char cVar73[16];
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	
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
		Global_4456448.f_58049 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ivm");
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "fixcam") == 2)
	{
		Global_4456448.f_144657 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "fixcam");
	}
	else
	{
		Global_4456448.f_144657 = 0;
	}
	Global_4456448.f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "optbs");
	Global_4456448.f_87 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "camo") };
	Global_4456448.f_90 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "camro") };
	Global_4456448.f_81 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "cam") };
	Global_4456448.f_100 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "camh");
	Global_4456448.f_93 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "camf") };
	Global_4456448.f_96 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "camfr") };
	Global_4456448.f_99 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "camfv");
	Global_4456448.f_138449 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "dmbds");
	Global_4456448.f_75 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "phpo") };
	StringCopy(&(Global_4456448.f_138632[0 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "szTag"), 64);
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "chksfx") == 1)
	{
		Global_4456448.f_52654 = 1;
	}
	else
	{
		Global_4456448.f_52654 = 0;
	}
	StringCopy(&cVar4, "nrcid", 16);
	if (bParam2)
	{
		iVar2 = 0;
		while (iVar2 <= 1)
		{
			StringCopy(&cVar4, "nrcid", 16);
			StringIntConCat(&cVar4, iVar2, 16);
			StringCopy(&(Global_4456448.f_138767[iVar2 /*6*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar4), 24);
			iVar2++;
		}
	}
	if (func_133())
	{
		Global_4456448.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "subtype");
		Global_4456448.f_144654 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "testcomplete");
		if (((Global_4456448.f_2 == 6 || Global_4456448.f_2 == 5) || Global_4456448.f_2 == 4) || Global_4456448.f_2 == 9)
		{
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "teamBal") == 2)
			{
				Global_4456448.f_144656 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "numRounds");
			}
			else
			{
				Global_4456448.f_144656 = 1;
			}
			if (Global_4456448.f_144656 < 1)
			{
				Global_4456448.f_144656 = 1;
			}
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "teamBal") == 2)
		{
			Global_4456448.f_144658 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "teamBal");
		}
		else
		{
			Global_4456448.f_144658 = 5;
		}
	}
	else if (func_222())
	{
		Global_4456448.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "subtype");
	}
	Global_4456448.f_161209 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "adverm");
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "dlcrel") == 2)
	{
		Global_4456448.f_161210 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "dlcrel");
	}
	else
	{
		Global_4456448.f_161210 = -1;
	}
	Global_4456448.f_144655 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "testcomplete");
	Global_4456448.f_62 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "endtype");
	Global_4456448.f_11 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs");
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ovrpc") == 2)
	{
		Global_4456448.f_91944 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ovrpc");
	}
	else
	{
		Global_4456448.f_91944 = -1;
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
	Global_4456448.f_162202 = DATAFILE::_OBJECT_VALUE_GET_BOOLEAN(iVar0, "alrtLocal");
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
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "menubs24") == 2)
	{
		Global_4456448.f_34 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs24");
	}
	else
	{
		Global_4456448.f_34 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csittd") == 2)
	{
		Global_4456448.f_165654 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "csittd");
	}
	else
	{
		Global_4456448.f_165654 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "fiispr") == 3)
	{
		Global_4456448.f_139768 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "fiispr");
	}
	else
	{
		Global_4456448.f_139768 = -0.1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cordmbs") == 2)
	{
		Global_4456448.f_162439 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cordmbs");
	}
	else
	{
		Global_4456448.f_162439 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "iplyli") == 2)
	{
		Global_4456448.f_57 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "iplyli");
	}
	else
	{
		Global_4456448.f_57 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ptbNBL") == 2)
	{
		Global_4456448.f_162388 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ptbNBL");
	}
	else
	{
		Global_4456448.f_162388 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ptbDrg") == 3)
	{
		Global_4456448.f_162389 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "ptbDrg");
	}
	else
	{
		Global_4456448.f_162389 = 2f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csts") == 3)
	{
		Global_4456448.f_162434 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "csts");
	}
	else
	{
		Global_4456448.f_162434 = 1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rmlo") == 2)
	{
		Global_4456448.f_162435 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rmlo");
	}
	else
	{
		Global_4456448.f_162435 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mxlap") == 2)
	{
		Global_4456448.f_162436 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mxlap");
	}
	else
	{
		Global_4456448.f_162436 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "aghd") == 3)
	{
		Global_4456448.f_162437 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "aghd");
	}
	else
	{
		Global_4456448.f_162437 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "agt") == 2)
	{
		Global_4456448.f_162438 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "agt");
	}
	else
	{
		Global_4456448.f_162438 = 0;
	}
	iVar8 = 0;
	while (iVar8 <= 7)
	{
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "A", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 5)
		{
			Global_4456448.f_165358[iVar8 /*32*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar9) };
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "B", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 5)
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_4 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar9) };
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_4 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "C", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 3)
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_8 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar9);
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_8 = 1.25f;
		}
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "E", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_19 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar9);
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_19 = 0;
		}
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "H", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 3)
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_3 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar9);
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_3 = 0f;
		}
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "I", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 3)
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_7 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar9);
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_7 = 0f;
		}
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "J", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 2)
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_20 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar9);
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_20 = -1;
		}
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "K", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 5)
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_21 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar9) };
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_21 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "L", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 3)
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_24 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar9);
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_24 = 0f;
		}
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "M", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 5)
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_25 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar9) };
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_25 = { 0f, 0f, 0f };
		}
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "N", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 5)
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_28 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar9) };
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_28 = { 0f, 0f, 0f };
		}
		iVar11 = 0;
		while (iVar11 <= 3)
		{
			StringCopy(&cVar9, "w", 8);
			StringIntConCat(&cVar9, iVar8, 8);
			StringConCat(&cVar9, "F", 8);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 2)
			{
				Global_4456448.f_165358[iVar8 /*32*/].f_9[iVar11] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar9);
			}
			else
			{
				Global_4456448.f_165358[iVar8 /*32*/].f_9[iVar11] = -1;
			}
			StringCopy(&cVar9, "w", 8);
			StringIntConCat(&cVar9, iVar8, 8);
			StringConCat(&cVar9, "G", 8);
			StringIntConCat(&cVar9, iVar11, 8);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 2)
			{
				Global_4456448.f_165358[iVar8 /*32*/].f_14[iVar11] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar9);
			}
			else
			{
				Global_4456448.f_165358[iVar8 /*32*/].f_14[iVar11] = -1;
			}
			iVar11++;
		}
		StringCopy(&cVar9, "w", 8);
		StringIntConCat(&cVar9, iVar8, 8);
		StringConCat(&cVar9, "O", 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar9) == 3)
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_31 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar9);
		}
		else
		{
			Global_4456448.f_165358[iVar8 /*32*/].f_31 = 65f;
		}
		iVar8++;
	}
	iVar12 = 0;
	while (iVar12 <= 4)
	{
		StringCopy(&cVar13, "dmHTS", 24);
		StringIntConCat(&cVar13, iVar12, 24);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar13) == 4)
		{
			StringCopy(&(Global_4456448.f_161721[iVar12 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar13), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_161721[iVar12 /*16*/]), "", 64);
		}
		iVar19 = 0;
		while (iVar19 <= 3)
		{
			StringCopy(&cVar20, "dmHT", 24);
			StringIntConCat(&cVar20, iVar12, 24);
			StringIntConCat(&cVar20, iVar19, 24);
			if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar20) == 4)
			{
				StringCopy(&(Global_4456448.f_161802[iVar12 /*65*/][iVar19 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar20), 64);
			}
			else
			{
				StringCopy(&(Global_4456448.f_161802[iVar12 /*65*/][iVar19 /*16*/]), "", 64);
			}
			iVar19++;
		}
		StringCopy(&cVar26, "dmHTD", 24);
		StringIntConCat(&cVar26, iVar12, 24);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar26) == 2)
		{
			Global_4456448.f_162128[iVar12] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar26);
		}
		else
		{
			Global_4456448.f_162128[iVar12] = -1;
		}
		iVar12++;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_22, 13))
	{
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "trstim") == 2)
		{
			Global_4456448.f_161264 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "trstim");
		}
		else
		{
			Global_4456448.f_161264 = 10;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "trerad") == 3)
		{
			Global_4456448.f_161265 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "trerad");
		}
		else
		{
			Global_4456448.f_161265 = 5f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "trsstim") == 2)
		{
			Global_4456448.f_161266 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "trsstim");
		}
		else
		{
			Global_4456448.f_161266 = 10;
		}
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "iopcd") == 2)
	{
		Global_4456448.f_161212 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "iopcd");
	}
	else
	{
		Global_4456448.f_161212 = -1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 31))
	{
	}
	Global_4456448.f_16 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "menubs6");
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_16, 16))
	{
	}
	func_271(&iVar0);
	func_270(&iVar0);
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rcvs") == 2)
	{
		Global_4456448.f_46173 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rcvs");
	}
	else
	{
		Global_4456448.f_46173 = 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_18, 25))
	{
		Global_4456448.f_46173 = 1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hptfb") == 2)
	{
		Global_4456448.f_104 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hptfb");
	}
	else
	{
		Global_4456448.f_104 = 0;
	}
	iVar8 = 0;
	while (iVar8 <= 4)
	{
		StringCopy(&cVar32, "specobjt", 16);
		StringIntConCat(&cVar32, iVar8, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 4)
		{
			StringCopy(&(Global_4456448.f_162255[iVar8 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar32), 64);
		}
		else
		{
			IntToString(&(Global_4456448.f_162255[iVar8 /*16*/]), 0, 64);
		}
		iVar8++;
	}
	Global_4456448.f_162443 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "turammo");
	Global_4456448.f_162444 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "turgudm");
	Global_4456448.f_58123 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "teamvbs");
	Global_4456448.f_35 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cncmbs");
	Global_4456448.f_157723 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "todhr");
	Global_4456448.f_157724 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "todmn");
	Global_4456448.f_10 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cmpts");
	Global_4456448.f_60 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rank");
	Global_4456448.f_60 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rank");
	Global_4456448.f_139733 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "charcon");
	Global_4456448.f_139733 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "char");
	Global_4456448.f_139734 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "xpr");
	Global_4456448.f_139735 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cshr");
	Global_4456448.f_139739 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ctsc");
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecsbs") == 2)
	{
		Global_4456448.f_154472.f_16 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ecsbs");
	}
	else
	{
		Global_4456448.f_154472.f_16 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecsbs2") == 2)
	{
		Global_4456448.f_154472.f_17 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ecsbs2");
	}
	else
	{
		Global_4456448.f_154472.f_17 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecsrng") == 2)
	{
		Global_4456448.f_154472.f_62 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ecsrng");
	}
	else
	{
		Global_4456448.f_154472.f_62 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecscp") == 5)
	{
		Global_4456448.f_154472.f_54 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "ecscp") };
	}
	else
	{
		Global_4456448.f_154472.f_54 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecscr") == 3)
	{
		Global_4456448.f_154472.f_60 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "ecscr");
	}
	else
	{
		Global_4456448.f_154472.f_60 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ecscs") == 5)
	{
		Global_4456448.f_154472.f_57 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "ecscs") };
	}
	else
	{
		Global_4456448.f_154472.f_57 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vhspx") == 3)
	{
		Global_4456448.f_154472.f_63 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "vhspx");
	}
	else
	{
		Global_4456448.f_154472.f_63 = 6f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vrbs") == 2)
	{
		Global_4456448.f_154472.f_64 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vrbs");
	}
	else
	{
		Global_4456448.f_154472.f_64 = 0;
	}
	iVar36 = 0;
	while (iVar36 <= 29)
	{
		StringCopy(&cVar37, "ecein", 8);
		StringIntConCat(&cVar37, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_154472.f_118[iVar36 /*11*/].f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_154472.f_118[iVar36 /*11*/].f_1 = -1;
		}
		StringCopy(&cVar37, "ecetp", 8);
		StringIntConCat(&cVar37, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_154472.f_118[iVar36 /*11*/] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_154472.f_118[iVar36 /*11*/] = -1;
		}
		StringCopy(&cVar37, "ecehn", 8);
		StringIntConCat(&cVar37, iVar36, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_154472.f_118[iVar36 /*11*/].f_3), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 32);
		}
		else
		{
			StringCopy(&(Global_4456448.f_154472.f_118[iVar36 /*11*/].f_3), "", 32);
		}
		iVar36++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "clbscr") == 2)
	{
		Global_4456448.f_155685 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "clbscr");
	}
	else
	{
		Global_4456448.f_155685 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "disar") == 2)
	{
		Global_4456448.f_155686 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "disar");
	}
	else
	{
		Global_4456448.f_155686 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rlopt") == 2)
	{
		Global_4456448.f_155354 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rlopt");
	}
	else
	{
		Global_4456448.f_155354 = 0;
	}
	iVar39 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "gpmn");
	Global_4456448.f_103 = iVar39;
	iVar40 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "musx");
	if (iVar40 != -1)
	{
		Global_4456448.f_139728 = iVar40;
	}
	else
	{
		Global_4456448.f_139728 = -1;
	}
	Global_4456448.f_139727 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ausc");
	Global_4456448.f_37 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "minNu");
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "newausc") == 2)
	{
		Global_4456448.f_139726 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "newausc");
	}
	else
	{
		Global_4456448.f_139726 = -1;
	}
	Global_4456448.f_36 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "num");
	if (Global_4456448.f_36 == -1)
	{
		Global_4456448.f_36 = func_84();
	}
	Global_4456448.f_38 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "time");
	Global_4456448.f_78 = { func_87(iVar0) };
	StringCopy(&cVar41, "apart", 16);
	Global_4456448.f_154944 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar41) };
	Global_4456448.f_154958 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "apwbs");
	Global_4456448.f_154947 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wrploc");
	Global_4456448.f_154962 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twrst");
	Global_4456448.f_154959 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "iplop");
	Global_4456448.f_154960 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "intop");
	Global_4456448.f_154961 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "intop2");
	Global_4456448.f_154963 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnTh");
	Global_4456448.f_154963.f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnTy");
	Global_4456448.f_154963.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnLi");
	Global_4456448.f_154963.f_29[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnBnA");
	Global_4456448.f_154963.f_29[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnBnB");
	Global_4456448.f_154963.f_29[2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnBnC");
	Global_4456448.f_154963.f_29[3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnBnD");
	Global_4456448.f_154963.f_34[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnCrA");
	Global_4456448.f_154963.f_34[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnCrB");
	Global_4456448.f_154963.f_34[2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnCrC");
	Global_4456448.f_154963.f_34[3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnCrD");
	Global_4456448.f_154963.f_3 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnRnL");
	iVar45 = 0;
	while (iVar45 <= 3)
	{
		StringCopy(&cVar46, "anf1BS", 16);
		StringIntConCat(&cVar46, iVar45, 16);
		Global_4456448.f_154963.f_4[iVar45] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar46);
		StringCopy(&cVar46, "anf2BS", 16);
		StringIntConCat(&cVar46, iVar45, 16);
		Global_4456448.f_154963.f_9[iVar45] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar46);
		StringCopy(&cVar46, "anf3BS", 16);
		StringIntConCat(&cVar46, iVar45, 16);
		Global_4456448.f_154963.f_14[iVar45] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar46);
		StringCopy(&cVar46, "anf4BS", 16);
		StringIntConCat(&cVar46, iVar45, 16);
		Global_4456448.f_154963.f_19[iVar45] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar46);
		StringCopy(&cVar46, "anfMBS", 16);
		StringIntConCat(&cVar46, iVar45, 16);
		Global_4456448.f_154963.f_24[iVar45] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar46);
		iVar45++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "arnVMN") == 2)
	{
		Global_4456448.f_155002 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "arnVMN");
	}
	else
	{
		Global_4456448.f_155002 = 5;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "copteam") == 2)
	{
		Global_4456448.f_58130 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "copteam");
	}
	else
	{
		Global_4456448.f_58130 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "pttl") == 4)
	{
		StringCopy(&(Global_4456448.f_138783), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "pttl"), 64);
	}
	else
	{
		StringCopy(&(Global_4456448.f_138783), "", 64);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "blmpmsg") == 4)
	{
		StringCopy(&(Global_4456448.f_161689), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "blmpmsg"), 64);
	}
	else
	{
		StringCopy(&(Global_4456448.f_161689), "", 64);
	}
	iVar50 = 0;
	while (iVar50 <= 25)
	{
		StringCopy(&cVar37, "dmvft", 8);
		StringIntConCat(&cVar37, iVar50, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_56216[iVar50] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_56216[iVar50] = 0;
		}
		iVar50++;
	}
	iVar39 = 0;
	while (iVar39 <= 3)
	{
		iVar51 = 0;
		while (iVar51 <= 1)
		{
			StringCopy(&cVar37, "t", 8);
			StringIntConCat(&cVar37, iVar39, 8);
			StringConCat(&cVar37, "fs", 8);
			StringIntConCat(&cVar37, iVar51, 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
			{
				StringCopy(&(Global_4456448.f_158328[iVar39 /*33*/][iVar51 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 64);
			}
			else
			{
				StringCopy(&(Global_4456448.f_158328[iVar39 /*33*/][iVar51 /*16*/]), "", 64);
			}
			iVar51++;
		}
		iVar51 = 0;
		while (iVar51 <= 25)
		{
			iVar52 = 0;
			while (iVar52 <= 2)
			{
				StringCopy(&cVar37, "t", 8);
				StringIntConCat(&cVar37, iVar39, 8);
				StringConCat(&cVar37, "vl", 8);
				StringIntConCat(&cVar37, iVar51, 8);
				if (iVar52 > 0)
				{
					StringIntConCat(&cVar37, iVar52, 8);
				}
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
				{
					Global_4456448.f_55785[iVar39 /*105*/][iVar51 /*4*/][iVar52] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
				}
				else
				{
					Global_4456448.f_55785[iVar39 /*105*/][iVar51 /*4*/][iVar52] = 0;
				}
				iVar52++;
			}
			iVar51++;
		}
		StringCopy(&cVar37, "t", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		StringConCat(&cVar37, "dvl", 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_56206[iVar39] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_56206[iVar39] = 0;
		}
		StringCopy(&cVar37, "t", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		StringConCat(&cVar37, "dv", 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_56211[iVar39] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_56211[iVar39] = 0;
		}
		iVar52 = 0;
		while (iVar52 <= 3)
		{
			iVar51 = 0;
			while (iVar51 <= 25)
			{
				iVar53 = 0;
				while (iVar53 <= 2)
				{
					StringCopy(&cVar32, "t", 16);
					StringIntConCat(&cVar32, iVar39, 16);
					StringIntConCat(&cVar32, iVar52, 16);
					StringConCat(&cVar32, "rv", 16);
					StringIntConCat(&cVar32, iVar51, 16);
					if (iVar53 > 0)
					{
						StringIntConCat(&cVar32, iVar53, 16);
					}
					if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 2)
					{
						Global_4456448.f_56243[iVar39 /*421*/][iVar52 /*105*/][iVar51 /*4*/][iVar53] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar32);
					}
					else
					{
						Global_4456448.f_56243[iVar39 /*421*/][iVar52 /*105*/][iVar51 /*4*/][iVar53] = 0;
					}
					iVar53++;
				}
				iVar51++;
			}
			StringCopy(&cVar37, "t", 8);
			StringIntConCat(&cVar37, iVar39, 8);
			StringIntConCat(&cVar37, iVar52, 8);
			StringConCat(&cVar37, "dvl", 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
			{
				Global_4456448.f_57928[iVar39 /*5*/][iVar52] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
			}
			else
			{
				Global_4456448.f_57928[iVar39 /*5*/][iVar52] = 0;
			}
			StringCopy(&cVar37, "t", 8);
			StringIntConCat(&cVar37, iVar39, 8);
			StringIntConCat(&cVar37, iVar52, 8);
			StringConCat(&cVar37, "dv", 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
			{
				Global_4456448.f_57949[iVar39 /*5*/][iVar52] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
			}
			else
			{
				Global_4456448.f_57949[iVar39 /*5*/][iVar52] = 0;
			}
			iVar52++;
		}
		iVar54 = 0;
		while (iVar54 < 26)
		{
			Global_1688208[iVar54] = -1;
			iVar55 = func_211(iVar54);
			while (iVar55 <= 31)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_55785[iVar39 /*105*/][iVar54 /*4*/][func_190(iVar55)], iVar55))
				{
					GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_55785[iVar39 /*105*/][iVar54 /*4*/][func_190(iVar55)]), iVar55);
					if (Global_4456448.f_56206[iVar39] == iVar54 && Global_4456448.f_56211[iVar39] == iVar55)
					{
						Global_4456448.f_56206[iVar39] = 0;
						Global_4456448.f_56211[iVar39] = 0;
					}
				}
				iVar56 = 0;
				while (iVar56 < 4)
				{
					if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_56243[iVar39 /*421*/][iVar56 /*105*/][iVar54 /*4*/][func_190(iVar55)], iVar55))
					{
						GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_56243[iVar39 /*421*/][iVar56 /*105*/][iVar54 /*4*/][func_190(iVar55)]), iVar55);
						if (Global_4456448.f_57928[iVar39 /*5*/][iVar56] == iVar54 && Global_4456448.f_57949[iVar39 /*5*/][iVar56] == iVar55)
						{
							Global_4456448.f_57928[iVar39 /*5*/][iVar56] = 0;
							Global_4456448.f_57949[iVar39 /*5*/][iVar56] = 0;
						}
					}
					iVar56++;
				}
				iVar55++;
			}
			iVar54++;
		}
		StringCopy(&cVar37, "dmaskg", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_139718[iVar39] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_139718[iVar39] = 0;
		}
		StringCopy(&cVar37, "ofovr", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_144815[iVar39] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_144815[iVar39] = -1;
		}
		StringCopy(&cVar37, "tmrfs", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_158263[iVar39 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_158263[iVar39 /*16*/]), "", 64);
		}
		StringCopy(&cVar37, "tmtss", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_158461[iVar39 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_158461[iVar39 /*16*/]), "", 64);
		}
		StringCopy(&cVar37, "tmrph", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_158526[iVar39 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_158526[iVar39 /*16*/]), "", 64);
		}
		StringCopy(&cVar37, "tmtsr", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_158591[iVar39] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_158591[iVar39] = 0;
		}
		StringCopy(&cVar37, "pmscid", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_155687[iVar39] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_155687[iVar39] = -1;
		}
		StringCopy(&cVar37, "qran", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_139740[iVar39] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_139740[iVar39] = -1;
		}
		StringCopy(&cVar37, "cwtit", 8);
		if (iVar39 > 0)
		{
			StringIntConCat(&cVar37, iVar39, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_161170[iVar39 /*4*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_161170[iVar39 /*4*/]), "", 16);
		}
		StringCopy(&cVar37, "cwstr", 8);
		if (iVar39 > 0)
		{
			StringIntConCat(&cVar37, iVar39, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_161187[iVar39 /*4*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 16);
		}
		else
		{
			StringCopy(&(Global_4456448.f_161187[iVar39 /*4*/]), "", 16);
		}
		StringCopy(&cVar37, "cwspre", 8);
		if (iVar39 > 0)
		{
			StringIntConCat(&cVar37, iVar39, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_161204[iVar39] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_161204[iVar39] = -1;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_161252 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twti");
		}
		else
		{
			Global_4456448.f_161252 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_161251 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twpta");
		}
		else
		{
			Global_4456448.f_161251 = 0;
		}
		Global_4456448.f_161253 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twct1");
		Global_4456448.f_161254 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twct2");
		Global_4456448.f_161255 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twct3");
		Global_4456448.f_161256 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twct4");
		Global_4456448.f_161257 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twcon");
		Global_4456448.f_161258 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twcto");
		Global_4456448.f_161259 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twcun");
		Global_4456448.f_161260 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "twcdi");
		Global_4456448.f_161261 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "svmrcvbr");
		Global_4456448.f_161262 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvmarc");
		Global_4456448.f_161680 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvmsbet");
		Global_4456448.f_161681 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvmsber");
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "wvmdsr") == 2)
		{
			Global_4456448.f_161688 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "wvmdsr");
		}
		else
		{
			Global_4456448.f_161688 = -1;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "conbons") == 3)
		{
			Global_4456448.f_162135 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "conbons");
		}
		else
		{
			Global_4456448.f_162135 = 0f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "conspd") == 3)
		{
			Global_4456448.f_162134 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "conspd");
		}
		else
		{
			Global_4456448.f_162134 = 1f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "confot") == 2)
		{
			Global_4456448.f_162136 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "confot");
		}
		else
		{
			Global_4456448.f_162136 = 5000;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "confont") == 2)
		{
			Global_4456448.f_162137 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "confont");
		}
		else
		{
			Global_4456448.f_162137 = 1000;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "consd") == 2)
		{
			Global_4456448.f_162138 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "consd");
		}
		else
		{
			Global_4456448.f_162138 = 1000;
		}
		iVar2 = 0;
		while (iVar2 <= 3)
		{
			StringCopy(&cVar37, "kspt", 8);
			StringIntConCat(&cVar37, iVar2, 8);
			Global_4456448.f_161317[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
			StringCopy(&cVar37, "kspr", 8);
			StringIntConCat(&cVar37, iVar2, 8);
			Global_4456448.f_161322[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
			iVar2++;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_162144 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hrdnt");
		}
		else
		{
			Global_4456448.f_162144 = 60000;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdtick") == 3)
		{
			Global_4456448.f_162145 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sdtick");
		}
		else
		{
			Global_4456448.f_162145 = 0.5f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sddmg") == 3)
		{
			Global_4456448.f_162147 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sddmg");
		}
		else
		{
			Global_4456448.f_162147 = 1f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdstp") == 3)
		{
			Global_4456448.f_162148 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sdstp");
		}
		else
		{
			Global_4456448.f_162148 = 50f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdmxp") == 3)
		{
			Global_4456448.f_162149 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sdmxp");
		}
		else
		{
			Global_4456448.f_162149 = 100f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sddri") == 3)
		{
			Global_4456448.f_162146 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sddri");
		}
		else
		{
			Global_4456448.f_162146 = 1.5f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdrsc") == 3)
		{
			Global_4456448.f_162150 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sdrsc");
		}
		else
		{
			Global_4456448.f_162150 = 25f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdidd") == 3)
		{
			Global_4456448.f_162151 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sdidd");
		}
		else
		{
			Global_4456448.f_162151 = 1f;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMt1r1") == 2)
		{
			Global_4456448.f_162152 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMt1r1");
		}
		else
		{
			Global_4456448.f_162152 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMt2r1") == 2)
		{
			Global_4456448.f_162153 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMt2r1");
		}
		else
		{
			Global_4456448.f_162153 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMt1r2") == 2)
		{
			Global_4456448.f_162154 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMt1r2");
		}
		else
		{
			Global_4456448.f_162154 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMt2r2") == 2)
		{
			Global_4456448.f_162155 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMt2r2");
		}
		else
		{
			Global_4456448.f_162155 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMsttm") == 2)
		{
			Global_4456448.f_162156 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMsttm");
		}
		else
		{
			Global_4456448.f_162156 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "GMswrt") == 2)
		{
			Global_4456448.f_162157 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "GMswrt");
		}
		else
		{
			Global_4456448.f_162157 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tgtmcd") == 2)
		{
			Global_4456448.f_162441 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tgtmcd");
		}
		else
		{
			Global_4456448.f_162441 = 30;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mjtr") == 2)
		{
			Global_4456448.f_162440 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mjtr");
		}
		else
		{
			Global_4456448.f_162440 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_161268 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "pptl");
		}
		else
		{
			Global_4456448.f_161268 = 5;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_161267 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ptltl");
		}
		else
		{
			Global_4456448.f_161267 = 0;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_161338 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ptlem");
		}
		else
		{
			Global_4456448.f_161338 = -1;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_161263 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "trrt");
		}
		else
		{
			Global_4456448.f_161263 = 3;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_161339 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tptb");
		}
		else
		{
			Global_4456448.f_161339 = 5000;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_161340 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tprt");
		}
		else
		{
			Global_4456448.f_161340 = 2500;
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_161341 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ldpucd");
		}
		else
		{
			Global_4456448.f_161341 = 3000;
		}
		StringCopy(&cVar37, "rtveft", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_161237[iVar39] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_161237[iVar39] = 0;
		}
		StringCopy(&cVar37, "mrtr", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 3)
		{
			Global_4456448.f_162192[iVar39] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_162192[iVar39] = 0f;
		}
		StringCopy(&cVar37, "frtr", 8);
		StringIntConCat(&cVar37, iVar39, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 3)
		{
			Global_4456448.f_162197[iVar39] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_162197[iVar39] = 0f;
		}
		iVar39++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ctmrs") == 4)
	{
		Global_4456448.f_138301 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "nqrc");
	}
	else
	{
		Global_4456448.f_138301 = 0;
	}
	iVar57 = 0;
	while (iVar57 <= 15)
	{
		StringCopy(&cVar37, "qrcps", 8);
		StringIntConCat(&cVar37, iVar57, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 5)
		{
			Global_4456448.f_138302[iVar57 /*8*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar37) };
		}
		else
		{
			Global_4456448.f_138302[iVar57 /*8*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar37, "qrchd", 8);
		StringIntConCat(&cVar37, iVar57, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 3)
		{
			Global_4456448.f_138302[iVar57 /*8*/].f_3 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_138302[iVar57 /*8*/].f_3 = 0f;
		}
		StringCopy(&cVar37, "qrcbs", 8);
		StringIntConCat(&cVar37, iVar57, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_138302[iVar57 /*8*/].f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_138302[iVar57 /*8*/].f_4 = 0;
		}
		StringCopy(&cVar37, "qrctm", 8);
		StringIntConCat(&cVar37, iVar57, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_138302[iVar57 /*8*/].f_5 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_138302[iVar57 /*8*/].f_5 = 0;
		}
		StringCopy(&cVar37, "qrcck", 8);
		StringIntConCat(&cVar37, iVar57, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_138302[iVar57 /*8*/].f_6 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_138302[iVar57 /*8*/].f_6 = 0;
		}
		StringCopy(&cVar37, "qrcsg", 8);
		StringIntConCat(&cVar37, iVar57, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_138302[iVar57 /*8*/].f_7 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_138302[iVar57 /*8*/].f_7 = 0;
		}
		iVar57++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ctmrs") == 4)
	{
		StringCopy(&(Global_4456448.f_138799), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "ctmrs"), 24);
	}
	else
	{
		StringCopy(&(Global_4456448.f_138799), "", 24);
	}
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar37, "avss", 8);
		StringIntConCat(&cVar37, iVar2, 8);
		Global_4456448.f_144745[iVar2 /*3*/][func_190(iVar2)] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		iVar3 = func_269(iVar2);
		while (iVar3 <= 31)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_144745[iVar2 /*3*/][func_190(iVar2)]), func_189(iVar3));
			iVar3++;
		}
		iVar2++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vsclout") == 2)
	{
		Global_4456448.f_144764[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vsclout");
	}
	else
	{
		Global_4456448.f_144764[0] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vsthout") == 2)
	{
		Global_4456448.f_144764[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vsthout");
	}
	else
	{
		Global_4456448.f_144764[1] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vshwout") == 2)
	{
		Global_4456448.f_144764[3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vshwout");
	}
	else
	{
		Global_4456448.f_144764[3] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vsenout") == 2)
	{
		Global_4456448.f_144764[2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vsenout");
	}
	else
	{
		Global_4456448.f_144764[2] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vstgout") == 2)
	{
		Global_4456448.f_144764[4] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vstgout");
	}
	else
	{
		Global_4456448.f_144764[4] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vsbsout") == 2)
	{
		Global_4456448.f_144764[5] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vsbsout");
	}
	else
	{
		Global_4456448.f_144764[5] = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "alfutvs") == 2)
	{
		Global_4456448.f_144771 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "alfutvs");
	}
	else
	{
		Global_4456448.f_144771 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vsdfstc") == 2)
	{
		Global_4456448.f_144772 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vsdfstc");
	}
	else if (((!GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 23) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 24)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 31)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_14, 8))
	{
		Global_4456448.f_144772 = -1;
	}
	else if (((!GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 23) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 24)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 31)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_14, 8))
	{
		Global_4456448.f_144772 = 0;
	}
	else if (((GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 23) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 24)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 31)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_14, 8))
	{
		Global_4456448.f_144772 = 1;
	}
	else if (((!GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 23) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 24)) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 31)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_14, 8))
	{
		Global_4456448.f_144772 = 2;
	}
	else if (((!GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 23) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_12, 24)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_13, 31)) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_14, 8))
	{
		Global_4456448.f_144772 = 3;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "dspteam") == 2)
	{
		Global_4456448.f_155712 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "dspteam");
	}
	else
	{
		Global_4456448.f_155712 = -1;
	}
	if (!func_110() && !func_268())
	{
		if (NETWORK::_0xF53E48461B71EECB(iParam1))
		{
			StringCopy(&(Global_4456448.f_138481), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "nm"), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_138481), func_267(), 64);
		}
	}
	else
	{
		StringCopy(&(Global_4456448.f_138481), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "nm"), 64);
	}
	Global_4456448.f_139771 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mgrk");
	Global_4456448.f_139772 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mght");
	StringCopy(&(Global_4456448.f_138503[0 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_138503[1 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_138503[2 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_138503[3 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_138503[4 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_138503[5 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_138503[6 /*16*/]), "", 64);
	StringCopy(&(Global_4456448.f_138503[7 /*16*/]), "", 64);
	uVar58 = DATAFILE::_OBJECT_VALUE_GET_ARRAY(iVar0, "dec");
	iVar59 = UI::_GET_LENGTH_OF_STRING(DATAFILE::_ARRAY_VALUE_GET_STRING(uVar58, 0));
	if (iParam1 == -1 || NETWORK::_0xF53E48461B71EECB(iParam1))
	{
		if (iVar59 <= 63)
		{
			iVar2 = 0;
			while (iVar2 <= (DATAFILE::_ARRAY_VALUE_GET_SIZE(uVar58) - 1))
			{
				StringCopy(&(Global_4456448.f_138503[iVar2 /*16*/]), DATAFILE::_ARRAY_VALUE_GET_STRING(uVar58, iVar2), 64);
				iVar2++;
			}
		}
		else
		{
			uVar61 = DATAFILE::_ARRAY_VALUE_GET_STRING(uVar58, 0);
			iVar2 = 0;
			while (iVar2 <= 7)
			{
				if (iVar59 > (63 * iVar2))
				{
					if (iVar59 > (63 * iVar2) + 63)
					{
						iVar60 = (63 * iVar2) + 63;
					}
					else
					{
						iVar60 = iVar59;
					}
					StringCopy(&(Global_4456448.f_138503[iVar2 /*16*/]), UI::_GET_TEXT_SUBSTRING_SLICE(uVar61, (63 * iVar2), iVar60), 64);
				}
				iVar2++;
			}
		}
	}
	else
	{
		StringCopy(&(Global_4456448.f_138503[0 /*16*/]), func_267(), 64);
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ricb") == 2)
	{
		Global_4456448.f_158617 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ricb");
	}
	else
	{
		Global_4456448.f_158617 = 0;
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ripvh") == 2)
	{
		Global_4456448.f_158618 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ripvh");
	}
	else
	{
		Global_4456448.f_158618 = 0;
	}
	Global_4456448.f_41 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tnum");
	Global_4456448.f_42 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mtnum");
	if (!func_266())
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 14))
		{
			Global_4456448.f_40 = Global_4456448.f_41;
		}
		else if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "dtn") == 2)
		{
			Global_4456448.f_40 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "dtn");
		}
		else
		{
			Global_4456448.f_40 = Global_4456448.f_41;
		}
	}
	else
	{
		Global_4456448.f_40 = Global_4456448.f_41;
	}
	if (Global_4456448 == 0)
	{
		if (Global_2448756.f_557.f_11 != 0 && Global_4456448.f_41 != Global_2448756.f_557.f_11)
		{
			if (!Global_262145.f_4705 && func_62(Global_4456448.f_161209))
			{
				iVar62 = func_265();
				if (Global_2448756.f_557.f_11 < iVar62)
				{
					Global_2448756.f_557.f_11 = iVar62;
					if (PLAYER::PLAYER_ID() != -1)
					{
						Global_1625319[PLAYER::PLAYER_ID() /*38*/] = Global_2448756.f_557.f_11;
					}
				}
			}
			Global_4456448.f_41 = Global_2448756.f_557.f_11;
			Global_4456448.f_40 = Global_4456448.f_41;
		}
		else if ((func_262() || func_260()) && func_259())
		{
			uVar63 = func_265();
			fVar64 = (SYSTEM::TO_FLOAT(uVar63) / SYSTEM::TO_FLOAT(Global_4456448.f_36));
			iVar65 = 0;
			if (Global_4456448.f_41 == 3)
			{
				if (fVar64 <= 0.66f)
				{
					Global_4456448.f_41 = 2;
					iVar65 = 1;
				}
			}
			else if (Global_4456448.f_41 == 4)
			{
				if (fVar64 <= 0.5f)
				{
					Global_4456448.f_41 = 2;
					iVar65 = 1;
				}
				else if (fVar64 <= 0.75f)
				{
					Global_4456448.f_41 = 3;
					iVar65 = 1;
				}
			}
			if (iVar65 && Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_99.f_28 >= Global_4456448.f_41)
			{
				Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_99.f_28 = func_257(Global_4456448.f_41);
			}
			if (Global_4456448.f_40 > Global_4456448.f_41)
			{
				Global_4456448.f_40 = Global_4456448.f_41;
			}
		}
	}
	if (Global_4456448 == 1)
	{
		if (Global_4456448.f_41 > 4)
		{
			Global_4456448.f_41 = 4;
		}
	}
	else if (Global_4456448.f_41 > 4)
	{
		Global_4456448.f_41 = 4;
	}
	Global_4456448.f_127495 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "atmdm");
	Global_4456448.f_55 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "trel");
	Global_4456448.f_162238 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tpas");
	Global_4456448.f_139736 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ltm");
	Global_4456448.f_84 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "vcpr") };
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hstat") == 2)
	{
		Global_4456448.f_139706 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hstat");
	}
	else
	{
		Global_4456448.f_139706 = 0;
	}
	iVar66 = 0;
	while (iVar66 <= 19)
	{
		StringCopy(&cVar37, "rzpos", 8);
		StringIntConCat(&cVar37, iVar66, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 5)
		{
			Global_4456448.f_91794[iVar66 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar37) };
		}
		else
		{
			Global_4456448.f_91794[iVar66 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar37, "rzzon", 8);
		StringIntConCat(&cVar37, iVar66, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_91855[iVar66] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_91855[iVar66] = 0;
		}
		StringCopy(&cVar37, "rzobj", 8);
		StringIntConCat(&cVar37, iVar66, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_91876[iVar66] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_91876[iVar66] = -1;
		}
		StringCopy(&cVar37, "rzacc", 8);
		StringIntConCat(&cVar37, iVar66, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 3)
		{
			Global_4456448.f_91897[iVar66] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_91897[iVar66] = 100f;
		}
		StringCopy(&cVar37, "rzcav", 8);
		StringIntConCat(&cVar37, iVar66, 8);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_91919[iVar66] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_91919[iVar66] = -1;
		}
		iVar66++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rzhmb") == 2)
	{
		Global_4456448.f_91918 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rzhmb");
	}
	else
	{
		Global_4456448.f_91918 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "numzr") == 2)
	{
		Global_4456448.f_91940 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "numzr");
	}
	else
	{
		Global_4456448.f_91940 = 0;
	}
	uVar67 = DATAFILE::_OBJECT_VALUE_GET_OBJECT(uParam0, "ene");
	iVar68 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(uVar67, "no");
	iVar2 = 0;
	while (iVar2 < 6)
	{
		StringCopy(&cVar37, "hpped", 8);
		if (iVar2 > 0)
		{
			StringIntConCat(&cVar37, iVar2 + 1, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2 && iVar68 > DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37))
		{
			Global_4456448.f_127365[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_127365[iVar2] = -1;
		}
		iVar2++;
	}
	if ((iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rsgmx") == 2) && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "rsgnu") == 2)
	{
		Global_4456448.f_127372 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rsgmx");
		Global_4456448.f_127373 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rsgnu");
		Global_4456448.f_127374 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "rsgbs");
		if (Global_4456448.f_127372 > 0 && Global_4456448.f_127373 != 0)
		{
			iVar2 = 0;
			while (iVar2 <= (Global_4456448.f_127372 - 1))
			{
				if (iVar2 < 10)
				{
					StringCopy(&cVar37, "rsg", 8);
					StringIntConCat(&cVar37, iVar2, 8);
					MemCopy(&cVar69, {cVar37}, 4);
					StringConCat(&cVar69, "mx", 16);
					MemCopy(&cVar73, {cVar37}, 4);
					StringConCat(&cVar73, "nu", 16);
					if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar69) == 2 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar73) == 2)
					{
						Global_4456448.f_127375[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar69);
						Global_4456448.f_127386[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar73);
						MemCopy(&cVar69, {cVar37}, 4);
						StringConCat(&cVar69, "bs", 16);
						Global_4456448.f_127397[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar69);
					}
				}
				iVar2++;
			}
		}
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tshd") == 2)
	{
		Global_4456448.f_139759 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tshd");
	}
	else
	{
		Global_4456448.f_139759 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mrd") == 2)
	{
		Global_4456448.f_139760 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mrd");
	}
	else
	{
		Global_4456448.f_139760 = 15;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "etim") == 3)
	{
		Global_4456448.f_139762 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "etim");
	}
	else
	{
		Global_4456448.f_139762 = 2.5f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "evel") == 3)
	{
		Global_4456448.f_139763 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "evel");
	}
	else
	{
		Global_4456448.f_139763 = 8f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "etimb") == 3)
	{
		Global_4456448.f_139764 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "etimb");
	}
	else
	{
		Global_4456448.f_139764 = 2.5f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "evelb") == 3)
	{
		Global_4456448.f_139765 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "evelb");
	}
	else
	{
		Global_4456448.f_139765 = 8f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "srct") == 2)
	{
		Global_4456448.f_139761 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "srct");
	}
	else
	{
		Global_4456448.f_139761 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tptbd") == 2)
	{
		Global_4456448.f_139766 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tptbd");
	}
	else
	{
		Global_4456448.f_139766 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tptba") == 2)
	{
		Global_4456448.f_139767 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tptba");
	}
	else
	{
		Global_4456448.f_139767 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atspos") == 5)
	{
		Global_4456448.f_157781 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "atspos") };
	}
	else
	{
		Global_4456448.f_157781 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atscmp") == 5)
	{
		Global_4456448.f_157775 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "atscmp") };
	}
	else
	{
		Global_4456448.f_157775 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atscmr") == 5)
	{
		Global_4456448.f_157778 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "atscmr") };
	}
	else
	{
		Global_4456448.f_157778 = { 0f, 0f, 0f };
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atsfov") == 3)
	{
		Global_4456448.f_157784 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "atsfov");
	}
	else
	{
		Global_4456448.f_157784 = 45f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atshed") == 3)
	{
		Global_4456448.f_157785 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "atshed");
	}
	else
	{
		Global_4456448.f_157785 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "atsveh") == 2)
	{
		Global_4456448.f_157786 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "atsveh");
	}
	else
	{
		Global_4456448.f_157786 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hpdt1") == 2)
	{
		Global_4456448.f_139707[0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hpdt1");
	}
	else
	{
		Global_4456448.f_139707[0] = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hpdt2") == 2)
	{
		Global_4456448.f_139707[1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hpdt2");
	}
	else
	{
		Global_4456448.f_139707[1] = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vdt") == 2)
	{
		Global_4456448.f_139711 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vdt");
	}
	else
	{
		Global_4456448.f_139711 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrbs") == 2)
	{
		Global_4456448.f_155692 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrbs");
	}
	else
	{
		Global_4456448.f_155692 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrtt") == 2)
	{
		Global_4456448.f_155693 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrtt");
	}
	else
	{
		Global_4456448.f_155693 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrttm") == 2)
	{
		Global_4456448.f_155694 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrttm");
	}
	else
	{
		Global_4456448.f_155694 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrtrl") == 2)
	{
		Global_4456448.f_155695 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrtrl");
	}
	else
	{
		Global_4456448.f_155695 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrpdt") == 2)
	{
		Global_4456448.f_155697 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrpdt");
	}
	else
	{
		Global_4456448.f_155697 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrvdt") == 2)
	{
		Global_4456448.f_155699 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrvdt");
	}
	else
	{
		Global_4456448.f_155699 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrkt") == 2)
	{
		Global_4456448.f_155701 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrkt");
	}
	else
	{
		Global_4456448.f_155701 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbrph") == 2)
	{
		Global_4456448.f_155704 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbrph");
	}
	else
	{
		Global_4456448.f_155704 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hecam") == 2)
	{
		Global_4456448.f_155707 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hecam");
	}
	else
	{
		Global_4456448.f_155707 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbhs") == 2)
	{
		Global_4456448.f_155705 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbhs");
	}
	else
	{
		Global_4456448.f_155705 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hbht") == 2)
	{
		Global_4456448.f_155706 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hbht");
	}
	else
	{
		Global_4456448.f_155706 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdrvm") == 2)
	{
		Global_4456448.f_158619 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "sdrvm");
	}
	else
	{
		Global_4456448.f_158619 = 10000;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vstm") == 2)
	{
		Global_4456448.f_158620 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vstm");
	}
	else
	{
		Global_4456448.f_158620 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "inumbnc") == 2)
	{
		Global_4456448.f_158634 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "inumbnc");
	}
	else
	{
		Global_4456448.f_158634 = 10000;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mdmgm") == 3)
	{
		Global_4456448.f_158621 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "mdmgm");
	}
	else
	{
		Global_4456448.f_158621 = 1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "itsms") == 2)
	{
		Global_4456448.f_161302 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "itsms");
	}
	else
	{
		Global_4456448.f_161302 = 1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "igls") == 2)
	{
		Global_4456448.f_161303 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "igls");
	}
	else
	{
		Global_4456448.f_161303 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "twdas") == 3)
	{
		Global_4456448.f_158622 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "twdas");
	}
	else
	{
		Global_4456448.f_158622 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vdt") == 2)
	{
		Global_4456448.f_161211 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "sphft");
	}
	else
	{
		Global_4456448.f_161211 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sdsr") == 2)
	{
		Global_4456448.f_161169 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "sdsr");
	}
	else
	{
		Global_4456448.f_161169 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cmxdftms") == 2)
	{
		Global_4456448.f_161234 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cmxdftms");
	}
	else
	{
		Global_4456448.f_161234 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "crlaa") == 2)
	{
		Global_4456448.f_161236 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "crlaa");
	}
	else
	{
		Global_4456448.f_161236 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cmxtliv") == 2)
	{
		Global_4456448.f_161248 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cmxtliv");
	}
	else
	{
		Global_4456448.f_161248 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cmxdctl") == 2)
	{
		Global_4456448.f_161249 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cmxdctl");
	}
	else
	{
		Global_4456448.f_161249 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cmxmctl") == 2)
	{
		Global_4456448.f_161250 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "cmxmctl");
	}
	else
	{
		Global_4456448.f_161250 = 0;
	}
	if ((((iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hmmtt") == 2) && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hmmts") == 2) && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hmmte") == 2) && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "hmmth") == 2)
	{
		Global_4456448.f_155708 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hmmtt");
		Global_4456448.f_155709 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hmmts");
		Global_4456448.f_155710 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hmmte");
		Global_4456448.f_155711 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "hmmth");
	}
	else
	{
		Global_4456448.f_155708 = 0;
		Global_4456448.f_155709 = 0;
		Global_4456448.f_155710 = 0;
		Global_4456448.f_155711 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tstrm") == 2)
	{
		Global_4456448.f_157722 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "tstrm");
	}
	else
	{
		Global_4456448.f_157722 = 0;
	}
	iVar2 = 0;
	while (iVar2 <= 35)
	{
		StringCopy(&cVar37, "dtspk", 8);
		StringIntConCat(&cVar37, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_144349[iVar2 /*8*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 32);
		}
		else
		{
			StringCopy(&(Global_4456448.f_144349[iVar2 /*8*/]), "", 32);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		StringCopy(&cVar37, "cspnm", 8);
		StringIntConCat(&cVar37, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_127102[iVar2 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_127102[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar37, "csvnm", 8);
		StringIntConCat(&cVar37, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_127183[iVar2 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_127183[iVar2 /*16*/]), "", 64);
		}
		StringCopy(&cVar37, "csonm", 8);
		StringIntConCat(&cVar37, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_127264[iVar2 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_127264[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 4)
	{
		StringCopy(&cVar37, "otxsgo", 8);
		StringIntConCat(&cVar37, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_127408[iVar2 /*16*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_127408[iVar2 /*16*/]), "", 64);
		}
		iVar2++;
	}
	iVar77 = 0;
	while (iVar77 <= 3)
	{
		iVar3 = 0;
		while (iVar3 <= 12)
		{
			StringCopy(&cVar37, "ofit", 8);
			StringIntConCat(&cVar37, iVar3 + 1, 8);
			StringIntConCat(&cVar37, iVar77, 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
			{
				Global_4456448.f_144683[iVar77 /*14*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
			}
			iVar3++;
		}
		StringCopy(&cVar37, "ofs1", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_144788[iVar77 /*3*/][0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_144788[iVar77 /*3*/][0] = 0;
		}
		StringCopy(&cVar37, "ofs2", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_144788[iVar77 /*3*/][1] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_144788[iVar77 /*3*/][1] = 0;
		}
		StringCopy(&cVar37, "mask1", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_144806[iVar77 /*2*/][0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_144806[iVar77 /*2*/][0] = 0;
		}
		StringCopy(&cVar37, "gear", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_144773[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_144773[iVar77] = 0;
		}
		StringCopy(&cVar37, "geard", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_144778[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_144778[iVar77] = -1;
		}
		StringCopy(&cVar37, "apwfr", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_154948[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_154948[iVar77] = -1;
		}
		StringCopy(&cVar37, "apwlr", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_154953[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_154953[iVar77] = -1;
		}
		StringCopy(&cVar37, "tcmin", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2 && !func_197())
		{
			Global_4456448.f_155328[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_155328[iVar77] = 0;
		}
		iVar3 = 0;
		while (iVar3 <= 3)
		{
			StringCopy(&cVar37, "trcmn", 8);
			StringIntConCat(&cVar37, iVar3, 8);
			StringIntConCat(&cVar37, iVar77, 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2 && !func_197())
			{
				Global_4456448.f_155333[iVar77 /*5*/][iVar3] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
			}
			else
			{
				Global_4456448.f_155333[iVar77 /*5*/][iVar3] = 0;
			}
			iVar3++;
		}
		StringCopy(&cVar37, "tmrsp", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_155355[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_155355[iVar77] = 0;
		}
		StringCopy(&cVar37, "vifcit", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_162139[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_162139[iVar77] = -1;
		}
		StringCopy(&cVar37, "tvpm", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_58124[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_58124[iVar77] = -1;
		}
		StringCopy(&cVar37, "tvnc", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_58103[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_58103[iVar77] = -1;
		}
		StringCopy(&cVar37, "tmrees", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 3)
		{
			Global_4456448.f_155360[iVar77] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_155360[iVar77] = 1f;
		}
		StringCopy(&cVar37, "tmvhp", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_58083[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_58083[iVar77] = 100;
		}
		StringCopy(&cVar37, "tmvds", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 3)
		{
			Global_4456448.f_58088[iVar77] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_58088[iVar77] = 1f;
		}
		StringCopy(&cVar37, "tblty", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_58118[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_58118[iVar77] = 0;
		}
		StringCopy(&cVar37, "pmpos", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 5)
		{
			Global_4456448.f_137580[iVar77 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar37) };
		}
		else
		{
			Global_4456448.f_137580[iVar77 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar37, "pmpoi", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 5)
		{
			Global_4456448.f_137593[iVar77 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar37) };
		}
		else
		{
			Global_4456448.f_137593[iVar77 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar37, "pmrad", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 3)
		{
			Global_4456448.f_137606[iVar77] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_137606[iVar77] = 0f;
		}
		StringCopy(&cVar37, "dfofit", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_144740[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_144740[iVar77] = -1;
		}
		StringCopy(&cVar37, "dfstyl", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_144801[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_144801[iVar77] = -1;
		}
		StringCopy(&cVar37, "clrovr", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_133551[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_133551[iVar77] = -1;
		}
		StringCopy(&cVar37, "tswpal", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_79176[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_79176[iVar77] = -1;
		}
		StringCopy(&cVar37, "1cmrt", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_127345[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_127345[iVar77] = 0;
		}
		StringCopy(&cVar37, "2cmrt", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_127350[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_127350[iVar77] = 0;
		}
		StringCopy(&cVar37, "3cmrt", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_127355[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_127355[iVar77] = 0;
		}
		StringCopy(&cVar37, "4cmrt", 8);
		StringIntConCat(&cVar37, iVar77, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_127360[iVar77] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_127360[iVar77] = 0;
		}
		iVar78 = 0;
		while (iVar78 <= 3)
		{
			StringCopy(&cVar32, "trstp", 16);
			StringIntConCat(&cVar32, iVar77, 16);
			if (iVar78 > 0)
			{
				StringIntConCat(&cVar32, iVar78, 16);
			}
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 5)
			{
				Global_4456448.f_137705[iVar77 /*53*/][iVar78 /*13*/][0 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar32) };
			}
			else
			{
				Global_4456448.f_137705[iVar77 /*53*/][iVar78 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar32, "trstf", 16);
			StringIntConCat(&cVar32, iVar77, 16);
			if (iVar78 > 0)
			{
				StringIntConCat(&cVar32, iVar78, 16);
			}
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 5)
			{
				Global_4456448.f_138003[iVar77 /*53*/][iVar78 /*13*/][0 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar32) };
			}
			else
			{
				Global_4456448.f_138003[iVar77 /*53*/][iVar78 /*13*/][0 /*3*/] = { 0f, 0f, 0f };
			}
			StringCopy(&cVar32, "trsth", 16);
			StringIntConCat(&cVar32, iVar77, 16);
			if (iVar78 > 0)
			{
				StringIntConCat(&cVar32, iVar78, 16);
			}
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 3)
			{
				Global_4456448.f_137918[iVar77 /*21*/][iVar78 /*5*/][0] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar32);
			}
			else
			{
				Global_4456448.f_137918[iVar77 /*21*/][iVar78 /*5*/][0] = 0f;
			}
			iVar79 = 0;
			while (iVar79 <= 3)
			{
				StringCopy(&cVar32, "trstp", 16);
				StringIntConCat(&cVar32, iVar77, 16);
				StringIntConCat(&cVar32, iVar78, 16);
				StringConCat(&cVar32, "n", 16);
				StringIntConCat(&cVar32, iVar79, 16);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 5)
				{
					Global_4456448.f_137705[iVar77 /*53*/][iVar78 /*13*/][iVar79 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar32) };
				}
				else
				{
					Global_4456448.f_137705[iVar77 /*53*/][iVar78 /*13*/][iVar79 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar32, "trsth", 16);
				StringIntConCat(&cVar32, iVar77, 16);
				StringIntConCat(&cVar32, iVar78, 16);
				StringConCat(&cVar32, "n", 16);
				StringIntConCat(&cVar32, iVar79, 16);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 3)
				{
					Global_4456448.f_137918[iVar77 /*21*/][iVar78 /*5*/][iVar79] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar32);
				}
				else
				{
					Global_4456448.f_137918[iVar77 /*21*/][iVar78 /*5*/][iVar79] = 0f;
				}
				iVar79++;
			}
			StringCopy(&cVar37, "trsrl", 8);
			StringIntConCat(&cVar37, iVar77, 8);
			StringIntConCat(&cVar37, iVar78, 8);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
			{
				Global_4456448.f_158596[iVar77 /*5*/][iVar78] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
			}
			else
			{
				Global_4456448.f_158596[iVar77 /*5*/][iVar78] = 0;
			}
			iVar78++;
		}
		iVar80 = 0;
		while (iVar80 <= 3)
		{
			StringCopy(&cVar32, "iltt", 16);
			StringIntConCat(&cVar32, iVar77, 16);
			StringIntConCat(&cVar32, iVar80, 16);
			if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 2)
			{
				Global_4456448.f_161213[iVar77 /*5*/][iVar80] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar32);
			}
			else
			{
				Global_4456448.f_161213[iVar77 /*5*/][iVar80] = 0;
			}
			iVar80++;
		}
		iVar81 = 0;
		while (iVar81 <= 4)
		{
			iVar82 = 0;
			while (iVar82 <= 3)
			{
				StringCopy(&cVar32, "cpv", 16);
				StringIntConCat(&cVar32, iVar77, 16);
				StringConCat(&cVar32, "i", 16);
				StringIntConCat(&cVar32, iVar81, 16);
				StringConCat(&cVar32, "s", 16);
				StringIntConCat(&cVar32, iVar82, 16);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 5)
				{
					Global_4456448.f_157788[iVar77 /*66*/][iVar81 /*13*/][iVar82 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar32) };
				}
				else
				{
					Global_4456448.f_157788[iVar77 /*66*/][iVar81 /*13*/][iVar82 /*3*/] = { 0f, 0f, 0f };
				}
				StringCopy(&cVar32, "cph", 16);
				StringIntConCat(&cVar32, iVar77, 16);
				StringConCat(&cVar32, "i", 16);
				StringIntConCat(&cVar32, iVar81, 16);
				StringConCat(&cVar32, "s", 16);
				StringIntConCat(&cVar32, iVar82, 16);
				if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 3)
				{
					Global_4456448.f_158053[iVar77 /*26*/][iVar81 /*5*/][iVar82] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar32);
				}
				else
				{
					Global_4456448.f_158053[iVar77 /*26*/][iVar81 /*5*/][iVar82] = -1f;
				}
				iVar82++;
			}
			iVar81++;
		}
		StringCopy(&cVar37, "tscpos", 8);
		if (iVar77 > 0)
		{
			StringIntConCat(&cVar37, iVar77, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 5)
		{
			Global_4456448.f_157726[iVar77 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar37) };
		}
		else
		{
			Global_4456448.f_157726[iVar77 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar37, "tscrot", 8);
		if (iVar77 > 0)
		{
			StringIntConCat(&cVar37, iVar77, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 5)
		{
			Global_4456448.f_157739[iVar77 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar37) };
		}
		else
		{
			Global_4456448.f_157739[iVar77 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar37, "tspos", 8);
		if (iVar77 > 0)
		{
			StringIntConCat(&cVar37, iVar77, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 5)
		{
			Global_4456448.f_157752[iVar77 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar37) };
		}
		else
		{
			Global_4456448.f_157752[iVar77 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar37, "tscfov", 8);
		if (iVar77 > 0)
		{
			StringIntConCat(&cVar37, iVar77, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 3)
		{
			Global_4456448.f_157765[iVar77] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_157765[iVar77] = 45f;
		}
		StringCopy(&cVar37, "tshead", 8);
		if (iVar77 > 0)
		{
			StringIntConCat(&cVar37, iVar77, 8);
		}
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 3)
		{
			Global_4456448.f_157770[iVar77] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_157770[iVar77] = 0f;
		}
		iVar77++;
	}
	iVar2 = 0;
	while (iVar2 <= 17)
	{
		StringCopy(&cVar37, "pnid", 8);
		StringIntConCat(&cVar37, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 4)
		{
			StringCopy(&(Global_4456448.f_155003[iVar2 /*18*/]), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, &cVar37), 64);
		}
		else
		{
			StringCopy(&(Global_4456448.f_155003[iVar2 /*18*/]), "", 64);
		}
		StringCopy(&cVar37, "pnlv", 8);
		StringIntConCat(&cVar37, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2)
		{
			Global_4456448.f_155003[iVar2 /*18*/].f_16 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_155003[iVar2 /*18*/].f_16 = 0;
		}
		StringCopy(&cVar37, "pnvr", 8);
		StringIntConCat(&cVar37, iVar2, 8);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar37) == 2 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_4456448.f_155003[iVar2 /*18*/])))
		{
			Global_4456448.f_155003[iVar2 /*18*/].f_17 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar37);
		}
		else
		{
			Global_4456448.f_155003[iVar2 /*18*/].f_17 = -1;
		}
		iVar2++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cposr") == 3)
	{
		Global_4456448.f_158635 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "cposr");
	}
	else
	{
		Global_4456448.f_158635 = 60f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cporv") == 3)
	{
		Global_4456448.f_158638 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "cporv");
	}
	else
	{
		Global_4456448.f_158638 = -1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmbbp") == 2)
	{
		Global_4456448.f_158624 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "bmbbp");
	}
	else
	{
		Global_4456448.f_158624 = 2;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmber") == 2)
	{
		Global_4456448.f_158625 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "bmber");
	}
	else
	{
		Global_4456448.f_158625 = 2;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmbet") == 2)
	{
		Global_4456448.f_158626 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "bmbet");
	}
	else
	{
		Global_4456448.f_158626 = 3000;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmbsi") == 2)
	{
		Global_4456448.f_158627 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "bmbsi");
	}
	else
	{
		Global_4456448.f_158627 = 150;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmbdi") == 3)
	{
		Global_4456448.f_158628 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "bmbdi");
	}
	else
	{
		Global_4456448.f_158628 = 3f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bmbio") == 3)
	{
		Global_4456448.f_158629 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "bmbio");
	}
	else
	{
		Global_4456448.f_158629 = 1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "fvjhdt") == 2)
	{
		Global_4456448.f_158630 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "fvjhdt");
	}
	else
	{
		Global_4456448.f_158630 = 25;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "fvjhmd") == 2)
	{
		Global_4456448.f_158631 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "fvjhmd");
	}
	else
	{
		Global_4456448.f_158631 = 5;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "fvjfvd") == 2)
	{
		Global_4456448.f_158632 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "fvjfvd");
	}
	else
	{
		Global_4456448.f_158632 = 5;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "fvjfvc") == 2)
	{
		Global_4456448.f_158633 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "fvjfvc");
	}
	else
	{
		Global_4456448.f_158633 = 2;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cpopr") == 3)
	{
		Global_4456448.f_158636 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "cpopr");
	}
	else
	{
		Global_4456448.f_158636 = 5f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cpohr") == 3)
	{
		Global_4456448.f_158637 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "cpohr");
	}
	else
	{
		Global_4456448.f_158637 = 60f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bevhtd") == 3)
	{
		Global_4456448.f_57970 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "bevhtd");
	}
	else
	{
		Global_4456448.f_57970 = 0.075f;
	}
	iVar2 = 0;
	while (iVar2 <= 9)
	{
		StringCopy(&cVar32, "fsclv", 16);
		StringIntConCat(&cVar32, iVar2, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 5)
		{
			Global_4456448.f_57973[iVar2 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar32) };
		}
		else
		{
			Global_4456448.f_57973[iVar2 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar32, "fsclr", 16);
		StringIntConCat(&cVar32, iVar2, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 5)
		{
			Global_4456448.f_58004[iVar2 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar32) };
		}
		else
		{
			Global_4456448.f_58004[iVar2 /*3*/] = { 0f, 0f, 0f };
		}
		iVar2++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "bevhdd") == 3)
	{
		Global_4456448.f_158637 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "bevhdd");
	}
	else
	{
		Global_4456448.f_158637 = 0.075f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc0") == 2)
	{
		Global_4456448.f_158639 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc0");
	}
	else
	{
		Global_4456448.f_158639 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc1") == 2)
	{
		Global_4456448.f_158640 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc1");
	}
	else
	{
		Global_4456448.f_158640 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc2") == 2)
	{
		Global_4456448.f_158641 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc2");
	}
	else
	{
		Global_4456448.f_158641 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc3") == 2)
	{
		Global_4456448.f_158642 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc3");
	}
	else
	{
		Global_4456448.f_158642 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc4") == 2)
	{
		Global_4456448.f_158643 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc4");
	}
	else
	{
		Global_4456448.f_158643 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc5") == 2)
	{
		Global_4456448.f_158644 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc5");
	}
	else
	{
		Global_4456448.f_158644 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc6") == 2)
	{
		Global_4456448.f_158645 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc6");
	}
	else
	{
		Global_4456448.f_158645 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc9") == 2)
	{
		Global_4456448.f_158649 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc9");
	}
	else
	{
		Global_4456448.f_158649 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc7") == 2)
	{
		Global_4456448.f_158647 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc7");
	}
	else
	{
		Global_4456448.f_158647 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratc8") == 2)
	{
		Global_4456448.f_158648 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ratc8");
	}
	else
	{
		Global_4456448.f_158648 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ratcm") == 3)
	{
		Global_4456448.f_158646 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "ratcm");
	}
	else
	{
		Global_4456448.f_158646 = -1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "cdrt") == 3)
	{
		Global_4456448.f_158651 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "cdrt");
	}
	else
	{
		Global_4456448.f_158651 = -1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csttl") == 4)
	{
		StringCopy(&(Global_4456448.f_158652), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csttl"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_158652), "", 16);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csstl") == 4)
	{
		StringCopy(&(Global_4456448.f_158656), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csstl"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_158656), "", 16);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csttl2") == 4)
	{
		StringCopy(&(Global_4456448.f_158660), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csttl2"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_158660), "", 16);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csstl2") == 4)
	{
		StringCopy(&(Global_4456448.f_158664), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csstl2"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_158664), "", 16);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csttl3") == 4)
	{
		StringCopy(&(Global_4456448.f_158668), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csttl3"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_158668), "", 16);
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csstl3") == 4)
	{
		StringCopy(&(Global_4456448.f_158672), DATAFILE::_OBJECT_VALUE_GET_STRING(iVar0, "csstl3"), 16);
	}
	else
	{
		StringCopy(&(Global_4456448.f_158672), "", 16);
	}
	func_256();
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ssdsp") == 5)
	{
		Global_4456448.f_161162 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "ssdsp") };
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ssdsr") == 3)
	{
		Global_4456448.f_161165 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "ssdsr");
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ssder") == 3)
	{
		Global_4456448.f_161166 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "ssder");
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ssdst") == 2)
	{
		Global_4456448.f_161167 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ssdst");
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "ssdtg") == 2)
	{
		Global_4456448.f_161168 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "ssdtg");
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp0") == 2)
	{
		Global_4456448.f_161304 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp0");
	}
	else
	{
		Global_4456448.f_161304 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp1") == 2)
	{
		Global_4456448.f_161305 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp1");
	}
	else
	{
		Global_4456448.f_161305 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp2") == 2)
	{
		Global_4456448.f_161307 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp2");
	}
	else
	{
		Global_4456448.f_161307 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp3") == 2)
	{
		Global_4456448.f_161308 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp3");
	}
	else
	{
		Global_4456448.f_161308 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp4") == 2)
	{
		Global_4456448.f_161309 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp4");
	}
	else
	{
		Global_4456448.f_161309 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp5") == 2)
	{
		Global_4456448.f_161306 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp5");
	}
	else
	{
		Global_4456448.f_161306 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp15") == 2)
	{
		Global_4456448.f_161311 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp15");
	}
	else
	{
		Global_4456448.f_161311 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwp16") == 2)
	{
		Global_4456448.f_161312 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwp16");
	}
	else
	{
		Global_4456448.f_161312 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwpbhd") == 2)
	{
		Global_4456448.f_161310 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwpbhd");
	}
	else
	{
		Global_4456448.f_161310 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwprbs") == 2)
	{
		Global_4456448.f_161316 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwprbs");
	}
	else
	{
		Global_4456448.f_161316 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwmgfr") == 2)
	{
		Global_4456448.f_161334 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwmgfr");
	}
	else
	{
		Global_4456448.f_161334 = 5;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwmgda") == 2)
	{
		Global_4456448.f_161335 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwmgda");
	}
	else
	{
		Global_4456448.f_161335 = 350;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwmgnb") == 2)
	{
		Global_4456448.f_161336 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwmgnb");
	}
	else
	{
		Global_4456448.f_161336 = 100;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "crttn") == 2)
	{
		Global_4456448.f_161337 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "crttn");
	}
	else
	{
		Global_4456448.f_161337 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "smoc") == 2)
	{
		Global_4456448.f_57972 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "smoc");
	}
	else
	{
		Global_4456448.f_57972 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vrsp") == 2)
	{
		Global_4456448.f_161687 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vrsp");
	}
	else
	{
		Global_4456448.f_161687 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "otrds") == 2)
	{
		Global_4456448.f_161676 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "otrds");
	}
	else
	{
		Global_4456448.f_161676 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "otsdr") == 2)
	{
		Global_4456448.f_161678 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "otsdr");
	}
	else
	{
		Global_4456448.f_161678 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "otrsc") == 2)
	{
		Global_4456448.f_161679 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "otrsc");
	}
	else
	{
		Global_4456448.f_161679 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "otrpc") == 2)
	{
		Global_4456448.f_161677 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "otrpc");
	}
	else
	{
		Global_4456448.f_161677 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mocb1") == 2)
	{
		Global_4456448.f_161682 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mocb1");
	}
	else
	{
		Global_4456448.f_161682 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mocb2") == 2)
	{
		Global_4456448.f_161682.f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mocb2");
	}
	else
	{
		Global_4456448.f_161682.f_1 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mocb3") == 2)
	{
		Global_4456448.f_161682.f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mocb3");
	}
	else
	{
		Global_4456448.f_161682.f_2 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "moccc") == 2)
	{
		Global_4456448.f_161682.f_3 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "moccc");
	}
	else
	{
		Global_4456448.f_161682.f_3 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "mocbs") == 2)
	{
		Global_4456448.f_161682.f_4 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "mocbs");
	}
	else
	{
		Global_4456448.f_161682.f_4 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwprbs") == 2)
	{
		Global_4456448.f_161316 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "vwprbs");
	}
	else
	{
		Global_4456448.f_161316 = 0;
	}
	Global_4456448.f_161327 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "vtwsp") };
	Global_4456448.f_161330 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, "vtwsr") };
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tsc3") == 3)
	{
		Global_4456448.f_161313 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "tsc3");
	}
	else
	{
		Global_4456448.f_161313 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "tsc4") == 3)
	{
		Global_4456448.f_161314 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "tsc4");
	}
	else
	{
		Global_4456448.f_161314 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "csstd") == 2)
	{
		Global_4456448.f_161315 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "csstd");
	}
	else
	{
		Global_4456448.f_161315 = -1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "prpccd") == 2)
	{
		Global_4456448.f_162190 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "prpccd");
	}
	else
	{
		Global_4456448.f_162190 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "spwnptd") == 2)
	{
		Global_4456448.f_162191 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "spwnptd");
	}
	else
	{
		Global_4456448.f_162191 = 20;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "objsctt") == 2)
	{
		Global_4456448.f_162353 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "objsctt");
	}
	else
	{
		Global_4456448.f_162353 = 20;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "spwnptd") == 2)
	{
		Global_4456448.f_162191 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "spwnptd");
	}
	else
	{
		Global_4456448.f_162191 = 20;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sba") == 3)
	{
		Global_4456448.f_162237 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "sba");
	}
	else
	{
		Global_4456448.f_162237 = 0.5f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "sccd") == 2)
	{
		Global_4456448.f_162225 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "sccd");
	}
	else
	{
		Global_4456448.f_162225 = 500;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmsf") == 3)
	{
		Global_4456448.f_162236 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmsf");
	}
	else
	{
		Global_4456448.f_162236 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "schf") == 3)
	{
		Global_4456448.f_162226 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "schf");
	}
	else
	{
		Global_4456448.f_162226 = 10f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmnhfs") == 3)
	{
		Global_4456448.f_162228 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmnhfs");
	}
	else
	{
		Global_4456448.f_162228 = 1f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scvf") == 3)
	{
		Global_4456448.f_162227 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scvf");
	}
	else
	{
		Global_4456448.f_162227 = 0.5f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmnvfs") == 3)
	{
		Global_4456448.f_162229 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmnvfs");
	}
	else
	{
		Global_4456448.f_162229 = 0f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmxhf") == 3)
	{
		Global_4456448.f_162230 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmxhf");
	}
	else
	{
		Global_4456448.f_162230 = 25f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmnhf") == 3)
	{
		Global_4456448.f_162231 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmnhf");
	}
	else
	{
		Global_4456448.f_162231 = 15f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmxvf") == 3)
	{
		Global_4456448.f_162232 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmxvf");
	}
	else
	{
		Global_4456448.f_162232 = 6f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmnvf") == 3)
	{
		Global_4456448.f_162233 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "scmnvf");
	}
	else
	{
		Global_4456448.f_162233 = 4f;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scd") == 2)
	{
		Global_4456448.f_162234 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "scd");
	}
	else
	{
		Global_4456448.f_162234 = 10;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "scmind") == 2)
	{
		Global_4456448.f_162235 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "scmind");
	}
	else
	{
		Global_4456448.f_162235 = 1;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "awpsobm") == 2)
	{
		Global_4456448.f_162352 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "awpsobm");
	}
	else
	{
		Global_4456448.f_162352 = 0;
	}
	iVar77 = 0;
	while (iVar77 <= 4)
	{
		StringCopy(&cVar32, "rmspco", 16);
		StringIntConCat(&cVar32, iVar77, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 5)
		{
			Global_4456448.f_162390[iVar77 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar32) };
		}
		else
		{
			Global_4456448.f_162390[iVar77 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar32, "rmspch", 16);
		StringIntConCat(&cVar32, iVar77, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 3)
		{
			Global_4456448.f_162406[iVar77] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar32);
		}
		else
		{
			Global_4456448.f_162406[iVar77] = 0f;
		}
		StringCopy(&cVar32, "rmspcc", 16);
		StringIntConCat(&cVar32, iVar77, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 5)
		{
			Global_4456448.f_162412[iVar77 /*3*/] = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(iVar0, &cVar32) };
		}
		else
		{
			Global_4456448.f_162412[iVar77 /*3*/] = { 0f, 0f, 0f };
		}
		StringCopy(&cVar32, "rmspcr", 16);
		StringIntConCat(&cVar32, iVar77, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 3)
		{
			Global_4456448.f_162428[iVar77] = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, &cVar32);
		}
		else
		{
			Global_4456448.f_162428[iVar77] = 0f;
		}
		iVar77++;
	}
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		StringCopy(&cVar32, "awtt", 16);
		StringIntConCat(&cVar32, iVar2, 16);
		if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, &cVar32) == 2)
		{
			Global_4456448.f_162354[iVar2] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, &cVar32);
		}
		else
		{
			Global_4456448.f_162354[iVar2] = 6;
		}
		iVar2++;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "awtrc") == 2)
	{
		Global_4456448.f_162387 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iVar0, "awtrc");
	}
	else
	{
		Global_4456448.f_162387 = 0;
	}
	if (iVar0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iVar0, "vwfdt") == 3)
	{
		Global_4456448.f_162442 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iVar0, "vwfdt");
	}
	else
	{
		Global_4456448.f_162442 = 2.5f;
	}
	func_255(iVar0);
}

void func_255(int iParam0)
{
	int iVar0;
	char cVar1[16];
	
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "carbar1") == 3)
	{
		Global_4456448.f_165640 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "carbar1");
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "carbar2") == 3)
	{
		Global_4456448.f_165640.f_1 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "carbar2");
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "carbar3") == 3)
	{
		Global_4456448.f_165640.f_2 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "carbar3");
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "carbar4") == 3)
	{
		Global_4456448.f_165640.f_3 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "carbar4");
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "carbar5") == 3)
	{
		Global_4456448.f_165640.f_4 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "carbar5");
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "carbar6") == 3)
	{
		Global_4456448.f_165640.f_5 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "carbar6");
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "carbar7") == 3)
	{
		Global_4456448.f_165640.f_6 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "carbar7");
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "carbar8") == 3)
	{
		Global_4456448.f_165640.f_7 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "carbar8");
	}
	if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, "carbar9") == 3)
	{
		Global_4456448.f_165640.f_8 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(iParam0, "carbar9");
	}
	StringCopy(&cVar1, "", 16);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		StringCopy(&cVar1, "carbar10", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		if (iParam0 != 0 && DATAFILE::_OBJECT_VALUE_GET_TYPE(iParam0, &cVar1) == 2)
		{
			Global_4456448.f_165640.f_9[iVar0] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(iParam0, &cVar1);
		}
		iVar0++;
	}
}

void func_256()
{
	Global_4456448.f_161162 = { 0f, 0f, 0f };
	Global_4456448.f_161165 = 30f;
	Global_4456448.f_161166 = 5f;
	Global_4456448.f_161167 = 30000;
	Global_4456448.f_161168 = 15000;
}

int func_257(int iParam0)
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
			if ((!func_258(iVar5) && Global_1589819[iVar2 /*818*/].f_211 != 8) && !GAMEPLAY::IS_BIT_SET(Global_1589819[iVar2 /*818*/].f_39.f_18, 14))
			{
				if (Global_1589819[iVar2 /*818*/].f_99.f_28 != -1)
				{
					GAMEPLAY::SET_BIT(&uVar1, Global_1589819[iVar2 /*818*/].f_99.f_28);
					if (Global_1589819[iVar2 /*818*/].f_99.f_28 >= iParam0 && iVar2 < PLAYER::PLAYER_ID())
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

bool func_258(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_99.f_32, 5);
}

var func_259()
{
	return Global_1648607.f_3;
}

int func_260()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_261();
	}
	return func_132(Global_4456448.f_138474);
}

var func_261()
{
	return Global_2448756.f_16;
}

int func_262()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_264();
	}
	return func_263(Global_4456448.f_138474);
}

int func_263(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4985[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_264()
{
	return Global_2448756.f_14;
}

int func_265()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2)) && !func_258(iVar2)) && Global_1589819[iVar2 /*818*/].f_211 != 8) && !GAMEPLAY::IS_BIT_SET(Global_1589819[iVar2 /*818*/].f_39.f_18, 14))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_266()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448756.f_557.f_1, 0);
}

var func_267()
{
	return UI::_GET_LABEL_TEXT("CREATOR_NO_T");
}

bool func_268()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_142, 0);
}

int func_269(int iParam0)
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
			return 52;
		
		default:
	}
	return 0;
}

void func_270(int iParam0)
{
	struct<23> Var0;
	
	if (*iParam0 == 0)
	{
		return;
	}
	Var0 = -1;
	Global_4456448.f_165615 = { Var0 };
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "MYmi") == 2)
	{
		Global_4456448.f_165615 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, "MYmi");
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "MYyn") == 4)
	{
		StringCopy(&(Global_4456448.f_165615.f_1), DATAFILE::_OBJECT_VALUE_GET_STRING(*iParam0, "MYyn"), 64);
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "MYai") == 2)
	{
		Global_4456448.f_165615.f_17 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, "MYai");
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "MYpi") == 2)
	{
		Global_4456448.f_165615.f_18 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, "MYpi");
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "MYci") == 2)
	{
		Global_4456448.f_165615.f_19 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, "MYci");
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "MYli") == 2)
	{
		Global_4456448.f_165615.f_20 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, "MYli");
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "MYfi") == 2)
	{
		Global_4456448.f_165615.f_21 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, "MYfi");
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "MYfl") == 2)
	{
		Global_4456448.f_165615.f_22 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, "MYfl");
	}
}

void func_271(int iParam0)
{
	struct<103> Var0;
	int iVar103;
	char cVar104[16];
	
	if (*iParam0 == 0)
	{
		return;
	}
	Var0.f_2 = 5;
	Var0.f_2.f_1.f_1 = -1;
	Var0.f_2.f_1.f_12 = 1092616192;
	Var0.f_2.f_1.f_13 = 1092616192;
	Var0.f_2.f_1.f_14 = 1101004800;
	Var0.f_2.f_1.f_15 = 1077936128;
	Var0.f_2.f_1.f_16 = 1119092736;
	Var0.f_2.f_1.f_17 = 1077936128;
	Var0.f_2.f_1.f_18 = 1065353216;
	Var0.f_2.f_1.f_19.f_1 = -1;
	Var0.f_2.f_1.f_19.f_12 = 1092616192;
	Var0.f_2.f_1.f_19.f_13 = 1092616192;
	Var0.f_2.f_1.f_19.f_14 = 1101004800;
	Var0.f_2.f_1.f_19.f_15 = 1077936128;
	Var0.f_2.f_1.f_19.f_16 = 1119092736;
	Var0.f_2.f_1.f_19.f_17 = 1077936128;
	Var0.f_2.f_1.f_19.f_18 = 1065353216;
	Var0.f_2.f_1.f_19.f_19.f_1 = -1;
	Var0.f_2.f_1.f_19.f_19.f_12 = 1092616192;
	Var0.f_2.f_1.f_19.f_19.f_13 = 1092616192;
	Var0.f_2.f_1.f_19.f_19.f_14 = 1101004800;
	Var0.f_2.f_1.f_19.f_19.f_15 = 1077936128;
	Var0.f_2.f_1.f_19.f_19.f_16 = 1119092736;
	Var0.f_2.f_1.f_19.f_19.f_17 = 1077936128;
	Var0.f_2.f_1.f_19.f_19.f_18 = 1065353216;
	Var0.f_2.f_1.f_19.f_19.f_19.f_1 = -1;
	Var0.f_2.f_1.f_19.f_19.f_19.f_12 = 1092616192;
	Var0.f_2.f_1.f_19.f_19.f_19.f_13 = 1092616192;
	Var0.f_2.f_1.f_19.f_19.f_19.f_14 = 1101004800;
	Var0.f_2.f_1.f_19.f_19.f_19.f_15 = 1077936128;
	Var0.f_2.f_1.f_19.f_19.f_19.f_16 = 1119092736;
	Var0.f_2.f_1.f_19.f_19.f_19.f_17 = 1077936128;
	Var0.f_2.f_1.f_19.f_19.f_19.f_18 = 1065353216;
	Var0.f_2.f_1.f_19.f_19.f_19.f_19.f_1 = -1;
	Var0.f_2.f_1.f_19.f_19.f_19.f_19.f_12 = 1092616192;
	Var0.f_2.f_1.f_19.f_19.f_19.f_19.f_13 = 1092616192;
	Var0.f_2.f_1.f_19.f_19.f_19.f_19.f_14 = 1101004800;
	Var0.f_2.f_1.f_19.f_19.f_19.f_19.f_15 = 1077936128;
	Var0.f_2.f_1.f_19.f_19.f_19.f_19.f_16 = 1119092736;
	Var0.f_2.f_1.f_19.f_19.f_19.f_19.f_17 = 1077936128;
	Var0.f_2.f_1.f_19.f_19.f_19.f_19.f_18 = 1065353216;
	Var0.f_98.f_4 = 1117782016;
	Global_4456448.f_165254 = { Var0 };
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "KhBS") == 2)
	{
		Global_4456448.f_165254 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, "KhBS");
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "KhNha") == 2)
	{
		Global_4456448.f_165254.f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, "KhNha");
	}
	iVar103 = 0;
	while (iVar103 <= 4)
	{
		StringCopy(&cVar104, "KhAC", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 5)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_3 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(*iParam0, &cVar104) };
		}
		StringCopy(&cVar104, "KhAD", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 5)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_6 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(*iParam0, &cVar104) };
		}
		StringCopy(&cVar104, "KhAU", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 5)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_9 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(*iParam0, &cVar104) };
		}
		else
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_9 = { 0f, 0f, 1f };
		}
		StringCopy(&cVar104, "KhAR", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 3)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_12 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(*iParam0, &cVar104);
		}
		StringCopy(&cVar104, "KhTy", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 2)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/] = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, &cVar104);
		}
		StringCopy(&cVar104, "KhEn", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 2)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_1 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, &cVar104);
		}
		StringCopy(&cVar104, "KhBS", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 2)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_2 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, &cVar104);
		}
		StringCopy(&cVar104, "KhCt", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 3)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_17 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(*iParam0, &cVar104);
		}
		StringCopy(&cVar104, "KhPt", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 3)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_18 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(*iParam0, &cVar104);
		}
		StringCopy(&cVar104, "KhWd", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 3)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_13 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(*iParam0, &cVar104);
		}
		StringCopy(&cVar104, "KhHe", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 3)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_15 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(*iParam0, &cVar104);
		}
		StringCopy(&cVar104, "KhHd", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 3)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_16 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(*iParam0, &cVar104);
		}
		StringCopy(&cVar104, "KhLn", 16);
		StringIntConCat(&cVar104, iVar103, 16);
		if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, &cVar104) == 3)
		{
			Global_4456448.f_165254.f_2[iVar103 /*19*/].f_14 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(*iParam0, &cVar104);
		}
		iVar103++;
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "KhBoS") == 2)
	{
		Global_4456448.f_165254.f_98 = DATAFILE::_OBJECT_VALUE_GET_INTEGER(*iParam0, "KhBoS");
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "KhBoC") == 5)
	{
		Global_4456448.f_165254.f_98.f_1 = { DATAFILE::_OBJECT_VALUE_GET_VECTOR3(*iParam0, "KhBoC") };
	}
	if (DATAFILE::_OBJECT_VALUE_GET_TYPE(*iParam0, "KhBoR") == 3)
	{
		Global_4456448.f_165254.f_98.f_4 = DATAFILE::_OBJECT_VALUE_GET_FLOAT(*iParam0, "KhBoR");
	}
}

void func_272()
{
	if (func_273())
	{
		Global_2456885.f_8 = 1;
	}
	Global_2456885.f_7 = 1;
}

bool func_273()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448756.f_2, 11);
}

int func_274(int iParam0)
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
	if (func_275() == 0)
	{
		return 0;
	}
	return 1;
}

int func_275()
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

int func_276(int iParam0)
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
	if (func_275() == 0)
	{
		return 0;
	}
	return 1;
}

void func_277(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<103> Var5;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	struct<103> Var113;
	struct<23> Var216;
	
	Global_4456448.f_139755 = 0;
	if (bParam0)
	{
		if (((!func_169() || func_306() == 38) || func_306() == 41) || func_306() == 36)
		{
			Global_4456448.f_138474 = 0;
			Global_4456448.f_155684 = 2;
		}
		Global_4456448.f_91944 = -1;
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
		Global_4456448.f_34 = 0;
		Global_4456448.f_139768 = -0.1f;
		Global_4456448.f_165654 = -1;
		Global_4456448.f_162439 = 0;
		Global_4456448.f_57 = 0;
		Global_4456448.f_104 = 0;
		Global_4456448.f_46173 = 0;
		Global_4456448.f_155354 = 0;
		Global_4456448.f_10 = 0;
		Global_4456448.f_36 = 0;
		Global_4456448.f_62 = 0;
		Global_4456448.f_38 = 0;
		Global_4456448.f_61 = 0;
		Global_4456448.f_63 = 0;
		Global_4456448.f_64 = 0;
		Global_4456448.f_66 = 0;
		Global_4456448.f_67 = 0;
		Global_4456448.f_68 = 0;
		Global_4456448.f_69 = 0;
		Global_4456448.f_40 = 0;
		Global_4456448.f_41 = 1;
		Global_4456448.f_6 = 0;
		Global_4456448.f_56 = 0;
		Global_4456448.f_161264 = 10;
		Global_4456448.f_161265 = 5f;
		Global_4456448.f_161266 = 10;
		Global_4456448.f_60 = 1;
		Global_4456448.f_37 = 0;
		Global_4456448.f_139733 = 0;
		Global_4456448.f_139735 = 0;
		Global_4456448.f_139734 = 0;
		Global_4456448.f_139732 = 0;
		Global_4456448.f_52654 = 0;
		Global_4456448.f_161212 = -1;
		Global_4456448.f_162152 = 0;
		Global_4456448.f_162153 = 0;
		Global_4456448.f_162154 = 0;
		Global_4456448.f_162155 = 0;
		Global_4456448.f_162156 = 0;
		Global_4456448.f_162157 = 1;
		iVar3 = 0;
		while (iVar3 <= 7)
		{
			Global_4456448.f_165358[iVar3 /*32*/] = { 0f, 0f, 0f };
			Global_4456448.f_165358[iVar3 /*32*/].f_4 = { 0f, 0f, 0f };
			Global_4456448.f_165358[iVar3 /*32*/].f_3 = 0f;
			Global_4456448.f_165358[iVar3 /*32*/].f_7 = 0f;
			Global_4456448.f_165358[iVar3 /*32*/].f_8 = 1f;
			Global_4456448.f_165358[iVar3 /*32*/].f_19 = 0;
			Global_4456448.f_165358[iVar3 /*32*/].f_20 = -1;
			Global_4456448.f_165358[iVar3 /*32*/].f_21 = { 0f, 0f, 0f };
			Global_4456448.f_165358[iVar3 /*32*/].f_24 = 0f;
			Global_4456448.f_165358[iVar3 /*32*/].f_31 = 65f;
			Global_4456448.f_165358[iVar3 /*32*/].f_25 = { 0f, 0f, 0f };
			Global_4456448.f_165358[iVar3 /*32*/].f_28 = { 0f, 0f, 0f };
			iVar4 = 0;
			while (iVar4 <= 3)
			{
				Global_4456448.f_165358[iVar3 /*32*/].f_9[iVar4] = -1;
				Global_4456448.f_165358[iVar3 /*32*/].f_14[iVar4] = -1;
				iVar4++;
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 <= 4)
		{
			StringCopy(&(Global_4456448.f_162255[iVar3 /*16*/]), "", 64);
			iVar3++;
		}
		Global_4456448.f_162443 = 0f;
		Global_4456448.f_162444 = -1;
		Var5.f_2 = 5;
		Var5.f_2.f_1.f_1 = -1;
		Var5.f_2.f_1.f_12 = 1092616192;
		Var5.f_2.f_1.f_13 = 1092616192;
		Var5.f_2.f_1.f_14 = 1101004800;
		Var5.f_2.f_1.f_15 = 1077936128;
		Var5.f_2.f_1.f_16 = 1119092736;
		Var5.f_2.f_1.f_17 = 1077936128;
		Var5.f_2.f_1.f_18 = 1065353216;
		Var5.f_2.f_1.f_19.f_1 = -1;
		Var5.f_2.f_1.f_19.f_12 = 1092616192;
		Var5.f_2.f_1.f_19.f_13 = 1092616192;
		Var5.f_2.f_1.f_19.f_14 = 1101004800;
		Var5.f_2.f_1.f_19.f_15 = 1077936128;
		Var5.f_2.f_1.f_19.f_16 = 1119092736;
		Var5.f_2.f_1.f_19.f_17 = 1077936128;
		Var5.f_2.f_1.f_19.f_18 = 1065353216;
		Var5.f_2.f_1.f_19.f_19.f_1 = -1;
		Var5.f_2.f_1.f_19.f_19.f_12 = 1092616192;
		Var5.f_2.f_1.f_19.f_19.f_13 = 1092616192;
		Var5.f_2.f_1.f_19.f_19.f_14 = 1101004800;
		Var5.f_2.f_1.f_19.f_19.f_15 = 1077936128;
		Var5.f_2.f_1.f_19.f_19.f_16 = 1119092736;
		Var5.f_2.f_1.f_19.f_19.f_17 = 1077936128;
		Var5.f_2.f_1.f_19.f_19.f_18 = 1065353216;
		Var5.f_2.f_1.f_19.f_19.f_19.f_1 = -1;
		Var5.f_2.f_1.f_19.f_19.f_19.f_12 = 1092616192;
		Var5.f_2.f_1.f_19.f_19.f_19.f_13 = 1092616192;
		Var5.f_2.f_1.f_19.f_19.f_19.f_14 = 1101004800;
		Var5.f_2.f_1.f_19.f_19.f_19.f_15 = 1077936128;
		Var5.f_2.f_1.f_19.f_19.f_19.f_16 = 1119092736;
		Var5.f_2.f_1.f_19.f_19.f_19.f_17 = 1077936128;
		Var5.f_2.f_1.f_19.f_19.f_19.f_18 = 1065353216;
		Var5.f_2.f_1.f_19.f_19.f_19.f_19.f_1 = -1;
		Var5.f_2.f_1.f_19.f_19.f_19.f_19.f_12 = 1092616192;
		Var5.f_2.f_1.f_19.f_19.f_19.f_19.f_13 = 1092616192;
		Var5.f_2.f_1.f_19.f_19.f_19.f_19.f_14 = 1101004800;
		Var5.f_2.f_1.f_19.f_19.f_19.f_19.f_15 = 1077936128;
		Var5.f_2.f_1.f_19.f_19.f_19.f_19.f_16 = 1119092736;
		Var5.f_2.f_1.f_19.f_19.f_19.f_19.f_17 = 1077936128;
		Var5.f_2.f_1.f_19.f_19.f_19.f_19.f_18 = 1065353216;
		Var5.f_98.f_4 = 1117782016;
		Global_4456448.f_165254 = { Var5 };
		if (bParam1)
		{
			Global_4456448.f_4 = 0;
			Global_4456448.f_5 = 0;
		}
		Global_4456448.f_3 = 0;
		iVar0 = 0;
		while (iVar0 <= 9)
		{
			Global_4456448.f_46236[iVar0 /*39*/] = -1;
			Global_4456448.f_46236[iVar0 /*39*/].f_1 = -1;
			Global_4456448.f_46236[iVar0 /*39*/].f_2 = 0;
			Global_4456448.f_46236[iVar0 /*39*/].f_4 = 0;
			Global_4456448.f_46236[iVar0 /*39*/].f_3 = -1;
			iVar3 = 0;
			while (iVar3 <= 1)
			{
				StringCopy(&(Global_4456448.f_46236[iVar0 /*39*/].f_5[iVar3 /*16*/]), "", 64);
				iVar3++;
			}
			Global_4456448.f_46236[iVar0 /*39*/].f_38 = 0;
			iVar0++;
		}
		Global_4456448.f_139736 = 0;
		Global_4456448.f_139737 = 0;
		Global_4456448.f_139738 = 0;
		Global_4456448.f_139728 = -1;
		Global_4456448.f_139727 = 0;
		Global_4456448.f_139726 = -1;
		Global_4456448.f_73 = 0;
		Global_4456448.f_81 = { 0f, 0f, 0f };
		Global_4456448.f_84 = { 0f, 0f, 0f };
		Global_4456448.f_87 = { 0f, 0f, 0f };
		Global_4456448.f_90 = { 0f, 0f, 0f };
		Global_4456448.f_93 = { 0f, 0f, 0f };
		Global_4456448.f_96 = { 0f, 0f, 0f };
		Global_4456448.f_99 = 0f;
		Global_4456448.f_100 = 0f;
		Global_4456448.f_138449 = 0f;
		Global_4456448.f_103 = 0;
		Global_4456448.f_139754 = 0;
		Global_4456448.f_161244 = 0;
		Global_4456448.f_162202 = 0;
		Global_4456448.f_155686 = 0;
		iVar0 = 0;
		while (iVar0 < 18)
		{
			Global_4456448.f_55712[iVar0 /*4*/][0] = 0;
			Global_4456448.f_55712[iVar0 /*4*/][1] = 0;
			Global_4456448.f_55693[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4456448.f_161705), "", 64);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_4456448.f_161721[iVar0 /*16*/]), "", 64);
		iVar108 = 0;
		while (iVar108 <= 3)
		{
			StringCopy(&(Global_4456448.f_161802[iVar0 /*65*/][iVar108 /*16*/]), "", 64);
			iVar108++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		StringCopy(&(Global_4456448.f_52655[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_4456448.f_144745[iVar0 /*3*/][0] = 0;
		Global_4456448.f_144745[iVar0 /*3*/][1] = 0;
		Global_4456448.f_144764[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_144771 = 0;
	Global_4456448.f_144772 = -1;
	Global_4456448.f_1 = -1;
	StringCopy(&(Global_4456448.f_138799), "", 24);
	iVar0 = 0;
	while (iVar0 <= 35)
	{
		StringCopy(&(Global_4456448.f_144349[iVar0 /*8*/]), "", 32);
		iVar0++;
	}
	Global_4456448.f_157722 = 0;
	Global_4456448.f_55 = 0;
	Global_4456448.f_75 = { 0f, 0f, 0f };
	Global_4456448.f_155685 = -1;
	StringCopy(&(Global_4456448.f_138481), "", 64);
	StringCopy(&(Global_4456448.f_138783), "", 64);
	StringCopy(&(Global_4456448.f_161689), "", 64);
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			StringCopy(&(Global_4456448.f_138767[iVar0 /*6*/]), "", 24);
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_4456448.f_138503[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_305();
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		StringCopy(&(Global_4456448.f_46236[0 /*39*/].f_5[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	func_304();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_48[iVar0] = 0;
		Global_4456448.f_155328[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_155333[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_43[iVar0] = 1;
		Global_4456448.f_137580[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_137593[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_137606[iVar0] = 0f;
		Global_4456448.f_157726[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_157739[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_157752[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_157765[iVar0] = 45f;
		Global_4456448.f_157770[iVar0] = 0f;
		Global_4456448.f_133551[iVar0] = -1;
		Global_4456448.f_79176[iVar0] = -1;
		StringCopy(&(Global_4456448.f_158461[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4456448.f_158526[iVar0 /*16*/]), "", 64);
		Global_4456448.f_158591[iVar0] = 0;
		StringCopy(&(Global_4456448.f_158263[iVar0 /*16*/]), "", 64);
		Global_4456448.f_144815[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			StringCopy(&(Global_4456448.f_158328[iVar0 /*33*/][iVar1 /*16*/]), "", 64);
			iVar1++;
		}
		Global_4456448.f_47089[iVar0] = -1;
		Global_4456448.f_47094[iVar0] = -1;
		StringCopy(&(Global_4456448.f_161170[iVar0 /*4*/]), "", 16);
		StringCopy(&(Global_4456448.f_161187[iVar0 /*4*/]), "", 16);
		Global_4456448.f_161204[iVar0] = 0;
		Global_4456448.f_161237[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_161252 = 0;
	Global_4456448.f_161251 = 0;
	Global_4456448.f_161253 = 0;
	Global_4456448.f_161254 = 1;
	Global_4456448.f_161255 = 2;
	Global_4456448.f_161256 = 3;
	Global_4456448.f_161257 = 4;
	Global_4456448.f_161258 = 6;
	Global_4456448.f_161259 = 7;
	Global_4456448.f_161260 = 9;
	Global_4456448.f_161261 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_161317[iVar0] = 0;
		Global_4456448.f_161322[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_161268 = 5;
	Global_4456448.f_161267 = 0;
	Global_4456448.f_161263 = 3;
	Global_4456448.f_162144 = 60000;
	Global_4456448.f_162147 = 1f;
	Global_4456448.f_162145 = 0.5f;
	Global_4456448.f_162146 = 0.5f;
	Global_4456448.f_162148 = 50f;
	Global_4456448.f_162149 = 100f;
	Global_4456448.f_161339 = 5000;
	Global_4456448.f_161340 = 2500;
	Global_4456448.f_161341 = 3000;
	Global_4456448.f_157775 = { 0f, 0f, 0f };
	Global_4456448.f_157778 = { 0f, 0f, 0f };
	Global_4456448.f_157781 = { 0f, 0f, 0f };
	Global_4456448.f_157784 = 45f;
	Global_4456448.f_157785 = 0f;
	Global_4456448.f_157786 = 0;
	Global_4456448.f_158619 = 10000;
	Global_4456448.f_158620 = 0;
	Global_4456448.f_158634 = 1;
	Global_4456448.f_158621 = 1f;
	Global_4456448.f_161302 = 1;
	Global_4456448.f_161303 = 0;
	Global_4456448.f_158622 = 0f;
	Global_4456448.f_158635 = 60f;
	Global_4456448.f_158636 = 5f;
	Global_4456448.f_158637 = 60f;
	Global_4456448.f_158638 = -1f;
	Global_4456448.f_158624 = 2;
	Global_4456448.f_158625 = 2;
	Global_4456448.f_158626 = 3000;
	Global_4456448.f_158627 = 150;
	Global_4456448.f_158628 = 3f;
	Global_4456448.f_158629 = 1f;
	Global_4456448.f_158630 = 25;
	Global_4456448.f_158631 = 5;
	Global_4456448.f_158632 = 5;
	Global_4456448.f_158633 = 2000;
	Global_4456448.f_158651 = -1f;
	StringCopy(&(Global_4456448.f_158652), "", 16);
	StringCopy(&(Global_4456448.f_158656), "", 16);
	StringCopy(&(Global_4456448.f_158660), "", 16);
	StringCopy(&(Global_4456448.f_158664), "", 16);
	StringCopy(&(Global_4456448.f_158668), "", 16);
	StringCopy(&(Global_4456448.f_158672), "", 16);
	Global_4456448.f_57970 = 0.075f;
	Global_4456448.f_57971 = 0.075f;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_57973[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_58004[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4456448.f_158639 = 0;
	Global_4456448.f_158648 = 0;
	Global_4456448.f_158640 = 0;
	Global_4456448.f_158641 = 0;
	Global_4456448.f_158642 = 0;
	Global_4456448.f_158643 = 0;
	Global_4456448.f_158644 = 0;
	Global_4456448.f_158645 = 0;
	Global_4456448.f_158649 = 0;
	Global_4456448.f_158646 = -1f;
	Global_4456448.f_158647 = 0;
	Global_4456448.f_158650 = 0;
	Global_4456448.f_161337 = 0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_4456448.f_127102[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4456448.f_127183[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_4456448.f_127264[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		StringCopy(&(Global_4456448.f_127408[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		func_302(&(Global_4456448.f_144820[iVar0 /*1458*/]));
		func_298(&(Global_4456448.f_152111[iVar0 /*472*/]));
		iVar0++;
	}
	func_298(&(Global_4456448.f_154472));
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		func_297(&(Global_4456448.f_155557[iVar0 /*5*/]));
		iVar0++;
	}
	Global_4456448.f_155683 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_91794[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_91855[iVar0] = 0;
		Global_4456448.f_91876[iVar0] = -1;
		Global_4456448.f_91897[iVar0] = 100f;
		Global_4456448.f_91919[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_91918 = 0;
	Global_4456448.f_91940 = 0;
	iVar0 = 0;
	while (iVar0 <= 74)
	{
		func_221(&(Global_4456448.f_139773[iVar0 /*61*/]), iVar0);
		iVar0++;
	}
	Global_4456448.f_144638[0] = 0;
	Global_4456448.f_144638[1] = 0;
	Global_4456448.f_144642 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_296(&(Global_4456448.f_155365[iVar0 /*19*/]));
		iVar0++;
	}
	Global_4456448.f_161209 = 0;
	if (bParam3)
	{
		Global_4456448.f_2 = 0;
	}
	Global_4456448.f_144655 = 0;
	Global_4456448.f_139706 = 0;
	Global_4456448.f_155354 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_139740[iVar0] = -1;
		Global_4456448.f_155687[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_161211 = 0;
	Global_4456448.f_161169 = 0;
	Global_4456448.f_161234 = 0;
	Global_4456448.f_161236 = 0;
	Global_4456448.f_139771 = 0;
	Global_4456448.f_139772 = 0;
	Global_4456448.f_155728 = 0.5f;
	Global_4456448.f_144656 = 1;
	Global_4456448.f_144658 = 5;
	if (bParam3)
	{
		func_292(0);
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_155729[iVar0] = 0f;
		Global_4456448.f_155750[iVar0] = 0f;
		Global_4456448.f_155771[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_58050[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_58098[iVar0] = -1;
		Global_4456448.f_58108[iVar0] = -1;
		Global_4456448.f_58113[iVar0] = 1001;
		iVar0++;
	}
	Global_1646426 = 0;
	Global_4456448.f_7 = 0;
	Global_4456448.f_139713 = 0;
	Global_4456448.f_45392 = 0;
	iVar0 = 0;
	while (iVar0 < Global_4456448.f_133250)
	{
		Global_4456448.f_133250[iVar0 /*5*/] = { 0f, 0f, 0f };
		Global_4456448.f_133250[iVar0 /*5*/].f_3 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_46192[iVar0 /*4*/][0] = 0;
		Global_4456448.f_46192[iVar0 /*4*/][1] = 0;
		Global_4456448.f_46192[iVar0 /*4*/][2] = 0;
		Global_4456448.f_46175[iVar0 /*4*/][0] = 0;
		Global_4456448.f_46175[iVar0 /*4*/][1] = 0;
		Global_4456448.f_46175[iVar0 /*4*/][2] = 0;
		Global_4456448.f_46209[iVar0 /*4*/][0] = 0;
		Global_4456448.f_46209[iVar0 /*4*/][1] = 0;
		Global_4456448.f_46209[iVar0 /*4*/][2] = 0;
		Global_4456448.f_46226[iVar0] = 0;
		Global_4456448.f_46231[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			Global_4456448.f_144683[iVar0 /*14*/][iVar1] = 0;
			iVar1++;
		}
		Global_4456448.f_144788[iVar0 /*3*/][0] = 0;
		Global_4456448.f_144788[iVar0 /*3*/][1] = 0;
		Global_4456448.f_144806[iVar0 /*2*/][0] = 0;
		Global_4456448.f_105[iVar0 /*11309*/] = { 0f, 0f, 0f };
		Global_4456448.f_105[iVar0 /*11309*/].f_4 = { 0f, 0f, 0f };
		Global_4456448.f_105[iVar0 /*11309*/].f_7 = { 0f, 0f, 0f };
		Global_4456448.f_105[iVar0 /*11309*/].f_11 = { 0f, 0f, 0f };
		Global_4456448.f_105[iVar0 /*11309*/].f_14 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_15 = { 0f, 0f, 0f };
		Global_4456448.f_105[iVar0 /*11309*/].f_18 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_19 = { 0f, 0f, 0f };
		Global_4456448.f_105[iVar0 /*11309*/].f_22 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_23 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_38 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_24 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_25 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_26 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_27 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_28 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_29 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_30 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_31 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_32 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_33 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_34 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_35 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_36 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_59 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_4487 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4489 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4546 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4619 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6427 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4488 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4490 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6428 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_61 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_62 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_63 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_252 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_253 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_254 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_442 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_443 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_444 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6429 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6448 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_57 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_58 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4079 = 60000;
		Global_4456448.f_105[iVar0 /*11309*/].f_4341 = 60000;
		Global_4456448.f_105[iVar0 /*11309*/].f_5242 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_714 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_715 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_10363 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_10364 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_10365 = 1;
		Global_4456448.f_105[iVar0 /*11309*/].f_4085 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4086 = 0;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_105[iVar0 /*11309*/].f_4087[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_4105[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_4123[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4141[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_4159[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4195[iVar1] = 4;
			Global_4456448.f_105[iVar0 /*11309*/].f_4213[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4249[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4285[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_4267[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_4303[iVar1] = 10;
			Global_4456448.f_105[iVar0 /*11309*/].f_4321[iVar1] = 10;
			Global_4456448.f_105[iVar0 /*11309*/].f_4231[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4177[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10600[iVar1] = 10;
			Global_4456448.f_105[iVar0 /*11309*/].f_10618[iVar1] = 10;
			Global_4456448.f_105[iVar0 /*11309*/].f_6430[iVar1] = -1;
			iVar1++;
		}
		Global_4456448.f_45342[iVar0] = 0;
		Global_4456448.f_45347[iVar0] = 0;
		Global_4456448.f_45352[iVar0] = -1;
		Global_4456448.f_45398[iVar0] = 0;
		Global_4456448.f_45435[iVar0] = 1;
		Global_4456448.f_45440[iVar0] = -1;
		StringCopy(&(Global_4456448.f_45403[iVar0 /*4*/]), "", 16);
		Global_4456448.f_45425[iVar0] = 3;
		Global_4456448.f_45430[iVar0] = -1;
		Global_4456448.f_45445[iVar0] = -1;
		Global_4456448.f_45450[iVar0] = -1;
		Global_4456448.f_45455[iVar0] = -1;
		Global_4456448.f_45460[iVar0] = -1;
		Global_4456448.f_45475[iVar0] = 0;
		Global_4456448.f_45480[iVar0] = -1;
		Global_4456448.f_45393[iVar0] = 0;
		Global_4456448.f_45420[iVar0] = 0;
		Global_4456448.f_144644[iVar0] = 0;
		Global_4456448.f_144649[iVar0] = 0;
		Global_4456448.f_58083[iVar0] = 100;
		Global_4456448.f_58088[iVar0] = 1f;
		Global_4456448.f_58093[iVar0] = 0;
		Global_4456448.f_58118[iVar0] = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6220 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6221 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6222 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6223 = 0;
		Global_1646426.f_1[iVar0] = 0;
		Global_4456448.f_144773[iVar0] = 0;
		Global_4456448.f_144778[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_4456448.f_137705[iVar0 /*53*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_4456448.f_137918[iVar0 /*21*/][iVar1 /*5*/][iVar2] = 0f;
				Global_4456448.f_138003[iVar0 /*53*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				iVar2++;
			}
			Global_4456448.f_158596[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 25)
		{
			Global_4456448.f_55785[iVar0 /*105*/][iVar1 /*4*/][0] = 0;
			Global_4456448.f_55785[iVar0 /*105*/][iVar1 /*4*/][1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_161213[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 25)
		{
			Global_4456448.f_56243[iVar0 /*421*/][0 /*105*/][iVar1 /*4*/][0] = 0;
			Global_4456448.f_56243[iVar0 /*421*/][1 /*105*/][iVar1 /*4*/][0] = 0;
			Global_4456448.f_56243[iVar0 /*421*/][0 /*105*/][iVar1 /*4*/][1] = 0;
			Global_4456448.f_56243[iVar0 /*421*/][1 /*105*/][iVar1 /*4*/][1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Global_4456448.f_157788[iVar0 /*66*/][iVar1 /*13*/][iVar2 /*3*/] = { 0f, 0f, 0f };
				Global_4456448.f_158053[iVar0 /*26*/][iVar1 /*5*/][iVar2] = 0f;
				iVar2++;
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 84)
		{
			Global_4456448.f_105[iVar0 /*11309*/].f_64[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_255[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_445[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_163[iVar1] = 1f;
			Global_4456448.f_105[iVar0 /*11309*/].f_354[iVar1] = 1f;
			Global_4456448.f_105[iVar0 /*11309*/].f_544[iVar1] = 1f;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 11)
		{
			Global_4456448.f_105[iVar0 /*11309*/].f_150[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_341[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_531[iVar1] = 0;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_105[iVar0 /*11309*/].f_632[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_637[iVar1] = -1;
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_46628[iVar1 /*27*/] = 0;
			Global_4456448.f_46628[iVar1 /*27*/].f_1 = { 0f, 0f, 0f };
			Global_4456448.f_46628[iVar1 /*27*/].f_4 = { 0f, 0f, 0f };
			Global_4456448.f_46628[iVar1 /*27*/].f_25 = 0f;
			Global_4456448.f_46628[iVar1 /*27*/].f_26 = 0;
			iVar2 = 0;
			while (iVar2 <= 4)
			{
				Global_4456448.f_46628[iVar1 /*27*/].f_7[iVar2] = 0;
				Global_4456448.f_46628[iVar1 /*27*/].f_13[iVar2] = 0;
				Global_4456448.f_46628[iVar1 /*27*/].f_19[iVar2] = 0;
				iVar2++;
			}
			Global_4456448.f_105[iVar0 /*11309*/].f_5406[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5424[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5442[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5460[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5478[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5496[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5514[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5532[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5550[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5568[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5586[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5604[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5622[iVar1] = 0;
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				Global_4456448.f_105[iVar0 /*11309*/].f_5640[iVar1 /*33*/][iVar2] = -1;
				iVar2++;
			}
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_11036[iVar1 /*16*/]), "", 64);
			Global_4456448.f_105[iVar0 /*11309*/].f_11018[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10948[iVar1 /*4*/].f_1 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10948[iVar1 /*4*/] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10948[iVar1 /*4*/].f_3 = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_10948[iVar1 /*4*/].f_2 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_6202[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_39[iVar1] = -1;
			Global_4456448.f_91708[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_6224[iVar1] = 60000;
			Global_4456448.f_105[iVar0 /*11309*/].f_6242[iVar1] = 60000;
			Global_4456448.f_105[iVar0 /*11309*/].f_10876[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10894[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10912[iVar1] = 0;
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_6346[iVar2 /*16*/]), "", 64);
				Global_4456448.f_105[iVar0 /*11309*/].f_6260[iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			Global_4456448.f_45485[iVar1 /*5*/][iVar0] = -1;
			Global_4456448.f_45571[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_45657[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_45743[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_45829[iVar1 /*5*/][iVar0] = 0;
			Global_4456448.f_45915[iVar1 /*5*/][iVar0] = 1500;
			Global_4456448.f_46001[iVar1 /*5*/][iVar0] = 1400;
			Global_4456448.f_46087[iVar1 /*5*/][iVar0] = 35;
			StringCopy(&(Global_1646426.f_152[iVar0 /*273*/][iVar1 /*16*/]), "", 64);
			Global_1646426.f_6[iVar0 /*18*/][iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_734[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_752[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4343[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4361[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4379[iVar1] = 1;
			Global_4456448.f_105[iVar0 /*11309*/].f_4451[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4469[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4547[iVar1] = 10000;
			Global_4456448.f_105[iVar0 /*11309*/].f_4491[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4509[iVar1] = -2;
			Global_4456448.f_105[iVar0 /*11309*/].f_4527[iVar1] = 1;
			Global_4456448.f_105[iVar0 /*11309*/].f_4583[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_4397[iVar1] = 1;
			Global_4456448.f_105[iVar0 /*11309*/].f_4601[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4620[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4904[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4940[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4656[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4638[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4796[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4922[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4958[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4850[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4868[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4814[iVar1] = 100;
			Global_4456448.f_105[iVar0 /*11309*/].f_4674[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_4726[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_4778[iVar1] = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_4832[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4886[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4976[iVar1] = -1f;
			Global_4456448.f_105[iVar0 /*11309*/].f_1148[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_1166[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_1184[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1202[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1238[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_770[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_788[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1220[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1256[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_9985[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10003[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10021[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10039[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10057[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10075[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10093[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10129[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10291[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10111[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10147[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10165[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10183[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10201[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10219[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_642[iVar1] = 5;
			Global_4456448.f_105[iVar0 /*11309*/].f_660[iVar1] = 20;
			Global_4456448.f_105[iVar0 /*11309*/].f_1058[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_5280[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5298[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5316[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5334[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_5352[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_5370[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1112[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1130[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4415[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_4433[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_678[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_696[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_716[iVar1] = 0;
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_6449[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_6722[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_6995[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_7814[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_7268[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_7541[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_9725[0 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_9725[1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_8087[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_8360[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_8633[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_8906[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_9179[iVar1 /*16*/]), "", 64);
			StringCopy(&(Global_4456448.f_105[iVar0 /*11309*/].f_9452[iVar1 /*16*/]), "", 64);
			Global_4456448.f_105[iVar0 /*11309*/].f_5134[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5170[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5152[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_4994[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_5046[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_16 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/] = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_3 = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_6 = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_9 = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_10 = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_19 = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_17 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_33 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_13 = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_18 = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_20 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_21 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_22 = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_23 = 120;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_28 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_29 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_34 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_35 = 12;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_30 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_31 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1278[iVar1 /*36*/].f_32 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_16 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/] = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_3 = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_6 = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_9 = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_10 = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_19 = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_17 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_33 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_13 = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_18 = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_20 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_21 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_22 = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_23 = 120;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_28 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_29 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_34 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_35 = 12;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_30 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_31 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_1891[iVar1 /*36*/].f_32 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5098[iVar1] = 3f;
			Global_4456448.f_105[iVar0 /*11309*/].f_5116[iVar1] = 0.001f;
			Global_4456448.f_105[iVar0 /*11309*/].f_4565[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5188[iVar1] = 10.5f;
			Global_4456448.f_105[iVar0 /*11309*/].f_5206[iVar1] = 1f;
			Global_4456448.f_105[iVar0 /*11309*/].f_5224[iVar1] = 1f;
			Global_4456448.f_105[iVar0 /*11309*/].f_5388[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10654[iVar1 /*13*/] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10654[iVar1 /*13*/].f_1 = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10654[iVar1 /*13*/].f_2 = { 0f, 0f, 0f };
			Global_4456448.f_105[iVar0 /*11309*/].f_806[iVar1] = 12;
			Global_4456448.f_105[iVar0 /*11309*/].f_824[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_842[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_860[iVar1] = 12;
			Global_4456448.f_105[iVar0 /*11309*/].f_878[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_896[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_914[iVar1] = 100;
			Global_4456448.f_105[iVar0 /*11309*/].f_10384[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10636[iVar1] = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_932[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_950[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_968[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_986[iVar1] = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_1004[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_1022[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10345[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_1040[iVar1] = -2;
			Global_4456448.f_105[iVar0 /*11309*/].f_1076[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_1094[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_3187[iVar1 /*9*/] = 1000;
			Global_4456448.f_105[iVar0 /*11309*/].f_3187[iVar1 /*9*/].f_1 = 1.15f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3187[iVar1 /*9*/].f_2 = 25;
			Global_4456448.f_105[iVar0 /*11309*/].f_3187[iVar1 /*9*/].f_7 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_3187[iVar1 /*9*/].f_3 = 1;
			Global_4456448.f_105[iVar0 /*11309*/].f_3187[iVar1 /*9*/].f_5 = 25;
			Global_4456448.f_105[iVar0 /*11309*/].f_3187[iVar1 /*9*/].f_6 = 10f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3187[iVar1 /*9*/].f_8 = 100;
			Global_4456448.f_105[iVar0 /*11309*/].f_3546[iVar1 /*3*/] = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3546[iVar1 /*3*/].f_1 = 1;
			Global_4456448.f_105[iVar0 /*11309*/].f_3546[iVar1 /*3*/].f_2 = 50;
			Global_4456448.f_105[iVar0 /*11309*/].f_3341[iVar1 /*12*/] = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3341[iVar1 /*12*/].f_1[0] = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3341[iVar1 /*12*/].f_1[1] = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3341[iVar1 /*12*/].f_1[2] = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3341[iVar1 /*12*/].f_1[3] = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3341[iVar1 /*12*/].f_6 = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3341[iVar1 /*12*/].f_7 = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3341[iVar1 /*12*/].f_8 = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3341[iVar1 /*12*/].f_9 = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3341[iVar1 /*12*/].f_10 = 0f;
			Global_4456448.f_105[iVar0 /*11309*/].f_3341[iVar1 /*12*/].f_11 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_3667[iVar1 /*3*/] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_3667[iVar1 /*3*/].f_1 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_3667[iVar1 /*3*/].f_2 = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10930[iVar1] = 0;
			iVar109 = 0;
			iVar109 = 0;
			while (iVar109 <= 19)
			{
				Global_4456448.f_105[iVar0 /*11309*/].f_3719[iVar1 /*21*/][iVar109] = 0;
				iVar109++;
			}
			Global_4456448.f_105[iVar0 /*11309*/].f_10402[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10420[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10438[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10456[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10474[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10492[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10510[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10528[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10546[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10564[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10582[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_9758[iVar1 /*5*/][0] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_9758[iVar1 /*5*/][1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_9758[iVar1 /*5*/][2] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_9758[iVar1 /*5*/][3] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_9844[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_9862[iVar1 /*4*/][0] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_9862[iVar1 /*4*/][1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_9862[iVar1 /*4*/][2] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_9931[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_9949[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_9967[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_5244[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10237[iVar1] = 0;
			Global_4456448.f_105[iVar0 /*11309*/].f_10255[iVar1] = -1;
			Global_4456448.f_105[iVar0 /*11309*/].f_10273[iVar1] = 0;
			func_291(&(Global_4456448.f_105[iVar0 /*11309*/].f_3598[iVar1 /*4*/]));
			iVar1++;
		}
		Global_4456448.f_105[iVar0 /*11309*/].f_4078 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4340 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4077 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4339 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4080 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4081 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4082 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4083 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4084 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_4342 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_1274 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_1275 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_440 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_441 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_630 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_631 = -1;
		Global_4456448.f_105[iVar0 /*11309*/].f_6411 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6412 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6413 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6414 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6415 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6416 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6417 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6418 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6419 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6420 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6421 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6422 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6423 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6424 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6425 = 0;
		Global_4456448.f_105[iVar0 /*11309*/].f_6426 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_127345[iVar0] = 0;
		Global_4456448.f_127350[iVar0] = 0;
		Global_4456448.f_127355[iVar0] = 0;
		Global_4456448.f_127360[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_127372 = 0;
	Global_4456448.f_127373 = 0;
	Global_4456448.f_127374 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_127375[iVar0] = 0;
		Global_4456448.f_127386[iVar0] = 0;
		Global_4456448.f_127397[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_78 = { 0f, 0f, 0f };
	Global_4456448.f_47099 = { 0f, 0f, 0f };
	Global_4456448.f_101 = 0f;
	Global_4456448.f_154944 = { 0f, 0f, 0f };
	Global_4456448.f_161211 = 0;
	Global_4456448.f_161234 = 0;
	Global_4456448.f_139707[0] = 0;
	Global_4456448.f_139707[1] = 0;
	Global_4456448.f_139711 = 0;
	Global_4456448.f_139706 = 0;
	Global_4456448.f_155692 = 0;
	Global_4456448.f_155693 = 0;
	Global_4456448.f_155694 = 0;
	Global_4456448.f_155695 = 0;
	Global_4456448.f_155697 = 0;
	Global_4456448.f_155699 = 0;
	Global_4456448.f_155701 = 0;
	Global_4456448.f_155704 = 0;
	Global_4456448.f_155705 = 0;
	Global_4456448.f_155706 = 0;
	Global_4456448.f_155707 = 0;
	Global_4456448.f_155708 = 0;
	Global_4456448.f_155709 = 0;
	Global_4456448.f_155710 = 0;
	Global_4456448.f_155711 = 0;
	Global_4456448.f_155717 = -1;
	Global_4456448.f_155718 = -1;
	Global_4456448.f_155719 = -1;
	Global_4456448.f_155720 = -1;
	Global_4456448.f_155721 = -1;
	Global_4456448.f_155722 = -1;
	Global_4456448.f_155723 = -1;
	Global_4456448.f_155724 = -1;
	Global_4456448.f_155725 = -1;
	Global_4456448.f_155726 = -1;
	Global_4456448.f_155727 = 1.5f;
	Global_4456448.f_52674 = 0;
	Global_4456448.f_52675 = 0;
	iVar0 = 0;
	while (iVar0 <= 101)
	{
		Global_4456448.f_48124[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_49864[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_47103[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_47103[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_47103[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_48843[iVar0 /*10*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_48843[iVar0 /*10*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_48843[iVar0 /*10*/][2 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_48431[iVar0] = 0f;
		Global_4456448.f_50171[iVar0] = 0f;
		Global_4456448.f_51829[iVar0] = 1f;
		Global_4456448.f_48740[iVar0] = 1f;
		Global_4456448.f_51932[iVar0] = 1f;
		Global_4456448.f_52035[iVar0] = 0f;
		Global_4456448.f_52138[iVar0] = 0f;
		Global_4456448.f_50274[iVar0] = -1;
		Global_4456448.f_50377[iVar0] = 0;
		Global_4456448.f_51623[iVar0] = 0f;
		Global_4456448.f_50480[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_50787[iVar0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_51094[iVar0] = -1;
		Global_4456448.f_51197[iVar0] = 0;
		Global_4456448.f_48534[iVar0] = 0;
		Global_4456448.f_48637[iVar0] = 0;
		Global_4456448.f_51403[iVar0] = -1;
		Global_4456448.f_51506[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_55682 = 0;
	if (bParam0)
	{
		Global_4456448.f_55684 = 0;
		Global_4456448.f_55692 = 0;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		Global_4456448.f_51609[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_55690 = 0;
	Global_4456448.f_55691 = 0;
	Global_4456448.f_58042 = 0f;
	Global_4456448.f_61781 = 0;
	iVar0 = 0;
	while (iVar0 <= 199)
	{
		Global_4456448.f_61782[iVar0 /*80*/] = { 0f, 0f, 0f };
		Global_4456448.f_61782[iVar0 /*80*/].f_6 = 0f;
		Global_4456448.f_61782[iVar0 /*80*/].f_7 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_9 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_8 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_10 = 1;
		Global_4456448.f_61782[iVar0 /*80*/].f_21 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_22 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_12 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_13 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_14 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_15 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_16 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_17 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_11 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_48 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_49 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_50 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_18 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_19 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_20 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_23 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_51 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_24 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_25 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_26 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_27 = 1;
		Global_4456448.f_61782[iVar0 /*80*/].f_37 = 10f;
		Global_4456448.f_61782[iVar0 /*80*/].f_38 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_67 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_68 = 1;
		Global_4456448.f_61782[iVar0 /*80*/].f_71 = { 0f, 0f, 0f };
		Global_4456448.f_61782[iVar0 /*80*/].f_74 = 0f;
		Global_4456448.f_61782[iVar0 /*80*/].f_75 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_76 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_77 = 0f;
		Global_4456448.f_61782[iVar0 /*80*/].f_78 = 0f;
		Global_4456448.f_61782[iVar0 /*80*/].f_79 = -1;
		Global_4456448.f_61782[iVar0 /*80*/].f_69 = 0;
		Global_4456448.f_61782[iVar0 /*80*/].f_70 = -1;
		iVar0++;
	}
	func_289();
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		func_287(&(Global_4456448.f_158676[iVar0 /*248*/]));
		iVar0++;
	}
	Global_4456448.f_161157 = 0;
	Global_4456448.f_77882 = 0;
	Global_4456448.f_77883 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_4456448.f_77884[iVar0 /*39*/] = { 0f, 0f, 0f };
		Global_4456448.f_77884[iVar0 /*39*/].f_6 = 0f;
		Global_4456448.f_77884[iVar0 /*39*/].f_7 = 0;
		Global_4456448.f_77884[iVar0 /*39*/].f_8 = -1;
		Global_4456448.f_77884[iVar0 /*39*/].f_12 = -1;
		Global_4456448.f_77884[iVar0 /*39*/].f_11 = -1;
		Global_4456448.f_77884[iVar0 /*39*/].f_13 = 1;
		Global_4456448.f_77884[iVar0 /*39*/].f_18 = 0;
		Global_4456448.f_77884[iVar0 /*39*/].f_31 = 0;
		Global_4456448.f_77884[iVar0 /*39*/].f_14 = 0;
		Global_4456448.f_77884[iVar0 /*39*/].f_28 = 0;
		Global_4456448.f_77884[iVar0 /*39*/].f_29 = 0;
		Global_4456448.f_77884[iVar0 /*39*/].f_30 = 0;
		Global_4456448.f_77884[iVar0 /*39*/].f_15 = -1;
		Global_4456448.f_77884[iVar0 /*39*/].f_16 = -1;
		Global_4456448.f_77884[iVar0 /*39*/].f_17 = -1;
		Global_4456448.f_77884[iVar0 /*39*/].f_9 = 0;
		Global_4456448.f_77884[iVar0 /*39*/].f_10 = 1;
		Global_4456448.f_77884[iVar0 /*39*/].f_34 = 0;
		Global_4456448.f_77884[iVar0 /*39*/].f_33 = 0;
		Global_4456448.f_77884[iVar0 /*39*/].f_36 = -1;
		Global_4456448.f_77884[iVar0 /*39*/].f_37 = -1;
		Global_4456448.f_77884[iVar0 /*39*/].f_38 = -1;
		iVar0++;
	}
	Global_4456448.f_61306 = 0;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		func_286(&(Global_4456448.f_61307[iVar0 /*22*/]));
		iVar0++;
	}
	Global_4456448.f_61638 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_61639[iVar0 /*7*/] = { 0f, 0f, 0f };
		Global_4456448.f_61639[iVar0 /*7*/].f_3 = 0f;
		Global_4456448.f_61639[iVar0 /*7*/].f_4 = 0;
		Global_4456448.f_61639[iVar0 /*7*/].f_5 = 0;
		Global_4456448.f_61639[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	if (bParam0)
	{
		Global_4456448.f_58043 = 3.5f;
		Global_4456448.f_58044 = 7f;
		Global_4456448.f_58045 = 0f;
		Global_4456448.f_58046 = 0f;
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			Global_4456448.f_58050[iVar0] = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_4456448.f_58098[iVar0] = -1;
			Global_4456448.f_58103[iVar0] = -1;
			Global_4456448.f_58108[iVar0] = -1;
			Global_4456448.f_58113[iVar0] = 1001;
			iVar0++;
		}
	}
	Global_4456448.f_139745 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_55671[iVar0] = 0;
		Global_4456448.f_144740[iVar0] = -1;
		Global_4456448.f_144801[iVar0] = -1;
		iVar1 = 0;
		while (iVar1 <= 16)
		{
			Global_4456448.f_55177[iVar1 /*29*/][iVar0] = 0;
			Global_4456448.f_55177[iVar1 /*29*/].f_5[iVar0] = 99999;
			Global_4456448.f_55177[iVar1 /*29*/].f_10[iVar0] = 0;
			Global_4456448.f_55177[iVar1 /*29*/].f_15[iVar0] = 0;
			Global_4456448.f_55177[iVar1 /*29*/].f_20[iVar0] = 0;
			iVar1++;
		}
		Global_4456448.f_155355[iVar0] = 0;
		Global_4456448.f_155360[iVar0] = 1f;
		Global_4456448.f_162139[iVar0] = -1;
		Global_4456448.f_58124[iVar0] = -1;
		iVar0++;
	}
	if (bParam0)
	{
		Global_4456448.f_58129 = 1;
	}
	Global_4456448.f_58131 = 0;
	Global_4456448.f_58132 = 0;
	Global_4456448.f_58133 = 0;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_58134[iVar0 /*151*/] = { 0f, 0f, 0f };
		Global_4456448.f_58134[iVar0 /*151*/].f_4 = { 0f, 0f, 0f };
		Global_4456448.f_58134[iVar0 /*151*/].f_3 = 0f;
		Global_4456448.f_58134[iVar0 /*151*/].f_7 = 50f;
		Global_4456448.f_58134[iVar0 /*151*/].f_8 = 0f;
		Global_4456448.f_58134[iVar0 /*151*/].f_9 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_10 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_11 = { 0f, 0f, 0f };
		Global_4456448.f_58134[iVar0 /*151*/].f_14 = 0f;
		Global_4456448.f_58134[iVar0 /*151*/].f_15 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_16 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_27 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_31 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_32 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_34 = 0.8f;
		Global_4456448.f_58134[iVar0 /*151*/].f_35 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_50 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_47 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_48 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_49 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_51 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_52 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_53 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_54 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_55 = 60;
		Global_4456448.f_58134[iVar0 /*151*/].f_56 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_29 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_30 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_72 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_71 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_73 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_41 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_114 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_36 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_37 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_38 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_74 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_39 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_57 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_58 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_59 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_102 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_103 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_104 = { 0f, 0f, 0f };
		Global_4456448.f_58134[iVar0 /*151*/].f_107 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_100 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_101 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_108 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_115 = 1000;
		Global_4456448.f_58134[iVar0 /*151*/].f_113 = 1;
		Global_4456448.f_58134[iVar0 /*151*/].f_117 = 0f;
		Global_4456448.f_58134[iVar0 /*151*/].f_118 = 1f;
		Global_4456448.f_58134[iVar0 /*151*/].f_119 = 3f;
		Global_4456448.f_58134[iVar0 /*151*/].f_120 = 4f;
		Global_4456448.f_58134[iVar0 /*151*/].f_121 = 3f;
		Global_4456448.f_58134[iVar0 /*151*/].f_122 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_123 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_124 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_125 = 5f;
		Global_4456448.f_58134[iVar0 /*151*/].f_128 = 0f;
		Global_4456448.f_58134[iVar0 /*151*/].f_33 = 0;
		Global_4456448.f_58134[iVar0 /*151*/].f_116 = 0f;
		Global_4456448.f_58134[iVar0 /*151*/].f_126 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_127 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_129 = { 0f, 0f, 0f };
		StringCopy(&(Global_4456448.f_58134[iVar0 /*151*/].f_132), "", 64);
		Global_4456448.f_58134[iVar0 /*151*/].f_148 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_149 = -1;
		Global_4456448.f_58134[iVar0 /*151*/].f_150 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_58134[iVar0 /*151*/].f_17[iVar1] = 0;
			Global_4456448.f_58134[iVar0 /*151*/].f_22[iVar1] = 99999;
			Global_4456448.f_58134[iVar0 /*151*/].f_84[iVar1] = 0;
			Global_4456448.f_58134[iVar0 /*151*/].f_89[iVar1] = 0;
			Global_4456448.f_58134[iVar0 /*151*/].f_61[iVar1] = -1;
			Global_4456448.f_58134[iVar0 /*151*/].f_66[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		StringCopy(&(Global_4456448.f_155003[iVar0 /*18*/]), "", 64);
		Global_4456448.f_155003[iVar0 /*18*/].f_16 = 0;
		Global_4456448.f_155003[iVar0 /*18*/].f_17 = -1;
		iVar0++;
	}
	Global_4456448.f_79172 = 0;
	Global_4456448.f_79173 = 0;
	if (bParam0)
	{
		if (func_133() && !func_197())
		{
			Global_4456448.f_79174 = -1;
		}
		else
		{
			Global_4456448.f_79174 = 0;
		}
	}
	Global_4456448.f_79175 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_79181[iVar0 /*70*/] = { 0f, 0f, 0f };
		Global_4456448.f_79181[iVar0 /*70*/].f_3 = { 0f, 0f, 0f };
		Global_4456448.f_79181[iVar0 /*70*/].f_15 = 76;
		Global_4456448.f_79181[iVar0 /*70*/].f_6 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_7 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_23 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_24 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_9 = 1f;
		Global_4456448.f_79181[iVar0 /*70*/].f_26 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_27 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_28 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_35 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_32 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_38 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_36 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_33 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_39 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_37 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_34 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_40 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_29 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_30 = -1;
		Global_4456448.f_79181[iVar0 /*70*/].f_31 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_41 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_42 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_43 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_44 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_45 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_46 = 0;
		Global_4456448.f_79181[iVar0 /*70*/].f_47 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_79181[iVar0 /*70*/].f_10[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	func_285();
	Global_4456448.f_161682 = 0;
	Global_4456448.f_161682.f_1 = 0;
	Global_4456448.f_161682.f_2 = 0;
	Global_4456448.f_161682.f_3 = 0;
	Global_4456448.f_161682.f_4 = 0;
	func_284();
	Global_4456448.f_161676 = -1;
	Global_4456448.f_161677 = 0;
	Global_4456448.f_161679 = 0;
	Global_4456448.f_161678 = -1;
	Global_4456448.f_161687 = -1;
	Global_4456448.f_57972 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_4456448.f_127365[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_139759 = -1;
	Global_4456448.f_139760 = 15;
	Global_4456448.f_139761 = -1;
	Global_4456448.f_139766 = -1;
	Global_4456448.f_139767 = 0;
	Global_4456448.f_139762 = 2.5f;
	Global_4456448.f_139763 = 8f;
	Global_4456448.f_139764 = 2.5f;
	Global_4456448.f_139765 = 8f;
	Global_4456448.f_83453 = 0;
	Global_4456448.f_61780 = 0;
	if (bParam0)
	{
		Global_4456448.f_58049 = -1;
		Global_4456448.f_55688 = -1;
	}
	Global_4456448.f_83454 = 0;
	Global_4456448.f_83455 = 0;
	Global_4456448.f_83456 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_283(&(Global_4456448.f_83457[iVar0 /*250*/]));
		iVar0++;
	}
	Global_4456448.f_137613 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_137614[iVar0 /*9*/] = { 0f, 0f, 0f };
		Global_4456448.f_137614[iVar0 /*9*/].f_3 = { 0f, 0f, 0f };
		Global_4456448.f_137614[iVar0 /*9*/].f_6 = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4456448.f_127489 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_127496[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_4456448.f_127496[iVar0 /*19*/].f_3 = 0f;
		Global_4456448.f_127496[iVar0 /*19*/].f_4 = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_127490[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 59)
		{
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/] = { 0f, 0f, 0f };
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_3 = 0f;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_4 = 0;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_5 = 0;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_7 = -1;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_8 = 0;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_9 = -1;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_10 = -1;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_11 = -1;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_12 = 0;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_13 = 0;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_14 = 0;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_15 = 0;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_16 = 0;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_17 = -2;
			Global_4456448.f_128637[iVar0 /*1141*/][iVar1 /*19*/].f_18 = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_4456448.f_91941 = 0;
	Global_4456448.f_91945 = 0;
	Global_4456448.f_91946 = 0;
	Global_4456448.f_91943 = 50;
	iVar0 = 0;
	while (iVar0 <= 79)
	{
		func_282(&(Global_4456448.f_91947[iVar0 /*434*/]));
		iVar0++;
	}
	Global_4456448.f_127489 = 0;
	iVar0 = 0;
	while (iVar0 <= 59)
	{
		Global_4456448.f_127496[iVar0 /*19*/] = { 0f, 0f, 0f };
		Global_4456448.f_127496[iVar0 /*19*/].f_3 = 0f;
		Global_4456448.f_127496[iVar0 /*19*/].f_4 = 0;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		Global_4456448.f_55677[iVar1] = 0;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		Global_4456448.f_52677[iVar0 /*119*/].f_53 = 0;
		Global_4456448.f_52677[iVar0 /*119*/].f_46 = 0;
		Global_4456448.f_52677[iVar0 /*119*/].f_20 = 0f;
		Global_4456448.f_52677[iVar0 /*119*/].f_28 = 0f;
		Global_4456448.f_52677[iVar0 /*119*/].f_29 = 0f;
		Global_4456448.f_52677[iVar0 /*119*/].f_30 = 0f;
		Global_4456448.f_52677[iVar0 /*119*/].f_57 = 0f;
		Global_4456448.f_52677[iVar0 /*119*/].f_58 = 0f;
		Global_4456448.f_52677[iVar0 /*119*/] = 0;
		Global_4456448.f_52677[iVar0 /*119*/].f_21 = { 0f, 0f, 0f };
		Global_4456448.f_52677[iVar0 /*119*/].f_24 = { 0f, 0f, 0f };
		Global_4456448.f_52677[iVar0 /*119*/].f_27 = 1f;
		Global_4456448.f_52677[iVar0 /*119*/].f_99 = 10.5f;
		Global_4456448.f_52677[iVar0 /*119*/].f_101 = 1f;
		Global_4456448.f_52677[iVar0 /*119*/].f_102 = 0f;
		Global_4456448.f_52677[iVar0 /*119*/].f_103 = -1;
		Global_4456448.f_52677[iVar0 /*119*/].f_104 = 0f;
		Global_4456448.f_52677[iVar0 /*119*/].f_105 = 0;
		Global_4456448.f_52677[iVar0 /*119*/].f_98 = 0;
		Global_4456448.f_52677[iVar0 /*119*/].f_54 = 0;
		Global_4456448.f_52677[iVar0 /*119*/].f_55 = 0;
		Global_4456448.f_52677[iVar0 /*119*/].f_56 = -1;
		Global_4456448.f_52677[iVar0 /*119*/].f_19 = 1f;
		Global_4456448.f_52677[iVar0 /*119*/].f_106 = -1;
		Global_4456448.f_52677[iVar0 /*119*/].f_107 = -1f;
		Global_4456448.f_52677[iVar0 /*119*/].f_108 = 0f;
		Global_4456448.f_52677[iVar0 /*119*/].f_109 = 0f;
		Global_4456448.f_52677[iVar0 /*119*/].f_110 = -1;
		Global_4456448.f_52677[iVar0 /*119*/].f_112 = -1;
		Global_4456448.f_52677[iVar0 /*119*/].f_113 = -1;
		Global_4456448.f_52677[iVar0 /*119*/].f_114 = -1;
		Global_4456448.f_52677[iVar0 /*119*/].f_115 = 0;
		Global_4456448.f_52677[iVar0 /*119*/].f_116 = 0;
		Global_4456448.f_52677[iVar0 /*119*/].f_117 = 0;
		Global_4456448.f_52677[iVar0 /*119*/].f_47 = 0;
		if (Global_4456448.f_52677[iVar0 /*119*/].f_111 != 0)
		{
			GRAPHICS::DELETE_CHECKPOINT(Global_4456448.f_52677[iVar0 /*119*/].f_111);
			Global_4456448.f_52677[iVar0 /*119*/].f_111 = 0;
		}
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_52677[iVar0 /*119*/].f_1[iVar1 /*3*/] = { 0f, 0f, 0f };
			Global_4456448.f_52677[iVar0 /*119*/].f_14[iVar1] = 0f;
			Global_4456448.f_52677[iVar0 /*119*/].f_36[iVar1] = 0;
			Global_4456448.f_52677[iVar0 /*119*/].f_41[iVar1] = 0;
			Global_4456448.f_52677[iVar0 /*119*/].f_31[iVar1] = 0;
			Global_4456448.f_52677[iVar0 /*119*/].f_64[iVar1] = 0;
			Global_4456448.f_52677[iVar0 /*119*/].f_69[iVar1] = 99999;
			Global_4456448.f_52677[iVar0 /*119*/].f_74[iVar1] = 0;
			Global_4456448.f_52677[iVar0 /*119*/].f_79[iVar1] = 0;
			Global_4456448.f_52677[iVar0 /*119*/].f_59[iVar1] = 0;
			Global_4456448.f_52677[iVar0 /*119*/].f_84[iVar1] = 0;
			Global_4456448.f_52677[iVar0 /*119*/].f_89[iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	Global_4456448.f_137611 = 0;
	Global_4456448.f_54 = 0;
	Global_4456448.f_157723 = 12;
	Global_4456448.f_157724 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_154948[iVar0] = -1;
		Global_4456448.f_154953[iVar0] = -1;
		iVar0++;
	}
	Global_4456448.f_58130 = 0;
	Global_4456448.f_155712 = -1;
	Global_4456448.f_154958 = 0;
	Global_4456448.f_154947 = 0;
	Global_4456448.f_154960 = 0;
	Global_4456448.f_154961 = 0;
	Global_4456448.f_154959 = 0;
	Global_4456448.f_154962 = 0;
	Global_4456448.f_154963 = 1;
	Global_4456448.f_154963.f_1 = 0;
	Global_4456448.f_154963.f_2 = 4;
	Global_4456448.f_154963.f_29[0] = 0;
	Global_4456448.f_154963.f_29[1] = 0;
	Global_4456448.f_154963.f_29[2] = 0;
	Global_4456448.f_154963.f_29[3] = 0;
	Global_4456448.f_154963.f_34[0] = 0;
	Global_4456448.f_154963.f_34[1] = 0;
	Global_4456448.f_154963.f_34[2] = 0;
	Global_4456448.f_154963.f_34[3] = 0;
	Global_4456448.f_154963.f_3 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_154963.f_4[iVar0] = 0;
		Global_4456448.f_154963.f_9[iVar0] = 0;
		Global_4456448.f_154963.f_14[iVar0] = 0;
		Global_4456448.f_154963.f_19[iVar0] = 0;
		Global_4456448.f_154963.f_24[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_155002 = 5;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_139718[iVar0] = 0;
		Global_4456448.f_45465[iVar0] = 0;
		Global_4456448.f_45470[iVar0] = 0;
		Global_4456448.f_162192[iVar0] = 0f;
		iVar0++;
	}
	func_279();
	Global_4456448.f_161210 = -1;
	iVar110 = 0;
	while (iVar110 <= 29)
	{
		Global_4456448.f_133587[iVar110] = -1;
		Global_4456448.f_133556[iVar110] = -1;
		iVar111 = 0;
		while (iVar111 <= 12)
		{
			iVar112 = 0;
			while (iVar112 <= 3)
			{
				Global_4456448.f_133618[iVar110 /*66*/][iVar111 /*5*/][iVar112] = -1;
				Global_4456448.f_135599[iVar110 /*66*/][iVar111 /*5*/][iVar112] = -1;
				iVar112++;
			}
			iVar111++;
		}
		iVar110++;
	}
	Global_4456448.f_161316 = 0;
	Global_4456448.f_161327 = { 0f, 0f, 0f };
	Global_4456448.f_161330 = { 0f, 0f, 0f };
	Global_4456448.f_162190 = 0;
	Global_4456448.f_162353 = 0;
	Global_4456448.f_162191 = 20;
	Global_4456448.f_162225 = 500;
	Global_4456448.f_162226 = 10f;
	Global_4456448.f_162227 = 0.5f;
	Global_4456448.f_162228 = 1f;
	Global_4456448.f_162229 = 0f;
	Global_4456448.f_162230 = 25f;
	Global_4456448.f_162231 = 15f;
	Global_4456448.f_162232 = 6f;
	Global_4456448.f_162233 = 4f;
	Global_4456448.f_162234 = 10;
	Global_4456448.f_162235 = 1;
	Global_4456448.f_162236 = 0f;
	func_256();
	func_278(&(Global_4456448.f_165640));
	Global_4456448.f_162237 = 0.5f;
	Global_4456448.f_162352 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_4456448.f_162354[iVar0] = 6;
		iVar0++;
	}
	Global_4456448.f_162387 = 0;
	iVar112 = 0;
	while (iVar112 <= 4)
	{
		Global_4456448.f_162390[iVar112 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_162406[iVar112] = 0f;
		Global_4456448.f_162412[iVar112 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_162428[iVar112] = 0f;
		iVar112++;
	}
	Global_4456448.f_162435 = 0;
	Global_4456448.f_162436 = 0;
	Global_4456448.f_162437 = 0f;
	Global_4456448.f_162438 = 0;
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		Global_4456448.f_162339[iVar0] = 0;
		iVar0++;
	}
	Global_4456448.f_162337 = 12;
	Global_4456448.f_162338 = 3;
	Global_4456448.f_162440 = 0;
	Global_4456448.f_162441 = 30;
	Global_4456448.f_162442 = 2.5f;
	Var113.f_2 = 5;
	Var113.f_2.f_1.f_1 = -1;
	Var113.f_2.f_1.f_12 = 1092616192;
	Var113.f_2.f_1.f_13 = 1092616192;
	Var113.f_2.f_1.f_14 = 1101004800;
	Var113.f_2.f_1.f_15 = 1077936128;
	Var113.f_2.f_1.f_16 = 1119092736;
	Var113.f_2.f_1.f_17 = 1077936128;
	Var113.f_2.f_1.f_18 = 1065353216;
	Var113.f_2.f_1.f_19.f_1 = -1;
	Var113.f_2.f_1.f_19.f_12 = 1092616192;
	Var113.f_2.f_1.f_19.f_13 = 1092616192;
	Var113.f_2.f_1.f_19.f_14 = 1101004800;
	Var113.f_2.f_1.f_19.f_15 = 1077936128;
	Var113.f_2.f_1.f_19.f_16 = 1119092736;
	Var113.f_2.f_1.f_19.f_17 = 1077936128;
	Var113.f_2.f_1.f_19.f_18 = 1065353216;
	Var113.f_2.f_1.f_19.f_19.f_1 = -1;
	Var113.f_2.f_1.f_19.f_19.f_12 = 1092616192;
	Var113.f_2.f_1.f_19.f_19.f_13 = 1092616192;
	Var113.f_2.f_1.f_19.f_19.f_14 = 1101004800;
	Var113.f_2.f_1.f_19.f_19.f_15 = 1077936128;
	Var113.f_2.f_1.f_19.f_19.f_16 = 1119092736;
	Var113.f_2.f_1.f_19.f_19.f_17 = 1077936128;
	Var113.f_2.f_1.f_19.f_19.f_18 = 1065353216;
	Var113.f_2.f_1.f_19.f_19.f_19.f_1 = -1;
	Var113.f_2.f_1.f_19.f_19.f_19.f_12 = 1092616192;
	Var113.f_2.f_1.f_19.f_19.f_19.f_13 = 1092616192;
	Var113.f_2.f_1.f_19.f_19.f_19.f_14 = 1101004800;
	Var113.f_2.f_1.f_19.f_19.f_19.f_15 = 1077936128;
	Var113.f_2.f_1.f_19.f_19.f_19.f_16 = 1119092736;
	Var113.f_2.f_1.f_19.f_19.f_19.f_17 = 1077936128;
	Var113.f_2.f_1.f_19.f_19.f_19.f_18 = 1065353216;
	Var113.f_2.f_1.f_19.f_19.f_19.f_19.f_1 = -1;
	Var113.f_2.f_1.f_19.f_19.f_19.f_19.f_12 = 1092616192;
	Var113.f_2.f_1.f_19.f_19.f_19.f_19.f_13 = 1092616192;
	Var113.f_2.f_1.f_19.f_19.f_19.f_19.f_14 = 1101004800;
	Var113.f_2.f_1.f_19.f_19.f_19.f_19.f_15 = 1077936128;
	Var113.f_2.f_1.f_19.f_19.f_19.f_19.f_16 = 1119092736;
	Var113.f_2.f_1.f_19.f_19.f_19.f_19.f_17 = 1077936128;
	Var113.f_2.f_1.f_19.f_19.f_19.f_19.f_18 = 1065353216;
	Var113.f_98.f_4 = 1117782016;
	Global_4456448.f_165254 = { Var113 };
	Var216 = -1;
	Global_4456448.f_165615 = { Var216 };
}

void func_278(var uParam0)
{
	struct<14> Var0;
	int iVar14;
	
	Var0 = 1077936128;
	Var0.f_1 = 1116471296;
	Var0.f_2 = 1086324736;
	Var0.f_3 = 1077936128;
	Var0.f_4 = 1114636288;
	Var0.f_5 = 1084227584;
	Var0.f_6 = 1084227584;
	Var0.f_7 = 1089470464;
	Var0.f_8 = 1082130432;
	Var0.f_9 = 4;
	*uParam0 = { Var0 };
	iVar14 = 0;
	while (iVar14 <= 3)
	{
		Global_4456448.f_165640.f_9[iVar14] = -1;
		iVar14++;
	}
}

void func_279()
{
	int iVar0;
	
	Global_4456448.f_162445 = 10;
	Global_4456448.f_162445.f_2808 = 0;
	iVar0 = 1;
	while (iVar0 <= 20)
	{
		func_280(iVar0);
		Global_4456448.f_162445.f_2418[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Global_4456448.f_162445.f_2717[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
	Global_4456448.f_162445.f_2724 = 100f;
	Global_4456448.f_162445.f_2727 = 0;
	Global_4456448.f_162445.f_2725 = 0f;
	Global_4456448.f_162445.f_2726 = 0f;
	Global_4456448.f_162445.f_2728 = 0;
	Global_4456448.f_162445.f_2795 = 360;
	Global_4456448.f_162445.f_2796 = 1200;
	Global_4456448.f_162445.f_2797 = 0;
	Global_4456448.f_162445.f_2798 = 0;
	Global_4456448.f_162445.f_2799 = 0;
	Global_4456448.f_162445.f_2802 = 0;
	Global_4456448.f_162445.f_2803 = 0;
	Global_4456448.f_162445.f_2804 = 0;
	Global_4456448.f_162445.f_2805 = 0;
	Global_4456448.f_162445.f_2806 = 0;
	Global_4456448.f_162445.f_2807 = 0;
	Global_4456448.f_162445.f_193[0 /*4*/][0] = func_183(7, 0, 0);
	Global_4456448.f_162445.f_1086[0 /*5*/][0] = func_183(5, 0, 0);
	Global_4456448.f_162445.f_2462[0 /*4*/][0] = func_183(15, 0, 0);
	Global_4456448.f_162445.f_873[0 /*4*/][0] = func_183(27, 0, 0);
}

void func_280(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= 21)
	{
		return;
	}
	Global_4456448.f_162445.f_1[iParam0] = func_184(13, iParam0, iVar0);
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_4456448.f_162445.f_23[iParam0 /*4*/][iVar0] = func_184(0, iParam0, iVar0);
		Global_4456448.f_162445.f_108[iParam0 /*4*/][iVar0] = func_184(1, iParam0, iVar0);
		Global_4456448.f_162445.f_278[iParam0 /*4*/][iVar0] = func_184(8, iParam0, iVar0);
		Global_4456448.f_162445.f_363[iParam0 /*4*/][iVar0] = func_184(9, iParam0, iVar0);
		Global_4456448.f_162445.f_448[iParam0 /*4*/][iVar0] = func_184(10, iParam0, iVar0);
		Global_4456448.f_162445.f_533[iParam0 /*4*/][iVar0] = func_184(12, iParam0, iVar0);
		Global_4456448.f_162445.f_193[iParam0 /*4*/][iVar0] = func_183(7, iParam0, iVar0);
		Global_4456448.f_162445.f_618[iParam0 /*4*/][iVar0] = func_184(24, iParam0, iVar0);
		Global_4456448.f_162445.f_703[iParam0 /*4*/][iVar0] = func_184(25, iParam0, iVar0);
		Global_4456448.f_162445.f_788[iParam0 /*4*/][iVar0] = func_184(26, iParam0, iVar0);
		Global_4456448.f_162445.f_873[iParam0 /*4*/][iVar0] = func_183(27, iParam0, iVar0);
		iVar0++;
	}
	Global_4456448.f_162445.f_958[iParam0] = func_184(3, iParam0, iVar0);
	Global_4456448.f_162445.f_2440[iParam0] = func_184(6, iParam0, iVar0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_162445.f_980[iParam0 /*5*/][iVar0] = func_184(4, iParam0, iVar0);
		Global_4456448.f_162445.f_1086[iParam0 /*5*/][iVar0] = func_183(5, iParam0, iVar0);
		Global_4456448.f_162445.f_1192[iParam0 /*5*/][iVar0] = func_184(14, iParam0, iVar0);
		Global_4456448.f_162445.f_1298[iParam0 /*5*/][iVar0] = func_184(28, iParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_4456448.f_162445.f_2462[iParam0 /*4*/][iVar0] = func_183(15, iParam0, iVar0);
		Global_4456448.f_162445.f_2547[iParam0 /*4*/][iVar0] = func_184(16, iParam0, iVar0);
		Global_4456448.f_162445.f_2632[iParam0 /*4*/][iVar0] = func_184(28, iParam0, iVar0);
		iVar0++;
	}
	Global_4456448.f_162445.f_2729[iParam0] = func_184(17, iParam0, iVar0);
	Global_4456448.f_162445.f_2773[iParam0] = func_184(18, iParam0, iVar0);
	Global_4456448.f_162445.f_2751[iParam0] = func_184(19, iParam0, iVar0);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Global_4456448.f_162445.f_1404[iParam0 /*5*/][iVar0] = func_182(iParam0, iVar0);
		Global_4456448.f_162445.f_1510[iParam0 /*5*/][iVar0] = func_184(20, iParam0, iVar0);
		Global_4456448.f_162445.f_1616[iParam0 /*5*/][iVar0] = func_184(21, iParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		Global_4456448.f_162445.f_1722[iParam0 /*11*/][iVar0] = OBJECT::_GET_WEAPON_HASH_FROM_PICKUP(func_281(iParam0, iVar0));
		Global_4456448.f_162445.f_1954[iParam0 /*11*/][iVar0] = 0;
		Global_4456448.f_162445.f_2186[iParam0 /*11*/][iVar0] = 0;
		iVar0++;
	}
	if (GAMEPLAY::IS_BIT_SET(360, iParam0))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_162445.f_2795), iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2795), iParam0);
	}
	if (GAMEPLAY::IS_BIT_SET(1200, iParam0))
	{
		GAMEPLAY::SET_BIT(&(Global_4456448.f_162445.f_2796), iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2796), iParam0);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2798), iParam0);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2799), iParam0);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2802), iParam0);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2803), iParam0);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2804), iParam0);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2805), iParam0);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2801), iParam0);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2800), iParam0);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2806), iParam0);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2807), iParam0);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2797), iParam0);
	GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_162445.f_2728), iParam0);
	iVar1 = 0;
	while (iVar1 <= 59)
	{
		Global_4456448.f_79181[iVar1 /*70*/].f_48[iParam0] = 76;
		Global_4456448.f_83382.f_48[iParam0] = 76;
		iVar1++;
	}
}

int func_281(int iParam0, int iParam1)
{
	if (iParam1 > 6)
	{
		iParam1 = (iParam1 - 5);
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 1:
					return joaat("pickup_weapon_combatpistol");
					break;
				
				case 2:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 3:
					return joaat("pickup_weapon_combatpistol");
					break;
				
				case 4:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 5:
					return joaat("pickup_weapon_combatpistol");
					break;
				
				case 6:
					return joaat("pickup_weapon_microsmg");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 1:
					return joaat("pickup_weapon_assaultrifle");
					break;
				
				case 2:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 3:
					return joaat("pickup_weapon_assaultrifle");
					break;
				
				case 4:
					return joaat("pickup_weapon_microsmg");
					break;
				
				case 5:
					return joaat("pickup_weapon_assaultrifle");
					break;
				
				case 6:
					return joaat("pickup_weapon_microsmg");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_combatmg");
					break;
				
				case 1:
					return joaat("pickup_weapon_combatmg");
					break;
				
				case 2:
					return joaat("pickup_weapon_combatmg");
					break;
				
				case 3:
					return joaat("pickup_weapon_pumpshotgun");
					break;
				
				case 4:
					return joaat("pickup_weapon_combatmg");
					break;
				
				case 5:
					return joaat("pickup_weapon_pumpshotgun");
					break;
				
				case 6:
					return joaat("pickup_weapon_combatmg");
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_carbinerifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 2:
					return joaat("pickup_weapon_rpg");
					break;
				
				case 3:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 4:
					return joaat("pickup_weapon_carbinerifle");
					break;
				
				case 5:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 6:
					return joaat("pickup_weapon_carbinerifle");
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_sawnoffshotgun");
					break;
				
				case 1:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 2:
					return joaat("pickup_weapon_sawnoffshotgun");
					break;
				
				case 3:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 4:
					return joaat("pickup_weapon_sawnoffshotgun");
					break;
				
				case 5:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 6:
					return joaat("pickup_weapon_sawnoffshotgun");
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_heavysniper");
					break;
				
				case 2:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 3:
					return joaat("pickup_weapon_grenade");
					break;
				
				case 4:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 5:
					return joaat("pickup_weapon_grenade");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_heavysniper");
					break;
				
				case 2:
					return joaat("pickup_weapon_assaultshotgun");
					break;
				
				case 3:
					return joaat("pickup_weapon_rpg");
					break;
				
				case 4:
					return joaat("pickup_weapon_carbinerifle");
					break;
				
				case 5:
					return joaat("pickup_weapon_grenade");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_grenadelauncher");
					break;
				
				case 2:
					return joaat("pickup_weapon_assaultshotgun");
					break;
				
				case 3:
					return joaat("pickup_weapon_grenade");
					break;
				
				case 4:
					return joaat("pickup_weapon_carbinerifle");
					break;
				
				case 5:
					return joaat("pickup_weapon_stickybomb");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_grenadelauncher");
					break;
				
				case 2:
					return joaat("pickup_weapon_assaultshotgun");
					break;
				
				case 3:
					return joaat("pickup_weapon_grenade");
					break;
				
				case 4:
					return joaat("pickup_weapon_minigun");
					break;
				
				case 5:
					return joaat("pickup_weapon_stickybomb");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_grenadelauncher");
					break;
				
				case 2:
					return joaat("pickup_weapon_minigun");
					break;
				
				case 3:
					return joaat("pickup_weapon_rpg");
					break;
				
				case 4:
					return joaat("pickup_weapon_minigun");
					break;
				
				case 5:
					return joaat("pickup_weapon_stickybomb");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
		
		default:
			switch (iParam1)
			{
				case 0:
					return joaat("pickup_weapon_advancedrifle");
					break;
				
				case 1:
					return joaat("pickup_weapon_grenadelauncher");
					break;
				
				case 2:
					return joaat("pickup_weapon_minigun");
					break;
				
				case 3:
					return joaat("pickup_weapon_rpg");
					break;
				
				case 4:
					return joaat("pickup_weapon_minigun");
					break;
				
				case 5:
					return joaat("pickup_weapon_stickybomb");
					break;
				
				case 6:
					return joaat("pickup_weapon_advancedrifle");
					break;
			}
			break;
	}
	return joaat("pickup_weapon_rpg");
}

void func_282(var uParam0)
{
	int iVar0;
	
	uParam0->f_44 = 0;
	uParam0->f_56 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0.75f;
	uParam0->f_19 = 0;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_37 = 0;
	uParam0->f_41 = 0;
	uParam0->f_42 = 0;
	uParam0->f_43 = -1;
	uParam0->f_308 = -1;
	uParam0->f_307 = -1;
	uParam0->f_309 = 0;
	uParam0->f_310 = 0;
	uParam0->f_311 = 20;
	uParam0->f_319 = -1;
	uParam0->f_67 = -1;
	uParam0->f_54 = -1;
	uParam0->f_39 = 0;
	uParam0->f_40 = -1;
	uParam0->f_55 = 0;
	uParam0->f_265 = 0;
	uParam0->f_266 = 0;
	uParam0->f_267 = 0;
	uParam0->f_268 = 0;
	uParam0->f_269 = 0;
	uParam0->f_270 = 0;
	uParam0->f_271 = 0;
	uParam0->f_272 = 0;
	uParam0->f_273 = 0;
	uParam0->f_274 = 0;
	uParam0->f_275 = 0;
	uParam0->f_276 = 0;
	uParam0->f_277 = 0;
	uParam0->f_278 = -1;
	uParam0->f_279 = 0;
	uParam0->f_280 = -1;
	uParam0->f_38 = 0;
	uParam0->f_17 = 0f;
	uParam0->f_5 = 50f;
	uParam0->f_413 = -101;
	uParam0->f_414 = -1;
	uParam0->f_423 = -1;
	uParam0->f_424 = -1f;
	uParam0->f_425 = -1;
	uParam0->f_426 = -1;
	uParam0->f_427 = 0;
	uParam0->f_428 = -1;
	uParam0->f_429 = -1;
	uParam0->f_430 = -1;
	uParam0->f_431 = -1;
	uParam0->f_432 = -1;
	uParam0->f_433 = -1;
	uParam0->f_6 = 0f;
	uParam0->f_7 = 0;
	uParam0->f_18 = 0;
	uParam0->f_8 = -1;
	uParam0->f_9 = { 0f, 0f, 0f };
	uParam0->f_12 = 0f;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_16 = 0f;
	uParam0->f_249 = 0;
	uParam0->f_75 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	uParam0->f_237 = 0;
	uParam0->f_249 = 0;
	uParam0->f_259 = 0;
	uParam0->f_260 = { 0f, 0f, 0f };
	uParam0->f_250 = 0;
	uParam0->f_258 = -1;
	uParam0->f_420 = -1;
	uParam0->f_78 = { 0f, 0f, 0f };
	uParam0->f_68 = -1;
	uParam0->f_69 = -1;
	uParam0->f_74 = 0;
	uParam0->f_70 = 0;
	uParam0->f_347 = 0;
	uParam0->f_358 = 1f;
	uParam0->f_359 = 0;
	uParam0->f_103 = 0;
	uParam0->f_292 = 0;
	uParam0->f_59 = 0;
	uParam0->f_295 = 250;
	uParam0->f_298 = 0;
	uParam0->f_299 = -1;
	uParam0->f_364 = -1;
	uParam0->f_300 = 0;
	uParam0->f_365 = 4;
	uParam0->f_332 = 0;
	uParam0->f_417 = 0;
	uParam0->f_418 = 0;
	uParam0->f_76 = 0;
	uParam0->f_238 = 0;
	uParam0->f_239 = 0;
	uParam0->f_240 = 0;
	uParam0->f_421 = -1;
	uParam0->f_422 = -1;
	uParam0->f_419 = 0;
	uParam0->f_77 = -1;
	uParam0->f_241 = -1;
	uParam0->f_242 = -1;
	uParam0->f_243 = -1;
	uParam0->f_218 = 0;
	uParam0->f_219 = -1;
	uParam0->f_220 = -1;
	uParam0->f_221 = 0;
	uParam0->f_222 = -1;
	uParam0->f_223 = -1;
	uParam0->f_320 = -1;
	uParam0->f_321 = -1;
	uParam0->f_324 = -1;
	uParam0->f_325 = -1;
	uParam0->f_322 = -1;
	uParam0->f_361 = -1;
	uParam0->f_360 = -1;
	uParam0->f_362 = -1;
	uParam0->f_363 = -1;
	uParam0->f_224 = -1;
	uParam0->f_225 = 0;
	uParam0->f_71 = 0;
	uParam0->f_412 = 1;
	uParam0->f_291 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_22[iVar0] = 0;
		uParam0->f_27[iVar0] = 2;
		uParam0->f_32[iVar0] = 99999;
		uParam0->f_281[iVar0] = -1;
		uParam0->f_286[iVar0] = -1;
		uParam0->f_333[iVar0] = 0;
		uParam0->f_338[iVar0] = 0;
		uParam0->f_348[iVar0] = -1;
		uParam0->f_353[iVar0] = -1;
		uParam0->f_367[iVar0] = -2;
		uParam0->f_244[iVar0] = 0;
		uParam0->f_326[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_156[0] = 0f;
	uParam0->f_165[0] = 0f;
	uParam0->f_183[0] = 0f;
	uParam0->f_104[0] = 0;
	uParam0->f_113[0] = -1;
	uParam0->f_122[0 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_147[0] = 3;
	uParam0->f_174[0] = -1;
	uParam0->f_201[0] = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		uParam0->f_81[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_104[iVar0 + 1] = 0;
		uParam0->f_156[iVar0 + 1] = 0f;
		uParam0->f_165[iVar0 + 1] = 0f;
		uParam0->f_183[iVar0 + 1] = 0f;
		uParam0->f_113[iVar0 + 1] = -1;
		uParam0->f_122[iVar0 + 1 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_147[iVar0 + 1] = 3;
		uParam0->f_174[iVar0 + 1] = -1;
		uParam0->f_201[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		uParam0->f_192[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_381[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_394[iVar0] = 0f;
		iVar0++;
	}
	uParam0->f_263 = -1;
	uParam0->f_264 = -1;
	uParam0->f_366 = -1;
	uParam0->f_372 = -1;
	uParam0->f_373 = -1;
	uParam0->f_374 = -1;
	uParam0->f_378 = -1;
	uParam0->f_379 = 0f;
	uParam0->f_375 = -1;
	uParam0->f_376 = -1;
	uParam0->f_377 = -1;
	uParam0->f_380 = -1;
	uParam0->f_406 = -1;
	uParam0->f_404 = 0;
	uParam0->f_405 = 0;
}

void func_283(var uParam0)
{
	int iVar0;
	int iVar1;
	
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
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	uParam0->f_57 = 0;
	uParam0->f_58 = 0;
	uParam0->f_129 = 0;
	uParam0->f_28 = -1;
	uParam0->f_29 = -1;
	uParam0->f_30 = -1f;
	uParam0->f_60 = 0;
	uParam0->f_63 = 1.2f;
	uParam0->f_62 = 0;
	uParam0->f_190 = -1;
	uParam0->f_191 = 10;
	uParam0->f_211 = -1;
	uParam0->f_212 = -1;
	uParam0->f_213 = 1;
	uParam0->f_216 = 60;
	uParam0->f_217 = 4.5f;
	uParam0->f_218 = -1;
	uParam0->f_219 = -1;
	uParam0->f_221 = 0;
	uParam0->f_182 = 1f;
	uParam0->f_174 = -1;
	uParam0->f_175 = -1;
	uParam0->f_176 = -1;
	uParam0->f_178 = 0;
	uParam0->f_177 = 0;
	uParam0->f_44 = -1;
	uParam0->f_88 = -1;
	uParam0->f_89 = -1;
	uParam0->f_90 = -1;
	uParam0->f_45 = -1;
	uParam0->f_85 = -1;
	uParam0->f_86 = -1;
	uParam0->f_87 = -1;
	uParam0->f_46 = 0;
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	uParam0->f_74 = -1;
	uParam0->f_75 = -1;
	uParam0->f_77 = -1;
	uParam0->f_127 = -1;
	uParam0->f_126 = -1;
	uParam0->f_76 = -1;
	uParam0->f_84 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = 0;
	uParam0->f_153 = 0;
	uParam0->f_158 = -1;
	uParam0->f_159 = { 0f, 0f, 0f };
	uParam0->f_162 = 0f;
	uParam0->f_163 = 0f;
	uParam0->f_164 = -1;
	uParam0->f_165 = -1;
	uParam0->f_155 = -1f;
	uParam0->f_154 = -1;
	uParam0->f_157 = 0;
	uParam0->f_222 = -1;
	uParam0->f_223 = 0;
	uParam0->f_41 = 0;
	uParam0->f_42 = 5;
	uParam0->f_170 = -1;
	uParam0->f_156 = 10;
	uParam0->f_171 = 0;
	uParam0->f_172 = 2;
	uParam0->f_173 = -1;
	uParam0->f_183 = -1f;
	uParam0->f_184 = 0;
	uParam0->f_185 = -1;
	uParam0->f_186 = 0;
	uParam0->f_187 = 10;
	uParam0->f_188 = -1;
	uParam0->f_189 = 0;
	uParam0->f_210 = -1;
	uParam0->f_37 = 1001f;
	uParam0->f_38 = 1001f;
	uParam0->f_39 = 1001f;
	uParam0->f_125 = 100f;
	uParam0->f_101 = -1;
	uParam0->f_102 = 1;
	uParam0->f_61 = 0;
	uParam0->f_59 = 0;
	uParam0->f_100 = -1;
	uParam0->f_115 = -1;
	uParam0->f_119 = -1;
	uParam0->f_118 = -1;
	uParam0->f_43 = 0;
	uParam0->f_180 = -1;
	uParam0->f_181 = 0;
	uParam0->f_117 = -1;
	uParam0->f_116 = -1;
	uParam0->f_114 = 0;
	uParam0->f_113 = 0;
	uParam0->f_128 = 0;
	uParam0->f_224 = { 0f, 0f, 0f };
	uParam0->f_227 = 0;
	uParam0->f_228 = -1;
	uParam0->f_229 = -1;
	uParam0->f_230 = 0;
	uParam0->f_231 = 0;
	iVar0 = 0;
	while (iVar0 < 17)
	{
		uParam0->f_192[iVar0] = -2;
		iVar0++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		uParam0->f_232[iVar1 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_245[iVar1] = 0f;
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_130[iVar0 /*3*/] = { 0f, 0f, 0f };
		uParam0->f_143[iVar0] = 0f;
		uParam0->f_148[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_13[iVar0] = 0;
		uParam0->f_18[iVar0] = 99999;
		uParam0->f_120[iVar0] = 0;
		uParam0->f_103[iVar0] = 0;
		uParam0->f_108[iVar0] = 0;
		uParam0->f_64[iVar0] = -1;
		uParam0->f_69[iVar0] = -1;
		uParam0->f_78[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_83 = -1;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_166[iVar0] = 0;
		iVar0++;
	}
}

void func_284()
{
	int iVar0;
	
	Global_4456448.f_161344 = 0;
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		Global_4456448.f_161345[iVar0 /*11*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_161345[iVar0 /*11*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_161345[iVar0 /*11*/].f_7 = 0;
		Global_4456448.f_161345[iVar0 /*11*/].f_8 = 0;
		Global_4456448.f_161345[iVar0 /*11*/].f_10 = 0f;
		Global_4456448.f_161345[iVar0 /*11*/].f_9 = 0;
		iVar0++;
	}
}

void func_285()
{
	int iVar0;
	int iVar1;
	
	Global_4456448.f_138782 = 0;
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		Global_4456448.f_138805[iVar0 /*36*/][0 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_138805[iVar0 /*36*/][1 /*3*/] = { 0f, 0f, 0f };
		Global_4456448.f_138805[iVar0 /*36*/].f_10 = 0;
		Global_4456448.f_138805[iVar0 /*36*/].f_21 = 0;
		Global_4456448.f_138805[iVar0 /*36*/].f_23 = 0f;
		Global_4456448.f_138805[iVar0 /*36*/].f_24 = 0f;
		Global_4456448.f_138805[iVar0 /*36*/].f_22 = 0;
		Global_4456448.f_138805[iVar0 /*36*/].f_7 = 0f;
		Global_4456448.f_138805[iVar0 /*36*/].f_9 = 0;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Global_4456448.f_138805[iVar0 /*36*/].f_11[iVar1] = -1;
			iVar1++;
		}
		Global_4456448.f_138805[iVar0 /*36*/].f_25 = 0;
		Global_4456448.f_138805[iVar0 /*36*/].f_26 = 2;
		Global_4456448.f_138805[iVar0 /*36*/].f_27 = -1;
		Global_4456448.f_138805[iVar0 /*36*/].f_28 = 0;
		Global_4456448.f_138805[iVar0 /*36*/].f_29 = 0f;
		Global_4456448.f_138805[iVar0 /*36*/].f_30 = 0;
		Global_4456448.f_138805[iVar0 /*36*/].f_31 = -1;
		Global_4456448.f_138805[iVar0 /*36*/].f_34 = 1;
		Global_4456448.f_138805[iVar0 /*36*/].f_35 = 120;
		iVar0++;
	}
}

void func_286(var uParam0)
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

void func_287(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_288(uParam0, iVar0);
		iVar0++;
	}
}

void func_288(var uParam0, int iParam1)
{
	*(uParam0[iParam1 /*3*/]) = { 0f, 0f, 0f };
	uParam0->f_91[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_182[iParam1] = 0;
}

void func_289()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_290(iVar0);
		iVar0++;
	}
	Global_4456448.f_162224 = 0;
}

void func_290(int iParam0)
{
	var uVar0;
	
	Global_4456448.f_162203[iParam0] = uVar0;
}

void func_291(var uParam0)
{
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_292(int iParam0)
{
	Global_4456448.f_55685 = iParam0;
	if (Global_4456448.f_55685 != 18 && Global_4456448.f_55685 != 19)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_4456448.f_28), 18);
	}
	func_293((func_295() || func_294()));
}

void func_293(var uParam0)
{
	Global_4194304 = uParam0;
}

var func_294()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_154961, 12);
}

int func_295()
{
	if ((GAMEPLAY::IS_BIT_SET(Global_4456448.f_28, 18) || Global_4456448.f_55685 == 18) || Global_4456448.f_55685 == 19)
	{
		return 1;
	}
	return 0;
}

void func_296(var uParam0)
{
	uParam0->f_4 = -1;
	uParam0->f_3 = -1;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_11 = 0;
	uParam0->f_12 = -1;
	StringCopy(&(uParam0->f_13), "", 24);
}

void func_297(var uParam0)
{
	uParam0->f_3 = 0;
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_4 = 0;
}

void func_298(char* sParam0)
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
	sParam0->f_63 = 6f;
	sParam0->f_64 = 0;
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
		func_301(&(sParam0->f_449[iVar0 /*4*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		func_300(&(sParam0->f_466[iVar0 /*5*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_299(&(sParam0->f_118[iVar0 /*11*/]));
		iVar0++;
	}
}

void func_299(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	StringCopy(&(uParam0->f_3), "", 32);
}

void func_300(var uParam0)
{
	*uParam0 = -1;
	func_301(&(uParam0->f_1));
}

void func_301(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_302(char* sParam0)
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
		func_301(&(sParam0->f_1115[iVar0 /*4*/]));
		func_301(&(sParam0->f_1132[iVar0 /*4*/]));
		iVar0++;
	}
	sParam0->f_90 = 0;
	sParam0->f_89 = 0;
	sParam0->f_91 = 0;
	sParam0->f_782 = 0;
	sParam0->f_783 = 6f;
	sParam0->f_483 = 0;
	sParam0->f_484 = 0;
	sParam0->f_485 = 0;
	sParam0->f_486 = { 0f, 0f, 0f };
	sParam0->f_775 = { 0f, 0f, 0f };
	sParam0->f_778 = 0f;
	sParam0->f_779 = { 0f, 0f, 0f };
	sParam0->f_1454 = -1;
	sParam0->f_1455 = 1f;
	sParam0->f_1456 = 0f;
	sParam0->f_1457 = 0f;
	iVar0 = 0;
	while (iVar0 <= 19)
	{
		func_303(sParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 29)
	{
		func_299(&(sParam0->f_784[iVar0 /*11*/]));
		iVar0++;
	}
}

void func_303(char* sParam0, int iParam1)
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
		sParam0->f_1311[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_1372[iParam1 /*3*/] = { 0f, 0f, 0f };
		sParam0->f_1433[iParam1] = 0f;
		sParam0->f_550[iParam1] = 0f;
		StringCopy(&(sParam0->f_1149[iParam1 /*4*/]), "", 16);
		StringCopy(&(sParam0->f_1230[iParam1 /*4*/]), "", 16);
	}
}

void func_304()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		Global_4456448.f_56216[iVar0] = 0;
		iVar0++;
	}
}

void func_305()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		StringCopy(&(Global_4456448.f_138632[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
}

int func_306()
{
	return Global_1589819[PLAYER::PLAYER_ID() /*818*/].f_196;
}

int func_307()
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		if (Global_1312433)
		{
			return 1;
		}
	}
	else if (Global_1312433)
	{
		Global_1312433 = 0;
	}
	return 0;
}

bool func_308()
{
	return GAMEPLAY::IS_BIT_SET(Global_959568.f_8, 0);
}

var func_309()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448756, 4);
}

var func_310()
{
	return GAMEPLAY::IS_BIT_SET(Global_2448756, 28);
}

var func_311()
{
	return Global_2448756.f_580;
}

void func_312()
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

void func_313()
{
	GAMEPLAY::CLEAR_BIT(&Global_2448756, 4);
}

void func_314()
{
	GAMEPLAY::CLEAR_BIT(&Global_2448756, 28);
}

void func_315(bool bParam0, bool bParam1, bool bParam2)
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

int func_316(int iParam0)
{
	switch (iParam0)
	{
		case 143:
			return 15;
		
		case 150:
			return 8;
		
		case 144:
			return 14;
		
		case 148:
			return 122;
		
		case 151:
			return 1;
		
		case 149:
			return 5;
		
		case 152:
			return 6;
		
		case 145:
			return 11;
		
		case 153:
			return 0;
		
		case 154:
			return 2;
		
		case 146:
			return 13;
		
		case 155:
			return 3;
		
		case 147:
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
		
		case 124:
			return 243;
		
		default:
	}
	return 256;
}

bool func_317()
{
	return Global_2394836;
}

var func_318()
{
	return Global_2394836.f_3;
}

