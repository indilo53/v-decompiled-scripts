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
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
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
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<73> Local_103 = { 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1101004800, 0 } ;
	struct<10> Local_176[32];
	struct<54> Local_497 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0 } ;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	int iLocal_553 = 0;
	char* sLocal_554 = NULL;
	int iLocal_555 = 0;
	vector3 vLocal_556 = { 0f, 0f, 0f };
	vector3 vLocal_559 = { 0f, 0f, 0f };
	float fLocal_562 = 0f;
	int iLocal_563 = 0;
	vector3 vLocal_564 = { 0f, 0f, 0f };
	vector3 vLocal_567 = { 0f, 0f, 0f };
	int iLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	vector3 vLocal_580 = { 0f, 0f, 0f };
	var uLocal_583 = 0;
	vector3 vLocal_584 = { 0f, 0f, 0f };
	var uLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	vector3 vLocal_600 = { 0f, 0f, 0f };
	vector3 vLocal_603 = { 0f, 0f, 0f };
	vector3 vLocal_606 = { 0f, 0f, 0f };
	vector3 vLocal_609 = { 0f, 0f, 0f };
	var uLocal_612 = 0;
	vector3 vLocal_613 = { 0f, 0f, 0f };
	vector3 vLocal_616 = { 0f, 0f, 0f };
	var uLocal_619 = 0;
	var uLocal_620 = 16;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	int iLocal_785[5] = { 0, 0, 0, 0, 0 };
	int iLocal_791[5] = { 0, 0, 0, 0, 0 };
	float fLocal_797 = 0f;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	vector3 vLocal_821 = { 0f, 0f, 0f };
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
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_555 = joaat("mp_m_shopkeep_01");
	iLocal_563 = -1;
	iLocal_570 = -1;
	iLocal_588 = 303280717;
	iLocal_589 = SYSTEM::ROUND(Global_262145.f_2421);
	iLocal_590 = SYSTEM::ROUND(Global_262145.f_2417) + 1;
	iLocal_591 = 1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_437(ScriptParam_0))
		{
			func_432();
		}
		if (func_431(1))
		{
			func_423(PLAYER::PLAYER_ID(), 0, 98816);
		}
	}
	while (true)
	{
		func_422();
		if (func_412())
		{
			func_432();
		}
		func_410();
		if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 6))
		{
			if (func_431(1))
			{
				func_423(PLAYER::PLAYER_ID(), 1, 0);
				func_407();
				GAMEPLAY::CLEAR_BIT(&(Local_497.f_53), 7);
				func_406();
			}
		}
		switch (func_405(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
				if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
				{
					if (func_395())
					{
						GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_394(Local_497), 0);
						if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
						{
							if (func_393() > 0)
							{
								if (!func_392(Local_103))
								{
									func_391(&uLocal_620, 3, NETWORK::NET_TO_PED(Local_103), &(Local_103.f_46), 1, 0);
									func_390();
								}
								GAMEPLAY::SET_BIT(&(Local_497.f_52), 22);
								Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 2;
							}
						}
					}
				}
				if (func_393() == 6)
				{
					Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				break;
			
			case 2:
				func_266(&Local_497, vLocal_564, vLocal_567, &Local_103, &(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_PED(Local_103), vLocal_613, vLocal_616, uLocal_619, 0, 1, 0), 0);
				func_259();
				if (func_393() == 2)
				{
					func_133();
				}
				else if (func_393() == 6)
				{
					Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 5;
				}
				if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_603, 30f, 30f, 30f, 0, 1, 0))
				{
					Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 5:
				func_132(&(Local_103.f_69));
				if (func_131(&(Local_103.f_69)))
				{
					Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
				}
				break;
			
			case 4:
				Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 6;
			
			case 6:
				func_51();
				func_432();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_393())
			{
				case 0:
					if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 16))
					{
						func_49(func_50(0));
						func_49(func_50(1));
						func_49(func_50(2));
						STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
						if (STREAMING::HAS_ANIM_DICT_LOADED("mp_am_hold_up"))
						{
							if (func_395())
							{
								GAMEPLAY::CLEAR_AREA(vLocal_564, 1.5f, 0, 1, 0, 1);
								GAMEPLAY::CLEAR_AREA(vLocal_559, 1.5f, 0, 1, 0, 1);
								GAMEPLAY::SET_BIT(&(Local_497.f_52), 16);
							}
						}
					}
					else if (func_47())
					{
						Local_103.f_12 = 2;
					}
					break;
				
				case 2:
					func_46();
					func_43();
					func_28();
					func_27();
					func_20();
					func_19();
					func_11();
					func_10();
					if (func_4())
					{
						func_1();
						Local_103.f_12 = 6;
					}
					break;
				
				case 6:
					func_1();
					break;
				}
		}
	}
}

void func_1()
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
	{
		if (func_3(Local_103.f_13))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_OBJ(Local_103.f_13)))
			{
				ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_13), 1, 1);
				func_2(&(Local_103.f_13));
			}
		}
	}
}

void func_2(var uParam0)
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

int func_3(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_4()
{
	if (func_5())
	{
		return 1;
	}
	return 0;
}

int func_5()
{
	if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 2))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 3))
	{
		return 1;
	}
	if (!func_9())
	{
		if ((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 11) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 19)) || (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 20)))
		{
			func_6(Local_497.f_50, 1, func_7());
			return 1;
		}
		if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 18))
		{
			func_6(Local_497.f_50, 1, func_7());
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 18))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 7))
		{
			func_6(Local_497.f_50, 1, func_7());
			GAMEPLAY::SET_BIT(&(Local_103.f_24), 7);
		}
	}
	return 0;
}

void func_6(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = -1706176509;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 4, iParam2);
	}
}

int func_7()
{
	return func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0));
}

int func_8(var uParam0)
{
	var uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, uParam0);
	return uVar0;
}

int func_9()
{
	if ((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 13) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 27)) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 28))
	{
		return 1;
	}
	return 0;
}

void func_10()
{
	var uVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 21))
	{
		if (func_392(Local_103))
		{
			Local_103.f_72 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_103, &uVar0);
			GAMEPLAY::SET_BIT(&(Local_103.f_23), 21);
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 19))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 10) && Local_103.f_37 <= 0f)
		{
			GAMEPLAY::SET_BIT(&(Local_103.f_23), 19);
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 17))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 20))
		{
			if (func_3(Local_103.f_13))
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_103.f_13), 0, 0);
				GAMEPLAY::SET_BIT(&(Local_103.f_24), 17);
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 6))
	{
		if (Global_2524719.f_8 == 1)
		{
			GAMEPLAY::SET_BIT(&(Local_103.f_23), 6);
			GAMEPLAY::SET_BIT(&(Local_103.f_23), 16);
		}
	}
}

int func_11()
{
	var uVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || !GAMEPLAY::IS_BIT_SET(Local_103.f_25, 0))
	{
		return 0;
	}
	if (Local_103.f_66 != 6)
	{
		if (Local_103.f_66 > 0 && func_392(Local_103.f_15))
		{
			Local_103.f_66 = 6;
			return 0;
		}
		switch (Local_103.f_66)
		{
			case 0:
				if (!func_17(&uLocal_810, 10000, 0))
				{
					uVar0 = PED::GET_RANDOM_PED_AT_COORD(vLocal_613, 20f, 20f, 20f, -1);
					if (!PED::IS_PED_INJURED(uVar0))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0))
						{
							iVar1 = ENTITY::GET_ENTITY_MODEL(uVar0);
							if (((((((iVar1 != joaat("mp_m_freemode_01") && iVar1 != joaat("mp_f_freemode_01")) && !PED::IS_COP_PED_IN_AREA_3D(vLocal_613, 25f, 25f, 25f)) && !ENTITY::IS_ENTITY_AT_COORD(uVar0, vLocal_600, 1f, 1f, 2f, 0, 1, 0)) && !WEAPON::IS_PED_ARMED(uVar0, 7)) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0, 1)) && PED::IS_PED_HUMAN(uVar0)) && func_16(iVar1))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uVar0);
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar0))
								{
									if (func_15(&(Local_103.f_15), uVar0, 1, 0))
									{
										WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103.f_15), joaat("weapon_pistol"), 25000, 0);
										PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103.f_15), 1);
										Local_103.f_66 = 1;
										GAMEPLAY::SET_BIT(&(Local_103.f_25), 1);
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_103.f_15), Global_1574986);
										PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_103.f_15), 2);
										ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_103.f_15), SYSTEM::ROUND((200f * Global_262145.f_153)), 0);
										func_391(&uLocal_620, 4, NETWORK::NET_TO_PED(Local_103.f_15), "StoreHero", 1, 0);
										AI::TASK_START_SCENARIO_IN_PLACE(NETWORK::NET_TO_PED(Local_103.f_15), func_14(), 0, 1);
									}
								}
							}
						}
					}
				}
				break;
			
			case 1:
				if ((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 5)) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 4))
				{
					Local_103.f_66 = 2;
				}
				break;
			
			case 2:
				if (func_17(&(Local_103.f_67), 3000, 0) || (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), 1227113341) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), 1227113341) != 1))
				{
					func_13(&(Local_103.f_67));
					Local_103.f_66 = 3;
				}
				break;
			
			case 3:
				if (((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 5) || GAMEPLAY::IS_BIT_SET(Local_103.f_25, 8)) || GAMEPLAY::IS_BIT_SET(Local_103.f_25, 9)) || func_17(&(Local_103.f_67), 5000, 0))
				{
					if (func_12() || func_17(&(Local_103.f_67), 5000, 0))
					{
						Local_103.f_66 = 4;
					}
					else
					{
						Local_103.f_66 = 5;
					}
				}
				break;
			
			case 4:
				break;
			
			case 5:
				break;
			}
	}
	return 1;
}

int func_12()
{
	if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_13(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_14()
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < 30)
	{
		return "WORLD_HUMAN_SMOKING";
	}
	if (iVar0 >= 30 && iVar0 < 70)
	{
		return "WORLD_HUMAN_HANG_OUT_STREET";
	}
	return "WORLD_HUMAN_STAND_MOBILE";
}

int func_15(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam1, bParam2, iParam3);
	*uParam0 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(uParam1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam2)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
		}
		return 1;
	}
	return 0;
}

int func_16(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_17(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
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

void func_18(var uParam0, bool bParam1, bool bParam2)
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

void func_19()
{
	if (Local_103.f_30 == 0)
	{
		if (Local_103.f_3 >= 2 && Local_103.f_3 != 9)
		{
			Local_103.f_30 = DECISIONEVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(99, PLAYER::PLAYER_PED_ID(), 60000f);
		}
	}
}

void func_20()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_103.f_1, 5))
	{
		if (Local_103.f_41 > 0)
		{
			func_24();
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_1, 5))
			{
				return;
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Local_103.f_1, 1))
	{
		if (Local_103.f_2 == 3 && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9))
		{
			Local_103.f_2 = 0;
		}
		GAMEPLAY::CLEAR_BIT(&(Local_103.f_1), 1);
	}
	switch (Local_103.f_2)
	{
		case 0:
			if ((((func_3(Local_103) && !func_392(Local_103)) && func_3(Local_103.f_16[Local_103.f_26])) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9) || GAMEPLAY::IS_BIT_SET(Local_103.f_1, 4))
					{
						Local_103.f_2 = 2;
						return;
					}
					if (!iLocal_553)
					{
						AI::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_103), Local_103.f_42, 1600);
						iLocal_553 = 1;
					}
					if (func_17(&uLocal_800, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_103));
						fVar1 = (Local_103.f_42 - 10f);
						fVar2 = (Local_103.f_42 + 10f);
						if (fVar1 < 0f)
						{
							fVar2 = ((Local_103.f_42 - 10f) + 360f);
							fVar1 = ((Local_103.f_42 + 10f) + 360f);
						}
						else if (fVar2 >= 360f)
						{
							fVar2 = ((Local_103.f_42 - 10f) - 360f);
							fVar1 = ((Local_103.f_42 + 10f) - 360f);
						}
						if (((fVar0 < fVar2 && fVar0 > fVar1) && func_17(&uLocal_806, 1000, 0)) || func_17(&uLocal_806, 3125, 0))
						{
							AI::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_103));
							Local_103.f_27 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_PED(Local_103), -0.65f, 0.87f, -0.02f), vLocal_567, 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_103), Local_103.f_27, "mp_am_hold_up", func_23(Local_103.f_26), 1.5f, -1.5f, 157, 16, 1148846080, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[Local_103.f_26]))
							{
								ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_16[Local_103.f_26]), 1, 0);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_103.f_16[Local_103.f_26]), Local_103.f_27, "mp_am_hold_up", func_22(Local_103.f_26), 4f, -4f, 8);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_103.f_27);
							Local_103.f_2 = 1;
							iLocal_570 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_27);
						}
					}
				}
			}
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9) || GAMEPLAY::IS_BIT_SET(Local_103.f_1, 4))
			{
				iLocal_570 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_27);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_570))
				{
					NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_27);
				}
				Local_103.f_2 = 2;
				return;
			}
			if (iLocal_570 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_570) || func_17(&uLocal_802, 2000, 0))
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_570) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_570) == 1f) || func_17(&uLocal_802, 2000, 0))
					{
						if ((func_3(Local_103) && !func_392(Local_103)) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9))
						{
							AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_103));
						}
						NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_27);
						Local_103.f_2 = 2;
					}
				}
			}
			else
			{
				iLocal_570 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_27);
			}
			break;
		
		case 2:
			func_3(Local_103.f_16[Local_103.f_26]);
			if (func_17(&uLocal_808, 1000, 0) && func_3(Local_103.f_16[Local_103.f_26]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_OBJ(Local_103.f_16[Local_103.f_26])))
				{
					ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_16[Local_103.f_26]), 0, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_103.f_16[Local_103.f_26]), 1);
					ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_103.f_16[Local_103.f_26]), func_21(Local_103.f_26), 1, 0, 0, 1);
				}
				iLocal_570 = -1;
				iLocal_553 = 0;
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_1, 4))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_103.f_1), 4);
				}
				func_13(&uLocal_808);
				func_13(&uLocal_802);
				func_13(&uLocal_800);
				func_13(&uLocal_806);
				Local_103.f_2 = 3;
			}
			break;
		
		case 3:
			break;
	}
}

Vector3 func_21(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return vLocal_584 - Vector(1f, 0.2f, 0.1f);
		
		case 1:
			return vLocal_584 - Vector(1f, 0.2f, 0f);
		
		case 2:
			return vLocal_584 - Vector(1f, 0.2f, -0.1f);
		
		case 4:
			return vLocal_584 - Vector(1f, -0.2f, 0.1f);
		
		case 0:
			return vLocal_584 - Vector(1f, -0.2f, 0f);
		
		case 5:
			return vLocal_584 - Vector(1f, -0.2f, -0.1f);
		
		default:
	}
	return vLocal_584 - Vector(1f, 0f, -0.1f);
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar";
		
		case 1:
			return "purchase_chocbar";
		
		case 2:
			return "purchase_chocbar";
		
		case 4:
			return "purchase_cigarette";
		
		case 0:
			return "purchase_beer";
		
		case 5:
			return "purchase_energydrink";
		
		default:
	}
	return "purchase_energydrink";
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "purchase_chocbar_shopkeeper";
		
		case 1:
			return "purchase_chocbar_shopkeeper";
		
		case 2:
			return "purchase_chocbar_shopkeeper";
		
		case 4:
			return "purchase_cigarette_shopkeeper";
		
		case 0:
			return "purchase_beer_shopkeeper";
		
		case 5:
			return "purchase_energydrink_shopkeeper";
		
		default:
	}
	return "purchase_energydrink_shopkeeper";
}

int func_24()
{
	if (((((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[3]) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[1])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[2])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[4])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[0])) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[5]))
	{
		if (((((func_49(func_26(3)) && func_49(func_26(1))) && func_49(func_26(2))) && func_49(func_26(4))) && func_49(func_26(0))) && func_49(func_26(5)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 0, 6, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[3]))
				{
					if (func_25(&(Local_103.f_16[3]), func_26(3), func_21(3), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_16[3]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_556));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_103.f_16[3]), 1);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_16[3]), 0, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[1]))
				{
					if (func_25(&(Local_103.f_16[1]), func_26(1), func_21(1), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_16[1]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_556));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_103.f_16[1]), 1);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_16[1]), 0, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[2]))
				{
					if (func_25(&(Local_103.f_16[2]), func_26(2), func_21(2), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_16[2]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_556));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_103.f_16[2]), 1);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_16[2]), 0, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[4]))
				{
					if (func_25(&(Local_103.f_16[4]), func_26(4), func_21(4), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_16[4]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_556));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_103.f_16[4]), 1);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_16[4]), 0, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[0]))
				{
					if (func_25(&(Local_103.f_16[0]), func_26(0), func_21(0), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_16[0]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_556));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_103.f_16[0]), 1);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_16[0]), 0, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_16[5]))
				{
					if (func_25(&(Local_103.f_16[5]), func_26(5), func_21(5), 1, 1, 0, 1, 0))
					{
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_16[5]), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_556));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_103.f_16[5]), 1);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_16[5]), 0, 0);
					}
				}
			}
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Local_103.f_1), 5);
		return 1;
	}
	return 0;
}

int func_25(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, vParam2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, iParam6, bParam5, iParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(*uParam0), iParam8);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("prop_choc_pq");
		
		case 1:
			return joaat("prop_choc_ego");
		
		case 2:
			return joaat("prop_choc_meto");
		
		case 4:
			return joaat("prop_ld_fags_01");
		
		case 0:
			return joaat("prop_ecola_can");
		
		case 5:
			return joaat("prop_amb_beer_bottle");
		
		default:
	}
	return joaat("prop_choc_pq");
}

void func_27()
{
	float fVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9))
	{
		if (Global_2524719.f_8 == 1 || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 6))
		{
			if ((((func_3(Local_103.f_13) && func_3(Local_103)) && !func_392(Local_103)) && Local_103.f_3 != 8) && Local_103.f_3 != 7)
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 30))
					{
						AI::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_103), Local_103.f_42, 1600);
						GAMEPLAY::SET_BIT(&(Local_497.f_52), 30);
					}
					if (func_17(&uLocal_798, 100, 0))
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_PED(Local_103));
						if ((fVar0 > (Local_103.f_42 - 20f) && fVar0 < (Local_103.f_42 + 20f)) || func_17(&uLocal_804, 1500, 0))
						{
							AI::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_103));
							Local_103.f_29 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vLocal_564, vLocal_567, 2, 1, 0, 1065353216, 0, 1065353216);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(Local_103), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s", 4f, -1.5f, 157, 16, 1148846080, 0);
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
							{
								ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_103.f_13), 0);
								ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_103.f_13), 1);
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_103.f_13), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s_bag", 4f, -4f, 137);
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
							{
								NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_OBJ(Local_103.f_14), Local_103.f_29, "mp_am_hold_up", "holdup_victim_20s_till", 4f, -4f, 137);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(Local_103.f_29);
							GAMEPLAY::SET_BIT(&(Local_103.f_23), 9);
						}
					}
				}
				else
				{
					Local_103.f_3 = 8;
				}
			}
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 17))
	{
		iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
		if (iLocal_563 >= 0)
		{
			func_3(Local_103);
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				GAMEPLAY::SET_BIT(&(Local_103.f_23), 17);
			}
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 15))
	{
		iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
		if (iLocal_563 >= 0)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563))
			{
				func_3(Local_103);
				if ((NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13) && func_3(Local_103.f_13)) && func_3(Local_103))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_563) > 0.44f)
					{
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_13), 1, 0);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_103.f_13), 1, 0);
						GAMEPLAY::SET_BIT(&(Local_103.f_24), 15);
					}
				}
			}
		}
	}
}

int func_28()
{
	int iVar0;
	float fVar1;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	func_41();
	if (Local_103.f_3 != 9)
	{
		if (func_392(Local_103))
		{
			Local_103.f_3 = 9;
			return 0;
		}
		if ((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 6) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9)) && Local_103.f_3 < 8)
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
			{
				Local_103.f_3 = 8;
			}
		}
		switch (Local_103.f_3)
		{
			case 0:
				if (!func_392(Local_103))
				{
					Local_103.f_3 = 1;
				}
				break;
			
			case 1:
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 4))
				{
					Local_103.f_3 = 2;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 6) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_39() || func_33(0))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 2:
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 6) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9))
				{
					Local_103.f_3 = 4;
				}
				else if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 3:
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 1920390111) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 1920390111) != 1)
				{
					Local_103.f_3 = 4;
				}
				else if (func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				break;
			
			case 4:
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 17))
				{
					iVar0 = 0;
					iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
					if (iLocal_563 >= 0)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563))
						{
							if (GAMEPLAY::IS_BULLET_IN_AREA(vLocal_556, 3f, 0))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 25))
								{
									GAMEPLAY::SET_BIT(&(Local_103.f_23), 25);
								}
								Local_103.f_33 = (Local_103.f_33 + 0.35f);
							}
							fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_563);
							if (fVar1 >= 0.8f)
							{
								Local_103.f_37 = 1f;
							}
							else if (fVar1 <= 0.5f)
							{
								Local_103.f_37 = 0f;
							}
							else if (fVar1 > Local_103.f_37)
							{
								Local_103.f_37 = ((fVar1 - 0.5f) * 3.33f);
							}
							if (fVar1 >= 0.92f)
							{
								Local_103.f_37 = 1f;
								iVar0 = 1;
							}
						}
						else
						{
							iVar0 = 1;
						}
					}
					else
					{
						iVar0 = 1;
					}
					if (iVar0 == 1)
					{
						Local_103.f_3 = 6;
					}
					else if (func_33(1))
					{
						Local_103.f_3 = 8;
					}
					else if (func_31())
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 5:
				if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				break;
			
			case 6:
				func_29();
				if (func_39() || func_33(1))
				{
					Local_103.f_3 = 8;
				}
				else if (func_31())
				{
					Local_103.f_3 = 7;
				}
				else if (GAMEPLAY::IS_BIT_SET(Local_103.f_24, 3))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 4))
					{
						Local_103.f_3 = 7;
					}
				}
				break;
			
			case 8:
				func_29();
				break;
			
			case 7:
				break;
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 10))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
		{
			Local_103.f_43 = (Local_103.f_43 - 1);
			GAMEPLAY::SET_BIT(&(Local_103.f_24), 10);
		}
	}
	return 1;
}

void func_29()
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 2))
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 10);
		iVar1 = (iLocal_591 + func_30());
		if (iVar0 < iVar1)
		{
			GAMEPLAY::SET_BIT(&(Local_103.f_24), 3);
		}
		GAMEPLAY::SET_BIT(&(Local_103.f_24), 2);
	}
}

int func_30()
{
	int iVar0;
	
	iVar0 = (Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_36 - 1);
	if (iVar0 >= 4)
	{
		return 4;
	}
	return iVar0;
}

int func_31()
{
	int iVar0;
	int iVar1;
	
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 24) || CONTROLS::IS_CONTROL_JUST_PRESSED(0, 257))
	{
		iVar0 = func_32(PLAYER::PLAYER_PED_ID());
		if ((((((iVar0 != joaat("weapon_unarmed") && iVar0 != 0) && iVar0 != joaat("vehicle_weapon_player_bullet")) && iVar0 != joaat("vehicle_weapon_player_buzzard")) && iVar0 != joaat("vehicle_weapon_player_laser")) && iVar0 != joaat("vehicle_weapon_tank")) && iVar0 != joaat("weapon_flare"))
		{
			iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
			if (((((((WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iVar0) == 0 && iVar1 != -728555052) && iVar1 != 507375312) && iVar1 != 0) && iVar1 != -37788308) && iVar1 != -801780072) && iVar1 != 431593103) && iVar1 != -755518101)
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_596)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

var func_32(var uParam0)
{
	var uVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &uVar0, 1);
	return uVar0;
}

int func_33(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	var uVar12;
	int iVar13;
	
	if (func_37(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 5))
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
	{
		return 1;
	}
	if (func_36() || func_35())
	{
		return 1;
	}
	if (func_34())
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) == 182)
		{
			if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 11))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Var1) && ENTITY::IS_ENTITY_A_PED(Var1))
				{
					uVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1);
					if (PED::IS_PED_INJURED(uVar12) && INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar12) == iLocal_596)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var1.f_1) && ENTITY::IS_ENTITY_A_PED(Var1.f_1))
						{
							iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var1.f_1);
							if (iVar13 != NETWORK::NET_TO_PED(Local_103))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (iParam0 == 1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 5))
		{
			if (PED::IS_COP_PED_IN_AREA_3D(vLocal_606 - Vector(25f, 25f, 25f), vLocal_606 + Vector(25f, 25f, 25f)))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_24), 5);
			}
		}
	}
	return 0;
}

int func_34()
{
	if (Local_497.f_50 >= 15 && Local_497.f_50 <= 19)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(9, vLocal_606, 40f))
		{
			return 1;
		}
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, vLocal_606, vLocal_609, uLocal_612))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, vLocal_613, vLocal_616, uLocal_619))
	{
		return 1;
	}
	return 0;
}

int func_35()
{
	if ((GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_613, vLocal_616, uLocal_619, joaat("weapon_grenade"), 0) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_613, vLocal_616, uLocal_619, joaat("weapon_molotov"), 0)) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_613, vLocal_616, uLocal_619, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	if ((GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_606, vLocal_609, uLocal_612, joaat("weapon_grenade"), 0) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_606, vLocal_609, uLocal_612, joaat("weapon_molotov"), 0)) || GAMEPLAY::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(vLocal_606, vLocal_609, uLocal_612, joaat("weapon_stickybomb"), 0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/] == iParam1)
	{
		return func_38(iParam0);
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_39()
{
	if (func_40() || func_34())
	{
		return 1;
	}
	return 0;
}

int func_40()
{
	if (GAMEPLAY::IS_BULLET_IN_ANGLED_AREA(vLocal_606, vLocal_609, uLocal_612, 0))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BULLET_IN_ANGLED_AREA(vLocal_613, vLocal_616, uLocal_619, 0))
	{
		return 1;
	}
	return 0;
}

void func_41()
{
	if (Local_103.f_33 > 0f)
	{
		if (func_42(&(Local_103.f_34), 50, 0))
		{
			Local_103.f_33 = (Local_103.f_33 - 0.02f);
			if (Local_103.f_33 < 0f)
			{
				Local_103.f_33 = 0f;
			}
			func_13(&(Local_103.f_34));
		}
	}
}

int func_42(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			func_13(uParam0);
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		func_13(uParam0);
		return 1;
	}
	return 0;
}

void func_43()
{
	int iVar0;
	var uVar1;
	
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_577)))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_577));
		uVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 11))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 5))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_13))
				{
					if (func_3(Local_103.f_13))
					{
						ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_13), 1, 1);
						func_45(&(Local_103.f_13));
					}
				}
				else
				{
					Local_103.f_38 = { Local_176[iLocal_577 /*10*/].f_7 };
					Local_103.f_44 = 7;
					GAMEPLAY::SET_BIT(&(Local_103.f_23), 11);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 14))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 6))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_23), 14);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 15))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 7))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_23), 15);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 26))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 24))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_23), 26);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 22))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 22))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_23), 22);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 23))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 23))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_23), 23);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 30))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 25))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_23), 30);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 31))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 26))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_23), 31);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 6))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 29))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_24), 6);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 9))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 31))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_24), 9);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_1, 3))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/].f_1, 3))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_1), 3);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Local_103.f_25, 1))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_25, 6))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/].f_5, 1))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_25), 6);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_25, 7))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/].f_5, 2))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_25), 7);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_25, 5))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/].f_5, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_25), 5);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 20))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 11))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_23), 20);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 17))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 13))
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_24), 17);
			}
		}
		if (func_44(iVar0, 1, 1))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 5))
			{
				if (!func_392(Local_103))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_103), uVar1, 1))
					{
						GAMEPLAY::SET_BIT(&(Local_103.f_23), 5);
					}
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Local_103.f_25, 1))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_103.f_25, 8))
				{
					if (!func_392(Local_103.f_15))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(NETWORK::NET_TO_PED(Local_103.f_15), uVar1, 1))
						{
							GAMEPLAY::SET_BIT(&(Local_103.f_25), 8);
						}
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_103.f_25, 9))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/].f_5, 3))
					{
						GAMEPLAY::SET_BIT(&(Local_103.f_25), 9);
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 6))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 1))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_23), 6);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 16))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 8))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_23), 16);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 27))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_24), 1);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 7))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 0))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_23), 7);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 10))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 4))
				{
					if (Local_103.f_3 != 5 && Local_103.f_3 != 6)
					{
						Local_103.f_3 = 5;
					}
					GAMEPLAY::SET_BIT(&(Local_103.f_23), 10);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_1, 2))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/].f_1, 2))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_1), 2);
					GAMEPLAY::SET_BIT(&(Local_103.f_1), 4);
					iLocal_579 = iLocal_577;
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_176[iLocal_579 /*10*/].f_1, 2))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_103.f_1), 2);
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_1, 3))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_103.f_1), 3);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 8))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 30))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_24), 8);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_1, 0))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/].f_1, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_1), 0);
					GAMEPLAY::SET_BIT(&(Local_103.f_1), 1);
					Local_103.f_26 = Local_176[iLocal_577 /*10*/].f_2;
					iLocal_578 = iLocal_577;
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_176[iLocal_578 /*10*/].f_1, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Local_103.f_1), 0);
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 13))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iLocal_577 /*10*/], 21))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_24), 13);
				}
			}
		}
	}
	iLocal_577++;
	if (iLocal_577 == NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iLocal_577 = 0;
	}
}

int func_44(int iParam0, bool bParam1, bool bParam2)
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

void func_45(var uParam0)
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

