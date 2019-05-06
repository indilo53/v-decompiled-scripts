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
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	float fLocal_67 = 0f;
	int iLocal_68[5] = { 0, 0, 0, 0, 0 };
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<2> Local_84 = { 0, 0 } ;
	struct<2> Local_86[8];
	struct<2> Local_103 = { 0, 0 } ;
	struct<4> Local_105[8];
	float fLocal_138 = 0f;
	float fLocal_139 = 0f;
	float fLocal_140 = 0f;
	float fLocal_141 = 0f;
	float fLocal_142 = 0f;
	var uLocal_143 = 0;
	int iLocal_144[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 10;
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
	var uLocal_168 = 2;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 8;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 8;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	float fLocal_190 = 0f;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	struct<60> Local_206 = { 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0 } ;
	struct<6> Local_266[32];
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	int iLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	vector3 vLocal_468 = { 0f, 0f, 0f };
	var uLocal_471 = 0;
	struct<23> Local_472 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 1015222895;
	var uLocal_501 = 1021665346;
	var uLocal_502 = 0;
	var uLocal_503 = 255;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = -1;
	var uLocal_513 = 996499522;
	var uLocal_514 = 1002740646;
	var uLocal_515 = 0;
	var uLocal_516 = 60;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 1016296636;
	var uLocal_578 = 220;
	var uLocal_579 = 255;
	var uLocal_580 = 255;
	var uLocal_581 = 255;
	var uLocal_582 = 255;
	var uLocal_583 = 255;
	var uLocal_584 = 255;
	var uLocal_585 = 4096;
	var uLocal_586 = 40;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
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
	var uLocal_755 = 4;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 1065353216;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 1056964608;
	var uLocal_765 = 1056964608;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	int iLocal_771 = 0;
	vector3 vLocal_772[20] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
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
	fLocal_67 = 0f;
	fLocal_74 = 0f;
	fLocal_75 = 0f;
	fLocal_76 = 0f;
	fLocal_139 = 0.62f;
	fLocal_140 = 0.51f;
	fLocal_141 = 0.55f;
	fLocal_142 = 25f;
	fLocal_190 = ((0.05f + 0.275f) - 0.01f);
	iLocal_766 = -1;
	iLocal_767 = -1;
	iLocal_769 = -1;
	iLocal_770 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1072(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1034(ScriptParam_0);
	}
	else
	{
		func_986();
	}
	while (true)
	{
		func_985();
		if (func_977())
		{
			func_986();
		}
		Global_1666806.f_2 = Local_206.f_58;
		Global_1666806.f_3 = Local_206.f_59;
		switch (func_976(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_975() == 1)
				{
					func_974();
					if (func_973())
					{
						func_958(142, 1, -1, 0);
						PLAYER::SET_MAX_WANTED_LEVEL(3);
						if (!func_957())
						{
							OBJECT::_0x616093EC6B139DD9(PLAYER::PLAYER_ID(), joaat("pickup_portable_package"), 0);
						}
					}
					else
					{
						func_958(142, 0, -1, 0);
					}
					Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 1;
				}
				else if (func_975() == 4)
				{
					Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				break;
			
			case 1:
				if (func_951(1))
				{
					Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 2;
				}
				if (func_975() == 1)
				{
					func_409();
					func_406();
					if (func_973() || func_405())
					{
						func_254(&(Global_1358108.f_534), &Global_1358108, 27, &(Global_1358108.f_1), &(Global_1358108.f_117), -1, 0, 0);
					}
					func_201();
				}
				else if (func_975() == 4)
				{
					Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 3;
				}
				func_198();
				break;
			
			case 3:
				func_197(&(Local_206.f_49));
				if (func_196(&(Local_206.f_49)))
				{
					Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
				}
				break;
			
			case 2:
				Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 4;
			
			case 4:
				func_986();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_975())
			{
				case 0:
					if (func_189())
					{
						STATS::_0x6DEE77AFF8C21BD1(&(Local_206.f_58), &(Local_206.f_59));
						Local_206 = 1;
						Local_206.f_33 = NETWORK::PARTICIPANT_ID_TO_INT();
						Local_206.f_34 = PLAYER::PLAYER_ID();
						func_958(142, 1, -1, 0);
					}
					break;
				
				case 1:
					func_187();
					func_4();
					if (func_2())
					{
						Local_206 = 4;
					}
					else if (func_1())
					{
						Local_206 = 4;
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
	if (Global_2524719.f_4883.f_34)
	{
		Global_2524719.f_4883.f_34 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_206.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_206.f_32)
	{
		case 0:
			func_12();
			func_10();
			func_5();
			if (GAMEPLAY::IS_BIT_SET(Local_206.f_1, 1))
			{
				Local_206.f_32 = 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_206.f_1, 3))
			{
				Local_206.f_32 = 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_206.f_1, 4))
			{
				Local_206.f_32 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	if (Local_206.f_5 == 0)
	{
		if (!GAMEPLAY::IS_BIT_SET(Local_206.f_1, 6))
		{
			if (!func_9(&(Local_206.f_53)))
			{
				func_8(&(Local_206.f_53), 0, 0);
			}
			else if (func_6(&(Local_206.f_53), func_7(), 0))
			{
				GAMEPLAY::SET_BIT(&(Local_206.f_1), 6);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_8(uParam0, bParam2, 0);
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

int func_7()
{
	return 600000;
}

void func_8(var uParam0, bool bParam1, bool bParam2)
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

bool func_9(var uParam0)
{
	return uParam0->f_1;
}

void func_10()
{
	if (!func_9(&(Local_206.f_51)))
	{
		func_8(&(Local_206.f_51), 0, 0);
	}
	else if (func_6(&(Local_206.f_51), func_11(), 0))
	{
		GAMEPLAY::SET_BIT(&(Local_206.f_1), 3);
	}
}

int func_11()
{
	return Global_262145.f_12389;
}

void func_12()
{
	int iVar0;
	
	if (Local_206.f_33 < 0)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_206.f_33)))
	{
		if (Local_266[Local_206.f_33 /*6*/].f_4 > 0)
		{
			iVar0 = (Local_266[Local_206.f_33 /*6*/].f_4 - 1);
			if (!GAMEPLAY::IS_BIT_SET(Local_206.f_4, iVar0))
			{
				Local_206.f_36 = iVar0;
				if (func_13())
				{
					GAMEPLAY::SET_BIT(&(Local_206.f_4), iVar0);
				}
			}
		}
	}
}

int func_13()
{
	int iVar0;
	struct<35> Var1;
	vector3 vVar36;
	
	iVar0 = joaat("prop_ld_case_01");
	Var1.f_5 = 1115815936;
	Var1.f_13 = 2;
	Var1.f_20 = 2;
	Var1.f_32 = -1082130432;
	Var1.f_34 = 1;
	Var1.f_3 = 0;
	Var1.f_5 = 10f;
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_206.f_3))
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				vVar36 = { func_186() };
				if (func_14(vVar36, 5f, &vLocal_468, &uLocal_471, &Var1))
				{
					Local_206.f_3 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_package"), vLocal_468, 1, iVar0));
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(Local_206.f_3), vLocal_468 + Vector(0.5f, 0f, 0f), 0, 0, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_206.f_3), 1);
					OBJECT::_SET_OBJECT_LOD(NETWORK::NET_TO_OBJ(Local_206.f_3), 1);
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_206.f_3), 1);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_OBJ(Local_206.f_3), 0);
					ROPE::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_206.f_3));
					func_8(&(Local_206.f_55), 0, 0);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_206.f_3))
	{
		return 1;
	}
	return 0;
}

int func_14(vector3 vParam0, float fParam3, var uParam4, var uParam5, var uParam6)
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
	if (func_15(&Var34, uParam6, &Var0))
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

int func_15(var uParam0, var uParam1, var uParam2)
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
			if (((!Global_2405070.f_2449 == *uParam0 || !Global_2405070.f_2449.f_1 == uParam0->f_1) || !Global_2405070.f_2449.f_2 == uParam0->f_2) || !Global_2405070.f_2452 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2405070.f_2463 == uParam0->f_8 || !Global_2405070.f_2463.f_1 == uParam0->f_8.f_1) || !Global_2405070.f_2463.f_2 == uParam0->f_8.f_2) || !Global_2405070.f_2466 == uParam0->f_11) || !Global_2405070.f_2466.f_1 == uParam0->f_11.f_1) || !Global_2405070.f_2466.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2405070.f_2463 == uParam0->f_8 || !Global_2405070.f_2463.f_1 == uParam0->f_8.f_1) || !Global_2405070.f_2463.f_2 == uParam0->f_8.f_2) || !Global_2405070.f_2466 == uParam0->f_11) || !Global_2405070.f_2466.f_1 == uParam0->f_11.f_1) || !Global_2405070.f_2466.f_2 == uParam0->f_11.f_2) || !Global_2405070.f_2469 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (bVar25)
	{
		if (Global_2405070.f_2447 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_2456))
			{
				if (Global_2405070.f_2456 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2453) < func_185(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2453) < func_185(0))
				{
					return 0;
				}
			}
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_184();
		}
		Global_2405070.f_2447 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2453) > func_185(0))
	{
		Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
		func_178();
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
	if (!Global_2405070.f_2447)
	{
		NETWORK::_0xFB8F2A6F3DF08CBE();
		PED::_0xFEE4A5459472A9F8();
		func_184();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_177(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_2405070.f_2470 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2405070.f_2449 = { *uParam0 };
					Global_2405070.f_2452 = uParam0->f_4;
					break;
				
				case 1:
					Global_2405070.f_2463 = { uParam0->f_8 };
					Global_2405070.f_2466 = { uParam0->f_11 };
					Global_2405070.f_2469 = 0f;
					Global_2405070.f_2449 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2405070.f_2463 = { uParam0->f_8 };
					Global_2405070.f_2466 = { uParam0->f_11 };
					Global_2405070.f_2469 = uParam0->f_14;
					Global_2405070.f_2449 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_176(vVar8.x, vVar8.y);
			}
			Global_2405070.f_2448 = 1;
			Global_2405070.f_2447 = 1;
			Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
			Global_2405070.f_2453 = NETWORK::GET_NETWORK_TIME();
			Global_2405070.f_2456 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2405070.f_2447)
	{
		if (Global_2405070.f_2448 == 1)
		{
			if (PATHFIND::_0xF7B79A50B905A30D(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2454) > 5000)
			{
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
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
					if (func_175(Global_4456448.f_152990))
					{
						Var26.f_9 = 1;
					}
					func_150(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_149(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2405070.f_2448 = 9;
				}
				else
				{
					Global_2405070.f_2448 = 2;
				}
			}
		}
		if (Global_2405070.f_2448 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar11, vVar14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2454) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar11, vVar14) == 0)
			{
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_146(PLAYER::PLAYER_ID(), 0))
				{
					Global_2405070.f_2448 = 3;
				}
				else
				{
					Global_2405070.f_2448 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2458) > 7000)
			{
				func_145(vVar8.x, vVar8.y);
			}
		}
		if (Global_2405070.f_2448 == 3)
		{
			if (func_144() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2454) > 10000)
			{
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
				Global_2405070.f_2448 = 4;
			}
		}
		if (Global_2405070.f_2448 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_178();
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
								Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
								Global_2405070.f_2448 = 5;
							}
							break;
						
						case 1:
							func_143(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							if (NETWORK::_0x4BA92A18502BCA61(PLAYER::PLAYER_ID(), vVar18, vVar21, uVar24, *uParam1, iVar0))
							{
								Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
								Global_2405070.f_2448 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::_0x4BA92A18502BCA61(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
								Global_2405070.f_2448 = 5;
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
					Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
					Global_2405070.f_2448 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_143(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
							PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2405070.f_2448 == 5)
		{
			if (func_68(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2405070.f_2474.f_5)
				{
					Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
					Global_2405070.f_2448 = 6;
				}
				else
				{
					Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_2405070.f_2448 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2454) > 20000)
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
				Global_2405070.f_2448 = 8;
			}
		}
		if (Global_2405070.f_2448 == 6)
		{
			iVar0 = 0;
			Global_2405070.f_2474.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_67(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_66(uParam0->f_8, uParam0->f_11, uParam0->f_14))
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
			Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
			Global_2405070.f_2448 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_143(uParam0->f_8, uParam0->f_11, &vVar18, &vVar21, &uVar24);
					PED::_0xB2AFF10216DEFA2F(vVar18, vVar21, uVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2405070.f_2448 == 7)
		{
			if (func_68(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2405070.f_2608[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_149(Global_2405070.f_2608[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2608[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_64(Global_2405070.f_2608[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2608[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2405070.f_2608[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_2405070.f_2608[iVar17 /*3*/] };
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
						func_18(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
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
				Global_2405070.f_2448 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405070.f_2454) > 20000)
			{
				Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
				Global_2405070.f_2448 = 8;
			}
		}
		if (Global_2405070.f_2448 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_17(Global_2405070.f_483))
				{
				}
			}
			else if (Global_2405070.f_2474.f_2)
			{
				func_16(uParam2, &(Global_2405070.f_2474.f_6));
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
				*(uParam2[0 /*3*/]) = { Global_2405070.f_2449 };
				func_18(uParam2[0 /*3*/], 0, bVar85, 0, 0, uParam0, uParam1);
			}
			Global_2405070.f_2454 = NETWORK::GET_NETWORK_TIME();
			Global_2405070.f_2448 = 9;
		}
		if (Global_2405070.f_2448 == 9)
		{
			Global_2405070.f_2447 = 0;
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_184();
			return 1;
		}
		Global_2405070.f_2453 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_16(var uParam0, var uParam1)
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

int func_17(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
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
						if (func_67(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 1:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_66(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
						{
							iVar66 += 4;
						}
						break;
					
					case 2:
						vVar67 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_66(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar67)))
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
	if (func_23(*uParam0, &vVar0, iVar66, iParam3, 1))
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
		if (func_20(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_9 = 1;
		}
		func_150(&vVar0, &uVar3, &Var4);
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
		if (!func_19(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
		{
			if (func_23(*uParam0, &vVar0, iVar66, iParam3, 0))
			{
				if (!func_19(vVar0, uParam5->f_7, vVar70, vVar73, fVar76))
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
	Global_2405070.f_658 = 1;
}

int func_19(vector3 vParam0, int iParam3, vector3 vParam4, vector3 vParam7, float fParam10)
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
			return func_64(vParam0, vParam4, vParam7, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam4, vParam7, fParam10, 0, 1);
			break;
	}
	return 0;
}

int func_20(int iParam0, bool bParam1)
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
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_22())
			{
				return func_21(Global_2423801[iParam0 /*413*/].f_309.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_21(int iParam0)
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

int func_22()
{
	return -1;
}

int func_23(vector3 vParam0, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_63(vParam0, uParam3))
	{
		if (func_24(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam3, iParam4))
	{
		if (func_24(vParam0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_24(vector3 vParam0, var uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_44(Global_2405070.f_506, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_31(*uParam3, 1056964608))
			{
				if (!func_25(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_25(var uParam0, bool bParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	vVar1 = { *uParam0 };
	iVar4 = func_30(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411257[iVar4])
	{
		if (func_29(vVar1, &(Global_2410113[iVar4 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_26(&vVar1, Global_2410113[iVar4 /*127*/][iVar0 /*7*/], Global_2410113[iVar4 /*127*/][iVar0 /*7*/].f_3, Global_2410113[iVar4 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411257[8])
	{
		if (func_29(vVar1, &(Global_2410113[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_26(&vVar1, Global_2410113[8 /*127*/][iVar0 /*7*/], Global_2410113[8 /*127*/][iVar0 /*7*/].f_3, Global_2410113[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_26(var uParam0, vector3 vParam1, vector3 vParam4, float fParam7, float fParam8, bool bParam9)
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
	vVar6 = { func_28(0f, 0f, 1f, vVar0) };
	vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
	fVar9 = (SYSTEM::VMAG(vVar3) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar3.x, vVar3.y)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_27(vVar6, vVar3) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_27(vVar6, vVar3) >= 0f)
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
		vVar6 = { func_28(0f, 0f, 1f, vVar0) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		vVar6 = { vVar6 * FtoV((fParam7 * 0.5f)) };
		vVar20 = { vVar17 - vVar6 };
		vVar23 = { vVar17 + vVar6 };
		vVar26 = { vVar23 - vVar20 };
		vVar26.z = 0f;
		vVar29 = { *uParam0 - vVar20 };
		vVar29.z = 0f;
		vVar6 = { func_28(0f, 0f, 1f, vVar26) };
		vVar6 = { vVar6 / FtoV(SYSTEM::VMAG(vVar6)) };
		fVar9 = (SYSTEM::VMAG(vVar29) * SYSTEM::SIN(GAMEPLAY::GET_ANGLE_BETWEEN_2D_VECTORS(vVar26.x, vVar26.y, vVar29.x, vVar29.y)));
		if (!bParam9)
		{
			if (func_27(vVar6, vVar29) >= 0f)
			{
				vVar6 = { vVar6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				vVar6 = { vVar6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_27(vVar6, vVar29) >= 0f)
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

float func_27(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_28(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

bool func_29(vector3 vParam0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_30(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411267[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411267[1])
	{
		if (Param0 < Global_2411271[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411267[2])
	{
		if (Param0 < Global_2411271[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411271[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411271[3])
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

int func_31(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	if (func_41(PLAYER::PLAYER_ID(), 1))
	{
		if (Global_4456448.f_59274 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_59274)
			{
				if (Global_4456448.f_59275[iVar0 /*80*/].f_7 != 0)
				{
					if (func_32(vParam0, Global_4456448.f_59275[iVar0 /*80*/], Global_4456448.f_59275[iVar0 /*80*/].f_6, Global_4456448.f_59275[iVar0 /*80*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_55666 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_55666)
			{
				if (Global_4456448.f_55669[iVar0 /*149*/].f_16 != 0)
				{
					if (func_32(vParam0, Global_4456448.f_55669[iVar0 /*149*/], Global_4456448.f_55669[iVar0 /*149*/].f_3, Global_4456448.f_55669[iVar0 /*149*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4456448.f_79604 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4456448.f_79604)
			{
				if (Global_4456448.f_79608[iVar0 /*217*/].f_12 != 0)
				{
					if (func_32(vParam0, Global_4456448.f_79608[iVar0 /*217*/], Global_4456448.f_79608[iVar0 /*217*/].f_3, Global_4456448.f_79608[iVar0 /*217*/].f_12, 0.5f))
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

int func_32(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	
	if (SYSTEM::VDIST(vParam0, vParam3) < func_40(iParam7, 1008981770))
	{
		func_33(vParam3, fParam6, iParam7, &vVar0, &vVar3, &uVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar3, uVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_33(vector3 vParam0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	
	vVar0 = { 0f, 1f, 0f };
	func_39(&vVar0, 0f, 0f, fParam3);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_34(iParam4, &vVar3, &vVar6, 1086324736, 1080033280, 1077936128);
	vVar9 = { vParam0 + vVar0 * FtoV((vVar6.y + fParam8)) };
	vVar9.z = (vVar9.z - ((0.5f * GAMEPLAY::ABSF((vVar6.z - vVar3.z))) + fParam8));
	vVar12 = { vParam0 - vVar0 * FtoV(((vVar3.y * -1f) + fParam8)) };
	vVar12.z = (vVar12.z + ((0.5f * GAMEPLAY::ABSF((vVar6.z - vVar3.z))) + fParam8));
	*uParam5 = { vVar9 };
	*uParam6 = { vVar12 };
	*uParam7 = GAMEPLAY::ABSF((vVar6.x - vVar3.x));
}

void func_34(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		GAMEPLAY::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_37(iParam0);
		if (iVar0 != 0)
		{
			func_35(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_35(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_36(iParam0, &Global_1315792);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315792[iVar0]))
		{
			GAMEPLAY::GET_MODEL_DIMENSIONS(Global_1315792[iVar0], &(Global_1315796[iVar0 /*3*/]), &(Global_1315803[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315796[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315803[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315796[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315803[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315796[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315803[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315796[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315803[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315810[iVar0] = (Global_1315803[iVar0 /*3*/] - Global_1315796[iVar0 /*3*/]);
		Global_1315813[iVar0] = (Global_1315803[iVar0 /*3*/].f_1 - Global_1315796[iVar0 /*3*/].f_1);
		Global_1315816[iVar0] = (Global_1315803[iVar0 /*3*/].f_2 - Global_1315796[iVar0 /*3*/].f_2);
		if (Global_1315810[iVar0] > Global_1315819)
		{
			Global_1315819 = Global_1315810[iVar0];
		}
		if (Global_1315816[iVar0] > Global_1315820)
		{
			Global_1315820 = Global_1315816[iVar0];
		}
		iVar0++;
	}
	Global_1315821 = (Global_1315819 * -0.5f);
	Global_1315824 = (Global_1315819 * 0.5f);
	Global_1315821.f_1 = ((((0.5f * Global_1315813[0]) + Global_1315813[1]) + Global_1315792.f_3) * -1f);
	Global_1315824.f_1 = (0.5f * Global_1315813[0]);
	Global_1315821.f_2 = (Global_1315816[0] * -0.5f);
	Global_1315824.f_2 = (Global_1315816[0] * 0.5f);
	*uParam1 = { Global_1315821 };
	*uParam2 = { Global_1315824 };
}

void func_36(int iParam0, var uParam1)
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

int func_37(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_38(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_39(var uParam0, vector3 vParam1)
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

float func_40(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_34(iParam0, &vVar0, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar6 = { vVar3 - vVar0 };
	fVar9 = (SYSTEM::SQRT(((((vVar6.x * 0.5f) * (vVar6.x * 0.5f)) + ((vVar6.y * 0.5f) * (vVar6.y * 0.5f))) + ((vVar6.z * 0.5f) * (vVar6.z * 0.5f)))) + fParam1);
	return fVar9;
}

int func_41(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_42(iParam0))
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

bool func_42(int iParam0)
{
	return func_43(iParam0);
}

var func_43(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_13.f_1, 0);
}

int func_44(vector3 vParam0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_57(vParam0))
	{
		if (func_56(uParam3, bParam6, 0, 1, 1))
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
				func_45(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

void func_45(var uParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_39(&vVar0, 0f, 0f, GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_39(&vVar0, 0f, 0f, fParam7);
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

int func_46(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_2405070.f_2719[iVar0 /*3*/]) < fParam3)
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
	
	if (func_52(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_49(&vVar2, &(Global_2405070.f_362[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_52(vVar2, &uVar1) || func_48(vVar2))
			{
				vVar2 = { *uParam0 };
				func_49(&vVar2, &(Global_2405070.f_362[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
	
	if (Global_2405070.f_587 > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_2405070.f_584);
		if (fVar0 < Global_2405070.f_587)
		{
			return 1;
		}
	}
	return 0;
}

void func_49(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_51(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405070.f_2717) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_51(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_51(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_45(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405070.f_2717) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_50(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_26(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_50(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

Vector3 func_51(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam10)
	{
		case 0:
			func_45(&vParam0, vParam3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_50(&vParam0, vParam3, vParam6, fParam11, bParam12);
			break;
		
		case 2:
			func_26(&vParam0, vParam3, vParam6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_149(vVar1, vParam3, fParam9, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_64(vVar1, vParam3, vParam6, 0, 0))
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

int func_52(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_55())
	{
		return 0;
	}
	iVar1 = func_54();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405070.f_362[iVar0 /*12*/].f_9 == 1)
		{
			if (func_53(vParam0, &(Global_2405070.f_362[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_53(vector3 vParam0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_149(vParam0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405070.f_2717) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_64(vParam0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
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

int func_54()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405070.f_362[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_55()
{
	return Global_1668658.f_28;
}

int func_56(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2409942[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409942[iVar0 /*17*/].f_16))
			{
				if (func_53(*uParam0, &(Global_2409942[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409942[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409942[iVar0 /*17*/].f_13 };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_49(&vVar1, &(Global_2409942[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_56(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_49(&vVar1, &(Global_2409942[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_57(vector3 vParam0)
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_2405070.f_509 && !Global_2405070.f_510)
	{
		if (!Global_2405070.f_44.f_314)
		{
			if (!func_61(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_60(vParam0, 1008981770))
			{
				if (!func_56(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_56(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_59(vParam0, 1008981770);
				if (iVar0 > -1)
				{
					vVar1 = { func_58(&(Global_2405070.f_44[iVar0 /*12*/])) };
					if (!func_56(&vVar1, 0, 0, 0, 1))
					{
						if (!func_56(&vParam0, 0, 0, 0, 1))
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

Vector3 func_58(var uParam0)
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

int func_59(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405070.f_44[iVar0 /*12*/].f_9)
		{
			if (func_53(vParam0, &(Global_2405070.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_60(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405070.f_44[iVar0 /*12*/].f_9)
		{
			if (func_53(vParam0, &(Global_2405070.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_61(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_62(iParam0) != 0;
	}
	return func_41(iParam0, bParam1);
}

int func_62(int iParam0)
{
	if (func_1072(iParam0, 0, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_63(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2405070.f_2245 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_2245)
		{
			fVar3 = SYSTEM::VDIST(Global_2405070.f_2246[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2405070.f_2246[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_64(vector3 vParam0, vector3 vParam3, vector3 vParam6, bool bParam9, bool bParam10)
{
	func_65(&vParam3, &vParam6);
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

void func_65(var uParam0, var uParam1)
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

int func_66(vector3 vParam0, vector3 vParam3, float fParam6)
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

int func_67(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_68(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	
	if (Global_2405070.f_2474.f_1 == 0 && Global_2405070.f_2474 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::_0x3C891A251567DFCE(&(Global_2405070.f_2474.f_1)))
			{
				case 0:
					func_141(uParam1, uParam2);
					if (!Global_2405070.f_2474.f_2)
					{
						if (uParam2->f_7 && Global_2405070.f_549.f_7 == 0)
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
								*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
							}
							if (uParam1->f_5 && func_17(Global_2405070.f_483))
							{
								if (!Global_2405070.f_2474.f_5)
								{
									Global_2405070.f_2474.f_5 = 1;
								}
								else
								{
									func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_18(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_141(uParam1, uParam2);
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
					func_141(uParam1, uParam2);
					Global_2405070.f_2474.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_141(uParam1, uParam2);
				if (!Global_2405070.f_2474.f_2)
				{
					Global_2405070.f_2474.f_5 = 1;
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
		func_138(Global_2405070.f_549, &(Global_2405070.f_2474.f_57), &(Global_2405070.f_2474.f_90));
	}
	if (uParam2->f_7 && !Global_2405070.f_2474.f_4)
	{
		Global_2405070.f_2474.f_4 = 1;
		func_76(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
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
	if (Global_2405070.f_2474.f_1 > 0 || Global_2405070.f_2474 > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar4 = 0;
			while (iVar4 < Global_2405070.f_2474.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2405070.f_2474.f_3)
					{
						iVar4 = Global_2405070.f_2474.f_3 + 1;
					}
					if (iVar4 > (Global_2405070.f_2474.f_1 - 1))
					{
						iVar4 = (Global_2405070.f_2474.f_1 - 1);
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
					func_76(vVar0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2405070.f_2474.f_3 = iVar4;
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
			iVar4 = Global_2405070.f_2474.f_1;
		}
		if (Global_2405070.f_2474.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2405070.f_2871)
			{
				func_70(&(Global_2405070.f_2474.f_6[0 /*10*/]), &(Global_2405070.f_2474.f_6[1 /*10*/]), &(Global_2405070.f_2474.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_17(Global_2405070.f_483))
			{
				if (Global_2405070.f_2474.f_2)
				{
					func_16(uParam0, &(Global_2405070.f_2474.f_6));
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
					func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2405070.f_2474.f_2)
			{
				func_16(uParam0, &(Global_2405070.f_2474.f_6));
				func_69(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2405070.f_2474.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_25(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
					func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_69(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
				func_18(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_69(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2405070.f_2449 };
		if (uParam1->f_5 && func_17(Global_2405070.f_483))
		{
			if (!Global_2405070.f_2474.f_5)
			{
				Global_2405070.f_2474.f_5 = 1;
			}
			else
			{
				func_18(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
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
			func_18(uParam0[0 /*3*/], 0, bVar8, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = GAMEPLAY::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_69(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_69(vector3 vParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2405070.f_2608[(3 - iVar0) /*3*/] = { Global_2405070.f_2608[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2405070.f_2608[0 /*3*/] = { vParam0 };
}

void func_70(var uParam0, var uParam1, var uParam2)
{
	if (func_17(Global_2405070.f_483) && func_75() < 4096)
	{
		func_74(uParam0, 0f);
		func_74(uParam1, uParam0->f_2);
		func_74(uParam2, uParam1->f_2);
	}
	else
	{
		func_73(uParam0);
		func_72(uParam2, uParam0->f_4);
		func_71(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_71(var uParam0, vector3 vParam1, vector3 vParam4)
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
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2407969[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_2407969[iVar0 /*10*/].f_4, vParam4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2407969[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_72(var uParam0, vector3 vParam1)
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
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2407969[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_2407969[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_73(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			if (Global_2407969[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2407969[iVar0 /*10*/].f_1;
				Var2 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_74(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			if (Global_2407969[iVar0 /*10*/].f_2 < fVar1 && Global_2407969[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2407969[iVar0 /*10*/].f_2;
				Var2 = { Global_2407969[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_75()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2407969[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_76(vector3 vParam0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
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
		if (Global_2405070.f_483 == 1)
		{
			if (GAMEPLAY::ABSF((Global_2405070.f_506.f_2 - vParam0.z)) < 25f)
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
		if (func_134(PLAYER::PLAYER_ID()))
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
		if (!func_133(vParam0, 1084227584, 1123024896, 0))
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
		if (!func_132(vParam0, uParam5->f_5, 1, 1, 1, 1, 1, 1))
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
		if (func_126(vParam0, fParam3, uParam4->f_15, func_131(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2405070.f_3;
		}
	}
	else if (!func_123(vParam0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_119(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_119(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2405070.f_690)
		{
			vVar12 = { Global_2405070.f_506 };
			if (Global_2405070.f_483 == 26)
			{
				vVar12 = { Global_2405070.f_549.f_18 };
			}
			if (!func_46(vParam0, 0.5f))
			{
				if (func_57(vVar12))
				{
					if (!func_56(&vParam0, 0, 0, 0, 1) && !func_118(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_118(&vParam0, 0))
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
	else if (!func_117(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_116(PLAYER::PLAYER_ID()) && func_114(PLAYER::PLAYER_ID())))
		{
			if (!func_113(&vParam0, &(Global_2405070.f_2474.f_90), 0, 1065353216))
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
		if (!func_114(PLAYER::PLAYER_ID()))
		{
			if (!func_112(vParam0, &(Global_2405070.f_2474.f_57), &(Global_2405070.f_2474.f_90), 1073741824))
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
	if (func_111(vParam0))
	{
		if (uParam4->f_5)
		{
			if (func_17(Global_2405070.f_483))
			{
				if (func_60(vParam0, 0.01f))
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
		if (func_110(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2405070.f_44.f_55)
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
		if (!Global_2405070.f_690)
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
	if (!func_25(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_59(vParam0, 1008981770);
		if (iVar16 > -1)
		{
			func_109(vParam0, &vVar17, &vVar20, &uVar23);
			if (!func_104(&(Global_2405070.f_44[iVar16 /*12*/]), vVar17, vVar20, uVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_31(vParam0, 1056964608))
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
	else if (func_103(vParam0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2405070.f_2871 && uParam4->f_5)
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
				fVar0 = func_95(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_95(vParam0, Global_2405070.f_2449, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_17(Global_2405070.f_483) && iVar8 < 4096)
			{
				Var25.f_2 = func_93(vParam0);
			}
			uVar7 = func_82(vParam0, 1, 0, 0, 0);
			Var25.f_4 = { vParam0 };
			Var25.f_7 = fParam3;
			Var25 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_81(Var25);
			Global_2405070.f_2474.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2405070.f_2474.f_6[iVar24 /*10*/])
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
							fVar0 = func_95(vParam0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_95(vParam0, Global_2405070.f_2449, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_17(Global_2405070.f_483) && iVar8 == Global_2405070.f_2474.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_93(vParam0);
							bVar36 = true;
						}
						if (fVar2 < Global_2405070.f_2474.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { vParam0 };
							Var25.f_7 = fParam3;
							Var25 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_80(Var25, iVar24);
							Global_2405070.f_2474.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2405070.f_2474.f_6[iVar24 /*10*/] || (iVar8 == Global_2405070.f_2474.f_6[iVar24 /*10*/] && fVar0 > Global_2405070.f_2474.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_1 = fVar0;
						func_80(Var25, iVar24);
						Global_2405070.f_2474.f_2 = 1;
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
						fVar5 = func_78(vParam0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_82(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_77(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_77(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2405070.f_2474.f_6[iVar24 /*10*/] || (iVar8 == Global_2405070.f_2474.f_6[iVar24 /*10*/] && fVar3 > Global_2405070.f_2474.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { vParam0 };
						Var25.f_7 = fParam3;
						Var25 = iVar8;
						Var25.f_3 = fVar3;
						func_80(Var25, iVar24);
						Global_2405070.f_2474.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_77(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
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

float func_78(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
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
		if (func_1072(PLAYER::PLAYER_ID(), 1, 1))
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
		if (func_1072(iVar1, 1, 1))
		{
			if (!func_146(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_79(iVar1) || !bParam8)
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

int func_79(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2423801[iParam0 /*413*/].f_245)
	{
		return 1;
	}
	return 0;
}

void func_80(struct<10> Param0, int iParam10)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2405070.f_2474.f_6[iParam10 /*10*/] };
	Global_2405070.f_2474.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_80(Var0, iParam10 + 1);
	}
}

void func_81(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;
	
	Var1.f_2 = 1176256410;
	iVar11 = func_75();
	if (Param0 > iVar11)
	{
		iVar11 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] < iVar11)
		{
			Global_2407969[iVar0 /*10*/] = { Var1 };
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
		if (Global_2407969[iVar0 /*10*/] == 0)
		{
			Global_2407969[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2407969[iVar0 /*10*/] > 0)
		{
			if (Global_2407969[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2407969[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2407969[iVar13 /*10*/] = { Param0 };
	}
}

float func_82(vector3 vParam0, bool bParam3, bool bParam4, int iParam5, bool bParam6)
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
		if (func_1072(iVar11, 1, 1))
		{
			if (!iVar11 == PLAYER::PLAYER_ID() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_84(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar11) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar11) == -1 || !func_61(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar11) || !bParam6)
					{
						if (func_79(iVar11))
						{
							vVar5 = { func_83(iVar11) };
							if (!iVar11 == PLAYER::PLAYER_ID())
							{
								vVar8 = { unk_0x125E6D638B8605D4(PLAYER::GET_PLAYER_PED(iVar11)) };
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

Vector3 func_83(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_84(int iParam0)
{
	if (func_1072(iParam0, 0, 1))
	{
		if (!func_91(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_41(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_90(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
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
					if (!func_41(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_85(iParam0))
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

int func_85(int iParam0)
{
	if (func_89(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2503649 = { func_88(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2503649))
	{
		return 1;
	}
	if (func_86(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_87(iParam0);
	if (!iVar0 == func_22())
	{
		if (iVar0 == func_87(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_87(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_1625435[iParam0 /*560*/].f_11;
	}
	return func_22();
}

struct<13> func_88(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_89(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2503649 = { func_88(iParam0) };
		Global_2503662 = { func_88(iParam1) };
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

int func_90(int iParam0, int iParam1, int iParam2)
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

int func_91(int iParam0)
{
	if (func_146(iParam0, 0))
	{
		return 1;
	}
	if (func_92())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_92()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

float func_93(vector3 vParam0)
{
	var uVar0;
	
	return func_94(vParam0, &(Global_2405070.f_44), &uVar0);
}

float func_94(vector3 vParam0, var uParam3, var uParam4)
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
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2405070.f_2717) * (uParam3[iVar0 /*12*/])->f_8)));
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

float func_95(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
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
		fVar0 = func_77(SYSTEM::VDIST(vParam0, vParam3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_82(vParam0, 1, 0, 0, 1);
	fVar0 = func_77(fVar4, 0f, func_102(), func_100(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_98(vParam0);
	fVar0 = func_77(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_61(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_97(vParam0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_77(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_96(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_77(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_77(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_77(SYSTEM::VDIST(Global_2405070.f_506, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_96(vector3 vParam0, var uParam3, var uParam4)
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

float func_97(vector3 vParam0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_1072(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_1072(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam3) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam3) == -1))
					{
						if (Global_2417554.f_261[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_2417554.f_131[iVar2 /*3*/], vParam0);
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

float func_98(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar6, -1);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar2], 0))
			{
				if (func_99(uVar6[iVar2]))
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
	return fVar0;
}

int func_99(var uParam0)
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
	if (unk_0xCC6E3B6BB69501F1(Global_1574948[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1574948[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (unk_0xCC6E3B6BB69501F1(Global_1574658[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(uVar0, Global_1574658[iVar1]))
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

float func_100()
{
	if (func_101())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405070.f_44.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405070.f_44.f_67)) || Global_2405070.f_44.f_67 == joaat("rhino"))
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

int func_101()
{
	if (Global_2405070.f_44.f_65 && !Global_2405070.f_44.f_301)
	{
		if (!func_91(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_102()
{
	if (func_101())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2405070.f_44.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2405070.f_44.f_67)) || Global_2405070.f_44.f_67 == joaat("rhino"))
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

int func_103(vector3 vParam0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
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

int func_104(var uParam0, vector3 vParam1, vector3 vParam4, var uParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_108(*uParam0, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_107(*uParam0, uParam0->f_3, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_105(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam4, uParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_105(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, vector3 vParam10, var uParam13)
{
	vector3 vVar0[8];
	int iVar25;
	
	func_106(vParam0, vParam3, fParam6, &vVar0);
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

void func_106(vector3 vParam0, vector3 vParam3, float fParam6, var uParam7)
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
	vVar3 = { func_28(vVar0, vVar0.x, vVar0.y, 0f) };
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

int func_107(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9, var uParam12)
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

int func_108(vector3 vParam0, float fParam3, vector3 vParam4, vector3 vParam7, var uParam10)
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

void func_109(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	
	vVar1 = { vParam0 };
	iVar4 = func_30(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_2411257[iVar4])
	{
		if (func_29(vVar1, &(Global_2410113[iVar4 /*127*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410113[iVar4 /*127*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410113[iVar4 /*127*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410113[iVar4 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411257[8])
	{
		if (func_29(vVar1, &(Global_2410113[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2410113[8 /*127*/][iVar0 /*7*/] };
			*uParam4 = { Global_2410113[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2410113[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_110(vector3 vParam0)
{
	var uVar0;
	int iVar1;
	
	if (Global_2405070.f_44.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2405070.f_44.f_56))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				uVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(uVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(uVar0);
					if (!iVar1 == Global_2405070.f_44.f_57)
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

int func_111(vector3 vParam0)
{
	switch (Global_2405070.f_2470)
	{
		case 0:
			return func_149(vParam0, Global_2405070.f_2449, Global_2405070.f_2452, 0, 0);
			break;
		
		case 1:
			return func_64(vParam0, Global_2405070.f_2463, Global_2405070.f_2466, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_2405070.f_2463, Global_2405070.f_2466, Global_2405070.f_2469, 0, 1);
			break;
	}
	return 0;
}

int func_112(vector3 vParam0, var uParam3, var uParam4, float fParam5)
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

int func_113(var uParam0, var uParam1, bool bParam2, float fParam3)
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
				func_45(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (Global_1312447)
	{
		case 0:
			if (!func_115(iParam0))
			{
				if (Global_1589747[iParam0 /*790*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_115(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_196 != 0;
}

int func_116(int iParam0)
{
	if (func_41(iParam0, 1))
	{
		if (Global_1589747[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_117(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2405070.f_2608[iVar0 /*3*/], vParam0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_118(var uParam0, bool bParam1)
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
			func_45(&vVar1, Global_2405070.f_584, Global_2405070.f_587, 1036831949, 0, fVar4);
			if (func_52(vVar1, &uVar0) || func_48(vVar1))
			{
				vVar1 = { *uParam0 };
				func_45(&vVar1, Global_2405070.f_584, Global_2405070.f_587, 1036831949, 1, fVar4);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_119(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1072(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_120(PLAYER::PLAYER_ID()), vParam0, 1) <= (fVar2 + fParam3))
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
		if (func_1072(iVar1, 1, 1))
		{
			if (!func_146(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_79(iVar1) || !bParam10) && !Global_2423801[iVar1 /*413*/].f_259)
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
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_120(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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
							if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_120(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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

Vector3 func_120(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_122() && Global_1589747[iVar0 /*790*/].f_761) && !func_121(Global_1589747[iVar0 /*790*/].f_762))
	{
		return Global_1589747[iVar0 /*790*/].f_762;
	}
	return func_83(iParam0);
}

int func_121(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_122()
{
	return Global_2448386.f_16;
}

int func_123(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_125(vParam0, fParam3, iParam4, iParam5, 0) || func_124(vParam0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_124(vector3 vParam0, int iParam3, int iParam4)
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
				if (!Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_32(vParam0, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_1072(iVar2, 0, 1) && func_1072(iParam3, 0, 1))
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

int func_125(vector3 vParam0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_1072(iVar1, 0, 1) && func_1072(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1072(iVar1, 0, 1) && func_1072(iParam4, 0, 1))
				{
					if (Global_2417554.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417554.f_131[iVar0 /*3*/], vParam0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_83(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417554.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417554.f_131[iVar0 /*3*/], vParam0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1072(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_83(iVar1), vParam0) < 1f)
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

int func_126(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, int iParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2405070.f_3 = 0;
	if (!func_123(vParam0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2405070.f_3++;
		if (bParam5)
		{
			if (func_177(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
				if (!func_130(vParam0, fParam12))
				{
					Global_2405070.f_3++;
					if (!func_31(vParam0, 1056964608))
					{
						Global_2405070.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_177(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
				if (!func_130(vParam0, fParam12))
				{
					Global_2405070.f_3++;
					if (!func_127(vParam0, fParam3, fParam9, iParam10, 1084227584))
					{
						Global_2405070.f_3++;
						if (!func_31(vParam0, 1056964608))
						{
							Global_2405070.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			}
		}
		else if (func_177(vParam0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
			if (!func_130(vParam0, fParam12))
			{
				Global_2405070.f_3++;
				if (!func_127(vParam0, fParam3, fParam9, iParam10, fParam11))
				{
					Global_2405070.f_3++;
					if (!func_31(vParam0, 1056964608))
					{
						Global_2405070.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2405070.f_3 = (Global_2405070.f_3 + Global_2405070.f_2);
		}
	}
	return 0;
}

int func_127(vector3 vParam0, float fParam3, float fParam4, var uParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_1072(iVar1, 1, 1) && func_79(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_129(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_128(func_83(iVar1), vParam0, fParam3, fParam4, uParam5, fParam6))
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

bool func_128(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, var uParam8, float fParam9)
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

bool func_129(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_130(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_1072(iVar1, 1, 1) && func_79(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_61(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_129(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_83(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_131(int iParam0)
{
	if ((Global_2405070.f_483 == 9 || Global_2405070.f_483 == 9) || (Global_2405070.f_483 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_132(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_1072(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_79(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_85(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_83(iVar1), vParam0, 1) < fParam3)
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

int func_133(vector3 vParam0, float fParam3, int iParam4, float fParam5)
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
			if (func_1072(iVar1, 1, 1))
			{
				if ((!func_146(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
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
						if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(func_83(iVar1), vParam0, 1) <= (fVar2 + fParam3))
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

int func_134(int iParam0)
{
	if (((func_61(iParam0, 1) || func_137(iParam0)) || func_136(iParam0, 0)) || func_135(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (!func_1072(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_35;
}

int func_136(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/] != -1;
	}
	return 0;
}

void func_138(vector3 vParam0, var uParam3, var uParam4)
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
					func_140(&Var3, uParam3, iVar0);
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
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5945[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_262145.f_5945[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_140(&Var3, uParam3, iVar0);
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
	while (iVar1 < 12)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_5991[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_262145.f_5991[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_140(&Var3, uParam3, iVar0);
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
				func_139(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_139(var uParam0, var uParam1, int iParam2)
{
	Global_2412262 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_139(&Global_2412262, uParam1, iParam2 + 1);
	}
}

void func_140(var uParam0, var uParam1, int iParam2)
{
	Global_2412258 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_140(&Global_2412258, uParam1, iParam2 + 1);
	}
}

void func_141(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	
	if (Global_2405070.f_2245 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_2245)
		{
			if (func_142(Global_2405070.f_2246[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2405070.f_2246[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_2405070.f_2246[iVar0 /*4*/] };
					fVar4 = GAMEPLAY::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_76(Global_2405070.f_2246[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, -1);
				Global_2405070.f_2474++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2405070.f_2871)
	{
		func_70(&(Global_2405070.f_2474.f_6[0 /*10*/]), &(Global_2405070.f_2474.f_6[1 /*10*/]), &(Global_2405070.f_2474.f_6[2 /*10*/]));
	}
}

int func_142(vector3 vParam0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_19(vParam0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_19(vParam0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_143(vector3 vParam0, vector3 vParam3, var uParam6, var uParam7, var uParam8)
{
	float fVar0;
	
	func_65(&vParam0, &vParam3);
	fVar0 = (vParam3.x - vParam0.x);
	*uParam6 = (vParam0.x + (fVar0 * 0.5f));
	uParam6->f_1 = vParam0.y;
	uParam6->f_2 = vParam0.z;
	*uParam7 = *uParam6;
	uParam7->f_1 = vParam3.y;
	uParam7->f_2 = vParam3.z;
	*uParam8 = (fVar0 * 0.5f);
}

var func_144()
{
	return Global_1310987.f_4;
}

void func_145(var uParam0, var uParam1)
{
	func_184();
	func_176(uParam0, uParam1);
}

bool func_146(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_147(-1, 0) == 8;
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

int func_147(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_148();
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

int func_148()
{
	return Global_1312736;
}

bool func_149(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7, bool bParam8)
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

void func_150(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405070.f_1737 > 0)
	{
		iVar0 = 0;
		while (func_172(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_151(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_151(var uParam0, var uParam1, var uParam2)
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
		if (func_44(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_171(uParam0, 1))
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
	Global_2412272.f_162 = 0;
	Global_2412272.f_163 = 0;
	Global_2412272.f_164 = -99;
	Global_2412272.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412272[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412272.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_37(uParam2->f_34) != 0)
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
			if (Global_2412272.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412272.f_165 = { vVar1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::_GET_IS_SLOW_ROAD_FLAG(iVar8)) || PATHFIND::_GET_SUPPORTS_GPS_ROUTE_FLAG(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(vVar1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_118(&vVar1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_170(vVar1))
									{
										vVar1 = { func_166(vVar1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_31(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (vVar1.z <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_165(vVar1, uParam2))
														{
															if ((uParam2->f_48 && !func_171(&vVar1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_161(vVar1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_44(uParam2->f_35, &vVar1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_160(vVar1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_177(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_177(vVar1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_158(vVar1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_157(vVar1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412272.f_162)
																										{
																											Global_2412272[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412272.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412272.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412272.f_162 == 0)
																									{
																										Global_2412272[0 /*3*/] = { vVar1 };
																										Global_2412272.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412272.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412272[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_156(vVar1, fVar4, iVar16);
																													iVar16 = Global_2412272.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412272.f_162++;
																									if (Global_2412272.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412272.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412272[Global_2412272.f_162 /*3*/] = { vVar1 };
																									Global_2412272.f_121[Global_2412272.f_162] = fVar4;
																									Global_2412272.f_162++;
																									if (func_165(vVar1, uParam2))
																									{
																										Global_2412272.f_163++;
																									}
																									if (Global_2412272.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412272.f_162 == 40)
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
				if (Global_2412272.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412272[0 /*3*/] };
						*uParam1 = Global_2412272.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412272.f_163 > 0 && !Global_2412272.f_163 == Global_2412272.f_162)
						{
							func_154(0, uParam2);
						}
						iVar26 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2412272.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						vVar27 = { Global_2412272[0 /*3*/] };
						uVar30 = Global_2412272.f_121[0];
						Global_2412272[0 /*3*/] = { Global_2412272[iVar26 /*3*/] };
						Global_2412272.f_121[0] = Global_2412272.f_121[iVar26];
						Global_2412272[iVar26 /*3*/] = { vVar27 };
						Global_2412272.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412272[0 /*3*/] };
						*uParam1 = Global_2412272.f_121[0];
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
						func_153(iVar15, *uParam0, &iVar0, &vVar1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
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
						if (func_44(uParam2->f_35, &vVar31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_171(&vVar31, bVar35))
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
				func_152(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412272.f_164 = iVar8;
	}
	return 0;
}

void func_152(var uParam0, var uParam1, var uParam2, vector3 vParam3)
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
			if (!func_123(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
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

void func_153(int iParam0, vector3 vParam1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_166(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_170(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_154(int iParam0, var uParam1)
{
	if (!func_165(Global_2412272[iParam0 /*3*/], uParam1))
	{
		Global_2412272.f_162 = (Global_2412272.f_162 - 1);
		func_155(iParam0);
		if (Global_2412272.f_162 > Global_2412272.f_163)
		{
			func_154(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_154(iParam0 + 1, uParam1);
	}
}

void func_155(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412272[iParam0 /*3*/] = { Global_2412272[iParam0 + 1 /*3*/] };
			Global_2412272.f_121[iParam0] = Global_2412272.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_156(vector3 vParam0, float fParam3, int iParam4)
{
	vector3 vVar0;
	var uVar3;
	
	vVar0 = { Global_2412272[iParam4 /*3*/] };
	uVar3 = Global_2412272.f_121[iParam4];
	Global_2412272[iParam4 /*3*/] = { vParam0 };
	Global_2412272.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412272.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_156(vVar0, uVar3, iParam4 + 1);
		}
	}
}

int func_157(vector3 vParam0, float fParam3, float fParam4)
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
		if (func_84(iVar5))
		{
			vVar1 = { func_83(iVar5) };
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

int func_158(vector3 vParam0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
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
			if (func_1072(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_79(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_85(iVar1))
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
										if (func_159(vParam0, fParam3, iParam4, vVar5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_32(func_83(iVar1), vParam0, fParam3, iParam4, fVar2))
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

int func_159(vector3 vParam0, float fParam3, int iParam4, vector3 vParam5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	vector3 vVar23;
	vector3 vVar26;
	
	if (func_32(vParam0, vParam5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_34(iParam4, &vVar14, &vVar17, 1086324736, 1080033280, 1077936128);
	vVar20 = { 0f, vVar17.y, 0f };
	func_39(&vVar20, 0f, 0f, fParam3);
	vVar23 = { 0f, vVar14.y, 0f };
	func_39(&vVar23, 0f, 0f, fParam3);
	vVar26 = { (GAMEPLAY::ABSF((vVar17.x - vVar14.x)) * 0.5f), 0f, 0f };
	func_39(&vVar26, 0f, 0f, fParam3);
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
		if (func_32(vVar1[iVar0 /*3*/], vParam5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_159(vParam5, fParam8, iParam9, vParam0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_160(vector3 vParam0, float fParam3, int iParam4)
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
		if (func_159(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
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
		if (func_159(vParam0, fParam3, iParam4, vVar3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_161(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_164(vParam0, fParam3, iParam4, iParam5, iParam6) || func_162(vParam0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_162(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (func_163(vParam0, iParam4, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_159(vParam0, fParam3, iParam4, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417554.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1072(iVar2, 0, 1) && func_1072(iParam5, 0, 1))
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

int func_163(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_40(iParam3, 1008981770);
	fVar1 = func_40(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_164(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_1072(iVar1, 0, 1) && func_1072(iParam5, 0, 1))
			{
				if (Global_2417554.f_261[iVar0])
				{
					if (func_32(Global_2417554.f_131[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_32(func_83(iVar1), vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417554.f_261[iVar0])
			{
				if (func_32(Global_2417554.f_131[iVar0 /*3*/], vParam0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1072(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_32(func_83(iVar1), vParam0, fParam3, iParam4, 1036831949))
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

int func_165(vector3 vParam0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_149(vParam0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_64(vParam0, uParam3->f_19, uParam3->f_22, 0, 0))
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

Vector3 func_166(vector3 vParam0, var uParam3, int iParam4, bool bParam5, vector3 vParam6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_169(vParam0, *uParam3, vParam6))
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
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_168(vParam0))
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
					fVar14 = func_167(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_167(iParam11, 1.5f);
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
		if (!func_169(vParam0, *uParam3, vParam6))
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
					fVar14 = func_167(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_167(iParam11, 1.5f);
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

float func_167(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_34(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_168(vector3 vParam0)
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

int func_169(vector3 vParam0, float fParam3, vector3 vParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { 0f, 1f, 0f };
	func_39(&vVar0, 0f, 0f, fParam3);
	vVar3 = { vParam4 - vParam0 };
	if (func_27(vVar3, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_170(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_30(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_2411979[iVar1])
	{
		if (func_29(vParam0, &(Global_2411276[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411979[8])
	{
		if (func_29(vParam0, &(Global_2411276[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_171(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405070.f_26.f_17)
	{
		switch (Global_2405070.f_26.f_16)
		{
			case 0:
				if (func_149(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_15, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_64(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, Global_2405070.f_26.f_15, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_51(*uParam0, Global_2405070.f_26.f_9, Global_2405070.f_26.f_12, Global_2405070.f_26.f_15, Global_2405070.f_26.f_16, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_172(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2405070.f_1737 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_44(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_171(uParam0, 1))
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
		Global_2412272.f_162 = 0;
		Global_2412272.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412272[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412272.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_173(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405070.f_1737)
		{
			iVar1 = Global_2405070.f_2143[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				vVar2 = { Global_2405070.f_1738[iVar1 /*4*/] };
				fVar5 = Global_2405070.f_1738[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(vVar2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_161(vVar2, fVar5, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_44(uParam2->f_35, &vVar2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_160(vVar2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_177(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_177(vVar2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_158(vVar2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar12 = func_157(vVar2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412272.f_162)
															{
																Global_2412272[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412272.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412272.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412272.f_162 == 0)
														{
															Global_2412272[0 /*3*/] = { vVar2 };
															Global_2412272.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412272.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_35) < SYSTEM::VDIST2(Global_2412272[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_156(vVar2, fVar5, iVar6);
																		iVar6 = Global_2412272.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412272.f_162++;
														if (Global_2412272.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405070.f_1737;
															}
															else if (Global_2412272.f_162 == 40)
															{
																iVar0 = Global_2405070.f_1737;
															}
														}
													}
													else
													{
														Global_2412272[Global_2412272.f_162 /*3*/] = { vVar2 };
														Global_2412272.f_121[Global_2412272.f_162] = fVar5;
														Global_2412272.f_162++;
														if (Global_2412272.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405070.f_1737;
															}
															else if (Global_2412272.f_162 == 40)
															{
																iVar0 = Global_2405070.f_1737;
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
		if (Global_2412272.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412272[0 /*3*/] };
				*uParam1 = Global_2412272.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412272.f_163 > 0 && !Global_2412272.f_163 == Global_2412272.f_162)
				{
					func_154(0, uParam2);
				}
				iVar14 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, Global_2412272.f_162);
				vVar15 = { Global_2412272[0 /*3*/] };
				uVar18 = Global_2412272.f_121[0];
				Global_2412272[0 /*3*/] = { Global_2412272[iVar14 /*3*/] };
				Global_2412272.f_121[0] = Global_2412272.f_121[iVar14];
				Global_2412272[iVar14 /*3*/] = { vVar15 };
				Global_2412272.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412272[0 /*3*/] };
				*uParam1 = Global_2412272.f_121[0];
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

void func_173(vector3 vParam0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405070.f_1737)
	{
		uVar1 = func_174(vParam0, fVar0, &fVar0);
		Global_2405070.f_2143[iVar2] = uVar1;
		iVar2++;
	}
}

int func_174(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405070.f_1737)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_2405070.f_1738[iVar3 /*4*/]);
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

bool func_175(int iParam0)
{
	return iParam0 == 50;
}

void func_176(var uParam0, var uParam1)
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
	Global_2405070.f_2457 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405070.f_2455 = 1;
	Global_2405070.f_2458 = NETWORK::GET_NETWORK_TIME();
}

int func_177(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405070.f_2 = 0;
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
	Global_2405070.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (fParam14 > 0f)
	{
		if (func_132(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405070.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_119(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405070.f_2++;
	return 1;
}

void func_178()
{
	func_183();
	func_182();
	func_181();
	func_180();
	func_179();
}

void func_179()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2407969[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_180()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2405070.f_2474.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_181()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2405070.f_2474.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_182()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2405070.f_2474.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_183()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2405070.f_2474 = { Var0 };
}

void func_184()
{
	if (Global_2405070.f_2455)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_2457)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2405070.f_2455 = 0;
	}
}

int func_185(bool bParam0)
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

Vector3 func_186()
{
	return Local_206.f_38[Local_206.f_36 /*3*/];
}

void func_187()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	bVar1 = false;
	if (Local_206 != 4)
	{
		iLocal_461 = 0;
		while (iLocal_461 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_461)))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_461));
				if (func_1072(iVar2, 1, 1))
				{
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_206.f_1, 1))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_266[iLocal_461 /*6*/].f_1, 2))
					{
						if (Local_206.f_37 != iVar2)
						{
							Local_206.f_37 = iVar2;
						}
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_206.f_1, 1))
				{
					if (Local_266[iLocal_461 /*6*/].f_5 > 0)
					{
						iVar0 = (iVar0 + Local_266[iLocal_461 /*6*/].f_5);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_206.f_1, 4))
				{
					if (GAMEPLAY::IS_BIT_SET(Local_266[iLocal_461 /*6*/].f_1, 5))
					{
						GAMEPLAY::SET_BIT(&(Local_206.f_1), 4);
						Local_206.f_35 = iVar2;
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(Local_206.f_1, 2))
				{
					if (!bVar1)
					{
						if (((GAMEPLAY::IS_BIT_SET(Local_206.f_1, 1) || GAMEPLAY::IS_BIT_SET(Local_206.f_1, 3)) || GAMEPLAY::IS_BIT_SET(Local_206.f_1, 4)) || GAMEPLAY::IS_BIT_SET(Local_206.f_1, 5))
						{
							if (!GAMEPLAY::IS_BIT_SET(Local_266[iLocal_461 /*6*/].f_1, 4))
							{
								bVar1 = true;
							}
						}
						else
						{
							bVar1 = true;
						}
					}
				}
			}
			else if (!GAMEPLAY::IS_BIT_SET(Local_206.f_1, 5))
			{
				if (Local_206.f_33 > -1)
				{
					if (iLocal_461 == Local_206.f_33)
					{
						GAMEPLAY::SET_BIT(&(Local_206.f_1), 5);
					}
				}
			}
			iLocal_461++;
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_206.f_1, 1))
		{
			iVar0 = (iVar0 + Local_206.f_6);
			if (iVar0 >= func_188())
			{
				GAMEPLAY::SET_BIT(&(Local_206.f_1), 1);
			}
			if (Local_206.f_5 != iVar0)
			{
				if (Local_206.f_5 < iVar0)
				{
					Local_206.f_5 = iVar0;
				}
				else if (Local_206.f_6 != (Local_206.f_5 - iVar0))
				{
					Local_206.f_6 = (Local_206.f_5 - iVar0);
				}
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(Local_206.f_1, 2))
		{
			if (!bVar1)
			{
				GAMEPLAY::SET_BIT(&(Local_206.f_1), 2);
			}
		}
	}
}

int func_188()
{
	return Global_262145.f_12391;
}

int func_189()
{
	int iVar0;
	int iVar1;
	
	if (func_193() != -1)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_192(Local_206.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				iVar1 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 20);
				if (func_190(iVar1))
				{
					Local_206.f_38[iVar0 /*3*/] = { vLocal_772[iVar1 /*3*/] };
					vLocal_772[iVar1 /*3*/] = { 0f, 0f, 0f };
				}
			}
			iVar0++;
		}
	}
	else
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_192(Local_206.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_190(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_192(vLocal_772[iParam0 /*3*/], 0f, 0f, 0f, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iVar0 < iParam0)
		{
			if (!func_192(Local_206.f_38[iVar0 /*3*/], 0f, 0f, 0f, 0))
			{
				fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Local_206.f_38[iVar0 /*3*/], vLocal_772[iParam0 /*3*/], 1);
				if (fVar1 < func_191())
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

float func_191()
{
	return SYSTEM::TO_FLOAT(Global_262145.f_12392);
}

bool func_192(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_193()
{
	int iVar0;
	
	if (Local_206.f_48 != -1)
	{
		return Local_206.f_48;
	}
	iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (!func_195(iVar0))
	{
		Local_206.f_48 = iVar0;
		func_194();
	}
	return Local_206.f_48;
}

void func_194()
{
	switch (Local_206.f_48)
	{
		case 0:
			vLocal_772[0 /*3*/] = { 959.4771f, -1673.839f, 29.0562f };
			vLocal_772[1 /*3*/] = { 711.3848f, -1230.569f, 25.5556f };
			vLocal_772[2 /*3*/] = { 282.5148f, -217.2699f, 62.4801f };
			vLocal_772[3 /*3*/] = { 388.7341f, -356.1966f, 47.023f };
			vLocal_772[4 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			vLocal_772[5 /*3*/] = { 1112.403f, -645.8195f, 55.8211f };
			vLocal_772[6 /*3*/] = { 175.7449f, 557.355f, 179.142f };
			vLocal_772[7 /*3*/] = { 1061.679f, 214.6577f, 83.9904f };
			vLocal_772[8 /*3*/] = { 768.462f, 1279.458f, 359.2967f };
			vLocal_772[9 /*3*/] = { 2590.469f, 486.6694f, 107.69f };
			vLocal_772[10 /*3*/] = { 2820.659f, -760.044f, 1.4262f };
			vLocal_772[11 /*3*/] = { 1169.637f, -1382.508f, 33.7916f };
			vLocal_772[12 /*3*/] = { 1590.301f, -1691.78f, 87.103f };
			vLocal_772[13 /*3*/] = { 857.6887f, -2497.098f, 27.3195f };
			vLocal_772[14 /*3*/] = { 1292.737f, -3097.068f, 4.9066f };
			vLocal_772[15 /*3*/] = { 590.4111f, -2902.535f, 5.2464f };
			vLocal_772[16 /*3*/] = { 491.5606f, -2122.398f, 4.9175f };
			vLocal_772[17 /*3*/] = { 210.1278f, -937.7384f, 23.1416f };
			vLocal_772[18 /*3*/] = { 483.4742f, -1480.009f, 28.2904f };
			vLocal_772[19 /*3*/] = { 2288.854f, 1727.706f, 67.0398f };
			break;
		
		case 1:
			vLocal_772[0 /*3*/] = { -884.5568f, -2477.55f, 12.9877f };
			vLocal_772[1 /*3*/] = { -81.4004f, -2707.403f, 5.4398f };
			vLocal_772[2 /*3*/] = { -176.0256f, -633.2856f, 47.9812f };
			vLocal_772[3 /*3*/] = { -777.4452f, 20.5786f, 39.6541f };
			vLocal_772[4 /*3*/] = { -2333.458f, 237.6722f, 168.602f };
			vLocal_772[5 /*3*/] = { -1096.042f, -323.1984f, 36.8237f };
			vLocal_772[6 /*3*/] = { -822.8544f, -1222.888f, 6.3704f };
			vLocal_772[7 /*3*/] = { -590.8558f, -911.0305f, 22.8747f };
			vLocal_772[8 /*3*/] = { -110.7806f, 356.4308f, 111.6961f };
			vLocal_772[9 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			vLocal_772[10 /*3*/] = { -330.9974f, -1314.573f, 30.5497f };
			vLocal_772[11 /*3*/] = { -255.1383f, -1543.092f, 30.9032f };
			vLocal_772[12 /*3*/] = { -1659.014f, 235.419f, 61.391f };
			vLocal_772[13 /*3*/] = { -3276.446f, 967.604f, 7.3522f };
			vLocal_772[14 /*3*/] = { -1997.696f, -257.592f, 28.0968f };
			vLocal_772[15 /*3*/] = { -388.8625f, -2282.671f, 6.6082f };
			vLocal_772[16 /*3*/] = { -1048.599f, -1120.179f, 1.1586f };
			vLocal_772[17 /*3*/] = { -287.5583f, 11.2136f, 53.7525f };
			vLocal_772[18 /*3*/] = { -481.1961f, 1101.528f, 324.8545f };
			vLocal_772[19 /*3*/] = { -1521.989f, 1493.556f, 110.593f };
			break;
		
		case 2:
			vLocal_772[0 /*3*/] = { -1585.629f, 2084.206f, 71.3231f };
			vLocal_772[1 /*3*/] = { -2188.034f, 4249.606f, 47.9395f };
			vLocal_772[2 /*3*/] = { -685.67f, 5794.155f, 16.331f };
			vLocal_772[3 /*3*/] = { -329.5496f, 6150.002f, 31.3133f };
			vLocal_772[4 /*3*/] = { -275.9802f, 6637.051f, 6.4552f };
			vLocal_772[5 /*3*/] = { -800.4709f, 5392.421f, 33.4985f };
			vLocal_772[6 /*3*/] = { -59.013f, 4416.56f, 55.8893f };
			vLocal_772[7 /*3*/] = { -207.2786f, 3658.027f, 50.7524f };
			vLocal_772[8 /*3*/] = { -596.9946f, 2091.172f, 130.4128f };
			vLocal_772[9 /*3*/] = { -2080.822f, 2608.639f, 2.089f };
			vLocal_772[10 /*3*/] = { -1622.297f, 3191.923f, 29.2567f };
			vLocal_772[11 /*3*/] = { -1098.166f, 2725.338f, 17.8007f };
			vLocal_772[12 /*3*/] = { -31.1729f, 1953.42f, 189.1861f };
			vLocal_772[13 /*3*/] = { -281.9674f, 2847.181f, 52.8867f };
			vLocal_772[14 /*3*/] = { -1633.186f, 4736.728f, 52.2963f };
			vLocal_772[15 /*3*/] = { -520.748f, 5307.176f, 79.2448f };
			vLocal_772[16 /*3*/] = { 50.1324f, 7117.781f, 2.1957f };
			vLocal_772[17 /*3*/] = { 163.8223f, 6654.26f, 30.5682f };
			vLocal_772[18 /*3*/] = { 59.0807f, 6310.772f, 30.3764f };
			vLocal_772[19 /*3*/] = { -1901.756f, 1911.103f, 165.2867f };
			break;
		
		case 3:
			vLocal_772[0 /*3*/] = { 721.9799f, 2314.477f, 49.4146f };
			vLocal_772[1 /*3*/] = { 376.9765f, 2628.43f, 43.6444f };
			vLocal_772[2 /*3*/] = { 1535.214f, 6597.865f, 2.1543f };
			vLocal_772[3 /*3*/] = { 2446.757f, 4963.825f, 45.5766f };
			vLocal_772[4 /*3*/] = { 2467.821f, 4080.605f, 37.0648f };
			vLocal_772[5 /*3*/] = { 1648.711f, 3811.429f, 37.6556f };
			vLocal_772[6 /*3*/] = { 1297.271f, 4342.019f, 40.3207f };
			vLocal_772[7 /*3*/] = { 1541.145f, 6335.578f, 23.0751f };
			vLocal_772[8 /*3*/] = { 2014.187f, 4721.405f, 40.609f };
			vLocal_772[9 /*3*/] = { 3800.848f, 4475.054f, 4.9977f };
			vLocal_772[10 /*3*/] = { 2661.859f, 3467.084f, 54.8171f };
			vLocal_772[11 /*3*/] = { 430.2967f, 6467.513f, 27.7718f };
			vLocal_772[12 /*3*/] = { 2930.072f, 4623.018f, 47.7272f };
			vLocal_772[13 /*3*/] = { 2973.685f, 3480.115f, 70.4423f };
			vLocal_772[14 /*3*/] = { 1989.081f, 3781.611f, 31.1808f };
			vLocal_772[15 /*3*/] = { 908.6296f, 3648.458f, 35.1522f };
			vLocal_772[16 /*3*/] = { 1560.581f, 2167.013f, 77.7169f };
			vLocal_772[17 /*3*/] = { 1230.12f, 2742.618f, 37.0054f };
			vLocal_772[18 /*3*/] = { 2545.243f, 2588.249f, 36.9449f };
			vLocal_772[19 /*3*/] = { 260.401f, 3180.358f, 41.6992f };
			break;
	}
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_12334;
		
		case 1:
			return Global_262145.f_12335;
		
		case 2:
			return Global_262145.f_12333;
		
		case 3:
			return Global_262145.f_12332;
		
		default:
	}
	return 0;
}

int func_196(var uParam0)
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

void func_197(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_8(uParam0, 0, 0);
		}
	}
}

void func_198()
{
	func_200();
	if (GAMEPLAY::IS_BIT_SET(uLocal_460, 9))
	{
		return;
	}
	if (func_973())
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 0))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			GAMEPLAY::SET_BIT(&uLocal_460, 0);
		}
		if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 1))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_START"))
			{
				GAMEPLAY::SET_BIT(&uLocal_460, 1);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_460, 1))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 3))
			{
				if (Local_206.f_5 == 1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_MID"))
					{
						GAMEPLAY::SET_BIT(&uLocal_460, 3);
					}
				}
			}
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_460, 3))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 4))
			{
				if (Local_206.f_5 == 2)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_FINAL"))
					{
						GAMEPLAY::SET_BIT(&uLocal_460, 4);
					}
				}
			}
		}
		if (GAMEPLAY::IS_BIT_SET(Local_206.f_1, 1) || GAMEPLAY::IS_BIT_SET(Local_206.f_1, 4))
		{
			if (GAMEPLAY::IS_BIT_SET(uLocal_460, 4))
			{
				if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 6))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP"))
					{
						GAMEPLAY::SET_BIT(&uLocal_460, 6);
						GAMEPLAY::SET_BIT(&uLocal_460, 2);
						AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
						AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
					}
				}
			}
		}
	}
	if (func_405())
	{
		if (func_199(PLAYER::PLAYER_ID(), 20))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 0))
			{
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
				GAMEPLAY::SET_BIT(&uLocal_460, 0);
			}
			if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 7))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_START_ATTACK"))
				{
					GAMEPLAY::SET_BIT(&uLocal_460, 7);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Local_206.f_1, 1) || GAMEPLAY::IS_BIT_SET(Local_206.f_1, 4))
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_460, 7))
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 6))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP"))
						{
							GAMEPLAY::SET_BIT(&uLocal_460, 6);
							GAMEPLAY::SET_BIT(&uLocal_460, 2);
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
						}
					}
				}
			}
		}
	}
}

bool func_199(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_4, iParam1);
}

void func_200()
{
	if (GAMEPLAY::IS_BIT_SET(uLocal_460, 8))
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_460, 9))
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 10))
			{
				if (GAMEPLAY::IS_BIT_SET(uLocal_460, 11))
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 15))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						GAMEPLAY::SET_BIT(&uLocal_460, 15);
					}
				}
				if (GAMEPLAY::IS_BIT_SET(uLocal_460, 15))
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							GAMEPLAY::SET_BIT(&uLocal_460, 13);
						}
					}
					if (GAMEPLAY::IS_BIT_SET(uLocal_460, 13))
					{
						GAMEPLAY::SET_BIT(&uLocal_460, 10);
					}
				}
			}
		}
	}
}

void func_201()
{
	vector3 vVar0;
	var uVar3;
	
	if (!func_973() && !func_405())
	{
		return;
	}
	if (Local_206.f_34 > -1)
	{
		uVar3 = PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uVar3))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uVar3), 0) };
		}
	}
	if (!func_192(vVar0, 0f, 0f, 0f, 0))
	{
		func_202(142, vVar0, &uLocal_840, 1140457472, 1144750080, 0);
	}
}

void func_202(int iParam0, vector3 vParam1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if ((((func_137(PLAYER::PLAYER_ID()) && !func_253(PLAYER::PLAYER_ID())) && !GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 8)) && (func_252(PLAYER::PLAYER_ID()) || func_251(PLAYER::PLAYER_ID()))) || func_121(vParam1))
	{
		return;
	}
	Global_1666797 = { vParam1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), vParam1);
	func_247(iParam0, fVar0);
	if (UI::IS_PAUSE_MENU_ACTIVE() && UI::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_246(PLAYER::PLAYER_ID()) || func_244(PLAYER::PLAYER_ID()))
		{
			if (!UI::_0x84698AB38D0C6636(1344549371))
			{
				UI::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (UI::_0x84698AB38D0C6636(1344549371))
		{
			UI::OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_243(PLAYER::PLAYER_ID(), 21))
		{
			func_242(vParam1, 1, 0);
		}
		if (!*uParam4 && func_1072(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_241(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_240(iParam0));
				if (func_239(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 1);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 1);
					}
					GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 0);
				}
			}
			if (func_238(iParam0))
			{
				fVar1 = func_237(iParam0);
				if (fVar1 != 1f)
				{
					func_234(fVar1);
					GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_233(iParam0) && func_246(PLAYER::PLAYER_ID()))
				{
					func_231(1);
					func_230(2);
				}
			}
			func_229(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_199(PLAYER::PLAYER_ID(), 19))
			{
				func_228(19);
			}
		}
		if (*uParam4 && func_1072(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_241(iParam0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 0);
				}
			}
			if (func_238(iParam0))
			{
				func_227();
				GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 1);
			}
			if (iParam7 && !func_137(PLAYER::PLAYER_ID()))
			{
				if (func_226(PLAYER::PLAYER_ID()) != 152)
				{
					func_205();
				}
			}
			if (func_204(2))
			{
				func_231(0);
				func_203(2);
			}
		}
	}
}

void func_203(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_39), iParam0);
}

bool func_204(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_39, iParam0);
}

void func_205()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_24), &Global_2409288, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_26), &Global_2409290, 18);
	func_224();
	func_208(1, 1, 0);
	func_206();
}

void func_206()
{
	func_207(0, 0);
}

void func_207(int iParam0, int iParam1)
{
	Global_2405070.f_22 = iParam0;
	Global_2405070.f_23 = iParam1;
}

void func_208(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_44), &Global_2409308, 318);
	}
	else
	{
		Global_2405070.f_44 = { Global_2409308 };
		Global_2405070.f_44.f_49 = { Global_2409308.f_49 };
		Global_2405070.f_44.f_52 = Global_2409308.f_52;
		Global_2405070.f_44.f_53 = Global_2409308.f_53;
	}
	if (bParam0)
	{
		func_223();
	}
	if (!bParam2)
	{
		func_211(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_210(0);
	func_209();
}

void func_209()
{
	struct<6> Var0;
	
	if (Global_2405070.f_484.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405070.f_484 = { Var0 };
	}
}

void func_210(bool bParam0)
{
	if (bParam0)
	{
		Global_2405070.f_702 = 0;
	}
	else
	{
		Global_2405070.f_702 = 1;
	}
}

void func_211(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_222())
		{
			func_221();
		}
		Global_2405070.f_703.f_515 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405070.f_703.f_504 = iParam1;
		Global_2405070.f_703.f_505 = iParam2;
		Global_2405070.f_703.f_506 = iParam10;
		func_219();
		func_215(8, 0, 0, 0, 0);
		Global_2405070.f_703.f_507 = iParam11;
		Global_2405070.f_703.f_510 = iParam3;
		Global_2405070.f_703.f_511 = iParam4;
		Global_2405070.f_703.f_508 = iParam5;
		Global_2405070.f_703.f_509 = iParam6;
		Global_2405070.f_703.f_512 = iParam7;
		Global_2405070.f_703.f_513 = iParam8;
		Global_2405070.f_703.f_514 = iParam9;
		Global_2405070.f_1736 = 1;
	}
	else
	{
		func_212();
	}
}

void func_212()
{
	if (func_222() && !func_214())
	{
		func_221();
	}
	if (func_214())
	{
		func_213();
	}
	else
	{
		func_219();
		func_215(0, 0, 0, 0, 0);
		Global_2405070.f_1736 = 0;
		Global_2405070.f_1735 = 0;
	}
}

void func_213()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_703), &(Global_2405070.f_1219), 516);
	Global_2405070.f_484 = { Global_2405070.f_490 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515)
	{
		Global_2405070.f_1735 = 0;
	}
}

int func_214()
{
	if ((Global_2405070.f_1735 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_1219.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_1219.f_515))
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2437022.f_1889.f_690.f_16 != func_22())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2423801[Global_2437022.f_1889.f_690.f_16 /*413*/].f_401, 0) && func_216())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412440 = 0;
	}
	Global_2405070.f_484 = iParam0;
	Global_2405070.f_484.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405070.f_484.f_2 = iParam1;
	Global_2405070.f_484.f_3 = iParam2;
	Global_2405070.f_484.f_4 = iParam3;
	Global_2405070.f_484.f_5 = iParam4;
}

int func_216()
{
	if (((func_226(PLAYER::PLAYER_ID()) == 229 || func_226(PLAYER::PLAYER_ID()) == 191) || func_218()) || func_217())
	{
		return 0;
	}
	return 1;
}

var func_217()
{
	return Global_1574388;
}

int func_218()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_219()
{
	if (func_222() && !func_214())
	{
		func_221();
	}
	func_220();
	Global_2405070.f_703 = 0;
}

void func_220()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405070.f_703.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_221()
{
	if (func_214())
	{
		if (Global_2405070.f_703.f_515 == Global_2405070.f_1219.f_515)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_1219), &(Global_2405070.f_703), 516);
		Global_2405070.f_490 = { Global_2405070.f_484 };
		Global_2405070.f_1735 = 1;
	}
}

int func_222()
{
	if ((Global_2405070.f_1736 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405070.f_703.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405070.f_703.f_515))
	{
		return 1;
	}
	return 0;
}

void func_223()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2405070.f_362), &Global_2409626, 121);
}

void func_224()
{
	func_225();
	Global_2405070.f_2245 = 0;
}

void func_225()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405070.f_2246[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_226(int iParam0)
{
	if (func_136(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_33;
	}
	return -1;
}

void func_227()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2524719.f_4879))
	{
		if (!Global_2524719.f_4879 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2524719.f_4878 < 1f)
		{
			return;
		}
	}
	Global_2524719.f_4879 = -1;
	Global_2524719.f_4878 = 1f;
}

void func_228(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_4), iParam0);
}

void func_229(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_4), iParam0);
}

void func_230(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_2524719.f_4883.f_39), iParam0);
}

void func_231(int iParam0)
{
	if (func_232() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_232()
{
	if ((((Global_968393 != -1 && Global_968393 != 33) && Global_968393 != 35) && Global_968393 != 37) && Global_968393 != 21)
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_234(float fParam0)
{
	float fVar0;
	
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_235())
	{
		return;
	}
	fVar0 = (Global_2524719.f_4878 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2524719.f_4879))
	{
		if (!Global_2524719.f_4879 == SCRIPT::GET_ID_OF_THIS_THREAD() && GAMEPLAY::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2524719.f_4878 = fParam0;
	Global_2524719.f_4879 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_235()
{
	switch (func_236())
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

int func_236()
{
	return Global_25459;
}

float func_237(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
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
		
		default:
	}
	return 1f;
}

int func_238(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
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
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_240(int iParam0)
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

int func_241(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
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
			return 1;
		
		default:
	}
	return 0;
}

void func_242(vector3 vParam0, int iParam3, int iParam4)
{
	Global_2405070.f_44.f_49 = { vParam0 };
	Global_2405070.f_44.f_52 = iParam3;
	Global_2405070.f_44.f_53 = iParam4;
}

bool func_243(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_208, iParam1);
}

int func_244(int iParam0)
{
	if (func_245(iParam0))
	{
		if (func_246(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_245(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_22())
		{
			return Global_1625435[iParam0 /*560*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_199(iParam0, 9);
	}
	return 0;
}

void func_247(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_250(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_248();
	}
}

void func_248()
{
	if (!func_249(PLAYER::PLAYER_ID()))
	{
		func_229(25);
	}
}

bool func_249(int iParam0)
{
	return func_199(iParam0, 25);
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12409;
		
		case 142:
			return Global_262145.f_12397;
		
		case 157:
			return Global_262145.f_12364;
		
		case 159:
			return Global_262145.f_12347;
		
		case 162:
			return Global_262145.f_12458;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_251(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

int func_252(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar0 /*560*/].f_1, 7);
	}
	return 0;
}

bool func_253(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 2);
}

void func_254(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	var uVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	var uVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_395(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_393() || iParam2 == 27)
	{
		if (func_340(uParam1, iParam2, uParam3, Global_1574168, 0, func_391(), iParam7))
		{
			func_339(1);
			if ((!func_337() && !func_335()) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1))
			{
				if (func_334())
				{
					func_331();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_330(1);
						Global_1574168 = 0;
						iVar54 = -1;
						if (Global_1574389 != 1)
						{
							func_329(uParam1, 0, 0);
							if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
							{
								GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_1072(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_146(iVar35, 0))
									{
										if ((func_328(iVar35) || Global_2423801[iVar35 /*413*/].f_236 != -1) || func_115(iVar35))
										{
											iVar44 = iVar35;
											if (func_245(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_325(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_322(PLAYER::PLAYER_ID(), 0) && func_226(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_321())
							{
								if (func_1072(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_22();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_320(iVar35) && func_316(iVar35, iParam2)) && func_1072(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								uVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
								Var38 = { func_311(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_88(iVar35) };
								iVar37 = func_305(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574168++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_321())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_300(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_299(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								uVar51 = func_293(iVar35, 0);
								if (bVar34)
								{
									if (func_292(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_291(iParam5))
								{
									func_290(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, uVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_290(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, uVar42, iVar43, uVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								GAMEPLAY::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_1072(iVar35, 0, 1) && !GAMEPLAY::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_22();
							}
							if (func_320(iVar35))
							{
								if (func_1072(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									uVar42 = Global_1589747[iVar44 /*790*/].f_211.f_6;
									Var38 = { func_311(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_88(iVar35) };
									iVar37 = func_305(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574168++;
									uVar51 = func_293(iVar35, 1);
									if (bVar34)
									{
										if (func_292(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_268(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, uVar42, uVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_265(uParam3, uParam1);
						}
						func_264(&(uParam3->f_21));
						func_263();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_262(uParam3, uParam1);
							func_261(uParam1, 0, 1);
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 7);
						}
						func_262(uParam3, uParam1);
						if (!GAMEPLAY::IS_BIT_SET(uParam3->f_33, 11))
						{
							GAMEPLAY::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_257(uParam3))
						{
							Global_1574389 = 1;
						}
						func_255(uParam3);
						if (Global_1574389 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574389 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
					{
						GRAPHICS::_SET_UI_LAYER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::_SET_UI_LAYER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_263();
			func_330(0);
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 7))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 10))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_255(var uParam0)
{
	if (!func_9(&(uParam0->f_21)))
	{
		func_8(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_264(&(uParam0->f_21));
		func_256(0);
	}
}

void func_256(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574389 != 2)
		{
			Global_1574389 = 2;
		}
	}
	else
	{
		switch (Global_1574389)
		{
			case 0:
				Global_1574389 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_257(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_22() && func_1072(iVar15, 0, 1))
	{
		Var2 = { func_88(iVar15) };
		iVar1 = func_260(uParam0, uParam0->f_37);
		if (func_259(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_258(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_258(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_258(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_258(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_258(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_258(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_258(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_259(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_260(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_261(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "COLLAPSE"))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(iParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_262(var uParam0, var uParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, "SET_HIGHLIGHT");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GAMEPLAY::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_263()
{
	if (Global_1574389 != 0)
	{
		Global_1574389 = 0;
	}
}

void func_264(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_265(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_22())
		{
			if (func_1072(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_267(uParam0->f_38[iVar0 /*2*/], 0);
					func_266(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1589747[iVar0 /*790*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_266(var uParam0, var uParam1, int iParam2, var uParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam1);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_267(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_268(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_289() && iParam4 < func_288())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574170)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574389 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam2, sVar1))
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (GAMEPLAY::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_287("");
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam10);
			}
			func_287(sParam1);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam11);
			if (uParam3->f_108 == 6)
			{
				func_287("");
			}
			else
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
			}
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
			func_287("");
			if (uParam3->f_108 == 6)
			{
				func_287("");
			}
			else
			{
				func_287(&sParam5);
			}
			func_273(uParam3, iParam0);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam9);
			if (func_272(uParam3))
			{
				func_271("DPAD_FRIEND");
			}
			else if (func_270(uParam3))
			{
				func_271("DPAD_FRIEND");
			}
			else if (func_269(uParam3))
			{
				func_271("DPAD_CREW");
			}
			else
			{
				func_271("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_269(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_270(var uParam0)
{
	return GAMEPLAY::IS_BIT_SET(uParam0->f_33, 5);
}

void func_271(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_272(var uParam0)
{
	if (func_270(uParam0) && func_269(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_273(var uParam0, int iParam1)
{
	if (func_286(iParam1))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(121);
	}
	else if (func_278(iParam1))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(122);
	}
	else if (((GAMEPLAY::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && GAMEPLAY::IS_BIT_SET(Global_2423801[iParam1 /*413*/].f_410, 0))
	{
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(123);
	}
	else
	{
		if (func_274())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_274()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_276() || func_275())
		{
			return 1;
		}
	}
	return 0;
}

var func_275()
{
	return Global_2448386.f_14;
}

int func_276()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_275();
	}
	return func_277(Global_4456448.f_130782);
}

int func_277(int iParam0)
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

int func_278(int iParam0)
{
	if ((func_1072(iParam0, 0, 1) && func_282()) && func_279(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_279(int iParam0, bool bParam1)
{
	return func_280(iParam0, bParam1, 1);
}

int func_280(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_281(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1625435[iParam0 /*560*/].f_11;
	if (iVar0 != func_22() && Global_1625435[iVar0 /*560*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_281(int iParam0, int iParam1)
{
	if (iParam0 != func_22())
	{
		if (Global_1625435[iParam0 /*560*/].f_11 != func_22())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 == iParam0 && Global_1625435[iParam0 /*560*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_282()
{
	if (func_137(PLAYER::PLAYER_ID()) || func_285())
	{
		if (!func_283(PLAYER::PLAYER_ID(), 236))
		{
			return 0;
		}
	}
	return 1;
}

int func_283(int iParam0, int iParam1)
{
	if (func_284(iParam0) == iParam1)
	{
		return func_252(iParam0);
	}
	return 0;
}

int func_284(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return Global_1625435[iVar0 /*560*/];
	}
	return -1;
}

int func_285()
{
	switch (func_226(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_286(int iParam0)
{
	if (func_274())
	{
		if (func_1072(iParam0, 0, 1))
		{
			return func_245(iParam0);
		}
	}
	if ((func_1072(iParam0, 0, 1) && func_282()) && func_281(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_287(char* sParam0)
{
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_288()
{
	int iVar0;
	
	if (Global_1574170)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_289()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574170)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_290(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, var uParam9, int iParam10, var uParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, var uParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_289() && iParam3 < func_288())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574170)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574389 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam1, sVar1))
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
				if (GAMEPLAY::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_287("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam9);
				}
				if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_271(sParam16);
				}
				else
				{
					func_287(&(uParam2->f_1));
				}
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(uParam11);
				if (uParam2->f_108 == 6)
				{
					func_287("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(-1);
				}
				if (func_321())
				{
					func_287("");
				}
				else if (uParam2->f_108 == 6 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					UI::ADD_TEXT_COMPONENT_INTEGER(uParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						UI::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						UI::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					UI::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						UI::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						UI::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_271(&(uParam2->f_104));
					}
					else
					{
						func_287("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					UI::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					UI::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam10);
				}
				else
				{
					func_287("");
				}
				if (uParam2->f_108 == 6)
				{
					func_287("");
				}
				else
				{
					func_287(&sParam4);
				}
				func_273(uParam2, iParam0);
				if (iParam12 == 1 || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_287("");
					func_287("");
				}
				else
				{
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_STRING(sParam8);
				}
				if (func_272(uParam2))
				{
					func_271("DPAD_FRIEND");
				}
				else if (func_270(uParam2))
				{
					func_271("DPAD_FRIEND");
				}
				else if (func_269(uParam2))
				{
					func_271("DPAD_CREW");
				}
				else
				{
					func_271("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_291(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_292(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_245(iParam0))
		{
			return 0;
		}
	}
	return Global_1625435[iParam0 /*560*/].f_11 != func_22();
}

int func_293(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_137(iParam0)) && !func_298(iParam0))
	{
		iVar0 = func_297();
	}
	iVar1 = func_296(iParam0);
	if (!iVar1 == -1)
	{
		return func_294(iVar1);
	}
	return iVar0;
}

int func_294(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_295(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_295(int iParam0)
{
	return Global_2417554.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_296(int iParam0)
{
	if (!iParam0 == func_22())
	{
		if (func_292(iParam0, 1))
		{
			return Global_2417554.f_2071.f_11[func_87(iParam0)];
		}
	}
	return -1;
}

int func_297()
{
	return 21;
}

bool func_298(int iParam0)
{
	return func_199(iParam0, 20);
}

char* func_299(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_300(var uParam0, float fParam1, var uParam2, int iParam3)
{
	if (func_304(iParam3))
	{
		*fParam1 = (func_301(iParam3, uParam2) / 10f);
		return 1;
	}
	if (func_291(iParam3))
	{
		*fParam1 = (func_301(iParam3, uParam2) / 1000f);
		return 1;
	}
	*uParam0 = uParam2;
	return 0;
}

float func_301(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(uParam1);
			}
			else
			{
				return func_303(SYSTEM::TO_FLOAT(uParam1));
			}
			break;
		
		case 2:
			if (GAMEPLAY::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(uParam1);
			}
			else
			{
				return func_302(SYSTEM::TO_FLOAT(uParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(uParam1);
}

float func_302(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_303(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_304(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_305(int iParam0)
{
	int iVar0;
	
	iVar0 = func_308(iParam0);
	if (iVar0 == -1)
	{
		func_306(iParam0, 1);
		return 0;
	}
	Global_1379953[iVar0 /*5*/].f_4 = 1;
	return Global_1379953[iVar0 /*5*/].f_2;
}

void func_306(int iParam0, bool bParam1)
{
	if (!func_1072(iParam0, 0, 1))
	{
		return;
	}
	if (func_308(iParam0) != -1)
	{
		return;
	}
	if (Global_1380116)
	{
		if (iParam0 == Global_1380116.f_1)
		{
			return;
		}
	}
	if (func_307(iParam0))
	{
		return;
	}
	if (Global_1380154 >= 32)
	{
		return;
	}
	Global_1380121[Global_1380154] = iParam0;
	Global_1380154++;
	if (bParam1)
	{
	}
}

int func_307(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380154)
	{
		if (Global_1380121[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_308(int iParam0)
{
	int iVar0;
	
	if (!func_1072(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1380114 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1380114)
	{
		if (Global_1379953[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1379953[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1379953[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_309(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_309(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1380114)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1379953[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1379953[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1379953[iParam0 /*5*/].f_2), 64);
			UI::_0x317EBA71D7543F52(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1379953[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1380114)
	{
		Global_1379953[iVar32 /*5*/] = { Global_1379953[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_310(&(Global_1379953[iVar32 /*5*/]));
	Global_1380114 = (Global_1380114 - 1);
}

void func_310(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_22();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_311(int iParam0)
{
	struct<4> Var0;
	
	if (func_1072(iParam0, 0, 1))
	{
		Global_2503649 = { func_88(iParam0) };
		if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (func_259(Global_2503649))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2503649))
				{
					return Var0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return Var0;
		}
		if (func_315(&Global_2503649))
		{
			Global_2503579 = { func_313(iParam0) };
			func_312(&Global_2503579, &Var0);
		}
	}
	return Var0;
}

void func_312(var uParam0, var uParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

struct<35> func_313(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_314(iParam0))
	{
		return Global_1312889[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_88(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_314(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_315(var uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_316(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_253(iParam0) || func_319(iParam0)) || func_318(iParam0))
		{
			return 0;
		}
	}
	if (!func_317(iParam0))
	{
		return 0;
	}
	if ((!func_328(iParam0) && Global_2423801[iParam0 /*413*/].f_236 == -1) && !func_115(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_317(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_142, 22);
}

int func_318(int iParam0)
{
	if (func_253(iParam0))
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 8);
}

int func_319(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 10) || GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 9));
	}
	return 0;
}

int func_320(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (func_146(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_1589747[iVar0 /*790*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_321()
{
	switch (func_226(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_284(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_298(PLAYER::PLAYER_ID()))
	{
		switch (func_226(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_283(PLAYER::PLAYER_ID(), 236))
	{
		return 1;
	}
	return 0;
}

int func_322(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_33 != -1 && func_323(Global_1625435[iParam0 /*560*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_32 != -1)
	{
		if (func_323(Global_1625435[iParam0 /*560*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_323(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_324(iParam0, 0);
	return 0;
}

int func_324(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_325(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1072(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_146(iVar1, 0))
			{
				if ((func_328(iVar1) || Global_2423801[iVar1 /*413*/].f_236 != -1) || func_115(iVar1))
				{
					if (func_326(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_326(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_22())
	{
		if (!bParam2)
		{
			if (func_327(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1625435[iParam0 /*560*/].f_11 != func_22())
		{
			return iParam1 == Global_1625435[iParam0 /*560*/].f_11;
		}
	}
	return 0;
}

int func_327(int iParam0, int iParam1)
{
	if (iParam1 != func_22())
	{
		if (iParam0 != func_22())
		{
			if (Global_1625435[iParam0 /*560*/].f_11 != func_22())
			{
				if (Global_1625435[iParam0 /*560*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_328(int iParam0)
{
	if (func_1072(iParam0, 0, 1))
	{
		if (func_1072(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_226(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_329(var uParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam1);
		GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_330(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1368242.f_2 == 0)
		{
			Global_1368242.f_2 = 1;
		}
	}
	else if (Global_1368242.f_2 == 1)
	{
		Global_1368242.f_2 = 0;
	}
}

void func_331()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1))
	{
		if (func_333())
		{
			func_332();
		}
	}
}

void func_332()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2437022.f_2704[iVar0 /*80*/].f_2 != 0)
		{
			Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
			GAMEPLAY::SET_BIT(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 0);
		}
		iVar0++;
	}
}

bool func_333()
{
	return Global_2437022.f_2704[0 /*80*/].f_1 != 0;
}

int func_334()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 0) && func_333())
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 1) && func_333())
	{
		return 1;
	}
	return 0;
}

int func_335()
{
	if (func_333())
	{
		if (func_336(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_336(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_337()
{
	if (func_333())
	{
		if (func_338(Global_2437022.f_2704[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_339(int iParam0)
{
	if (Global_1368242.f_1 != Global_1368242)
	{
		Global_1368242.f_1 = Global_1368242;
	}
	if (Global_1368242 != iParam0)
	{
		Global_1368242 = iParam0;
	}
}

int func_340(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, var uParam6)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	char* sVar8;
	int iVar9;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_390(iParam1);
	if (iParam1 == 20)
	{
		bVar5 = true;
	}
	uVar7 = func_389();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_388())
		{
			if (func_387() > 0 && Global_1574170)
			{
				UI::_0x25F87B30C382FCA7();
				UI::_CLEAR_NOTIFICATIONS_POS(uVar7);
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					UI::HIDE_HELP_TEXT_THIS_FRAME();
				}
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_374())
		{
			func_373(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 26))
	{
		func_373(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_9(&(uParam2->f_19)))
	{
		if (func_387() == 1)
		{
			func_372(bVar6, uParam0, 0);
			func_8(&(uParam2->f_19), 0, 0);
			func_373(uParam0, uParam2, 0);
			GAMEPLAY::SET_BIT(&(Global_2524719.f_4578), 5);
		}
	}
	if (func_9(&(uParam2->f_19)) || bParam5)
	{
		if (UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			UI::HIDE_HELP_TEXT_THIS_FRAME();
		}
		UI::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_387() == 0 && !bParam5))
		{
			func_373(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_371();
				if (iParam1 == 26 || iParam1 == 27)
				{
					UI::_0x25F87B30C382FCA7();
				}
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!GAMEPLAY::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_371();
					if (iParam1 == 26 || iParam1 == 27)
					{
						UI::_0x25F87B30C382FCA7();
					}
					UI::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				UI::_CLEAR_NOTIFICATIONS_POS(uVar7);
				if (func_372(bVar6, uParam0, 0))
				{
					func_329(uParam0, 0, 0);
					sVar4 = func_369(iParam1, &(Global_4456448.f_130789), bParam4);
					Var0 = { func_367(iParam1) };
					if (bParam4)
					{
						func_364(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_357(uParam0, func_361(uParam2), func_358(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						sVar8 = func_350(uParam2);
						if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam6))
						{
							sVar8 = uParam6;
						}
						func_348(uParam0, sVar8, func_349(), -1);
					}
					else if (func_274())
					{
						uParam2->f_34 = Global_1574169;
						func_364(uParam0, sVar4, &Var0, 1, -1, Global_1574169, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574169;
						func_364(uParam0, sVar4, "", 0, -1, Global_1574169, 1);
					}
					else
					{
						iVar9 = func_341(iParam1);
						func_364(uParam0, sVar4, &Var0, 1, iVar9, -1, 1);
					}
					GAMEPLAY::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574168 = uParam3;
				Global_1574167 = 1;
				UI::_CLEAR_NOTIFICATIONS_POS(uVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574169)
					{
						GAMEPLAY::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_341(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_347())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
		case 30:
		case 29:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_346(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_345(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_344(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_342())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_342()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_122();
	}
	return func_343(Global_4456448.f_130782);
}

int func_343(int iParam0)
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

bool func_344(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 4;
}

bool func_345(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

bool func_346(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_347()
{
	return Global_4456448.f_1 == 0;
}

void func_348(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_271(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_271("");
		if (iParam3 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_349()
{
	switch (func_226(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_350(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_226(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_353())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_352(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_352(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_351(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_352(bool bParam0)
{
	return func_279(PLAYER::PLAYER_ID(), bParam0);
}

bool func_353()
{
	return (func_356() && func_354(func_355()));
}

bool func_354(int iParam0)
{
	return func_281(iParam0, 1);
}

int func_355()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_35;
}

bool func_356()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148;
}

void func_357(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
		{
			func_271(sParam1);
		}
		else if (func_284(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_271("");
		if (iParam3 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_358(var uParam0)
{
	int iVar0;
	
	iVar0 = func_284(PLAYER::PLAYER_ID());
	if (func_360())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_359())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_359()
{
	if (func_284(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2524719.f_4804;
	}
	return -1;
}

bool func_360()
{
	return Global_1589620;
}

char* func_361(var uParam0)
{
	int iVar0;
	
	iVar0 = func_284(PLAYER::PLAYER_ID());
	if (func_360())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_363() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_363() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_359())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_362() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_362()
{
	return Global_2524719.f_4807;
}

int func_363()
{
	if (func_284(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2524719.f_4802;
	}
	return -1;
}

void func_364(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_287(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			UI::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_271(sParam1);
		}
		if (func_388() && iParam6)
		{
			if (func_366())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			UI::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_271(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iParam4);
			if (func_365(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(166);
			}
			else if (func_122())
			{
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_365(int iParam0)
{
	if (func_346(iParam0) || func_345(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_366()
{
	return Global_1574170;
}

struct<4> func_367(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_368(PLAYER::PLAYER_ID()) || func_344(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_38, 16);
			break;
	}
	if (func_274() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_38, 16);
	}
	return Var0;
}

bool func_368(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 5;
}

var func_369(int iParam0, var uParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_274() || GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1)))
	{
		uVar0 = func_370();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574407 == 0)
		{
			Global_1574407 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		if (Global_1574407 == 1)
		{
			Global_1574407 = 0;
		}
		return uParam1;
	}
	else
	{
		if (Global_1574407 == 0)
		{
			Global_1574407 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 30:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return uParam1;
}

char* func_370()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_371()
{
	Global_37027 = 1;
}

bool func_372(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam1);
}

void func_373(var uParam0, var uParam1, bool bParam2)
{
	GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574168 = 0;
	func_263();
	Global_1574167 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_9(&(uParam1->f_19)))
		{
			func_264(&(uParam1->f_19));
			GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4578), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	}
	if (GAMEPLAY::IS_BIT_SET(uParam1->f_33, 0))
	{
		GAMEPLAY::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	UI::_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_374()
{
	if (func_386())
	{
		return 0;
	}
	if (func_385())
	{
		return 0;
	}
	if (!func_383())
	{
		return 0;
	}
	if (!func_381())
	{
		return 0;
	}
	if (func_380(8, -1))
	{
		return 0;
	}
	if (func_387() == 2)
	{
		return 0;
	}
	if (Global_2524719.f_4530)
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	else if (!func_41(PLAYER::PLAYER_ID(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_378(1) || func_376(1)) || Global_17228.f_124) || Global_17228)
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_375() && Global_1686218 == 2)
	{
		return 0;
	}
	if (func_91(PLAYER::PLAYER_ID()) && !func_375())
	{
		return 0;
	}
	if (Global_1654543)
	{
		return 0;
	}
	if (Global_1654549)
	{
		return 0;
	}
	if (func_204(0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 4))
	{
		return 0;
	}
	if (Global_1361433)
	{
		return 0;
	}
	if ((Global_1679581.f_705.f_5 || Global_1682392.f_705.f_5) || Global_1678624.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_375()
{
	return (GAMEPLAY::IS_BIT_SET(Global_4456448.f_30, 12) && GAMEPLAY::IS_BIT_SET(Global_1686219, 0));
}

int func_376(bool bParam0)
{
	if (CONTROLS::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_377(PLAYER::PLAYER_PED_ID()))
			{
				if (CONTROLS::IS_CONTROL_PRESSED(0, 25) || CONTROLS::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17228.f_130)
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (((CONTROLS::IS_CONTROL_PRESSED(0, 166) || CONTROLS::IS_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 166) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 167)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 168)) || CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_377(var uParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(uParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_378(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

bool func_379()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_196 != 0;
}

bool func_380(int iParam0, int iParam1)
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

int func_381()
{
	if (func_382() == 0)
	{
		return 1;
	}
	return 0;
}

int func_382()
{
	return Global_1312466.f_18;
}

int func_383()
{
	if (func_384())
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

bool func_384()
{
	return Global_1312438;
}

bool func_385()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 5;
}

bool func_386()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17367.f_5873 + 100;
}

int func_387()
{
	return Global_1368245.f_68;
}

int func_388()
{
	if (Global_1574169 > 16)
	{
		return 1;
	}
	return 0;
}

float func_389()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_391()
{
	if (func_392(PLAYER::PLAYER_ID()))
	{
		return Global_1316740;
	}
	return 0;
}

int func_392(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_146(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_393()
{
	if (func_391())
	{
		return 1;
	}
	if (func_318(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_360())
	{
		return 1;
	}
	if (func_137(PLAYER::PLAYER_ID()))
	{
		switch (func_284(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_394(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_394(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_394(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_394(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 4);
}

int func_395(int iParam0)
{
	if (iParam0 == 27)
	{
		if ((func_137(PLAYER::PLAYER_ID()) && !func_298(PLAYER::PLAYER_ID())) && !func_283(PLAYER::PLAYER_ID(), 236))
		{
			return 1;
		}
	}
	if (iParam0 == 26)
	{
		if (func_136(PLAYER::PLAYER_ID(), 0) && func_298(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_396(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_137(iParam0) && !func_253(iParam0)) && !GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_1, 8));
	bVar2 = func_298(iParam0);
	uVar3 = func_404();
	uVar4 = func_398();
	if ((bVar1 && (func_252(iParam0) || func_251(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_246(iParam0)) && !func_397(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2524719.f_4883.f_210 != iVar0)
	{
		Global_2524719.f_4883.f_210 = iVar0;
	}
	return iVar0;
}

bool func_397(int iParam0)
{
	return func_199(iParam0, 19);
}

int func_398()
{
	if ((func_199(PLAYER::PLAYER_ID(), 21) || func_199(PLAYER::PLAYER_ID(), 22)) || func_401())
	{
		return 1;
	}
	if (func_399())
	{
		func_229(22);
		return 1;
	}
	return 0;
}

int func_399()
{
	if (func_136(PLAYER::PLAYER_ID(), 0))
	{
		if ((func_404() && !func_400()) || func_243(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		else
		{
			func_228(27);
		}
	}
	return 0;
}

bool func_400()
{
	return Global_1312416.f_1;
}

bool func_401()
{
	return func_402(306, -1);
}

int func_402(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_403(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_403(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_148();
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

bool func_404()
{
	return Global_1312416;
}

bool func_405()
{
	return GAMEPLAY::IS_BIT_SET(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1);
}

void func_406()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_407(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_407(int iParam0)
{
	struct<4> Var0;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		if (Local_206.f_34 > -1)
		{
			if (func_405())
			{
				if (!func_398())
				{
					if (!GAMEPLAY::IS_BIT_SET(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 5))
					{
						if (!GAMEPLAY::IS_BIT_SET(Local_206.f_1, 4))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0))
							{
								if (Var0.f_3)
								{
									if (ENTITY::IS_ENTITY_A_PED(Var0))
									{
										uVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
										if (PED::IS_PED_A_PLAYER(uVar12))
										{
											iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar12);
											if (iVar13 == PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														uVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(uVar11))
														{
															iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar11);
															if (iVar14 == PLAYER::PLAYER_ID())
															{
																GAMEPLAY::SET_BIT(&(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 5);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (func_405())
	{
		if (!func_199(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0))
				{
					uVar12 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
					if (PED::IS_PED_A_PLAYER(uVar12))
					{
						iVar13 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar12);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								uVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(uVar11))
								{
									iVar14 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar11);
									if (iVar14 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar13))
										{
											if (func_292(iVar13, 1))
											{
												if (Local_206.f_33 > -1)
												{
													iVar15 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_206.f_33));
													if (func_326(iVar13, iVar15, 1))
													{
														func_408(0);
														func_248();
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_408(int iParam0)
{
	if (!func_298(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_396(PLAYER::PLAYER_ID()) != 0)
		{
			func_229(20);
			if (func_137(PLAYER::PLAYER_ID()))
			{
				if (!GAMEPLAY::IS_BIT_SET(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1, 8))
				{
					GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 8);
				}
			}
		}
	}
}

void func_409()
{
	switch (Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2)
	{
		case 0:
			func_815();
			func_410();
			if (Local_206.f_32 == 2)
			{
				Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 2;
			}
			else if (Local_206.f_32 == 3)
			{
				Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 3;
			}
			break;
		
		case 2:
			func_410();
			if (Local_206.f_32 == 3)
			{
				Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_2 = 3;
			}
			break;
		
		case 3:
			func_986();
			break;
	}
}

void func_410()
{
	struct<20> Var0;
	int iVar21;
	int iVar22;
	int iVar23;
	char* sVar24;
	int iVar25;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar21 = func_22();
	iVar22 = func_22();
	iVar23 = func_22();
	if (!GAMEPLAY::IS_BIT_SET(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 4))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 9))
		{
			if (GAMEPLAY::IS_BIT_SET(Local_206.f_1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_206.f_33 || func_974() == Local_206.f_33)
				{
					if (func_396(PLAYER::PLAYER_ID()) >= 2)
					{
						sVar24 = func_814();
						iVar25 = func_813(PLAYER::PLAYER_ID());
						func_811(87, "GB_WINNER", "BIGM_SGHTYD", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
					}
					if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
					{
						func_710(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
						GAMEPLAY::SET_BIT(&uLocal_459, 6);
					}
					func_523(142, 1, &Var0, 0);
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
				}
				else if (func_405())
				{
					if (func_292(PLAYER::PLAYER_ID(), 1))
					{
						if (func_396(PLAYER::PLAYER_ID()) >= 2)
						{
							sVar24 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
							iVar25 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
							func_811(88, "GB_WORK_OVER", "BIGM_SGHTFD3", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
						}
						if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
						{
							func_710(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							GAMEPLAY::SET_BIT(&uLocal_459, 6);
						}
						func_523(142, 0, &Var0, 0);
					}
					else
					{
						if (func_396(PLAYER::PLAYER_ID()) >= 2)
						{
							sVar24 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
							iVar25 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
							func_811(88, "GB_WORK_OVER", "BIGM_SGHTFD5", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
						}
						if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
						{
							func_710(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							GAMEPLAY::SET_BIT(&uLocal_459, 6);
						}
						func_523(142, 0, &Var0, 0);
					}
				}
				GAMEPLAY::SET_BIT(&uLocal_459, 9);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_206.f_1, 3))
			{
				func_516(88, "GB_WORK_OVER", "BIGM_SGHTFT", 1, -1, 2, 1);
				if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
				{
					func_710(0, 7, 0, 0, -1, -1, -1, -1, -1, 0);
					GAMEPLAY::SET_BIT(&uLocal_459, 6);
				}
				func_523(142, 0, &Var0, 0);
				GAMEPLAY::SET_BIT(&uLocal_459, 9);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_206.f_1, 4))
			{
				if (Local_206.f_35 > -1)
				{
					iVar22 = PLAYER::INT_TO_PLAYERINDEX(Local_206.f_35);
				}
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_206.f_33)
				{
					if (func_396(PLAYER::PLAYER_ID()) >= 2)
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar22))
						{
							if (func_292(iVar22, 1))
							{
								sVar24 = func_517(iVar22);
								iVar25 = func_813(iVar22);
							}
							else
							{
								sVar24 = PLAYER::GET_PLAYER_NAME(iVar22);
								iVar25 = 1;
							}
							func_811(88, "GB_WORK_OVER", "BIGM_SGHTFMK", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
						}
						else
						{
							func_811(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
						}
					}
					func_523(142, 0, &Var0, 0);
					if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
					{
						func_710(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						GAMEPLAY::SET_BIT(&uLocal_459, 6);
					}
				}
				else if (func_974() == Local_206.f_33)
				{
					iVar21 = PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34);
					if (iVar21 != func_22())
					{
						if (func_396(PLAYER::PLAYER_ID()) >= 2)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar22))
							{
								if (func_292(iVar22, 1))
								{
									sVar24 = func_517(iVar22);
									iVar25 = func_813(iVar22);
								}
								else
								{
									sVar24 = PLAYER::GET_PLAYER_NAME(iVar22);
									iVar25 = 1;
								}
								func_811(88, "GB_WORK_OVER", "BIGM_SGHTGK", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
							}
							else
							{
								func_811(88, "GB_WORK_OVER", "BIGM_SGHTFD2", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
							}
						}
						func_523(142, 0, &Var0, 0);
						if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
						{
							func_710(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							GAMEPLAY::SET_BIT(&uLocal_459, 6);
						}
					}
				}
				else if (func_405())
				{
					iVar22 = PLAYER::INT_TO_PLAYERINDEX(Local_206.f_35);
					if (iVar22 != func_22())
					{
						if (iVar22 == PLAYER::PLAYER_ID())
						{
							if (func_396(PLAYER::PLAYER_ID()) >= 2)
							{
								if (func_515(1))
								{
									func_516(87, "GB_WINNER", "BIGM_SGHTYK", 1, -1, 2, 1);
								}
								else
								{
									func_516(87, "GB_WINNER", "BIGM_SGHTYK2", 1, -1, 2, 1);
								}
							}
							PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
							if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
							{
								func_710(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
								GAMEPLAY::SET_BIT(&uLocal_459, 6);
							}
							func_523(142, 1, &Var0, 0);
						}
						else if (func_515(1))
						{
							iVar23 = func_514();
							if (func_326(iVar22, iVar23, 1))
							{
								if (func_396(PLAYER::PLAYER_ID()) >= 2)
								{
									func_482(87, iVar22, -1, "BIGM_SGHTWK", "GB_WINNER", 1, -1, 2, -1);
								}
								if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
								{
									func_710(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
									GAMEPLAY::SET_BIT(&uLocal_459, 6);
								}
								func_523(142, 0, &Var0, 0);
							}
							else
							{
								if (func_396(PLAYER::PLAYER_ID()) >= 2)
								{
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar22))
									{
										if (func_292(iVar22, 1))
										{
											sVar24 = func_517(iVar22);
											iVar25 = func_813(iVar22);
										}
										else
										{
											sVar24 = PLAYER::GET_PLAYER_NAME(iVar22);
											iVar25 = 1;
										}
										func_811(88, "GB_WORK_OVER", "BIGM_SGHTWK", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
									}
									else
									{
										func_516(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2, 1);
									}
								}
								if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
								{
									func_710(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
									GAMEPLAY::SET_BIT(&uLocal_459, 6);
								}
								func_523(142, 0, &Var0, 0);
							}
						}
						else
						{
							if (func_396(PLAYER::PLAYER_ID()) >= 2)
							{
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar22))
								{
									if (func_292(iVar22, 1))
									{
										sVar24 = func_517(iVar22);
										iVar25 = func_813(iVar22);
									}
									else
									{
										sVar24 = PLAYER::GET_PLAYER_NAME(iVar22);
										iVar25 = 1;
									}
									func_811(88, "GB_WORK_OVER", "BIGM_SGHTNGK", sVar24, iVar25, 0, -1, -1, -1, 2, -1);
								}
								else
								{
									func_516(88, "GB_WORK_OVER", "BIGM_SGHTRK", 1, -1, 2, 1);
								}
							}
							if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
							{
								func_710(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
								GAMEPLAY::SET_BIT(&uLocal_459, 6);
							}
							func_523(142, 0, &Var0, 0);
						}
					}
				}
				GAMEPLAY::SET_BIT(&uLocal_459, 9);
			}
			else if (GAMEPLAY::IS_BIT_SET(Local_206.f_1, 5))
			{
				if (func_444())
				{
					if (func_973())
					{
						if (func_396(PLAYER::PLAYER_ID()) >= 2)
						{
						}
					}
					else if (func_396(PLAYER::PLAYER_ID()) >= 2)
					{
						func_516(88, "GB_WORK_OVER", "BIGM_SGHTRBQ", 1, -1, 2, 1);
					}
				}
				if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
				{
					func_710(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
					GAMEPLAY::SET_BIT(&uLocal_459, 6);
				}
				func_523(159, 0, &Var0, 0);
				GAMEPLAY::SET_BIT(&uLocal_459, 9);
			}
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_459, 9))
		{
			func_437();
			if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 8))
			{
				GAMEPLAY::SET_BIT(&uLocal_460, 8);
			}
			if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 10))
			{
				if (Local_206.f_34 != -1)
				{
					if (GAMEPLAY::IS_BIT_SET(uLocal_459, 5))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34)))
						{
							func_435(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 432, 0, 0);
							func_434(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 1, 0, 0);
							func_433(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 0, 0, 0);
							func_432(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 0);
							func_429(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), Global_262145.f_12242, 0, 0);
							GAMEPLAY::SET_BIT(&uLocal_459, 10);
						}
					}
				}
			}
			if (func_411(&uLocal_833, 1, 0))
			{
				GAMEPLAY::SET_BIT(&(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 4);
			}
		}
	}
}

int func_411(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_229(29);
	if ((*uParam0 > 0 && !func_333()) && func_396(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_427())
		{
			func_426();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_9(&(uParam0->f_3)))
			{
				func_8(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 2);
				if (bParam1)
				{
					GAMEPLAY::SET_BIT(&(Global_2524719.f_4574), 0);
					func_8(&(uParam0->f_5), 0, 0);
				}
				func_8(&(uParam0->f_1), 0, 0);
				func_425(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_9(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_418(iParam2);
				func_425(uParam0, 2);
			}
			break;
		
		case 2:
			func_418(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_412(func_413(0)))
				{
					UI::CLEAR_HELP(1);
				}
				func_425(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4574), 1);
				GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 2);
				func_425(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4574), 1);
			GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_412(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_413(int iParam0)
{
	if (((func_416(PLAYER::PLAYER_ID()) || func_415(PLAYER::PLAYER_ID())) || func_353()) || iParam0)
	{
		if (func_415(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_323(func_414()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_414()
{
	return Global_1643357;
}

bool func_415(int iParam0)
{
	return func_324(func_226(iParam0), 0);
}

bool func_416(int iParam0)
{
	return func_417(func_226(iParam0));
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148 && func_281(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_418(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4574, 0))
	{
		if (((((((((((!UI::IS_RADAR_HIDDEN() && !GAMEPLAY::IS_BIT_SET(Global_2524719.f_784, 2)) && func_1072(PLAYER::PLAYER_ID(), 1, 1)) && !Global_68494) && !Global_53362) && !CAM::IS_SCREEN_FADED_OUT()) && !func_199(PLAYER::PLAYER_ID(), 22)) && func_396(PLAYER::PLAYER_ID()) != 0) && !func_423(func_424())) && !func_416(PLAYER::PLAYER_ID())) && !func_422(func_226(PLAYER::PLAYER_ID()))) && !func_421(func_226(PLAYER::PLAYER_ID())))
		{
			GAMEPLAY::SET_BIT(&(Global_2524719.f_4574), 1);
			func_420(func_413(iParam0), -1);
			func_419(1);
			GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4574), 0);
		}
	}
}

void func_419(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_352(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_333())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_420(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam1);
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 236:
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
			return 1;
		
		default:
	}
	return 0;
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_423(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_424()
{
	var uVar0;
	
	uVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_SELL"))
	{
		return 237;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_DEFEND"))
	{
		return 238;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_SECURITY_VAN"))
	{
		return 239;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_TARGET_PURSUIT"))
	{
		return 240;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_JEWEL_STORE_GRAB"))
	{
		return 241;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_BANK_JOB"))
	{
		return 242;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_DATA_HACK"))
	{
		return 244;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_INFILTRATION"))
	{
		return 248;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_PHONECALL"))
	{
		return 249;
	}
	else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "FMMC_TYPE_FMBB_CLUB_MANAGEMENT"))
	{
		return 250;
	}
	return 0;
}

void func_425(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_426()
{
	Global_2459730 = 1;
}

int func_427()
{
	if (((((((func_226(PLAYER::PLAYER_ID()) == 170 || func_226(PLAYER::PLAYER_ID()) == 219) || func_226(PLAYER::PLAYER_ID()) == 221) || func_226(PLAYER::PLAYER_ID()) == 220) || func_226(PLAYER::PLAYER_ID()) == 216) || func_226(PLAYER::PLAYER_ID()) == 215) || func_226(PLAYER::PLAYER_ID()) == 214) || func_226(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_428(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_428(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_21(Global_2423801[iParam0 /*413*/].f_309.f_4) == 2;
			}
		}
	}
	return 0;
}

void func_429(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_431(iParam0))
	{
		return;
	}
	if (func_430(&(Global_2415861.f_746[iParam0]), &(Global_2415861.f_1109[iParam0]), &(Global_2415861.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_548[iParam0] = uParam1;
		}
	}
}

int func_430(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!GAMEPLAY::IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				GAMEPLAY::SET_BIT(uParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (GAMEPLAY::IS_BIT_SET(*uParam2, iParam4))
			{
				*uParam6 = 1;
				GAMEPLAY::CLEAR_BIT(uParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_431(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 1;
	}
	if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_235())
	{
		return 1;
	}
	return 0;
}

void func_432(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_2415861.f_365), iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2415861.f_365), iParam0);
	}
	if (UI::DOES_BLIP_EXIST(Global_2415861[iParam0]))
	{
		if (bParam1)
		{
			UI::SET_BLIP_AS_SHORT_RANGE(Global_2415861[iParam0], 0);
		}
		else
		{
			UI::SET_BLIP_AS_SHORT_RANGE(Global_2415861[iParam0], 1);
		}
	}
}

void func_433(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_431(iParam0))
	{
		return;
	}
	if (func_430(&(Global_2415861.f_812[iParam0]), &(Global_2415861.f_1175[iParam0]), &(Global_2415861.f_364), bParam1, iParam0, bParam3, &uVar0))
	{
		func_432(iParam0, bParam2);
	}
}

void func_434(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_431(iParam0))
	{
		return;
	}
	if (func_430(&(Global_2415861.f_614[iParam0]), &(Global_2415861.f_977[iParam0]), &(Global_2415861.f_386), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_449[iParam0] = iParam1;
		}
	}
}

void func_435(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_431(iParam0))
	{
		return;
	}
	if (func_430(&(Global_2415861.f_581[iParam0]), &(Global_2415861.f_944[iParam0]), &(Global_2415861.f_385), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2415861.f_416[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_436();
		}
	}
}

void func_436()
{
	Global_2415861.f_1508 = 1;
}

void func_437()
{
	if (!func_443())
	{
		return;
	}
	if (!GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312576.f_9)
	{
		return;
	}
	func_438();
}

void func_438()
{
	func_440();
	func_439(0);
}

void func_439(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_440()
{
	if (!func_442())
	{
	}
	if (func_443())
	{
		UI::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312576.f_12));
		func_441();
		UI::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_441()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			return;
		
		case 2:
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			UI::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_53);
			return;
		
		case 3:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 4:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 5:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 6:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 7:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 8:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 9:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 10:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		case 12:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 13:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 11:
			UI::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 14:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 15:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 17:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			return;
		
		case 16:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 19:
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 18:
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			UI::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_442()
{
	if (!func_443())
	{
		return 0;
	}
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312576.f_12));
	func_441();
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_443()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

int func_444()
{
	if (!func_445(1, 1, 1))
	{
		return 0;
	}
	if (func_398())
	{
		return 0;
	}
	return 1;
}

int func_445(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_481(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_243(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_317(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_116(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_480())
	{
		return 0;
	}
	if (func_385())
	{
		return 0;
	}
	if (func_479())
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_42(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_381())
	{
		return 0;
	}
	if (func_243(PLAYER::PLAYER_ID(), 0) || func_243(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_243(PLAYER::PLAYER_ID(), 12) || func_243(PLAYER::PLAYER_ID(), 14)) || func_243(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_475(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_451())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_450())
		{
			return 0;
		}
	}
	if (Global_1654543)
	{
		return 0;
	}
	if (func_135(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_449())
	{
		return 0;
	}
	if (func_448(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_447())
	{
		return 0;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_22, 4))
	{
		return 0;
	}
	if (func_446(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_446(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_261.f_4 != 0 || Global_2423801[iParam0 /*413*/].f_261.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_447()
{
	return Global_1668658.f_3359 != -1;
}

int func_448(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 14))
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 11))
	{
		return 1;
	}
	return 0;
}

int func_449()
{
	if (Global_4254407.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_450()
{
	return Global_93284.f_328 > 0;
}

int func_451()
{
	int iVar0;
	
	iVar0 = func_226(PLAYER::PLAYER_ID());
	if (((func_474(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_24) || func_473(PLAYER::PLAYER_ID())) || func_472(PLAYER::PLAYER_ID())) || func_467(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_465(PLAYER::PLAYER_ID()))
	{
		if (func_464(iVar0) || func_463(iVar0))
		{
			return 1;
		}
	}
	if (func_428(PLAYER::PLAYER_ID()))
	{
		if (func_463(iVar0))
		{
			return 1;
		}
	}
	if (func_462(PLAYER::PLAYER_ID()))
	{
		if (func_461(iVar0))
		{
			return 1;
		}
	}
	if (func_460(PLAYER::PLAYER_ID()))
	{
		if (func_459(iVar0))
		{
			return 1;
		}
	}
	if (func_458(PLAYER::PLAYER_ID()))
	{
		if (func_457(iVar0))
		{
			return 1;
		}
	}
	if (func_456(PLAYER::PLAYER_ID()))
	{
		if (func_455(iVar0))
		{
			return 1;
		}
	}
	if (func_20(PLAYER::PLAYER_ID(), 0))
	{
		if (func_454(iVar0))
		{
			if (func_452(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_452(int iParam0)
{
	if (func_453(iParam0) != func_22())
	{
		return func_453(iParam0) == func_87(iParam0);
	}
	return 0;
}

int func_453(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_35;
}

int func_454(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_455(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_456(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_21(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_457(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_458(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_21(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_459(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_460(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_21(Global_2423801[iParam0 /*413*/].f_309.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_462(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_21(Global_2423801[iParam0 /*413*/].f_309.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_465(int iParam0)
{
	if (func_466(Global_1589747[iParam0 /*790*/].f_273.f_24, -1))
	{
		return 1;
	}
	return 0;
}

int func_466(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_467(int iParam0)
{
	if (func_468(Global_1589747[iParam0 /*790*/].f_273.f_24, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_468(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_469(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_469(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

int func_469(int iParam0, bool bParam1)
{
	if (Global_1589590 != func_22())
	{
		if (!func_471(Global_1589590))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1589590)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_2423801[Global_1589590 /*413*/].f_195, 24) || func_470(Global_1589590))
				{
					return 1;
				}
			}
		}
	}
	return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 24);
}

int func_470(int iParam0)
{
	if (iParam0 != func_22())
	{
		return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 9);
	}
	return 0;
}

int func_471(int iParam0)
{
	if (iParam0 != func_22())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 2);
	}
	return 0;
}

int func_472(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_21(Global_2423801[iParam0 /*413*/].f_309.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_473(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_21(Global_2423801[iParam0 /*413*/].f_309.f_4) == 0;
			}
		}
	}
	return 0;
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_475(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	if (Global_1589747[iParam0 /*790*/].f_273.f_24 > 0)
	{
		if (bParam1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_473(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_428(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_472(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_462(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_460(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_458(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_478(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_456(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_477(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_20(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_476(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_476(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_21(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_21(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_478(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (func_1072(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_22())
			{
				return func_21(Global_2423801[iParam0 /*413*/].f_309.f_4) == 8;
			}
		}
	}
	return 0;
}

bool func_479()
{
	return Global_1312857;
}

bool func_480()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 0);
}

bool func_481(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1625435[iParam0 /*560*/].f_11.f_5, iParam1);
}

int func_482(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_513(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != -1)
	{
		GAMEPLAY::SET_BIT(&(Var0.f_69), iParam8);
	}
	return func_483(&Var0);
}

int func_483(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2437022.f_3026)
		{
			return 0;
		}
	}
	func_493(uParam0, uParam0->f_17);
	func_492(uParam0);
	if (func_122())
	{
		func_492(uParam0);
	}
	if (func_491(uParam0->f_1))
	{
		func_484();
		if (Global_2437022.f_2704[0 /*80*/].f_2 == 0)
		{
			Global_2437022.f_2704[0 /*80*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2437022.f_2704[0 /*80*/].f_1 == 13 || Global_2437022.f_2704[0 /*80*/].f_1 == 53) || Global_2437022.f_2704[0 /*80*/].f_1 == 54) || Global_2437022.f_2704[0 /*80*/].f_1 == 58)
		{
			Global_2437022.f_2704[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2437022.f_2704[iVar0 + 1 /*80*/] = { Global_2437022.f_2704[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2437022.f_2704[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2437022.f_2704[iVar0 /*80*/].f_2 == 0)
		{
			Global_2437022.f_2704[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_484();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 1);
				Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !GAMEPLAY::IS_BIT_SET(uParam0->f_69, 7))
			{
				if (func_336(Global_2437022.f_2704[iVar0 /*80*/].f_1))
				{
					Global_2437022.f_2704[iVar0 /*80*/].f_2 = 5;
					GAMEPLAY::SET_BIT(&(Global_2437022.f_2704[iVar0 /*80*/].f_69), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_484()
{
	bool bVar0;
	
	if (Global_2437022.f_3027)
	{
		return;
	}
	if (!Global_71473)
	{
		Global_71473 = 1;
		bVar0 = true;
	}
	func_485();
	if (bVar0)
	{
		Global_71473 = 0;
	}
}

void func_485()
{
	Global_2437022.f_3028 = 0;
	Global_2437022.f_3028.f_578 = 0;
	func_489(&(Global_2437022.f_3028.f_1));
	Global_2437022.f_3028.f_1.f_1 = 0;
	func_486(&(Global_2437022.f_3028.f_1));
}

void func_486(var uParam0)
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
	if (!Global_71473)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_71474)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_488(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_487(0);
}

void func_487(int iParam0)
{
	Global_71465 = iParam0;
	Global_71466 = iParam0;
}

int func_488(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71453, 0);
}

void func_489(var uParam0)
{
	func_490(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_490(var uParam0)
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

int func_491(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_492(var uParam0)
{
	if (func_338(uParam0->f_1))
	{
		uParam0->f_72 = func_297();
	}
}

void func_493(var uParam0, int iParam1)
{
	if (func_338(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_22() || !func_1072(iParam1, 0, 1))
	{
		return;
	}
	if (func_336(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_494(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_494(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	
	if (func_91(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_125859[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_91(PLAYER::PLAYER_ID()) || (func_512() && func_511())) && !GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 31)) && !bParam4)
	{
		uVar1 = func_510();
		if (ENTITY::DOES_ENTITY_EXIST(uVar1))
		{
			if (PED::IS_PED_A_PLAYER(uVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1) != -1)
				{
					if (func_1072(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_125859[iParam1] != -1)
							{
								return func_508(iParam1, iParam0, 0);
							}
							else
							{
								return func_504(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_504(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_125859[iParam1] != -1)
				{
					return func_508(iParam1, iParam0, 0);
				}
				else
				{
					return func_495(0, -1, 0);
				}
			}
			else
			{
				return func_495(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_125859[iParam1] != -1)
		{
			return func_508(iParam1, iParam0, 0);
		}
		else
		{
			return func_504(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_504(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_495(bool bParam0, int iParam1, bool bParam2)
{
	return func_496(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_496(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_502() && Global_1378988.f_1)
	{
		if (bParam1)
		{
			return func_501(iParam2, iVar0);
		}
		else
		{
			return func_501(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_90(iVar0, iParam2, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_500(1);
				}
				else
				{
					return func_500(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_497(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_497(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_500(1);
	}
	return func_500(0);
}

int func_497(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_499(iParam0, iParam1, iParam3);
	if (func_498(Global_4456448.f_130782, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_498(int iParam0, bool bParam1)
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

int func_499(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_90(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_500(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_501(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_499(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_502()
{
	if (func_503() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

var func_503()
{
	return GAMEPLAY::IS_BIT_SET(Global_4456448.f_146776, 12);
}

int func_504(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589747[PLAYER::PLAYER_ID() /*790*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589747[iVar2 /*790*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_506(1))
			{
				iVar3 = func_296(iParam0);
				if (!iVar3 == -1)
				{
					return func_294(iVar3);
				}
			}
			if ((func_129(iParam1, iParam0, iVar0, 0) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_90(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 23)) && !GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_500(1);
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_505(1);
			}
			else
			{
				return func_496(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574393 || Global_1574384) || Global_1589747[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574393 == 1 && Global_1574403 == 0))
			{
				return func_500(1);
			}
			else
			{
				return func_496(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574388 && Global_1573886.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_296(iParam0);
	if (!iVar4 == -1)
	{
		return func_294(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_505(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_506(int iParam0)
{
	if ((func_275() || func_507()) || (func_122() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_507()
{
	return Global_2448386.f_15;
}

int func_508(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969023.f_13[iParam0];
	if (func_506(1))
	{
		iVar2 = func_296(iParam1);
		if (!iVar2 == -1)
		{
			return func_294(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_104[iParam0 /*10693*/].f_5532[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_22())
	{
		if (Global_4456448.f_125859[iParam0] != -1 && Global_4456448.f_125859[iParam0] <= 4)
		{
			if (Global_4456448.f_125859[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_125859[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_125859[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_125859[iParam0] == 4)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_125859[iParam0];
			}
		}
		else
		{
			iVar0 = func_496(iParam1, !bParam2, iParam0, 0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_509(iParam0);
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4456448.f_15, 26) && !func_90(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_505(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_509(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_153033;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_153034;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_153035;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_153036;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_510()
{
	return Global_2359302.f_2;
}

var func_511()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 4);
}

var func_512()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 14);
}

void func_513(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_22();
	uParam1->f_18 = func_22();
	uParam1->f_19 = func_22();
	uParam1->f_20 = func_22();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_514()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11;
}

bool func_515(bool bParam0)
{
	return func_292(PLAYER::PLAYER_ID(), bParam0);
}

int func_516(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_513(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	return func_483(&Var0);
}

char* func_517(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		uVar0 = func_522(&(Global_1625435[iParam0 /*560*/].f_11.f_99));
		return uVar0;
	}
	if (Global_1625435[iParam0 /*560*/].f_11.f_115 != Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_115)
	{
		uVar0 = func_520(iParam0, 0);
		return uVar0;
	}
	if (((func_199(iParam0, 28) || func_199(PLAYER::PLAYER_ID(), 28)) || func_519(iParam0)) && !func_518(iParam0))
	{
		return func_520(iParam0, 0);
	}
	iVar1 = func_87(iParam0);
	if (iVar1 != func_22())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_520(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_22())
	{
		uVar0 = func_522(&(Global_1625435[iVar1 /*560*/].f_11.f_99));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar0))
		{
			return func_520(iVar1, 0);
		}
		else
		{
			return uVar0;
		}
	}
	return "";
}

int func_518(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_88(iParam0) };
	if (GAMEPLAY::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(0))
		{
			if (NETWORK::_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_519(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_22())
	{
		Var0 = { func_88(iParam0) };
		if (GAMEPLAY::IS_ORBIS_VERSION() || GAMEPLAY::IS_PC_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (GAMEPLAY::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				if (NETWORK::_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_520(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_279(iParam0, 1))
		{
			return func_521();
		}
	}
	return UI::_GET_LABEL_TEXT("GB_REST_ACC");
}

var func_521()
{
	return UI::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_522(var uParam0)
{
	return uParam0;
}

void func_523(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
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
	
	func_708(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_18151);
		}
		else
		{
			iVar1 = (iVar1 + func_707(iParam0, uParam2->f_13));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_706(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_18150);
		}
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_704(iParam0))
	{
		if (bParam1)
		{
			if (func_703(PLAYER::PLAYER_ID()) > 0)
			{
				func_702();
			}
			else
			{
				func_701();
			}
		}
		else
		{
			func_700();
		}
	}
	func_684(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_682(iParam0, uParam2, &iVar0, &iVar5);
	func_660(iParam0, uParam2, &iVar0, &iVar5);
	func_646(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_629(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2524719.f_4883.f_373 = uVar4;
	}
	else
	{
		Global_2524719.f_4883.f_373 = iVar5;
	}
	iVar8 = func_355();
	if (iVar8 != func_22() && iParam0 != 148)
	{
		if (func_292(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_326(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_614(&iVar0, 1);
			}
		}
	}
	func_610(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1666806.f_10 = iVar1;
		func_609();
		func_566(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1666806.f_9 = iVar0;
		iVar13 = func_514();
		if (iVar13 != func_22())
		{
			func_565(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_515(1);
		if (iParam0 == 168)
		{
			if (!func_564())
			{
				unk_0xECA658CE2A4E5A72(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_563())
			{
				if (!func_564())
				{
					Var15 = { func_562() };
					unk_0x8586789730B10CAF(iVar0, GAMEPLAY::GET_HASH_KEY(func_561(Var15)), func_560(Var15), iVar5);
				}
			}
			else if (func_564())
			{
				func_548(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_4262927[iVar17 /*80*/].f_6 = uVar11;
				Global_4262927[iVar17 /*80*/].f_7 = uVar12;
				Global_4262927[iVar17 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_957())
			{
				if (!func_564())
				{
					unk_0x8586789730B10CAF(iVar0, GAMEPLAY::GET_HASH_KEY(func_561(func_547(PLAYER::PLAYER_ID()))), 5, iVar5);
				}
			}
			else if (func_564())
			{
				func_548(-856006867, iVar0, &iVar18, 0, 1, 0);
				Global_4262927[iVar18 /*80*/].f_6 = uVar11;
				Global_4262927[iVar18 /*80*/].f_7 = uVar12;
				Global_4262927[iVar18 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_957())
			{
				if (!func_564())
				{
					iVar19 = func_543(uParam2->f_16, iVar5);
					iVar20 = iVar0;
					if (iVar19 > 0)
					{
						iVar20 = (iVar20 - iVar19);
					}
					if (iVar7 > 0)
					{
						iVar20 = (iVar20 - iVar7);
					}
					unk_0x6B7E4FB50D5F3D65(iVar20, iVar5, iVar7, iVar19, uParam2->f_16);
				}
			}
			else if (func_564())
			{
				func_548(463142405, iVar0, &iVar21, 0, 1, 0);
				Global_4262927[iVar21 /*80*/].f_6 = uVar11;
				Global_4262927[iVar21 /*80*/].f_7 = uVar12;
				Global_4262927[iVar21 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xDEE612F2D71B0308(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_564())
			{
				func_548(1407278493, iVar0, &iVar22, 0, 1, 0);
				Global_4262927[iVar22 /*80*/].f_6 = uVar11;
				Global_4262927[iVar22 /*80*/].f_7 = uVar12;
				Global_4262927[iVar22 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xED26584F6BDCBBFD(iVar0);
			}
		}
		else if (iParam0 == 237)
		{
			if (func_957())
			{
				if (!func_564())
				{
					unk_0x7C5AFBDB4A63099E(iVar0, uParam2->f_20, iVar5);
				}
			}
			else if (func_564())
			{
				func_548(-856006867, iVar0, &iVar23, 0, 1, 0);
				Global_4262927[iVar23 /*80*/].f_6 = uVar11;
				Global_4262927[iVar23 /*80*/].f_7 = uVar12;
				Global_4262927[iVar23 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xECA658CE2A4E5A72(iVar0, iVar5);
			}
		}
		else if (iParam0 == 250)
		{
			if (func_564())
			{
				func_548(-961034881, iVar0, &iVar24, 0, 1, 0);
				Global_4262927[iVar24 /*80*/].f_6 = uVar11;
				Global_4262927[iVar24 /*80*/].f_7 = uVar12;
				Global_4262927[iVar24 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0x70275A5DEC872CA2(iVar0);
			}
		}
		else if (iParam0 == 249)
		{
			if (func_564())
			{
				func_548(1135468152, iVar0, &iVar25, 0, 1, 0);
				Global_4262927[iVar25 /*80*/].f_6 = uVar11;
				Global_4262927[iVar25 /*80*/].f_7 = uVar12;
				Global_4262927[iVar25 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xF03B782EEA848691(iVar0);
			}
		}
		else if (((((iParam0 == 242 || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240)
		{
			if (func_564())
			{
				func_548(-634726636, iVar0, &iVar26, 0, 1, 0);
				Global_4262927[iVar26 /*80*/].f_6 = uVar11;
				Global_4262927[iVar26 /*80*/].f_7 = uVar12;
				Global_4262927[iVar26 /*80*/].f_8 = bVar14;
			}
			else
			{
				unk_0xB509D8DC0549312F(iVar0);
			}
		}
		else if (func_564())
		{
			func_548(-856006867, iVar0, &iVar27, 0, 1, 0);
			Global_4262927[iVar27 /*80*/].f_6 = uVar11;
			Global_4262927[iVar27 /*80*/].f_7 = uVar12;
			Global_4262927[iVar27 /*80*/].f_8 = bVar14;
		}
		else
		{
			unk_0x0CB1BE0633C024A8(uVar11, uVar12, iVar0, bVar14);
		}
		func_542(iParam0, iVar0);
		if (func_541(iParam0))
		{
			if (func_540(iParam0) > -1)
			{
				func_539(func_540(iParam0), iVar0);
			}
		}
		Global_2460387 = iVar0;
		func_538(&Global_2458654, 0, 0);
	}
	if (func_246(PLAYER::PLAYER_ID()) || func_298(PLAYER::PLAYER_ID()))
	{
		func_529(iParam0);
	}
	if (func_417(iParam0))
	{
		Global_1666824.f_13 = iVar0;
		Global_1666824.f_14 = iVar1;
	}
	if (func_422(iParam0))
	{
		Global_1666878.f_13 = iVar0;
		Global_1666878.f_14 = iVar1;
	}
	if (func_461(iParam0))
	{
		Global_1666941.f_12 = iVar0;
		Global_1666941.f_13 = iVar1;
	}
	if (func_459(iParam0))
	{
		Global_1666985.f_12 = iVar0;
		Global_1666985.f_13 = iVar1;
	}
	if (func_457(iParam0))
	{
		Global_1667039.f_12 = iVar0;
		Global_1667039.f_13 = iVar1;
	}
	if (func_421(iParam0))
	{
		if (func_528(iParam0))
		{
			Global_1667120.f_12 = iVar0;
			Global_1667120.f_13 = iVar1;
		}
		else if (func_524(iParam0))
		{
			Global_1667173.f_12 = iVar0;
			Global_1667173.f_13 = iVar1;
		}
	}
}

int func_524(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_525(func_526(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_526(int iParam0)
{
	if (func_226(iParam0) == 237 || func_226(iParam0) == 250)
	{
		return func_527(iParam0);
	}
	return -1;
}

int func_527(int iParam0)
{
	if (func_136(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_176;
	}
	return -1;
}

int func_528(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_529(int iParam0)
{
	if (func_537(PLAYER::PLAYER_ID()) && func_563())
	{
		if (func_464(iParam0))
		{
			func_532(8657, -1);
		}
		else if (func_531(iParam0))
		{
			func_532(8659, -1);
		}
		else if (func_324(iParam0, 1))
		{
			func_532(8660, -1);
		}
		else if (func_530(iParam0))
		{
			func_532(8661, -1);
		}
	}
}

int func_530(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

void func_532(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_536(iParam0, func_403(iParam1), 0);
	iVar0++;
	if (!func_535(iParam0))
	{
		func_534(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_533(iParam0, iVar0, iParam1, 1);
	}
}

void func_533(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2535519[iParam0 /*3*/][func_403(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1378885[func_403(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1378891[func_403(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1378897[func_403(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1378903[func_403(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1378861[func_403(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1378867[func_403(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1378873[func_403(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1378879[func_403(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1378837[func_403(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1378843[func_403(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1378849[func_403(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1378855[func_403(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1378909[func_403(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1378915[func_403(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1378921[func_403(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1378927[func_403(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1378933[func_403(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_1378939[func_403(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1378945[func_403(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1378951[func_403(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2568104[0 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2568104[1 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_2568104[2 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2568104[3 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_2568229[func_403(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1378957[func_403(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1378963[func_403(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1378969[func_403(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1378975[func_403(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2568165[0 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2568165[1 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2568165[2 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2568165[3 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2568165[4 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2568232[0 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2568232[1 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2568232[2 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2568232[3 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2568232[4 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2568248[0 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2568248[1 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2568248[2 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2568248[3 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2568248[4 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2568165[5 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_2568104[4 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2568264[func_403(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2568273[func_403(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2568267[func_403(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2568276[func_403(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2568270[func_403(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2568279[func_403(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_2568282[func_403(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2568165[6 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2568104[5 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2568165[7 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2568104[6 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2568165[8 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2568104[7 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2568165[9 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2568104[8 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2568165[10 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2568104[9 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2568165[11 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2568104[10 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_2568165[12 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2568104[11 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_2568165[13 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2568104[12 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_2568165[14 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2568104[13 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2568165[15 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2568104[14 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2568165[16 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2568104[15 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2568165[17 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2568104[16 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_2568104[17 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2568104[18 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2568104[19 /*3*/][func_403(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_534(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_403(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_535(int iParam0)
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

int func_536(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2535519[iParam0 /*3*/][func_403(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_537(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_115, 14);
}

void func_538(var uParam0, bool bParam1, bool bParam2)
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

void func_539(int iParam0, int iParam1)
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

int func_540(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_541(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_542(int iParam0, int iParam1)
{
	if (func_537(PLAYER::PLAYER_ID()) && func_563())
	{
		if (func_464(iParam0) && iParam1 > 0)
		{
			func_534(8658, (func_536(8658, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

var func_543(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_546(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_544(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_544(int iParam0, int iParam1)
{
	return (func_545(iParam0) * iParam1);
}

int func_545(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22174;
		
		case 0:
			return Global_262145.f_22175;
		
		case 1:
			return Global_262145.f_22176;
		
		case 2:
			return Global_262145.f_22177;
		
		case 3:
			return Global_262145.f_22178;
		
		case 4:
			return Global_262145.f_22179;
		
		case 5:
			return Global_262145.f_22180;
		
		case 6:
			return Global_262145.f_22181;
		
		case 7:
			return Global_262145.f_22182;
		
		default:
	}
	return 0;
}

float func_546(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22184);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22186;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22183);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22186;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22183);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22187;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22187;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22187;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22188;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22185);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22188;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22185);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22188;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22185);
			break;
	}
	uVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(uParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(uVar2) * fVar0);
}

int func_547(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return Global_1589747[iParam0 /*790*/].f_273.f_174[5 /*12*/];
}

void func_548(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_564())
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
				func_549(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_549(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -597978445:
			if (iParam1 > 0)
			{
				func_549(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
			func_549(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_549(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_564())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_148()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_556(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_555(1, iParam4);
			Global_4263477 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_550(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_550(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			GAMEPLAY::SET_BIT(&(Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_122.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_551(iParam0);
	}
}

void func_551(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_564())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_554(iParam0))
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
		func_552(&(Global_4262927[iParam0 /*80*/]));
	}
}

void func_552(var uParam0)
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
	func_553(&(uParam0->f_13));
	func_553(&(uParam0->f_13.f_13));
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

void func_553(var uParam0)
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

int func_554(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262927[iParam0 /*80*/].f_61.f_5 == 1;
	}
	return 0;
}

void func_555(int iParam0, var uParam1)
{
	Global_2460521 = uParam1;
	Global_2460520 = iParam0;
}

int func_556(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262927[iVar0 /*80*/].f_61.f_2 == 0)
		{
			if (!func_564())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262927[iVar0 /*80*/].f_61.f_2 = 1;
			Global_4262927[iVar0 /*80*/].f_61.f_1 = uParam5;
			Global_4262927[iVar0 /*80*/].f_61.f_3 = iParam1;
			Global_4262927[iVar0 /*80*/].f_61.f_4 = uParam2;
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
			if (iParam1 == -1135378931 && iParam10)
			{
				func_557(Global_4262927[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_557(struct<62> Param0, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, int iParam80)
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
	iVar35 = func_559(vVar0.y);
	if ((Global_262145.f_23427 && !Global_262145.f_23428) && !Global_262145.f_23429)
	{
		return;
	}
	if (!iVar35 == 0)
	{
		func_558();
		unk_0xA40CC53DF8E50837(1, &vVar0, 35, iVar35);
	}
}

void func_558()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_559(int iParam0)
{
	var uVar0;
	
	GAMEPLAY::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_560(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_561(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_562()
{
	return Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_188;
}

bool func_563()
{
	return func_354(PLAYER::PLAYER_ID());
}

int func_564()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_565(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1625435[iParam0 /*560*/].f_11.f_8[0];
	*uParam2 = Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_566(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_567(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_567(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, var uParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_577(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				uVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_573(PED::GET_PED_BONE_COORDS(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, uParam10);
			}
		}
	}
	else
	{
		func_568(iParam1, iVar0, sParam8, uParam10);
	}
	return iVar0;
}

void func_568(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_571(iParam0, 1) };
	if (iParam0 == func_570(PLAYER::PLAYER_PED_ID()))
	{
		func_569(1);
	}
	func_573(vVar0, iParam1, 0, sParam2, uParam3);
}

void func_569(int iParam0)
{
	Global_2437022.f_1886 = iParam0;
}

int func_570(var uParam0)
{
	return uParam0;
}

Vector3 func_571(int iParam0, bool bParam1)
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
	if (iParam0 == func_572(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
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

int func_572(var uParam0)
{
	return uParam0;
}

void func_573(vector3 vParam0, int iParam3, int iParam4, char* sParam5, var uParam6)
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
			Global_2437022.f_1285[iVar1 /*30*/].f_4 = func_576(Global_2437022.f_1285[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2437022.f_1285[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2437022.f_1285[iVar1 /*30*/].f_3 = iParam3;
			Global_2437022.f_1285[iVar1 /*30*/].f_8 = iParam4;
			Global_2437022.f_1285[iVar1 /*30*/].f_9 = func_575();
			Global_2437022.f_1285[iVar1 /*30*/].f_10 = func_574();
			StringCopy(&(Global_2437022.f_1285[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2437022.f_1285[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), uParam6);
		}
	}
}

int func_574()
{
	if (Global_2437022.f_1886)
	{
		Global_2437022.f_1886 = 0;
		return 1;
	}
	Global_2437022.f_1886 = 0;
	return 0;
}

var func_575()
{
	var uVar0;
	
	uVar0 = Global_2437022.f_1888;
	Global_2437022.f_1888 = 1;
	return uVar0;
}

float func_576(vector3 vParam0, var uParam3, var uParam4)
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

var func_577(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_578(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_578(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_608(PLAYER::PLAYER_ID()) || func_607(PLAYER::PLAYER_ID()))
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
	else if (func_342() || func_606(PLAYER::PLAYER_ID()))
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
	if (func_605(uParam2))
	{
	}
	if (func_604())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_602(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_601(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_599(0, &iVar1);
					break;
				
				case 3:
					func_599(1, &iVar1);
					break;
				
				case 1:
					func_597(&iVar1);
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
			func_596(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_588((func_595(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_2 != -1)
				{
					func_596(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_583(iVar1);
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
				func_579((func_581(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_579((func_581(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_579(int iParam0)
{
	if (func_604())
	{
		Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_5 = iParam0;
		func_580(joaat("mpply_globalxp"), iParam0);
	}
}

void func_580(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, 1);
	}
}

int func_581(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1072(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_582(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_5;
			}
		}
		else
		{
			return func_582(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_582(int iParam0)
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

void func_583(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_88(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_586(func_587(&Var0));
			if (iVar13 == 0)
			{
				func_585(&Global_1378824, iParam0);
				func_584(joaat("mpply_crew_local_xp_0"), Global_1378824);
			}
			else if (iVar13 == 1)
			{
				func_585(&Global_1378825, iParam0);
				func_584(joaat("mpply_crew_local_xp_1"), Global_1378825);
			}
			else if (iVar13 == 2)
			{
				func_585(&Global_1378826, iParam0);
				func_584(joaat("mpply_crew_local_xp_2"), Global_1378826);
			}
			else if (iVar13 == 3)
			{
				func_585(&Global_1378827, iParam0);
				func_584(joaat("mpply_crew_local_xp_3"), Global_1378827);
			}
			else if (iVar13 == 4)
			{
				func_585(&Global_1378828, iParam0);
				func_584(joaat("mpply_crew_local_xp_4"), Global_1378828);
			}
		}
	}
}

void func_584(int iParam0, var uParam1)
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

void func_585(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_586(int iParam0)
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

int func_587(var uParam0)
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

void func_588(int iParam0, int iParam1, int iParam2)
{
	if (func_604())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9490 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1378945[func_403(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1378945[func_403(-1)])
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
		if (func_594(PLAYER::PLAYER_ID()))
		{
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_1 = iParam0;
			Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_211.f_6 = func_592(iParam0, 1);
		}
		func_533(639, iParam0, -1, 1);
		func_534(640, func_592(iParam0, 1), -1, 1, 0);
		Global_1378945[func_403(-1)] = iParam0;
		func_589(7, 0);
	}
}

void func_589(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_591(iParam0, iParam1))
	{
		iVar0 = func_590();
		Global_2458086[iVar0] = iParam0;
	}
}

int func_590()
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

int func_591(int iParam0, var uParam1)
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

int func_592(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_593(iParam0, 0);
}

int func_593(int iParam0, int iParam1)
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

int func_594(int iParam0)
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

int func_595(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1378945[func_403(-1)];
			}
			else if (func_594(iParam0))
			{
				return Global_1589747[iParam0 /*790*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1378945[func_403(-1)];
	}
	return 0;
}

void func_596(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_536(iParam0, func_403(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_535(iParam0))
	{
		func_534(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_533(iParam0, iVar0, iParam2, 1);
	}
}

void func_597(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_90(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_89(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_598(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_598(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_598(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(uParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_599(bool bParam0, int iParam1)
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
				if (func_1072(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_89(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_1072(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_600(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_89(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_598(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_598(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_600(var uParam0, int iParam1)
{
	return SYSTEM::VDIST(func_83(uParam0), func_83(iParam1));
	return 0f;
}

int func_601(int iParam0)
{
	int iVar0;
	
	if (CONTROLS::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_598(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_602(int iParam0)
{
	if (iParam0 < 0)
	{
		if (GAMEPLAY::ABSI(iParam0) > func_595(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_595(PLAYER::PLAYER_ID());
		}
	}
	if (func_603(8000, 0, 0) > 0)
	{
		if (func_603(8000, 0, 0) < (iParam0 + func_595(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_603(8000, 0, 0) - func_595(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_603(int iParam0, bool bParam1, int iParam2)
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

int func_604()
{
	return 1;
}

int func_605(var uParam0)
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

int func_606(int iParam0)
{
	return func_457(func_226(iParam0));
}

bool func_607(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 2;
}

bool func_608(int iParam0)
{
	return Global_2423801[iParam0 /*413*/].f_115 == 7;
}

void func_609()
{
	Global_2459729 = 1;
}

void func_610(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_204(7))
	{
		return;
	}
	iVar0 = func_613(iParam0);
	iVar1 = func_612(iParam0);
	iVar2 = GAMEPLAY::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2524719.f_4883.f_259, NETWORK::GET_NETWORK_TIME()));
	if (func_611(iParam0) != -1)
	{
		if (iVar2 > func_611(iParam0))
		{
			iVar2 = func_611(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12282)
	{
		iVar2 = Global_262145.f_12282;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_611(int iParam0)
{
	if (func_324(iParam0, 0) || func_531(iParam0))
	{
		return Global_262145.f_18356;
	}
	if (func_464(iParam0))
	{
		return Global_262145.f_18355;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18352;
		
		case 191:
			return Global_262145.f_18354;
		
		case 190:
			return Global_262145.f_18353;
		
		case 227:
			return Global_262145.f_20911;
		
		case 226:
			return Global_262145.f_20899;
		
		case 225:
			return Global_262145.f_20919;
		
		case 230:
			return Global_262145.f_22171;
		
		case 229:
			return Global_262145.f_22075;
		
		case 233:
			return Global_262145.f_22645;
		
		case 237:
			return Global_262145.f_23801;
		
		case 238:
			return Global_262145.f_23912;
		
		case 249:
			return Global_262145.f_23928;
		
		default:
	}
	return -1;
}

int func_612(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12373;
		
		case 152:
			return Global_262145.f_12408;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12396;
		
		case 157:
			return Global_262145.f_12363;
		
		case 159:
			return Global_262145.f_12346;
		
		case 164:
			return Global_262145.f_12386;
		
		case 160:
			return Global_262145.f_12436;
		
		case 162:
			return Global_262145.f_12456;
		
		case 163:
			return Global_262145.f_12421;
		
		case 154:
			return Global_262145.f_12491;
		
		case 155:
			return Global_262145.f_12481;
		
		case 153:
			return Global_262145.f_12445;
		
		case 170:
			return Global_262145.f_14868;
		
		case 171:
			return Global_262145.f_14927;
		
		case 172:
			return Global_262145.f_14945;
		
		case 173:
			return Global_262145.f_14886;
		
		case 166:
			return Global_262145.f_14901;
		
		case 167:
			return Global_262145.f_14992;
		
		case 169:
			return Global_262145.f_14964;
		
		case 168:
			return Global_262145.f_14957;
		
		case 179:
			return Global_262145.f_18235;
		
		case 180:
			return Global_262145.f_18014;
		
		case 182:
			return Global_262145.f_18014;
		
		case 183:
			return Global_262145.f_18014;
		
		case 185:
			return Global_262145.f_18014;
		
		case 186:
			return Global_262145.f_18014;
		
		case 189:
			return Global_262145.f_18235;
		
		case 190:
			return Global_262145.f_17890;
		
		case 191:
			return Global_262145.f_17981;
		
		case 192:
			return Global_262145.f_17775;
		
		case 193:
			return Global_262145.f_18235;
		
		case 194:
			return Global_262145.f_18235;
		
		case 195:
			return Global_262145.f_18014;
		
		case 197:
			return Global_262145.f_18014;
		
		case 198:
			return Global_262145.f_18014;
		
		case 199:
			return Global_262145.f_18235;
		
		case 200:
			return Global_262145.f_18235;
		
		case 201:
			return Global_262145.f_18235;
		
		case 205:
			return Global_262145.f_18235;
		
		case 207:
			return Global_262145.f_18014;
		
		case 208:
			return Global_262145.f_18014;
		
		case 209:
			return Global_262145.f_18014;
		
		case 210:
			return Global_262145.f_18235;
		
		case 211:
			return Global_262145.f_18235;
		
		case 214:
			return Global_262145.f_19084;
		
		case 215:
			return Global_262145.f_19086;
		
		case 216:
			return Global_262145.f_19088;
		
		case 217:
			return Global_262145.f_19090;
		
		case 218:
			return Global_262145.f_19092;
		
		case 219:
			return Global_262145.f_19094;
		
		case 220:
			return Global_262145.f_19096;
		
		case 221:
			return Global_262145.f_19098;
		
		case 225:
			if (func_515(0) || func_352(0))
			{
				return Global_262145.f_20921;
			}
			break;
		
		case 226:
			if (func_515(0) || func_352(0))
			{
				return Global_262145.f_20901;
			}
			break;
		
		case 227:
			if (func_515(0) || func_352(0))
			{
				return Global_262145.f_20913;
			}
			break;
		
		case 229:
			if (func_515(0) || func_352(0))
			{
				return Global_262145.f_22077;
			}
			break;
		
		case 230:
			if (func_515(0) || func_352(0))
			{
				return Global_262145.f_22173;
			}
			break;
		
		case 233:
			if (func_515(0) || func_352(0))
			{
				return Global_262145.f_22644;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (func_515(0) || func_352(0))
			{
				return Global_262145.f_23803;
			}
			break;
		
		case 238:
			if (func_515(0) || func_352(0))
			{
				return Global_262145.f_23914;
			}
			break;
		
		case 249:
			if (func_515(0) || func_352(0))
			{
				return Global_262145.f_23930;
			}
			break;
	}
	return 0;
}

int func_613(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12372;
		
		case 152:
			return Global_262145.f_12407;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12395;
		
		case 157:
			return Global_262145.f_12362;
		
		case 159:
			return Global_262145.f_12345;
		
		case 164:
			return Global_262145.f_12385;
		
		case 160:
			return Global_262145.f_12435;
		
		case 162:
			return Global_262145.f_12455;
		
		case 163:
			return Global_262145.f_12420;
		
		case 154:
			return Global_262145.f_12490;
		
		case 155:
			return Global_262145.f_12480;
		
		case 153:
			return Global_262145.f_12444;
		
		case 170:
			return Global_262145.f_14867;
		
		case 171:
			return Global_262145.f_14926;
		
		case 172:
			return Global_262145.f_14944;
		
		case 173:
			return Global_262145.f_14885;
		
		case 166:
			return Global_262145.f_14900;
		
		case 179:
			return Global_262145.f_18234;
		
		case 180:
			return Global_262145.f_18013;
		
		case 182:
			return Global_262145.f_18013;
		
		case 183:
			return Global_262145.f_18013;
		
		case 185:
			return Global_262145.f_18013;
		
		case 186:
			return Global_262145.f_18013;
		
		case 189:
			return Global_262145.f_18234;
		
		case 193:
			return Global_262145.f_18234;
		
		case 194:
			return Global_262145.f_18234;
		
		case 195:
			return Global_262145.f_18013;
		
		case 197:
			return Global_262145.f_18013;
		
		case 198:
			return Global_262145.f_18013;
		
		case 199:
			return Global_262145.f_18234;
		
		case 200:
			return Global_262145.f_18234;
		
		case 201:
			return Global_262145.f_18234;
		
		case 205:
			return Global_262145.f_18234;
		
		case 207:
			return Global_262145.f_18013;
		
		case 208:
			return Global_262145.f_18013;
		
		case 209:
			return Global_262145.f_18013;
		
		case 210:
			return Global_262145.f_18234;
		
		case 211:
			return Global_262145.f_18234;
		
		case 190:
			if (!func_957())
			{
				return Global_262145.f_17889;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_957())
			{
				return Global_262145.f_17980;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_957())
			{
				return Global_262145.f_17774;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19083;
		
		case 215:
			return Global_262145.f_19085;
		
		case 216:
			return Global_262145.f_19087;
		
		case 217:
			return Global_262145.f_19089;
		
		case 218:
			return Global_262145.f_19091;
		
		case 219:
			return Global_262145.f_19093;
		
		case 220:
			return Global_262145.f_19095;
		
		case 221:
			return Global_262145.f_19097;
		
		case 225:
			if (func_352(0))
			{
				return Global_262145.f_20920;
			}
			break;
		
		case 226:
			if (func_352(0))
			{
				return Global_262145.f_20900;
			}
			break;
		
		case 227:
			if (func_352(0))
			{
				return Global_262145.f_20912;
			}
			break;
		
		case 229:
			if (func_352(0))
			{
				return Global_262145.f_22076;
			}
			break;
		
		case 230:
			if (func_352(0))
			{
				return Global_262145.f_22172;
			}
			break;
		
		case 233:
			if (func_352(0))
			{
				return Global_262145.f_22646;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_352(0))
			{
				return Global_262145.f_23802;
			}
			break;
		
		case 238:
			if (func_352(0))
			{
				return Global_262145.f_23913;
			}
			break;
		
		case 249:
			if (func_352(0))
			{
				return Global_262145.f_23929;
			}
			break;
	}
	return 0;
}

void func_614(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_957())
		{
			if (func_515(0))
			{
				if (!func_352(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_514()))
					{
						if (func_628() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_628());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_626(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_619("GB_BCUT_TICK1", func_514(), iVar0, 0, 0, 1, 1);
						}
						func_618(20);
						func_615(func_514(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_615(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1072(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_617(iParam0);
		func_616(&(Var0.f_6), &(Var0.f_7));
		unk_0xA40CC53DF8E50837(1, &Var0, 8, func_559(iParam0));
	}
}

void func_616(var uParam0, var uParam1)
{
	*uParam0 = Global_1643357.f_9;
	*uParam1 = Global_1643357.f_10;
}

var func_617(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_491;
}

void func_618(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::SET_BIT(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

int func_619(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		UI::_SET_NOTIFICATION_COLOR_NEXT(func_494(iParam1, -2, 1, 0, 0));
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_624(&Var1));
		if (!iParam3 == 0)
		{
			UI::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		UI::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		func_620(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_620(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_623() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_146(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_621(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1663381.f_5[iVar0 /*53*/] = iParam0;
		Global_1663381.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1663381.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1663381.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1663381.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1663381.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1663381.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1663381.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_621(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1663381 - 1))
	{
		if (iParam0 > Global_1663381.f_5[iVar0 /*53*/].f_1)
		{
			func_622(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1663381++;
	if (Global_1663381 > 5)
	{
		Global_1663381 = 5;
		return Global_1663381;
	}
	return (Global_1663381 - 1);
}

void func_622(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1663381.f_5[iVar0 /*53*/] = { Global_1663381.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_623()
{
	return DLC2::IS_DLC_PRESENT(-1762644250);
}

var func_624(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_625(&cVar0);
}

var func_625(char[4] cParam0)
{
	return cParam0;
}

void func_626(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_627(1);
	}
	else
	{
		iVar1 = func_627(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

var func_627(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12277;
}

int func_628()
{
	return Global_262145.f_12276;
}

void func_629(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_352(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_957())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_514();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1589747[iVar11 /*790*/].f_768.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				uVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				uVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = uVar1;
			if (bVar19)
			{
				iVar2 = Global_1589747[iVar11 /*790*/].f_768.f_2;
			}
			else
			{
				iVar2 = func_645(Global_1589747[iVar11 /*790*/].f_768, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_644(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_643("TICK_TCUT", iVar10, 1);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1667120.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_642(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_640(*uParam3);
				}
				iVar6 = func_639(&uVar5);
				iVar7 = Global_262145.f_23832;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23831));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_618(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_638(iVar23))
								{
									func_630(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23804;
				uVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = uVar3;
				iVar4 = Global_262145.f_23805;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677631 = *iParam2;
					func_618(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_630(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_632(iParam0);
	func_631(iParam0, uVar0, iParam1, iParam2);
}

void func_631(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -1854838991;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_617(iParam0);
	func_616(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_22())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			unk_0xA40CC53DF8E50837(1, &Var0, 8, func_559(iParam0));
		}
	}
}

int func_632(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_637();
	iVar0 = func_635(iParam0, iVar0);
	iVar1 = Global_1625435[func_514() /*560*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14828));
	if (iVar0 < func_634())
	{
		iVar0 = func_634();
	}
	if (iVar0 > func_633())
	{
		iVar0 = func_633();
	}
	return iVar0;
}

int func_633()
{
	return Global_262145.f_14829;
}

int func_634()
{
	return Global_262145.f_16004;
}

int func_635(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_703(iParam0) * func_636());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_636()
{
	return Global_262145.f_16003;
}

var func_637()
{
	return Global_262145.f_12268;
}

int func_638(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_326(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_199(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_639(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_146(iVar2, 0) && !func_326(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_146(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_640(int iParam0)
{
	func_641(iParam0, 7236);
}

void func_641(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_536(iParam1, -1, 0);
	func_534(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_642(int iParam0)
{
	func_641(iParam0, 7231);
}

int func_643(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	UI::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	func_620(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

var func_644(var uParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(uParam0);
	fVar1 = (fVar0 * Global_262145.f_23833);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

var func_645(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_646(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_352(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_957())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_514();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_658(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_649(uParam1->f_16) + uParam1->f_8);
			}
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_544(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_543(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_648(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_643("SMTICK_RONCUT", func_648(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_648(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_647(iVar2, iVar9);
				iVar6 = func_639(&uVar5);
				iVar7 = Global_262145.f_22190;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22189));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_618(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_638(iVar20))
								{
									func_630(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22123;
				uVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = uVar3;
				iVar4 = Global_262145.f_22124;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677631 = *iParam2;
					func_618(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_647(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_641(iParam0, 6116);
	}
	if (iParam1 > 0)
	{
		func_641(iParam1, 6117);
	}
}

int func_648(var uParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(uParam0);
	fVar1 = (fVar0 * Global_262145.f_22157);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22158))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22158);
	}
	return SYSTEM::ROUND(fVar1);
}

int func_649(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_656())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_658(PLAYER::PLAYER_ID());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_651(func_652(func_655(iVar0), -1, -1));
		if (func_650(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case -508960047:
			return 5;
		
		case -1996578712:
			return 5;
		
		case -324063008:
			return 7;
		
		case -1537242760:
			return 7;
		
		case 167523060:
			return 1;
		
		case 440723308:
			return 1;
		
		case -1821684485:
			return 6;
		
		case 1075487129:
			return 6;
		
		case 1339867730:
			return 4;
		
		case 1158536477:
			return 4;
		
		case -1222709082:
			return 0;
		
		case -260422691:
			return 0;
		
		case -1117639471:
			return 3;
		
		case -1434473216:
			return 3;
		
		case 690570889:
			return 2;
		
		case 320416020:
			return 2;
		
		default:
	}
	return -1;
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -508960047;
		
		case 2:
			return -1996578712;
		
		case 3:
			return -324063008;
		
		case 4:
			return -1537242760;
		
		case 5:
			return 167523060;
		
		case 6:
			return 440723308;
		
		case 7:
			return -1821684485;
		
		case 8:
			return 1075487129;
		
		case 9:
			return 1339867730;
		
		case 10:
			return 1158536477;
		
		case 11:
			return -1222709082;
		
		case 12:
			return -260422691;
		
		case 13:
			return -1117639471;
		
		case 14:
			return -1434473216;
		
		case 15:
			return 690570889;
		
		case 16:
			return 320416020;
		
		default:
	}
	return 0;
}

int func_652(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_148();
	}
	iVar0 = 0;
	iVar1 = func_654(iParam0, iParam1);
	uVar2 = func_653(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_653(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	return iVar0;
}

int func_654(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_148();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	return iVar0;
}

int func_655(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 16011;
		
		case 1:
			return 16012;
		
		case 2:
			return 16013;
		
		case 3:
			return 16014;
		
		case 4:
			return 16015;
		
		case 5:
			return 16016;
		
		case 6:
			return 16017;
		
		case 7:
			return 16018;
		
		case 8:
			return 16019;
		
		case 9:
			return 16020;
		
		case 10:
			return 16021;
		
		case 11:
			return 16022;
		
		case 12:
			return 16023;
		
		case 13:
			return 16024;
		
		case 14:
			return 16025;
		
		case 15:
			return 16026;
		
		case 16:
			return 16027;
		
		case 17:
			return 16028;
		
		case 18:
			return 16029;
		
		case 19:
			return 16030;
		
		case 20:
			return 16031;
		
		case 21:
			return 16032;
		
		case 22:
			return 16033;
		
		case 23:
			return 16034;
		
		case 24:
			return 16035;
		
		case 25:
			return 16036;
		
		case 26:
			return 16037;
		
		case 27:
			return 16038;
		
		case 28:
			return 16039;
		
		case 29:
			return 16040;
		
		case 30:
			return 16041;
		
		case 31:
			return 16042;
		
		case 32:
			return 16043;
		
		case 33:
			return 16044;
		
		case 34:
			return 16045;
		
		case 35:
			return 16046;
		
		case 36:
			return 16047;
		
		case 37:
			return 16048;
		
		case 38:
			return 16049;
		
		case 39:
			return 16050;
		
		case 40:
			return 16051;
		
		case 41:
			return 16052;
		
		case 42:
			return 16053;
		
		case 43:
			return 16054;
		
		case 44:
			return 16055;
		
		case 45:
			return 16056;
		
		case 46:
			return 16057;
		
		case 47:
			return 16058;
		
		case 48:
			return 16059;
		
		case 49:
			return 16060;
		
		default:
	}
	return 16011;
}

bool func_656()
{
	return func_657() != 0;
}

int func_657()
{
	return Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_255;
}

int func_658(int iParam0)
{
	if (iParam0 != func_22() && func_659(iParam0))
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255.f_3;
	}
	return 0;
}

int func_659(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_255 != 0;
	}
	return 0;
}

void func_660(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_352(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_957())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_514();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_547(iVar15);
			iVar0 = (func_681(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_677(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_20903));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_20902));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_674(iVar16, iVar2);
				if (func_670(iVar16) >= Global_262145.f_20451 || iVar2 >= Global_262145.f_20451)
				{
					func_661(5);
				}
				iVar6 = func_639(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_20905);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_20904));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_618(108);
					}
					else
					{
						func_618(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_638(iVar20))
								{
									func_630(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20906;
				uVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = uVar3;
				iVar4 = Global_262145.f_20907;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1677631 = *iParam2;
					func_618(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20439)
			{
				if (func_663(Global_262145.f_20440))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20441)
			{
				if (func_663(Global_262145.f_20442))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20443)
			{
				if (func_663(Global_262145.f_20444))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20445)
			{
				if (func_663(Global_262145.f_20446))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20447)
			{
				if (func_663(Global_262145.f_20448))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20449)
			{
				if (func_663(Global_262145.f_20450))
				{
					func_643("CLOTHAWDSTRAP3", Global_262145.f_20451, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20452)
			{
				if (func_663(Global_262145.f_20453))
				{
					func_643("CLOTHAWDSTRAP5", Global_262145.f_20585, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20455)
			{
				if (func_663(Global_262145.f_20456))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20457)
			{
				if (func_663(Global_262145.f_20458))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20459)
			{
				if (func_663(Global_262145.f_20460))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20461)
			{
				if (func_663(Global_262145.f_20462))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20463)
			{
				if (func_663(Global_262145.f_20464))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20465)
			{
				if (func_663(Global_262145.f_20466))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20467)
			{
				if (func_663(Global_262145.f_20468))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20469)
			{
				if (func_663(Global_262145.f_20470))
				{
					func_662("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_662(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	if (!iParam2 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	if (!iParam3 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
	}
	else
	{
		Global_2503649 = { func_88(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2503579, 35, &Global_2503649))
		{
			iVar1 = 0;
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2503579.f_22), "Leader") && Global_2503579.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2503579.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = UI::_DRAW_NOTIFICATION_CLAN_INVITE(iVar2, NETWORK::_0x7543BB439F63792B(&Global_2503579, 35), &(Global_2503579.f_17), Global_2503579.f_30, iVar1, 0, Global_2503579, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314014, Global_1314015, Global_1314016);
		}
		else
		{
			iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		}
	}
	func_620(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case 558790811:
		case 1740171158:
		case -1191485992:
		case -1735342207:
			if (!func_667(15417, -1, -1))
			{
				func_666(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2108830041:
		case -120911428:
		case -1407302654:
		case -2039798986:
			if (!func_667(15418, -1, -1))
			{
				func_666(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1898746692:
		case -1359197372:
		case -140996548:
		case -1850642937:
			if (!func_667(15425, -1, -1))
			{
				func_666(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -695364761:
		case 1263491585:
		case -1307315235:
		case 258618816:
			if (!func_667(15405, -1, -1))
			{
				func_666(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case 2024167318:
		case 1915398071:
		case -571324979:
		case 1374601256:
			if (!func_667(15393, -1, -1))
			{
				func_666(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1720955761:
		case 1608057620:
		case 867332432:
		case -660288110:
			if (!func_667(15409, -1, -1))
			{
				func_666(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case 221872318:
		case -1802539904:
		case -1005186539:
		case -426022529:
			if (!func_667(15396, -1, -1))
			{
				func_666(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2098369500:
		case -1196968784:
		case -1314656979:
		case -1132522169:
			if (!func_667(15412, -1, -1))
			{
				func_666(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1172743557:
		case -1502212019:
		case 1110085176:
		case -889671110:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1883175477:
		case -584614481:
		case -1736983851:
		case -182614393:
			if (!func_667(15403, -1, -1))
			{
				func_666(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1449333520:
		case -890709710:
		case -1496983695:
		case 48701978:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -869990766:
		case -581140963:
		case 1827333048:
		case -646852824:
			if (!func_667(15389, -1, -1))
			{
				func_666(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case -542628448:
		case -870458464:
		case 420690954:
		case -408392811:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 787769067:
		case 1132791298:
		case 1330653315:
		case 1717168382:
			if (!func_667(15398, -1, -1))
			{
				func_666(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -1361097493:
		case -73647644:
		case -1036580403:
		case -1765816422:
		case -1991379993:
		case -1731611121:
			if (!func_667(15400, -1, -1))
			{
				func_666(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1167465472:
		case -313418417:
		case -203035350:
		case -1533320367:
		case 2065127290:
		case -390081030:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -2105609173:
		case -698486936:
		case 917598912:
		case 939297301:
		case -56403312:
		case -1368923829:
			if (!func_667(15408, -1, -1))
			{
				func_666(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1864920868:
		case -1072905530:
		case 682284723:
		case 1186965403:
		case -292700571:
		case -2068738593:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1729183056:
		case 2114404000:
		case 481083063:
		case 1575507436:
		case -648899601:
		case -612123774:
			if (!func_667(15411, -1, -1))
			{
				func_666(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1967315379:
		case 1750602562:
		case 114660105:
		case 1783131820:
		case -889194678:
		case 801334272:
			if (!func_667(15397, -1, -1))
			{
				func_666(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1192623422:
		case 1330733365:
		case 1897981854:
		case 2059866009:
		case 867092646:
		case -146705667:
			if (!func_667(15413, -1, -1))
			{
				func_666(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1444780905:
		case 1272666697:
		case 1601455173:
		case -1997689882:
		case 627387411:
		case -847831191:
			if (!func_667(15391, -1, -1))
			{
				func_666(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case 444212231:
		case -1563654102:
		case 1932815241:
		case -1617209023:
		case 308545041:
		case 1682427144:
			if (!func_667(15388, -1, -1))
			{
				func_666(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case 704955164:
		case -720081735:
		case 1626031863:
		case -1391954917:
		case 35480964:
		case 2029975158:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1124704392:
		case -850093035:
		case 926585800:
		case -1832969872:
		case 1539395388:
		case 1377465778:
			if (!func_667(15401, -1, -1))
			{
				func_666(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case 1029334921:
		case -322091380:
		case -1604737223:
		case -836382797:
			if (!func_667(15394, -1, -1))
			{
				func_666(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case -534855486:
		case -1168575065:
		case -1367129204:
		case -1006027910:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -516333262:
		case 756873456:
		case 87453937:
		case -1438775324:
			if (!func_667(15406, -1, -1))
			{
				func_666(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case 485135095:
		case -730037708:
		case -1686659723:
		case -1094274807:
			if (!func_667(15395, -1, -1))
			{
				func_666(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1713551997:
		case -970458486:
		case 1992217604:
		case -1348726092:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1490658501:
		case 975601953:
		case -1934557208:
		case 1786218600:
			if (!func_667(15410, -1, -1))
			{
				func_666(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1735635238:
		case 1614208560:
		case -1034032319:
		case -1858021894:
			if (!func_667(15407, -1, -1))
			{
				func_666(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1931303956:
		case -726032561:
		case 1747334867:
		case 1237632771:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1931617488:
		case -1824987162:
		case 236389050:
		case 1987485798:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1726332301:
		case 417579524:
		case 591736086:
		case 908992470:
			if (!func_667(15414, -1, -1))
			{
				func_666(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1382922530:
		case 734151492:
		case -357636850:
		case -1021993708:
			if (!func_667(15415, -1, -1))
			{
				func_666(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case 452778672:
		case -1766862320:
		case 479676642:
		case -1654828636:
			if (!func_667(15399, -1, -1))
			{
				func_666(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1776790350:
		case 579562906:
		case 242920617:
		case -1365707749:
			if (!func_667(15404, -1, -1))
			{
				func_666(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1988057295:
		case -619754931:
		case -1219723702:
		case -388208479:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case 816707921:
		case 1424441799:
		case -1576971340:
		case 2087194554:
			if (!func_667(15392, -1, -1))
			{
				func_666(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case 744446190:
		case -1405036369:
		case -622901905:
		case 981732339:
			if (!func_667(15390, -1, -1))
			{
				func_666(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case 917772807:
		case 1929056908:
		case -981132613:
		case 1271443068:
			if (!func_667(15402, -1, -1))
			{
				func_666(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case -292922355:
		case -34538790:
		case -1908986844:
		case -1785118184:
			if (!func_667(15416, -1, -1))
			{
				func_666(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1495432685:
		case 1898518287:
		case 2029126042:
		case -1521032813:
			if (!func_402(209, -1))
			{
				func_664(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case -2123485438:
		case 1457900554:
		case -14316613:
		case 619771057:
			if (!func_667(15426, -1, -1))
			{
				func_666(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case -815706791:
		case -1066127505:
		case 1281631799:
		case -1519028808:
			if (!func_667(15422, -1, -1))
			{
				func_666(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case -1318802347:
		case -1366750043:
		case 447234752:
		case 1996626130:
			if (!func_667(15423, -1, -1))
			{
				func_666(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case 306110040:
		case 1944822196:
		case 278933172:
		case -1981759857:
			if (!func_667(15421, -1, -1))
			{
				func_666(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1828101251:
		case -1639289459:
		case -562607521:
		case -879279621:
			if (!func_667(15427, -1, -1))
			{
				func_666(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case -919314748:
		case 1282565442:
		case 755492739:
		case 1276101346:
			if (!func_667(15419, -1, -1))
			{
				func_666(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case 1971111649:
		case -884280700:
		case -85982412:
		case 1573086793:
			if (!func_667(15420, -1, -1))
			{
				func_666(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_664(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_665())
	{
		iVar0 = Global_2566070[iParam0 /*3*/][func_403(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_665()
{
	return 1;
	return 0;
}

int func_666(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_148();
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

int func_667(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_148();
	}
	iVar1 = func_669(iParam0, iParam1);
	uVar2 = func_668(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_668(int iParam0)
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
	return iVar0;
}

int func_669(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_148();
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
	return iVar0;
}

int func_670(int iParam0)
{
	int iVar0;
	
	iVar0 = func_672(iParam0);
	return func_536(func_671(iVar0), -1, 0);
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3951;
		
		case 1:
			return 3952;
		
		case 2:
			return 3953;
		
		case 3:
			return 3954;
		
		case 4:
			return 3955;
		
		case 5:
			return 5456;
		
		default:
	}
	return 3951;
}

int func_672(int iParam0)
{
	int iVar0;
	
	if (func_673(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_673(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_674(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_672(iParam0);
	iVar1 = func_671(iVar0);
	iVar2 = (func_536(iVar1, -1, 0) + iParam1);
	func_534(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_652(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iVar0 /*12*/] != 0)
			{
				iVar1 = func_671(iVar0);
				iVar3 = (iVar3 + func_536(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_676(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_675(9357, iVar5, -1, 1);
	}
}

var func_675(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_148();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_677(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_560(iParam1);
	if (func_673(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16834;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16839);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16833;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16838);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16843);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16832;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16837);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16842);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16830;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16835);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16840);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16831;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16836);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16841);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20928;
				if (func_678(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20930);
				}
				if (func_678(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20929);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_678(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_680(iParam0, iParam1))
	{
		iVar0 = func_679(iParam0, iParam1);
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_679(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_673(iParam1) && iParam0 != func_22())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_680(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_673(iParam1) && iParam0 != func_22())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_681(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (func_673(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_682(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	var uVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_563())
			{
				Var0 = { func_562() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_677(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18464);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18463);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_639(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18454);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18453));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_618(86);
				}
				Global_2524719.f_4883.f_372 = *iParam2;
			}
			else if (func_352(0))
			{
				Var15 = { func_683(func_514()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_677(func_514(), Var15, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18464));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18463));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18503;
				uVar24 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar23));
				*iParam2 = uVar24;
				iVar25 = Global_262145.f_18504;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_683(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_188;
}

void func_684(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_245(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_699();
			}
			func_698();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_245(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_690(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_689(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_639(&uVar2);
					iVar4 = Global_262145.f_16014;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15223));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_618(44);
					}
				}
				func_687(*iParam3);
				func_686();
				Global_2524719.f_4883.f_372 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_638(iVar9))
						{
							func_630(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_245(PLAYER::PLAYER_ID()))
		{
			func_685();
		}
	}
}

void func_685()
{
	int iVar0;
	
	iVar0 = Global_2568270[func_148()];
	iVar0++;
	func_533(3667, iVar0, -1, 1);
}

void func_686()
{
	int iVar0;
	
	iVar0 = Global_2568276[func_148()];
	iVar0++;
	func_533(3666, iVar0, -1, 1);
}

void func_687(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2568279[func_148()];
	iVar0 = (iVar0 + iParam0);
	func_533(3668, iVar0, -1, 1);
	if (func_652(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_688(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_675(7666, iVar2, -1, 1);
	}
}

int func_688(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16147;
			break;
		
		case 2:
			return Global_262145.f_16148;
			break;
		
		case 3:
			return Global_262145.f_16149;
			break;
		
		case 4:
			return Global_262145.f_16150;
			break;
		
		case 5:
			return Global_262145.f_16151;
			break;
		
		case 6:
			return Global_262145.f_16152;
			break;
		
		case 7:
			return Global_262145.f_16153;
			break;
		
		case 8:
			return Global_262145.f_16154;
			break;
		
		case 9:
			return Global_262145.f_16155;
			break;
		
		case 10:
			return Global_262145.f_16156;
			break;
		
		case 11:
			return Global_262145.f_16157;
			break;
		
		case 12:
			return Global_262145.f_16158;
			break;
		
		case 13:
			return Global_262145.f_16159;
			break;
		
		case 14:
			return Global_262145.f_16160;
			break;
		
		case 15:
			return Global_262145.f_16161;
			break;
		
		case 16:
			return Global_262145.f_16162;
			break;
		
		case 17:
			return Global_262145.f_16163;
			break;
		
		case 18:
			return Global_262145.f_16164;
			break;
		
		case 19:
			return Global_262145.f_16165;
			break;
		
		case 20:
			return Global_262145.f_16166;
			break;
		
		case 21:
			return Global_262145.f_16167;
			break;
		
		case 22:
			return Global_262145.f_16168;
			break;
		
		case 23:
			return Global_262145.f_16169;
			break;
		
		case 24:
			return Global_262145.f_16170;
			break;
	}
	return 0;
}

var func_689(int iParam0)
{
	if (iParam0 >= Global_262145.f_15201)
	{
		return Global_262145.f_15222;
	}
	else if (iParam0 >= Global_262145.f_15200)
	{
		return Global_262145.f_15221;
	}
	else if (iParam0 >= Global_262145.f_15199)
	{
		return Global_262145.f_15220;
	}
	else if (iParam0 >= Global_262145.f_15198)
	{
		return Global_262145.f_15219;
	}
	else if (iParam0 >= Global_262145.f_15197)
	{
		return Global_262145.f_15218;
	}
	else if (iParam0 >= Global_262145.f_15196)
	{
		return Global_262145.f_15217;
	}
	else if (iParam0 >= Global_262145.f_15195)
	{
		return Global_262145.f_15216;
	}
	else if (iParam0 >= Global_262145.f_15194)
	{
		return Global_262145.f_15215;
	}
	else if (iParam0 >= Global_262145.f_15193)
	{
		return Global_262145.f_15214;
	}
	else if (iParam0 >= Global_262145.f_15192)
	{
		return Global_262145.f_15213;
	}
	else if (iParam0 >= Global_262145.f_15191)
	{
		return Global_262145.f_15212;
	}
	else if (iParam0 >= Global_262145.f_15190)
	{
		return Global_262145.f_15211;
	}
	else if (iParam0 >= Global_262145.f_15189)
	{
		return Global_262145.f_15210;
	}
	else if (iParam0 >= Global_262145.f_15188)
	{
		return Global_262145.f_15209;
	}
	else if (iParam0 >= Global_262145.f_15187)
	{
		return Global_262145.f_15208;
	}
	else if (iParam0 >= Global_262145.f_15186)
	{
		return Global_262145.f_15207;
	}
	else if (iParam0 >= Global_262145.f_15185)
	{
		return Global_262145.f_15206;
	}
	else if (iParam0 >= Global_262145.f_15184)
	{
		return Global_262145.f_15205;
	}
	else if (iParam0 >= Global_262145.f_15183)
	{
		return Global_262145.f_15204;
	}
	else if (iParam0 >= Global_262145.f_15182)
	{
		return Global_262145.f_15203;
	}
	return Global_262145.f_15202;
}

int func_690(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_697(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_696(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_695(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_691(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_691(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_695(GAMEPLAY::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_691(int iParam0)
{
	int iVar0;
	
	if (func_694(iParam0))
	{
		iVar0 = func_692(func_693(iParam0));
		return func_536(iVar0, -1, 0);
	}
	return 0;
}

int func_692(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3646;
	}
	else if (iParam0 == 1)
	{
		return 3647;
	}
	else if (iParam0 == 2)
	{
		return 3648;
	}
	else if (iParam0 == 3)
	{
		return 3649;
	}
	else if (iParam0 == 4)
	{
		return 3650;
	}
	return 3646;
}

int func_693(int iParam0)
{
	int iVar0;
	
	if (func_694(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_98[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_694(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_695(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15401;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15399;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15403;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15397;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15395;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15405;
	}
	return 0;
}

int func_696(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_694(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1668370[iVar0] == iParam1 && Global_1668377[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_697(int iParam0)
{
	int iVar0;
	
	if (func_694(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_98[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_698()
{
	int iVar0;
	
	iVar0 = Global_2568267[func_148()];
	iVar0++;
	Global_2568267[func_148()] = iVar0;
	func_533(3665, iVar0, -1, 1);
}

void func_699()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2568264[func_148()];
	iVar1 = Global_2568273[func_148()];
	iVar0++;
	iVar1++;
	Global_2568264[func_148()] = iVar0;
	Global_2568273[func_148()] = iVar1;
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_120 = iVar1;
	func_533(3663, iVar0, -1, 1);
	func_533(3664, iVar1, -1, 1);
}

void func_700()
{
	if (func_957())
	{
		Global_2449169.f_3068.f_134 = 0;
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
	}
}

void func_701()
{
	if (func_957())
	{
		if (Global_2449169.f_3068.f_134 < 10)
		{
			Global_2449169.f_3068.f_134++;
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
		}
	}
}

void func_702()
{
	if (func_957())
	{
		if (Global_2449169.f_3068.f_134 > 0)
		{
			Global_2449169.f_3068.f_134 = (Global_2449169.f_3068.f_134 - 1);
			Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_408 = Global_2449169.f_3068.f_134;
		}
	}
}

int func_703(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_28;
}

int func_704(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
			if (func_515(1) && !func_352(1))
			{
				if (func_705(func_514()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_705(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_22, 26);
}

int func_706(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12393) * Global_262145.f_12398));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12343) * Global_262145.f_12348));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12370) * Global_262145.f_12374));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12383) * Global_262145.f_12387));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12405) * Global_262145.f_12410));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12567) * Global_262145.f_12568));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12573) * Global_262145.f_12574));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12571) * Global_262145.f_12572));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12565) * Global_262145.f_12566));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12569) * Global_262145.f_12570));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12563) * Global_262145.f_12564));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14924;
		
		case 172:
			return Global_262145.f_14940;
		
		case 173:
			return Global_262145.f_14883;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18158;
		
		case 180:
			return Global_262145.f_18034;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18042;
		
		case 185:
			return Global_262145.f_18051;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18246;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18263;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18111;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18294;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18172;
		
		case 205:
			return Global_262145.f_18281;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18139;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18276;
		
		case 211:
			return Global_262145.f_18240;
		
		case 214:
			return Global_262145.f_18833;
		
		case 215:
			return Global_262145.f_18843;
		
		case 216:
			return Global_262145.f_18853;
		
		case 217:
			return Global_262145.f_18862;
		
		case 218:
			return Global_262145.f_18871;
		
		case 219:
			return Global_262145.f_18887;
		
		case 241:
			return Global_262145.f_23949;
		
		case 242:
			return Global_262145.f_23945;
		
		case 248:
			return Global_262145.f_23948;
		
		case 244:
			return Global_262145.f_23946;
		
		case 239:
			return Global_262145.f_23950;
		
		case 240:
			return Global_262145.f_23951;
		
		default:
	}
	return 0;
}

int func_707(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12394) * Global_262145.f_12399));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12344) * Global_262145.f_12349));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12371) * Global_262145.f_12375));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12384) * Global_262145.f_12388));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12406) * Global_262145.f_12411));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12443) * Global_262145.f_12446));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12489) * Global_262145.f_12492));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12479) * Global_262145.f_12482));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12434) * Global_262145.f_12437));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12454) * Global_262145.f_12459));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12419) * Global_262145.f_12422));
		
		case 170:
			return Global_262145.f_14866;
		
		case 171:
			return Global_262145.f_14925;
		
		case 172:
			return Global_262145.f_14941;
		
		case 173:
			return Global_262145.f_14884;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16962;
		
		case 168:
			return Global_262145.f_16961;
		
		case 179:
			return Global_262145.f_18159;
		
		case 180:
			return Global_262145.f_18035;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18043;
		
		case 185:
			return Global_262145.f_18052;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18247;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18264;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18112;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18295;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18173;
		
		case 205:
			return Global_262145.f_18282;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18140;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18277;
		
		case 211:
			return Global_262145.f_18241;
		
		case 214:
			return Global_262145.f_18834;
		
		case 215:
			return Global_262145.f_18844;
		
		case 216:
			return Global_262145.f_18854;
		
		case 217:
			return Global_262145.f_18863;
		
		case 218:
			return Global_262145.f_18872;
		
		case 219:
			return Global_262145.f_18888;
		
		case 178:
			if (func_957())
			{
				return Global_262145.f_18711;
			}
			else if (bParam1)
			{
				return Global_262145.f_18712;
			}
			break;
		
		case 188:
			if (func_957())
			{
				return Global_262145.f_18795;
			}
			else if (bParam1)
			{
				return Global_262145.f_18796;
			}
			break;
		
		case 225:
			if (func_957() && !func_563())
			{
				if (func_705(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20916;
				}
				else
				{
					return Global_262145.f_20917;
				}
			}
			else if (func_563())
			{
				return Global_262145.f_20918;
			}
			break;
		
		case 226:
			if (func_957() && !func_563())
			{
				if (func_705(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20896;
				}
				else
				{
					return Global_262145.f_20897;
				}
			}
			else if (func_563())
			{
				return Global_262145.f_20898;
			}
			break;
		
		case 227:
			if (func_957() && !func_563())
			{
				if (func_705(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_20908;
				}
				else
				{
					return Global_262145.f_20909;
				}
			}
			else if (func_563())
			{
				return Global_262145.f_20910;
			}
			break;
		
		case 229:
			if (func_957() && !func_563())
			{
				if (func_705(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22072;
				}
				else
				{
					return Global_262145.f_22073;
				}
			}
			else if (func_563())
			{
				return Global_262145.f_22074;
			}
			break;
		
		case 230:
			if (func_957() && !func_563())
			{
				if (func_705(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22168;
				}
				else
				{
					return Global_262145.f_22169;
				}
			}
			else if (func_563())
			{
				return Global_262145.f_22170;
			}
			break;
		
		case 233:
			if (func_957() && !func_563())
			{
				if (func_705(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22642;
				}
				else
				{
					return Global_262145.f_22643;
				}
			}
			else if (func_563())
			{
				return Global_262145.f_22641;
			}
			break;
		
		case 241:
			return Global_262145.f_23956;
		
		case 242:
			return Global_262145.f_23952;
		
		case 244:
			return Global_262145.f_23953;
		
		case 248:
			return Global_262145.f_23955;
		
		case 239:
			return Global_262145.f_23957;
		
		case 240:
			return Global_262145.f_23958;
		
		case 237:
			if (func_957() && !func_563())
			{
				if (func_705(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23798;
				}
				else
				{
					return Global_262145.f_23799;
				}
			}
			else if (func_563())
			{
				return Global_262145.f_23800;
			}
			break;
		
		case 238:
			if (func_957() && !func_563())
			{
				if (func_705(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23909;
				}
				else
				{
					return Global_262145.f_23910;
				}
			}
			else if (func_563())
			{
				return Global_262145.f_23911;
			}
			break;
		
		case 249:
			if (func_957() && !func_563())
			{
				if (func_705(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23925;
				}
				else
				{
					return Global_262145.f_23926;
				}
			}
			else if (func_563())
			{
				return Global_262145.f_23927;
			}
			break;
	}
	return 0;
}

void func_708(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_709(iParam0))
	{
		if (!func_957())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12287;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_292(PLAYER::PLAYER_ID(), 1))
	{
		if (func_417(iParam0))
		{
			*uParam1 = (Global_262145.f_18011 / 100f);
			*uParam2 = (Global_262145.f_18011 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_23959;
			*uParam2 = Global_262145.f_23959;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_23960;
			*uParam2 = Global_262145.f_23960;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_23962;
			*uParam2 = Global_262145.f_23962;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_23963;
			*uParam2 = Global_262145.f_23963;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_23964;
			*uParam2 = Global_262145.f_23964;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_23965;
			*uParam2 = Global_262145.f_23965;
		}
		else
		{
			*uParam1 = Global_262145.f_12284;
			*uParam2 = Global_262145.f_12283;
		}
	}
	else if (func_417(iParam0))
	{
		*uParam1 = (Global_262145.f_18012 / 100f);
		*uParam2 = (Global_262145.f_18012 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_23966;
		*uParam2 = Global_262145.f_23966;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_23967;
		*uParam2 = Global_262145.f_23967;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_23969;
		*uParam2 = Global_262145.f_23969;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_23970;
		*uParam2 = Global_262145.f_23970;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_23971;
		*uParam2 = Global_262145.f_23971;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_23972;
		*uParam2 = Global_262145.f_23972;
	}
	else
	{
		*uParam1 = Global_262145.f_12286;
		*uParam2 = Global_262145.f_12285;
	}
	iVar0 = func_355();
	if (iVar0 != func_22())
	{
		if (func_326(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_709(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_710(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_284(PLAYER::PLAYER_ID());
		Global_1667085.f_4 = func_810();
		Global_1667085.f_5 = func_809();
		if (func_251(PLAYER::PLAYER_ID()) || func_252(PLAYER::PLAYER_ID()))
		{
			Global_1667085.f_6 = 1;
		}
		else
		{
			Global_1667085.f_6 = 0;
		}
		Global_1667085.f_1 = func_805(bParam9);
		Global_1667085.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1667085.f_9 = func_804(bParam0);
		Global_1667085.f_10 = iParam1;
		Global_1667085.f_17 = Global_1667085.f_2;
		Global_1667085.f_18 = Global_1667085.f_2;
		Global_1667085.f_19 = func_803();
		Global_1667085.f_21 = (Global_1667085.f_8 - Global_1667085.f_7);
		if (func_292(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667085.f_23 = func_804(func_352(1));
		}
		Global_1667085.f_24 = func_802(PLAYER::PLAYER_ID());
		Global_1667085.f_28 = func_801(PLAYER::PLAYER_ID());
		if (Global_1667085.f_24 > 2)
		{
			Global_1667085.f_24 = 2;
		}
		func_799(iVar0);
	}
	else
	{
		iVar0 = func_226(PLAYER::PLAYER_ID());
	}
	if (func_417(iVar0))
	{
		Global_1666824.f_2 = func_810();
		Global_1666824.f_3 = func_809();
		Global_1666824.f_50 = iParam4;
		Global_1666824.f_51 = iParam5;
		Global_1666824.f_10 = NETWORK::_GET_POSIX_TIME();
		Global_1666824.f_20 = (Global_1666824.f_10 - Global_1666824.f_9);
		Global_1666824.f_12 = iParam1;
		Global_1666824.f_19 = func_793(iVar0, bParam0, func_798(bParam3));
		if (bParam0)
		{
			Global_1666824.f_11 = 1;
		}
		else
		{
			Global_1666824.f_11 = 0;
		}
		if ((func_246(PLAYER::PLAYER_ID()) || func_397(PLAYER::PLAYER_ID())) || func_298(PLAYER::PLAYER_ID()))
		{
			Global_1666824.f_8 = 1;
		}
		else
		{
			Global_1666824.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1666824.f_43 = 0;
			Global_1666824.f_45 = func_792(func_514(), iParam2);
			Global_1666824.f_47 = iParam7;
			Global_1666824.f_46 = iParam6;
			Global_1666824.f_52 = func_791(func_514(), iParam2);
		}
		func_789(iVar0);
	}
	else if (func_422(iVar0))
	{
		Global_1666878.f_2 = func_810();
		Global_1666878.f_3 = func_809();
		Global_1666878.f_10 = NETWORK::_GET_POSIX_TIME();
		Global_1666878.f_19 = (Global_1666878.f_10 - Global_1666878.f_9);
		Global_1666878.f_12 = iParam1;
		if (bParam0)
		{
			Global_1666878.f_11 = 1;
		}
		else
		{
			Global_1666878.f_11 = 0;
		}
		if ((func_246(PLAYER::PLAYER_ID()) || func_397(PLAYER::PLAYER_ID())) || func_298(PLAYER::PLAYER_ID()))
		{
			Global_1666878.f_8 = 1;
		}
		else
		{
			Global_1666878.f_8 = 0;
		}
		func_787(iVar0);
	}
	else if (func_461(iVar0))
	{
		Global_1666941.f_2 = func_810();
		Global_1666941.f_3 = func_809();
		Global_1666941.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1666941.f_18 = (Global_1666941.f_9 - Global_1666941.f_8);
		Global_1666941.f_11 = iParam1;
		Global_1666941.f_7 = func_803();
		Global_1666941.f_42 = func_785(func_148(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_547(iVar1);
		Global_1666941.f_28 = iVar2;
		Global_1666941.f_29 = func_804((func_784(iVar1) || func_783(iVar1)));
		Global_1666941.f_30 = func_804(func_782(iVar1));
		Global_1666941.f_32 = func_804(func_781(iVar1));
		Global_1666941.f_33 = func_804(func_780(iVar1));
		Global_1666941.f_34 = func_804(func_779(iVar1));
		Global_1666941.f_35 = func_804(func_778(0, iVar1) == 1);
		Global_1666941.f_36 = func_804(func_777(iVar1));
		Global_1666941.f_37 = func_804(func_776(iVar1));
		Global_1666941.f_38 = func_804(func_775(iVar1));
		Global_1666941.f_39 = func_804(func_678(iVar1, iVar2, 0));
		Global_1666941.f_40 = func_804(func_678(iVar1, iVar2, 2));
		Global_1666941.f_41 = func_804(func_678(iVar1, iVar2, 1));
		if (func_774(iVar1))
		{
			Global_1666941.f_31 = 2;
		}
		else if (func_773(iVar1))
		{
			Global_1666941.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1666941.f_10 = 1;
		}
		else
		{
			Global_1666941.f_10 = 0;
		}
		if ((func_246(PLAYER::PLAYER_ID()) || func_397(PLAYER::PLAYER_ID())) || func_298(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_6 = 1;
		}
		else
		{
			Global_1666941.f_6 = 0;
		}
		Global_1666941.f_21 = -2;
		Global_1666941.f_22 = -2;
		func_771(iVar0);
	}
	else if (func_459(iVar0))
	{
		Global_1666985.f_2 = func_810();
		Global_1666985.f_3 = func_809();
		if ((func_246(PLAYER::PLAYER_ID()) || func_397(PLAYER::PLAYER_ID())) || func_298(PLAYER::PLAYER_ID()))
		{
			Global_1666985.f_6 = 1;
		}
		else
		{
			Global_1666985.f_6 = 0;
		}
		Global_1666985.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1666985.f_10 = func_804(bParam0);
		Global_1666985.f_11 = iParam1;
		Global_1666985.f_17 = func_770(func_355());
		Global_1666985.f_18 = (Global_1666985.f_9 - Global_1666985.f_8);
		Global_1666985.f_20 = iParam8;
		Global_1666985.f_21 = -2;
		Global_1666985.f_22 = -2;
		Global_1666985.f_27 = func_769();
		Global_1666985.f_29 = func_536(6107, -1, 0);
		Global_1666985.f_30 = func_536(6103, -1, 0);
		Global_1666985.f_31 = func_536(6104, -1, 0);
		Global_1666985.f_32 = func_536(6106, -1, 0);
		Global_1666985.f_33 = func_536(6105, -1, 0);
		Global_1666985.f_34 = func_536(6108, -1, 0);
		Global_1666985.f_36 = func_804(func_352(1));
		Global_1666985.f_37 = func_767();
		func_752();
		func_750(iVar0);
	}
	else if (func_457(iVar0))
	{
		Global_1667039.f_2 = func_810();
		Global_1667039.f_3 = func_809();
		if ((func_246(PLAYER::PLAYER_ID()) || func_397(PLAYER::PLAYER_ID())) || func_298(PLAYER::PLAYER_ID()))
		{
			Global_1667039.f_6 = 1;
		}
		else
		{
			Global_1667039.f_6 = 0;
		}
		Global_1667039.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1667039.f_10 = func_804(bParam0);
		Global_1667039.f_11 = iParam1;
		Global_1667039.f_18 = (Global_1667039.f_9 - Global_1667039.f_8);
		Global_1667039.f_20 = iParam8;
		Global_1667039.f_23 = Global_786547;
		Global_1667039.f_36 = Global_786547.f_1;
		Global_1667039.f_24 = func_536(6157, -1, 0);
		Global_1667039.f_25 = func_536(6162, -1, 0);
		Global_1667039.f_26 = func_536(6163, -1, 0);
		Global_1667039.f_27 = func_804((((func_749() || func_748()) || func_747()) || func_746(PLAYER::PLAYER_ID())));
		Global_1667039.f_28 = func_536(6164, -1, 0);
		Global_1667039.f_29 = func_804(func_745());
		Global_1667039.f_35 = -1;
		Global_1667039.f_38 = -1;
		Global_1667039.f_39 = Global_1667039.f_4;
		Global_1667039.f_40 = Global_1667039.f_5;
		Global_1667039.f_41 = func_810();
		Global_1667039.f_42 = func_804(func_352(1));
		Global_1667039.f_44 = Global_1667039.f_18;
		func_743(iVar0);
	}
	else if (func_524(iVar0))
	{
		if (Global_1667173.f_2 == -1)
		{
			Global_1667173.f_2 = func_810();
		}
		if (Global_1667173.f_3 == -1)
		{
			Global_1667173.f_3 = func_809();
		}
		if ((func_246(PLAYER::PLAYER_ID()) || func_397(PLAYER::PLAYER_ID())) || func_298(PLAYER::PLAYER_ID()))
		{
			Global_1667173.f_6 = 1;
		}
		else
		{
			Global_1667173.f_6 = 0;
		}
		Global_1667173.f_1 = func_805(0);
		Global_1667173.f_7 = func_803();
		Global_1667173.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1667173.f_10 = func_804(bParam0);
		Global_1667173.f_11 = iParam1;
		if (func_514() != -1)
		{
			Global_1667173.f_17 = func_742(func_514());
		}
		Global_1667173.f_18 = (Global_1667173.f_9 - Global_1667173.f_8);
		Global_1667173.f_19 = Global_2524719.f_6236;
		Global_1667173.f_28 = func_801(PLAYER::PLAYER_ID());
		Global_1667173.f_29 = func_804(func_741(PLAYER::PLAYER_ID()));
		Global_1667173.f_30 = func_804(func_740(PLAYER::PLAYER_ID()));
		Global_1667173.f_31 = func_739(PLAYER::PLAYER_ID());
		if (func_292(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667173.f_33 = func_804(func_352(1));
		}
		if (Global_1667173.f_34 > 2)
		{
			Global_1667173.f_34 = 2;
		}
		func_737(iVar0);
	}
	else if (func_528(iVar0))
	{
		Global_1667120.f_2 = func_810();
		Global_1667120.f_3 = func_809();
		if ((func_246(PLAYER::PLAYER_ID()) || func_397(PLAYER::PLAYER_ID())) || func_298(PLAYER::PLAYER_ID()))
		{
			Global_1667120.f_6 = 1;
		}
		else
		{
			Global_1667120.f_6 = 0;
		}
		Global_1667120.f_1 = func_805(0);
		Global_1667120.f_9 = NETWORK::_GET_POSIX_TIME();
		Global_1667120.f_10 = func_804(bParam0);
		Global_1667120.f_11 = iParam1;
		Global_1667120.f_18 = (Global_1667120.f_9 - Global_1667120.f_8);
		Global_1667120.f_28 = func_801(PLAYER::PLAYER_ID());
		if (Global_1667120.f_28)
		{
			Global_1667120.f_29 = func_736(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1667120.f_29 = 0;
		}
		Global_1667120.f_30 = func_720(PLAYER::PLAYER_ID(), 4, -1);
		Global_1667120.f_31 = func_739(PLAYER::PLAYER_ID());
		Global_1667120.f_32 = func_804(func_719(PLAYER::PLAYER_ID()));
		Global_1667120.f_33 = func_804(func_718(PLAYER::PLAYER_ID()));
		Global_1667120.f_34 = func_804(func_717(PLAYER::PLAYER_ID()));
		Global_1667120.f_35 = func_804(func_716(PLAYER::PLAYER_ID()));
		Global_1667120.f_36 = func_715(PLAYER::PLAYER_ID());
		Global_1667120.f_37 = func_714(PLAYER::PLAYER_ID());
		Global_1667120.f_39 = func_713(PLAYER::PLAYER_ID());
		if (func_292(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667120.f_41 = func_804(func_352(1));
		}
		if (Global_1667120.f_42 > 2)
		{
			Global_1667120.f_42 = 2;
		}
		func_711(iVar0);
	}
	else
	{
		Global_1666806.f_6 = NETWORK::_GET_POSIX_TIME();
		if (bParam0)
		{
			Global_1666806.f_7 = 1;
		}
		else
		{
			Global_1666806.f_7 = 0;
		}
		Global_1666806.f_8 = iParam1;
		if (Global_1666806.f_4 == 0)
		{
			if ((func_246(PLAYER::PLAYER_ID()) || func_397(PLAYER::PLAYER_ID())) || func_298(PLAYER::PLAYER_ID()))
			{
				Global_1666806.f_4 = 1;
			}
		}
	}
}

void func_711(int iParam0)
{
	unk_0xD8AFB345A9C5CCBB(&Global_1667120);
	func_712();
}

void func_712()
{
	struct<53> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1667120 = { Var0 };
}

int func_713(int iParam0)
{
	if (iParam0 != func_22())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_325, 12);
	}
	return 0;
}

int func_714(int iParam0)
{
	if (iParam0 != func_22())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_325, 10);
	}
	return 0;
}

int func_715(int iParam0)
{
	if (iParam0 != func_22())
	{
		return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_325, 11);
	}
	return 0;
}

int func_716(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 4);
}

int func_717(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 3);
}

int func_718(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 2);
}

int func_719(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 1);
}

int func_720(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_22() || !func_735(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_730(iParam0, iParam2);
		
		case 1:
			return func_728(iParam0, iParam2);
		
		case 3:
			return func_727(iParam0);
		
		case 2:
			return func_722(iParam0, iParam2);
		
		case 4:
			return func_721(iParam0);
		
		default:
	}
	return 0;
}

int func_721(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 6);
}

int func_722(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_726(iParam0);
		
		case 11:
			return func_725(iParam0);
		
		case 12:
			return func_724(iParam0);
		
		case 13:
			return func_723(iParam0);
		
		default:
	}
	return 0;
}

int func_723(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 15);
}

int func_724(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 14);
}

int func_725(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 13);
}

int func_726(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 12);
}

int func_727(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 5);
}

int func_728(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_729(iParam0);
		
		case 6:
			return func_719(iParam0);
		
		case 7:
			return func_718(iParam0);
		
		case 8:
			return func_717(iParam0);
		
		case 9:
			return func_716(iParam0);
		
		default:
	}
	return 0;
}

int func_729(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 0);
}

int func_730(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_734(iParam0);
		
		case 1:
			return func_733(iParam0);
		
		case 2:
			return func_732(iParam0);
		
		case 3:
			return func_731(iParam0);
		
		case 4:
			return func_739(iParam0);
		
		default:
	}
	return 0;
}

int func_731(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 10);
}

int func_732(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 9);
}

int func_733(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 8);
}

int func_734(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_272.f_4, 7);
}

bool func_735(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_736(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_720(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_720(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_720(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_720(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_737(int iParam0)
{
	unk_0x6481F441CE5CA40E(&Global_1667173);
	func_738();
}

void func_738()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1667173 = { Var0 };
}

var func_739(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 31);
}

int func_740(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_313.f_1, 0);
}

int func_741(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_313.f_1, 19);
}

var func_742(int iParam0)
{
	return Global_1589747[iParam0 /*790*/].f_211.f_6;
}

void func_743(int iParam0)
{
	unk_0x0360568A8CE21561(&Global_1667039);
	func_744();
}

void func_744()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1667039 = { Var0 };
	Global_1667039.f_16 = 0;
}

bool func_745()
{
	return func_536(6156, -1, 0) != 0;
}

int func_746(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_262 != 0;
	}
	return 0;
}

bool func_747()
{
	return func_536(6164, -1, 0) == 3;
}

bool func_748()
{
	return func_536(6164, -1, 0) == 2;
}

bool func_749()
{
	return func_536(6164, -1, 0) == 1;
}

void func_750(int iParam0)
{
	unk_0x04824802BBD52BB4(&Global_1666985);
	func_751();
}

void func_751()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1666985 = { Var0 };
	Global_1666985.f_23 = 0;
	Global_1666985.f_24 = 0;
	Global_1666985.f_16 = 0;
}

void func_752()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_763(12));
		func_762(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1321304[iVar1 /*141*/].f_66 != 0 && func_754(Global_1321304[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2524719.f_885 != iVar1)
				{
					if (func_753(Global_1321304[iVar1 /*141*/].f_66))
					{
						if (Global_1321304[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1321304[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1666985.f_38 = iVar3;
								break;
							
							case 1:
								Global_1666985.f_39 = iVar3;
								break;
							
							case 2:
								Global_1666985.f_40 = iVar3;
								break;
							
							case 3:
								Global_1666985.f_41 = iVar3;
								break;
							
							case 4:
								Global_1666985.f_42 = iVar3;
								break;
							
							case 5:
								Global_1666985.f_43 = iVar3;
								break;
							
							case 6:
								Global_1666985.f_44 = iVar3;
								break;
							
							case 7:
								Global_1666985.f_45 = iVar3;
								break;
							
							case 8:
								Global_1666985.f_46 = iVar3;
								break;
							
							case 9:
								Global_1666985.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_753(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
		
		default:
	}
	if (iParam0 == joaat("strikeforce"))
	{
		return 1;
	}
	return 0;
}

int func_754(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_761())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < DLC1::GET_NUM_DLC_VEHICLES())
		{
			if (DLC1::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (DLC1::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_760() && !func_759()) && !func_758()) && !func_757()) && !func_761())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_PC_VERSION()) || GAMEPLAY::IS_ORBIS_VERSION())
		{
		}
		else if (!func_758())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_756(iParam0))
		{
			return 0;
		}
	}
	if (!func_755(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_755(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_564())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_756(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2503689)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6488 && !Global_262145.f_12797) && iVar1 < Global_262145.f_12798)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14091 && iVar1 < Global_262145.f_14103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14092 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14093 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14094 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14102)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16718 && iVar1 < Global_262145.f_16682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16717 && iVar1 < Global_262145.f_16681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16716 && iVar1 < Global_262145.f_16680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16879 && iVar1 < Global_262145.f_16901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16880 && iVar1 < Global_262145.f_16902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16881 && iVar1 < Global_262145.f_16903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18528 && iVar1 < Global_262145.f_18625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18529 && iVar1 < Global_262145.f_18626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18530 && iVar1 < Global_262145.f_18627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18531 && iVar1 < Global_262145.f_18628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18532 && iVar1 < Global_262145.f_18629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19608 && iVar1 < Global_262145.f_19604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19609 && iVar1 < Global_262145.f_19605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19610 && iVar1 < Global_262145.f_19606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19611 && iVar1 < Global_262145.f_19607)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20487 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20488 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20489 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20490 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20491 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20492 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21264 && iVar1 < Global_262145.f_21284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21267 && iVar1 < Global_262145.f_21287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21265 && iVar1 < Global_262145.f_21285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21266 && iVar1 < Global_262145.f_21286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21268 && iVar1 < Global_262145.f_21288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21269 && iVar1 < Global_262145.f_21289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22225 && iVar1 < Global_262145.f_22253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22226 && iVar1 < Global_262145.f_22254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22227 && iVar1 < Global_262145.f_22255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22228 && iVar1 < Global_262145.f_22256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22229 && iVar1 < Global_262145.f_22257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22230 && iVar1 < Global_262145.f_22258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23432 && iVar1 < Global_262145.f_23448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23433 && iVar1 < Global_262145.f_23449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23437 && iVar1 < Global_262145.f_23453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23431 && iVar1 < Global_262145.f_23447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23434 && iVar1 < Global_262145.f_23450)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23436 && iVar1 < Global_262145.f_23452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23435 && iVar1 < Global_262145.f_23451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23522 && iVar1 < Global_262145.f_23509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23523 && iVar1 < Global_262145.f_23510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23528 && iVar1 < Global_262145.f_23515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23527 && iVar1 < Global_262145.f_23514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23525 && iVar1 < Global_262145.f_23512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23524 && iVar1 < Global_262145.f_23511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23526 && iVar1 < Global_262145.f_23513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_25628 && iVar1 < Global_262145.f_25630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_24683 && iVar1 < Global_262145.f_24676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_24684 && iVar1 < Global_262145.f_24677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_24685 && iVar1 < Global_262145.f_24678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_24686 && iVar1 < Global_262145.f_24679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_25629 && iVar1 < Global_262145.f_25631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_24687 && iVar1 < Global_262145.f_24680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_24688 && iVar1 < Global_262145.f_24681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_24689 && iVar1 < Global_262145.f_24682)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_757()
{
	return 0;
}

int func_758()
{
	return 1;
}

int func_759()
{
	return 1;
}

int func_760()
{
	if (DLC2::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_761()
{
	var uVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				GAMEPLAY::SET_BIT(&uVar0, 2);
				GAMEPLAY::SET_BIT(&uVar0, 4);
				GAMEPLAY::SET_BIT(&uVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					uVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&uVar0, 0);
					STATS::_0xDAC073C7901F9E15(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_762(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10050)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1663734[iParam0] - 1);
		if (bParam2)
		{
			if ((GAMEPLAY::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_763(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_766(iParam0);
		return func_765(iVar0);
	}
	return (func_764(iParam0, -1) * iParam0);
}

int func_764(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_468(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_474(iParam1))
			{
				return 0;
			}
			else if (func_466(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 <= 124 && iParam1 > 0)
			{
				if (Global_1049778[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049778[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049778[iParam1 /*1951*/].f_33 == 10)
				{
					return 13;
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
	}
	return 0;
}

int func_765(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		default:
	}
	return -1;
}

int func_766(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 3)
	{
		return iParam0;
	}
	return -1;
}

var func_767()
{
	var uVar0;
	
	uVar0 = func_768();
	if (!func_957())
	{
		if (func_514() != func_22())
		{
			uVar0 = func_802(func_514()) + 1;
		}
	}
	return uVar0;
}

int func_768()
{
	return func_802(PLAYER::PLAYER_ID()) + 1;
}

int func_769()
{
	return func_536(6113, -1, 0);
}

int func_770(int iParam0)
{
	if (func_292(iParam0, 1))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_410;
	}
	return -1;
}

void func_771(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x0EACDF8487D5155A(&Global_1666941);
	func_772();
}

void func_772()
{
	struct<44> Var0;
	
	Global_1666941 = { Var0 };
	Global_1666941.f_23 = 0;
	Global_1666941.f_24 = 0;
	Global_1666941.f_16 = 0;
}

bool func_773(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 12);
}

bool func_774(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 13);
}

int func_775(int iParam0)
{
	if (iParam0 != func_22())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 12) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 13)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_776(int iParam0)
{
	if (iParam0 != func_22())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 0) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 1)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_777(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (((((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 3) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 4)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 5)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 0)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 1)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_778(int iParam0, int iParam1)
{
	if (iParam1 == func_22())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 0))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 3))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 6))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 9))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 12))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 15))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 18))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 21))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 1))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 4))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 7))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 10))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 13))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 16))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 19))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 22))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 2))
			{
				return 3;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 5))
			{
				return 2;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 8))
			{
				return 4;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 11))
			{
				return 1;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 14))
			{
				return 7;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 17))
			{
				return 5;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 20))
			{
				return 6;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 23))
			{
				return 0;
			}
			else if (GAMEPLAY::IS_BIT_SET(Global_1589747[iParam1 /*790*/].f_273.f_250, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_779(int iParam0)
{
	if (iParam0 != func_22())
	{
		if ((GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 6) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 7)) || GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_250, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_780(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 8);
}

bool func_781(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 7);
}

int func_782(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 9);
}

int func_783(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 11);
}

int func_784(int iParam0)
{
	if (iParam0 == func_22())
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1589747[iParam0 /*790*/].f_273.f_341, 10);
}

int func_785(int iParam0, int iParam1)
{
	return func_536(func_786(iParam1), iParam0, 0);
}

int func_786(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3898;
		
		case 1:
			return 3927;
		
		case 2:
			return 3931;
		
		case 3:
			return 3935;
		
		case 4:
			return 3939;
		
		case 5:
			return 5450;
		
		default:
	}
	return 3898;
}

void func_787(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x7D8BA05688AD64C7(&Global_1666878);
	func_788();
}

void func_788()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1666878 = { Var0 };
	Global_1666878.f_24 = 0;
	Global_1666878.f_25 = 0;
	Global_1666878.f_17 = 0;
}

void func_789(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xBF371CD2B64212FD(&Global_1666824);
	func_790();
}

void func_790()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1666824 = { Var0 };
	Global_1666824.f_29 = 0;
	Global_1666824.f_30 = 0;
	Global_1666824.f_17 = 0;
}

int func_791(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_678(iParam0, iParam1, 2);
	bVar1 = func_678(iParam0, iParam1, 1);
	bVar2 = func_678(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_792(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (func_673(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_793(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_464(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17569;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17568;
		}
		else
		{
			iVar0 = Global_262145.f_17550;
		}
		iVar1 = 19;
	}
	else if (func_463(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_324(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17549;
			iVar1 = 20;
		}
	}
	else if (func_417(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17569;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17568;
		}
		else
		{
			iVar0 = Global_262145.f_17550;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_797(func_514()), func_796(func_514()), func_810(), func_809(), iVar1, iVar0);
	}
	func_795(iVar0);
	func_794(iVar0);
	return iVar0;
}

void func_794(int iParam0)
{
	int iVar0;
	
	iVar0 = func_536(3968, -1, 0);
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
	func_534(3968, iVar0, -1, 1, 0);
}

void func_795(int iParam0)
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

int func_796(int iParam0)
{
	if (iParam0 == func_22())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[1];
}

int func_797(int iParam0)
{
	if (iParam0 == func_22())
	{
		return -1;
	}
	return Global_1625435[iParam0 /*560*/].f_11.f_8[0];
}

int func_798(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_246(PLAYER::PLAYER_ID()) || func_298(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_799(var uParam0)
{
	unk_0x320C35147D5B5DDD(&Global_1667085);
	func_800();
}

void func_800()
{
	struct<35> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1667085 = { Var0 };
}

int func_801(int iParam0)
{
	if (iParam0 != func_22())
	{
		return Global_1589747[iParam0 /*790*/].f_273.f_313 != 0;
	}
	return 0;
}

int func_802(int iParam0)
{
	return Global_1625435[iParam0 /*560*/].f_11.f_19;
}

int func_803()
{
	int iVar0;
	
	if (func_563())
	{
		return 4;
	}
	else if (func_957())
	{
		if (func_705(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_352(1))
	{
		iVar0 = func_770(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_515(1))
	{
		if (func_705(func_514()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_804(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_805(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_284(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_226(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_808(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_807(PLAYER::PLAYER_ID());
			if (func_525(func_526(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_807(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_806(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_806(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_806(int iParam0)
{
	if (func_226(PLAYER::PLAYER_ID()) == 238 || func_226(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_457;
	}
	return -1;
}

int func_807(int iParam0)
{
	if (func_226(PLAYER::PLAYER_ID()) == 237 || func_226(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_456;
	}
	return -1;
}

int func_808(int iParam0)
{
	if (func_284(iParam0) == 236)
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_455;
	}
	return -1;
}

int func_809()
{
	if (Global_1666806.f_3 != 0)
	{
		return Global_1666806.f_3;
	}
	return -1;
}

int func_810()
{
	if (Global_1666806.f_2 != 0)
	{
		return Global_1666806.f_2;
	}
	return -1;
}

int func_811(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_22();
	iVar1 = func_22();
	iVar2 = func_22();
	return func_812(iParam0, sParam1, sParam2, sParam3, iParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_812(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_513(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	GAMEPLAY::SET_BIT(&(Var0.f_69), 2);
	return func_483(&Var0);
}

int func_813(int iParam0)
{
	int iVar0;
	
	iVar0 = func_296(iParam0);
	if (iVar0 != -1)
	{
		return func_294(iVar0);
	}
	return 1;
}

char* func_814()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_87(PLAYER::PLAYER_ID());
	if (iVar0 != func_22())
	{
		if (iVar0 != PLAYER::PLAYER_ID())
		{
			if (((func_199(iVar0, 28) || func_199(PLAYER::PLAYER_ID(), 28)) || func_519(iVar0)) && !func_518(iVar0))
			{
				return func_520(iVar0, 0);
			}
			if (!GAMEPLAY::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_520(iVar0, 0);
			}
		}
		uVar1 = func_522(&(Global_1625435[iVar0 /*560*/].f_11.f_99));
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			return func_520(iVar0, 0);
		}
		else
		{
			return uVar1;
		}
	}
	return "";
}

void func_815()
{
	func_950();
	func_906();
	func_895();
	func_885();
	func_837();
	func_832();
	func_819();
	func_816();
}

void func_816()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_771 != Local_206.f_5)
	{
		if (Local_206.f_34 != -1)
		{
			if (func_444())
			{
				if (func_396(PLAYER::PLAYER_ID()) >= 1)
				{
					if (Local_206.f_5 > 0)
					{
						if (Local_206.f_37 > -1)
						{
							iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_206.f_37);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
							{
								if (iVar0 != PLAYER::PLAYER_ID())
								{
									if (func_292(iVar0, 1))
									{
										iVar1 = func_296(iVar0);
										if (iVar1 > -1)
										{
											iVar2 = func_294(iVar1);
											func_817("GB_SGHT_TCKC", iVar0, iVar2, 0, 0, 0, 1, 1, 0);
										}
									}
									else
									{
										func_817("GB_SGHT_TCKC", iVar0, 1, 0, 0, 0, 1, 1, 0);
									}
								}
							}
						}
					}
				}
			}
			iLocal_771 = Local_206.f_5;
		}
	}
}

int func_817(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		UI::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
		UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_624(&Var1));
		if (!bParam5)
		{
			iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2503649 = { func_88(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2503579, 35, &Global_2503649))
			{
				iVar17 = 0;
				if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2503579.f_22), "Leader") && Global_2503579.f_30 == 0)
				{
					iVar17 = 1;
				}
				if (Global_2503579.f_21 > 0)
				{
					iVar18 = 0;
				}
				else
				{
					iVar18 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_818(&Var1) };
					}
					iVar0 = UI::_DRAW_NOTIFICATION_CLAN_INVITE(iVar18, NETWORK::_0x7543BB439F63792B(&Global_2503579, 35), &(Global_2503579.f_17), Global_2503579.f_30, iVar17, 0, Global_2503579, &Var1, Global_1314014, Global_1314015, Global_1314016);
				}
				else
				{
					iVar0 = UI::_DRAW_NOTIFICATION_APARTMENT_INVITE(iVar18, NETWORK::_0x7543BB439F63792B(&Global_2503579, 35), &(Global_2503579.f_17), Global_2503579.f_30, iVar17, 0, Global_2503579, Global_1314014, Global_1314015, Global_1314016);
				}
			}
			else
			{
				iVar0 = UI::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_620(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_818(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_819()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_973() && !func_405())
	{
		return;
	}
	if (GAMEPLAY::IS_BIT_SET(Local_472, 0))
	{
		return;
	}
	if (!func_444())
	{
		return;
	}
	iVar0 = func_396(PLAYER::PLAYER_ID());
	if (iVar0 < 3)
	{
		return;
	}
	if (func_9(&(Local_206.f_51)))
	{
		iVar1 = (func_11() - func_831(&(Local_206.f_51), 0, 0));
		iVar2 = (func_188() - Local_206.f_5);
		func_830(iVar1);
		if (iVar1 > 30000)
		{
			func_820(iVar2, "GB_SGHT_HUD", iVar1, 1, "GB_WORK_END");
		}
		else if (iVar1 > 0)
		{
			func_820(iVar2, "GB_SGHT_HUD", iVar1, 6, "GB_WORK_END");
		}
		else
		{
			func_820(iVar2, "GB_SGHT_HUD", 0, 6, "GB_WORK_END");
		}
	}
}

void func_820(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	
	if (func_828(0) == 0)
	{
		return;
	}
	func_827();
	func_824(iParam0, sParam1, -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_605(sParam4))
	{
		sVar0 = sParam4;
	}
	func_821(iParam2, sVar0, 0, 0, -1, 0, 3, 0, iParam3, 0, 0, 0, iParam3, 0, 0, 0, 0);
}

void func_821(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_823(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_822(7, iVar0);
		Global_1369750.f_4399[iVar0] = uParam0;
		StringCopy(&(Global_1369750.f_4399.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_4399.f_172[iVar0] = iParam2;
		Global_1369750.f_4399.f_216[iVar0] = iParam3;
		Global_1369750.f_4399.f_183[iVar0] = iParam4;
		Global_1369750.f_4399.f_194[iVar0] = iParam5;
		Global_1369750.f_4399.f_249[iVar0] = iParam6;
		Global_1369750.f_4399.f_260[iVar0] = iParam7;
		Global_1369750.f_4399.f_205[iVar0] = uParam8;
		Global_1369750.f_4399.f_314[iVar0] = iParam9;
		Global_1369750.f_4399.f_325[iVar0] = iParam10;
		Global_1369750.f_4399.f_357[iVar0] = iParam11;
		Global_1369750.f_4399.f_238[iVar0] = uParam12;
		Global_1369750.f_4399.f_271[iVar0] = iParam13;
		Global_1369750.f_4399.f_368[iVar0] = iParam14;
		Global_1369750.f_4399.f_379[iVar0] = iParam15;
		Global_1369750.f_4399.f_390[iVar0] = iParam16;
	}
}

void func_822(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1369750.f_6130[iParam0]), iParam1);
}

int func_823(int iParam0, int iParam1)
{
	return GAMEPLAY::IS_BIT_SET(Global_1369750.f_6130[iParam0], iParam1);
}

void func_824(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_823(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1369750.f_1 = 1;
		func_822(6, iVar0);
		Global_1369750.f_3781[iVar0] = iParam0;
		StringCopy(&(Global_1369750.f_3781.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1369750.f_3781.f_183[iVar0] = iParam3;
		Global_1369750.f_3781.f_172[iVar0] = iParam2;
		Global_1369750.f_3781.f_260[iVar0] = iParam4;
		Global_1369750.f_3781.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1369750.f_3781.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1369750.f_3781.f_443[iVar0] = iParam7;
		Global_1369750.f_3781.f_454[iVar0] = iParam8;
		Global_1369750.f_3781.f_497[iVar0] = iParam9;
		Global_1369750.f_3781.f_508[iVar0] = iParam10;
		Global_1369750.f_3781.f_205[iVar0] = iParam11;
		Global_1369750.f_3781.f_216[iVar0] = iParam12;
		Global_1369750.f_3781.f_227[iVar0] = iParam13;
		Global_1369750.f_3781.f_238[iVar0] = iParam14;
		Global_1369750.f_3781.f_249[iVar0] = iParam15;
		Global_1369750.f_3781.f_519[iVar0] = iParam16;
		Global_1369750.f_3781.f_530[iVar0] = iParam17;
		Global_1369750.f_3781.f_541[iVar0] = iParam18;
		Global_1369750.f_3781.f_552[iVar0] = iParam19;
		Global_1369750.f_3781.f_563[iVar0] = iParam20;
		Global_1369750.f_3781.f_574[iVar0] = iParam21;
		Global_1369750.f_3781.f_585[iVar0] = iParam22;
		Global_1369750.f_3781.f_596[iVar0] = iParam23;
		Global_1369750.f_3781.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_826())
		{
			Global_1369750.f_1088 = 1;
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1369750.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1369750.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1369750.f_1088 = 1;
			}
			if (func_825())
			{
				Global_1369750.f_1092 = 1;
			}
		}
	}
}

int func_825()
{
	int iVar0;
	var uVar1;
	
	if (GAMEPLAY::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_826()
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

void func_827()
{
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	UI::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2459733 = 1;
}

int func_828(bool bParam0)
{
	if (func_829())
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_1072(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_829()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 12);
}

void func_830(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(uLocal_460, 8))
	{
		func_200();
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 15))
	{
		if (iParam0 <= 35000)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("APT_PRE_COUNTDOWN_STOP"))
			{
				GAMEPLAY::SET_BIT(&uLocal_460, 15);
				GAMEPLAY::SET_BIT(&uLocal_460, 9);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_460, 9))
	{
		if (iParam0 <= 30000)
		{
			if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 11))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
				{
					AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
					AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
					GAMEPLAY::SET_BIT(&uLocal_460, 11);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 14))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S"))
				{
					GAMEPLAY::SET_BIT(&uLocal_460, 14);
				}
			}
			if (GAMEPLAY::IS_BIT_SET(uLocal_460, 14))
			{
				if (iParam0 <= 27000)
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
						GAMEPLAY::SET_BIT(&uLocal_460, 12);
					}
					if (iParam0 <= 500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							AUDIO::CANCEL_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL");
							GAMEPLAY::CLEAR_BIT(&uLocal_460, 9);
						}
					}
				}
			}
		}
	}
}

int func_831(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(GAMEPLAY::GET_GAME_TIMER(), *uParam0);
}

void func_832()
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_206.f_3))
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_OBJ(Local_206.f_3), PLAYER::PLAYER_PED_ID()))
				{
					GAMEPLAY::SET_BIT(&(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
					iLocal_769 = AUDIO::GET_SOUND_ID();
					if (func_352(1))
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_769, "Pickup_Briefcase", "GTAO_Biker_Modes_Soundset", 0);
					}
					else
					{
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_769, "Pickup_Briefcase", "GTAO_Magnate_Boss_Modes_Soundset", 0);
					}
					Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5++;
				}
			}
		}
	}
	if (iLocal_462 != Local_206.f_5)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3))
		{
			GAMEPLAY::CLEAR_BIT(&(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 3);
		}
		if (GAMEPLAY::IS_BIT_SET(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 2))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_206.f_3))
			{
				uVar0 = NETWORK::NET_TO_ENT(Local_206.f_3);
				ENTITY::DELETE_ENTITY(&uVar0);
				GAMEPLAY::CLEAR_BIT(&(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 2);
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_206.f_3);
			}
		}
		else
		{
			iLocal_462 = Local_206.f_5;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_206.f_3))
	{
		if (func_957())
		{
			if (func_973())
			{
				func_834();
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 13))
		{
			if (!func_973() || !func_957())
			{
				OBJECT::_0x92AEFB5F6E294023(NETWORK::NET_TO_OBJ(Local_206.f_3), 1, 1);
				GAMEPLAY::SET_BIT(&uLocal_459, 13);
			}
		}
		if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 3))
		{
			ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_206.f_3), 1200);
			GAMEPLAY::SET_BIT(&uLocal_459, 3);
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_459, 13))
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_459, 13);
		}
		if (GAMEPLAY::IS_BIT_SET(uLocal_459, 3))
		{
			GAMEPLAY::CLEAR_BIT(&uLocal_459, 3);
		}
		if (UI::DOES_BLIP_EXIST(uLocal_464))
		{
			UI::REMOVE_BLIP(&uLocal_464);
		}
	}
	func_833();
}

void func_833()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (!func_444())
	{
		return;
	}
	if (func_396(PLAYER::PLAYER_ID()) >= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_206.f_3) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_OBJ(Local_206.f_3), 0))
		{
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(NETWORK::NET_TO_OBJ(Local_206.f_3)))
			{
				UI::GET_HUD_COLOUR(18, &uVar0, &uVar1, &uVar2, &uVar3);
				GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_206.f_3), 1) + Vector(1f, 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uVar0, uVar1, uVar2, 100, 1, 1, 2, 0, 0, 0, 0);
			}
		}
	}
}

void func_834()
{
	int iVar0;
	
	iVar0 = func_396(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (UI::DOES_BLIP_EXIST(uLocal_464))
		{
			UI::REMOVE_BLIP(&uLocal_464);
		}
		return;
	}
	if (UI::DOES_BLIP_EXIST(uLocal_464))
	{
		return;
	}
	GAMEPLAY::CLEAR_BIT(&uLocal_459, 11);
	uLocal_464 = UI::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_206.f_3));
	UI::SET_BLIP_PRIORITY(uLocal_464, 12);
	UI::SET_BLIP_SPRITE(uLocal_464, 459);
	UI::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_464, "GB_SGHT_BLP");
	UI::SET_BLIP_ROUTE(uLocal_464, 1);
	UI::SET_BLIP_SCALE(uLocal_464, Global_262145.f_12242);
	if (func_973())
	{
		func_835(&uLocal_464, 18);
	}
	UI::_0x75A16C3DA34F1245(uLocal_464, 1);
	iLocal_770 = AUDIO::GET_SOUND_ID();
	if (func_352(1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_770, "Blip_Pickup", "GTAO_Biker_Modes_Soundset", 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_770, "Blip_Pickup", "GTAO_Magnate_Boss_Modes_Soundset", 0);
	}
}

void func_835(var uParam0, int iParam1)
{
	int iVar0;
	
	if (UI::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_836(iParam1);
		UI::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_836(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	UI::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_837()
{
	if (NETWORK::PARTICIPANT_ID_TO_INT() != Local_206.f_33)
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_206.f_3))
	{
		if (iLocal_766 != -1)
		{
			iLocal_766 = -1;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_4268330, 20))
		{
			GAMEPLAY::CLEAR_BIT(&Global_4268330, 20);
		}
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 20))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_4268330, 21))
		{
			if (iLocal_766 < 0)
			{
				GAMEPLAY::SET_BIT(&Global_4268330, 20);
			}
		}
	}
	if (iLocal_767 == -1)
	{
		iLocal_767 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
	if (iLocal_766 < 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_4268330, 21))
		{
			GAMEPLAY::CLEAR_BIT(&Global_4268330, 21);
			iLocal_766 = 0;
		}
	}
	func_838();
}

void func_838()
{
	bool bVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 4))
	{
		if (iLocal_766 >= 0)
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				GAMEPLAY::CLEAR_BIT(&Local_472, 0);
				iLocal_766 = -1;
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					func_884(1);
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_883(&Local_472);
		func_882(&Local_472);
		GAMEPLAY::CLEAR_BIT(&uLocal_459, 4);
	}
	switch (iLocal_766)
	{
		case 0:
			func_881(1);
			UI::REQUEST_ADDITIONAL_TEXT("HACK", 3);
			iLocal_766++;
			break;
		
		case 1:
			if (func_880(1) && UI::HAS_ADDITIONAL_TEXT_LOADED(3))
			{
				GAMEPLAY::SET_BIT(&Local_472, 0);
				GAMEPLAY::SET_BIT(&(Local_472.f_1), 0);
				func_437();
				iLocal_768 = 10;
				if (iLocal_767 == 2)
				{
					Local_472.f_22 = 1;
				}
				else if (iLocal_767 == 1)
				{
					Local_472.f_22 = 0;
					iLocal_768 = 77;
				}
				else if (iLocal_767 == 0)
				{
					iLocal_768 = 50;
					Local_472.f_22 = 0;
				}
				func_875(PLAYER::PLAYER_ID(), 0, 66048);
				iLocal_766++;
			}
			else
			{
				if (!func_880(1))
				{
				}
				if (!UI::HAS_ADDITIONAL_TEXT_LOADED(3))
				{
				}
			}
			break;
		
		case 2:
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			UI::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
			if (!func_204(0))
			{
				func_230(0);
			}
			if (iLocal_767 == 0)
			{
				func_853(&Local_472, 5, 5, iLocal_768, 10, 8, 10, 0, 1, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_852(&Local_472, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_767 == 1)
			{
				func_853(&Local_472, 5, 5, iLocal_768, 10, 8, 10, 0, 0, 1, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_851(&Local_472, 1))
				{
					bVar0 = true;
				}
			}
			else if (iLocal_767 == 2)
			{
				func_853(&Local_472, 5, 5, iLocal_768, 10, 8, 10, 0, 0, 0, 1, 1, 0, 0, 60000, 1, 1, 0, 0);
				if (func_839(&Local_472, 1))
				{
					bVar0 = true;
				}
			}
			if (GAMEPLAY::IS_BIT_SET(Local_472.f_1, 1))
			{
				GAMEPLAY::CLEAR_BIT(&Local_472, 0);
				func_883(&Local_472);
				func_875(PLAYER::PLAYER_ID(), 1, 0);
				if (func_204(0))
				{
					func_203(0);
				}
				iLocal_766 = -1;
			}
			else if (bVar0)
			{
				GAMEPLAY::CLEAR_BIT(&Local_472, 0);
				func_883(&Local_472);
				Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_4++;
				GAMEPLAY::SET_BIT(&(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 3);
				iLocal_767++;
				if (iLocal_767 >= 3)
				{
					iLocal_767 = 0;
				}
				if (func_204(0))
				{
					func_203(0);
				}
				func_875(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_766++;
			}
			break;
	}
}

int func_839(var uParam0, bool bParam1)
{
	if (GAMEPLAY::IS_BIT_SET(*uParam0, 26))
	{
		if (bParam1)
		{
			func_840(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_840(var uParam0, bool bParam1, bool bParam2)
{
	GAMEPLAY::CLEAR_BIT(uParam0, 0);
	GAMEPLAY::SET_BIT(uParam0, 12);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
	if (bParam2)
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
		}
	}
	if (GAMEPLAY::IS_MINIGAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_MINIGAME_IN_PROGRESS(0);
	}
	UI::CLEAR_HELP(1);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	CAM::DESTROY_CAM(uLocal_77, 0);
	func_844(0);
	func_843();
	GRAPHICS::_0x9B079E5221D984D3(0);
	func_842(uParam0, 1, 1, 0);
	func_841(0, 1, 1, 0);
}

int func_841(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_842(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (!bParam3)
	{
		iVar0 = 4;
		while (iVar0 <= 0)
		{
			if (iLocal_68[iVar0] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[iVar0]))
				{
					AUDIO::STOP_SOUND(iLocal_68[iVar0]);
					AUDIO::RELEASE_SOUND_ID(iLocal_68[iVar0]);
					iLocal_68[iVar0] = -1;
				}
			}
			iVar0++;
		}
		if (uParam0->f_20 > -1)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(uParam0->f_20))
			{
				AUDIO::STOP_SOUND(uParam0->f_20);
				AUDIO::RELEASE_SOUND_ID(uParam0->f_20);
				uParam0->f_20 = -1;
			}
		}
	}
	GAMEPLAY::CLEAR_BIT(uParam0, 25);
	GAMEPLAY::CLEAR_BIT(uParam0, 5);
	if (iParam2 == 1)
	{
		GAMEPLAY::CLEAR_BIT(uParam0, 12);
		GAMEPLAY::CLEAR_BIT(uParam0, 9);
		GAMEPLAY::CLEAR_BIT(uParam0, 18);
		GAMEPLAY::CLEAR_BIT(uParam0, 27);
		GAMEPLAY::CLEAR_BIT(uParam0, 28);
	}
	uParam0->f_1 = 0;
	uParam0->f_7 = uParam0->f_6;
	iLocal_80 = 0;
	if (bParam1)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_79);
	}
	GAMEPLAY::CLEAR_BIT(uParam0, 29);
	func_841(0, 1, 1, 0);
}

void func_843()
{
	int iVar0;
	
	Global_1368245.f_1047 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		Global_1368245.f_170[iVar0] = 0;
		iVar0++;
	}
	Global_2524719.f_4519 = 1;
}

void func_844(bool bParam0)
{
	if (bParam0)
	{
		func_850();
		if (Global_14513.f_1 == 10 || Global_14513.f_1 == 9)
		{
			GAMEPLAY::SET_BIT(&Global_2384, 16);
		}
		Global_14513.f_1 = 1;
		if (func_849(0))
		{
			func_845(0);
		}
	}
	else if (Global_14513.f_1 == 1)
	{
		if (!Global_14513.f_1 == 0)
		{
			Global_14513.f_1 = 3;
		}
	}
}

void func_845(int iParam0)
{
	if (func_848())
	{
		return;
	}
	if (Global_14681)
	{
		func_847(0, 0);
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
	if (!func_846())
	{
		Global_14513.f_1 = 3;
	}
}

int func_846()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_847(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_849(0))
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

bool func_848()
{
	return GAMEPLAY::IS_BIT_SET(Global_1678593, 19);
}

int func_849(int iParam0)
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

void func_850()
{
	if (Global_14513.f_1 == 9 || Global_14513.f_1 == 10)
	{
		Global_15875 = 0;
		Global_15871 = 1;
	}
}

int func_851(var uParam0, bool bParam1)
{
	if (GAMEPLAY::IS_BIT_SET(*uParam0, 9))
	{
		if (bParam1)
		{
			func_840(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_852(var uParam0, bool bParam1)
{
	if (GAMEPLAY::IS_BIT_SET(*uParam0, 18))
	{
		if (bParam1)
		{
			func_840(uParam0, 1, 1);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_853(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	if (GAMEPLAY::IS_BIT_SET(*uParam0, 0))
	{
		func_854(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12, bParam13, 0, iParam14, bParam15, bParam16, bParam17, bParam18);
	}
}

void func_854(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11[4];
	int iVar16;
	int iVar17;
	
	CONTROLS::_DISABLE_INPUT_GROUP(0);
	CONTROLS::_DISABLE_INPUT_GROUP(2);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	if (bParam17)
	{
		func_874(1);
	}
	func_873(4, -1);
	func_872(0);
	if (func_880(bParam16))
	{
		if (!UI::IS_PAUSE_MENU_ACTIVE())
		{
			UI::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::_SET_UI_LAYER(1);
			if (UI::GET_PAUSE_MENU_STATE() == 0 && !UI::IS_PAUSE_MENU_ACTIVE())
			{
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_79, 255, 255, 255, 0, 0);
			}
		}
		if (CONTROLS::_IS_INPUT_JUST_DISABLED(2))
		{
			uParam0->f_290 = CONTROLS::_0x5B84D09CEC5209C5(2, 239);
			uParam0->f_291 = CONTROLS::_0x5B84D09CEC5209C5(2, 240);
			if (uParam0->f_292 != uParam0->f_290 || uParam0->f_293 != uParam0->f_291)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_CURSOR");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(uParam0->f_290);
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(uParam0->f_291);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			uParam0->f_292 = uParam0->f_290;
			uParam0->f_293 = uParam0->f_291;
		}
		else
		{
			func_871(&uVar2, &uVar3, &iVar4, &iVar5, 0);
			if (iVar4 < 0 || iVar5 < 0)
			{
			}
			fVar6 = ((SYSTEM::TO_FLOAT(uVar2) * 8f) * SYSTEM::TIMESTEP());
			fVar7 = ((SYSTEM::TO_FLOAT(uVar3) * 8f) * SYSTEM::TIMESTEP());
			if (iLocal_80 != 8)
			{
				if (((fVar6 > 1f || fVar7 > 1f) || fVar6 < -1f) || fVar7 < -1f)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "MOVE_CURSOR");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fVar6);
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fVar7);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
		if (iLocal_80 > 4)
		{
			if (CONTROLS::_IS_INPUT_JUST_DISABLED(2))
			{
				uParam0->f_290 = CONTROLS::GET_CONTROL_NORMAL(2, 239);
				uParam0->f_291 = CONTROLS::GET_CONTROL_NORMAL(2, 240);
				if (GAMEPLAY::IS_ORBIS_VERSION())
				{
					if (uParam0->f_292 != uParam0->f_290)
					{
						if (uParam0->f_290 < 0.49f)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (uParam0->f_290 > 0.51f)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
				}
				uParam0->f_292 = uParam0->f_290;
				uParam0->f_293 = uParam0->f_291;
			}
			if (CONTROLS::_IS_INPUT_DISABLED(2))
			{
				fVar8 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 1);
				fVar9 = CONTROLS::GET_DISABLED_CONTROL_NORMAL(2, 2);
				bVar10 = false;
				fLocal_67 = (fLocal_67 + SYSTEM::TIMESTEP());
				fLocal_74 = (fLocal_74 + fVar8);
				fLocal_75 = (fLocal_75 + fVar9);
				fLocal_76 = (fLocal_76 + 1f);
				if (fLocal_67 > 0.15f)
				{
					fLocal_67 = 0f;
					fLocal_74 = (fLocal_74 / fLocal_76);
					fLocal_75 = (fLocal_75 / fLocal_76);
					if (GAMEPLAY::ABSF(fLocal_75) < 0.2f)
					{
						if (fLocal_74 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(10);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (fLocal_74 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(11);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (GAMEPLAY::ABSF(fLocal_74) < 0.2f)
					{
						if (fLocal_75 < 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(8);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
						else if (fLocal_75 > 0f)
						{
							bVar10 = true;
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
							GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(9);
							GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						}
					}
					if (bVar10)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
					}
					fLocal_74 = 0f;
					fLocal_75 = 0f;
					fLocal_76 = 0f;
				}
			}
			func_870(&(iVar11[0]), &(iVar11[1]), &(iVar11[2]), &(iVar11[3]), 0, 0);
			iVar16 = 0;
			while (iVar16 < iVar11)
			{
				if (GAMEPLAY::ABSI(iVar11[iVar16]) > 0)
				{
					if (iVar16 == 0 || iVar16 == 1)
					{
						if (AUDIO::HAS_SOUND_FINISHED(uParam0->f_20))
						{
							if (iLocal_80 != 8)
							{
								AUDIO::PLAY_SOUND_FRONTEND(uParam0->f_20, "HACKING_MOVE_CURSOR", 0, 1);
							}
						}
					}
				}
				iVar16++;
			}
			if (((CONTROLS::IS_CONTROL_JUST_PRESSED(2, 195) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 196)) || CONTROLS::IS_CONTROL_PRESSED(2, 195)) || CONTROLS::IS_CONTROL_PRESSED(2, 196))
			{
			}
			if (CONTROLS::_IS_INPUT_DISABLED(2))
			{
				if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 32) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 172))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(8);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 33) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 173))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(9);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 34) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 174))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(10);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 35) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 175))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(11);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 188))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(8);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 187))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(9);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 189))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(10);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 190))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_MOVE_CURSOR", 0, 1);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(11);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		if (bParam12)
		{
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_SELECT");
				uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
			}
			if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
			{
				iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_78);
				if (iVar0 == 6)
				{
					func_869(uParam0);
				}
			}
		}
		func_868();
	}
	if (iLocal_80 == 5 || iLocal_80 == 6)
	{
		if (iLocal_64)
		{
			func_867((iParam15 - (GAMEPLAY::GET_GAME_TIMER() - iLocal_63)), &iLocal_60, &iLocal_61, &iLocal_62);
			if ((iLocal_60 >= 0 && iLocal_61 >= 0) && iLocal_62 >= 0)
			{
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432, -1082130432);
			}
			else
			{
				iLocal_60 = 0;
				iLocal_61 = 0;
				iLocal_62 = 0;
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COUNTDOWN", SYSTEM::TO_FLOAT(iLocal_60), SYSTEM::TO_FLOAT(iLocal_61), SYSTEM::TO_FLOAT(iLocal_62), -1082130432, -1082130432);
			}
		}
	}
	if (iLocal_80 == 5)
	{
		if (func_866(&uLocal_81, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_SPEED", uParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
				uLocal_81 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
	}
	if (iLocal_80 == 6)
	{
		if (func_866(&uLocal_81, (10000 / iParam4)))
		{
			if (uParam0->f_9 > 20f)
			{
				uParam0->f_9 = (uParam0->f_9 - 1f);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
				uLocal_81 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uParam0->f_1, 0))
	{
		if (iLocal_80 == 2)
		{
			iLocal_80 = 3;
		}
		else if (iLocal_80 == 3)
		{
			iVar0 = 81;
		}
		else if (iLocal_80 == 4)
		{
			if (bParam8)
			{
				iVar0 = 82;
			}
			else if (bParam9)
			{
				iVar0 = 83;
			}
		}
	}
	switch (iLocal_80)
	{
		case 0:
			if (!GAMEPLAY::IS_BIT_SET(*uParam0, 29))
			{
				func_865(uParam0, iParam14);
			}
			func_881(1);
			GRAPHICS::_0x9B079E5221D984D3(1);
			uParam0->f_20 = AUDIO::GET_SOUND_ID();
			iLocal_154 = 0;
			iLocal_155 = 0;
			uParam0->f_23 = 0;
			iLocal_80++;
			break;
		
		case 1:
			iVar17 = 0;
			while (iVar17 < 5)
			{
				iLocal_68[iVar17] = -1;
				iVar17++;
			}
			GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam1), SYSTEM::TO_FLOAT(uParam2), -1082130432, -1082130432, -1082130432);
			GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(uParam3), -1082130432, -1082130432, -1082130432, -1082130432);
			if (bParam12 == 1)
			{
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(6), -1f, -1f, -1f, "EXIT", 0, 0, 0, 0);
			}
			uParam5 = uParam5;
			uParam6 = uParam6;
			uParam0->f_7 = uParam1;
			uParam0->f_9 = SYSTEM::TO_FLOAT(uParam3);
			GAMEPLAY::CLEAR_BIT(uParam0, 1);
			fLocal_74 = 0f;
			fLocal_75 = 0f;
			fLocal_76 = 0f;
			iLocal_68[0] = AUDIO::GET_SOUND_ID();
			iLocal_68[1] = AUDIO::GET_SOUND_ID();
			func_841(1, 0, 1, 0);
			if (uParam0->f_22)
			{
				iLocal_80 = 8;
			}
			else
			{
				iLocal_80++;
			}
			break;
		
		case 2:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					if (!func_412("H_EXIT_PROMPT"))
					{
						if (!func_412("HACKOBJ1"))
						{
							func_864("HACKOBJ1");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!UI::IS_PAUSE_MENU_ACTIVE())
			{
				if (CONTROLS::_IS_INPUT_JUST_DISABLED(2))
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_SELECT");
						uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
					}
				}
				else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_SELECT");
					uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
				}
			}
			if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
			{
				iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_78);
				if (iVar0 == 4)
				{
					if (iParam7 == 1)
					{
						if (func_412("H_EXIT_PROMPT"))
						{
							UI::CLEAR_HELP(1);
						}
					}
					iLocal_65 = 0;
					iLocal_80++;
				}
			}
			if (iLocal_83 == 1)
			{
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 500)
				{
					if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 2500 || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_863(0, "");
					}
				}
			}
			if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
			{
				iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_78);
				if (iVar0 == 80)
				{
					if (iLocal_83 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
						func_863(1, "ACCESSD");
					}
				}
			}
			break;
		
		case 3:
			if (iParam7 == 1)
			{
				if (iLocal_80 == 3)
				{
					if (iLocal_65 == 0)
					{
						if (!func_412("HACKOBJ2"))
						{
							func_864("HACKOBJ2");
							iLocal_65 = 1;
						}
					}
				}
			}
			if (!UI::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
				{
					if (CONTROLS::_IS_INPUT_JUST_DISABLED(2))
					{
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_SELECT");
							uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						}
					}
					else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_SELECT");
						uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
					}
				}
			}
			if (!UI::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_83 == 0)
				{
					if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
					{
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_BACK");
							uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
							if (iParam7 == 1)
							{
								if (func_412("HACKOBJ2"))
								{
									UI::CLEAR_HELP(1);
								}
								func_864("H_EXIT_PROMPT");
								iLocal_65 = 0;
								iLocal_80 = (iLocal_80 - 1);
							}
						}
					}
				}
			}
			if (iLocal_83 == 1)
			{
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 500)
				{
					if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 2500 || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_863(0, "");
					}
				}
			}
			if (iLocal_83 == 0)
			{
				if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
				{
					iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_78);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_83 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
					func_863(1, "ACCESSD");
				}
			}
			if (iVar0 == 81)
			{
				iLocal_65 = 0;
				iLocal_80++;
			}
			break;
		
		case 4:
			if (iLocal_68[1] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
				{
					AUDIO::STOP_SOUND(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iLocal_68[0] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
				{
					AUDIO::STOP_SOUND(iLocal_68[0]);
					iLocal_68[0] = -1;
				}
			}
			if (iLocal_68[1] != -1)
			{
				if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
				{
					AUDIO::STOP_SOUND(iLocal_68[1]);
					iLocal_68[1] = -1;
				}
			}
			if (iParam7 == 1)
			{
				if (iLocal_80 == 4)
				{
					if (bParam9 == 1)
					{
						if (!GAMEPLAY::IS_BIT_SET(*uParam0, 5))
						{
							if (iLocal_65 == 0)
							{
								if (!func_412("HACKOBJ5"))
								{
									func_864("HACKOBJ5");
									iLocal_65 = 1;
								}
							}
						}
					}
					else if (!GAMEPLAY::IS_BIT_SET(*uParam0, 18))
					{
						if (iLocal_65 == 0)
						{
							if (!func_412("HACKOBJ3"))
							{
								func_864("HACKOBJ3");
								iLocal_65 = 1;
							}
						}
					}
					else if (!GAMEPLAY::IS_BIT_SET(*uParam0, 5))
					{
						if (iLocal_65 == 0)
						{
							if (!func_412("HACKOBJ5"))
							{
								func_864("HACKOBJ5");
								iLocal_65 = 1;
							}
						}
					}
					else if (iLocal_65 == 1)
					{
						if (func_412("HACKOBJ5"))
						{
							UI::CLEAR_HELP(1);
							iLocal_65 = 0;
						}
					}
				}
			}
			if (!UI::IS_PAUSE_MENU_ACTIVE())
			{
				if (iLocal_83 == 0)
				{
					if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
					{
						if (CONTROLS::_IS_INPUT_JUST_DISABLED(2))
						{
							if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_SELECT");
								uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
							}
						}
						else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_SELECT");
							uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						}
					}
				}
			}
			if (iLocal_83 == 0)
			{
				if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
				{
					if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_BACK");
						uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						if (iParam7 == 1)
						{
							if (func_412("HACKOBJ5") || func_412("HACKOBJ3"))
							{
								UI::CLEAR_HELP(1);
							}
							iLocal_65 = 0;
							iLocal_80 = (iLocal_80 - 1);
						}
					}
				}
			}
			if (iLocal_83 == 1)
			{
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 500)
				{
					if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 2500 || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						func_863(0, "");
					}
				}
			}
			if (!UI::IS_PAUSE_MENU_ACTIVE())
			{
				if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
				{
					iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_78);
				}
			}
			if (iVar0 == 80)
			{
				if (iLocal_83 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
					func_863(1, "ACCESSD");
				}
			}
			if (iVar0 == 82)
			{
				if (bParam9 == 0)
				{
					if (bParam8 == 1)
					{
						uLocal_81 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_9 = SYSTEM::TO_FLOAT(uParam3);
						if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 0))
						{
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam1), -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_SPEED", uParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam1), -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_SPEED", uParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						iLocal_63 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_80++;
					}
					else if (!GAMEPLAY::IS_BIT_SET(*uParam0, 18))
					{
						uLocal_81 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_9 = SYSTEM::TO_FLOAT(uParam3);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_SPEED", uParam0->f_9, -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(0), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_63 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[0] = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
						iLocal_80++;
					}
					else
					{
						if (iLocal_83 == 1)
						{
							if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 500)
							{
								if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 2500 || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									func_863(0, "");
								}
							}
						}
						if (iLocal_83 == 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && GAMEPLAY::IS_BIT_SET(*uParam0, 9))
							{
								func_863(1, "TRYDL");
							}
							else
							{
								func_863(1, "TRYBRUTE");
							}
						}
					}
				}
				else
				{
					if (iLocal_83 == 1)
					{
						if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 500)
						{
							if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 2500 || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								func_863(0, "");
							}
						}
					}
					if (iLocal_83 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && GAMEPLAY::IS_BIT_SET(*uParam0, 9))
						{
							func_863(1, "TRYDL");
						}
						else
						{
							func_863(1, "TRYBRUTE");
						}
					}
				}
			}
			if (iVar0 == 83)
			{
				if (bParam8 == 0)
				{
					if (bParam9 == 1)
					{
						uLocal_81 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_9 = SYSTEM::TO_FLOAT(uParam3);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(uParam3), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 0))
						{
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						else
						{
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "RUN_PROGRAM", SYSTEM::TO_FLOAT(4), -1082130432, -1082130432, -1082130432, -1082130432);
							GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
						}
						iLocal_63 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							func_862(uParam0, bParam18);
						}
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(uLocal_79, "SET_ROULETTE_WORD", &(uParam0->f_14), 0, 0, 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_80 = 6;
					}
					else if ((!bParam11 || GAMEPLAY::IS_BIT_SET(*uParam0, 18)) && !GAMEPLAY::IS_BIT_SET(*uParam0, 9))
					{
						uLocal_81 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_9 = SYSTEM::TO_FLOAT(uParam3);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam1), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_SPEED", SYSTEM::TO_FLOAT(uParam3), -1082130432, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 0f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 1f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 2f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 3f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 4f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 5f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 6f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_COLUMN_SPEED", 7f, uParam0->f_9, -1082130432, -1082130432, -1082130432);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "OPEN_APP", SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432, -1082130432);
						iLocal_63 = GAMEPLAY::GET_GAME_TIMER();
						iLocal_64 = 1;
						iLocal_65 = 0;
						iLocal_68[1] = AUDIO::GET_SOUND_ID();
						if (bParam10)
						{
							func_862(uParam0, bParam18);
						}
						if (func_412("HACKOBJ5"))
						{
							UI::CLEAR_HELP(1);
						}
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_STRING_PARAMS(uLocal_79, "SET_ROULETTE_WORD", &(uParam0->f_14), 0, 0, 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
						iLocal_80 = 6;
					}
					else
					{
						if (iLocal_83 == 1)
						{
							if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 500)
							{
								if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 2500 || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
								{
									func_863(0, "");
								}
							}
						}
						if (iLocal_83 == 0)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
							if (bParam13 && GAMEPLAY::IS_BIT_SET(*uParam0, 18))
							{
								func_863(1, "TRYDL");
							}
							else
							{
								func_863(1, "TRYHACK");
							}
						}
					}
				}
				else
				{
					if (iLocal_83 == 1)
					{
						if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 500)
						{
							if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 2500 || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
							{
								func_863(0, "");
							}
						}
					}
					if (iLocal_83 == 0)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
						if (bParam13 && GAMEPLAY::IS_BIT_SET(*uParam0, 18))
						{
							func_863(1, "TRYDL");
						}
						else
						{
							func_863(1, "TRYHACK");
						}
					}
				}
			}
			if (bParam13)
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 18))
				{
					if (iVar0 == 93)
					{
						if (GAMEPLAY::IS_BIT_SET(*uParam0, 18) && GAMEPLAY::IS_BIT_SET(*uParam0, 9))
						{
							if (!GAMEPLAY::IS_BIT_SET(*uParam0, 28))
							{
								GAMEPLAY::SET_BIT(uParam0, 28);
								iLocal_80 = 8;
							}
						}
						else
						{
							if (iLocal_83 == 1)
							{
								if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 500)
								{
									if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_82) > 2500 || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201)) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
									{
										func_863(0, "");
									}
								}
							}
							if (iLocal_83 == 0)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
								if (GAMEPLAY::IS_BIT_SET(*uParam0, 18))
								{
									func_863(1, "TRYBRUTE");
								}
								else
								{
									func_863(1, "TRYHACK");
								}
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_861("H_USE_PC6", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_861("H_USE_PC7", -1);
					iLocal_66 = 0;
				}
			}
			if (!UI::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 1))
				{
					if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
					{
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							uParam0->f_7 = uParam1;
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_79, "CLOSE_APP");
							if (iLocal_68[1] != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
								{
									AUDIO::STOP_SOUND(iLocal_68[1]);
									iLocal_68[1] = -1;
								}
							}
							if (iLocal_68[0] != -1)
							{
								if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
								{
									AUDIO::STOP_SOUND(iLocal_68[0]);
									iLocal_68[0] = -1;
								}
							}
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 0))
							{
								iLocal_80 = 4;
							}
							else
							{
								GAMEPLAY::SET_BIT(&(uParam0->f_1), 1);
							}
						}
					}
				}
			}
			if (!UI::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
				{
					if (CONTROLS::_IS_INPUT_JUST_DISABLED(2))
					{
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_SELECT");
							uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						}
					}
					else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_SELECT");
						uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
					}
				}
				if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
				{
					iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_78);
				}
			}
			if (iVar0 == 85)
			{
				if (uParam0->f_7 > 1)
				{
					uParam0->f_7 = (uParam0->f_7 - 1);
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam0->f_7), -1082130432, -1082130432, -1082130432, -1082130432);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
				}
				else
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
					}
					GAMEPLAY::SET_BIT(uParam0, 25);
					iLocal_64 = 0;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, 1);
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_79, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 90)
			{
				uParam0->f_7 = uParam1;
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam1), -1082130432, -1082130432, -1082130432, -1082130432);
				uParam0->f_9 = SYSTEM::TO_FLOAT(uParam3);
				iLocal_63 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_68[0] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[0], "HACKING_COUNTDOWN_IP_FIND", 0, 1);
				GAMEPLAY::SET_BIT(uParam0, 25);
				iLocal_64 = 1;
			}
			if (iVar0 == 91)
			{
				uParam0->f_7 = uParam1;
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_79, "CLOSE_APP");
				if (iLocal_68[0] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				GAMEPLAY::SET_BIT(uParam0, 25);
				iLocal_80 = 4;
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (GAMEPLAY::GET_GAME_TIMER() - iLocal_63));
				if (iVar1 < 1)
				{
					GAMEPLAY::SET_BIT(uParam0, 25);
					uParam0->f_7 = uParam1;
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					uParam0->f_9 = SYSTEM::TO_FLOAT(uParam3);
					iLocal_63 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_64 = 0;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, 1);
					if (iLocal_68[0] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
						{
							AUDIO::STOP_SOUND(iLocal_68[0]);
							iLocal_68[0] = -1;
						}
					}
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_79, "SET_IP_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSTIP", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 84)
			{
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_79, "SET_IP_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINIP", 0, 0, 0, 0);
				uLocal_81 = GAMEPLAY::GET_GAME_TIMER();
				GAMEPLAY::SET_BIT(uParam0, 18);
				iLocal_64 = 0;
				iLocal_65 = 0;
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_GOOD", 0, 1);
				if (iLocal_68[0] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
					{
						AUDIO::STOP_SOUND(iLocal_68[0]);
						iLocal_68[0] = -1;
					}
				}
				iLocal_80 = 7;
			}
			break;
		
		case 6:
			if (iParam7 == 1)
			{
				if (iLocal_65 == 0)
				{
					func_861("H_USE_PC8", -1);
					iLocal_65 = 1;
				}
				else if (iLocal_66 == 1)
				{
					func_861("H_USE_PC9", -1);
					iLocal_66 = 0;
				}
			}
			if (!UI::IS_PAUSE_MENU_ACTIVE())
			{
				if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 1))
					{
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							uParam0->f_7 = uParam1;
							GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_79, "CLOSE_APP");
							if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[0]))
							{
								AUDIO::STOP_SOUND(iLocal_68[0]);
							}
							if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 0))
							{
								iLocal_80 = 4;
							}
							else
							{
								GAMEPLAY::SET_BIT(&(uParam0->f_1), 1);
							}
						}
					}
				}
				if (!GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
				{
					if (CONTROLS::_IS_INPUT_JUST_DISABLED(2))
					{
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
						{
							GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_SELECT");
							uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						}
					}
					else if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_INPUT_EVENT_SELECT");
						uLocal_78 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
					}
				}
				if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uLocal_78))
				{
					iVar0 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uLocal_78);
				}
			}
			if (iVar0 == 86)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_GOOD", 0, 1);
			}
			if (iVar0 == 92)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, 1);
			}
			if (GAMEPLAY::IS_BIT_SET(*uParam0, 23))
			{
				if (func_866(&(uParam0->f_10), 500))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_79, "RESET_ROULETTE");
					GAMEPLAY::CLEAR_BIT(uParam0, 23);
				}
			}
			if (iVar0 == 87)
			{
				if (uParam0->f_7 > 1)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK_BAD", 0, 1);
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_79, "STOP_ROULETTE");
					uParam0->f_10 = GAMEPLAY::GET_GAME_TIMER();
					GAMEPLAY::SET_BIT(uParam0, 23);
					GAMEPLAY::SET_BIT(uParam0, 31);
					if (func_236() == 0)
					{
						uParam0->f_7 = (uParam0->f_7 - 1);
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam0->f_7), -1082130432, -1082130432, -1082130432, -1082130432);
					}
				}
				else
				{
					GAMEPLAY::SET_BIT(uParam0, 25);
					GAMEPLAY::SET_BIT(uParam0, 31);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, 1);
					uParam0->f_7 = uParam1;
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					uParam0->f_9 = SYSTEM::TO_FLOAT(uParam3);
					iLocal_63 = GAMEPLAY::GET_GAME_TIMER();
					if (iLocal_68[1] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
						{
							AUDIO::STOP_SOUND(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					if (func_236() == 0)
					{
						GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_79, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
					}
				}
			}
			if (iLocal_64 == 1)
			{
				iVar1 = (60000 - (GAMEPLAY::GET_GAME_TIMER() - iLocal_63));
				if (iVar1 < 1)
				{
					uParam0->f_7 = uParam1;
					GAMEPLAY::SET_BIT(uParam0, 25);
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam1), -1082130432, -1082130432, -1082130432, -1082130432);
					uParam0->f_9 = SYSTEM::TO_FLOAT(uParam3);
					iLocal_63 = GAMEPLAY::GET_GAME_TIMER();
					iLocal_64 = 0;
					iLocal_66 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_FAILURE", 0, 1);
					UI::CLEAR_HELP(1);
					if (iLocal_68[1] != -1)
					{
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
						{
							AUDIO::STOP_SOUND(iLocal_68[1]);
							iLocal_68[1] = -1;
						}
					}
					GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_79, "SET_ROULETTE_OUTCOME", 0f, -1f, -1f, -1f, -1f, "LOSEBRUTE", 0, 0, 0, 0);
				}
			}
			if (iVar0 == 88)
			{
				uParam0->f_7 = uParam1;
				GAMEPLAY::SET_BIT(uParam0, 25);
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_LIVES", SYSTEM::TO_FLOAT(uParam1), -1082130432, -1082130432, -1082130432, -1082130432);
				uParam0->f_9 = SYSTEM::TO_FLOAT(uParam3);
				iLocal_63 = GAMEPLAY::GET_GAME_TIMER();
				iLocal_68[1] = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_68[1], "HACKING_COUNTDOWN_CRACK_PASS", 0, 1);
				iLocal_64 = 1;
			}
			if (iVar0 == 89)
			{
				uParam0->f_7 = uParam1;
				GAMEPLAY::SET_BIT(uParam0, 25);
				GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_79, "CLOSE_APP");
				if (iLocal_68[1] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
					{
						AUDIO::STOP_SOUND(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_80 = 4;
			}
			if (iVar0 == 86)
			{
				GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_79, "SET_ROULETTE_OUTCOME", 1f, -1f, -1f, -1f, -1f, "WINBRUTE", 0, 0, 0, 0);
				uLocal_81 = GAMEPLAY::GET_GAME_TIMER();
				GAMEPLAY::SET_BIT(uParam0, 9);
				if (bParam19)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Success", "DLC_GR_Steal_Railguns_Sounds", 1);
				}
				else
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_SUCCESS", 0, 1);
				}
				if (iLocal_68[1] != -1)
				{
					if (!AUDIO::HAS_SOUND_FINISHED(iLocal_68[1]))
					{
						AUDIO::STOP_SOUND(iLocal_68[1]);
						iLocal_68[1] = -1;
					}
				}
				iLocal_80 = 7;
			}
			break;
		
		case 7:
			if (iParam7 == 1)
			{
				if (GAMEPLAY::IS_BIT_SET(*uParam0, 9) && GAMEPLAY::IS_BIT_SET(*uParam0, 18))
				{
					if (iLocal_154 == 0)
					{
						if (!func_412("HACKOBJ7"))
						{
							func_864("HACKOBJ7");
							iLocal_154 = 1;
						}
					}
				}
				if (((func_412("H_USE_PC6") || func_412("H_USE_PC7")) || func_412("H_USE_PC8")) || func_412("H_USE_PC9"))
				{
					UI::CLEAR_HELP(1);
				}
			}
			if ((GAMEPLAY::IS_BIT_SET(*uParam0, 9) && GAMEPLAY::IS_BIT_SET(*uParam0, 18)) && (!bParam13 || (bParam13 && GAMEPLAY::IS_BIT_SET(*uParam0, 28))))
			{
				if (func_412("HACKOBJ7"))
				{
					UI::CLEAR_HELP(1);
				}
				if (!iLocal_155)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "unlocked_bleep", PLAYER::PLAYER_PED_ID(), "HACKING_DOOR_UNLOCK_SOUNDS", 0, 0);
					iLocal_155 = 1;
				}
				if (func_866(&uLocal_81, 3000))
				{
					GAMEPLAY::CLEAR_BIT(uParam0, 0);
					GAMEPLAY::SET_BIT(uParam0, 12);
					GRAPHICS::_0x9B079E5221D984D3(0);
				}
			}
			else
			{
				if (((bParam13 && !GAMEPLAY::IS_BIT_SET(*uParam0, 27)) && GAMEPLAY::IS_BIT_SET(*uParam0, 9)) && GAMEPLAY::IS_BIT_SET(*uParam0, 18))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "OPEN_DOWNLOAD");
					GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(1);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					GAMEPLAY::SET_BIT(uParam0, 27);
				}
				if (func_866(&uLocal_81, 2000))
				{
					GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(uLocal_79, "CLOSE_APP");
					iLocal_80 = 4;
				}
			}
			break;
		
		case 8:
			func_855(uParam0);
			break;
	}
}

void func_855(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (uParam0->f_23 > 0)
	{
		if (GAMEPLAY::IS_BIT_SET(*uParam0, 22))
		{
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				if (!UI::IS_PAUSE_MENU_ACTIVE())
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_84, Local_84.f_1, 0.731f, 1.306f, 0f, 255, 255, 255, 255, 0);
				}
			}
		}
	}
	if (((((((Local_105[0 /*4*/] == 1 && Local_105[1 /*4*/] == 1) && Local_105[2 /*4*/] == 1) && Local_105[3 /*4*/] == 1) && Local_105[4 /*4*/] == 1) && Local_105[5 /*4*/] == 1) && Local_105[6 /*4*/] == 1) && Local_105[7 /*4*/] == 1)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Hack_Success", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
		if (func_412("H1_HNG"))
		{
			UI::CLEAR_HELP(1);
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (func_412("H1_HNG_KM"))
			{
				UI::CLEAR_HELP(1);
			}
		}
		GAMEPLAY::SET_BIT(uParam0, 26);
	}
	else if (CONTROLS::_IS_INPUT_DISABLED(2))
	{
		if (!func_412("H1_HNG_KM"))
		{
			func_864("H1_HNG_KM");
		}
	}
	else if (!func_412("H1_HNG"))
	{
		func_864("H1_HNG");
	}
	switch (uParam0->f_23)
	{
		case 0:
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("hackingNG", 0);
			GAMEPLAY::CLEAR_BIT(uParam0, 22);
			func_860();
			uLocal_143 = GAMEPLAY::GET_GAME_TIMER();
			Local_103 = 0;
			GAMEPLAY::CLEAR_BIT(&uLocal_153, 0);
			GAMEPLAY::CLEAR_BIT(&uLocal_153, 1);
			GAMEPLAY::CLEAR_BIT(&uLocal_153, 2);
			GAMEPLAY::CLEAR_BIT(&uLocal_153, 3);
			GAMEPLAY::CLEAR_BIT(&uLocal_153, 4);
			GAMEPLAY::CLEAR_BIT(&uLocal_153, 5);
			GAMEPLAY::CLEAR_BIT(&uLocal_153, 6);
			GAMEPLAY::CLEAR_BIT(&uLocal_153, 7);
			uParam0->f_23++;
			break;
		
		case 1:
			if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("hackingNG"))
			{
				GAMEPLAY::SET_BIT(uParam0, 22);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_CURSOR_VISIBILITY");
				GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_BOOL(0);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_23++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_105[iVar0 /*4*/].f_3 == 1)
				{
					if (Local_105[iVar0 /*4*/].f_2 < 1f)
					{
						Local_105[iVar0 /*4*/].f_2 = (Local_105[iVar0 /*4*/].f_2 + ((Local_105[iVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_142));
					}
					else
					{
						Local_105[iVar0 /*4*/].f_3 = 0;
					}
				}
				else if (Local_105[iVar0 /*4*/].f_2 > 0f)
				{
					Local_105[iVar0 /*4*/].f_2 = (Local_105[iVar0 /*4*/].f_2 - ((Local_105[iVar0 /*4*/].f_1 * SYSTEM::TIMESTEP()) * fLocal_142));
				}
				else
				{
					Local_105[iVar0 /*4*/].f_3 = 1;
				}
				if (Local_105[iVar0 /*4*/] == 0)
				{
					Local_86[iVar0 /*2*/].f_1 = func_858(0.744f, 0.4f, Local_105[iVar0 /*4*/].f_2);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Local_105[iVar0 /*4*/] == 0)
				{
					if (Local_103 == iVar0)
					{
						if (!GAMEPLAY::IS_BIT_SET(uLocal_153, iVar0))
						{
							iLocal_144[iVar0] = AUDIO::GET_SOUND_ID();
							AUDIO::PLAY_SOUND_FRONTEND(iLocal_144[iVar0], "Pin_Movement", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
							GAMEPLAY::SET_BIT(&uLocal_153, iVar0);
						}
						else
						{
							if (Local_105[iVar0 /*4*/].f_2 >= 0.5f)
							{
								fLocal_138 = (2f * (1f - Local_105[iVar0 /*4*/].f_2));
							}
							else
							{
								fLocal_138 = (2f * Local_105[iVar0 /*4*/].f_2);
							}
							AUDIO::SET_VARIABLE_ON_SOUND(iLocal_144[iVar0], "PinMovementY", fLocal_138);
						}
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(uLocal_153, iVar0))
				{
					AUDIO::STOP_SOUND(iLocal_144[iVar0]);
					AUDIO::RELEASE_SOUND_ID(iLocal_144[iVar0]);
					GAMEPLAY::CLEAR_BIT(&uLocal_153, iVar0);
					iLocal_144[iVar0] = -1;
				}
				iVar0++;
			}
			if (func_857(Local_103))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Centred", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
			}
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				if (func_866(&uLocal_143, 300))
				{
					if (func_856(Local_103))
					{
						Local_105[Local_103 /*4*/] = 1;
						Local_86[Local_103 /*2*/].f_1 = 0.572f;
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Good", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						if (Local_103 != 7)
						{
							Local_103++;
						}
					}
					else
					{
						if (Local_103 != 0)
						{
							if (GAMEPLAY::IS_BIT_SET(uLocal_153, Local_103))
							{
								AUDIO::STOP_SOUND(iLocal_144[Local_103]);
								AUDIO::RELEASE_SOUND_ID(iLocal_144[Local_103]);
								GAMEPLAY::CLEAR_BIT(&uLocal_153, Local_103);
								iLocal_144[Local_103] = -1;
							}
							Local_105[(Local_103 - 1) /*4*/] = 0;
							Local_103 = (Local_103 - 1);
						}
						if (!UI::IS_PAUSE_MENU_ACTIVE())
						{
							GRAPHICS::DRAW_RECT(0.5f, 0.5f, 4f, 4f, 255, 0, 0, 100, 0);
						}
						uLocal_143 = GAMEPLAY::GET_GAME_TIMER();
						CONTROLS::SET_PAD_SHAKE(0, 100, 100);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Pin_Bad", "DLC_HEIST_BIOLAB_PREP_HACKING_SOUNDS", 1);
						Local_103.f_1 = 1;
					}
				}
				else
				{
					if (!UI::IS_PAUSE_MENU_ACTIVE())
					{
						GRAPHICS::DRAW_SPRITE("hackingNG", "DHMain", Local_84, Local_84.f_1, 0.731f, 1.306f, 0f, 255, 0, 0, 100, 0);
					}
					uLocal_143 = GAMEPLAY::GET_GAME_TIMER();
					CONTROLS::SET_PAD_SHAKE(0, 100, 100);
				}
			}
			if (!UI::IS_PAUSE_MENU_ACTIVE())
			{
				if (Local_103 == 0)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[0 /*2*/], Local_86[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[0 /*2*/], Local_86[0 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 1)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[1 /*2*/], Local_86[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[1 /*2*/], Local_86[1 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 2)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[2 /*2*/], Local_86[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[2 /*2*/], Local_86[2 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 3)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[3 /*2*/], Local_86[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[3 /*2*/], Local_86[3 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 4)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[4 /*2*/], Local_86[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[4 /*2*/], Local_86[4 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 5)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[5 /*2*/], Local_86[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[5 /*2*/], Local_86[5 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 6)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[6 /*2*/], Local_86[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[6 /*2*/], Local_86[6 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (Local_103 == 7)
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHCompHi", Local_86[7 /*2*/], Local_86[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				else
				{
					GRAPHICS::DRAW_SPRITE("hackingNG", "DHComp", Local_86[7 /*2*/], Local_86[7 /*2*/].f_1, 0.4f, 0.4f, 0f, 255, 255, 255, 255, 0);
				}
				if (GAMEPLAY::IS_BIT_SET(uParam0->f_1, 0))
				{
					if (!GAMEPLAY::IS_BIT_SET(uParam0->f_1, 1))
					{
						if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 202))
						{
							GAMEPLAY::SET_BIT(&(uParam0->f_1), 1);
							UI::CLEAR_HELP(1);
						}
					}
				}
			}
			break;
	}
}

int func_856(int iParam0)
{
	if (Local_86[iParam0 /*2*/].f_1 >= fLocal_140 && Local_86[iParam0 /*2*/].f_1 <= fLocal_139)
	{
		return 1;
	}
	return 0;
}

int func_857(int iParam0)
{
	if (Local_86[iParam0 /*2*/].f_1 == 0.5f)
	{
		return 1;
	}
	return 0;
}

float func_858(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - SYSTEM::COS(func_859((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_859(float fParam0)
{
	return (fParam0 * 57.29578f);
}

void func_860()
{
	fLocal_139 = 0.6f;
	fLocal_140 = 0.53f;
	Local_105[0 /*4*/].f_1 = (0.02f * fLocal_141);
	Local_105[1 /*4*/].f_1 = (0.025f * fLocal_141);
	Local_105[2 /*4*/].f_1 = (0.03f * fLocal_141);
	Local_105[3 /*4*/].f_1 = (0.035f * fLocal_141);
	Local_105[4 /*4*/].f_1 = (0.04f * fLocal_141);
	Local_105[5 /*4*/].f_1 = (0.045f * fLocal_141);
	Local_105[6 /*4*/].f_1 = (0.048f * fLocal_141);
	Local_105[7 /*4*/].f_1 = (0.05f * fLocal_141);
	Local_105[0 /*4*/] = 0;
	Local_105[1 /*4*/] = 0;
	Local_105[2 /*4*/] = 0;
	Local_105[3 /*4*/] = 0;
	Local_105[4 /*4*/] = 0;
	Local_105[5 /*4*/] = 0;
	Local_105[6 /*4*/] = 0;
	Local_105[7 /*4*/] = 0;
	Local_84 = 0.5f;
	Local_84.f_1 = 0.5f;
	Local_86[0 /*2*/] = 0.35f;
	Local_86[0 /*2*/].f_1 = 0.4f;
	Local_86[1 /*2*/] = 0.39f;
	Local_86[1 /*2*/].f_1 = 0.4f;
	Local_86[2 /*2*/] = 0.43f;
	Local_86[2 /*2*/].f_1 = 0.4f;
	Local_86[3 /*2*/] = 0.47f;
	Local_86[3 /*2*/].f_1 = 0.4f;
	Local_86[4 /*2*/] = 0.51f;
	Local_86[4 /*2*/].f_1 = 0.74f;
	Local_86[5 /*2*/] = 0.55f;
	Local_86[5 /*2*/].f_1 = 0.74f;
	Local_86[6 /*2*/] = 0.59f;
	Local_86[6 /*2*/].f_1 = 0.74f;
	Local_86[7 /*2*/] = 0.63f;
	Local_86[7 /*2*/].f_1 = 0.74f;
}

void func_861(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_862(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 15);
		if (iVar0 == 0)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_RA", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PA", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_GE", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_CH", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_FI", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PR", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_UN", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_DE", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_FO", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_AR", 24);
		}
		else if (iVar0 == 11)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_TO", 24);
		}
		else if (iVar0 == 12)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_IN", 24);
		}
		else if (iVar0 == 13)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PRI", 24);
		}
		else if (iVar0 == 14)
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_LA", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_14), "GR_PWD_PA", 24);
		}
	}
	else
	{
		iVar0 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 8);
		if (iVar0 == 0)
		{
			StringCopy(&(uParam0->f_14), "PASSWORD", 24);
		}
		else if (iVar0 == 1)
		{
			StringCopy(&(uParam0->f_14), "PETSNAME", 24);
		}
		else if (iVar0 == 2)
		{
			StringCopy(&(uParam0->f_14), "DYNAMITE", 24);
		}
		else if (iVar0 == 3)
		{
			StringCopy(&(uParam0->f_14), "BACKDOOR", 24);
		}
		else if (iVar0 == 4)
		{
			StringCopy(&(uParam0->f_14), "MORPHEUS", 24);
		}
		else if (iVar0 == 5)
		{
			StringCopy(&(uParam0->f_14), "CREAMPIE", 24);
		}
		else if (iVar0 == 6)
		{
			StringCopy(&(uParam0->f_14), "WORMSIGN", 24);
		}
		else if (iVar0 == 7)
		{
			StringCopy(&(uParam0->f_14), "UNLOCKED", 24);
		}
		else if (iVar0 == 8)
		{
			StringCopy(&(uParam0->f_14), "BLUEBOOK", 24);
		}
		else if (iVar0 == 9)
		{
			StringCopy(&(uParam0->f_14), "DECIPHER", 24);
		}
		else if (iVar0 == 10)
		{
			StringCopy(&(uParam0->f_14), "JUNKYARD", 24);
		}
		else
		{
			StringCopy(&(uParam0->f_14), "PASSWORD", 24);
		}
	}
}

void func_863(bool bParam0, char* sParam1)
{
	if (bParam0)
	{
		GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_79, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(1), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_82 = GAMEPLAY::GET_GAME_TIMER();
		iLocal_83 = 1;
	}
	else
	{
		GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_79, "OPEN_ERROR_POPUP", SYSTEM::TO_FLOAT(0), -1f, -1f, -1f, -1f, sParam1, 0, 0, 0, 0);
		iLocal_83 = 0;
	}
}

void func_864(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

void func_865(var uParam0, int iParam1)
{
	if (!GAMEPLAY::IS_BIT_SET(*uParam0, 29))
	{
		GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_FLOAT_PARAMS(uLocal_79, "SET_BACKGROUND", SYSTEM::TO_FLOAT(iParam1), -1082130432, -1082130432, -1082130432, -1082130432);
		if (GRAPHICS::GET_IS_WIDESCREEN())
		{
			GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(7), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		else
		{
			GRAPHICS::_CALL_SCALEFORM_MOVIE_FUNCTION_MIXED_PARAMS(uLocal_79, "ADD_PROGRAM", SYSTEM::TO_FLOAT(8), SYSTEM::TO_FLOAT(4), -1f, -1f, -1f, "MyComputer", 0, 0, 0, 0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_79, "SET_LABELS");
		func_271("H_ICON_1");
		if (iParam1 == 0)
		{
			func_271("H_ICON_2a");
		}
		else
		{
			func_271("H_ICON_2");
		}
		func_271("H_ICON_3");
		func_271("H_ICON_4");
		func_271("H_ICON_5");
		func_271("H_ICON_6");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GAMEPLAY::SET_BIT(uParam0, 29);
	}
}

int func_866(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	if ((iVar0 - *uParam0) > iParam1)
	{
		return 1;
	}
	return 0;
}

void func_867(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = ((iParam0 % 3600000) / 60000);
	*uParam2 = (((iParam0 % 3600000) % 60000) / 1000);
	*uParam3 = (((iParam0 % 3600000) % 60000) % 1000);
}

void func_868()
{
	if (iLocal_80 < 5)
	{
		if (CONTROLS::IS_CONTROL_JUST_PRESSED(2, 201) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "HACKING_CLICK", 0, 1);
		}
	}
}

void func_869(var uParam0)
{
	WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
	if (GAMEPLAY::IS_MINIGAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_MINIGAME_IN_PROGRESS(0);
	}
	UI::CLEAR_HELP(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	CAM::DESTROY_CAM(uLocal_77, 0);
	func_844(0);
	func_843();
	GAMEPLAY::SET_BIT(uParam0, 1);
	GRAPHICS::_0x9B079E5221D984D3(0);
	func_842(uParam0, 1, 0, 0);
	func_841(0, 1, 1, 0);
}

void func_870(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
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

void func_871(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_872(int iParam0)
{
	if (func_848())
	{
		return;
	}
	if (!Global_14513.f_1 == 1)
	{
		if (func_849(0))
		{
			func_845(iParam0);
		}
		GAMEPLAY::SET_BIT(&Global_2384, 2);
	}
}

void func_873(int iParam0, int iParam1)
{
	GAMEPLAY::SET_BIT(&(Global_1368245.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1368245.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_874(int iParam0)
{
	Global_1369750.f_1079 = iParam0;
}

void func_875(int iParam0, bool bParam1, int iParam2)
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
		if (!func_381())
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
				else if (bVar13 || (!func_146(PLAYER::PLAYER_ID(), 0) && !func_92()))
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
				if (!func_879(uVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
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
					func_878();
					func_877();
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
				if (!func_879(uVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
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
					if (func_876(Global_4456448.f_152990))
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

bool func_876(int iParam0)
{
	return iParam0 == 17;
}

void func_877()
{
	vector3 vVar0;
	
	Global_2437022.f_1228 = 0;
	Global_2437022.f_1229 = 0;
	Global_2437022.f_1230 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437022.f_1235 = -1;
	Global_2437022.f_1236 = 0;
	Global_2405070.f_2674 = { vVar0 };
}

void func_878()
{
	Global_2405070.f_691 = 0;
	Global_2405070.f_2717 = 0;
	Global_2405070.f_509 = 0;
	Global_2405070.f_597 = 0;
	Global_2423801[PLAYER::PLAYER_ID() /*413*/].f_207 = 0;
	Global_2405070.f_2672 = 0;
}

int func_879(var uParam0)
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

int func_880(bool bParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_79) && (!bParam0 || (((((GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_0") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_1")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_2")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_3")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_4")) && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("HACKING_PC_desktop_5"))))
	{
		return 1;
	}
	return 0;
}

void func_881(bool bParam0)
{
	if (bParam0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_0", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_1", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_2", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_3", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_4", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_5", 0);
	}
	uLocal_79 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_INTERACTIVE("Hacking_PC");
}

void func_882(var uParam0)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(PLAYER::PLAYER_PED_ID(), 1, 1, 1, 0);
	}
	if (GAMEPLAY::IS_MINIGAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_MINIGAME_IN_PROGRESS(0);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
	UI::CLEAR_HELP(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	CAM::DESTROY_CAM(uLocal_77, 0);
	GAMEPLAY::CLEAR_BIT(uParam0, 0);
	GAMEPLAY::CLEAR_BIT(uParam0, 12);
	func_844(0);
	func_843();
	GRAPHICS::_0x9B079E5221D984D3(0);
}

void func_883(var uParam0)
{
	func_842(uParam0, 1, 1, 0);
	*uParam0 = 0;
	uParam0->f_23 = 0;
	Local_103 = 0;
	Local_103.f_1 = 0;
	GAMEPLAY::CLEAR_BIT(uParam0, 26);
	Local_105[0 /*4*/] = 0;
	Local_105[1 /*4*/] = 0;
	Local_105[2 /*4*/] = 0;
	Local_105[3 /*4*/] = 0;
	Local_105[4 /*4*/] = 0;
	Local_105[5 /*4*/] = 0;
	Local_105[6 /*4*/] = 0;
	Local_105[7 /*4*/] = 0;
}

void func_884(bool bParam0)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam0)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
}

void func_885()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (GAMEPLAY::IS_BIT_SET(Local_472, 0))
	{
		return;
	}
	if (!func_444())
	{
		if (func_412("GB_SGHT_HLP1"))
		{
			UI::CLEAR_HELP(1);
		}
		if (func_412("GB_SGHT_HLP2"))
		{
			UI::CLEAR_HELP(1);
		}
		if (func_405())
		{
			sVar0 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
			iVar1 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
			if (func_292(PLAYER::PLAYER_ID(), 1))
			{
				if (func_894("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					UI::CLEAR_HELP(1);
				}
			}
			else if (func_894("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				UI::CLEAR_HELP(1);
			}
		}
		if (func_412("GB_SGHT_RVL"))
		{
			UI::CLEAR_HELP(1);
		}
		return;
	}
	iVar2 = func_396(PLAYER::PLAYER_ID());
	if (iVar2 < 2)
	{
		if (func_412("GB_SGHT_HLP1"))
		{
			UI::CLEAR_HELP(1);
		}
		if (func_412("GB_SGHT_HLP2"))
		{
			UI::CLEAR_HELP(1);
		}
		if (func_405())
		{
			sVar0 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
			iVar1 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
			if (func_292(PLAYER::PLAYER_ID(), 1))
			{
				if (func_894("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
				{
					UI::CLEAR_HELP(1);
				}
			}
			else if (func_894("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1))
			{
				UI::CLEAR_HELP(1);
			}
		}
		if (func_412("GB_SGHT_RVL"))
		{
			UI::CLEAR_HELP(1);
		}
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 2))
	{
		if (!func_893(86))
		{
			if (iLocal_766 == -1)
			{
				if (func_887(0, 1, 1, 1))
				{
					if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_206.f_33)
					{
						func_420("GB_SGHT_HLP1", -1);
						func_419(1);
						GAMEPLAY::SET_BIT(&uLocal_459, 2);
					}
					else if (func_974() == Local_206.f_33)
					{
						func_420("GB_SGHT_HLP2", -1);
						func_419(1);
						GAMEPLAY::SET_BIT(&uLocal_459, 2);
					}
					else if (func_405())
					{
						sVar0 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
						iVar1 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
						if (func_292(PLAYER::PLAYER_ID(), 1))
						{
							func_886("GB_SGHT_HLP3", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_419(1);
						}
						else
						{
							func_886("GB_SGHT_HLP4", sVar0, iVar1, "GB_SGHT_TGT", iVar1, -1);
							func_419(1);
						}
						GAMEPLAY::SET_BIT(&uLocal_459, 2);
					}
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&uLocal_459, 2);
			}
		}
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_459, 2))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 7))
		{
			if (iLocal_766 == -1)
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_206.f_33)
				{
					if (func_887(0, 1, 1, 1))
					{
						func_420("GB_SGHT_APPH", -1);
						func_419(1);
						GAMEPLAY::SET_BIT(&uLocal_459, 7);
					}
				}
				else
				{
					GAMEPLAY::SET_BIT(&uLocal_459, 7);
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&uLocal_459, 7);
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 8))
	{
		if (func_973())
		{
			if (func_957())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_206.f_3))
				{
					if (func_887(0, 1, 1, 1))
					{
						func_420("GB_SGHT_PKGH", -1);
						func_419(1);
						GAMEPLAY::SET_BIT(&uLocal_459, 8);
					}
				}
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 12))
	{
		if (func_973())
		{
			if (Local_206.f_5 > 0 || GAMEPLAY::IS_BIT_SET(Local_206.f_1, 6))
			{
				if (func_887(0, 1, 1, 1))
				{
					func_420("GB_SGHT_RVL", -1);
					func_419(1);
					GAMEPLAY::SET_BIT(&uLocal_459, 12);
				}
			}
		}
	}
}

void func_886(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam4);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 0, iParam5);
}

int func_887(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_892())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_386())
	{
		return 0;
	}
	if (func_480())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_41(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_891(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_890())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574167)
	{
		return 0;
	}
	if (func_889())
	{
		return 0;
	}
	if (func_888())
	{
		return 0;
	}
	if (func_379())
	{
		return 0;
	}
	if (Global_68494)
	{
		return 0;
	}
	if (Global_2534143)
	{
		return 0;
	}
	return 1;
}

bool func_888()
{
	return Global_2448386.f_580;
}

bool func_889()
{
	return Global_2448386.f_733;
}

bool func_890()
{
	return Global_2437022.f_3028.f_578;
}

int func_891(int iParam0)
{
	if (Global_2423801[iParam0 /*413*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_892()
{
	if (Global_15822 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_893(int iParam0)
{
	return Global_2437022.f_2704[0 /*80*/].f_1 == iParam0;
}

bool func_894(char* sParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	if (!iParam2 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	if (!iParam4 == 0)
	{
		UI::_SET_NOTIFICATION_COLOR_NEXT(iParam4);
	}
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_895()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (GAMEPLAY::IS_BIT_SET(Local_472, 0))
	{
		return;
	}
	if (!func_444())
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_459, 5))
		{
			if (Local_206.f_34 != -1)
			{
				iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
				if (iVar0 > -1)
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34)))
					{
						iVar1 = func_294(iVar0);
						iVar2 = func_836(iVar1);
						func_435(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 432, 0, 0);
						func_434(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), iVar2, 0, 0);
						func_433(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 0, 0, 0);
						func_432(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 0);
						func_429(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), Global_262145.f_12242, 0, 0);
						GAMEPLAY::CLEAR_BIT(&uLocal_459, 5);
					}
					else
					{
						GAMEPLAY::CLEAR_BIT(&uLocal_459, 5);
					}
				}
			}
			func_437();
		}
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_206.f_3))
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_206.f_33)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 3))
			{
				if (!GAMEPLAY::IS_BIT_SET(Local_472, 0))
				{
					if (Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_5 < 3)
					{
						if (func_396(PLAYER::PLAYER_ID()) == 3)
						{
							if (!func_905("GB_SGHT_HCK"))
							{
								func_902("GB_SGHT_HCK", 0);
							}
						}
						else if (func_905("GB_SGHT_HCK"))
						{
							func_437();
						}
					}
					else
					{
						func_437();
					}
				}
			}
		}
		else if (func_974() == Local_206.f_33)
		{
			if (Local_206.f_34 != -1)
			{
				if (func_396(PLAYER::PLAYER_ID()) == 3)
				{
					if (!func_905("GB_SGHT_PROT"))
					{
						iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_294(iVar0);
							func_896("GB_SGHT_PROT", PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
				}
				else if (func_905("GB_SGHT_PROT"))
				{
					func_437();
				}
			}
		}
		else if (func_405())
		{
			if (Local_206.f_34 != -1)
			{
				if (func_396(PLAYER::PLAYER_ID()) == 3)
				{
					if (Local_206.f_34 != -1)
					{
						iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_294(iVar0);
							if (func_292(PLAYER::PLAYER_ID(), 1))
							{
								if (!func_905("GB_SGHT_STOP"))
								{
									func_896("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
								}
							}
							else if (!func_905("GB_SGHT_STOP"))
							{
								func_896("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
							}
						}
					}
				}
				else
				{
					if (func_905("GB_SGHT_STOP"))
					{
						func_437();
					}
					if (func_905("GB_SGHT_STOP2"))
					{
						func_437();
					}
				}
				if (func_396(PLAYER::PLAYER_ID()) >= 2)
				{
					if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 5))
					{
						if (Local_206.f_34 != -1)
						{
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34)))
							{
								if (func_1072(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 1, 1))
								{
									iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
									if (iVar0 > -1)
									{
										iVar1 = func_294(iVar0);
										iVar2 = func_836(iVar1);
										func_435(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 432, 1, 0);
										func_434(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), iVar2, 1, 0);
										func_433(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 1, 1, 0);
										func_432(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 1);
										func_429(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), Global_262145.f_12242, 1, 0);
										GAMEPLAY::SET_BIT(&uLocal_459, 5);
									}
								}
							}
						}
					}
				}
				else if (GAMEPLAY::IS_BIT_SET(uLocal_459, 5))
				{
					if (Local_206.f_34 != -1)
					{
						iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
						if (iVar0 > -1)
						{
							iVar1 = func_294(iVar0);
							iVar2 = func_836(iVar1);
							func_435(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 432, 0, 0);
							func_434(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), iVar2, 0, 0);
							func_433(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 0, 0, 0);
							func_432(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 0);
							func_429(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), Global_262145.f_12242, 0, 0);
							GAMEPLAY::CLEAR_BIT(&uLocal_459, 5);
						}
					}
				}
			}
		}
	}
	else if (func_396(PLAYER::PLAYER_ID()) == 3)
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_206.f_33)
		{
			if (!GAMEPLAY::IS_BIT_SET(Local_472, 0))
			{
				if (!func_905("GB_SGHT_RETP"))
				{
					func_902("GB_SGHT_RETP", 0);
				}
			}
		}
		else if (func_974() == Local_206.f_33)
		{
			if (Local_206.f_34 != -1)
			{
				if (!func_905("GB_SGHT_PROT"))
				{
					iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
					if (iVar0 > -1)
					{
						iVar1 = func_294(iVar0);
						func_896("GB_SGHT_PROT", PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
		else if (func_405())
		{
			if (Local_206.f_34 != -1)
			{
				iVar0 = func_296(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
				if (iVar0 > -1)
				{
					iVar1 = func_294(iVar0);
					if (func_292(PLAYER::PLAYER_ID(), 1))
					{
						if (!func_905("GB_SGHT_STOP"))
						{
							func_896("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
						}
					}
					else if (!func_905("GB_SGHT_STOP"))
					{
						func_896("GB_SGHT_STOP", PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), "GB_SGHT_BOSS", 1, iVar1, 0);
					}
				}
			}
		}
	}
	else
	{
		if (func_905("GB_SGHT_PROT"))
		{
			func_437();
		}
		if (func_905("GB_SGHT_RETP"))
		{
			func_437();
		}
		if (func_905("GB_SGHT_STOP"))
		{
			func_437();
		}
		if (func_905("GB_SGHT_STOP2"))
		{
			func_437();
		}
	}
}

void func_896(char* sParam0, var uParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_897(sParam0, PLAYER::GET_PLAYER_NAME(uParam1), sParam2, bParam5, iParam3))
	{
		Global_1312576 = 15;
		Global_1312576.f_56 = iParam3;
		Global_1312576.f_57 = iParam4;
		Global_1312576.f_54 = uParam1;
	}
}

int func_897(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam1) > 63)
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam2) > 63)
	{
		return 0;
	}
	if (func_901(sParam0, sParam1, sParam2) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_438();
	Global_1312576 = 10;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	StringCopy(&(Global_1312576.f_32), sParam2, 64);
	Global_1312576.f_58 = uParam4;
	Global_1312576.f_56 = uParam4;
	func_900();
	func_899(bParam3);
	func_898();
	return 1;
}

void func_898()
{
	GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 1);
}

void func_899(bool bParam0)
{
	if (bParam0)
	{
		GAMEPLAY::SET_BIT(&(Global_1312576.f_59), 0);
		return;
	}
	GAMEPLAY::CLEAR_BIT(&(Global_1312576.f_59), 0);
}

void func_900()
{
	Global_1312576.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_901(var uParam0, var uParam1, var uParam2)
{
	if (!func_443())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam2))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_12)))
	{
		return 0;
	}
	if (!GAMEPLAY::GET_HASH_KEY(uParam1) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_16)))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam2) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_32));
}

void func_902(char* sParam0, bool bParam1)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (UI::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_903(sParam0))
	{
		return;
	}
	func_438();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_900();
	func_899(bParam1);
	func_898();
}

bool func_903(var uParam0)
{
	if (!func_443())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_904(uParam0);
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_12));
}

bool func_904(var uParam0)
{
	if (!func_443())
	{
		return 0;
	}
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return GAMEPLAY::GET_HASH_KEY(uParam0) == GAMEPLAY::GET_HASH_KEY(&(Global_1312576.f_16));
}

int func_905(char* sParam0)
{
	if (GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_443())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		if (UI::_GET_LENGTH_OF_STRING(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (UI::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	return func_903(sParam0);
}

void func_906()
{
	int iVar0;
	char* sVar1;
	var uVar2;
	
	if (!func_973() && !func_405())
	{
		return;
	}
	if (!func_444())
	{
		return;
	}
	if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 1))
	{
		iVar0 = func_396(PLAYER::PLAYER_ID());
		if (iVar0 >= 2)
		{
			if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_206.f_33 || func_974() == Local_206.f_33)
			{
				if (func_933(82, "GB_INTTXT_SS", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_516(86, "BIGM_SGHTN", "BIGM_SGHTBD", 1, -1, 2, 1);
					OBJECT::_0x78857FC65CADB909(1);
					OBJECT::_0x616093EC6B139DD9(PLAYER::PLAYER_ID(), joaat("pickup_portable_package"), 1);
					func_932(1);
					func_907(-1, 0, 0, -1, 0, 0);
				}
			}
			else if (func_292(PLAYER::PLAYER_ID(), 1))
			{
				sVar1 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
				uVar2 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
				func_811(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				func_907(-1, 0, 0, -1, 0, 0);
			}
			else
			{
				sVar1 = func_517(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
				uVar2 = func_813(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34));
				func_811(86, "BIGM_SGHTN", "BIGM_SGHTRD", sVar1, uVar2, 0, -1, -1, -1, 2, -1);
				func_907(-1, 0, 0, -1, 0, 0);
			}
		}
		GAMEPLAY::SET_BIT(&uLocal_459, 1);
	}
}

void func_907(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_284(PLAYER::PLAYER_ID());
		Global_1667085 = iVar0;
		Global_1667085.f_1 = iParam0;
		if (func_514() != func_22())
		{
			Global_1667085.f_2 = func_797(func_514());
			Global_1667085.f_3 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_1667085.f_2), &(Global_1667085.f_3));
		}
		Global_1667085.f_7 = NETWORK::_GET_POSIX_TIME();
		Global_1667085.f_28 = func_801(PLAYER::PLAYER_ID());
		Global_1667085.f_13 = 0;
		Global_1667085.f_14 = 0;
		if (func_292(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667085.f_23 = func_804(func_352(1));
		}
	}
	else
	{
		iVar0 = func_226(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_417(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1666824 = iVar0;
		if (func_464(iVar0))
		{
			Global_1666824.f_1 = 4;
		}
		else if (func_463(iVar0))
		{
			Global_1666824.f_1 = 5;
		}
		else if (func_324(iVar0, 0))
		{
			Global_1666824.f_1 = 2;
			if (func_530(iVar0))
			{
				Global_1666824.f_1 = 3;
			}
		}
		else
		{
			Global_1666824.f_1 = 1;
		}
		if (func_514() != func_22())
		{
			Global_1666824.f_4 = func_797(func_514());
			Global_1666824.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_1666824.f_6), &(Global_1666824.f_7));
		}
		Global_1666824.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1666824.f_27 = 1;
			Global_1666824.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1666824.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1666824.f_40 = func_560(iParam1);
			Global_1666824.f_41 = func_931();
			Global_1666824.f_42 = func_681(PLAYER::PLAYER_ID(), iParam1);
			Global_1666824.f_44 = func_792(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_957() || iVar0 != 192)
		{
			Global_1666824.f_53 = 0;
		}
	}
	else if (func_461(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1666941 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1666941 = iParam0 + 1;
		}
		else
		{
			Global_1666941 = func_930(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_527(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1666941.f_1 = 0;
				}
				else
				{
					Global_1666941.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1666941.f_1 = 2;
				break;
			
			case 227:
				Global_1666941.f_1 = 3;
				break;
		}
		Global_1666941.f_21 = 1;
		Global_1666941.f_22 = 1;
		if (func_514() != func_22())
		{
			Global_1666941.f_4 = func_797(func_514());
			Global_1666941.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_1666941.f_4), &(Global_1666941.f_5));
		}
		Global_1666941.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1666941.f_20 = iParam0;
		}
	}
	else if (func_422(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1666878 = iVar0;
		Global_1666824.f_1 = 1;
		if (func_514() != func_22())
		{
			Global_1666878.f_4 = func_797(func_514());
			Global_1666878.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_1666878.f_6), &(Global_1666878.f_7));
		}
		Global_1666878.f_9 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1666878.f_21 = iParam0;
		}
	}
	else if (func_459(iVar0))
	{
		Global_1666985 = iVar0;
		Global_1666985.f_1 = iParam0;
		Global_1666985.f_21 = 1;
		Global_1666985.f_22 = 1;
		if (func_514() != func_22())
		{
			Global_1666985.f_4 = func_797(func_514());
			Global_1666985.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_1666985.f_4), &(Global_1666985.f_5));
		}
		Global_1666985.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1666985.f_20 = iParam0;
		}
		Global_1666985.f_27 = func_785(func_148(), 5);
		Global_1666985.f_28 = func_804(func_659(PLAYER::PLAYER_ID()));
		Global_1666985.f_29 = func_536(6107, -1, 0);
		Global_1666985.f_30 = func_536(6103, -1, 0);
		Global_1666985.f_31 = func_536(6104, -1, 0);
		Global_1666985.f_32 = func_536(6106, -1, 0);
		Global_1666985.f_33 = func_536(6105, -1, 0);
		Global_1666985.f_34 = func_536(6108, -1, 0);
		Global_1666985.f_7 = func_803();
		Global_1666985.f_51 = func_804(bParam4);
	}
	else if (func_457(iVar0))
	{
		Global_1667039 = iVar0;
		Global_1667039.f_1 = iParam0;
		Global_1667039.f_21 = 1;
		Global_1667039.f_22 = 1;
		if (func_514() != func_22())
		{
			Global_1667039.f_4 = func_797(func_514());
			Global_1667039.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_1667039.f_4), &(Global_1667039.f_5));
		}
		Global_1667039.f_8 = NETWORK::_GET_POSIX_TIME();
		if (iParam0 != -1)
		{
			Global_1667039.f_20 = iParam0;
		}
		Global_1667039.f_24 = func_536(6157, -1, 0);
		Global_1667039.f_25 = func_536(6162, -1, 0);
		Global_1667039.f_26 = func_536(6163, -1, 0);
		Global_1667039.f_27 = func_804((((func_749() || func_748()) || func_747()) || func_746(PLAYER::PLAYER_ID())));
		Global_1667039.f_28 = func_536(6164, -1, 0);
		Global_1667039.f_29 = func_804(func_745());
		Global_1667039.f_31 = 0;
		Global_1667039.f_30 = 0;
		Global_1667039.f_32 = 0;
		Global_1667039.f_33 = 0;
		Global_1667039.f_34 = 0;
		Global_1667039.f_16 = 0;
		Global_1667039.f_7 = func_803();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_525(func_526(PLAYER::PLAYER_ID()))))
	{
		Global_1667173 = iVar0;
		Global_1667173.f_1 = iParam0;
		Global_1667173.f_21 = 1;
		Global_1667173.f_22 = 1;
		Global_1667173.f_7 = func_803();
		if (func_514() != func_22())
		{
			Global_1667173.f_4 = func_797(func_514());
			Global_1667173.f_5 = func_796(func_514());
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_1667173.f_4), &(Global_1667173.f_5));
		}
		if (func_514() != -1)
		{
			Global_1667173.f_17 = func_742(func_514());
		}
		Global_1667173.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1667173.f_28 = func_801(PLAYER::PLAYER_ID());
		Global_1667173.f_16 = 0;
		Global_1667173.f_24 = 0;
		Global_1667173.f_23 = 0;
		if (func_292(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667173.f_33 = func_804(func_352(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1667120 = iVar0;
		Global_1667120.f_1 = iParam0;
		Global_1667120.f_21 = 1;
		Global_1667120.f_22 = 1;
		Global_1667120.f_7 = func_803();
		Global_1667120.f_24 = 0;
		Global_1667120.f_23 = 0;
		Global_1667120.f_16 = 0;
		if (func_514() != func_22())
		{
			Global_1667120.f_4 = func_797(func_514());
			Global_1667120.f_5 = func_796(func_514());
		}
		Global_1667120.f_28 = func_801(PLAYER::PLAYER_ID());
		if (Global_1667120.f_28)
		{
			Global_1667120.f_29 = func_736(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1667120.f_29 = 0;
		}
		Global_1667120.f_30 = func_720(PLAYER::PLAYER_ID(), 4, -1);
		Global_1667120.f_31 = func_739(PLAYER::PLAYER_ID());
		Global_1667120.f_32 = func_804(func_719(PLAYER::PLAYER_ID()));
		Global_1667120.f_33 = func_804(func_718(PLAYER::PLAYER_ID()));
		Global_1667120.f_34 = func_804(func_717(PLAYER::PLAYER_ID()));
		Global_1667120.f_35 = func_804(func_716(PLAYER::PLAYER_ID()));
		Global_1667120.f_36 = func_715(PLAYER::PLAYER_ID());
		Global_1667120.f_37 = func_714(PLAYER::PLAYER_ID());
		Global_1667120.f_39 = func_713(PLAYER::PLAYER_ID());
		if (func_292(PLAYER::PLAYER_ID(), 1))
		{
			Global_1667120.f_41 = func_804(func_352(1));
		}
		if (func_355() != func_22())
		{
			func_565(func_355(), &(Global_1667120.f_4), &(Global_1667120.f_5));
		}
		Global_1667120.f_8 = NETWORK::_GET_POSIX_TIME();
		Global_1667120.f_28 = func_801(PLAYER::PLAYER_ID());
	}
	else
	{
		if (func_514() != func_22())
		{
			Global_1666806 = func_797(func_514());
			Global_1666806.f_1 = func_796(func_514());
		}
		Global_1666806.f_5 = NETWORK::_GET_POSIX_TIME();
		Global_1666806.f_13 = func_929();
		Global_1666806.f_15 = 0;
		if (func_515(1))
		{
			if (func_355() == func_514())
			{
				Global_1666806.f_15 = 1;
			}
		}
		if (func_928())
		{
			Global_1666941.f_28 = 1;
		}
		if (((((func_927() || func_926()) || func_925()) || func_924()) || func_922()) || func_921(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_30 = 1;
		}
		if (func_919(func_920(joaat("trailersmall2"))))
		{
			Global_1666941.f_32 = 1;
		}
		if (func_911(func_918(joaat("caddy"))))
		{
			Global_1666941.f_31 = 1;
		}
		if (func_784(PLAYER::PLAYER_ID()) || func_783(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_29 = 1;
		}
		if (func_780(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_33 = 1;
			Global_1666941.f_34 = 1;
		}
		if (func_781(PLAYER::PLAYER_ID()))
		{
			Global_1666941.f_36 = 1;
		}
		if (func_778(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1666941.f_35 = 1;
		}
		if (func_910(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1666941.f_37 = 1;
		}
		if (func_910(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1666941.f_38 = 1;
		}
		if (func_909(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_908(PLAYER::PLAYER_ID(), iVar2);
				if (func_678(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1666941.f_39 = 1;
				}
				if (func_678(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1666941.f_40 = 1;
				}
				if (func_678(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1666941.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_908(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_673(Global_1589747[iParam0 /*790*/].f_273.f_174[iParam1 /*12*/]))
	{
		uVar0 = Global_1589747[iParam0 /*790*/].f_273.f_174[iParam1 /*12*/];
	}
	return uVar0;
}

int func_909(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_910(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_22())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_778(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_911(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_916(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_763(11));
		func_762(iVar1, &iVar0, 1);
		iVar2 = func_916(func_913(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_536(func_912(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_912(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1795;
				
				case 15:
					return 1802;
				
				case 16:
					return 1809;
				
				case 17:
					return 1816;
				
				case 18:
					return 1823;
				
				case 19:
					return 1830;
				
				case 20:
					return 1837;
				
				case 21:
					return 1844;
				
				case 22:
					return 1851;
				
				case 23:
					return 1858;
				
				case 24:
					return 1864;
				
				case 25:
					return 1870;
				
				case 26:
					return 2165;
				
				case 27:
					return 2172;
				
				case 28:
					return 2179;
				
				case 29:
					return 2186;
				
				case 30:
					return 2193;
				
				case 31:
					return 2200;
				
				case 32:
					return 2207;
				
				case 33:
					return 2214;
				
				case 34:
					return 2221;
				
				case 35:
					return 2228;
				
				case 36:
					return 2235;
				
				case 37:
					return 2241;
				
				case 38:
					return 2247;
				
				case 39:
					return 2828;
				
				case 40:
					return 2835;
				
				case 41:
					return 2842;
				
				case 42:
					return 2849;
				
				case 43:
					return 2856;
				
				case 44:
					return 2863;
				
				case 45:
					return 2870;
				
				case 46:
					return 2877;
				
				case 47:
					return 2884;
				
				case 48:
					return 2891;
				
				case 49:
					return 2898;
				
				case 50:
					return 2904;
				
				case 51:
					return 2910;
				
				case 52:
					return 2952;
				
				case 53:
					return 2959;
				
				case 54:
					return 2966;
				
				case 55:
					return 2973;
				
				case 56:
					return 2980;
				
				case 57:
					return 2987;
				
				case 58:
					return 2994;
				
				case 59:
					return 3001;
				
				case 60:
					return 3008;
				
				case 61:
					return 3015;
				
				case 62:
					return 3022;
				
				case 63:
					return 3028;
				
				case 64:
					return 3034;
				
				case 65:
					return 3235;
				
				case 66:
					return 3243;
				
				case 67:
					return 3251;
				
				case 68:
					return 3259;
				
				case 69:
					return 3267;
				
				case 70:
					return 3275;
				
				case 71:
					return 3283;
				
				case 72:
					return 3291;
				
				case 73:
					return 3299;
				
				case 74:
					return 3307;
				
				case 75:
					return 3315;
				
				case 76:
					return 3323;
				
				case 77:
					return 3331;
				
				case 78:
					return 3339;
				
				case 79:
					return 3347;
				
				case 80:
					return 3355;
				
				case 81:
					return 3363;
				
				case 82:
					return 3371;
				
				case 83:
					return 3379;
				
				case 84:
					return 3387;
				
				case 85:
					return 3395;
				
				case 86:
					return 3402;
				
				case 87:
					return 3409;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4031;
				
				case 89:
					return 4039;
				
				case 90:
					return 4047;
				
				case 91:
					return 4055;
				
				case 92:
					return 4063;
				
				case 93:
					return 4071;
				
				case 94:
					return 4079;
				
				case 95:
					return 4087;
				
				case 96:
					return 4095;
				
				case 97:
					return 4103;
				
				case 98:
					return 4111;
				
				case 99:
					return 4119;
				
				case 100:
					return 4127;
				
				case 101:
					return 4135;
				
				case 102:
					return 4143;
				
				case 103:
					return 4151;
				
				case 104:
					return 4159;
				
				case 105:
					return 4167;
				
				case 106:
					return 4175;
				
				case 107:
					return 4183;
				
				case 108:
					return 4191;
				
				case 109:
					return 4199;
				
				case 110:
					return 4207;
				
				case 111:
					return 4215;
				
				case 112:
					return 4223;
				
				case 113:
					return 4231;
				
				case 114:
					return 4239;
				
				case 115:
					return 4247;
				
				case 116:
					return 4255;
				
				case 117:
					return 4263;
				
				case 118:
					return 4271;
				
				case 119:
					return 4279;
				
				case 120:
					return 4287;
				
				case 121:
					return 4295;
				
				case 122:
					return 4303;
				
				case 123:
					return 4311;
				
				case 124:
					return 4319;
				
				case 125:
					return 4327;
				
				case 126:
					return 4335;
				
				case 127:
					return 4343;
				
				case 128:
					return 4351;
				
				case 129:
					return 4359;
				
				case 130:
					return 4367;
				
				case 131:
					return 4375;
				
				case 132:
					return 4383;
				
				case 133:
					return 4391;
				
				case 134:
					return 4399;
				
				case 135:
					return 4407;
				
				case 136:
					return 4415;
				
				case 137:
					return 4423;
				
				case 138:
					return 4431;
				
				case 139:
					return 4439;
				
				case 140:
					return 4447;
				
				case 141:
					return 4455;
				
				case 142:
					return 4463;
				
				case 143:
					return 4471;
				
				case 144:
					return 4479;
				
				case 145:
					return 4487;
				
				case 146:
					return 4495;
				
				case 147:
					return 4503;
				
				case 148:
					return 4511;
				
				case 149:
					return 4519;
				
				case 150:
					return 4527;
				
				case 151:
					return 4535;
				
				case 152:
					return 4543;
				
				case 153:
					return 4551;
				
				case 154:
					return 4559;
				
				case 155:
					return 4567;
				
				case 156:
					return 4575;
				
				case 157:
					return 4583;
				
				case 158:
					return 5476;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5925;
				
				case 160:
					return 5932;
				
				case 161:
					return 5939;
				
				case 162:
					return 5946;
				
				case 163:
					return 5953;
				
				case 164:
					return 5960;
				
				case 165:
					return 5967;
				
				case 166:
					return 5974;
				
				case 167:
					return 5981;
				
				case 168:
					return 5988;
				
				case 169:
					return 5995;
				
				case 170:
					return 6002;
				
				case 171:
					return 6009;
				
				case 172:
					return 6016;
				
				case 173:
					return 6023;
				
				case 174:
					return 6030;
				
				case 175:
					return 6037;
				
				case 176:
					return 6044;
				
				case 177:
					return 6051;
				
				case 178:
					return 6058;
				
				case 179:
					return 6065;
				
				case 180:
					return 6072;
				
				case 181:
					return 6079;
				
				case 182:
					return 6086;
				
				case 183:
					return 6093;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6170;
				
				case 185:
					return 6177;
				
				case 186:
					return 6184;
				
				case 187:
					return 6191;
				
				case 188:
					return 6198;
				
				case 189:
					return 6205;
				
				case 190:
					return 6212;
				
				case 191:
					return 6219;
				
				case 192:
					return 6226;
				
				case 193:
					return 6233;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6567;
				
				case 195:
					return 6574;
				
				case 196:
					return 6581;
				
				case 197:
					return 6588;
				
				case 198:
					return 6595;
				
				case 199:
					return 6602;
				
				case 200:
					return 6609;
				
				case 201:
					return 6616;
				
				case 202:
					return 6623;
				
				case 203:
					return 6630;
				
				case 204:
					return 6637;
				
				case 205:
					return 6644;
				
				case 206:
					return 6651;
				
				case 207:
					return 6658;
				
				case 208:
					return 6665;
				
				case 209:
					return 6672;
				
				case 210:
					return 6679;
				
				case 211:
					return 6686;
				
				case 212:
					return 6693;
				
				case 213:
					return 6700;
				
				case 214:
					return 6707;
				
				case 215:
					return 6714;
				
				case 216:
					return 6721;
				
				case 217:
					return 6728;
				
				case 218:
					return 6735;
				
				case 219:
					return 6742;
				
				case 220:
					return 6749;
				
				case 221:
					return 6756;
				
				case 222:
					return 6763;
				
				case 223:
					return 6770;
				
				case 224:
					return 6777;
				
				case 225:
					return 6784;
				
				case 226:
					return 6791;
				
				case 227:
					return 6798;
				
				case 228:
					return 6805;
				
				case 229:
					return 6812;
				
				case 230:
					return 6819;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7289;
				
				case 232:
					return 7296;
				
				case 233:
					return 7303;
				
				case 234:
					return 7310;
				
				case 235:
					return 7317;
				
				case 236:
					return 7324;
				
				case 237:
					return 7331;
				
				case 238:
					return 7338;
				
				case 239:
					return 7345;
				
				case 240:
					return 7352;
				
				case 241:
					return 7359;
				
				case 242:
					return 7366;
				
				case 243:
					return 7373;
				
				case 244:
					return 7380;
				
				case 245:
					return 7387;
				
				case 246:
					return 7394;
				
				case 247:
					return 7401;
				
				case 248:
					return 7408;
				
				case 249:
					return 7415;
				
				case 250:
					return 7422;
				
				case 251:
					return 7429;
				
				case 252:
					return 7436;
				
				case 253:
					return 7443;
				
				case 254:
					return 7450;
				
				case 255:
					return 7457;
				
				case 256:
					return 7464;
				
				case 257:
					return 7471;
				
				case 258:
					return 7478;
				
				case 259:
					return 7485;
				
				case 260:
					return 7492;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case 79:
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case 79:
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			break;
			break;
	}
	return 1629;
}

int func_913(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 261)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (iParam0 >= func_763(iVar0) && iParam0 < func_914(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_914(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_766(iParam0);
		return func_915(iVar0);
	}
	return (func_764(iParam0, -1) * iParam0 + 1);
}

int func_915(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		default:
	}
	return -1;
}

int func_916(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_148();
	}
	if (iParam0 == 7 && !Global_262145.f_16856)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_766(iParam0);
		if (iVar1 == 0 && func_536(5393, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_917(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_801(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1378951[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2568229[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 21)
		{
			return 0;
		}
		return Global_2568104[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_917(int iParam0)
{
	if (!Global_262145.f_23522)
	{
		return 0;
	}
	return func_536(7207, iParam0, 0) != 0;
}

int func_918(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_919(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_762(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_536(func_912(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_920(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_921(int iParam0)
{
	if (iParam0 != func_22())
	{
		if (Global_1589747[iParam0 /*790*/].f_273.f_330 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_922()
{
	return func_536(func_923(3), -1, 0) != 0;
}

int func_923(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6538;
			break;
		
		case 1:
			return 6540;
			break;
		
		case 2:
			return 6541;
			break;
		
		case 3:
			return 6542;
			break;
		
		case 4:
			return 6543;
			break;
		
		case 5:
			return 6544;
			break;
	}
	return 9954;
}

bool func_924()
{
	return func_536(6163, -1, 0) != 0;
}

bool func_925()
{
	return func_536(5380, -1, 0) != 0;
}

bool func_926()
{
	return func_536(3828, -1, 0) != 0;
}

bool func_927()
{
	return func_536(3223, -1, 0) != 0;
}

bool func_928()
{
	return func_536(5379, -1, 0) != 0;
}

int func_929()
{
	int iVar0;
	
	iVar0 = func_514();
	if (iVar0 != func_22())
	{
		return Global_1625435[iVar0 /*560*/].f_11.f_93;
	}
	return 0;
}

int func_930(int iParam0)
{
	if (func_226(iParam0) == 225 || func_226(iParam0) == 226)
	{
		return func_527(iParam0);
	}
	return -1;
}

var func_931()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_680(PLAYER::PLAYER_ID(), iVar0))
		{
			GAMEPLAY::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_932(bool bParam0)
{
	if (bParam0)
	{
		if (!func_199(PLAYER::PLAYER_ID(), 9))
		{
			if (func_396(PLAYER::PLAYER_ID()) != 0)
			{
				func_229(9);
			}
		}
	}
	else if (func_199(PLAYER::PLAYER_ID(), 9))
	{
		func_228(9);
	}
}

int func_933(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	GAMEPLAY::CLEAR_BIT(&Global_2383, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_934(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3090 = iParam6;
			Global_2993[3 /*6*/] = { Global_106070.f_28022[iParam0 /*29*/].f_3 };
			Global_3070 = iParam0;
			GAMEPLAY::SET_BIT(&Global_2383, 1);
			GAMEPLAY::SET_BIT(&Global_2383, 7);
		}
		return 1;
	}
	return 0;
}

int func_934(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (GAMEPLAY::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_944();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14513 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14513 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14513 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_106070.f_14023[Global_14513 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_943() == 0)
	{
		func_941();
		return 0;
	}
	func_940(Global_16889);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/]), sParam1, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_24 = iParam2;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_25 = iParam7;
	Global_106070.f_14113[Global_16889 /*104*/].f_26 = uParam8;
	Global_106070.f_14113[Global_16889 /*104*/].f_29 = uParam9;
	Global_106070.f_14113[Global_16889 /*104*/].f_30 = uParam12;
	Global_106070.f_14113[Global_16889 /*104*/].f_31 = uParam11;
	Global_106070.f_14113[Global_16889 /*104*/].f_28 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_33), sParam4, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_50), sParam5, 64);
	Global_106070.f_14113[Global_16889 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_106070.f_14113[Global_16889 /*104*/].f_83), sParam15, 64);
	if (GAMEPLAY::IS_BIT_SET(Global_2383, 10))
	{
		Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
		Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
		Global_3089 = 4;
		func_939(0);
		func_939(2);
		func_939(1);
	}
	else
	{
		func_944();
		switch (iParam16)
		{
			case 3:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[Global_14513] = 1;
				break;
			
			case 0:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14513)
			{
				case 0:
					func_939(0);
					Global_3089 = 0;
					break;
				
				case 1:
					func_939(1);
					Global_3089 = 1;
					break;
				
				case 2:
					func_939(2);
					Global_3089 = 2;
					break;
				
				case 3:
					func_939(3);
					Global_3089 = 3;
					break;
				
				default:
					Global_3089 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2383, 10))
		{
			Global_106070.f_14023[0 /*20*/].f_17 = 1;
			Global_106070.f_14023[1 /*20*/].f_17 = 1;
			Global_106070.f_14023[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_106070.f_14023[Global_14513 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_106070.f_14023[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_106070.f_14023[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_106070.f_14023[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16891[Global_16889] = 0;
	if (bParam10)
	{
		func_944();
		if (Global_14456)
		{
			StringCopy(&Global_14502, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14513)
			{
				case 0:
					StringCopy(&Global_14502, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14502, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14502, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14502, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_479())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14502, 1);
			}
		}
	}
	if (!Global_14682)
	{
		if (Global_14513.f_1 == 6)
		{
			func_938(Global_14494, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_935(1);
			func_938(Global_14494, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14493), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_935(int iParam0)
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
	
	Global_16890 = 0;
	Global_2988 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2952[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_937(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2384, 3))
								{
									iVar2 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14685 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_271(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2458186)
							{
								if (iVar1 == 14)
								{
									func_936(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2952[iVar0] = 1;
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
				if (iParam0 == Global_2390[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2390[iVar1 /*15*/].f_4)
					{
						if (Global_2952[iVar0] == 0)
						{
							Global_2916[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_106070.f_14113[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_106070.f_14113[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_106070.f_14113[iVar3 /*104*/].f_99[Global_14513] == 1)
											{
												Global_16890++;
											}
										}
									}
									iVar3++;
								}
								func_936(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16890), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_71205)
								{
									iVar4 = 0;
									iVar4 = Global_4267064;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4267065[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4267065[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4267065[iVar5 /*104*/].f_99[Global_14513] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_936(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14513)
									{
										case 0:
											uVar6 = Global_37276;
											break;
										
										case 1:
											uVar6 = Global_37277;
											break;
										
										case 2:
											uVar6 = Global_37278;
											break;
										
										default:
											break;
									}
									func_936(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(uVar6), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_936(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16885), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_271(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2389);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2384, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_271(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (GAMEPLAY::IS_BIT_SET(Global_2384, 3))
								{
									iVar8 = 42;
									Global_14685 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14685 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_271(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_271(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_2390[iVar1 /*15*/]), "CELL_BENWEB")) && GAMEPLAY::IS_BIT_SET(Global_2384, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14494, "SET_DATA_SLOT");
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(1);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(iVar0);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(Global_2390[iVar1 /*15*/].f_10);
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(0);
								func_271(&(Global_2390[iVar1 /*15*/]));
								GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_2390[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1624079.f_1;
								func_936(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_936(Global_14494, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2390[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2390[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2952[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_936(var uParam0, char* sParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::_ADD_SCALEFORM_MOVIE_METHOD_PARAMETER_INT(SYSTEM::ROUND(uParam2));
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
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(uParam7))
	{
		func_271(uParam7);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_271(iParam8);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_271(iParam9);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_271(iParam10);
	}
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_271(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_937(int iParam0)
{
	return Global_36117 == iParam0;
}

void func_938(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_939(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_106070.f_14023[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_940(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = TIME::GET_CLOCK_SECONDS();
	uVar1 = TIME::GET_CLOCK_MINUTES();
	uVar2 = TIME::GET_CLOCK_HOURS();
	uVar3 = TIME::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = TIME::GET_CLOCK_MONTH() + 1;
	uVar5 = TIME::GET_CLOCK_YEAR();
	Global_106070.f_14113[iParam0 /*104*/].f_18 = uVar0;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_106070.f_14113[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_941()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_942(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
		{
			Global_16889 = iVar2;
		}
		iVar2++;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_24 = 1;
}

int func_942(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_943()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_71205)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0)
		{
			Global_16889 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16889 = 34;
	Global_106070.f_14113[Global_16889 /*104*/].f_18 = -1;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_1 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_2 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_3 = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 0 || Global_106070.f_14113[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_942(Global_106070.f_14113[iVar2 /*104*/].f_18, Global_106070.f_14113[Global_16889 /*104*/].f_18))
			{
				Global_16889 = iVar2;
			}
		}
		if (Global_106070.f_14113[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16889 == 34)
	{
		return 0;
	}
	Global_106070.f_14113[Global_16889 /*104*/].f_99[0] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[1] = 0;
	Global_106070.f_14113[Global_16889 /*104*/].f_99[2] = 0;
	return 1;
}

void func_944()
{
	if (func_937(14))
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
		Global_14513 = func_945();
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

var func_945()
{
	func_946();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_946()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_949(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_948(PLAYER::PLAYER_PED_ID());
			if (func_947(iVar0) && (!func_937(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_947(Global_106070.f_2355.f_539.f_4301))
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

bool func_947(int iParam0)
{
	return iParam0 < 3;
}

int func_948(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_949(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_949(int iParam0)
{
	if (func_947(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_950()
{
	if (!GAMEPLAY::IS_BIT_SET(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1, 1))
	{
		if (!func_973())
		{
			if (Local_206.f_5 > 0 || GAMEPLAY::IS_BIT_SET(Local_206.f_1, 6))
			{
				func_231(1);
				GAMEPLAY::SET_BIT(&(Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_1), 1);
			}
		}
	}
}

int func_951(bool bParam0)
{
	if (func_955(1))
	{
		return 1;
	}
	if (Global_2524719.f_4883.f_35)
	{
		Global_2524719.f_4883.f_35 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_355() == func_22() || !func_1072(func_355(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_452(PLAYER::PLAYER_ID()))
	{
		if (func_954(PLAYER::PLAYER_ID()) && func_952(func_953(PLAYER::PLAYER_ID()), 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_952(int iParam0, int iParam1)
{
	return func_21(iParam0) == iParam1;
}

int func_953(int iParam0)
{
	if (iParam0 != func_22() && func_1072(iParam0, 1, 1))
	{
		return Global_2423801[iParam0 /*413*/].f_309.f_13;
	}
	return -1;
}

int func_954(int iParam0)
{
	if (iParam0 != func_22() && func_1072(iParam0, 1, 1))
	{
		return GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_309, 4);
	}
	return 0;
}

int func_955(bool bParam0)
{
	bool bVar0;
	
	if (!func_515(1))
	{
		bVar0 = false;
		if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 != func_22())
		{
			if (func_1072(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57, 0, 1))
			{
				if ((Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 4 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 8) || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_956(func_226(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_618(31);
				if (func_417(func_226(PLAYER::PLAYER_ID())))
				{
					func_618(81);
				}
				if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 != func_22() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57))
				{
					Global_1623923 = func_494(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_354(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57))
					{
						func_618(88);
					}
				}
				else
				{
					Global_1623923 = 1;
				}
				Global_1623907 = { Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_99 };
			}
			return 1;
		}
	}
	return 0;
}

int func_956(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

bool func_957()
{
	return func_245(PLAYER::PLAYER_ID());
}

void func_958(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 != iParam0)
	{
		func_972(-1);
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 = iParam0;
		if (func_971() != -1)
		{
			func_970(-1);
		}
		if (func_969() != -1)
		{
			func_968(-1);
		}
		func_967(iParam2);
		func_965(iParam0);
		if (!func_238(iParam0))
		{
			fVar0 = func_237(iParam0);
			if (fVar0 != 1f)
			{
				func_234(fVar0);
				GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 1);
			}
		}
		if (!func_241(iParam0) || iParam3)
		{
			if (func_239(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_404())
		{
			func_229(27);
		}
		if (bParam1)
		{
			if (!func_398())
			{
				func_231(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 1) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 4)) || GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 0))
			{
				func_618(6);
			}
			func_964();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 0);
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 0);
		}
		if (func_137(PLAYER::PLAYER_ID()) && func_246(PLAYER::PLAYER_ID()))
		{
			GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_1), 8);
		}
		func_960();
		if (func_959(iParam0))
		{
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 0);
			GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 0);
			GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 6);
		}
		Global_2524719.f_6236 = 0;
	}
}

int func_959(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_960()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_963();
	iVar2 = func_87(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_326(iVar1, iVar2, 1) || func_961(iVar1, PLAYER::PLAYER_ID()))
			{
				unk_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, uVar3);
				unk_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_961(int iParam0, int iParam1)
{
	if (func_292(iParam0, 1) && func_292(iParam1, 1))
	{
		return (func_962(iParam0) == func_87(iParam1) || func_962(iParam1) == func_87(iParam0));
	}
	return 0;
}

int func_962(int iParam0)
{
	if (func_292(iParam0, 1))
	{
		return Global_1625435[func_87(iParam0) /*560*/].f_11.f_443;
	}
	return func_22();
}

int func_963()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_514();
	if (iVar0 != func_22())
	{
		if (func_1072(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return GAMEPLAY::IS_BIT_SET(Global_1625435[iVar1 /*560*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_964()
{
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 1))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4542), 1);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 4))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4542), 4);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4542, 6))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4542), 6);
	}
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4542), 0);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4542), 2);
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_666 = 0;
	if (Global_2524719.f_4544 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2524719.f_4544);
	}
	Global_2524719.f_4543 = 0;
}

void func_965(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_536(3791, -1, 0);
	iVar1 = func_966(iParam0);
	if (iVar1 != -1)
	{
		GAMEPLAY::SET_BIT(&iVar0, iVar1);
		func_534(3791, iVar0, -1, 1, 0);
	}
}

int func_966(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_967(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1625435[iVar0 /*560*/].f_11.f_176 != iParam0)
	{
		Global_1625435[iVar0 /*560*/].f_11.f_176 = iParam0;
	}
}

void func_968(int iParam0)
{
	if (Global_2524719.f_4883.f_331 != iParam0)
	{
		Global_2524719.f_4883.f_331 = iParam0;
	}
}

int func_969()
{
	return Global_2524719.f_4883.f_331;
}

void func_970(int iParam0)
{
	if (Global_2524719.f_4883.f_330 != iParam0)
	{
		Global_2524719.f_4883.f_330 = iParam0;
	}
}

int func_971()
{
	return Global_2524719.f_4883.f_330;
}

void func_972(int iParam0)
{
	Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_32 = iParam0;
}

int func_973()
{
	int iVar0;
	
	iVar0 = func_974();
	if (iVar0 > -1)
	{
		if (Local_206.f_33 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_974()
{
	int iVar0;
	
	if (Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 != -1)
	{
		return Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3;
	}
	if (func_245(PLAYER::PLAYER_ID()))
	{
		Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_206.f_33)
		{
			func_932(1);
		}
	}
	else if (func_292(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_514();
		if (iVar0 != func_22())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			}
		}
	}
	return Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/].f_3;
}

int func_975()
{
	return Local_206;
}

int func_976(int iParam0)
{
	return Local_266[iParam0 /*6*/];
}

int func_977()
{
	var uVar0;
	
	func_982(&uVar0);
	if (Global_1312834 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_981())
	{
		return 1;
	}
	if (Global_2460426)
	{
		return 1;
	}
	if (func_980())
	{
		return 1;
	}
	if (func_979(157))
	{
		if (!func_978())
		{
			return 1;
		}
	}
	if (func_979(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_235() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_235()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_978()
{
	return Global_2448386.f_587;
}

int func_979(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_980()
{
	return Global_2458191;
}

bool func_981()
{
	return Global_2448386.f_582;
}

void func_982(var uParam0)
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
					func_983(iVar0);
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

void func_983(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_1072(vVar0.y, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_984(uVar4, &bVar5))
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

int func_984(var uParam0, var uParam1)
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

void func_985()
{
	SYSTEM::WAIT(0);
}

void func_986()
{
	if (!GAMEPLAY::IS_BIT_SET(uLocal_459, 6))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (func_973() || func_405())
			{
				func_710(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
				GAMEPLAY::SET_BIT(&uLocal_459, 6);
			}
		}
	}
	func_1032(3, 3, -1, -1082130432);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_206.f_33)
		{
			if (iLocal_766 >= 0)
			{
				func_883(&Local_472);
				func_882(&Local_472);
			}
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_465)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), uLocal_467);
	}
	if (iLocal_766 > 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Local_206.f_1, 3))
		{
			func_875(PLAYER::PLAYER_ID(), 1, 0);
		}
	}
	func_1031();
	if (Local_206.f_34 != -1)
	{
		if (GAMEPLAY::IS_BIT_SET(uLocal_459, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34)))
			{
				func_435(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 432, 0, 0);
				func_434(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 1, 0, 0);
				func_433(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 0, 0, 0);
				func_432(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), 0);
				func_429(PLAYER::INT_TO_PLAYERINDEX(Local_206.f_34), Global_262145.f_12242, 0, 0);
			}
		}
	}
	if (func_204(0))
	{
		func_203(0);
	}
	if (GAMEPLAY::IS_BIT_SET(uLocal_460, 0))
	{
		if (!GAMEPLAY::IS_BIT_SET(uLocal_460, 2))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
			AUDIO::TRIGGER_MUSIC_EVENT("BG_SIGHTSEER_STOP");
		}
	}
	GAMEPLAY::SET_BIT(&uLocal_460, 8);
	func_200();
	OBJECT::_0x78857FC65CADB909(1);
	func_932(0);
	func_988(1, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	GAMEPLAY::CLEAR_BIT(&Global_4268330, 21);
	GAMEPLAY::CLEAR_BIT(&Global_4268330, 20);
	func_987();
}

void func_987()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_988(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1358108.f_1.f_108 != 0)
	{
		Global_1358108.f_1.f_108 = 0;
	}
	Global_1358108.f_1.f_109 = -1;
	Global_1358108.f_1.f_110 = -1;
	if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 167 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 168)
	{
		func_1029();
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 4);
	}
	if ((func_563() && iParam1 != 0) && Global_262145.f_16853)
	{
		if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 190 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 192)
		{
			func_1011(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 164 || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 208) || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 250) || Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 == 237)
	{
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 1);
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 1);
	}
	if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 != -1)
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_33 = -1;
		if (!GAMEPLAY::IS_BIT_SET(Global_1574631.f_1, 14) && !func_137(PLAYER::PLAYER_ID()))
		{
			func_231(0);
		}
	}
	else if (func_1009(PLAYER::PLAYER_ID()) != -1)
	{
		func_972(-1);
	}
	func_1008(func_22());
	if (func_204(16))
	{
		func_203(16);
	}
	func_1005(0);
	func_967(-1);
	func_1004();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1003(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1001(iVar1);
		iVar1++;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 0);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 5))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 5);
	}
	iVar2 = func_424();
	if ((func_323(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1000(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_464(iVar2))
	{
		func_997(-1, 1);
	}
	else if (((((func_423(iVar2) || func_996(iVar2)) || func_995(iVar2)) || func_461(iVar2)) || func_459(iVar2)) || func_457(iVar2))
	{
	}
	else
	{
		func_997(-1, 1);
	}
	func_228(19);
	func_228(20);
	func_228(21);
	func_228(22);
	func_228(27);
	func_203(3);
	func_203(4);
	func_203(7);
	func_994();
	if (func_246(PLAYER::PLAYER_ID()))
	{
		func_932(0);
	}
	func_228(29);
	Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 = func_22();
	if (Global_2524719.f_4883.f_35 != 0)
	{
		Global_2524719.f_4883.f_35 = 0;
	}
	if (bParam0)
	{
		func_205();
	}
	if (!func_137(PLAYER::PLAYER_ID()))
	{
		func_227();
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 1);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 6))
	{
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 1);
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(5, 1);
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 6);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 7))
	{
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 7);
	}
	if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 8))
	{
		func_993("IMPEXP_SELFDES", 0);
		func_991("IMPEXP_SELFDES");
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 8);
	}
	func_989(iVar2, 0);
}

void func_989(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_990(iParam0));
			GAMEPLAY::SET_BIT(&(Global_1666797.f_3), 9);
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Global_1666797.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_990(iParam0));
		GAMEPLAY::CLEAR_BIT(&(Global_1666797.f_3), 9);
	}
}

char* func_990(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_991(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!GAMEPLAY::IS_STRING_NULL(&(Global_106070.f_14113[iVar0 /*104*/])))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_14113[iVar0 /*104*/]), sParam0))
			{
				if (Global_106070.f_14113[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_944();
					Global_106070.f_14113[iVar0 /*104*/].f_99[Global_14513] = 0;
					if (func_992(iVar0))
					{
					}
					else
					{
						Global_106070.f_14113[iVar0 /*104*/].f_24 = 0;
						Global_106070.f_14113[iVar0 /*104*/].f_28 = 0;
						Global_106070.f_14113[iVar0 /*104*/].f_29 = 0;
					}
					UI::_REMOVE_NOTIFICATION(Global_106070.f_14113[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_992(int iParam0)
{
	if ((Global_106070.f_14113[iParam0 /*104*/].f_99[0] == 1 || Global_106070.f_14113[iParam0 /*104*/].f_99[1] == 1) || Global_106070.f_14113[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_993(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!GAMEPLAY::IS_STRING_NULL(&(Global_106070.f_14113[iVar0 /*104*/])))
		{
			if (GAMEPLAY::ARE_STRINGS_EQUAL(&(Global_106070.f_14113[iVar0 /*104*/]), sParam0))
			{
				if (Global_106070.f_14113[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_106070.f_14113[iVar0 /*104*/].f_24 = 1;
				if (Global_106070.f_14113[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_106070.f_14023[0 /*20*/].f_17 = 0;
					}
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_106070.f_14023[1 /*20*/].f_17 = 0;
					}
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_106070.f_14023[2 /*20*/].f_17 = 0;
					}
					if (Global_106070.f_14113[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_106070.f_14023[3 /*20*/].f_17 = 0;
					}
					Global_106070.f_14113[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_106070.f_14113[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_994()
{
	if (func_249(PLAYER::PLAYER_ID()))
	{
		func_228(25);
	}
}

int func_995(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_996(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_997(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_424();
	}
	if (iParam0 > 0)
	{
		if (func_514() != func_22())
		{
			if (func_453(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2504301.f_93[func_999(iParam0)] = 1;
			}
		}
		iVar0 = func_999(159);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(157);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(148);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(164);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(142);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(152);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(166);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(170);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(173);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(179);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(200);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(201);
		if (func_998(iVar0, Global_262145.f_12493, bParam1))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(182);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(183);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(185);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(186);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(180);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(195);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(197);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(198);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(207);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(208);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(209);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(214);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(215);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(216);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(217);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(218);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(219);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(220);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(221);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_998(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_199(PLAYER::PLAYER_ID(), 19) && !func_199(PLAYER::PLAYER_ID(), 20)) && !func_199(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2504301.f_93[iParam0] == 1 && func_9(&(Global_2504301[iParam0 /*2*/])))
	{
		if (func_831(&(Global_2504301[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2504301.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_999(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_1000(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_424();
	}
	if (iParam0 > 0)
	{
		if (func_514() != func_22())
		{
			Global_2504301.f_93[func_999(iParam0)] = 1;
		}
		iVar0 = func_999(155);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(163);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(160);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(153);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(162);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(154);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(171);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(172);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(199);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(194);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(193);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(210);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(205);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(189);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_999(211);
		if (func_998(iVar0, Global_262145.f_12494, 0))
		{
			func_264(&(Global_2504301[iVar0 /*2*/]));
			func_8(&(Global_2504301[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1001(int iParam0)
{
	if (!func_192(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_303[iParam0 /*3*/], func_1002(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_303[iParam0 /*3*/] = { func_1002() };
	}
	if (!func_192(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_290[iParam0 /*3*/], func_1002(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_290[iParam0 /*3*/] = { func_1002() };
	}
}

Vector3 func_1002()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_1003(int iParam0)
{
	if (!func_192(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_145[iParam0 /*3*/], func_1002(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_145[iParam0 /*3*/] = { func_1002() };
	}
	if (!func_192(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_120[iParam0 /*3*/], func_1002(), 0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_120[iParam0 /*3*/] = { func_1002() };
	}
}

void func_1004()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573886 = { Var0 };
	Global_1573886.f_13 = func_22();
	if (GAMEPLAY::IS_BIT_SET(Global_1573342, 3))
	{
		GAMEPLAY::CLEAR_BIT(&Global_1573342, 3);
	}
}

void func_1005(bool bParam0)
{
	if (bParam0)
	{
		if (!func_481(PLAYER::PLAYER_ID(), 14))
		{
			func_1007(14);
		}
	}
	else if (func_481(PLAYER::PLAYER_ID(), 14))
	{
		func_1006(14);
	}
}

void func_1006(int iParam0)
{
	GAMEPLAY::CLEAR_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_5), iParam0);
}

void func_1007(int iParam0)
{
	GAMEPLAY::SET_BIT(&(Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_5), iParam0);
}

void func_1008(int iParam0)
{
	if (func_245(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_443 != iParam0)
			{
				Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_443 = iParam0;
				if (iParam0 != func_22())
				{
				}
			}
		}
	}
}

int func_1009(int iParam0)
{
	if (func_1010(iParam0, 0))
	{
		return Global_1625435[iParam0 /*560*/].f_11.f_32;
	}
	return -1;
}

int func_1010(int iParam0, int iParam1)
{
	if (Global_1625435[iParam0 /*560*/].f_11.f_32 != -1 || (iParam1 && Global_1625435[iParam0 /*560*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_1011(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_680(iParam0, iParam1) && func_1028(iParam0, iParam1))
	{
		iVar0 = func_679(iParam0, iParam1);
		func_1015(iVar0, bParam2, bParam3);
		func_1012(iVar0, 1);
	}
}

void func_1012(int iParam0, int iParam1)
{
	if (!func_1014(iParam0))
	{
		return;
	}
	func_666(func_1013(iParam0), iParam1, -1, 1);
	Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_6 = iParam1;
}

int func_1013(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_1014(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1015(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_908(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_1027(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2503901[iParam0];
		iVar0 = func_1026(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1668516 = -1;
		}
		func_1025(iParam0, 0, bParam2);
	}
	else if (func_1023(iParam0, bParam2))
	{
		iVar0 = func_1022(iVar2, 0);
		uVar3 = func_792(PLAYER::PLAYER_ID(), iVar2);
		uVar4 = func_1021(iVar2, bParam2);
		iVar5 = func_1022(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(uVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(uVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1020(iVar2) && func_1019(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1027(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1018(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_1017(iParam0, (Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2 - (func_1021(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1022(iVar2, bParam2) / func_1018(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1020(iVar2) && func_1019(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1016(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_1016(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return;
	}
	if (func_673(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1589747[iParam0 /*790*/].f_273.f_248 = iParam2;
				}
				else
				{
					Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1017(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2)
	{
		Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_273.f_174[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1018(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (func_673(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1019(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_22())
	{
		return 0;
	}
	if (func_673(iParam1) && func_1020(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/] == iParam1)
			{
				return Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1020(int iParam0)
{
	return func_560(iParam0) == 5;
}

int func_1021(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_560(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16824;
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16829;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16823;
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16828;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16822;
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16827;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16820;
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16825;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16821;
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16826;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20942;
				if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20943;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20926;
				if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20927;
				}
			}
			break;
	}
	return uVar0;
}

int func_1022(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_560(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16805;
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16814);
			}
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16819);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16806;
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16813);
			}
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16818);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16807;
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16812);
			}
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16817);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16808;
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16810);
			}
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16815);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16809;
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16811);
			}
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16816);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20939;
			}
			else
			{
				iVar0 = Global_262145.f_20923;
			}
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20940);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20924);
				}
			}
			if (func_678(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20941);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20925);
				}
			}
			if (func_1019(PLAYER::PLAYER_ID(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1023(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_667(15384, -1, -1);
	}
	return func_667(func_1024(iParam0), -1, -1);
}

int func_1024(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9416;
		
		case 1:
			return 9417;
		
		case 2:
			return 9418;
		
		case 3:
			return 9419;
		
		case 4:
			return 9420;
		
		case 5:
			return 15372;
		
		default:
	}
	return 9416;
}

void func_1025(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_666(15384, iParam1, -1, 1);
		return;
	}
	func_666(func_1024(iParam0), iParam1, -1, 1);
}

int func_1026(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2503901[iParam0];
	iVar1 = func_908(PLAYER::PLAYER_ID(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2503908;
	}
	if (func_1020(iVar1))
	{
		if (func_1019(PLAYER::PLAYER_ID(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1027(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2503908 = iParam1;
		return;
	}
	Global_2503901[iParam0] = iParam1;
}

int func_1028(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_680(iParam0, iParam1))
	{
		iVar0 = func_679(iParam0, iParam1);
		if (Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_4 > 0 && Global_1589747[iParam0 /*790*/].f_273.f_174[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1029()
{
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 28);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 29);
	func_1030(24);
}

void func_1030(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_7[iVar0]), iVar1);
}

void func_1031()
{
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_466);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_465);
}

void func_1032(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<14> Var1;
	struct<17> Var15;
	struct<17> Var32;
	struct<16> Var49;
	struct<17> Var65;
	struct<16> Var82;
	struct<18> Var98;
	struct<18> Var116;
	struct<19> Var134;
	struct<18> Var153;
	
	uVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	Var1 = Global_1666806;
	Var1.f_1 = Global_1666806.f_1;
	Var1.f_2 = Global_1666806.f_2;
	Var1.f_3 = Global_1666806.f_3;
	Var1.f_4 = Global_1666806.f_4;
	Var1.f_5 = Global_1666806.f_5;
	Var1.f_6 = Global_1666806.f_6;
	Var1.f_7 = Global_1666806.f_7;
	Var1.f_8 = Global_1666806.f_8;
	Var1.f_9 = Global_1666806.f_9;
	Var1.f_10 = Global_1666806.f_10;
	Var1.f_11 = Global_1666806.f_11;
	Var1.f_12 = Global_1666806.f_12;
	Var1.f_13 = Global_1666806.f_14;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_DEATHMATCH"))
		{
			Var15 = { Var1 };
			Var15.f_14 = Global_1666806.f_15;
			Var15.f_15 = Global_1666806.f_16;
			Var15.f_16 = Global_1666806.f_17;
			unk_0x8D8ADB562F09A245(&Var15);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_YACHT_ROB"))
		{
			Var32 = { Var1 };
			Var32.f_14 = Global_1666806.f_15;
			Var32.f_15 = iParam0;
			Var32.f_16 = iParam1;
			unk_0xD1A1EE3B4FA8E760(&Var32);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_HUNT_THE_BOSS"))
		{
			Var49 = { Var1 };
			Var49.f_14 = Global_1666806.f_15;
			Var49.f_15 = iParam0;
			unk_0x88087EE1F28024AE(&Var49);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_SIGHTSEER"))
		{
			Var65 = { Var1 };
			Var65.f_14 = Global_1666806.f_15;
			Var65.f_15 = iParam0;
			Var65.f_16 = iParam1;
			unk_0xFCC228E07217FCAC(&Var65);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_ASSAULT"))
		{
			Var82 = { Var1 };
			Var82.f_14 = Global_1666806.f_15;
			Var82.f_15 = iParam0;
			unk_0x678F86D8FC040BDB(&Var82);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_BELLYBEAST"))
		{
			Var98 = { Var1 };
			Var98.f_14 = Global_1666806.f_15;
			Var98.f_15 = iParam0;
			Var98.f_16 = iParam1;
			Var98.f_17 = iParam2;
			unk_0xA6F54BB2FFCA35EA(&Var98);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_HEADHUNTER"))
		{
			Var116 = { Var1 };
			Var116.f_14 = iParam0;
			Var116.f_15 = iParam1;
			Var116.f_16 = iParam2;
			Var116.f_17 = Global_1666806.f_15;
			unk_0x5FF2C33B13A02A11(&Var116);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_FRAGILE_GOODS"))
		{
			Var134 = { Var1 };
			Var134.f_15 = iParam0;
			Var134.f_16 = iParam1;
			Var134.f_17 = iParam2;
			Var134.f_14 = iParam3;
			Var134.f_18 = Global_1666806.f_15;
			unk_0x282B6739644F4347(&Var134);
		}
		else if (GAMEPLAY::ARE_STRINGS_EQUAL(uVar0, "GB_AIRFREIGHT"))
		{
			Var153 = { Var1 };
			Var153.f_14 = iParam0;
			Var153.f_15 = iParam1;
			Var153.f_16 = iParam2;
			Var153.f_17 = Global_1666806.f_15;
			unk_0xF06A6F41CB445443(&Var153);
		}
	}
	func_1033();
}

void func_1033()
{
	struct<18> Var0;
	
	Global_1666806 = { Var0 };
}

void func_1034(struct<21> Param0)
{
	func_1070(func_1071(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(3);
	func_1068(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_206, 60);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_266, 193);
	if (!func_1067())
	{
		func_986();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
		}
		func_1066();
		func_1035(0, 0);
		Local_266[NETWORK::PARTICIPANT_ID_TO_INT() /*6*/] = 0;
	}
	else
	{
		func_986();
	}
}

void func_1035(int iParam0, int iParam1)
{
	func_1065();
	if (func_452(PLAYER::PLAYER_ID()))
	{
		func_1038(1);
	}
	if ((iParam0 != 0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1)) && func_1037(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				GAMEPLAY::SET_BIT(&Global_1666792, 0);
				break;
			}
	}
	if (!func_957() && !func_292(PLAYER::PLAYER_ID(), 1))
	{
		if (func_401())
		{
			func_230(3);
		}
	}
	func_230(4);
	if (func_515(0))
	{
		Global_1625435[PLAYER::PLAYER_ID() /*560*/].f_11.f_57 = func_514();
	}
	if (func_417(iParam0))
	{
		func_790();
		Global_1666824.f_18 = func_770(func_355());
	}
	else if (func_422(func_1009(PLAYER::PLAYER_ID())))
	{
		func_788();
		Global_1666878.f_18 = func_770(func_355());
	}
	func_1036();
}

void func_1036()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1358108.f_534[iVar0 /*42*/].f_1 = func_22();
		Global_1358108.f_534[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1037(int iParam0, bool bParam1)
{
	return func_326(PLAYER::PLAYER_ID(), iParam0, bParam1);
}

void func_1038(bool bParam0)
{
	int iVar0;
	
	func_1030(33);
	func_1030(34);
	func_1030(35);
	func_1030(36);
	func_1030(37);
	func_1030(38);
	func_1030(39);
	func_1030(40);
	func_1030(43);
	func_1030(41);
	func_1030(54);
	func_1030(42);
	func_1030(47);
	func_1064(23);
	func_1064(24);
	func_1030(92);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_1725), 2);
	func_1063();
	func_1058();
	func_1053();
	func_1048();
	func_1040();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2524719.f_4883.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1039(3))
	{
		func_1064(3);
	}
	else if (func_1039(4))
	{
		func_1064(4);
	}
	else if (func_1039(5))
	{
		func_1064(5);
	}
	else if (func_1039(6))
	{
		func_1064(6);
	}
	else if (func_1039(7))
	{
		func_1064(7);
	}
	else if (((((((((((((((((func_1039(0) || func_1039(1)) || func_1039(2)) || func_1039(8)) || func_1039(9)) || func_1039(10)) || func_1039(11)) || func_1039(12)) || func_1039(13)) || func_1039(14)) || func_1039(15)) || func_1039(16)) || func_1039(17)) || func_1039(18)) || func_1039(19)) || func_1039(20)) || func_1039(21)) || func_1039(22))
	{
		func_1064(8);
		func_1064(0);
		func_1064(1);
		func_1064(2);
		func_1064(9);
		func_1064(10);
		func_1064(11);
		func_1064(12);
		func_1064(13);
		func_1064(14);
		func_1064(15);
		func_1064(16);
		func_1064(17);
		func_1064(18);
		func_1064(19);
		func_1064(20);
		func_1064(21);
		func_1064(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2524719.f_4883.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1039(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_14[iVar0], iVar1);
}

void func_1040()
{
	int iVar0;
	
	if (func_1047())
	{
		func_1046(8);
		func_1046(9);
		func_1046(10);
		func_1046(12);
		func_1046(13);
		func_1046(14);
		func_1046(19);
		func_1046(20);
		func_1046(21);
		func_1046(22);
		func_1046(23);
		func_1046(24);
		func_1046(25);
		func_1046(26);
		func_1046(15);
		func_1046(16);
		func_1046(17);
		func_1046(18);
		func_1046(35);
		func_1046(45);
		func_1046(46);
		if (func_1045(11))
		{
			func_1046(11);
			iVar0 = func_536(7226, -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, 2);
			func_534(7226, iVar0, -1, 1, 0);
		}
	}
	if (func_1045(48))
	{
		if (func_1044(151, 3))
		{
			func_1043(151, 3);
		}
		func_1046(48);
	}
	if (func_1045(49))
	{
		if (func_1044(152, 3))
		{
			func_1043(152, 3);
		}
		func_1046(49);
	}
	if (func_1045(50))
	{
		if (func_1044(153, 3))
		{
			func_1043(153, 3);
		}
		func_1046(50);
	}
	if (func_1045(51))
	{
		if (func_1044(func_1041(), 3))
		{
			func_1043(func_1041(), 3);
		}
		func_1046(51);
	}
}

int func_1041()
{
	if (func_1042())
	{
		Global_106070.f_28022[154 /*29*/].f_24[Global_14513] = 1;
	}
	return 154;
}

int func_1042()
{
	int iVar0;
	
	iVar0 = func_87(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_22()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

void func_1043(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 145)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_106070.f_28022[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_1044(int iParam0, int iParam1)
{
	if (Global_106070.f_28022[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

bool func_1045(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_26[iVar0], iVar1);
}

void func_1046(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_26[iVar0]), iVar1);
}

int func_1047()
{
	if (((((((((((((((((((((func_1045(8) || func_1045(9)) || func_1045(10)) || func_1045(12)) || func_1045(11)) || func_1045(13)) || func_1045(14)) || func_1045(19)) || func_1045(20)) || func_1045(21)) || func_1045(22)) || func_1045(23)) || func_1045(24)) || func_1045(25)) || func_1045(26)) || func_1045(15)) || func_1045(16)) || func_1045(17)) || func_1045(18)) || func_1045(35)) || func_1045(45)) || func_1045(46))
	{
		return 1;
	}
	return 0;
}

void func_1048()
{
	if (func_1052())
	{
		func_1051(0);
		func_1051(1);
		func_1051(2);
		func_1051(3);
		func_1051(4);
		func_1051(5);
		if (func_1050(32))
		{
			if (func_1044(func_1049(), 3))
			{
				func_1043(func_1049(), 3);
			}
			func_1051(32);
		}
	}
}

int func_1049()
{
	if (func_1042())
	{
		Global_106070.f_28022[12 /*29*/].f_24[Global_14513] = 1;
	}
	return 12;
}

bool func_1050(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_23[iVar0], iVar1);
}

void func_1051(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_23[iVar0]), iVar1);
}

int func_1052()
{
	if ((((func_1050(1) || func_1050(0)) || func_1050(2)) || func_1050(4)) || func_1050(5))
	{
		return 1;
	}
	return 0;
}

void func_1053()
{
	if (func_1057())
	{
		func_1056(0);
		func_1056(1);
		func_1056(2);
		func_1056(3);
		func_1056(4);
		func_1056(5);
		func_1056(6);
		func_1056(7);
		if (func_1055(8))
		{
			func_1056(8);
		}
		if (func_1055(15))
		{
			if (func_1044(func_1054(), 3))
			{
				func_1043(func_1054(), 3);
			}
			func_1056(15);
		}
	}
}

int func_1054()
{
	if (func_1042())
	{
		Global_106070.f_28022[20 /*29*/].f_24[Global_14513] = 1;
	}
	return 20;
}

bool func_1055(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_21[iVar0], iVar1);
}

void func_1056(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_21[iVar0]), iVar1);
}

int func_1057()
{
	if ((((((((func_1055(0) || func_1055(1)) || func_1055(2)) || func_1055(3)) || func_1055(4)) || func_1055(5)) || func_1055(6)) || func_1055(7)) || func_1055(8))
	{
		return 1;
	}
	return 0;
}

void func_1058()
{
	if (func_1062())
	{
		func_1061(0);
		func_1061(1);
		func_1061(2);
		func_1061(3);
		func_1061(4);
		func_1061(5);
		func_1061(6);
		func_1061(7);
		func_1061(8);
		func_1061(9);
		func_1061(10);
		func_1061(11);
		func_1061(12);
		if (func_1060(13))
		{
			if (func_1044(func_1059(), 3))
			{
				func_1043(func_1059(), 3);
			}
			func_1061(13);
		}
	}
}

int func_1059()
{
	if (func_1042())
	{
		Global_106070.f_28022[76 /*29*/].f_24[Global_14513] = 1;
	}
	return 76;
}

bool func_1060(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return GAMEPLAY::IS_BIT_SET(Global_2524719.f_4883.f_19[iVar0], iVar1);
}

void func_1061(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_19[iVar0]), iVar1);
}

int func_1062()
{
	if ((((((((((((func_1060(0) || func_1060(1)) || func_1060(2)) || func_1060(3)) || func_1060(4)) || func_1060(5)) || func_1060(6)) || func_1060(7)) || func_1060(8)) || func_1060(9)) || func_1060(10)) || func_1060(11)) || func_1060(12))
	{
		return 1;
	}
	return 0;
}

void func_1063()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2524719.f_4883.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1064(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	GAMEPLAY::CLEAR_BIT(&(Global_2524719.f_4883.f_14[iVar0]), iVar1);
}

void func_1065()
{
	struct<14> Var0;
	
	Global_1666806 = { Var0 };
	Global_1666806.f_14 = 0;
	Global_1666806.f_15 = 0;
}

void func_1066()
{
}

int func_1067()
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
		if (func_981())
		{
			return 0;
		}
		if (func_979(155))
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

int func_1068(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_987();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1069())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_987();
					}
					else
					{
						return 0;
					}
				}
				if (func_981())
				{
					if (!bParam2)
					{
						func_987();
					}
					else
					{
						return 0;
					}
				}
				if (func_979(155))
				{
					if (!bParam2)
					{
						func_987();
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
					func_987();
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
				func_987();
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
			func_987();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_1069()
{
	return Global_1312834;
}

void func_1070(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_987();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_1071(int iParam0)
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

int func_1072(int iParam0, bool bParam1, bool bParam2)
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