void func_46()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	GAMEPLAY::SET_BIT(&(Local_103.f_23), 2);
	GAMEPLAY::SET_BIT(&(Local_103.f_23), 3);
	GAMEPLAY::CLEAR_BIT(&(Local_103.f_23), 13);
	GAMEPLAY::CLEAR_BIT(&(Local_103.f_23), 27);
	GAMEPLAY::CLEAR_BIT(&(Local_103.f_23), 28);
	GAMEPLAY::CLEAR_BIT(&(Local_103.f_24), 4);
	if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 18))
	{
		if (func_392(Local_103))
		{
			if (Local_103.f_37 <= 0f)
			{
				GAMEPLAY::SET_BIT(&(Local_103.f_23), 18);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			uVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			if (Local_176[iVar0 /*10*/].f_3 > 0)
			{
				Local_103.f_4 = (Local_103.f_4 + Local_176[iVar0 /*10*/].f_3);
				Local_176[iVar0 /*10*/].f_3 = 0;
			}
			if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 3))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(uVar6, vLocal_603, 30f, 30f, 30f, 0, 1, 0))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_103.f_23), 3);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 16))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_176[iVar0 /*10*/], 12))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_24), 16);
				}
			}
			if (func_44(iVar5, 1, 1))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 2))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_103.f_23), 2);
				}
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar6) == iLocal_596)
				{
					if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(uVar6) == iLocal_597 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(uVar6) == iLocal_598)
					{
						iVar2 = 1;
					}
					else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(uVar6) == iLocal_599)
					{
						GAMEPLAY::SET_BIT(&(Local_103.f_23), 27);
						iVar3 = 1;
					}
				}
				if (iVar2 == 1 || iVar3 == 1)
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_23), 13);
					iVar4++;
					if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 21))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 4))
						{
							if (WEAPON::GET_CURRENT_PED_WEAPON(uVar6, &iVar1, 1))
							{
								if ((((iVar1 != joaat("weapon_unarmed") && iVar1 != 0) && iVar1 != joaat("object")) && iVar1 != joaat("weapon_flare")) && iVar1 != joaat("weapon_snowball"))
								{
									if (Local_103.f_32 == -1)
									{
										Local_103.f_32 = iVar0;
									}
									else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_32)))
									{
										Local_103.f_32 = -1;
									}
									GAMEPLAY::SET_BIT(&(Local_103.f_23), 4);
									if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 12))
									{
										if (ENTITY::IS_ENTITY_AT_COORD(uVar6, vLocal_556, 2.5f, 2.5f, 3f, 0, 1, 0))
										{
											GAMEPLAY::SET_BIT(&(Local_103.f_23), 12);
										}
									}
								}
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 0))
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(iVar5) > 0)
							{
								GAMEPLAY::SET_BIT(&(Local_103.f_24), 0);
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(uVar6, vLocal_603, 5f, 5f, 2.5f, 0, 1, 0))
				{
					GAMEPLAY::SET_BIT(&(Local_103.f_23), 28);
					iVar4++;
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 4))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_176[iVar0 /*10*/], 28))
					{
						GAMEPLAY::SET_BIT(&(Local_103.f_24), 4);
					}
				}
				if ((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 20)) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 19))
				{
					if (Local_176[iLocal_577 /*10*/].f_6 > Local_103.f_33)
					{
						Local_103.f_33 = Local_176[iVar0 /*10*/].f_6;
						func_13(&(Local_103.f_34));
						if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 24))
						{
							if (Local_103.f_33 > (0.55f + 0.2f))
							{
								GAMEPLAY::SET_BIT(&(Local_103.f_23), 24);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (Local_103.f_41 != iVar4)
	{
		Local_103.f_41 = iVar4;
	}
}

int func_47()
{
	var uVar0;
	
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
	{
		if ((func_49(iLocal_555) && func_49(func_50(1))) && func_49(func_50(2)))
		{
			if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(1, 0, 2, 0))
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
				{
					if (func_48(&Local_103, 4, iLocal_555, vLocal_556 - Vector(1f, 0f, 0f), Local_103.f_42, 1, 1, 1))
					{
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103), 0, iLocal_785[0], iLocal_791[0], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103), 2, iLocal_785[1], iLocal_791[1], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103), 3, iLocal_785[2], iLocal_791[2], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103), 4, iLocal_785[3], iLocal_791[3], 0);
						PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_103), 8, iLocal_785[4], iLocal_791[4], 0);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_PED(Local_103), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_556));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_103), 1);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_103), 1, 0);
						PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
						PED::SET_PED_CAN_EVASIVE_DIVE(NETWORK::NET_TO_PED(Local_103), 0);
						PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_103), 1024, 1);
						WEAPON::REMOVE_ALL_PED_WEAPONS(NETWORK::NET_TO_PED(Local_103), 1);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_103), SYSTEM::ROUND((200f * Global_262145.f_153)), 0);
						if (!DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_103), "XP_Blocker"))
						{
							DECORATOR::DECOR_SET_BOOL(NETWORK::NET_TO_PED(Local_103), "XP_Blocker", 1);
						}
						func_391(&uLocal_620, 3, NETWORK::NET_TO_PED(Local_103), &(Local_103.f_46), 1, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
				{
					uVar0 = OBJECT::CREATE_PORTABLE_PICKUP(-1795552418, vLocal_580, 0, func_50(1));
					if (ENTITY::DOES_ENTITY_EXIST(uVar0))
					{
						Local_103.f_13 = NETWORK::OBJ_TO_NET(uVar0);
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_103.f_13), 1);
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_103.f_13), 0, 0);
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_103.f_13), uLocal_583);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_13), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_556));
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_103.f_13), 1);
						OBJECT::_0xA08FE5E49BDC39DD(NETWORK::NET_TO_OBJ(Local_103.f_13), -0.2f, 1);
						OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_103.f_13), 1, 0);
						ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_103.f_13), 0, 0);
					}
				}
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
				{
					if (func_25(&(Local_103.f_14), func_50(2), vLocal_584 - Vector(0.12f, 0f, 0f), 1, 1, 0, 1, 0))
					{
						ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_103.f_14), uLocal_587);
						INTERIOR::_0x82EBB79E258FA2B7(NETWORK::NET_TO_OBJ(Local_103.f_14), INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_556));
						ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_103.f_14), 1);
					}
				}
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_48(var uParam0, int iParam1, int iParam2, vector3 vParam3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	var uVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	uVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, uParam6, iParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(uVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(uVar0, iParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(uVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_49(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_50(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("mp_m_shopkeep_01");
		
		case 1:
			return joaat("p_poly_bag_01_s");
		
		case 2:
			return joaat("p_till_01_s");
		
		default:
	}
	return joaat("mp_m_shopkeep_01");
}

void func_51()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 20))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 11) || GAMEPLAY::IS_BIT_SET(Local_103.f_24, 16))
		{
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_596 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_603, 5f, 5f, 2.5f, 0, 1, 0))
			{
				func_54();
				func_52();
				func_6(Local_497.f_50, 1, func_7());
				GAMEPLAY::SET_BIT(&(Local_497.f_52), 20);
			}
			else
			{
				if ((GAMEPLAY::IS_BIT_SET(Local_497.f_52, 31) && (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_603, 20f, 20f, 20f, 0, 1, 0))
				{
					func_54();
				}
				GAMEPLAY::SET_BIT(&(Local_497.f_52), 20);
			}
		}
	}
}

void func_52()
{
	int iVar0;
	
	iVar0 = func_53(47);
	Global_2414200[iVar0 /*83*/] = 47;
	StringCopy(&(Global_2414200[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_53(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414200[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414200[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_54()
{
	int iVar0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
	{
		iVar0 = func_130(1181, -1, 0);
		if (!GAMEPLAY::IS_BIT_SET(iVar0, Local_497.f_50))
		{
			func_129(14, 1, -1);
			GAMEPLAY::SET_BIT(&iVar0, Local_497.f_50);
			func_128(1181, iVar0, -1, 1, 0);
			if (func_127(14, -1) >= 20)
			{
				func_113(44, 1);
			}
			else
			{
				func_112(44, func_127(14, -1));
			}
		}
		func_111(1167, 1, -1);
		func_110(12, 1, -1, 1);
		func_100(19);
		iLocal_813 = 100;
		iLocal_813 = SYSTEM::ROUND((IntToFloat(iLocal_813) * Global_262145.f_4225));
		func_58(2, "XPT_HOLDUP", -1636175450, -235721452, iLocal_813, 1, -1, 0);
		func_55(12, 0);
	}
}

void func_55(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_57(iParam0, iParam1))
	{
		iVar0 = func_56();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_56()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2458086[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_57(int iParam0, var uParam1)
{
	if (Global_1312845)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312857) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_58(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_59(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_59(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_60(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_60(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_99(PLAYER::PLAYER_ID()) || func_98(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9522 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9522;
		}
	}
	else if (func_95() || func_91(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22640 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22640;
		}
	}
	else if (Global_262145.f_6524 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6524;
	}
	if (func_90(uParam2))
	{
	}
	if (func_89())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_87(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_86(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_83(0, &iVar1);
					break;
				
				case 3:
					func_83(1, &iVar1);
					break;
				
				case 1:
					func_79(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677623)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_111(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_71((func_78(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_2 != -1)
				{
					func_111(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_65(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_61((func_63(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_61((func_63(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_61(int iParam0)
{
	if (func_89())
	{
		Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_5 = iParam0;
		func_62(joaat("mpply_globalxp"), iParam0);
	}
}

void func_62(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_63(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_44(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_64(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_64(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_65(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_70(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_68(func_69(&Var0));
			if (iVar13 == 0)
			{
				func_67(&Global_1378824, iParam0);
				func_66(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar13 == 1)
			{
				func_67(&Global_1378825, iParam0);
				func_66(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar13 == 2)
			{
				func_67(&Global_1378826, iParam0);
				func_66(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar13 == 3)
			{
				func_67(&Global_1378827, iParam0);
				func_66(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar13 == 4)
			{
				func_67(&Global_1378828, iParam0);
				func_66(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_66(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1378819 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1378821 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1378821 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1378822 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1378823 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1378824 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1378825 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1378826 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1378827 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1378828 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1378829 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1378830 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1378831 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1378832 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1378833 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1378834 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1378835 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_67(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_68(int iParam0)
{
	if (iParam0 == Global_1378819)
	{
		return 0;
	}
	else if (iParam0 == Global_1378820)
	{
		return 1;
	}
	else if (iParam0 == Global_1378821)
	{
		return 2;
	}
	else if (iParam0 == Global_1378822)
	{
		return 3;
	}
	else if (iParam0 == Global_1378823)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_69(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2458119;
		}
	}
	return Global_2458119;
}

struct<13> func_70(var uParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	if (func_89())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9490 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1378945[func_76(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_76(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9489 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9489 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_75(PLAYER::PLAYER_ID()))
		{
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_6 = func_73(iParam0, 1);
		}
		func_72(639, iParam0, -1, 1);
		func_128(640, func_73(iParam0, 1), -1, 1, 0);
		Global_1378945[func_76(-1)] = iParam0;
		func_55(7, 0);
	}
}

void func_72(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_76(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_76(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_76(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_76(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_76(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_76(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_76(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_76(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_76(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_76(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_76(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_76(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_76(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_76(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_76(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_76(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_76(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_76(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_76(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_76(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_76(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_76(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_76(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_76(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_76(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_76(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_76(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_76(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_76(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_76(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_76(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_76(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_76(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_73(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_74(iParam0, 0);
}

int func_74(int iParam0, int iParam1)
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

int func_75(int iParam0)
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

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_77();
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

int func_77()
{
	return Global_1312736;
}

int func_78(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1378945[func_76(-1)];
			}
			else if (func_75(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_76(-1)];
	}
	return 0;
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		uVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(uVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(uVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_82(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_81(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_80(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_80(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_80(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(uParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_81(var uParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2503649 = { func_70(uParam0) };
		Global_2503662 = { func_70(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2503649))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2503662))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2503579, 35, &Global_2503649);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2503614, 35, &Global_2503662);
				if (Global_2503579 == Global_2503614)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_82(int iParam0, int iParam1, int iParam2)
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
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 0);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 1);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 2);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 4);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 5);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 6);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 8);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 9);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 10);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 12);
				
				case 1:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 13);
				
				case 2:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 14);
				
				case 3:
					return GAMEPLAY::IS_BIT_SET(Global_4456448.f_54, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_83(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_44(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_81(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_44(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_84(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_81(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_80(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_80(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_84(var uParam0, int iParam1)
{
	return SYSTEM::VDIST(func_85(uParam0), func_85(iParam1));
	return 0f;
}

Vector3 func_85(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_86(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_80(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_87(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_78(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_78(PLAYER::PLAYER_ID());
		}
	}
	if (func_88(8000, 0, 0) > 0)
	{
		if (func_88(8000, 0, 0) < (iParam0 + func_78(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_88(8000, 0, 0) - func_78(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_88(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_287850[iParam0];
}

int func_89()
{
	return 1;
}

int func_90(var uParam0)
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

int func_91(int iParam0)
{
	return func_92(func_93(iParam0));
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_93(int iParam0)
{
	if (func_94(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

int func_94(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_97();
	}
	return func_96(Global_4456448.f_130782);
}

int func_96(int iParam0)
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

var func_97()
{
	return Global_2448386.f_16;
}

bool func_98(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_99(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

void func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_8458)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[func_109() /*12745*/].f_8178.f_3922[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[func_109() /*12745*/].f_8178.f_3922[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[func_109() /*12745*/].f_8178.f_3922[iVar2 /*3*/].f_1)
			{
				func_105(iVar2, 1);
				GAMEPLAY::SET_BIT(&Global_2504484, (8 + iVar2));
				func_103(2110, -1);
				func_101(67, -1);
				func_103(2581, -1);
				func_101(69, -1);
				STATS::_0xA071E0ED98F91286(1000, iVar1);
				if (iVar3 < 2)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_2504484, 12))
					{
						func_55(7, 0);
					}
					else
					{
						func_55(15, 0);
					}
				}
			}
		}
	}
}

void func_101(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_76(iParam1));
	iVar0++;
	func_102(iParam0, iVar0, iParam1);
}

void func_102(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = Global_2567520[iParam0 /*3*/][func_76(uParam2)];
	STATS::STAT_SET_INT(uVar0, iParam1, 1);
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_76(iParam1), 0);
	iVar0++;
	if (!func_104(iParam0))
	{
		func_128(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_72(iParam0, iVar0, iParam1, 1);
	}
}

int func_104(int iParam0)
{
	if (Global_1378818)
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
			case 8527:
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
				return 1;
				break;
			}
	}
	return 0;
}

void func_105(int iParam0, int iParam1)
{
	if (Global_2097152[func_109() /*12745*/].f_8178.f_3922[iParam0 /*3*/].f_1 != iParam1)
	{
		Global_2097152[func_109() /*12745*/].f_8178.f_3922[iParam0 /*3*/].f_1 = iParam1;
		func_106(func_108(iParam0), iParam1, -1, 1);
	}
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_107())
	{
		iVar0 = Global_2566070[iParam0 /*3*/][func_76(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_107()
{
	return 1;
	return 0;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 169;
		
		case 1:
			return 170;
		
		case 2:
			return 171;
		
		default:
	}
	return 169;
}

int func_109()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_77();
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
	return iVar0;
}

void func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_130(iParam0, func_76(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_104(iParam0))
	{
		func_128(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_72(iParam0, iVar0, iParam2, 1);
	}
}

int func_112(int iParam0, int iParam1)
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

int func_113(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_114(iParam0, iParam1);
}

int func_114(int iParam0, int iParam1)
{
	if (func_126(14) && !func_125(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25706 != 0 && !Global_71205)
	{
		return 0;
	}
	if (func_124(&Global_4268566))
	{
		if (func_122(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_115(&Global_4268566, iParam0))
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

int func_115(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	func_118(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_116(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_116(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_126(14) && !func_125(iParam1))
	{
		return 0;
	}
	if (func_122(uParam0, iParam1))
	{
		return 0;
	}
	if (func_121(uParam0) < 0f)
	{
		func_120(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_117(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_117(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_118(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_119(uParam0, iVar0);
		iVar0++;
	}
	func_120(uParam0, (Global_4268565 - 0.5f));
}

void func_119(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_120(var uParam0, float fParam1)
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

float func_121(var uParam0)
{
	return uParam0->f_80;
}

bool func_122(var uParam0, int iParam1)
{
	return func_123(uParam0, iParam1) != -1;
}

int func_123(var uParam0, int iParam1)
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

bool func_124(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_125(int iParam0)
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

bool func_126(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_127(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2567520[iParam0 /*3*/][func_76(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_76(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_129(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_127(iParam0, func_76(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_102(iParam0, iVar0, iParam2);
}

int func_130(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_76(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_131(var uParam0)
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

void func_132(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_18(uParam0, 0, 0);
		}
	}
}

void func_133()
{
	bool bVar0;
	int iVar1;
	
	func_251();
	func_225();
	func_176();
	func_51();
	func_174();
	func_173();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_596)
		{
			if (Global_2524719.f_5630.f_1 == 0)
			{
				Global_2524719.f_5630.f_1 = 1;
			}
			if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_597 || INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_598)
			{
				bVar0 = true;
			}
			else if (INTERIOR::GET_ROOM_KEY_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_599)
			{
				iVar1 = 1;
			}
		}
		else if (Global_2524719.f_5630.f_1 == 1)
		{
			Global_2524719.f_5630.f_1 = 0;
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 31))
	{
		if (func_93(PLAYER::PLAYER_ID()) != 154)
		{
			if ((bVar0 || iVar1) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_603, (5f / 2f), (5f / 2f), (5f / 2f), 0, 1, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				GAMEPLAY::SET_BIT(&(Local_497.f_52), 31);
			}
		}
	}
	if ((!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 26) && bVar0) && !(func_172(0) || func_171()))
	{
		if (func_169("SNK_MNU", Local_497, 0))
		{
			GAMEPLAY::SET_BIT(&(Local_497.f_52), 26);
		}
	}
	if (!bVar0 && GAMEPLAY::IS_BIT_SET(Local_497.f_52, 26))
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || (CAM::DOES_CAM_EXIST(Local_497.f_1) && CAM::IS_CAM_ACTIVE(Local_497.f_1)))
		{
			AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (Local_497.f_51 > 0)
			{
				Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_3 = Local_497.f_51;
				Local_497.f_51 = 0;
			}
			func_407();
			GAMEPLAY::CLEAR_BIT(&(Local_497.f_53), 7);
			if (CAM::DOES_CAM_EXIST(Local_497.f_1))
			{
				CAM::DESTROY_CAM(Local_497.f_1, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		func_166(1, Local_497);
		GAMEPLAY::CLEAR_BIT(&(Local_497.f_52), 26);
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 21))
	{
		if (iVar1 || func_164(PLAYER::PLAYER_PED_ID(), Local_497.f_50))
		{
			GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 21);
		}
	}
	if (bVar0 || iVar1)
	{
		func_161();
		func_155();
		func_149();
		func_145(1);
		func_138();
		PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
		PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
		if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_7, 0))
		{
			PLAYER::_0xB45EFF719D8427A6(Local_103.f_71);
			func_136(vLocal_603, func_137(30), 0);
			GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_7), 0);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_603, 5f, 5f, 2.5f, 0, 1, 0))
		{
			func_145(0);
		}
		if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_7, 0))
		{
			PLAYER::_0x0032A6DBA562C518();
			func_134(vLocal_603, func_137(30), "");
			GAMEPLAY::SET_BIT(&(Global_2524719.f_7), 0);
		}
	}
	if ((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 22) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 23)) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 7))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
}

int func_134(vector3 vParam0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2524719.f_3955[iVar0 /*26*/].f_4), sParam3))
			{
				if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_2524719.f_3955[iVar0 /*26*/].f_4)))
				{
					Global_2524719.f_3955[iVar0 /*26*/] = 1;
					Global_2524719.f_3955[iVar0 /*26*/].f_1 = { vParam0 };
					StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_135(Global_2524719.f_3955[iVar0 /*26*/].f_1, vParam0, 0))
			{
				Global_2524719.f_3955[iVar0 /*26*/] = 1;
				Global_2524719.f_3955[iVar0 /*26*/].f_1 = { vParam0 };
				StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_135(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_136(vector3 vParam0, var uParam3, int iParam4)
{
	int iVar0;
	
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2524719.f_3955[iVar0 /*26*/].f_4), uParam3))
			{
				if (iParam4 || func_135(Global_2524719.f_3955[iVar0 /*26*/].f_1, vParam0, 0))
				{
					Global_2524719.f_3955[iVar0 /*26*/] = 0;
					Global_2524719.f_3955[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2524719.f_3955[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

char* func_137(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

void func_138()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GAMEPLAY::CLEAR_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 28);
	if (!func_392(Local_103) && func_44(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if ((((iVar0 != joaat("weapon_unarmed") && iVar0 != joaat("object")) && iVar0 != joaat("weapon_flare")) && iVar0 != joaat("weapon_snowball")) && iVar0 != joaat("weapon_flashlight"))
			{
				if ((((PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_103), 45f)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(Local_103), 5f, 5f, 2f, 0, 1, 0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_103))) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_103)))
				{
					if (!(func_172(0) || func_171()) && ((!func_142(PLAYER::PLAYER_ID()) || func_93(PLAYER::PLAYER_ID()) == 154) || func_93(PLAYER::PLAYER_ID()) == 171))
					{
						if (func_140(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_103)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
							{
								func_139(func_8(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT())));
								GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 1);
							}
							if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 8))
							{
								GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 8);
							}
						}
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 28);
					}
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 28))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 28))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1))
			{
				if (iVar1 != 0 && iVar1 != joaat("weapon_snowball"))
				{
					iVar2 = WEAPON::GET_WEAPONTYPE_GROUP(iVar1);
					if (iVar2 == 416676503)
					{
						sLocal_554 = "hold_up_head_additive_pistol";
						AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_554, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else if ((((iVar2 == 1159398588 || iVar2 == 970310034) || iVar2 == 860033945) || iVar2 == -1212426201) || iVar2 == -957766203)
					{
						sLocal_554 = "hold_up_head_additive_rifle";
						AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_554, 8f, -8f, -1, 305, 0, 0, 0, 0);
					}
					else
					{
						sLocal_554 = "";
					}
					GAMEPLAY::SET_BIT(&(Local_497.f_52), 28);
				}
			}
		}
	}
	else if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 28) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sLocal_554))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_554, 3))
			{
				AI::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "mp_am_hold_up", sLocal_554, -1056964608);
			}
		}
		GAMEPLAY::CLEAR_BIT(&(Local_497.f_52), 28);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_103.f_25, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 3))
		{
			if (!func_392(Local_103.f_15) && func_44(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar3, 1))
				{
					if ((((iVar3 != joaat("weapon_unarmed") && iVar3 != joaat("object")) && iVar3 != joaat("weapon_flare")) && iVar3 != joaat("weapon_snowball")) && !(func_172(0) || func_171()))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_103.f_15)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_103.f_15)))
						{
							if (func_140(PLAYER::PLAYER_ID(), NETWORK::NET_TO_PED(Local_103.f_15)) || NETWORK::NETWORK_IS_PLAYER_TALKING(PLAYER::PLAYER_ID()))
							{
								GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 3);
							}
						}
					}
				}
			}
		}
	}
}

void func_139(int iParam0)
{
	struct<2> Var0;
	
	Var0 = -2033286589;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		unk_0xA40CC53DF8E50837(1, &Var0, 2, iParam0);
	}
}

int func_140(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	
	if (func_44(iParam0, 1, 1))
	{
		vVar0 = { func_85(iParam0) };
	}
	if (!PED::IS_PED_INJURED(uParam1))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(uParam1, 1) };
	}
	vVar9 = { vVar3 - vVar0 };
	if (!PED::IS_PED_INJURED(uParam1))
	{
		vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1, 0f, 7f, 0f) };
		vVar12 = { vVar6 - vVar3 };
	}
	vVar9.z = 0f;
	vVar12.z = 0f;
	fVar15 = func_141(vVar9, vVar12);
	if (fVar15 < -0.1f)
	{
		return 1;
	}
	return 0;
}

float func_141(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

int func_142(int iParam0)
{
	if (func_38(iParam0))
	{
		return 1;
	}
	if (func_143(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_143(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_144(iParam0, 9);
	}
	return 0;
}

var func_144(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

void func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (PLAYER::PLAYER_ID() != Global_2524719.f_4808)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 6))
		{
			if (iParam0 == 1)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1))
				{
					if ((((iVar2 != joaat("weapon_unarmed") && iVar2 != 0) && iVar2 != joaat("object")) && iVar2 != joaat("weapon_flare")) && iVar2 != joaat("weapon_snowball"))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_556, 2.5f, 2.5f, 3f, 0, 1, 0))
						{
							iVar1 = 1;
						}
						iVar0 = 1;
					}
				}
				if ((((iVar1 == 1 || GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) || (iVar0 == 1 && Local_103.f_3 >= 3)) || (iVar0 == 1 && GAMEPLAY::IS_BIT_SET(Local_103.f_24, 16))) || GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12))
				{
					if (((!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 12) || Local_103.f_3 >= 3) || GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12)) || (iVar0 == 1 && GAMEPLAY::IS_BIT_SET(Local_103.f_24, 16)))
					{
						Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_36++;
						func_13(&(Global_2437022.f_3729));
						func_18(&(Global_2437022.f_3729), 0, 0);
						if (Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_36 <= 2)
						{
							if (func_148())
							{
								if (func_147() < 2)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_147()));
								}
								else
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(2));
							}
						}
						else if (Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_36 >= 5)
						{
							if (func_148())
							{
								if (func_147() < 3)
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_147()));
								}
								else
								{
									PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
								}
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(4));
							}
						}
						else if (func_148())
						{
							if (func_147() < 3)
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_147()));
							}
							else
							{
								PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
							}
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
						{
							GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
						}
						GAMEPLAY::SET_BIT(&(Local_497.f_52), 6);
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 27) && !GAMEPLAY::IS_BIT_SET(Local_497.f_52, 6))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					if (func_17(&uLocal_594, 2000, 0) || PED::_0xDCCA191DF9980FD7(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
						GAMEPLAY::SET_BIT(&(Local_497.f_52), 27);
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 27);
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
						{
							GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
						}
					}
				}
				else if (func_146(&uLocal_594))
				{
					func_13(&uLocal_594);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 24))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_497.f_52, 31))
			{
				if (func_392(Local_103))
				{
					if (func_148())
					{
						if (func_147() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_147()));
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					GAMEPLAY::SET_BIT(&(Local_497.f_52), 24);
					if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
					{
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

bool func_146(var uParam0)
{
	return uParam0->f_1;
}

int func_147()
{
	return Global_262145.f_12484;
}

int func_148()
{
	if (func_143(PLAYER::PLAYER_ID()) && func_93(PLAYER::PLAYER_ID()) == 154)
	{
		return 1;
	}
	return 0;
}

void func_149()
{
	int iVar0;
	int iVar1;
	
	if (func_44(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 23) && GAMEPLAY::IS_BIT_SET(Local_103.f_23, 17))
		{
			if (!func_392(Local_103))
			{
				iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
				if (iLocal_563 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563))
					{
						if ((!GAMEPLAY::IS_BIT_SET(Global_1645896, 15) && func_154()) && func_153())
						{
							GAMEPLAY::SET_BIT(&Global_1645896, 15);
						}
						if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							iVar0 = func_130(1190, -1, 0);
							if (!GAMEPLAY::IS_BIT_SET(iVar0, 3))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_563) < 0.4f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_596)
								{
									func_152("FHU_HELP3", -1);
									GAMEPLAY::SET_BIT(&iVar0, 3);
									func_128(1190, iVar0, -1, 1, 0);
								}
							}
							else if (!GAMEPLAY::IS_BIT_SET(iVar0, 5) || !GAMEPLAY::IS_BIT_SET(iVar0, 6))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_563) < 0.7f && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == iLocal_596)
								{
									func_152("FHU_HELP4", -1);
									GAMEPLAY::SET_BIT(&iVar0, 5);
									func_128(1190, iVar0, -1, 1, 0);
									GAMEPLAY::SET_BIT(&(Local_497.f_52), 23);
								}
							}
							else
							{
								GAMEPLAY::SET_BIT(&(Local_497.f_52), 23);
							}
						}
					}
				}
			}
		}
		if (((((((!func_37(PLAYER::PLAYER_ID(), 146) && !func_151()) && func_93(PLAYER::PLAYER_ID()) != 167) && func_93(PLAYER::PLAYER_ID()) != 190) && func_93(PLAYER::PLAYER_ID()) != 191) && func_93(PLAYER::PLAYER_ID()) != 250) && func_93(PLAYER::PLAYER_ID()) != 237) && func_93(PLAYER::PLAYER_ID()) != 238)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_497.f_53, 1))
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (((((func_392(Local_103) || Local_103.f_3 > 7) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 20)) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 11)) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_564, 1.5f) == 0)
					{
						iVar1 = func_130(1190, -1, 0);
						if (!GAMEPLAY::IS_BIT_SET(iVar1, 20) || !GAMEPLAY::IS_BIT_SET(iVar1, 21))
						{
							func_152("FHU_HELPM", -1);
							if (!GAMEPLAY::IS_BIT_SET(iVar1, 20))
							{
								GAMEPLAY::SET_BIT(&iVar1, 20);
							}
							else
							{
								GAMEPLAY::SET_BIT(&iVar1, 21);
							}
							func_128(1190, iVar1, -1, 1, 0);
							GAMEPLAY::SET_BIT(&(Local_497.f_53), 1);
						}
						else
						{
							GAMEPLAY::SET_BIT(&(Local_497.f_53), 1);
						}
					}
				}
			}
			else if (func_150("FHU_HELPM"))
			{
				if ((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 20) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 11)) || GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5))
				{
					UI::CLEAR_HELP(1);
				}
			}
		}
	}
}

bool func_150(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_151()
{
	return Global_1573341;
}

void func_152(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

var func_153()
{
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_1721, 21);
}

var func_154()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_146, 3);
}

void func_155()
{
	float fVar0;
	float fVar1;
	
	if (Local_103.f_3 == 4)
	{
		if (func_44(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!func_392(Local_103))
			{
				iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
				if (iLocal_563 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563))
					{
						fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_563);
						fVar0 = (fVar0 * 1000f);
						if (fVar0 <= 890f)
						{
							func_156(SYSTEM::ROUND(fVar0), 890, "HUP_PROG", func_160(PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID())), 0, 1, 13);
						}
						fVar1 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
						fVar1 = (fVar1 - 0.3f);
						if (fVar1 < 0f)
						{
							fVar1 = 0f;
						}
						fVar1 = (fVar1 * 4f);
						Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_6 = fVar1;
					}
				}
			}
		}
	}
}

void func_156(var uParam0, int iParam1, char* sParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	func_157(uParam0, iParam1, sParam2, uParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0);
}

void func_157(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_159(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_158(0, iVar0);
		Global_1369750.f_1093[iVar0] = uParam0;
		Global_1369750.f_1093.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1369750.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1369750.f_1093.f_194[iVar0] = uParam3;
		Global_1369750.f_1093.f_183[iVar0] = uParam4;
		Global_1369750.f_1093.f_216[iVar0] = uParam5;
		Global_1369750.f_1093.f_227[iVar0 /*3*/] = fParam6;
		Global_1369750.f_1093.f_227[iVar0 /*3*/].f_1 = fParam7;
		Global_1369750.f_1093.f_258[iVar0] = iParam8;
		Global_1369750.f_1093.f_269[iVar0] = uParam9;
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

void func_158(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1369750.f_6130[iParam0]), iParam1);
}

int func_159(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1369750.f_6130[iParam0], iParam1);
}

int func_160(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

void func_161()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_497.f_53, 2))
	{
		STREAMING::REQUEST_ANIM_DICT("oddjobs@shop_robbery@rob_till");
		STREAMING::REQUEST_ANIM_DICT(func_162());
		if (STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@shop_robbery@rob_till") && STREAMING::HAS_ANIM_DICT_LOADED(func_162()))
		{
			GAMEPLAY::SET_BIT(&(Local_497.f_53), 2);
		}
	}
}

char* func_162()
{
	if (func_163(PLAYER::PLAYER_ID()))
	{
		return "anim@am_hold_up@male";
	}
	return "anim@am_hold_up@female";
}

int func_163(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	return Global_2423801[iParam0 /*413*/].f_230;
}

int func_164(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	vVar0 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar6 = 0f;
	func_165(iParam1, &vVar0, &vVar3, &fVar6);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uParam0, vVar0, vVar3, fVar6, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_165(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1390.033f, 3605.529f, 33.98091f };
		*uParam2 = { 1394.412f, 3607.156f, 36.38288f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3041.675f, 583.5931f, 6.908931f };
		*uParam2 = { -3037.284f, 585.0375f, 9.521532f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3245.184f, 1000.124f, 11.83071f };
		*uParam2 = { -3240.504f, 999.7783f, 14.46645f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 549.5332f, 2668.464f, 41.15651f };
		*uParam2 = { 548.9114f, 2673.108f, 43.7766f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2554.316f, 380.8569f, 107.623f };
		*uParam2 = { 2558.98f, 380.6908f, 110.2684f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2675.476f, 3280.807f, 54.24115f };
		*uParam2 = { 2679.577f, 3278.526f, 56.8955f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1729.145f, 6417.834f, 34.03724f };
		*uParam2 = { 1727.07f, 6413.635f, 36.66442f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1958.61f, 3742.512f, 31.34376f };
		*uParam2 = { 1960.958f, 3738.465f, 33.98634f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 24.51093f, -1344.449f, 28.49703f };
		*uParam2 = { 24.52224f, -1349.084f, 31.14272f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 373.296f, 329.2379f, 102.5664f };
		*uParam2 = { 372.1347f, 324.6985f, 105.214f };
		*fParam3 = 1.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1168.183f, 2711.203f, 37.06316f };
		*uParam2 = { 1163.144f, 2711.246f, 40.16688f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2966.142f, 388.6418f, 14.04331f };
		*uParam2 = { -2965.812f, 393.6473f, 17.17248f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1223.599f, -909.8984f, 11.32635f };
		*uParam2 = { -1219.443f, -907.0756f, 14.45929f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.524f, -980.3087f, 45.41582f };
		*uParam2 = { 1134.22f, -985.284f, 48.53235f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.413f, -379.3236f, 39.16341f };
		*uParam2 = { -1487.954f, -375.7666f, 42.28885f };
		*fParam3 = 2.5f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1699.447f, 4921.57f, 41.06366f };
		*uParam2 = { 1695.64f, 4924.245f, 44.22165f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -705.7869f, -911.6997f, 18.2156f };
		*uParam2 = { -705.7026f, -916.374f, 21.33545f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.26995f, -1756.669f, 28.42101f };
		*uParam2 = { -48.26036f, -1760.285f, 31.56342f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1164.697f, -320.7587f, 68.2051f };
		*uParam2 = { 1165.463f, -325.0899f, 71.37893f };
		*fParam3 = 2.25f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1821.205f, 795.8699f, 137.0893f };
		*uParam2 = { -1818.041f, 792.3982f, 140.1836f };
		*fParam3 = 2.25f;
	}
}

void func_166(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_168(&iVar0, 0, iParam1))
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
		func_167(&(Global_17367.f_5658[iVar0 /*10*/]));
		Global_17367.f_5719[iVar0] = 0;
	}
	else
	{
		Global_17367.f_5719[iVar0] = 0;
	}
}

void func_167(var uParam0)
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

int func_168(var uParam0, bool bParam1, int iParam2)
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

bool func_169(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_168(&iVar0, 1, iParam1))
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
	bVar2 = func_170(&(Global_17367.f_5658[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_170(var uParam0)
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

int func_171()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
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

void func_173()
{
	if (PLAYER::PLAYER_ID() != Global_2524719.f_4808)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 24))
		{
			if (Local_103.f_72 == PLAYER::PLAYER_ID() || (GAMEPLAY::IS_BIT_SET(Local_497.f_52, 31) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_606, 20f, 20f, 20f, 0, 1, 0)))
			{
				if (func_392(Local_103))
				{
					if (func_148())
					{
						if (func_147() < 3)
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(func_147()));
						}
						else
						{
							PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
						}
					}
					else
					{
						PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 13, PLAYER::GET_WANTED_LEVEL_THRESHOLD(3));
					}
					GAMEPLAY::SET_BIT(&(Local_497.f_52), 24);
					if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 1))
					{
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 2);
					}
				}
			}
		}
	}
}

int func_174()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_103.f_25, 0))
	{
		return 0;
	}
	if (func_392(Local_103.f_15))
	{
		if (UI::DOES_BLIP_EXIST(uLocal_812))
		{
			UI::REMOVE_BLIP(&uLocal_812);
		}
		return 0;
	}
	if (Local_103.f_66 == 4)
	{
		if (!UI::DOES_BLIP_EXIST(uLocal_812))
		{
			uLocal_812 = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_103.f_15));
			UI::SET_BLIP_COLOUR(uLocal_812, 1);
			UI::SET_BLIP_SCALE(uLocal_812, 0.7f);
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_15))
	{
		return 0;
	}
	switch (Local_103.f_66)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), 713668775) != 0)
			{
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), 713668775) != 1)
				{
					if (func_44(PLAYER::PLAYER_ID(), 1, 1))
					{
						AI::TASK_GO_TO_ENTITY(NETWORK::NET_TO_PED(Local_103.f_15), PLAYER::PLAYER_PED_ID(), -1, 4f, 2f, 1073741824, 0);
					}
				}
			}
			break;
		
		case 3:
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_25, 5) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 0))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), 1227113341) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), 1227113341) != 1)
				{
					AI::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_103.f_15), PLAYER::PLAYER_PED_ID(), 10000);
					GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 0);
				}
			}
			if ((!GAMEPLAY::IS_BIT_SET(Local_103.f_25, 6) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 1)) && !func_175())
			{
				func_391(&uLocal_620, 4, NETWORK::NET_TO_PED(Local_103.f_15), "StoreHero", 1, 0);
				AUDIO::_PLAY_AMBIENT_SPEECH1(NETWORK::NET_TO_PED(Local_103.f_15), "GENERIC_INSULT_HIGH", "SPEECH_PARAMS_FORCE", 1);
				GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 1);
			}
			break;
		
		case 4:
			if ((!GAMEPLAY::IS_BIT_SET(Local_103.f_25, 7) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 2)) && !func_175())
			{
				func_391(&uLocal_620, 4, NETWORK::NET_TO_PED(Local_103.f_15), "StoreHero", 1, 0);
				AUDIO::_PLAY_AMBIENT_SPEECH1(NETWORK::NET_TO_PED(Local_103.f_15), "GENERIC_FUCK_YOU", "SPEECH_PARAMS_FORCE", 1);
				GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5), 2);
			}
			if (GAMEPLAY::IS_BIT_SET(Local_103.f_25, 7) || GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_5, 2))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), -1442466670) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), -1442466670) != 1)
				{
					AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_103.f_15));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_103.f_15), Global_1574987);
					AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_103.f_15), 20f, 0);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103.f_15), 1);
				}
			}
			break;
		
		case 5:
			if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), 242628503) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), 242628503) != 1)
			{
				AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_103.f_15));
				AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103.f_15), uLocal_572);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103.f_15), 1);
			}
			else if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), -875674219) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_15), -875674219) != 0)
			{
				if (func_17(&uLocal_592, 5000, 0))
				{
					func_13(&uLocal_592);
					AI::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_103.f_15), PLAYER::PLAYER_PED_ID(), 10000);
				}
			}
			break;
	}
	return 1;
}

int func_175()
{
	if (Global_15822 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_176()
{
	if (Local_103.f_3 == 4)
	{
		if ((!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 10) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 4)) && GAMEPLAY::IS_BIT_SET(Local_103.f_23, 17))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_13) || (!NETWORK::_NETWORK_CAN_NETWORK_ID_BE_SEEN(Local_103.f_13) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
				{
					if (!func_392(Local_103))
					{
						if (PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
						{
							ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_103.f_13), 1, 0);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_103.f_13), 1);
							ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_103.f_13), 0f, 0f, -1f);
							PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
							GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 4);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_OBJ(Local_103.f_13), 1, 0);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_OBJ(Local_103.f_13), 1);
						ENTITY::SET_ENTITY_VELOCITY(NETWORK::NET_TO_OBJ(Local_103.f_13), 0f, 0f, -1f);
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 4);
					}
				}
			}
		}
	}
	func_177();
}

void func_177()
{
	int iVar0;
	var uVar1;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_103.f_13), 0))
		{
			if ((!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 11) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5)) && Local_103.f_37 > 0f)
			{
				if (((func_224() || func_223(0.87f)) || Local_103.f_3 >= 5) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 10))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 11))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_13))
						{
							OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_103.f_13), 0, 0);
							GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 13);
						}
						if (func_93(PLAYER::PLAYER_ID()) != 155)
						{
							OBJECT::_0x0BF3B3BD47D79C08(func_50(1), 1);
						}
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 11);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_13), PLAYER::PLAYER_PED_ID()))
					{
						Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						GAMEPLAY::GET_GROUND_Z_FOR_3D_COORD(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7, &(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_7.f_2), 0, 0);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_13))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_13), 1, 1);
							func_45(&(Local_103.f_13));
						}
						iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(iLocal_589, iLocal_590);
						if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 10))
						{
							iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Local_103.f_37));
						}
						if (Local_103.f_4 > 1000)
						{
							Local_103.f_4 = 1000;
						}
						iVar0 = (iVar0 + Local_103.f_4);
						iVar0 = func_222(iVar0, 1);
						if (iVar0 > Global_262145.f_166)
						{
							iVar0 = Global_262145.f_166;
						}
						if (func_221(PLAYER::PLAYER_ID()) && func_219(func_220(PLAYER::PLAYER_ID())) < 1f)
						{
							if (Global_262145.f_4226 > 1f)
							{
								Global_262145.f_4226 = 1f;
							}
							iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_4226));
						}
						if (iVar0 > 0)
						{
							if (func_218())
							{
								func_207(1734805203, iVar0, &uVar1, 0, 0, 0);
							}
							else
							{
								func_203(iVar0, 1, 1, 1092616192);
								NETWORKCASH::NETWORK_EARN_FROM_HOLDUPS(iVar0);
							}
						}
						Global_2524719.f_5630 = (Global_2524719.f_5630 + iVar0);
						Global_2524719.f_5630.f_2 = 1;
						Global_2524719.f_5630.f_5 = 1;
						iLocal_814 = (iLocal_814 + iVar0);
						func_202(3);
						if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 5))
						{
							func_201(Local_103.f_38, iVar0);
						}
						else
						{
							func_192(PLAYER::PLAYER_PED_ID(), iVar0);
						}
						func_191(1, iVar0);
						if (func_187(1))
						{
							func_178(4);
						}
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 5);
						GAMEPLAY::SET_BIT(&(Local_497.f_53), 6);
					}
				}
			}
		}
	}
}

void func_178(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17562;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17552;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17563;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17555;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17551;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17566;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17567;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17570;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17571;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17564;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18452;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18451;
			break;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_185(func_186()), func_183(func_186()), func_182(), func_181(), iParam0, iVar0);
	}
	func_180(iVar0);
	func_179(iVar0);
}

void func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = func_130(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_449 = iVar0;
	func_128(3968, iVar0, -1, 1, 0);
}

void func_180(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1625435[iVar0 /*560*/].f_11.f_448 = (Global_1625435[iVar0 /*560*/].f_11.f_448 + iParam0);
	if (Global_1625435[iVar0 /*560*/].f_11.f_448 < -9999)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_448 = 9999;
	}
	else if (Global_1625435[iVar0 /*560*/].f_11.f_448 > 9999)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_448 = 9999;
	}
}

int func_181()
{
	if (Global_1666806.f_3 != 0)
	{
		return Global_1666806.f_3;
	}
	return -1;
}

int func_182()
{
	if (Global_1666806.f_2 != 0)
	{
		return Global_1666806.f_2;
	}
	return -1;
}

int func_183(int iParam0)
{
	if (iParam0 == func_184())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_184()
{
	return -1;
}

int func_185(int iParam0)
{
	if (iParam0 == func_184())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[0];
}

int func_186()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11;
}

bool func_187(bool bParam0)
{
	return func_188(PLAYER::PLAYER_ID(), bParam0);
}

int func_188(int iParam0, bool bParam1)
{
	return func_189(iParam0, bParam1, 1);
}

int func_189(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_184())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_190(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_184() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_190(int iParam0, int iParam1)
{
	if (iParam0 != func_184())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_184())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_191(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23348 == 0 || Global_262145.f_23348 == 1)
		{
			if (!GAMEPLAY::IS_PC_VERSION() || Global_262145.f_23348 == 1)
			{
				Global_2524719.f_272 = iParam0;
				if (iParam1 > Global_262145.f_6473)
				{
					iParam1 = Global_262145.f_6473;
				}
				Global_2524719.f_273 = iParam1;
				Global_2524719.f_274 = 0;
			}
		}
	}
}

void func_192(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0 = { func_199(PLAYER::PLAYER_PED_ID(), 1) };
	if (iParam0 == func_198(PLAYER::PLAYER_PED_ID()))
	{
		func_197(1);
	}
	func_193(vVar0, iParam1, 7, 0, 0);
}

void func_193(vector3 vParam0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2437022.f_1285[iVar0 /*30*/].f_6 == 0 || Global_2437022.f_1285[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2437022.f_1285[iVar1 /*30*/] = { vParam0 };
			Global_2437022.f_1285[iVar1 /*30*/].f_6 = 1;
			Global_2437022.f_1285[iVar1 /*30*/].f_4 = func_196(Global_2437022.f_1285[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437022.f_1285[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437022.f_1285[iVar1 /*30*/].f_3 = iParam3;
			Global_2437022.f_1285[iVar1 /*30*/].f_8 = iParam4;
			Global_2437022.f_1285[iVar1 /*30*/].f_9 = func_195();
			Global_2437022.f_1285[iVar1 /*30*/].f_10 = func_194();
			StringCopy(&(Global_2437022.f_1285[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437022.f_1285[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_194()
{
	if (Global_2437022.f_1886)
	{
		Global_2437022.f_1886 = 0;
		return 1;
	}
	Global_2437022.f_1886 = 0;
	return 0;
}

var func_195()
{
	var uVar0;
	
	uVar0 = Global_2437022.f_1888;
	Global_2437022.f_1888 = 1;
	return uVar0;
}

float func_196(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, 1);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

void func_197(int iParam0)
{
	Global_2437022.f_1886 = iParam0;
}

int func_198(var uParam0)
{
	return uParam0;
}

Vector3 func_199(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	vector3 vVar7;
	vector3 vVar10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_200(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = vVar3.z;
		}
	}
	GAMEPLAY::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar7, &vVar10);
	if (bParam1)
	{
		fVar13 = (vVar10.z + 0.18f);
	}
	else
	{
		fVar13 = (vVar7.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar6, 0f, 0f, fVar13) };
	return vVar0;
}

int func_200(var uParam0)
{
	return uParam0;
}

void func_201(vector3 vParam0, int iParam3)
{
	func_193(vParam0, iParam3, 6, 0, 0);
}

void func_202(int iParam0)
{
	Global_2437022.f_1888 = iParam0;
}

void func_203(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_204(iParam0, iParam1, iParam2, fParam3);
}

void func_204(int iParam0, int iParam1, int iParam2, float fParam3)
{
	func_205(iParam0, iParam1, iParam2, fParam3);
}

void func_205(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_4 = iVar1;
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_3 = (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_206(iVar1, 0);
	}
}

void func_206(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_207(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_218())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_208(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_208(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_208(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_208(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_208(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262927[iVar2 /*80*/].f_61.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xEC103C948D1D3BEF(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar4))
		{
			*uParam0 = func_215(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262927[*uParam0 /*80*/].f_61.f_8 = 1;
					Global_4262927[*uParam0 /*80*/].f_61.f_12 = 1;
				}
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4263477 = 1;
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4263480 = iParam4;
			Global_4263482 = iParam3;
			Global_4263483 = 1;
			Global_4263481 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_214(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_209(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_209(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_210(iParam0);
	}
}

void func_210(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_213(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_4262927[iParam0 /*80*/].f_61);
		}
		func_211(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_211(var uParam0)
{
	uParam0->f_61 = 0;
	uParam0->f_61 = 2147483647;
	uParam0->f_61.f_1 = 0;
	uParam0->f_61.f_2 = 0;
	uParam0->f_61.f_3 = -1593119440;
	uParam0->f_61.f_4 = -2085313189;
	uParam0->f_61.f_5 = 0;
	uParam0->f_61.f_6 = 1227573907;
	uParam0->f_61.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_212(&(uParam0->f_13));
	func_212(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_61.f_8 = 0;
	uParam0->f_61.f_9 = 0;
	uParam0->f_61.f_10 = 0;
	uParam0->f_61.f_11 = 0;
	uParam0->f_61.f_13 = 0;
	uParam0->f_61.f_12 = 0;
	uParam0->f_61.f_14 = 0;
	uParam0->f_61.f_15 = 0;
	uParam0->f_61.f_16 = 0;
	uParam0->f_61.f_18 = 0;
}

void func_212(var uParam0)
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

int func_213(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_214(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_215(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_218())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262927[iVar0 /*80*/].f_61.f_2 = 1;
			Global_4262927[iVar0 /*80*/].f_61.f_1 = iParam5;
			Global_4262927[iVar0 /*80*/].f_61.f_3 = iParam1;
			Global_4262927[iVar0 /*80*/].f_61.f_4 = iParam2;
			Global_4262927[iVar0 /*80*/].f_61.f_7 = uParam3;
			Global_4262927[iVar0 /*80*/].f_61.f_5 = 0;
			Global_4262927[iVar0 /*80*/].f_61 = iParam0;
			Global_4262927[iVar0 /*80*/].f_61.f_6 = iParam4;
			Global_4262927[iVar0 /*80*/].f_61.f_11 = uParam8;
			Global_4262927[iVar0 /*80*/].f_61.f_10 = uParam7;
			Global_4262927[iVar0 /*80*/].f_61.f_13 = iParam9;
			Global_4262927[iVar0 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar0 /*80*/].f_61.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			Global_4262927[iVar0 /*80*/].f_61.f_18 = 0;
			Global_4263464 = 0;
			if (bParam6)
			{
				Global_4262927[iVar0 /*80*/].f_61.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_216(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_216(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
{
	vector3 vVar0;
	int iVar35;
	
	if (iParam80 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = -313275313;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.f_2 = { Param0.f_61 };
	vVar0.f_2.f_32 = iParam80;
	iVar35 = func_8(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_217();
		unk_0xA40CC53DF8E50837(1, &vVar0, 35, iVar35);
	}
}

void func_217()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_218()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

float func_219(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_220(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/];
	}
	return -1;
}

int func_221(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/] != -1;
	}
	return 0;
}

int func_222(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

int func_223(float fParam0)
{
	iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
	if (iLocal_563 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_563) >= fParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_224()
{
	iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
	if (iLocal_563 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_563) >= 1f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_225()
{
	func_226();
}

int func_226()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103))
	{
		return 0;
	}
	if (func_392(Local_103))
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_497.f_53, 3))
		{
			PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_103));
			GAMEPLAY::SET_BIT(&(Local_497.f_53), 3);
		}
		return 0;
	}
	switch (Local_103.f_3)
	{
		case 0:
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_103), 71, 1);
			break;
		
		case 1:
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 4) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 12))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 13))
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 17))
					{
						PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
						AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							func_232(10);
						}
						else if (GAMEPLAY::IS_BIT_SET(Local_103.f_24, 0))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 11))
							{
								if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 12))
								{
									func_232(13);
								}
								else
								{
									func_232(20);
								}
							}
							else
							{
								func_232(17);
							}
							GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						}
						else if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 11))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 12))
							{
								func_232(0);
							}
							else
							{
								func_232(18);
							}
						}
						else
						{
							func_232(15);
						}
						GAMEPLAY::SET_BIT(&(Local_497.f_52), 17);
					}
					else if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), -875674219) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), -875674219) != 0)
					{
						if (func_17(&uLocal_592, 5000, 0))
						{
							func_13(&uLocal_592);
							if (!iLocal_553)
							{
								AI::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_103), PLAYER::PLAYER_PED_ID(), 10000);
							}
							AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
					}
				}
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_103), 71, 1);
			break;
		
		case 2:
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 7) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 0))
			{
				uVar1 = PLAYER::PLAYER_PED_ID();
				if (Local_103.f_32 > -1)
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_32)))
					{
						uVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_32));
						uVar1 = PLAYER::GET_PLAYER_PED(uVar0);
					}
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), uVar1, -1, 0, 2);
					PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
					AI::TASK_PLAY_ANIM(NETWORK::NET_TO_PED(Local_103), "mp_am_hold_up", "WARY_LOOP", 4f, -4f, -1, 49, 0, 0, 0, 0);
					GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 0);
				}
			}
			else if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), -875674219) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), -875674219) != 0)
			{
				if (func_17(&uLocal_592, 5000, 0))
				{
					uVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_103.f_32 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_32)))
						{
							uVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_32));
							uVar1 = PLAYER::GET_PLAYER_PED(uVar0);
						}
					}
					func_13(&uLocal_592);
					AI::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_103), uVar1, 10000);
					AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), uVar1, -1, 0, 2);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 16))
			{
				PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
			}
			PED::SET_PED_RESET_FLAG(NETWORK::NET_TO_PED(Local_103), 71, 1);
			break;
		
		case 3:
			if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 25))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 1920390111) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 1920390111) != 1)
				{
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_103), 2, 0);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_103), 8, 1);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_103), 16, 1);
					PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
					AI::TASK_ACHIEVE_HEADING(NETWORK::NET_TO_PED(Local_103), Local_103.f_42, -1);
					GAMEPLAY::SET_BIT(&(Local_497.f_52), 25);
				}
			}
			break;
		
		case 4:
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 17) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 3))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					Global_2524719.f_8 = 1;
				}
				uVar2 = PLAYER::PLAYER_PED_ID();
				if (Global_2524719.f_9 != func_184())
				{
					if (func_44(Global_2524719.f_9, 1, 1))
					{
						uVar2 = PLAYER::GET_PLAYER_PED(Global_2524719.f_9);
					}
				}
				AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), uVar2, 30000, 0, 3);
				PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_103), "mood_stressed_1", 0);
				GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 3);
			}
			else
			{
				iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
				if (iLocal_563 >= 0)
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563))
					{
						fLocal_797 = (Local_103.f_33 + 0.6f);
						if (fLocal_797 < 0.75f)
						{
							fLocal_797 = 0.75f;
						}
						if (GAMEPLAY::IS_BIT_SET(Local_103.f_24, 4))
						{
							fLocal_797 = (fLocal_797 + 0.25f);
						}
						if (fLocal_797 > 1.75f)
						{
							fLocal_797 = 1.75f;
						}
						PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_563, fLocal_797);
					}
				}
			}
			break;
		
		case 5:
			if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 10))
			{
				if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 242628503) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), 242628503) != 1)
				{
					if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
					{
						iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
						if ((iLocal_563 >= 0 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563)) || iLocal_563 < 0)
						{
							AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_572);
							PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
							GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 10);
						}
					}
				}
			}
			else if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), -875674219) != 1 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), -875674219) != 0)
			{
				if (func_17(&uLocal_592, 5000, 0))
				{
					func_13(&uLocal_592);
					uVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_103.f_32 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_32)))
						{
							uVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_32));
							uVar1 = PLAYER::GET_PLAYER_PED(uVar0);
						}
					}
					AI::TASK_TURN_PED_TO_FACE_ENTITY(NETWORK::NET_TO_PED(Local_103), uVar1, 10000);
					AI::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_103), PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			break;
		
		case 6:
			if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 10))
			{
				if ((iLocal_563 < 0 || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563)) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_563) >= 0.95f)
				{
					func_231();
					uVar1 = PLAYER::PLAYER_PED_ID();
					if (Local_103.f_32 > -1)
					{
						if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_32)))
						{
							uVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_103.f_32));
							uVar1 = PLAYER::GET_PLAYER_PED(uVar0);
						}
					}
					AI::TASK_HANDS_UP(NETWORK::NET_TO_PED(Local_103), -1, uVar1, -1, 1);
					PED::_0x2208438012482A1A(NETWORK::NET_TO_PED(Local_103), 0, 0);
					PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 16);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
					GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 10);
				}
			}
			break;
		
		case 7:
			if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), -1442466670) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), -1442466670) != 1)
			{
				if (!func_175())
				{
					func_230();
					AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_103));
					AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_103), 20f, 0);
					func_232(4);
				}
			}
			break;
		
		case 8:
			if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
			{
				func_231();
				iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
				if ((iLocal_563 >= 0 && !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563)) || iLocal_563 < 0)
				{
					if ((!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 27) && !func_36()) && !func_35())
					{
						if (GAMEPLAY::IS_BIT_SET(Local_103.f_24, 2))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 3))
							{
								AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_574);
								iVar3 = 1;
							}
							else
							{
								func_230();
								AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_575);
								iVar3 = 1;
							}
						}
					}
					else
					{
						AI::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_103), vLocal_559, 250f, -1, 1, 0);
						iVar3 = 1;
					}
					if (iVar3 == 1)
					{
						func_232(25);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
						func_6(Local_497.f_50, 1, func_7());
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 9);
					}
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 19))
			{
				iVar4 = AI::GET_NAVMESH_ROUTE_RESULT(NETWORK::NET_TO_PED(Local_103));
				if (iVar4 == 3)
				{
					AI::CLEAR_PED_SECONDARY_TASK(NETWORK::NET_TO_PED(Local_103));
					GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 19);
				}
				else if (iVar4 == 2)
				{
					AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_103));
					if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 3))
					{
						AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_576);
					}
					else
					{
						AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_103), 20f, 0);
					}
					GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 19);
				}
			}
			break;
	}
	func_227();
	return 1;
}

void func_227()
{
	if ((Local_103.f_3 != 8 && Local_103.f_3 != 7) && Local_103.f_2 == 3)
	{
		if ((((!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 14) || !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 15)) || !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 22)) || !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 23)) || !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 30))
		{
			iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
			if (iLocal_563 >= 0)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563))
				{
					if (!func_175())
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 14) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 6))
						{
							func_232(2);
							GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 6);
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 15) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 7))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_563) > 0.87f)
							{
								func_232(3);
								GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 7);
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 22) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 22))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 24) && !func_175())
							{
								func_232(11);
								GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 22);
							}
						}
						if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 23) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 23))
						{
							if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 25) && !func_175())
							{
								func_232(12);
								GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 23);
							}
						}
					}
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 9))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 26) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 24))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 7))
				{
					if (!func_175())
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 11))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 12))
							{
								func_232(1);
							}
							else
							{
								func_232(19);
							}
						}
						else
						{
							func_232(16);
						}
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 24);
						return;
					}
					else
					{
						func_228();
						return;
					}
				}
			}
			if (((!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 30) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 25)) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 7)) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 4))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_24, 0) && !func_175())
				{
					if ((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 7) && GAMEPLAY::IS_BIT_SET(Local_103.f_23, 4)) || (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 7) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 4)))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 11))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 12))
							{
								func_232(13);
							}
							else
							{
								func_232(20);
							}
						}
						else
						{
							func_232(17);
						}
						GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 25);
						return;
					}
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_23, 31) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 26))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_24, 1) && !func_175())
				{
					func_232(14);
					GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 26);
					return;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 9) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 31))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_24, 8) && !func_175())
				{
					func_232(22);
					GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 31);
					return;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_1, 3) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1, 3))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_1, 2) && !func_175())
				{
					func_232(24);
					GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_1), 3);
					return;
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 14) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 20))
			{
				if (GAMEPLAY::IS_BIT_SET(Local_103.f_24, 13) && !func_175())
				{
					func_232(23);
					GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 20);
					return;
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 6) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 29))
	{
		if (GAMEPLAY::IS_BIT_SET(Local_103.f_24, 5))
		{
			if (!func_175())
			{
				func_232(21);
				GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 29);
				return;
			}
		}
	}
}

void func_228()
{
	Global_14688 = 0;
	func_229();
}

void func_229()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16833 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15822 = 6;
	}
}

void func_230()
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iVar0 < 3)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_pistol"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(10, 35));
	}
	else if (iVar0 < 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_combatpistol"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(15, 40));
	}
	else if (iVar0 == 6)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_microsmg"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	else if (iVar0 == 7)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_combatmg"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5, 15));
	}
	else if (iVar0 == 8)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_bat"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(20, 40));
	}
	else if (iVar0 == 9)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_assaultrifle"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5, 30));
	}
	else if (iVar0 == 10)
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_sawnoffshotgun"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(5, 20));
	}
	else
	{
		WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_pumpshotgun"), 25000, 0);
		PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), GAMEPLAY::GET_RANDOM_INT_IN_RANGE(10, 25));
	}
	func_6(Local_497.f_50, 1, func_7());
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_103), Global_1574987);
	PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_103), 1);
	PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_103), 1);
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_103), vLocal_556, 20f, 0, 0);
	PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
}

void func_231()
{
	iLocal_563 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(Local_103.f_29);
	if (iLocal_563 >= 0)
	{
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_563))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(Local_103.f_29);
		}
	}
}

void func_232(int iParam0)
{
	struct<2> Var0;
	int iVar4;
	
	if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 13))
	{
		if (!func_392(Local_103))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103) || (!NETWORK::_NETWORK_CAN_NETWORK_ID_BE_SEEN(Local_103) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				if (!PED::IS_PED_RAGDOLL(NETWORK::NET_TO_PED(Local_103)))
				{
					if (Local_103.f_45 == 0)
					{
						StringCopy(&Var0, "RB_SH2", 16);
					}
					else if (Local_103.f_45 == 1)
					{
						StringCopy(&Var0, "RB_12_F", 16);
					}
					else
					{
						StringCopy(&Var0, "RB_SH3", 16);
					}
					StringIntConCat(&Var0, Local_103.f_31, 16);
					StringIntConCat(&Var0, iParam0, 16);
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var0, "RB_SH241"))
					{
						if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, 1))
						{
							if ((((((iVar4 == joaat("weapon_unarmed") || iVar4 == 0) || iVar4 == joaat("object")) || iVar4 == joaat("weapon_flare")) || iVar4 == joaat("weapon_snowball")) || func_250(iVar4)) || func_249(iVar4))
							{
								StringCopy(&Var0, "RB_SH211", 16);
							}
						}
					}
					func_391(&uLocal_620, 3, NETWORK::NET_TO_PED(Local_103), &(Local_103.f_46), 1, 0);
					switch (iParam0)
					{
						case 0:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_GREET", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 1:
							func_233(&uLocal_620, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 2:
							func_233(&uLocal_620, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 3:
							func_233(&uLocal_620, "RB_12AU", &Var0, 12, 1, 0, 1);
							break;
						
						case 4:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_BRAVE", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 10:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_REMOVE_VEHICLE", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 11:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_REACT_TO_SHOUT", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 12:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_HURRYING", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 13:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_NO_COPS", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 14:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_THREATENED", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 15:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_GREET_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 16:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_SCARED_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 17:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_NO_COPS_START", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 18:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_GREET_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 19:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_SCARED_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 20:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_NO_COPS_END", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 21:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_COPS_ARRIVED", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 22:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_SELL", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 23:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_NO_ENTRY", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 24:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SHOP_STEAL", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						
						case 25:
							AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(NETWORK::NET_TO_PED(Local_103), "SCREAM_PANIC", &(Local_103.f_50), "SPEECH_PARAMS_FORCE", 1);
							break;
						}
					}
				}
			}
	}
}

int func_233(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_248(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 1;
	return func_234(sParam2, iParam3, 0);
}

int func_234(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_247();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_246(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_245();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2383, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2384, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2385, 0);
			if (bParam2)
			{
				func_239();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_238())
				{
					return 0;
				}
				if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71205)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_237())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (GAMEPLAY::IS_BIT_SET(Global_2383, 9))
				{
					return 0;
				}
			}
			func_236();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_235();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_247();
	}
	return 0;
}

void func_235()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15822 = 1;
}

void func_236()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2384, 16);
}

int func_237()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_238()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_239()
{
	if (func_126(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_240();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

var func_240()
{
	func_241();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_241()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_244(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_243(PLAYER::PLAYER_PED_ID());
			if (func_242(iVar0) && (!func_126(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_242(Global_106070.f_2355.f_539.f_4301))
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

bool func_242(int iParam0)
{
	return iParam0 < 3;
}

int func_243(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_244(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_244(int iParam0)
{
	if (func_242(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_245()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

bool func_246(int iParam0, int iParam1)
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

void func_247()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16833 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15822 = 6;
		return;
	}
}

void func_248(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = uParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

int func_249(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_molotov"):
		case joaat("weapon_smokegrenade"):
		case joaat("weapon_grenade"):
		case joaat("weapon_stickybomb"):
		case joaat("weapon_proxmine"):
			return 1;
			break;
		
		case joaat("weapon_pipebomb"):
			return 1;
			break;
	}
	return 0;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
		case joaat("weapon_bat"):
		case joaat("weapon_nightstick"):
		case joaat("weapon_hammer"):
		case joaat("weapon_golfclub"):
		case joaat("weapon_crowbar"):
		case joaat("weapon_bottle"):
		case joaat("weapon_dagger"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_hatchet"):
		case joaat("weapon_machete"):
		case joaat("weapon_switchblade"):
			return 1;
			break;
		
		case joaat("weapon_battleaxe"):
		case joaat("weapon_poolcue"):
		case joaat("weapon_wrench"):
			return 1;
			break;
		
		case joaat("weapon_stone_hatchet"):
			return 1;
	}
	return 0;
}

void func_251()
{
	int iVar0;
	
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(0, 0);
	if (Local_103.f_43 != iVar0)
	{
		if (Local_103.f_43 < iVar0 || func_258(Local_103.f_43, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_103.f_43);
		}
	}
	iVar0 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(0, 0);
	if (Local_103.f_44 != iVar0)
	{
		if (Local_103.f_44 < iVar0 || func_252(Local_103.f_44, 0, 1))
		{
			NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_103.f_44);
		}
	}
}

int func_252(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(2, iParam0, 1, bParam1, bParam2);
}

int func_253(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(Global_1380171, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_257(iParam0) - func_256(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_255(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_256(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_257(iParam0) - func_256(iParam0, 1));
		}
		if (!bParam4 && Global_1589747[PLAYER::PLAYER_ID() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_254(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1380171.f_1;
			break;
		
		case 1:
			return Global_1380171.f_2;
			break;
		
		case 2:
			return Global_1380171.f_3;
			break;
	}
	return 0;
}

int func_256(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2423801[iVar0 /*413*/].f_209;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2423801[iVar0 /*413*/].f_210;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2423801[iVar0 /*413*/].f_211;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1380179;
			break;
		
		case 1:
			return Global_1380180;
			break;
		
		case 2:
			return Global_1380181;
			break;
	}
	return 0;
}

int func_258(int iParam0, bool bParam1, bool bParam2)
{
	return func_253(0, iParam0, 1, bParam1, bParam2);
}

void func_259()
{
	float fVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	int iVar8;
	var uVar9;
	
	switch (iLocal_815)
	{
		case 0:
			if (!GAMEPLAY::IS_BIT_SET(Local_497.f_53, 0))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
				{
					if (func_265(vLocal_821))
					{
						vLocal_821 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(NETWORK::NET_TO_OBJ(Local_103.f_14), 0f, -0.5f, 0f) };
						GAMEPLAY::SET_BIT(&(Local_497.f_53), 0);
					}
				}
			}
			if ((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_821, 0.5f, 0.5f, 1f, 0, 1, 0) && (func_392(Local_103) || Local_103.f_3 > 7)) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 20)) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 11)) && FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vLocal_564, 1.5f) == 0)
			{
				if (((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !func_172(0)) && !func_264()) && !UI::IS_PAUSE_MENU_ACTIVE()) && !func_37(PLAYER::PLAYER_ID(), 146)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
				{
					func_152("FHU_MANR", -1);
					Global_2524719.f_5630.f_4 = 1;
					iLocal_815 = 1;
				}
			}
			break;
		
		case 1:
			if (((((!GAMEPLAY::IS_BIT_SET(Local_103.f_24, 16) && !GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 12)) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 20)) && !GAMEPLAY::IS_BIT_SET(Local_103.f_23, 11)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vLocal_821, 0.5f, 0.5f, 1f, 0, 1, 0)) && (!func_142(PLAYER::PLAYER_ID()) || func_93(PLAYER::PLAYER_ID()) == 154))
			{
				if (((CONTROLS::IS_CONTROL_JUST_PRESSED(0, 51) && !func_263(0)) && !func_264()) && !UI::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_150("FHU_MANR"))
					{
						UI::CLEAR_HELP(1);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 640);
					GAMEPLAY::SET_BIT(&(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/]), 12);
					iLocal_815 = 2;
				}
				else if ((GAMEPLAY::GET_GAME_TIMER() % 1000) < 50)
				{
					if (iLocal_820 == 0)
					{
						func_260(&iLocal_820, 4, "FHU_MANR", 0, 0, 0, 0);
					}
				}
			}
			else if (func_150("FHU_MANR"))
			{
				UI::CLEAR_HELP(1);
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				vLocal_821.z = (vVar3.z - 1f);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_821, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), GAMEPLAY::GET_HEADING_FROM_VECTOR_2D((vLocal_584.x - vLocal_821.x), (vLocal_584.y - vLocal_821.y)));
				AI::CLEAR_SEQUENCE_TASK(&uVar6);
				AI::OPEN_SEQUENCE_TASK(&uVar6);
				AI::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "enter", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				AI::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "loop", 8f, -8f, 4000, 262145, 0, 0, 0, 0);
				AI::TASK_PLAY_ANIM(0, "oddjobs@shop_robbery@rob_till", "exit", 8f, -8f, 4000, 262144, 0, 0, 0, 0);
				AI::CLOSE_SEQUENCE_TASK(uVar6);
				AI::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar6);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, 1);
				bVar2 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_819, 1);
				if (bVar2)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				}
				PED::_0x2208438012482A1A(PLAYER::PLAYER_PED_ID(), 0, 0);
				if (!CAM::DOES_CAM_EXIST(uLocal_816))
				{
					uLocal_816 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_816, PLAYER::PLAYER_PED_ID(), -0.1878f, 3.0635f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_816, PLAYER::PLAYER_PED_ID(), -0.0129f, 0.0927f, 0.3008f, 1);
				CAM::SET_CAM_FOV(uLocal_816, 35f);
				CAM::SHAKE_CAM(uLocal_816, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE(uLocal_816, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			iLocal_815 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!CAM::DOES_CAM_EXIST(uLocal_817))
				{
					uLocal_817 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
				}
				CAM::ATTACH_CAM_TO_ENTITY(uLocal_817, PLAYER::PLAYER_PED_ID(), -1.0346f, 2.9183f, 0.68f, 1);
				CAM::POINT_CAM_AT_ENTITY(uLocal_817, PLAYER::PLAYER_PED_ID(), -0.0574f, 0.1074f, 0.3008f, 1);
				CAM::SET_CAM_FOV(uLocal_817, 35f);
				CAM::SHAKE_CAM(uLocal_817, "HAND_SHAKE", 0.1f);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_817, uLocal_816, 6000, 1, 1);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, 1);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			iLocal_815 = 4;
			break;
		
		case 4:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_817))
			{
				iLocal_815 = 5;
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop", 3))
				{
					fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "oddjobs@shop_robbery@rob_till", "loop");
					if ((fVar0 > 0.374f && fVar0 <= 0.484f) || (fVar0 > 0.824f && fVar0 <= 0.92f))
					{
						if (!iLocal_818)
						{
							uVar7 = SYSTEM::ROUND(((IntToFloat(iLocal_589) * 0.75f) / 4f));
							iVar8 = SYSTEM::ROUND(((IntToFloat(iLocal_590) * 0.75f) / 4f));
							iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(uVar7, iVar8 + 1);
							iVar1 = func_222(iVar1, 1);
							if (iVar1 > (Global_262145.f_166 / 4))
							{
								iVar1 = (Global_262145.f_166 / 4);
							}
							if (func_221(PLAYER::PLAYER_ID()) && func_219(func_220(PLAYER::PLAYER_ID())) < 1f)
							{
								if (Global_262145.f_4226 > 1f)
								{
									Global_262145.f_4226 = 1f;
								}
								iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_4226));
							}
							if (iVar1 > 0)
							{
								if (func_218())
								{
									func_207(1734805203, iVar1, &uVar9, 0, 0, 0);
								}
								else
								{
									func_203(iVar1, 1, 1, 1092616192);
									NETWORKCASH::NETWORK_EARN_FROM_HOLDUPS(iVar1);
								}
							}
							Global_2524719.f_5630 = (Global_2524719.f_5630 + iVar1);
							iLocal_814 = (iLocal_814 + iVar1);
							func_191(1, iLocal_814);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ROBBERY_MONEY_TOTAL", "HUD_FRONTEND_CUSTOM_SOUNDSET", 1);
							iLocal_818 = 1;
						}
					}
					else if (iLocal_818)
					{
						iLocal_818 = 0;
					}
				}
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 71, 1);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 200, 1);
			}
			break;
		
		case 5:
			if (iLocal_819 != joaat("weapon_unarmed") && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_819, 1);
			}
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (CAM::DOES_CAM_EXIST(uLocal_816))
			{
				CAM::DESTROY_CAM(uLocal_816, 0);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_817))
			{
				CAM::DESTROY_CAM(uLocal_817, 0);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			Global_2524719.f_5630.f_2 = 1;
			Global_2524719.f_5630.f_5 = 1;
			if (func_187(1))
			{
				func_178(4);
			}
			iLocal_815 = 7;
			break;
		
		case 6:
			CAM::SET_CAM_ACTIVE(uLocal_817, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			iLocal_815 = 5;
			break;
	}
}

void func_260(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*iParam0 == -1)
		{
			func_261(iParam0);
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

void func_261(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_262(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_36827[iVar0 /*32*/])
		{
			Global_36827[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_262(int iParam0)
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

int func_263(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 14))
			{
				if (Global_14512 == 1)
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
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		if (Global_14512 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (Global_14513.f_1 > 3)
	{
		if (Global_14512 == 1)
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

bool func_264()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17367.f_5873 + 100;
}

int func_265(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_266(var uParam0, var uParam1, var uParam2, var uParam3, vector3 vParam4, var uParam7, var uParam8, bool bParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	char* sVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	
	if (((uParam7->f_4 >= 1000 || (uParam7->f_4 + uParam0->f_51) >= 1000) || func_389(&(uParam7->f_5))) || (func_146(&(Global_2524719.f_10)) && !func_388(Global_2524719.f_10, 300000, 0)))
	{
		if (func_146(&(Global_2524719.f_10)))
		{
			if ((GAMEPLAY::GET_GAME_TIMER() % 2500) < 50)
			{
			}
		}
		if (!uParam0->f_34)
		{
			uParam0->f_34 = 1;
			if (!func_146(&(Global_2524719.f_10)))
			{
				func_18(&(Global_2524719.f_10), 0, 0);
			}
		}
	}
	else
	{
		if (func_146(&(Global_2524719.f_10)))
		{
			func_13(&(Global_2524719.f_10));
		}
		if (uParam0->f_34)
		{
			uParam0->f_34 = 0;
		}
	}
	if ((GAMEPLAY::GET_GAME_TIMER() % 5000) < 50)
	{
	}
	if ((((((uParam7->f_3 < 2 && func_44(PLAYER::PLAYER_ID(), 1, 1)) && GAMEPLAY::IS_BIT_SET(uParam0->f_52, 26)) && !func_387(-1082130432)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1) && !bParam9) && !func_392(*uParam7))
	{
		iVar8 = 0;
		if ((UI::IS_PAUSE_MENU_ACTIVE() && uParam0->f_54 != 0) && !NETWORK::SET_STORE_ENABLED())
		{
			if (!bParam10)
			{
				uParam0->f_54 = 0;
				func_386(uParam0, &(uParam8->f_3));
			}
		}
		switch (uParam0->f_54)
		{
			case 0:
				if ((((!UI::IS_PAUSE_MENU_ACTIVE() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && !AI::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && (!func_142(PLAYER::PLAYER_ID()) || func_93(PLAYER::PLAYER_ID()) == 154)) && !func_385(PLAYER::PLAYER_ID(), 21))
				{
					if (func_384(*uParam0, &uParam1, vParam4.z, &(uParam0->f_16[0 /*3*/]), &(uParam0->f_16[1 /*3*/]), &(uParam0->f_23), &(uParam0->f_26)))
					{
						vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						vVar5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(*uParam7), 1) };
						if ((GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(vVar2, uParam0->f_23, 1) < 5f && GAMEPLAY::ABSF((vVar2.z - vVar5.z)) < 0.25f) || func_431(1))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uParam0->f_16[0 /*3*/], uParam0->f_16[1 /*3*/], uParam0->f_26, 0, 1, 0) || func_431(1))
							{
								if (PED::_0xFCF37A457CB96DC0(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || func_431(1))
								{
									if (uParam0->f_34)
									{
										if (func_431(1))
										{
											func_406();
										}
										if (((!func_150("SHR_HOLDUP_1") && !func_150("SHR_MENU")) && !func_383()) && func_382())
										{
											func_152("SHR_SOLD_OUT", -1);
											uParam0->f_54 = 10;
										}
									}
									else
									{
										if (func_431(1))
										{
										}
										uParam0->f_14 = -1;
										func_260(&(uParam0->f_14), 4, "SHR_MENU", 0, 0, 0, 0);
										uParam0->f_54 = 2;
									}
								}
								else if ((GAMEPLAY::GET_GAME_TIMER() % 8000) < 50)
								{
								}
							}
							else
							{
								if ((GAMEPLAY::GET_GAME_TIMER() % 8000) < 50)
								{
								}
								GRAPHICS::DRAW_DEBUG_LINE(vVar2, uParam0->f_16[0 /*3*/], 0, 0, 255, 255);
								GRAPHICS::DRAW_DEBUG_LINE(vVar2, uParam0->f_16[1 /*3*/], 0, 0, 255, 255);
							}
						}
						else
						{
							if ((GAMEPLAY::GET_GAME_TIMER() % 8000) < 50)
							{
							}
							GRAPHICS::DRAW_DEBUG_LINE(vVar2, uParam0->f_23, 0, 0, 255, 255);
						}
					}
				}
				else
				{
					if (func_150("SHR_MENU"))
					{
						UI::CLEAR_HELP(1);
					}
					if (func_38(PLAYER::PLAYER_ID()))
					{
						if (!GAMEPLAY::IS_BIT_SET(uParam0->f_53, 4))
						{
							func_152("SHR_FM_CRIT", -1);
							unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
							GAMEPLAY::SET_BIT(&(uParam0->f_53), 4);
						}
					}
					if ((GAMEPLAY::GET_GAME_TIMER() % 8000) < 50)
					{
					}
				}
				break;
			
			case 2:
				vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				vVar5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(*uParam7), 1) };
				if ((!PED::_0xFCF37A457CB96DC0(PLAYER::PLAYER_PED_ID(), uParam0->f_23, 135f) || GAMEPLAY::ABSF((vVar2.z - vVar5.z)) >= 0.25f) && !func_431(1))
				{
					if (func_150("SHR_MENU"))
					{
						UI::CLEAR_HELP(1);
					}
					func_261(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (UI::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_150("SHR_MENU"))
					{
						UI::CLEAR_HELP(1);
					}
					func_261(&(uParam0->f_14));
					uParam0->f_54 = 0;
				}
				if (func_172(0) || func_171())
				{
					if (func_150("SHR_MENU"))
					{
						UI::CLEAR_HELP(1);
					}
					func_261(&(uParam0->f_14));
					func_166(1, *uParam0);
					GAMEPLAY::CLEAR_BIT(&(uParam0->f_52), 26);
					uParam0->f_54 = 0;
				}
				if (!AI::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
				{
					if (func_381(uParam0->f_14, 1) || func_431(1))
					{
						if (func_431(1))
						{
							func_406();
						}
						if (func_150("SHR_MENU"))
						{
							UI::CLEAR_HELP(1);
						}
						func_379(&(uParam0->f_44));
						func_261(&(uParam0->f_14));
						func_373(0, 0);
						GAMEPLAY::SET_BIT(&(uParam0->f_53), 7);
						func_423(PLAYER::PLAYER_ID(), 0, 66048);
						UI::_0xA8FDB297A8D25FBA();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_392(*uParam7))
						{
							AI::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_PED(*uParam7), 0);
							GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 1);
						}
						func_372();
						uParam0->f_54 = 3;
					}
				}
				break;
			
			case 3:
				if (!bParam10)
				{
					if (!CAM::DOES_CAM_EXIST(uParam0->f_1))
					{
						uParam0->f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 50f, 0, 2);
						func_371(*uParam0, &(uParam0->f_2), &(uParam0->f_5), &uVar10);
						CAM::SET_CAM_COORD(uParam0->f_1, uParam0->f_2);
						CAM::SET_CAM_ROT(uParam0->f_1, uParam0->f_5, 2);
						CAM::SET_CAM_FOV(uParam0->f_1, uVar10);
						CAM::SHAKE_CAM(uParam0->f_1, "HAND_SHAKE", 0.1f);
						CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					}
					uParam0->f_37 = func_394(*uParam0);
				}
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				uParam0->f_13 = 6;
				func_370(0, 0);
				func_369(1, 1, 0, 0, 0);
				func_368(1, 2, 1, 1, 1);
				func_367("SNK_ITEM");
				if (!bParam10)
				{
					func_365(1, uParam0->f_37, uParam0->f_37);
				}
				iVar11 = 0;
				while (iVar11 < uParam0->f_13)
				{
					func_360(iVar11, func_364(iVar11), 0, 1, 0, 0);
					if (uParam7->f_5[iVar11] >= 10 || ((func_146(&(Global_2524719.f_12[iVar11 /*2*/])) && !func_388(Global_2524719.f_12[iVar11 /*2*/], 150000, 0)) && *uParam0 == Global_2524719.f_27))
					{
						func_360(iVar11, "", 1, 1, 0, 0);
						func_359(15, 0);
						if (func_146(&(Global_2524719.f_12[iVar11 /*2*/])) && !func_388(Global_2524719.f_12[iVar11 /*2*/], 150000, 0))
						{
							uParam7->f_5[iVar11] = 10;
						}
						if (!func_146(&(Global_2524719.f_12[iVar11 /*2*/])))
						{
							Global_2524719.f_27 = *uParam0;
							func_18(&(Global_2524719.f_12[iVar11 /*2*/]), 0, 0);
						}
					}
					else if (func_356(iVar11))
					{
						func_360(iVar11, "SNK_FULL", 0, 1, 0, 0);
					}
					else if (!bParam10)
					{
						func_360(iVar11, "ITEM_COST", 1, 1, 0, 0);
						func_352(func_355(uParam0, iVar11), 0);
					}
					else
					{
						func_360(iVar11, "SNK_FREE", 0, 1, 0, 0);
					}
					iVar11++;
				}
				func_351(0);
				func_350(uParam0->f_12, 1, 1);
				if (uParam0->f_35)
				{
					if (!bParam10)
					{
						func_349("SNK_BOUGHT", 0, 0);
					}
					else
					{
						func_349("SNK_STORED", 0, 0);
					}
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10)
				{
					func_349("SNK_SOUT", 0, 0);
				}
				else
				{
					func_349(func_348(uParam0->f_12), 0, 0);
				}
				func_347(201, "ITEM_SELECT", -1, 0);
				func_347(202, "ITEM_BACK", -1, 0);
				if (!bParam10)
				{
					func_347(203, "SNK_LIFT", -1, 0);
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				uParam0->f_54 = 4;
				break;
			
			case 4:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				if (AI::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -875674219) == 7)
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam8->f_1, 1))
					{
						if (!bParam10)
						{
							func_423(PLAYER::PLAYER_ID(), 0, 98816);
						}
						else
						{
							func_423(PLAYER::PLAYER_ID(), 0, 256);
						}
						GAMEPLAY::SET_BIT(&(uParam8->f_1), 1);
					}
				}
				iVar8 = 0;
				if (GAMEPLAY::IS_PC_VERSION())
				{
					if (CONTROLS::_IS_INPUT_JUST_DISABLED(2))
					{
						CONTROLS::DISABLE_CONTROL_ACTION(0, 1, 1);
						CONTROLS::DISABLE_CONTROL_ACTION(0, 2, 1);
						CONTROLS::ENABLE_CONTROL_ACTION(0, 237, 1);
						CONTROLS::ENABLE_CONTROL_ACTION(0, 238, 1);
						CONTROLS::ENABLE_CONTROL_ACTION(0, 241, 1);
						CONTROLS::ENABLE_CONTROL_ACTION(0, 242, 1);
						func_310(0, 0, 0, 1);
						func_309(0, -1, 1);
						if (func_308())
						{
							if (Global_4267062 != uParam0->f_12)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
								uParam0->f_12 = Global_4267062;
								func_350(uParam0->f_12, 1, 1);
								uParam0->f_27 = 0;
								uParam0->f_29 = 0;
								uParam0->f_30 = 0;
								uParam0->f_32 = 0;
								sVar9 = func_348(uParam0->f_12);
								if (UI::DOES_TEXT_LABEL_EXIST(sVar9))
								{
									func_349(sVar9, 0, 0);
								}
							}
							else
							{
								iVar8 = 1;
							}
						}
					}
				}
				if (!bParam10)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				func_298(uParam0, &(uParam7->f_5), bParam10);
				if ((uParam7->f_2 > 2 && GAMEPLAY::IS_BIT_SET(uParam7->f_1, 0)) && GAMEPLAY::IS_BIT_SET(uParam8->f_1, 0))
				{
					GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 0);
				}
				if ((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || iVar8 == 1) || uParam0->f_47)
				{
					if (!uParam0->f_47)
					{
						uParam0->f_27 = 1;
						uParam0->f_29 = 0;
						uParam0->f_30 = 0;
						uParam0->f_32 = 0;
						func_379(&(uParam0->f_44));
					}
					if ((uParam0->f_28 && uParam0->f_31) && uParam0->f_33)
					{
						if (func_218())
						{
							uParam0->f_47 = 1;
							uParam0->f_48 = 0;
							uParam0->f_49 = -1;
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_355(uParam0, uParam0->f_12);
							}
							func_286(uParam0, -1303831698, 537254313, iVar0);
							uParam0->f_54 = 5;
						}
						else
						{
							uParam0->f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
						}
					}
					else
					{
						uParam0->f_35 = 0;
						if (!uParam0->f_28 && !uParam0->f_36)
						{
							iVar0 = 0;
							if (!bParam10)
							{
								iVar0 = func_355(uParam0, uParam0->f_12);
							}
							func_285(GAMEPLAY::GET_HASH_KEY(func_348(uParam0->f_12)), iVar0, 0);
							func_278(0, 31, 3);
							uParam0->f_54 = 11;
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
					}
					if (!uParam0->f_33)
					{
						uParam0->f_54 = 3;
					}
				}
				if (!bParam10)
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 203) && !uParam0->f_47)
					{
						uParam0->f_27 = 1;
						if (uParam7->f_5[uParam0->f_12] < 10)
						{
							uParam0->f_33 = 1;
						}
						else
						{
							uParam0->f_33 = 0;
						}
						func_379(&(uParam0->f_44));
						if (!uParam0->f_33)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else if (!uParam0->f_31)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						}
						else
						{
							AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_162(), func_277(), 8f, -8f, -1, 1048576, 0, 0, 0, 0);
							uParam0->f_54 = 8;
							uParam0->f_15 = GAMEPLAY::GET_GAME_TIMER();
							AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							if (!bParam10)
							{
								func_386(uParam0, &(uParam8->f_3));
							}
						}
					}
				}
				if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202) || CONTROLS::IS_CONTROL_JUST_RELEASED(2, 238))
				{
					if (func_431(1))
					{
						func_406();
					}
					uParam0->f_54 = 9;
					uParam0->f_15 = GAMEPLAY::GET_GAME_TIMER();
					if (!bParam10)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
						func_386(uParam0, &(uParam8->f_3));
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FREEMODE_SOUNDSET", 1);
						Global_2458221 = 1;
					}
				}
				if (uParam0->f_34)
				{
					uParam0->f_54 = 10;
					uParam0->f_15 = GAMEPLAY::GET_GAME_TIMER();
					if (!bParam10)
					{
						func_386(uParam0, &(uParam8->f_3));
					}
					func_152("SHR_SOLD_OUT", -1);
				}
				iVar12 = 0;
				while (iVar12 < uParam0->f_13)
				{
					if (func_146(&(Global_2524719.f_12[iVar12 /*2*/])) && func_388(Global_2524719.f_12[iVar12 /*2*/], 150000, 0))
					{
						func_13(&(Global_2524719.f_12[iVar12 /*2*/]));
						uParam7->f_5[iVar12] = 0;
						uParam0->f_54 = 3;
					}
					iVar12++;
				}
				break;
			
			case 5:
				iVar0 = 0;
				if (!bParam10)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
					iVar0 = func_355(uParam0, uParam0->f_12);
				}
				if (func_286(uParam0, -1303831698, 537254313, iVar0))
				{
				}
				else
				{
					switch (uParam0->f_49)
					{
						case 0:
							uParam0->f_35 = 0;
							if (!uParam0->f_28 && !uParam0->f_36)
							{
								if (!bParam10)
								{
									iVar0 = func_355(uParam0, uParam0->f_12);
								}
								func_285(GAMEPLAY::GET_HASH_KEY(func_348(uParam0->f_12)), iVar0, 0);
								func_278(0, 31, 3);
								func_276();
								func_275();
								uParam0->f_54 = 11;
							}
							else
							{
								if (func_431(1))
								{
									func_406();
								}
								uParam0->f_54 = 9;
								uParam0->f_15 = GAMEPLAY::GET_GAME_TIMER();
								AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_LIQUOR_STORE_SOUNDSET", 1);
								if (!bParam10)
								{
									func_386(uParam0, &(uParam8->f_3));
								}
							}
							break;
						
						case 2:
							uParam0->f_35 = 1;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "PURCHASE", "HUD_LIQUOR_STORE_SOUNDSET", 1);
							uParam7->f_5[uParam0->f_12]++;
							uParam0->f_54 = 6;
							break;
						
						default:
							break;
						}
				}
				break;
			
			case 6:
				if (!bParam10)
				{
					func_314(1, *uParam0, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (func_218())
				{
					unk_0x7D3EC9370CE8AE07(func_273(func_274()));
				}
				if (bParam10)
				{
					if (!GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_115, 6))
					{
						unk_0x0D30EB83668E63C5(1, uParam0->f_12, 0, 1);
						GAMEPLAY::SET_BIT(&(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_115), 6);
					}
					iVar1 = 0;
					switch (uParam0->f_12)
					{
						case 3:
							func_111(1275, 1, -1);
							func_110(16, 1, -1, 1);
							break;
						
						case 1:
							func_111(1276, 1, -1);
							func_110(15, 1, -1, 1);
							break;
						
						case 2:
							func_110(14, 1, -1, 1);
							func_111(1277, 1, -1);
							break;
						
						case 4:
							uParam0->f_55 = 20;
							if (func_130(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_130(1097, -1, 0));
							}
							func_111(1097, uParam0->f_55, -1);
							break;
						
						case 0:
							func_111(62, 1, -1);
							break;
						
						case 5:
							func_111(63, 1, -1);
							break;
					}
				}
				else
				{
					switch (uParam0->f_12)
					{
						case 3:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							func_111(1275, 1, -1);
							func_110(16, 1, -1, 1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM1"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 1:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							func_111(1276, 1, -1);
							func_110(15, 1, -1, 1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM2"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 2:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							func_110(14, 1, -1, 1);
							func_111(1277, 1, -1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM3"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 4:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							uParam0->f_55 = 20;
							if (func_130(1097, -1, 0) + 20 > 20)
							{
								uParam0->f_55 = (20 - func_130(1097, -1, 0));
							}
							func_111(1097, uParam0->f_55, -1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM4"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 0:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							func_111(62, 1, -1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM5"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						
						case 5:
							if (func_272(PLAYER::PLAYER_ID(), 1, 0))
							{
								iVar1 = 0;
							}
							else
							{
								iVar1 = func_355(uParam0, uParam0->f_12);
							}
							func_111(63, 1, -1);
							NETWORKCASH::NETWORK_BUY_ITEM(iVar1, GAMEPLAY::GET_HASH_KEY("SNK_ITEM6"), 12, 1, 0, 0, 0, 0, 0, 1);
							break;
						}
				}
				if (func_218())
				{
					func_210(func_274());
				}
				func_271(-iVar1, 0);
				uParam0->f_51 = (uParam0->f_51 + iVar1);
				if (!GAMEPLAY::IS_BIT_SET(*uParam8, 30))
				{
					GAMEPLAY::SET_BIT(uParam8, 30);
				}
				if (!GAMEPLAY::IS_BIT_SET(uParam8->f_1, 0))
				{
					GAMEPLAY::SET_BIT(&(uParam8->f_1), 0);
					uParam8->f_2 = uParam0->f_12;
				}
				if (uParam0->f_34 || uParam0->f_51 >= 1000)
				{
					uParam0->f_54 = 10;
					if (!bParam10)
					{
						func_386(uParam0, &(uParam8->f_3));
					}
					func_152("SHR_SOLD_OUT", -1);
				}
				else if (uParam7->f_5[uParam0->f_12] >= 10 || func_356(uParam0->f_12))
				{
					uParam0->f_54 = 3;
				}
				else
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 8:
				func_197(1);
				switch (uParam0->f_12)
				{
					case 3:
						func_269(0, 1f, 3);
						func_111(1275, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 1:
						func_269(1, 1f, 3);
						func_111(1276, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 2:
						func_269(2, 1f, 3);
						func_111(1277, 1, -1);
						func_110(13, 1, -1, 1);
						break;
					
					case 4:
						uParam0->f_55 = 20;
						if (func_130(1097, -1, 0) + 20 > 20)
						{
							uParam0->f_55 = (20 - func_130(1097, -1, 0));
						}
						func_269(5, SYSTEM::TO_FLOAT(uParam0->f_55), 3);
						func_111(1097, uParam0->f_55, -1);
						break;
					
					case 0:
						func_269(3, 1f, 3);
						func_111(62, 1, -1);
						break;
					
					case 5:
						func_269(4, 1f, 3);
						func_111(63, 1, -1);
						break;
				}
				if (!bParam10)
				{
					func_423(PLAYER::PLAYER_ID(), 1, 0);
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1 && !func_267(PLAYER::PLAYER_ID()))
				{
					PLAYER::REPORT_CRIME(PLAYER::PLAYER_ID(), 37, PLAYER::GET_WANTED_LEVEL_THRESHOLD(1));
					GAMEPLAY::SET_BIT(uParam8, 25);
					if (!GAMEPLAY::IS_BIT_SET(*uParam8, 1))
					{
						GAMEPLAY::SET_BIT(uParam8, 2);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(uParam8->f_1, 2))
				{
					GAMEPLAY::SET_BIT(&(uParam8->f_1), 2);
				}
				uParam0->f_54 = 12;
				break;
			
			case 11:
				if (!Global_93284.f_1393 && !NETWORK::SET_STORE_ENABLED())
				{
					uParam0->f_54 = 4;
				}
				break;
			
			case 10:
				if (!bParam10)
				{
					func_423(PLAYER::PLAYER_ID(), 1, 0);
				}
				if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 12;
				}
				else
				{
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 203);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 202);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 188);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 187);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 189);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 9:
				if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_15) > 1000)
				{
					uParam0->f_54 = 0;
				}
				else
				{
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 203);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 202);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 188);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 187);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 189);
					CONTROLS::SET_INPUT_EXCLUSIVE(2, 190);
				}
				break;
			
			case 12:
				if (GAMEPLAY::IS_BIT_SET(uParam7->f_1, 3))
				{
					if (GAMEPLAY::IS_BIT_SET(uParam8->f_1, 2))
					{
						GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 2);
					}
					if (GAMEPLAY::IS_BIT_SET(uParam8->f_1, 3))
					{
						GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 3);
					}
				}
				break;
		}
	}
	else
	{
		if ((GAMEPLAY::GET_GAME_TIMER() % 8000) < 50)
		{
		}
		if (GAMEPLAY::IS_BIT_SET(uParam7->f_1, 3))
		{
			if (GAMEPLAY::IS_BIT_SET(uParam8->f_1, 2))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 2);
			}
			if (GAMEPLAY::IS_BIT_SET(uParam8->f_1, 3))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam8->f_1), 3);
			}
		}
		if ((uParam0->f_54 != 12 && GAMEPLAY::IS_BIT_SET(uParam0->f_52, 26)) && !NETWORK::SET_STORE_ENABLED())
		{
			if ((((uParam0->f_54 == 4 || uParam0->f_54 == 3) || uParam0->f_54 == 6) || uParam0->f_54 == 11) || uParam0->f_54 == 5)
			{
				func_386(uParam0, &(uParam8->f_3));
			}
			uParam0->f_54 = 12;
		}
		if (uParam0->f_14 != -1)
		{
			func_261(&(uParam0->f_14));
		}
	}
}

int func_267(var uParam0)
{
	if ((func_38(uParam0) || func_268(uParam0)) && func_219(func_220(uParam0)) == 0f)
	{
		return 1;
	}
	return 0;
}

int func_268(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

void func_269(int iParam0, float fParam1, int iParam2)
{
	struct<8> Var0;
	vector3 vVar8;
	int iVar11;
	int iVar12;
	
	if (fParam1 > 0f)
	{
		if (func_270(iParam0, &Var0))
		{
			vVar8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
			func_197(1);
			iVar12 = -1;
			iVar11 = 0;
			while (iVar11 < 20)
			{
				if (Global_2437022.f_1285[iVar11 /*30*/].f_6 == 0 || Global_2437022.f_1285[iVar11 /*30*/].f_6 == 7)
				{
					iVar12 = iVar11;
					iVar11 = 20;
				}
				iVar11++;
			}
			if (iVar12 != -1)
			{
				Global_2437022.f_1285[iVar12 /*30*/] = { vVar8 };
				Global_2437022.f_1285[iVar12 /*30*/].f_6 = 1;
				Global_2437022.f_1285[iVar12 /*30*/].f_4 = func_196(Global_2437022.f_1285[iVar12 /*30*/], &Global_1312317, &Global_1312318);
				Global_2437022.f_1285[iVar12 /*30*/].f_5 = fParam1;
				Global_2437022.f_1285[iVar12 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
				Global_2437022.f_1285[iVar12 /*30*/].f_8 = iParam2;
				Global_2437022.f_1285[iVar12 /*30*/].f_14 = { Var0 };
				Global_2437022.f_1285[iVar12 /*30*/].f_9 = func_195();
				Global_2437022.f_1285[iVar12 /*30*/].f_10 = func_194();
			}
		}
	}
}

int func_270(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "PU_REWARD_S1", 32);
			return 1;
		
		case 1:
			StringCopy(sParam1, "PU_REWARD_S2", 32);
			return 1;
		
		case 2:
			StringCopy(sParam1, "PU_REWARD_S3", 32);
			return 1;
		
		case 3:
			StringCopy(sParam1, "PU_REWARD_D1", 32);
			return 1;
		
		case 4:
			StringCopy(sParam1, "PU_REWARD_D2", 32);
			return 1;
		
		case 5:
			StringCopy(sParam1, "PU_REWARD_11", 32);
			return 1;
		
		case 6:
			StringCopy(sParam1, "PU_REWARD_PC", 32);
			return 1;
		
		default:
	}
	return 0;
}

void func_271(int iParam0, int iParam1)
{
	func_205(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_206(iParam0, 0);
	}
}

int func_272(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_184())
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

int func_273(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61;
	}
	return -1;
}

int func_274()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_273(iVar0) != 2147483647)
		{
			if (func_213(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_275()
{
	Global_2448386.f_673.f_32 = 1;
}

void func_276()
{
	Global_2448386.f_673.f_28 = 1;
	Global_2448386.f_673.f_32 = 0;
	Global_2448386.f_673.f_31 = GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	func_13(&(Global_2448386.f_673.f_29));
}

char* func_277()
{
	if (func_12())
	{
		return "Shoplift_Mid";
	}
	return "Shoplift_Low";
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!NETWORK::_0x265635150FB0D82E())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_282(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(2, 199) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(2, 199))
	{
		return;
	}
	if (UI::GET_PAUSE_MENU_STATE() != 0)
	{
		return;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
	{
		return;
	}
	if (UI::IS_WARNING_MESSAGE_ACTIVE())
	{
		return;
	}
	if (func_281())
	{
		return;
	}
	if (!func_279())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || iParam0)
	{
		if (!Global_93284.f_1393 && !NETWORK::SET_STORE_ENABLED())
		{
			iVar0 = 18;
			UI::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "BRDISTEX", iVar0, "BRSHETEX", 0, -1, 0, 0, 1, 0);
			Global_2459244 = iParam1;
			Global_93284.f_1393 = 1;
			Global_93284.f_1394 = iParam2;
		}
	}
}

int func_279()
{
	if (func_280())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_280()
{
	return Global_2458691;
}

bool func_281()
{
	return Global_2459349;
}

int func_282(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_283(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589747[iParam0 /*790*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_283(int iParam0)
{
	return func_284(iParam0);
}

var func_284(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

void func_285(var uParam0, int iParam1, int iParam2)
{
	Global_93284.f_1395 = uParam0;
	Global_93284.f_1396 = iParam1;
	Global_93284.f_1397 = iParam2;
}

int func_286(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	char* sVar4;
	
	if (uParam0->f_47)
	{
		switch (uParam0->f_48)
		{
			case 0:
				iVar0 = 0;
				iVar1 = 0;
				iVar2 = iParam3;
				if (unk_0xB977B8EE1916CBE3() > 0)
				{
					if (unk_0xB977B8EE1916CBE3() >= iVar2)
					{
						iVar1 = iVar2;
					}
					else
					{
						iVar1 = (iVar2 - (iVar2 - unk_0xB977B8EE1916CBE3()));
					}
					iVar2 = (iVar2 - iVar1);
				}
				if (iVar2 > 0)
				{
					if (unk_0xCCADB536D2A7894D(-1) > 0)
					{
						if (unk_0xCCADB536D2A7894D(-1) >= iVar2)
						{
							iVar0 = iVar2;
						}
						else
						{
							iVar0 = (iVar2 - (iVar2 - unk_0xCCADB536D2A7894D(-1)));
						}
						iVar2 = (iVar2 - iVar0);
					}
				}
				cVar3 = func_364(uParam0->f_12);
				func_294(&sVar4, cVar3, func_295(uParam0));
				if (func_291(78225582, iParam1, GAMEPLAY::GET_HASH_KEY(&sVar4), iParam2, 1, iParam3, 1, 8, 0, 3))
				{
					if (func_289())
					{
						UI::_UPDATE_DISPLAY_CASH(1);
						UI::_SET_PLAYER_CASH_CHANGE(-iVar0, -iVar1);
						uParam0->f_48 = 1;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				else
				{
					uParam0->f_48 = 3;
				}
				break;
			
			case 1:
				if (func_288(func_274()))
				{
					if (func_287(func_274()) == 2)
					{
						uParam0->f_48 = 2;
					}
					else
					{
						uParam0->f_48 = 3;
					}
				}
				break;
			
			case 2:
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				UI::_UPDATE_DISPLAY_CASH(0);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 2;
				return 0;
				break;
			
			case 3:
				func_210(func_274());
				uParam0->f_47 = 0;
				uParam0->f_48 = 0;
				UI::_UPDATE_DISPLAY_CASH(0);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				uParam0->f_49 = 0;
				return 0;
				break;
		}
		return 1;
	}
	uParam0->f_48 = 0;
	uParam0->f_49 = -1;
	return 0;
}

int func_287(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_2;
	}
	return 0;
}

int func_288(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_2 != 1;
	}
	return 0;
}

int func_289()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_274();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
		{
			if (func_290(Global_4262927[iVar2 /*80*/].f_61.f_6, Global_4262927[iVar2 /*80*/].f_61.f_4, Global_4262927[iVar2 /*80*/].f_61.f_1) == 1)
			{
				Global_4263478 = 1;
			}
			return 0;
		}
		if (Global_2459349)
		{
			if (Global_4262927[iVar2 /*80*/].f_61.f_6 == 1067618600 || Global_4262927[iVar2 /*80*/].f_61.f_6 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_273(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar3))
		{
			Global_4262927[iVar2 /*80*/].f_61.f_13 = 1;
			Global_4262927[iVar2 /*80*/].f_61.f_12 = 0;
			Global_4262927[iVar2 /*80*/].f_61.f_14 = GAMEPLAY::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4262927[iVar2 /*80*/].f_61.f_8 = 1;
				Global_4262927[iVar2 /*80*/].f_61.f_12 = 1;
			}
			Global_4262927[iVar2 /*80*/].f_61.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_216(Global_4262927[iVar2 /*80*/], iVar2);
			}
			Global_4263464 = 1;
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_274();
	if (iVar1 == -1)
	{
		if (!func_293(&iVar1, iParam0, iParam1, uParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_292(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = uParam5;
			Var2.f_3 = iParam6;
		}
		Global_4262927[iVar1 /*80*/].f_61.f_1 = Var2.f_2;
		Global_4262927[iVar1 /*80*/].f_61.f_15 = Var2;
		Global_4262927[iVar1 /*80*/].f_61.f_16 = Var2.f_1;
		if (bVar0 || unk_0x37434C9C32C0C1D5(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_293(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_218())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_77()) || unk_0x64BE694244417BDA())
		{
			Global_4263478 = 1;
			return 0;
		}
		if (Global_2459349)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4263479 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4262927[iVar1 /*80*/].f_61.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4262927[iVar1 /*80*/].f_61.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0xE85465535CBA17D7())
		{
			unk_0x220FA7ABD5D740BF();
		}
	}
	if (bVar0 || unk_0x4A5CD6185EA0E17E(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_215(iVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

void func_294(char* sParam0, char* sParam1, int iParam2)
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_295(var uParam0)
{
	if (func_272(PLAYER::PLAYER_ID(), 1, 0) || func_296(PLAYER::PLAYER_ID()))
	{
		return 3;
	}
	else if (uParam0->f_50 >= 10 && uParam0->f_50 <= 14)
	{
		return 0;
	}
	else if (uParam0->f_50 >= 15 && uParam0->f_50 <= 19)
	{
		return 1;
	}
	else
	{
		return 2;
	}
	return -1;
}

int func_296(int iParam0)
{
	if (iParam0 != func_184())
	{
		if (func_44(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_297(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_297(int iParam0)
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
	}
	return -1;
}

void func_298(var uParam0, var uParam1, bool bParam2)
{
	char* sVar0;
	
	if (!uParam0->f_29)
	{
	}
	if (func_307(uParam0))
	{
		uParam0->f_27 = 0;
		func_306(&(uParam0->f_44));
		uParam0->f_12 = (uParam0->f_12 - 1);
		if (uParam0->f_12 < 0)
		{
			uParam0->f_12 = (uParam0->f_13 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_350(uParam0->f_12, 1, 1);
		sVar0 = func_348(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (UI::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_349(sVar0, 0, 0);
		}
	}
	if (func_303(uParam0))
	{
		uParam0->f_27 = 0;
		func_306(&(uParam0->f_44));
		uParam0->f_12++;
		if (uParam0->f_12 > (uParam0->f_13 - 1))
		{
			uParam0->f_12 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_LIQUOR_STORE_SOUNDSET", 1);
		func_350(uParam0->f_12, 1, 1);
		sVar0 = func_348(uParam0->f_12);
		uParam0->f_29 = 0;
		uParam0->f_30 = 0;
		uParam0->f_32 = 0;
		if (UI::DOES_TEXT_LABEL_EXIST(sVar0))
		{
			func_349(sVar0, 0, 0);
		}
	}
	if (!uParam0->f_29)
	{
		if (NETWORKCASH::NETWORK_CAN_SPEND_MONEY(func_355(uParam0, uParam0->f_12), 0, 1, 0, -1))
		{
			uParam0->f_28 = 1;
		}
		else
		{
			uParam0->f_28 = 0;
			uParam0->f_36 = 1;
		}
		uParam0->f_29 = 1;
	}
	if (!uParam0->f_30)
	{
		uParam0->f_31 = 1;
		if (uParam0->f_12 == 3)
		{
			uParam0->f_31 = func_130(1275, -1, 0) < 30;
		}
		else if (uParam0->f_12 == 1)
		{
			uParam0->f_31 = func_130(1276, -1, 0) < 15;
		}
		else if (uParam0->f_12 == 2)
		{
			uParam0->f_31 = func_130(1277, -1, 0) < 5;
		}
		else if (uParam0->f_12 == 4)
		{
			uParam0->f_31 = func_130(1097, -1, 0) < 20;
		}
		else if (uParam0->f_12 == 0)
		{
			uParam0->f_31 = func_130(62, -1, 0) < 10;
		}
		else if (uParam0->f_12 == 5)
		{
			uParam0->f_31 = func_130(63, -1, 0) < 10;
		}
		uParam0->f_30 = 1;
	}
	if (!uParam0->f_32)
	{
		if ((*uParam1)[uParam0->f_12] < 10)
		{
			uParam0->f_33 = 1;
		}
		else
		{
			uParam0->f_33 = 0;
			func_349("SNK_SOUT", 0, 0);
		}
		uParam0->f_32 = 1;
	}
	if (uParam0->f_27)
	{
		if (func_299(&(uParam0->f_44)) < 3f)
		{
			if (uParam0->f_35)
			{
				if (!bParam2)
				{
					func_349("SNK_BOUGHT", 0, 0);
				}
				else
				{
					func_349("SNK_STORED", 0, 0);
				}
			}
			else if (!uParam0->f_28)
			{
				func_349("SNK_AFFORD", 0, 0);
			}
			else if (!uParam0->f_33)
			{
				func_349("SNK_SOUT", 0, 0);
			}
			else if (!uParam0->f_31)
			{
				if (uParam0->f_12 == 3)
				{
					func_349("SNK_SNK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 1)
				{
					func_349("SNK_SNK2FU", 0, 0);
				}
				else if (uParam0->f_12 == 2)
				{
					func_349("SNK_SNK3FU", 0, 0);
				}
				else if (uParam0->f_12 == 4)
				{
					func_349("SNK_SMOKFU", 0, 0);
				}
				else if (uParam0->f_12 == 0)
				{
					func_349("SNK_DRK1FU", 0, 0);
				}
				else if (uParam0->f_12 == 5)
				{
					func_349("SNK_DRK2FU", 0, 0);
				}
				else
				{
					func_349("SNK_NEEDED", 0, 0);
				}
				GAMEPLAY::SET_BIT(&(uParam0->f_53), 26);
			}
		}
		else
		{
			uParam0->f_27 = 0;
			uParam0->f_35 = 0;
			func_306(&(uParam0->f_44));
			sVar0 = func_348(uParam0->f_12);
			if (UI::DOES_TEXT_LABEL_EXIST(sVar0))
			{
				func_349(sVar0, 0, 0);
			}
		}
	}
}

float func_299(var uParam0)
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_300(bool bParam0)
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

bool func_301(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 2);
}

bool func_302(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(*uParam0, 1);
}

int func_303(var uParam0)
{
	float fVar0;
	
	fVar0 = CONTROLS::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 > 0.8f || CONTROLS::IS_CONTROL_PRESSED(2, 187)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		if (!func_302(&(uParam0->f_41)))
		{
			func_305(&(uParam0->f_41));
			return 1;
		}
		else if (func_304(&(uParam0->f_41)) > 0.25f)
		{
			func_379(&(uParam0->f_41));
			return 1;
		}
	}
	else if (func_302(&(uParam0->f_41)))
	{
		func_306(&(uParam0->f_41));
	}
	return 0;
}

float func_304(var uParam0)
{
	if (func_302(uParam0))
	{
		if (func_301(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_300(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_305(var uParam0)
{
	if (!func_302(uParam0))
	{
		func_379(uParam0);
	}
}

void func_306(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_307(var uParam0)
{
	float fVar0;
	
	fVar0 = CONTROLS::GET_CONTROL_NORMAL(2, 219);
	if ((fVar0 < -0.8f || CONTROLS::IS_CONTROL_PRESSED(2, 188)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		if (!func_302(&(uParam0->f_38)))
		{
			func_305(&(uParam0->f_38));
			return 1;
		}
		else if (func_304(&(uParam0->f_38)) > 0.25f)
		{
			func_379(&(uParam0->f_38));
			return 1;
		}
	}
	else if (func_302(&(uParam0->f_38)))
	{
		func_306(&(uParam0->f_38));
	}
	return 0;
}

int func_308()
{
	if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (Global_4267062 > -1)
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_309(int iParam0, int iParam1, bool bParam2)
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
	if (Global_4267062 == -6)
	{
		UI::_SET_CURSOR_SPRITE(4);
		if (iParam0 && CONTROLS::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4267062 = -1;
			return 0;
		}
	}
	if (((Global_4267062 > -1 || Global_4267062 == -3) || Global_4267062 == -2) || UI::_0x3D9ACB1EB139E702())
	{
		UI::_SET_CURSOR_SPRITE(1);
		return 0;
	}
	if (Global_4267062 == -1 && iParam0)
	{
		if (CONTROLS::IS_CONTROL_PRESSED(2, 237))
		{
			UI::_SET_CURSOR_SPRITE(4);
			Global_4267062 = -6;
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

void func_310(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
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
		Global_4267062 = -1;
		return;
	}
	CONTROLS::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17364;
	fVar2 = (fVar0 + Global_17366);
	fVar3 = Global_17367.f_5728;
	fVar1 = (Global_17367.f_5728 - (IntToFloat(Global_17367.f_5730) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17367.f_5730 < 1)
	{
		fVar1 = (Global_17367.f_5728 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_313();
	if (Global_4267062 == -6)
	{
		return;
	}
	Global_4267062 = -1;
	fVar7 = Global_4267056;
	fVar8 = Global_4267057;
	if (Global_17367.f_5731 > Global_17367.f_5730)
	{
		if (((Global_4267056 >= fVar0 && Global_4267056 <= fVar2) && Global_4267057 >= fVar3) && Global_4267057 < (fVar3 + fVar6))
		{
			Global_4267062 = -2;
			if (bParam3)
			{
				func_312(0);
			}
			return;
		}
		if (((Global_4267056 >= fVar0 && Global_4267056 <= fVar2) && Global_4267057 >= (fVar3 + fVar6)) && Global_4267057 < (fVar3 + 0.034722f))
		{
			Global_4267062 = -3;
			if (bParam3)
			{
				func_312(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_17367.f_5731 == -1)
		{
			Global_4267062 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17367.f_5730);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
				func_311(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17366, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4267062 = Global_17367.f_7712[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4267062 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4267062 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4267062 = -4;
		return;
	}
	Global_4267062 = -1;
}

void func_311(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_312(bool bParam0)
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
	fVar0 = Global_17364;
	fVar1 = Global_17367.f_5728;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	if (Global_4267062 == -2)
	{
		func_311(fVar0, fVar1, Global_17366, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4267062 == -3)
	{
		func_311(fVar0, (fVar1 + fVar2), Global_17366, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_313()
{
	Global_4267058 = Global_4267056;
	Global_4267059 = Global_4267057;
	Global_4267056 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4267057 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4267060 = (Global_4267056 - Global_4267058);
	Global_4267061 = (Global_4267057 - Global_4267059);
}

void func_314(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar55;
	bool bVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	float fVar60;
	var uVar61;
	var uVar62;
	float fVar63;
	float fVar64;
	float fVar65;
	char cVar66[64];
	char cVar82[64];
	float fVar98;
	int iVar99;
	float fVar100;
	float fVar101;
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
	
	if (!func_168(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_345(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar58 = 0f;
	fVar59 = 0f;
	if (Global_17367)
	{
		if (func_343(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = fVar37;
			fVar59 = fVar36;
			fVar58 = (fVar58 + 0f);
		}
		else
		{
			Global_17367 = 0;
		}
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
	{
		fVar60 = Global_17365;
	}
	else
	{
		fVar60 = (((Global_17365 + fVar58) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17366;
	}
	fVar63 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&uVar61, &uVar62);
		fVar64 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_342())
		{
			uVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(uVar62) * fVar64));
		}
		fVar65 = (SYSTEM::TO_FLOAT(uVar61) / SYSTEM::TO_FLOAT(uVar62));
		fVar63 = (fVar65 / fVar64);
		if (func_342())
		{
			fVar63 = 1f;
		}
		uVar61 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(uVar61) / fVar63));
		uVar62 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(uVar62) / fVar63));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&uVar61, &uVar62);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17367.f_5726)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_1)) == GAMEPLAY::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_17365;
			}
			else
			{
				if (Global_17367)
				{
					StringCopy(&cVar66, func_341(29), 64);
					StringCopy(&cVar82, func_339(29, 1), 64);
					if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_6863[29 /*16*/])) == -1487683087)
					{
						func_311(Global_17364, Global_17365, fParam5, (fVar58 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar66, &cVar82, (Global_17364 + (fParam5 * 0.5f)), (Global_17365 + ((fVar58 - 0f) * 0.5f)), fVar59, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar66, &cVar82, (Global_17364 + (fParam5 * 0.5f)), (Global_17365 + ((fVar58 - 0f) * 0.5f)), fParam5, (fVar58 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17367.f_8061)
				{
					iVar1 = Global_17367.f_8057;
					iVar2 = Global_17367.f_8058;
					iVar3 = Global_17367.f_8059;
					iVar4 = Global_17367.f_8060;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_311(Global_17364, (Global_17365 + fVar58), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_17365 + fVar58) + 0.034722f) + 0f);
				if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_1)) != 0)
				{
					func_338();
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17367.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17367.f_68)
					{
						if (Global_17367.f_5[iVar14] == 2)
						{
							UI::ADD_TEXT_COMPONENT_INTEGER(Global_17367.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17367.f_5[iVar14] == 3)
						{
							UI::ADD_TEXT_COMPONENT_FLOAT(Global_17367.f_14[iVar16], Global_17367.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17367.f_5[iVar14] == 1)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17367.f_5[iVar14] == 8)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17367.f_5[iVar14] == 5)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17367.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17367.f_5[iVar14] == 6)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17367.f_5[iVar14] == 7)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17367.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17367.f_5[iVar14] == 9)
						{
							UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17367.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					UI::END_TEXT_COMMAND_DISPLAY_TEXT((Global_17364 + 0.00390625f), ((Global_17365 + fVar58) + 0.00416664f), 0);
				}
				if (Global_17367.f_5729 > Global_17367.f_5223)
				{
					if (Global_17367.f_5732 != 0)
					{
						func_338();
						func_336((((Global_17364 + fParam5) - 0.00390625f) - func_337("CM_ITEM_COUNT", Global_17367.f_5732, Global_17367.f_5731)), ((Global_17365 + fVar58) + 0.00416664f), "CM_ITEM_COUNT", Global_17367.f_5732, Global_17367.f_5731);
					}
				}
			}
			iVar6 = Global_17367.f_5733;
			iVar9 = 0;
			fVar98 = fVar51;
			if (Global_17367.f_8071)
			{
				iVar1 = Global_17367.f_8067;
				iVar2 = Global_17367.f_8068;
				iVar3 = Global_17367.f_8069;
				iVar4 = Global_17367.f_8070;
			}
			else
			{
				UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17367.f_5223 && iVar6 <= Global_17367.f_5216)
			{
				if (iVar6 >= 0)
				{
					if (Global_17367.f_5483[iVar6])
					{
						if (Global_17367.f_5354[iVar6] && iVar6 != Global_17367.f_5733)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar57 = 0.034722f;
						if (Global_17367.f_5740[iVar6] != 0f)
						{
							fVar57 = Global_17367.f_5740[iVar6];
						}
						fVar51 = (fVar51 + fVar57);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar57 = 0.034722f;
					fVar51 = (fVar51 + fVar57);
					iVar9++;
					if (Global_17367.f_5216 <= 1)
					{
						Global_17367.f_5216++;
					}
					iVar55 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17364 + (fParam5 * 0.5f)), ((fVar98 + ((fVar51 - fVar98) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar98), 0f, 255, 255, 255, 255, 0);
			if (Global_17367.f_5729 > Global_17367.f_5223)
			{
				if (Global_17367.f_8076)
				{
					iVar1 = Global_17367.f_8072;
					iVar2 = Global_17367.f_8073;
					iVar3 = Global_17367.f_8074;
					iVar4 = Global_17367.f_8075;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_311(Global_17364, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar63));
				vVar38.y = (vVar38.y * (0.5f / fVar63));
				if (Global_17367.f_8089)
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
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_17364 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar63), ((vVar38.y / 720f) * fVar63), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_4690)) != 0 && Global_17367.f_4764 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17364 + 0.0046875f);
				if (Global_17367.f_4766 != 0)
				{
					func_343(Global_17367.f_4766, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17364 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_335(fVar42);
				UI::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_17367.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17367.f_4760)
				{
					if (Global_17367.f_4694[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_17367.f_4699[iVar15]);
						iVar15++;
					}
					else if (Global_17367.f_4694[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_17367.f_4703[iVar16], Global_17367.f_4707[iVar16]);
						iVar16++;
					}
					else if (Global_17367.f_4694[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_311(Global_17364, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17367.f_8081)
				{
					iVar1 = Global_17367.f_8077;
					iVar2 = Global_17367.f_8078;
					iVar3 = Global_17367.f_8079;
					iVar4 = Global_17367.f_8080;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17364 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_335(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17367.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17367.f_4760)
				{
					if (Global_17367.f_4694[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_17367.f_4699[iVar15]);
						iVar15++;
					}
					else if (Global_17367.f_4694[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_17367.f_4703[iVar16], Global_17367.f_4707[iVar16]);
						iVar16++;
					}
					else if (Global_17367.f_4694[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17367.f_4694[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_4711[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_17367.f_4766 != 0)
				{
					func_343(Global_17367.f_4766, 1, 1, &fVar36, &fVar37, bParam7);
					func_334(Global_17367.f_4766, 1, &uVar47, &uVar48, &uVar49, &uVar50);
					GRAPHICS::DRAW_SPRITE(func_341(Global_17367.f_4766), func_339(Global_17367.f_4766, 1), ((Global_17364 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17367.f_4764 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_17367.f_4765) > Global_17367.f_4764)
					{
						StringCopy(&(Global_17367.f_4690), "", 16);
						Global_17367.f_4764 = -1;
					}
				}
			}
			if (GAMEPLAY::GET_HASH_KEY(&(Global_4266986.f_21)) != 0 && Global_4266986.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_17364 + 0.0046875f);
				if (Global_4266986.f_67 != 0)
				{
					func_343(Global_4266986.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_17364 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_335(fVar42);
				UI::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4266986.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4266986.f_61)
				{
					if (Global_4266986.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4266986.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4266986.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4266986.f_34[iVar16], Global_4266986.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4266986.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = UI::_GET_TEXT_SCREEN_LINE_COUNT(fVar42, (fVar51 + 0.00277776f));
				UI::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_311(Global_17364, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17367.f_8081)
				{
					iVar1 = Global_17367.f_8077;
					iVar2 = Global_17367.f_8078;
					iVar3 = Global_17367.f_8079;
					iVar4 = Global_17367.f_8080;
				}
				else
				{
					UI::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17364 + (fParam5 * 0.5f)), ((fVar51 + ((((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_335(fVar42);
				UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4266986.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4266986.f_61)
				{
					if (Global_4266986.f_25[iVar14] == 2)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(Global_4266986.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4266986.f_25[iVar14] == 3)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(Global_4266986.f_34[iVar16], Global_4266986.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4266986.f_25[iVar14] == 1)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 8)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 5)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 6)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 7)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4266986.f_25[iVar14] == 9)
					{
						UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4266986.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4266986.f_67 != 0)
				{
					func_343(Global_4266986.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_334(Global_4266986.f_67, 1, &uVar47, &uVar48, &uVar49, &uVar50);
					GRAPHICS::DRAW_SPRITE(func_341(Global_4266986.f_67), func_339(Global_4266986.f_67, 1), ((Global_17364 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
				}
				fVar51 = (fVar51 + (((UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4266986.f_65 > 0)
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - Global_4266986.f_66) > Global_4266986.f_65)
					{
						StringCopy(&(Global_4266986.f_21), "", 16);
						Global_4266986.f_65 = -1;
					}
				}
			}
			func_327(uVar61, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17367.f_5726)
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
			iVar99 = Global_17367.f_5216;
			if (Global_17367.f_5727)
			{
				iVar99 = (Global_17367.f_5730 - 1);
			}
			fVar100 = 0f;
			fVar101 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar99)
			{
				fVar57 = 0.034722f;
				if (Global_17367.f_5740[iVar6] != 0f)
				{
					fVar57 = Global_17367.f_5740[iVar6];
				}
				if (Global_17367.f_5727)
				{
					iVar6 = Global_17367.f_7712[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17367.f_5733 && iVar9 < Global_17367.f_5223)
				{
					bVar33 = true;
					if (Global_17367.f_5734 == iVar6)
					{
						fVar101 = fVar100;
					}
					if (Global_17367.f_5354[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17367.f_5874[iVar6] = fVar35;
				fVar34 = (Global_17364 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_17367.f_5734 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_17367.f_8083)
					{
						UI::GET_HUD_COLOUR(Global_17367.f_8082, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						UI::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_17364 + (fParam5 * 0.5f)), (((fVar60 + fVar101) + (0.00277776f * IntToFloat(iVar12))) + (fVar57 * 0.5f)), fParam5, fVar57, 0f, iVar102, iVar103, iVar104, iVar105, 0);
					Global_17367.f_5872 = fVar35;
				}
				if (iVar55 && iVar7 == iVar99)
				{
					func_325(bVar32, 1, 0, 0, 0, 0, 0);
					UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					UI::END_TEXT_COMMAND_DISPLAY_TEXT(fVar34, fVar35, 0);
					bVar41 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17367.f_5224)
					{
						if (GAMEPLAY::IS_BIT_SET(Global_17367.f_5087[iVar6], iVar8) || Global_17367.f_5054[iVar8] == 5)
						{
							if (Global_17367.f_5727)
							{
								iVar19 = Global_17367.f_7728[((iVar9 * Global_17367.f_5224) + iVar8)];
								iVar20 = Global_17367.f_7769[((iVar9 * Global_17367.f_5224) + iVar8)];
								iVar21 = Global_17367.f_7810[((iVar9 * Global_17367.f_5224) + iVar8)];
								iVar22 = Global_17367.f_7851[((iVar9 * Global_17367.f_5224) + iVar8)];
								iVar23 = Global_17367.f_7892[((iVar9 * Global_17367.f_5224) + iVar8)];
							}
							else
							{
								Global_17367.f_7728[((iVar9 * Global_17367.f_5224) + iVar8)] = iVar19;
								Global_17367.f_7769[((iVar9 * Global_17367.f_5224) + iVar8)] = iVar20;
								Global_17367.f_7810[((iVar9 * Global_17367.f_5224) + iVar8)] = iVar21;
								Global_17367.f_7851[((iVar9 * Global_17367.f_5224) + iVar8)] = iVar22;
								Global_17367.f_7892[((iVar9 * Global_17367.f_5224) + iVar8)] = iVar23;
							}
							iVar106 = 0;
							bVar56 = false;
							if (Global_17367.f_6006[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17367.f_6003[0])
								{
									bVar56 = true;
									iVar106 = 0;
								}
							}
							if (Global_17367.f_6006[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17367.f_6003[1])
								{
									bVar56 = true;
									iVar106 = 1;
								}
							}
							if (Global_17367.f_5060[iVar8] != -1f)
							{
								fVar34 = ((Global_17364 + 0.0046875f) + Global_17367.f_5060[iVar8]);
							}
							if ((iVar8 < 4 && Global_17367.f_5060[iVar8 + 1] != -1f) && fVar34 < Global_17367.f_5060[iVar8 + 1])
							{
								fVar46 = (Global_17367.f_5060[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar46 = (((Global_17364 + Global_17366) - 0.0046875f) - fVar34);
							}
							if ((Global_17367.f_5073[iVar8] && Global_17367.f_5869) && bVar32)
							{
								bVar54 = true;
							}
							else
							{
								bVar54 = false;
							}
							switch (Global_17367.f_5054[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17367.f_5727)
										{
											fVar43 = 0f;
											fVar44 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
											{
												bVar52 = false;
												bVar53 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17367.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar53 = true;
													}
													else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar52 = true;
													}
													iVar14++;
												}
												func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar56, iVar106, bVar53, bVar52);
												UI::_BEGIN_TEXT_COMMAND_WIDTH(&(Global_17367.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														UI::ADD_TEXT_COMPONENT_INTEGER(Global_17367.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
													{
														UI::ADD_TEXT_COMPONENT_FLOAT(Global_17367.f_4175[(iVar21 + iVar27)], Global_17367.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
											{
												fVar43 = UI::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_343(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar44 = (fVar44 + fVar36);
														if (iVar14 > 0)
														{
															fVar44 = (fVar44 - (0.00078125f * 4f));
														}
														if (Global_17367.f_4433[(iVar22 + iVar14)] == 2 || Global_17367.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar44 = (fVar44 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar42 = 0f;
											if (Global_17367.f_5081[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
											}
											else if (Global_17367.f_5081[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
											}
											Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar42;
											Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar43;
											Global_17367.f_8015[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)];
											fVar43 = Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)];
											fVar44 = Global_17367.f_8015[((iVar9 * Global_17367.f_5224) + iVar8)];
										}
										if (bVar54)
										{
											if (func_343(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
													GRAPHICS::DRAW_SPRITE(func_341(26), func_339(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
											if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
													GRAPHICS::DRAW_SPRITE(func_341(27), func_339(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17367.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_324(bVar32);
											}
											UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17367.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2458730[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_INTEGER(Global_17367.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
												{
													UI::ADD_TEXT_COMPONENT_FLOAT(Global_17367.f_4175[(iVar21 + iVar27)], Global_17367.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17367.f_4433[(iVar22 + iVar28)] == 2 || Global_17367.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_343(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_343(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_334(Global_17367.f_4433[(iVar22 + iVar28)], bVar32, &uVar47, &uVar48, &uVar49, &uVar50);
															if (Global_17367.f_5081[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_341(Global_17367.f_4433[(iVar22 + iVar28)]), func_339(Global_17367.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_341(Global_17367.f_4433[(iVar22 + iVar28)]), func_339(Global_17367.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
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
										if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17367.f_5081[iVar8] == 2)
											{
												UI::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												UI::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar42), fVar35, 0);
												if (func_323() && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_325(0, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar56, 0, bVar53, bVar52);
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
														UI::ADD_TEXT_COMPONENT_INTEGER((Global_17367.f_5733 + iVar30));
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
												if (Global_17367.f_4433[(iVar22 + iVar14)] != 2 && Global_17367.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_343(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + (fVar36 * 0.5f));
														if (func_343(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_334(Global_17367.f_4433[(iVar22 + iVar14)], bVar32, &uVar47, &uVar48, &uVar49, &uVar50);
															if (Global_17367.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_341(Global_17367.f_4433[(iVar22 + iVar14)]), func_339(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), (Global_17364 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
															}
															else if (Global_17367.f_5081[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_341(Global_17367.f_4433[(iVar22 + iVar14)]), func_339(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_341(Global_17367.f_4433[(iVar22 + iVar14)]), func_339(Global_17367.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
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
										if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17367.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17367.f_5727)
										{
											func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_324(bVar32);
											}
											UI::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
											UI::ADD_TEXT_COMPONENT_INTEGER(Global_17367.f_3918[iVar20]);
											fVar43 = UI::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar42 = 0f;
											if (Global_17367.f_5081[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17367.f_5081[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar42;
											Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)];
											fVar43 = Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)];
										}
										if (bVar54)
										{
											if (func_343(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
													GRAPHICS::DRAW_SPRITE(func_341(26), func_339(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
											if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
													GRAPHICS::DRAW_SPRITE(func_341(27), func_339(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
										func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar56, 0, 0, 0);
										func_322((fVar34 + fVar42), fVar35, "NUMBER", Global_17367.f_3918[iVar20], 0);
									}
									bVar41 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17367.f_5727)
										{
											func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar56, 0, 0, 0);
											if (Global_17367.f_8087 && Global_17367.f_8088 == iVar6)
											{
												func_324(bVar32);
											}
											UI::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
											UI::ADD_TEXT_COMPONENT_FLOAT(Global_17367.f_4175[iVar21], Global_17367.f_4304[iVar21]);
											fVar43 = UI::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar42 = 0f;
											if (Global_17367.f_5081[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
											}
											else if (Global_17367.f_5081[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
											}
											Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar42;
											Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar43;
										}
										else
										{
											fVar42 = Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)];
											fVar43 = Global_17367.f_7974[((iVar9 * Global_17367.f_5224) + iVar8)];
										}
										if (bVar54)
										{
											if (func_343(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
													GRAPHICS::DRAW_SPRITE(func_341(26), func_339(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
											if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_334(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
													GRAPHICS::DRAW_SPRITE(func_341(27), func_339(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
												}
											}
										}
										func_325(bVar32, Global_17367.f_1610[iVar24], Global_17367.f_1867[iVar24], bVar56, 0, 0, 0);
										func_321((fVar34 + fVar42), fVar35, "NUMBER", Global_17367.f_4175[iVar21], Global_17367.f_4304[iVar21]);
									}
									bVar41 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_343(Global_17367.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17367.f_5727)
											{
												fVar44 = fVar36;
												fVar42 = 0f;
												if (Global_17367.f_5081[iVar8] == 2)
												{
													fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
												}
												else if (Global_17367.f_5081[iVar8] == 0)
												{
													fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
												}
												Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar42;
												Global_17367.f_8015[((iVar9 * Global_17367.f_5224) + iVar8)] = fVar44;
											}
											else
											{
												fVar42 = Global_17367.f_7933[((iVar9 * Global_17367.f_5224) + iVar8)];
												fVar44 = Global_17367.f_8015[((iVar9 * Global_17367.f_5224) + iVar8)];
											}
											if (bVar54)
											{
												if (func_343(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17367.f_5081[iVar8] == 2)
													{
														fVar42 = (fVar42 - (fVar36 * 2f));
													}
													fVar45 = (fVar36 * 0.5f);
													if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_334(26, 1, &uVar47, &uVar48, &uVar49, &uVar50);
														GRAPHICS::DRAW_SPRITE(func_341(26), func_339(26, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
													}
												}
												if (func_343(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													fVar45 = (fVar36 * 0.5f);
													if (func_343(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_334(27, 1, &uVar47, &uVar48, &uVar49, &uVar50);
														GRAPHICS::DRAW_SPRITE(func_341(27), func_339(27, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), fVar36, fVar37, 0f, uVar47, uVar48, uVar49, uVar50, 0);
													}
												}
											}
											if (func_343(Global_17367.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_334(Global_17367.f_4433[iVar22], bVar32, &uVar47, &uVar48, &uVar49, &uVar50);
												GRAPHICS::DRAW_SPRITE(func_341(Global_17367.f_4433[iVar22]), func_339(Global_17367.f_4433[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar57 * 0.5f)), (fVar36 * func_320(Global_17367.f_4433[iVar22])), (fVar37 * func_320(Global_17367.f_4433[iVar22])), 0f, uVar47, uVar48, uVar49, uVar50, 0);
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
							if (Global_17367.f_5054[iVar8] == 5)
							{
								if (Global_17367.f_5066[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_17367.f_5066[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17367.f_5066[iVar8]);
								if (Global_17367.f_5073[iVar8])
								{
									if (func_343(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17367.f_5066[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_17367.f_7712[iVar9] = iVar6;
						Global_17367.f_5735 = iVar6;
						iVar9++;
						if (Global_17367.f_5354[iVar6])
						{
							iVar13++;
						}
						if (Global_17367.f_5740[iVar6] != 0f)
						{
							fVar100 = (fVar100 + Global_17367.f_5740[iVar6]);
						}
						else
						{
							fVar100 = (fVar100 + 0.034722f);
						}
					}
					if (!Global_17367.f_5726)
					{
						Global_17367.f_5483[iVar6] = 1;
						if (Global_17367.f_5225[iVar6])
						{
							if (bVar32)
							{
								Global_17367.f_5732 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17367.f_5732 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17367.f_5726)
			{
				Global_17367.f_5728 = ((fVar60 + fVar100) + (0.00277776f * IntToFloat(iVar12)));
				Global_17367.f_5731 = iVar11;
				Global_17367.f_5729 = iVar10;
				Global_17367.f_5726 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17367.f_5727)
	{
		Global_17367.f_5730 = iVar9;
		Global_17367.f_5727 = 1;
	}
	Global_17367.f_5871 = fVar51;
	Global_17367.f_5873 = GAMEPLAY::GET_GAME_TIMER();
	UI::_CLEAR_NOTIFICATIONS_POS(Global_17367.f_5871);
	if (!Global_17367.f_8056)
	{
		func_316(0);
	}
	Global_17367.f_8056 = 0;
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
		func_315(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_315(int iParam0)
{
	Global_1369750.f_1079 = iParam0;
}

void func_316(int iParam0)
{
	if (func_319())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_172(0))
		{
			func_317(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_2384, 2);
	}
}

void func_317(int iParam0)
{
	if (func_319())
	{
		return;
	}
	if (Global_14681)
	{
		func_318(0, 0);
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
	if (!func_237())
	{
		Global_14513.f_1 = 3;
	}
}

void func_318(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_172(0))
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

bool func_319()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

float func_320(int iParam0)
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
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_321(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_FLOAT(uParam3, uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_322(float fParam0, float fParam1, char* sParam2, var uParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

var func_323()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

void func_324(bool bParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (bParam0)
	{
		UI::GET_HUD_COLOUR(Global_17367.f_8084[0], &uVar0, &uVar1, &uVar2, &uVar3);
	}
	else
	{
		UI::GET_HUD_COLOUR(Global_17367.f_8084[1], &uVar0, &uVar1, &uVar2, &uVar3);
	}
	UI::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, 255);
}

void func_325(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_326(Global_17367.f_6006[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_326(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_327(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_168(&iVar0, 0, iParam1))
	{
		return;
	}
	uParam0 = uParam0;
	if (iParam3 && !func_345(bParam4, bParam8))
	{
		return;
	}
	if (func_332())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_330(PLAYER::PLAYER_ID(), 0))
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
					func_329(&(Global_17367.f_4769[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_4962[iVar2 /*4*/])) == GAMEPLAY::GET_HASH_KEY("PREV"))
					{
						func_329(&(Global_17367.f_4769[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17367.f_5011[iVar1] == -1)
					{
						func_328(&(Global_17367.f_4962[iVar1 /*4*/]));
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
				func_329(&Global_4266986);
				if (Global_4266986.f_20 == -1)
				{
					func_328(&(Global_4266986.f_16));
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

void func_328(var uParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_329(var uParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

bool func_330(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_331(-1, 0) == 8;
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

int func_331(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_77();
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

int func_332()
{
	vector3 vVar0;
	
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	if (func_333())
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

int func_333()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_334(int iParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5)
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
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*uParam2 = 0;
				*uParam3 = 0;
				*uParam4 = 0;
			}
			break;
		
		case 51:
			*uParam5 = 100;
			break;
		
		case 52:
			UI::GET_HUD_COLOUR(24, uParam2, uParam3, uParam4, uParam5);
			*uParam5 = 255;
			break;
	}
}

void func_335(float fParam0)
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
	UI::SET_TEXT_WRAP(fParam0, ((Global_17364 + Global_17366) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_336(float fParam0, float fParam1, char* sParam2, var uParam3, var uParam4)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam3);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam4);
	UI::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_337(char* sParam0, var uParam1, var uParam2)
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
	func_338();
	UI::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam1);
	UI::ADD_TEXT_COMPONENT_INTEGER(uParam2);
	return UI::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_338()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	UI::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
	if (Global_17367.f_8066)
	{
		uVar0 = Global_17367.f_8062;
		uVar1 = Global_17367.f_8063;
		uVar2 = Global_17367.f_8064;
		uVar3 = Global_17367.f_8065;
	}
	UI::SET_TEXT_FONT(0);
	UI::SET_TEXT_SCALE(0f, 0.35f);
	UI::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, uVar3);
	UI::SET_TEXT_WRAP((Global_17364 + 0.0046875f), ((Global_17364 + Global_17366) - 0.0046875f));
	UI::SET_TEXT_CENTRE(0);
	UI::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	UI::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

var func_339(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_17367.f_6863[iParam0 /*16*/])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_6863[iParam0 /*16*/])) == -1487683087)
		{
			Var19 = { func_70(PLAYER::PLAYER_ID()) };
			if (NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_340(&uVar3);
			}
		}
		else
		{
			return func_340(&(Global_17367.f_6863[iParam0 /*16*/]));
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
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 52:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
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

var func_340(var uParam0)
{
	return uParam0;
}

char* func_341(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_17367.f_6014[iParam0 /*16*/])))
	{
		if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_6014[iParam0 /*16*/])) == -1487683087)
		{
			Var16 = { func_70(PLAYER::PLAYER_ID()) };
			NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_340(&uVar0);
		}
		else
		{
			return func_340(&(Global_17367.f_6014[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

int func_342()
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

int func_343(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	
	StringCopy(&cVar0, func_341(iParam0), 64);
	StringCopy(&cVar16, func_339(iParam0, bParam1), 64);
	if (GAMEPLAY::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_342())
			{
				iVar32 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (SYSTEM::TO_FLOAT(iVar32) / SYSTEM::TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_342())
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
		vVar37.x = (vVar37.x * (func_344(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_344(iParam0) / fVar34));
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
		if (iParam0 == 29 && GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_6863[29 /*16*/])) == -1487683087)
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
			if (*fParam3 > Global_17366)
			{
				*fParam4 = (*fParam4 * (Global_17366 / *fParam3));
				*fParam3 = Global_17366;
			}
		}
		return 1;
	}
	return 0;
}

float func_344(int iParam0)
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
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_345(bool bParam0, bool bParam1)
{
	if (Global_2437022.f_1889.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_246(8, -1) && func_346() != 64)) || (UI::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::SET_STORE_ENABLED()) || Global_71465) || Global_17367.f_8090) || UI::IS_WARNING_MESSAGE_ACTIVE()) || Global_93284.f_1393)
	{
		return 0;
	}
	return 1;
}

int func_346()
{
	return Global_1312792;
}

void func_347(int iParam0, char* sParam1, int iParam2, bool bParam3)
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

char* func_348(int iParam0)
{
	int iVar0;
	
	if (iParam0 != -1)
	{
		iVar0 = iParam0;
	}
	else
	{
		iVar0 = 6;
	}
	switch (iVar0)
	{
		case 6:
			return "SNK_AFFORD";
		
		case 3:
			return "SNK_ITEM1_D";
		
		case 1:
			return "SNK_ITEM2_D";
		
		case 2:
			return "SNK_ITEM3_D";
		
		case 4:
			return "SNK_ITEM4_D";
		
		case 0:
			return "SNK_ITEM5_D";
		
		case 5:
			return "SNK_ITEM6_D";
		
		default:
	}
	return "";
}

void func_349(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17367.f_4690), sParam0, 16);
	Global_17367.f_4760 = 0;
	Global_17367.f_4761 = 0;
	Global_17367.f_4762 = 0;
	Global_17367.f_4763 = 0;
	Global_17367.f_4764 = iParam1;
	Global_17367.f_4765 = GAMEPLAY::GET_GAME_TIMER();
	Global_17367.f_4766 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17367.f_4694[iVar0] = 0;
		iVar0++;
	}
}

void func_350(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17367.f_5734 = uParam0;
	Global_17367.f_5869 = iParam2;
	if (Global_17367.f_5734 < Global_17367.f_5733)
	{
		Global_17367.f_5733 = Global_17367.f_5734;
	}
	else if ((Global_17367.f_5727 && Global_17367.f_5734 > Global_17367.f_5735) || (!Global_17367.f_5727 && Global_17367.f_5734 >= (Global_17367.f_5733 + Global_17367.f_5223)))
	{
		iVar0 = Global_17367.f_5733;
		while (iVar0 <= Global_17367.f_5734)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17367.f_5087[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17367.f_5223 && Global_17367.f_5733 < 128)
		{
			Global_17367.f_5733++;
			iVar1 = 0;
			iVar0 = Global_17367.f_5733;
			while (iVar0 <= Global_17367.f_5734)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17367.f_5087[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17367.f_5726 = 0;
	Global_17367.f_5727 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17367.f_4690), "", 16);
		StringCopy(&(Global_4266986.f_21), "", 16);
	}
}

void func_351(int iParam0)
{
	Global_17367.f_5733 = iParam0;
}

void func_352(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17367.f_5220 >= 256)
	{
		return;
	}
	if (Global_17367.f_5738 >= 4)
	{
		return;
	}
	if (Global_17367.f_5739 != 1)
	{
		return;
	}
	if (Global_17367.f_5738 >= Global_17367.f_5736)
	{
		return;
	}
	Global_17367.f_3918[Global_17367.f_5220] = uParam0;
	Global_17367.f_5220++;
	Global_17367.f_2124[Global_17367.f_5737 /*5*/][Global_17367.f_5738] = 2;
	Global_17367.f_5738++;
	if (Global_17367.f_5738 >= Global_17367.f_5736)
	{
		fVar0 = func_354();
		if (Global_17367.f_5073[Global_17367.f_5217] && Global_17367.f_5738 == Global_17367.f_5736)
		{
			func_343(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17367.f_5066[(Global_17367.f_5217 - 1)])
		{
			Global_17367.f_5066[(Global_17367.f_5217 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17367.f_5738 >= Global_17367.f_5736)
		{
			fVar3 = func_353();
			if (fVar3 > Global_17367.f_5740[Global_17367.f_5216])
			{
				Global_17367.f_5740[Global_17367.f_5216] = fVar3;
			}
		}
	}
}

float func_353()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17367.f_5738)
	{
		if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17367.f_4433[((Global_17367.f_5222 - iVar1) + iVar0)] != 0)
		{
			if (func_343(Global_17367.f_4433[((Global_17367.f_5222 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_354()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17367.f_5738)
	{
		if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_325(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
	{
		UI::_BEGIN_TEXT_COMMAND_WIDTH(&(Global_17367.f_73[Global_17367.f_5737 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17367.f_5738)
	{
		if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_73[(Global_17367.f_5737 + iVar8) /*6*/]));
			}
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17367.f_73[(Global_17367.f_5737 + iVar8) /*6*/]));
			}
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 2)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_INTEGER(Global_17367.f_3918[((Global_17367.f_5220 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 3)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_FLOAT(Global_17367.f_4175[((Global_17367.f_5221 - iVar4) + iVar10)], Global_17367.f_4304[((Global_17367.f_5221 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 5)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2458730[((Global_17367.f_5219 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 6)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2458730[((Global_17367.f_5219 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 7)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2458730[((Global_17367.f_5219 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17367.f_2124[Global_17367.f_5737 /*5*/][iVar7] == 9)
		{
			if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
			{
				UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2458730[((Global_17367.f_5219 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (GAMEPLAY::GET_HASH_KEY(&(Global_17367.f_73[Global_17367.f_5737 /*6*/])) != 0)
	{
		fVar0 = UI::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17367.f_4433[((Global_17367.f_5222 - iVar5) + iVar7)] != 0)
		{
			func_343(Global_17367.f_4433[((Global_17367.f_5222 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

int func_355(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	switch (func_295(uParam0))
	{
		case 0:
			switch (iVar0)
			{
				case 3:
					return 2;
				
				case 1:
					return 3;
				
				case 2:
					return 5;
				
				case 4:
					return 7;
				
				case 0:
					return 2;
				
				case 5:
					return 2;
				
				default:
			}
			break;
		
		case 1:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 3;
				
				case 4:
					return 8;
				
				case 0:
					return 2;
				
				case 5:
					return 5;
				
				default:
			}
			break;
		
		case 2:
			switch (iVar0)
			{
				case 3:
					return 1;
				
				case 1:
					return 2;
				
				case 2:
					return 4;
				
				case 4:
					return 6;
				
				case 0:
					return 3;
				
				case 5:
					return 4;
				
				default:
			}
			break;
	}
	return 0;
}

int func_356(int iParam0)
{
	if (func_130(func_358(iParam0), -1, 0) >= func_357(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_357(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 30;
		
		case 1:
			return 15;
		
		case 2:
			return 5;
		
		case 4:
			return 20;
		
		case 0:
			return 10;
		
		case 5:
			return 10;
		
		default:
	}
	return 0;
}

int func_358(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 3:
			return 1275;
		
		case 1:
			return 1276;
		
		case 2:
			return 1277;
		
		case 4:
			return 1097;
		
		case 0:
			return 62;
		
		case 5:
			return 63;
		
		default:
	}
	return 9954;
}

void func_359(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17367.f_5222 >= 256)
	{
		return;
	}
	if (Global_17367.f_5738 >= 4)
	{
		return;
	}
	if (Global_17367.f_5739 != 1)
	{
		return;
	}
	if (Global_17367.f_5738 >= Global_17367.f_5736)
	{
		return;
	}
	Global_17367.f_4433[Global_17367.f_5222] = iParam0;
	Global_17367.f_5222++;
	Global_17367.f_2124[Global_17367.f_5737 /*5*/][Global_17367.f_5738] = 4;
	Global_17367.f_5738++;
	if (Global_17367.f_5738 >= Global_17367.f_5736)
	{
		fVar0 = func_354();
		if (Global_17367.f_5073[Global_17367.f_5217] && Global_17367.f_5738 == Global_17367.f_5736)
		{
			func_343(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17367.f_5066[(Global_17367.f_5217 - 1)])
		{
			Global_17367.f_5066[(Global_17367.f_5217 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17367.f_5738 >= Global_17367.f_5736)
		{
			fVar3 = func_353();
			if (fVar3 > Global_17367.f_5740[Global_17367.f_5216])
			{
				Global_17367.f_5740[Global_17367.f_5216] = fVar3;
			}
		}
	}
}

void func_360(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17367.f_5216 > iParam0)
	{
		return;
	}
	if (Global_17367.f_5216 >= 128)
	{
		return;
	}
	if (Global_17367.f_5218 >= 256)
	{
		return;
	}
	if (Global_17367.f_5738 < Global_17367.f_5736)
	{
		return;
	}
	if (Global_17367.f_5216 != iParam0)
	{
		Global_17367.f_5216 = iParam0;
		Global_17367.f_5217 = 0;
	}
	iVar0 = Global_17367.f_5054[Global_17367.f_5217];
	if (iVar0 != 1)
	{
		while (Global_17367.f_5217 < 4 && iVar0 != 1)
		{
			Global_17367.f_5217++;
			iVar0 = Global_17367.f_5054[Global_17367.f_5217];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]), sParam1, 24);
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1) && !UI::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_17367.f_1610[Global_17367.f_5218] = bParam3;
	Global_17367.f_1867[Global_17367.f_5218] = iParam4;
	Global_17367.f_5218++;
	if (!bParam3)
	{
		func_363(Global_17367.f_5216, 1);
	}
	else
	{
		func_363(Global_17367.f_5216, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_362(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]));
		if (Global_17367.f_5073[Global_17367.f_5217])
		{
			func_343(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17367.f_5066[Global_17367.f_5217])
		{
			Global_17367.f_5066[Global_17367.f_5217] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_361(&(Global_17367.f_73[Global_17367.f_5218 /*6*/]));
			if (fVar4 > Global_17367.f_5740[iParam0])
			{
				Global_17367.f_5740[iParam0] = fVar4;
			}
		}
	}
	GAMEPLAY::SET_BIT(&(Global_17367.f_5087[iParam0]), Global_17367.f_5217);
	Global_17367.f_5217++;
	Global_17367.f_5739 = 1;
	Global_17367.f_5737 = (Global_17367.f_5218 - 1);
	Global_17367.f_5738 = 0;
	Global_17367.f_5736 = iParam2;
}

var func_361(var uParam0)
{
	if (!UI::DOES_TEXT_LABEL_EXIST(uParam0))
	{
	}
	return UI::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_362(var uParam0)
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
	func_325(0, 1, 0, 0, 0, 0, 0);
	UI::_BEGIN_TEXT_COMMAND_WIDTH(uParam0);
	return UI::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_363(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_17367.f_6009[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_17367.f_6009[iVar0]), (iParam0 - iVar0 * 32));
	}
}

char* func_364(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		default:
	}
	return "";
}

void func_365(int iParam0, char* sParam1, char* sParam2)
{
	Global_17367 = iParam0;
	func_366(29, sParam1, sParam2);
}

void func_366(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_17367.f_6014[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_17367.f_6863[iParam0 /*16*/]), sParam2, 64);
}

void func_367(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17367.f_1), sParam0, 16);
	Global_17367.f_68 = 0;
	Global_17367.f_69 = 0;
	Global_17367.f_70 = 0;
	Global_17367.f_71 = 0;
	Global_17367.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17367.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_368(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17367.f_5081[0] = iParam0;
	Global_17367.f_5081[1] = iParam1;
	Global_17367.f_5081[2] = iParam2;
	Global_17367.f_5081[3] = iParam3;
	Global_17367.f_5081[4] = iParam4;
}

void func_369(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17367.f_5054[0] = iParam0;
	Global_17367.f_5054[1] = iParam1;
	Global_17367.f_5054[2] = iParam2;
	Global_17367.f_5054[3] = iParam3;
	Global_17367.f_5054[4] = iParam4;
	Global_17367.f_5224 = 0;
	if (iParam0 != 0)
	{
		Global_17367.f_5224++;
	}
	if (iParam1 != 0)
	{
		Global_17367.f_5224++;
	}
	if (iParam2 != 0)
	{
		Global_17367.f_5224++;
	}
	if (iParam3 != 0)
	{
		Global_17367.f_5224++;
	}
	if (iParam4 != 0)
	{
		Global_17367.f_5224++;
	}
}

void func_370(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17367.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17367.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2458730[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17367.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17367.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17367.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17367.f_5087[iVar0] = 0;
		Global_17367.f_5225[iVar0] = 0;
		Global_17367.f_5354[iVar0] = 0;
		Global_17367.f_5874[iVar0] = 0f;
		Global_17367.f_5483[iVar0] = 0;
		Global_17367.f_5740[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17367.f_5054[iVar0] = 0;
		Global_17367.f_5066[iVar0] = 0f;
		Global_17367.f_5060[iVar0] = -1f;
		Global_17367.f_5073[iVar0] = 0;
		Global_17367.f_5081[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17367.f_4962[iVar0 /*4*/]), "", 16);
		Global_17367.f_5011[iVar0] = -1;
		Global_17367.f_5024[iVar0] = 358;
		Global_17367.f_5037[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 53)
	{
		StringCopy(&(Global_17367.f_6014[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17367.f_6863[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_17367.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4266986.f_16), "", 16);
	Global_4266986.f_20 = -1;
	Global_17367 = 0;
	Global_17367.f_5216 = 0;
	Global_17367.f_5217 = 0;
	Global_17367.f_5218 = 0;
	Global_17367.f_5220 = 0;
	Global_17367.f_5221 = 0;
	Global_17367.f_5222 = 0;
	Global_17367.f_5219 = 0;
	Global_17367.f_5869 = 0;
	Global_17367.f_5734 = 0;
	Global_17367.f_5733 = 0;
	Global_17367.f_5735 = 0;
	StringCopy(&(Global_17367.f_4690), "", 16);
	Global_17367.f_4760 = 0;
	Global_17367.f_4761 = 0;
	Global_17367.f_4762 = 0;
	Global_17367.f_4763 = 0;
	Global_17367.f_4764 = 0;
	Global_17367.f_4765 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17367.f_4694[iVar0] = 0;
		iVar0++;
	}
	Global_17367.f_4766 = 0;
	StringCopy(&(Global_4266986.f_21), "", 16);
	Global_4266986.f_61 = 0;
	Global_4266986.f_62 = 0;
	Global_4266986.f_63 = 0;
	Global_4266986.f_64 = 0;
	Global_4266986.f_65 = 0;
	Global_4266986.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4266986.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4266986.f_67 = 0;
	StringCopy(&(Global_17367.f_1), "", 16);
	Global_17367.f_5072 = 0f;
	Global_17367.f_68 = 0;
	Global_17367.f_69 = 0;
	Global_17367.f_70 = 0;
	Global_17367.f_71 = 0;
	Global_17367.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17367.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17367.f_5739 = 0;
	Global_17367.f_5738 = 0;
	Global_17367.f_5736 = 0;
	Global_17367.f_5737 = 0;
	Global_17367.f_4767 = 0;
	Global_17367.f_4768 = 0;
	Global_17367.f_5223 = 10;
	Global_17367.f_5224 = 0;
	Global_17367.f_5871 = 0f;
	Global_17367.f_5872 = 0f;
	Global_17367.f_5726 = 0;
	Global_17367.f_5727 = 0;
	Global_17367.f_5728 = 0f;
	Global_17367.f_5729 = 0;
	Global_17367.f_5731 = 0;
	Global_17367.f_5730 = 0;
	Global_17367.f_5732 = 0;
	Global_17367.f_8087 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17367.f_6003[iVar0] = -1;
		Global_17367.f_6006[iVar0] = -1;
		iVar0++;
	}
	Global_17367.f_5079 = 0f;
	Global_17367.f_5050 = 0;
	Global_17367.f_5080 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17367.f_6009)
	{
		Global_17367.f_6009[iVar0] = 0;
		iVar0++;
	}
	Global_17367.f_8066 = 0;
	Global_17367.f_8061 = 0;
	Global_17367.f_8071 = 0;
	Global_17367.f_8076 = 0;
	Global_17367.f_8081 = 0;
	Global_17367.f_8083 = 0;
	Global_17367.f_8089 = 0;
	Global_17364 = 0.05f;
	Global_17365 = 0.05f;
	Global_17366 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_17366 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17366 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17366 = 0.225f;
	}
}

int func_371(int iParam0, var uParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	float fVar3;
	
	switch (iParam0)
	{
		case 0:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-706.6382f, -913.6887f, 19.21f, -89.999f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-89.999f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 1:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-47.19871f, -1757.67f, 29.42f, -130f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-130f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 2:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1164.21f, -322.89f, 69.2f, -80f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-80f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 3:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(1698.307f, 4923.371f, 42.06f, 145f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (145f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 4:
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-1820.465f, 793.8166f, 138.09f, -47.53f, 2.40015f, -7.75244f, 1.0825f) };
			*uParam2 = -4.2069f;
			uParam2->f_1 = -0.027f;
			uParam2->f_2 = (-47.53f + 22.8175f);
			*uParam3 = 32.8283f;
			break;
		
		case 5:
			vVar0 = { 1165.958f, 2710.201f, 38.14286f };
			fVar3 = -1.15f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 6:
			vVar0 = { -2967.027f, 390.9038f, 15.02f };
			fVar3 = -94.76f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 7:
			vVar0 = { -1222.331f, -907.8234f, 12.31f };
			fVar3 = -147.297f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 8:
			vVar0 = { 1134.811f, -982.3615f, 46.4f };
			fVar3 = 96.68562f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 9:
			vVar0 = { -1486.673f, -378.4638f, 40.15f };
			fVar3 = -46.229f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 3.80296f, -5.391f, 1.213f) };
			*uParam2 = -9.3866f;
			uParam2->f_1 = -0.0011f;
			uParam2->f_2 = (fVar3 + 46.9866f);
			*uParam3 = 35f;
			break;
		
		case 10:
			vVar0 = { -3244.573f, 1000.658f, 12.83f };
			fVar3 = 175.074f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 11:
			vVar0 = { -3041.357f, 584.2665f, 7.9f };
			fVar3 = -162.241f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 12:
			vVar0 = { 548.9015f, 2668.941f, 42.15f };
			fVar3 = -82.5f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 13:
			vVar0 = { 2554.875f, 381.3857f, 108.62f };
			fVar3 = 177.716f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 14:
			vVar0 = { 2676.212f, 3280.969f, 55.24f };
			fVar3 = 150.87f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 15:
			vVar0 = { 1729.329f, 6417.123f, 35.03f };
			fVar3 = 63.641f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 16:
			vVar0 = { 1959.323f, 3742.29f, 32.34f };
			fVar3 = 120f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 17:
			vVar0 = { 24.94562f, -1344.954f, 29.49f };
			fVar3 = 90f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case 18:
			vVar0 = { 373.5954f, 328.5892f, 103.56f };
			fVar3 = 75.885f;
			*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar3, 2.97963f, -3.39452f, 0.934498f) };
			*uParam2 = -8.483f;
			uParam2->f_1 = 0.0149f;
			uParam2->f_2 = (fVar3 + 53.5519f);
			*uParam3 = 35f;
			break;
		
		case -2:
			*uParam1 = { 1390.653f, 3598.966f, 35.6115f };
			*uParam2 = { -3.6091f, 0.022f, -8.6461f };
			*uParam3 = 35f;
			break;
	}
	return 1;
}

void func_372()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		CONTROLS::_SET_CURSOR_LOCATION(0.325f, 0.3f);
	}
}

void func_373(int iParam0, int iParam1)
{
	if (!func_282(PLAYER::PLAYER_ID(), 1) || iParam1)
	{
		if (!func_378())
		{
			Global_1312416.f_1 = 1;
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_9 = 1;
			if (iParam0 == 1)
			{
				Global_1312416.f_2 = 1;
			}
			func_374(0);
		}
	}
}

void func_374(int iParam0)
{
	if (!func_378() || iParam0)
	{
		Global_1312416 = 1;
		func_377(1);
		if (((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_376()) && !func_375(PLAYER::PLAYER_ID())) && !func_142(PLAYER::PLAYER_ID()))
		{
			Global_968392 = 1;
		}
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_8 = 1;
	}
}

int func_375(int iParam0)
{
	if (func_282(iParam0, 1))
	{
		if (Global_1589747[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_376()
{
	return Global_2448386.f_729;
}

void func_377(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_378())
		{
			if (func_44(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 0);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 0);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::_0x1B857666604B1A74(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_44(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, 1);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::_0x1B857666604B1A74(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
		}
	}
}

bool func_378()
{
	return Global_1312416;
}

void func_379(var uParam0)
{
	func_380(uParam0, 0f);
}

void func_380(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_300(GAMEPLAY::IS_BIT_SET(*uParam0, 4)) - fParam1);
	GAMEPLAY::SET_BIT(uParam0, 1);
	GAMEPLAY::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_381(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_262(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_172(0))
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

int func_382()
{
	if (Global_106070.f_20382.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

bool func_383()
{
	return Global_17226;
}

int func_384(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, 1.46991f, -0.814453f, -0.97226f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, -1.5828f, -0.814453f, 0.84774f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, -1.55054f, -0.920414f, -0.998837f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, 1.54138f, -0.920414f, 0.901165f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, 0.0586548f, 0.178162f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			*uParam3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, -2.60296f, -0.851523f, -0.999289f) };
			*uParam4 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, 0.443411f, -0.851523f, 0.820711f) };
			*uParam5 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam1, uParam2, -1.17421f, 0.39005f, 0f) };
			*uParam6 = 0.75f;
			break;
		
		case -2:
			*uParam3 = { 1390.955f, 3604.379f, 33.98091f };
			*uParam4 = { 1394.475f, 3605.664f, 35.98091f };
			*uParam5 = { 1392.551f, 3605.449f, 35.30949f };
			*uParam6 = 0.75f;
			break;
	}
	return 1;
}

bool func_385(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

void func_386(var uParam0, var uParam1)
{
	AI::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	func_423(PLAYER::PLAYER_ID(), 1, 0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	if (uParam0->f_51 > 0)
	{
		*uParam1 = uParam0->f_51;
		uParam0->f_51 = 0;
	}
	func_407();
	GAMEPLAY::CLEAR_BIT(&(uParam0->f_53), 7);
	if (func_150("SHR_MENU"))
	{
		UI::CLEAR_HELP(1);
	}
	if (uParam0->f_14 != -1)
	{
		func_261(&(uParam0->f_14));
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
}

int func_387(float fParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (fParam0 <= 0f)
		{
			return PED::_0x5407B7288D0478B7(PLAYER::PLAYER_PED_ID()) > 0;
		}
		else
		{
			return PED::_IS_ENEMY_IN_RANGE(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), fParam0) > 0;
		}
	}
	return 0;
}

int func_388(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_389(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if ((*uParam0)[iVar0] < 10)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_390()
{
	AI::OPEN_SEQUENCE_TASK(&uLocal_572);
	AI::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0, 0, 0, 0);
	AI::CLOSE_SEQUENCE_TASK(uLocal_572);
	AI::OPEN_SEQUENCE_TASK(&uLocal_573);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0, 0, 0, 0);
	AI::CLOSE_SEQUENCE_TASK(uLocal_573);
	AI::OPEN_SEQUENCE_TASK(&uLocal_574);
	AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_559, 2f, -1, 0.25f, 0, fLocal_562);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	AI::TASK_SMART_FLEE_COORD(0, vLocal_559, 250f, -1, 1, 0);
	AI::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	AI::CLOSE_SEQUENCE_TASK(uLocal_574);
	AI::OPEN_SEQUENCE_TASK(&uLocal_576);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0, 0, 0, 0);
	AI::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0, 0, 0, 0);
	AI::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
	AI::CLOSE_SEQUENCE_TASK(uLocal_576);
	AI::OPEN_SEQUENCE_TASK(&uLocal_575);
	AI::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_559, 2f, -1, 0.25f, 0, (fLocal_562 - 180f));
	AI::TASK_SWAP_WEAPON(0, 1);
	AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
	AI::CLOSE_SEQUENCE_TASK(uLocal_575);
}

void func_391(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
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

int func_392(var uParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

int func_393()
{
	return Local_103.f_12;
}

char* func_394(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return "ShopUI_Title_GasStation";
		
		case 5:
			return "ShopUI_Title_LiquorStore3";
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "ShopUI_Title_LiquorStore2";
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
			return "ShopUI_Title_ConvenienceStore";
		
		case -2:
			return "ShopUI_Title_LiquorStore";
		
		default:
	}
	return "NULL";
}

int func_395()
{
	vector3 vVar0;
	
	if (func_403(&(Local_497.f_50), 0))
	{
		func_401(Local_497.f_50, &iLocal_596, &iLocal_597, &iLocal_598, &iLocal_599, &vLocal_600, &vLocal_603);
		func_400(Local_497.f_50, &vLocal_606, &vLocal_609, &uLocal_612);
		func_399(Local_497.f_50, &vLocal_613, &vLocal_616, &uLocal_619);
		switch (Local_497.f_50)
		{
			case 0:
				vLocal_564 = { 1393.1f, 3605.89f, (35.2f - 0.2f) };
				vLocal_567 = { 0f, 0f, 21.89f };
				iLocal_555 = func_50(0);
				vLocal_559 = { 1394.852f, 3609.509f, 33.9809f };
				fLocal_562 = 116.5329f;
				iLocal_591 = 1;
				if (func_397(6, 18))
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 0;
					iLocal_785[1] = 0;
					iLocal_791[1] = 0;
					iLocal_785[2] = 0;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 0;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 1;
					iLocal_791[0] = 0;
					iLocal_785[1] = 1;
					iLocal_791[1] = 1;
					iLocal_785[2] = 1;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 0;
					iLocal_791[4] = 0;
				}
				break;
			
			case 1:
				vLocal_567 = { 0f, 0f, -160f };
				vLocal_564 = { -3041.38f, 584.35f, (8.11f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { -3047.512f, 588.9807f, 6.9089f };
				fLocal_562 = 178.8753f;
				iLocal_591 = 1;
				if (func_397(6, 18))
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 1;
					iLocal_785[1] = 1;
					iLocal_791[1] = 0;
					iLocal_785[2] = 0;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 0;
					iLocal_791[4] = 1;
				}
				else
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 0;
					iLocal_785[1] = 0;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 0;
					iLocal_791[4] = 1;
				}
				break;
			
			case 2:
				vLocal_564 = { -3244.56f, 1000.74f, (13.03f - 0.2f) };
				vLocal_567 = { 0f, 0f, 175.52f };
				iLocal_555 = func_50(0);
				vLocal_559 = { -3249.114f, 1006.558f, 11.8307f };
				fLocal_562 = 191.594f;
				iLocal_591 = 1;
				if (func_397(6, 18))
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 2;
					iLocal_785[1] = 1;
					iLocal_791[1] = 1;
					iLocal_785[2] = 0;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 0;
					iLocal_791[4] = 2;
				}
				else
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 1;
					iLocal_785[1] = 0;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 0;
					iLocal_791[4] = 2;
				}
				break;
			
			case 3:
				vLocal_567 = { 0f, 0f, -82.38f };
				vLocal_564 = { 548.82f, 2668.93f, (42.36f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { 543.0796f, 2663.967f, 41.1565f };
				fLocal_562 = 228.4295f;
				iLocal_591 = 1;
				if (func_397(6, 18))
				{
					iLocal_785[0] = 1;
					iLocal_791[0] = 0;
					iLocal_785[1] = 2;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 0;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 0;
					iLocal_785[1] = 2;
					iLocal_791[1] = 1;
					iLocal_785[2] = 1;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 0;
					iLocal_791[4] = 0;
				}
				break;
			
			case 4:
				vLocal_567 = { 0f, 0f, 180f };
				vLocal_564 = { 2554.88f, 381.47f, (108.82f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { 2549.85f, 387.1622f, 107.623f };
				fLocal_562 = 197.2994f;
				iLocal_591 = 1;
				if (func_397(6, 18))
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 0;
					iLocal_785[1] = 2;
					iLocal_791[1] = 1;
					iLocal_785[2] = 1;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 0;
					iLocal_791[4] = 1;
				}
				else
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 1;
					iLocal_785[1] = 1;
					iLocal_791[1] = 0;
					iLocal_785[2] = 0;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 0;
					iLocal_791[4] = 1;
				}
				break;
			
			case 5:
				vLocal_567 = { 0f, 0f, 155f };
				vLocal_564 = { 2676.26f, 3281.04f, (55.44f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { 2671.351f, 3283.136f, 54.2411f };
				fLocal_562 = 296.5427f;
				iLocal_591 = 1;
				if (func_397(6, 18))
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 1;
					iLocal_785[1] = 0;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 0;
					iLocal_791[4] = 2;
				}
				else
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 2;
					iLocal_785[1] = 2;
					iLocal_791[1] = 1;
					iLocal_785[2] = 0;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 0;
					iLocal_791[4] = 2;
				}
				break;
			
			case 6:
				vLocal_567 = { 0f, 0f, 63.3f };
				vLocal_564 = { 1729.4f, 6417.08f, (35.24f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { 1733.967f, 6421.495f, 34.0372f };
				fLocal_562 = 130.9518f;
				iLocal_591 = 1;
				if (func_397(6, 18))
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 2;
					iLocal_785[1] = 1;
					iLocal_791[1] = 0;
					iLocal_785[2] = 0;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 0;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 1;
					iLocal_791[0] = 0;
					iLocal_785[1] = 0;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 0;
					iLocal_791[4] = 0;
				}
				break;
			
			case 7:
				vLocal_567 = { 0f, 0f, 117f };
				vLocal_564 = { 1959.4f, 3742.33f, (32.54f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { 1958.92f, 3746.267f, 31.3438f };
				fLocal_562 = 73.6245f;
				iLocal_591 = 1;
				if (func_397(6, 18))
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 0;
					iLocal_785[1] = 1;
					iLocal_791[1] = 1;
					iLocal_785[2] = 0;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 0;
					iLocal_791[4] = 1;
				}
				else
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 0;
					iLocal_785[1] = 0;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 0;
					iLocal_791[4] = 1;
				}
				break;
			
			case 8:
				vLocal_567 = { 0f, 0f, 92f };
				vLocal_564 = { 25.03f, -1344.96f, (29.69f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { 30.5721f, -1339.782f, 28.4939f };
				fLocal_562 = 110.7699f;
				iLocal_591 = 1;
				if (func_397(6, 18))
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 1;
					iLocal_785[1] = 2;
					iLocal_791[1] = 0;
					iLocal_785[2] = 0;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 0;
					iLocal_791[4] = 2;
				}
				else
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 1;
					iLocal_785[1] = 1;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 0;
					iLocal_791[4] = 2;
				}
				break;
			
			case 9:
				vLocal_567 = { 0f, 0f, 75f };
				vLocal_564 = { 373.68f, 328.56f, (103.77f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { 376.2976f, 331.8158f, 102.5664f };
				fLocal_562 = 52.0064f;
				iLocal_591 = 1;
				if (func_397(6, 18))
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 2;
					iLocal_785[1] = 2;
					iLocal_791[1] = 1;
					iLocal_785[2] = 1;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 0;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 2;
					iLocal_785[1] = 1;
					iLocal_791[1] = 1;
					iLocal_785[2] = 0;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 0;
					iLocal_791[4] = 0;
				}
				break;
			
			case 10:
				vLocal_567 = { 0f, 0f, 0f };
				vLocal_564 = { 1165.96f, 2710.2f, (38.25f - 0.105f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { 1168.971f, 2719.118f, 36.0632f };
				fLocal_562 = 136.5945f;
				iLocal_591 = 3;
				if (func_397(10, 22))
				{
					iLocal_785[0] = 1;
					iLocal_791[0] = 0;
					iLocal_785[1] = 0;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 0;
					iLocal_785[1] = 2;
					iLocal_791[1] = 0;
					iLocal_785[2] = 0;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				break;
			
			case 11:
				vLocal_567 = { 0f, 0f, -92f };
				vLocal_564 = { -2967.03f, 390.9f, (15.23f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { -2962.983f, 391.9788f, 14.0433f };
				fLocal_562 = 176.1174f;
				iLocal_591 = 3;
				if (func_397(10, 22))
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 0;
					iLocal_785[1] = 1;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 1;
					iLocal_785[1] = 2;
					iLocal_791[1] = 1;
					iLocal_785[2] = 0;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				break;
			
			case 12:
				vLocal_567 = { 0f, 0f, -145f };
				vLocal_564 = { -1222.33f, -907.82f, (12.52f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { -1218.283f, -915.7103f, 10.3264f };
				fLocal_562 = 43.8031f;
				iLocal_591 = 3;
				if (func_397(10, 22))
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 1;
					iLocal_785[1] = 1;
					iLocal_791[1] = 1;
					iLocal_785[2] = 0;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 2;
					iLocal_785[1] = 1;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				break;
			
			case 13:
				vLocal_567 = { 0f, 0f, 103f };
				vLocal_564 = { 1134.81f, -982.36f, (46.6f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { 1130.155f, -979.2816f, 45.4158f };
				fLocal_562 = 269.2587f;
				iLocal_591 = 3;
				if (func_397(10, 22))
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 2;
					iLocal_785[1] = 2;
					iLocal_791[1] = 0;
					iLocal_785[2] = 0;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 1;
					iLocal_791[0] = 0;
					iLocal_785[1] = 0;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				break;
			
			case 14:
				vLocal_567 = { 0f, 0f, -41f };
				vLocal_564 = { -1486.67f, -378.46f, (40.35f - 0.2f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { -1479.163f, -375.0302f, 38.1633f };
				fLocal_562 = 36.5415f;
				iLocal_591 = 3;
				if (func_397(10, 22))
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 0;
					iLocal_785[1] = 2;
					iLocal_791[1] = 1;
					iLocal_785[2] = 0;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 0;
					iLocal_785[1] = 1;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				break;
			
			case 15:
				vLocal_567 = { 0f, 0f, 145f };
				vLocal_564 = { (1698.33f - 0.04f), 4923.33f, (42.12f - 0.06f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { 1707.303f, 4918.31f, 41.0636f };
				fLocal_562 = 24.9178f;
				iLocal_591 = 2;
				if (func_397(8, 20))
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 1;
					iLocal_785[1] = 0;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 1;
					iLocal_785[1] = 1;
					iLocal_791[1] = 1;
					iLocal_785[2] = 0;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				break;
			
			case 16:
				vLocal_567 = { 0f, 0f, -87f };
				vLocal_564 = { -706.69f, -913.69f, (19.27f - 0.06f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { -709.7998f, -907.1352f, 18.2156f };
				fLocal_562 = 291.6504f;
				iLocal_591 = 2;
				if (func_397(8, 20))
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 2;
					iLocal_785[1] = 1;
					iLocal_791[1] = 0;
					iLocal_785[2] = 1;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 2;
					iLocal_785[1] = 2;
					iLocal_791[1] = 0;
					iLocal_785[2] = 0;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				break;
			
			case 17:
				vLocal_567 = { 0f, 0f, -125f };
				vLocal_564 = { -47.23f, -1757.64f, (29.48f - 0.06f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { -40.42f, -1751.423f, 28.421f };
				fLocal_562 = 145.6553f;
				iLocal_591 = 2;
				if (func_397(8, 20))
				{
					iLocal_785[0] = 1;
					iLocal_791[0] = 0;
					iLocal_785[1] = 1;
					iLocal_791[1] = 1;
					iLocal_785[2] = 1;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 0;
					iLocal_785[1] = 2;
					iLocal_791[1] = 0;
					iLocal_785[2] = 0;
					iLocal_791[2] = 2;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				break;
			
			case 18:
				vLocal_567 = { 0f, 0f, -74f };
				vLocal_564 = { 1164.16f, -322.9f, (69.26f - 0.06f) };
				iLocal_555 = func_50(0);
				vLocal_559 = { 1159.682f, -314.254f, 68.2051f };
				fLocal_562 = 232.6337f;
				iLocal_591 = 2;
				if (func_397(8, 20))
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 0;
					iLocal_785[1] = 2;
					iLocal_791[1] = 1;
					iLocal_785[2] = 0;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 1;
					iLocal_785[1] = 2;
					iLocal_791[1] = 0;
					iLocal_785[2] = 0;
					iLocal_791[2] = 0;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				break;
			
			case 19:
				vLocal_564 = { -1820.5f, 793.78f, (138.32f - 0.22f) };
				vLocal_567 = { 0f, 0f, -47.3f };
				iLocal_555 = func_50(0);
				vLocal_559 = { -1828.907f, 799.6096f, 137.1776f };
				fLocal_562 = 247.1234f;
				iLocal_591 = 2;
				if (func_397(8, 20))
				{
					iLocal_785[0] = 2;
					iLocal_791[0] = 1;
					iLocal_785[1] = 0;
					iLocal_791[1] = 0;
					iLocal_785[2] = 0;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 0;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				else
				{
					iLocal_785[0] = 0;
					iLocal_791[0] = 2;
					iLocal_785[1] = 2;
					iLocal_791[1] = 1;
					iLocal_785[2] = 0;
					iLocal_791[2] = 1;
					iLocal_785[3] = 0;
					iLocal_791[3] = 1;
					iLocal_785[4] = 1;
					iLocal_791[4] = 0;
				}
				break;
		}
		vLocal_564 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_564, vLocal_567.z, 0f, 0.075f, 0f) };
		vLocal_556 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s", vLocal_564, vLocal_567, 0, 2) };
		vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s", vLocal_564, vLocal_567, 0, 2) };
		Local_103.f_42 = vVar0.z;
		vLocal_580 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_564, vLocal_567, 0, 2) };
		vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_bag", vLocal_564, vLocal_567, 0, 2) };
		uLocal_583 = vVar0.z;
		vLocal_584 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("mp_am_hold_up", "holdup_victim_20s_till", vLocal_564, vLocal_567, 0, 2) };
		vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("mp_am_hold_up", "holdup_victim_20s_till", vLocal_564, vLocal_567, 0, 2) };
		uLocal_587 = vVar0.z;
		Local_497 = func_396(Local_497.f_50);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_103.f_45 = iLocal_785[0];
			if (Local_103.f_45 == 0)
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_PAKISTANI_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner2", 16);
			}
			else if (Local_103.f_45 == 1)
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_LATINO_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner", 16);
			}
			else
			{
				StringCopy(&(Local_103.f_50), "MP_M_SHOPKEEP_01_CHINESE_MINI_01", 64);
				StringCopy(&(Local_103.f_46), "StoreOwner3", 16);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_497.f_52, 29))
		{
			ENTITY::CREATE_MODEL_HIDE(vLocal_564, 0.5f, iLocal_588, 1);
			GAMEPLAY::SET_BIT(&(Local_497.f_52), 29);
		}
		return 1;
	}
	return 0;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 2;
		
		case 15:
			return 3;
		
		case 19:
			return 4;
		
		case 10:
			return 5;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 9;
		
		case 2:
			return 10;
		
		case 1:
			return 11;
		
		case 3:
			return 12;
		
		case 4:
			return 13;
		
		case 5:
			return 14;
		
		case 6:
			return 15;
		
		case 7:
			return 16;
		
		case 8:
			return 17;
		
		case 9:
			return 18;
		
		case 0:
			return -2;
		
		default:
	}
	return -1;
}

bool func_397(int iParam0, int iParam1)
{
	return func_398(TIME::GET_CLOCK_HOURS(), iParam0, iParam1);
}

int func_398(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_399(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1393.091f, 3607.383f, 33.9809f };
		*uParam2 = { 1391.178f, 3612.516f, (38.3614f - 0.2f) };
		*uParam3 = 12.5f;
	}
	else if (iParam0 == 1)
	{
		*uParam1 = { -3045.013f, 585.9666f, (10.35421f - 0.2f) };
		*uParam2 = { -3048.714f, 584.7961f, 6.948262f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = { -3247.313f, 1003.657f, (15.27433f - 0.2f) };
		*uParam2 = { -3251.157f, 1003.984f, 11.83501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 3)
	{
		*uParam1 = { 546.5474f, 2665.642f, (44.60108f - 0.2f) };
		*uParam2 = { 547.054f, 2661.794f, 41.15667f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 4)
	{
		*uParam1 = { 2552f, 384.2527f, (111.0656f - 0.2f) };
		*uParam2 = { 2548.145f, 384.4133f, 107.6241f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 5)
	{
		*uParam1 = { 2674.946f, 3284.833f, (57.68088f - 0.2f) };
		*uParam2 = { 2671.569f, 3286.699f, 54.24464f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 6)
	{
		*uParam1 = { 1733.119f, 6418.579f, (37.48002f - 0.2f) };
		*uParam2 = { 1734.839f, 6422.032f, 34.03751f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 7)
	{
		*uParam1 = { 1960.224f, 3746.258f, (34.7878f - 0.2f) };
		*uParam2 = { 1958.295f, 3749.599f, 31.34522f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 8)
	{
		*uParam1 = { 27.71382f, -1341.968f, (31.93314f - 0.2f) };
		*uParam2 = { 27.71049f, -1338.109f, 28.49479f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 9)
	{
		*uParam1 = { 377.0183f, 330.808f, (106.0112f - 0.2f) };
		*uParam2 = { 377.9499f, 334.5523f, 102.567f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 10)
	{
		*uParam1 = { 1167.015f, 2711.601f, (40.66147f - 0.2f) };
		*uParam2 = { 1167.082f, 2720.243f, 36.06501f };
		*uParam3 = 8.25f;
	}
	else if (iParam0 == 11)
	{
		*uParam1 = { -2965.705f, 389.6696f, (17.64162f - 0.2f) };
		*uParam2 = { -2957.095f, 389.139f, 13.04323f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 12)
	{
		*uParam1 = { -1222.402f, -909.5575f, (14.92466f - 0.2f) };
		*uParam2 = { -1217.682f, -916.7974f, 10.33735f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 13)
	{
		*uParam1 = { 1133.284f, -981.473f, (49.01414f - 0.2f) };
		*uParam2 = { 1124.708f, -982.6027f, 44.42008f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 14)
	{
		*uParam1 = { -1484.883f, -378.2694f, (42.76172f - 0.2f) };
		*uParam2 = { -1478.771f, -372.1664f, 38.16948f };
		*uParam3 = 8.75f;
	}
	else if (iParam0 == 15)
	{
		*uParam1 = { 1704.556f, 4921.806f, (44.02687f - 0.2f) };
		*uParam2 = { 1708.285f, 4919.196f, 41.06359f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 16)
	{
		*uParam1 = { -709.019f, -907.7159f, (21.17918f - 0.2f) };
		*uParam2 = { -709.0177f, -903.1516f, 18.21618f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 17)
	{
		*uParam1 = { -45.16617f, -1751.578f, (31.37973f - 0.2f) };
		*uParam2 = { -42.22961f, -1748.09f, 28.42099f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 18)
	{
		*uParam1 = { 1160.825f, -317.4214f, (71.16085f - 0.2f) };
		*uParam2 = { 1160.033f, -312.932f, 68.20509f };
		*uParam3 = 4f;
	}
	else if (iParam0 == 19)
	{
		*uParam1 = { -1826.218f, 796.6393f, (140.1334f - 0.2f) };
		*uParam2 = { -1829.301f, 799.9996f, 137.18f };
		*uParam3 = 4f;
	}
}

void func_400(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 0)
	{
		*uParam1 = { 1395.548f, 3600.575f, 33.98914f };
		*uParam2 = { 1392.08f, 3609.983f, (37.33543f - 0.2f) };
		*uParam3 = 12.25f;
	}
	if (iParam0 == 1)
	{
		*uParam1 = { -3038.657f, 589.5176f, 6.904751f };
		*uParam2 = { -3045.476f, 587.4066f, (11.31222f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 2)
	{
		*uParam1 = { -3240.032f, 1004.482f, 11.8307f };
		*uParam2 = { -3247.188f, 1005.107f, (16.25224f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 3)
	{
		*uParam1 = { 544.2278f, 2672.5f, 41.1565f };
		*uParam2 = { 545.201f, 2665.442f, (45.69155f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 4)
	{
		*uParam1 = { 2559.176f, 385.3936f, 107.623f };
		*uParam2 = { 2552.054f, 385.6057f, (112.1638f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 5)
	{
		*uParam1 = { 2681.864f, 3282.603f, 54.24114f };
		*uParam2 = { 2675.586f, 3285.981f, (58.79021f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 6)
	{
		*uParam1 = { 1731.237f, 6411.557f, 34.03723f };
		*uParam2 = { 1734.383f, 6417.952f, (38.58461f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 7)
	{
		*uParam1 = { 1964.999f, 3740.795f, 31.34375f };
		*uParam2 = { 1961.384f, 3746.928f, (35.89571f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 8)
	{
		*uParam1 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
		*uParam2 = { Vector(33.03834f, -1341.382f, 27.05614f) - Vector(0.2f, 0.2f, 0.2f) + Vector(0f, -0.4f, 2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 9)
	{
		*uParam1 = { 376.6309f, 323.5533f, 102.5664f };
		*uParam2 = { 378.3253f, 330.4793f, (107.1095f - 0.2f) };
		*uParam3 = 11f;
	}
	if (iParam0 == 10)
	{
		*uParam1 = { 1166.497f, 2703.756f, 37.06307f };
		*uParam2 = { 1166.525f, 2711.974f, (41.66307f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 11)
	{
		*uParam1 = { -2973.512f, 390.7873f, 14.04322f };
		*uParam2 = { -2965.288f, 390.2452f, (18.54322f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 12)
	{
		*uParam1 = { -1226.417f, -902.6738f, 11.33496f };
		*uParam2 = { -1221.765f, -909.5887f, (15.82626f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 13)
	{
		*uParam1 = { 1141.35f, -980.9322f, 45.41594f };
		*uParam2 = { 1132.976f, -982.0952f, (49.91574f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 14)
	{
		*uParam1 = { -1490.949f, -383.4771f, 39.16332f };
		*uParam2 = { -1485.006f, -377.6167f, (43.66332f - 0.2f) };
		*uParam3 = 7.75f;
	}
	if (iParam0 == 15)
	{
		*uParam1 = { 1698.98f, 4929.093f, 41.06357f };
		*uParam2 = { 1705.233f, 4924.578f, (45.60386f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 16)
	{
		*uParam1 = { -711.77f, -916.4685f, 18.21557f };
		*uParam2 = { -711.7368f, -908.7517f, (22.76488f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 17)
	{
		*uParam1 = { -52.90452f, -1756.474f, 28.42097f };
		*uParam2 = { -47.92523f, -1750.614f, (32.94246f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 18)
	{
		*uParam1 = { 1159.633f, -326.5087f, 68.20507f };
		*uParam2 = { 1158.335f, -318.9123f, (72.74828f - 0.2f) };
		*uParam3 = 14f;
	}
	if (iParam0 == 19)
	{
		*uParam1 = { -1822.373f, 788.2851f, 137.1876f };
		*uParam2 = { -1827.484f, 794.0739f, (141.6933f - 0.2f) };
		*uParam3 = 14f;
	}
}

void func_401(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_402(iParam0, uParam5, uParam6);
	switch (iParam0)
	{
		case 0:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_methlab");
			}
			*uParam2 = -1621784842;
			*uParam4 = -924210258;
			*uParam3 = -1;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_shop_247");
			}
			*uParam2 = 1569794095;
			*uParam4 = 462608346;
			*uParam3 = -1;
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gen_liquor");
			}
			*uParam2 = -278510267;
			*uParam4 = -1293435817;
			*uParam3 = -1;
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			if (*iParam1 == 0)
			{
				*iParam1 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(*uParam5, "v_gasstation");
			}
			*uParam2 = -1659520475;
			*uParam4 = -1272390353;
			*uParam3 = -835664728;
			break;
	}
}

void func_402(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1394.169f, 3599.86f, 34.0121f };
			*uParam2 = { 1395.548f, 3600.575f, 33.98914f };
			break;
		
		case 1:
			*uParam1 = { -3038.908f, 589.5187f, 6.9048f };
			*uParam2 = { -3038.657f, 589.5176f, 6.904751f };
			break;
		
		case 2:
			*uParam1 = { -3240.317f, 1004.433f, 11.8307f };
			*uParam2 = { -3240.032f, 1004.482f, 11.8307f };
			break;
		
		case 3:
			*uParam1 = { 544.2802f, 2672.811f, 41.1566f };
			*uParam2 = { 544.2278f, 2672.5f, 41.1565f };
			break;
		
		case 4:
			*uParam1 = { 2559.247f, 385.5266f, 107.623f };
			*uParam2 = { 2559.176f, 385.3936f, 107.623f };
			break;
		
		case 5:
			*uParam1 = { 2682.003f, 3282.543f, 54.2411f };
			*uParam2 = { 2681.864f, 3282.603f, 54.24114f };
			break;
		
		case 6:
			*uParam1 = { 1731.21f, 6411.403f, 34.0372f };
			*uParam2 = { 1731.237f, 6411.557f, 34.03723f };
			break;
		
		case 7:
			*uParam1 = { 1965.054f, 3740.555f, 31.3448f };
			*uParam2 = { 1964.999f, 3740.795f, 31.34375f };
			break;
		
		case 8:
			*uParam1 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			*uParam2 = { Vector(28.49392f, -1348.507f, 27.03358f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 9:
			*uParam1 = { 376.6533f, 323.6471f, 102.5664f };
			*uParam2 = { 376.6309f, 323.5533f, 102.5664f };
			break;
		
		case 10:
			*uParam1 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			*uParam2 = { 1166.497f, 2703.756f, 37.06307f };
			break;
		
		case 11:
			*uParam1 = { -2973.262f, 390.8184f, 14.0433f };
			*uParam2 = { -2973.512f, 390.7873f, 14.04322f };
			break;
		
		case 12:
			*uParam1 = { -1226.464f, -902.5864f, 11.2783f };
			*uParam2 = { -1226.417f, -902.6738f, 11.33496f };
			break;
		
		case 13:
			*uParam1 = { 1141.36f, -980.8802f, 45.4155f };
			*uParam2 = { 1141.35f, -980.9322f, 45.41594f };
			break;
		
		case 14:
			*uParam1 = { -1491.057f, -383.5728f, 39.1706f };
			*uParam2 = { -1490.949f, -383.4771f, 39.16332f };
			break;
		
		case 15:
			*uParam1 = { 1698.808f, 4929.198f, 41.0783f };
			*uParam2 = { 1698.98f, 4929.093f, 41.06357f };
			break;
		
		case 16:
			*uParam1 = { -711.721f, -916.6965f, 18.2145f };
			*uParam2 = { -711.77f, -916.4685f, 18.21557f };
			break;
		
		case 17:
			*uParam1 = { -53.124f, -1756.405f, 28.421f };
			*uParam2 = { -52.90452f, -1756.474f, 28.42097f };
			break;
		
		case 18:
			*uParam1 = { 1159.542f, -326.6986f, 67.923f };
			*uParam2 = { 1159.633f, -326.5087f, 68.20507f };
			break;
		
		case 19:
			*uParam1 = { -1822.287f, 788.006f, 137.1859f };
			*uParam2 = { -1822.373f, 788.2851f, 137.1876f };
			break;
	}
}

int func_403(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar1 = 9999.9f;
	iVar2 = 0;
	while (iVar2 < 20)
	{
		fVar0 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_85(PLAYER::PLAYER_ID()), func_404(iVar2), 1);
		if (fVar0 < fVar1)
		{
			if (bParam1)
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_2423630.f_62, iVar2) && GAMEPLAY::IS_BIT_SET(Global_2423630.f_64, iVar2))
				{
					fVar1 = fVar0;
					*uParam0 = iVar2;
				}
			}
			else
			{
				fVar1 = fVar0;
				*uParam0 = iVar2;
			}
		}
		iVar2++;
	}
	return 1;
}

Vector3 func_404(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	
	func_402(iParam0, &vVar0, &uVar3);
	return vVar0;
}

int func_405(int iParam0)
{
	return Local_176[iParam0 /*10*/].f_4;
}

void func_406()
{
	Global_2448386.f_673.f_28 = 0;
}

void func_407()
{
	if (Global_1312416.f_1 == 1)
	{
		func_408(0);
		Global_1312416.f_1 = 0;
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_9 = 0;
	}
}

void func_408(int iParam0)
{
	if (func_378())
	{
		if (iParam0 == 1)
		{
			if (Global_2524719.f_4382 == -1)
			{
				Global_2524719.f_4382 = 60000;
			}
			func_409(&(Global_2524719.f_4380), 0, 0);
			if (Global_2524719.f_4385 == -1)
			{
				Global_2524719.f_4385 = 10000;
			}
			func_409(&(Global_2524719.f_4383), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_8 = 0;
			func_377(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_376()) && !func_375(PLAYER::PLAYER_ID()))
		{
			Global_968392 = 0;
		}
	}
}

void func_409(var uParam0, bool bParam1, bool bParam2)
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

void func_410()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!func_44(PLAYER::PLAYER_ID(), 1, 1))
	{
		iVar0 = 1;
		if (GAMEPLAY::IS_BIT_SET(Local_497.f_53, 6) && !GAMEPLAY::IS_BIT_SET(Local_497.f_53, 5))
		{
			iVar1 = unk_0xCCADB536D2A7894D(-1);
			iVar2 = 0;
			GAMEPLAY::SET_BIT(&iVar2, 8);
			GAMEPLAY::SET_BIT(&iVar2, 4);
			GAMEPLAY::SET_BIT(&iVar2, 1);
			if (iLocal_814 > Global_262145.f_166)
			{
				iLocal_814 = Global_262145.f_166;
			}
			if (iVar1 < iLocal_814)
			{
				if (iVar1 > 0)
				{
					if (func_49(func_50(1)))
					{
						if (NETWORKCASH::_0x7303E27CC6532080(iVar1, 0, 0, 0, &uVar3, -1))
						{
							if (func_218())
							{
								if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_7, 1))
								{
									Global_2524719.f_4709 = iVar1;
									Global_2524719.f_4710 = iVar2;
									Global_2524719.f_4711 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520) };
									func_208(&(Global_2524719.f_4708), -1135378931, 537254313, 1474183246, 1022400740, Global_2524719.f_4709, 1, 3);
									GAMEPLAY::SET_BIT(&(Global_2524719.f_7), 1);
									iLocal_814 = 0;
									GAMEPLAY::SET_BIT(&(Local_497.f_53), 5);
								}
							}
							else
							{
								OBJECT::CREATE_AMBIENT_PICKUP(joaat("pickup_money_variable"), PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520), iVar2, iVar1, func_50(1), 0, 0);
								func_203(-iVar1, 1, 1, 1092616192);
								NETWORKCASH::NETWORK_SPENT_HOLDUPS(iVar1, 0, 0);
								func_207(1022400740, iVar1, &uVar4, 0, 0, 0);
								iLocal_814 = 0;
								func_411();
								GAMEPLAY::SET_BIT(&(Local_497.f_53), 5);
							}
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			else if (iLocal_814 > 0)
			{
				if (func_49(func_50(1)))
				{
					if (NETWORKCASH::_0x7303E27CC6532080(iLocal_814, 0, 0, 0, &uVar3, -1))
					{
						if (func_218())
						{
							if (!GAMEPLAY::IS_BIT_SET(Global_2524719.f_7, 1))
							{
								Global_2524719.f_4709 = iLocal_814;
								Global_2524719.f_4710 = iVar2;
								Global_2524719.f_4711 = { PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520) };
								func_208(&(Global_2524719.f_4708), -1135378931, 537254313, 1474183246, 1022400740, Global_2524719.f_4709, 1, 3);
								GAMEPLAY::SET_BIT(&(Global_2524719.f_7), 1);
								iLocal_814 = 0;
								GAMEPLAY::SET_BIT(&(Local_497.f_53), 5);
							}
						}
						else
						{
							OBJECT::CREATE_AMBIENT_PICKUP(joaat("pickup_money_variable"), PED::GET_DEAD_PED_PICKUP_COORDS(PLAYER::PLAYER_PED_ID(), 1067030938, 1069547520), iVar2, iLocal_814, func_50(1), 0, 0);
							func_203(-iLocal_814, 1, 1, 1092616192);
							NETWORKCASH::NETWORK_SPENT_HOLDUPS(iLocal_814, 0, 0);
							func_207(1022400740, iLocal_814, &uVar5, 0, 0, 0);
							iLocal_814 = 0;
							func_411();
							GAMEPLAY::SET_BIT(&(Local_497.f_53), 5);
						}
					}
				}
				else
				{
					iVar0 = 0;
				}
			}
		}
		if (iVar0 == 1)
		{
			func_432();
		}
		else
		{
			return;
		}
	}
}

void func_411()
{
	Global_2524719.f_272 = 0;
	Global_2524719.f_273 = 0;
	Global_2524719.f_274 = 0;
}

int func_412()
{
	var uVar0;
	
	func_419(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_418())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_417())
	{
		return 1;
	}
	if (func_416(157))
	{
		if (!func_415())
		{
			return 1;
		}
	}
	if (func_416(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_413() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_413()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_413()
{
	switch (func_414())
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

int func_414()
{
	return Global_25459;
}

bool func_415()
{
	return Global_2448386.f_587;
}

int func_416(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_417()
{
	return Global_2458191;
}

bool func_418()
{
	return Global_2448386.f_582;
}

void func_419(var uParam0)
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
					func_420(iVar0);
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

void func_420(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_44(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_421(uVar4, &bVar5))
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

int func_421(var uParam0, var uParam1)
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

void func_422()
{
	SYSTEM::WAIT(0);
}

void func_423(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(0);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_429())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			uVar25 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_330(PLAYER::PLAYER_ID(), 0) && !func_428()))
				{
					ENTITY::SET_ENTITY_VISIBLE(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2423801[iParam0 /*413*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_427(uVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar25, 1, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(uVar25))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar25, 0);
					}
					ENTITY::_SET_ENTITY_SOMETHING(uVar25, 1);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uVar25, 0);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar25, 1);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				unk_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(uVar25) && PED::_0x7350823473013C02(uVar25))
				{
					PED::_0x4668D80430D6C299(uVar25);
				}
				PED::SET_PED_CAN_RAGDOLL(uVar25, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_426();
					func_425();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2423801[iParam0 /*413*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405070.f_2663)
				{
					Global_2405070.f_2663 = 0;
				}
			}
			else
			{
				if (!func_427(uVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(uVar25, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(uVar25))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(uVar25, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_SOMETHING(uVar25, 1);
						}
					}
					if (func_424(Global_4456448.f_152990))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uVar25, 1);
					}
				}
				if (Global_1312834)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(uVar25, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(uVar25) && !PED::IS_PED_IN_ANY_VEHICLE(uVar25, 0))
					{
						AI::CLEAR_PED_TASKS_IMMEDIATELY(uVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar26);
		}
	}
}

bool func_424(int iParam0)
{
	return iParam0 == 17;
}

void func_425()
{
	vector3 vVar0;
	
	Global_2437022.f_1228 = 0;
	Global_2437022.f_1229 = 0;
	Global_2437022.f_1230 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437022.f_1235 = -1;
	Global_2437022.f_1236 = 0;
	Global_2405070.f_2674 = { vVar0 };
}

void func_426()
{
	Global_2405070.f_691 = 0;
	Global_2405070.f_2717 = 0;
	Global_2405070.f_509 = 0;
	Global_2405070.f_597 = 0;
	Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_207 = 0;
	Global_2405070.f_2672 = 0;
}

int func_427(var uParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = AI::GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_428()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_429()
{
	if (func_430() == 0)
	{
		return 1;
	}
	return 0;
}

int func_430()
{
	return Global_1312466.f_18;
}

bool func_431(bool bParam0)
{
	if (bParam0)
	{
		return (Global_2448386.f_673.f_28 && GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_2448386.f_673.f_31);
	}
	return Global_2448386.f_673.f_28;
}

void func_432()
{
	int iVar0;
	
	Global_2524719.f_8 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_392(Local_103))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103) || (!NETWORK::_NETWORK_CAN_NETWORK_ID_BE_SEEN(Local_103) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
			{
				PED::_SET_PED_RAGDOLL_BLOCKING_FLAGS(NETWORK::NET_TO_PED(Local_103), 0);
				PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(NETWORK::NET_TO_PED(Local_103));
				if (GAMEPLAY::IS_BIT_SET(Local_497.f_52, 22))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_497.f_52, 20))
					{
						if (Local_103.f_3 != 7)
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
							{
								AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_103));
								AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_574);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_103), 0);
							}
						}
						else if (AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), -1442466670) != 0 && AI::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103), -1442466670) != 1)
						{
							AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_103));
							if (!WEAPON::HAS_PED_GOT_WEAPON(NETWORK::NET_TO_PED(Local_103), joaat("weapon_pistol"), 0))
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_103), joaat("weapon_pistol"), 25000, 1);
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_103), 30);
							}
							func_232(4);
							AI::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_103), 20f, 0);
						}
					}
					else if ((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 3) || !func_9()) || !func_436())
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/], 9))
						{
							AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_103));
							AI::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_103), uLocal_574);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_103), 0);
						}
					}
					else
					{
						AI::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_103));
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_103), 1);
						AI::TASK_STAND_STILL(NETWORK::NET_TO_PED(Local_103), -1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_103), 0);
					}
				}
			}
		}
		if ((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 3) || !func_9()) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_13))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_13))
				{
					ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_103.f_13), 1, 1);
					func_45(&(Local_103.f_13));
				}
			}
		}
		if (((GAMEPLAY::IS_BIT_SET(Local_103.f_23, 3) || !func_9()) || GAMEPLAY::IS_BIT_SET(Local_497.f_52, 20)) || NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103.f_14))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_14))
				{
					func_45(&(Local_103.f_14));
				}
			}
		}
		if (func_218() && GAMEPLAY::IS_BIT_SET(Global_2524719.f_7, 1))
		{
			if (func_287(Global_2524719.f_4708) == 1)
			{
				func_435(Global_2524719.f_4708, 4);
			}
			else
			{
				func_210(Global_2524719.f_4708);
			}
			GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_7), 1);
		}
		if (Local_103.f_12 == 6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_103))
			{
				if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_PED(Local_103), "XP_Blocker"))
				{
					DECORATOR::DECOR_REMOVE(NETWORK::NET_TO_PED(Local_103), "XP_Blocker");
				}
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			DECISIONEVENT::REMOVE_SHOCKING_EVENT(Local_103.f_30);
		}
	}
	func_434();
	STREAMING::REMOVE_ANIM_DICT("mp_am_hold_up");
	PLAYER::_0x0032A6DBA562C518();
	if (func_150("SHR_MENU"))
	{
		UI::CLEAR_HELP(1);
	}
	Global_2524719.f_9 = func_184();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(func_394(Local_497));
	func_166(1, Local_497);
	if (Local_497.f_14 != -1)
	{
		func_261(&(Local_497.f_14));
	}
	Global_2524719.f_27 = Local_497;
	if (Global_2524719.f_5630.f_4 == 1)
	{
		Global_2524719.f_5630.f_4 = 0;
	}
	if (Global_2524719.f_5630.f_5 == 1)
	{
		Global_2524719.f_5630.f_5 = 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_497.f_52, 29))
	{
		ENTITY::REMOVE_MODEL_HIDE(vLocal_564, 0.5f, iLocal_588, 1);
	}
	if (GAMEPLAY::IS_BIT_SET(Local_497.f_53, 7))
	{
		func_407();
		GAMEPLAY::CLEAR_BIT(&(Local_497.f_53), 7);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 6) || GAMEPLAY::IS_BIT_SET(Local_103.f_23, 21))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_103.f_23, 21))
			{
				iVar0 = 1;
			}
			STATS::_0xCB00196B31C39EB1(30, iLocal_813, iLocal_814, iVar0);
		}
	}
	if (CAM::DOES_CAM_EXIST(Local_497.f_1))
	{
		if (CAM::IS_CAM_ACTIVE(Local_497.f_1))
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		}
		CAM::DESTROY_CAM(Local_497.f_1, 0);
	}
	func_433();
}

void func_433()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_434()
{
	AI::CLEAR_SEQUENCE_TASK(&uLocal_571);
	AI::CLEAR_SEQUENCE_TASK(&uLocal_572);
}

void func_435(int iParam0, int iParam1)
{
	if (func_273(iParam0) != -1)
	{
		if (Global_4262927[iParam0 /*80*/].f_61.f_2 == 1)
		{
			Global_4262927[iParam0 /*80*/].f_61.f_11 = iParam1;
		}
	}
}

int func_436()
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			uVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			uVar2 = PLAYER::GET_PLAYER_PED(uVar1);
			if (func_44(uVar1, 1, 1))
			{
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(uVar2) == iLocal_596)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_437(struct<21> Param0)
{
	var uVar0;
	
	func_443(func_444(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(8);
	func_441(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_103, 73);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_176, 321);
	GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_440())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_49(func_50(0));
		func_49(func_50(1));
		func_49(func_50(2));
		STREAMING::REQUEST_ANIM_DICT("mp_am_hold_up");
		STREAMING::REQUEST_ANIM_DICT("mp_missheist_countrybank@cower");
		Local_103.f_44 = 8;
		if (func_439())
		{
			GAMEPLAY::SET_BIT(&(Local_103.f_24), 11);
		}
		else if (func_438())
		{
			GAMEPLAY::SET_BIT(&(Local_103.f_24), 12);
		}
		Local_103.f_28 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 11);
		Local_103.f_31 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 5);
		if ((func_12() && !func_385(PLAYER::PLAYER_ID(), 1)) && !func_385(PLAYER::PLAYER_ID(), 2))
		{
			Local_103.f_43 = 2;
			GAMEPLAY::SET_BIT(&(Local_103.f_25), 0);
		}
		else
		{
			Local_103.f_43 = 1;
		}
		Local_103.f_71 = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(18f, 28f);
	}
	if (func_93(PLAYER::PLAYER_ID()) != 155)
	{
		OBJECT::_0x0BF3B3BD47D79C08(func_50(1), 0);
	}
	uVar0 = func_130(1190, -1, 0);
	if (GAMEPLAY::IS_BIT_SET(uVar0, 20) && GAMEPLAY::IS_BIT_SET(uVar0, 21))
	{
		GAMEPLAY::SET_BIT(&(Local_497.f_53), 1);
	}
	Local_176[NETWORK::PARTICIPANT_ID_TO_INT() /*10*/].f_4 = 0;
	return 1;
}

int func_438()
{
	if (Local_497.f_50 >= 0 && Local_497.f_50 <= 9)
	{
		if (func_397(5, 6) || func_397(17, 18))
		{
			return 1;
		}
		return 0;
	}
	if (Local_497.f_50 >= 10 && Local_497.f_50 <= 14)
	{
		if (func_397(9, 10) || func_397(21, 22))
		{
			return 1;
		}
		return 0;
	}
	if (Local_497.f_50 >= 15 && Local_497.f_50 <= 19)
	{
		if (func_397(7, 8) || func_397(19, 20))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_439()
{
	if (Local_497.f_50 >= 0 && Local_497.f_50 <= 9)
	{
		if (func_397(6, 7) || func_397(18, 19))
		{
			return 1;
		}
		return 0;
	}
	if (Local_497.f_50 >= 10 && Local_497.f_50 <= 14)
	{
		if (func_397(10, 11) || func_397(22, 23))
		{
			return 1;
		}
		return 0;
	}
	if (Local_497.f_50 >= 15 && Local_497.f_50 <= 19)
	{
		if (func_397(8, 9) || func_397(20, 21))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_440()
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
		if (func_418())
		{
			return 0;
		}
		if (func_416(155))
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

int func_441(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_433();
			}
			else
			{
				return 0;
			}
		}
		if (!func_442())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_433();
					}
					else
					{
						return 0;
					}
				}
				if (func_418())
				{
					if (!bParam2)
					{
						func_433();
					}
					else
					{
						return 0;
					}
				}
				if (func_416(155))
				{
					if (!bParam2)
					{
						func_433();
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
					func_433();
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
				func_433();
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
			func_433();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_442()
{
	return Global_1312834;
}

void func_443(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_433();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_444(int iParam0)
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
		
		case 124:
			return 32;
		
		case 125:
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
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}

